//#define _CRT_SECURE_NO_WARNINGS 1
//#include <windows.h>
//#include <process.h>
//#include <psapi.h>
//#include <tlhelp32.h>
//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//
//#pragma comment(lib, "psapi.lib")
//
//#define MAX_SCRIPTS 100
//#define MAX_PATH_LENGTH 260
//#define MAX_NAME_LENGTH 100
//#define WM_UPDATE_STATUS (WM_USER + 1)
//
//typedef struct {
//    char scriptPath[MAX_PATH_LENGTH];
//    char scriptProcessName[MAX_NAME_LENGTH];
//    char gameProcessName[MAX_NAME_LENGTH];
//    int checkCompletionType; // 0: game closed, 1: script closed, 2: game or script closed
//    BOOL closeScriptOnComplete;
//    BOOL closeGameOnComplete;
//    char launchArgs[MAX_PATH_LENGTH];
//} ScriptConfig;
//
//typedef struct {
//    ScriptConfig scripts[MAX_SCRIPTS];
//    int scriptCount;
//    int currentScriptIndex;
//    HANDLE currentScriptProcess;
//    BOOL isRunning;
//    HWND hListbox;
//    HWND hStatus;
//} AppState;
//
//AppState g_appState = { 0 };
//
//LRESULT CALLBACK WndProc(HWND hwnd, UINT msg, WPARAM wParam, LPARAM lParam);
//void UpdateScriptList(HWND hwnd);
//DWORD WINAPI ScriptRunnerThread(LPVOID lpParam);
//BOOL IsProcessRunning(const char* processName);
//void KillProcessByName(const char* processName);
//
//int WINAPI WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, LPSTR lpCmdLine, int nCmdShow)
//{
//    WNDCLASS wc = { 0 };
//    wc.lpfnWndProc = WndProc;
//    wc.hInstance = hInstance;
//    wc.lpszClassName = "GameScriptManager";
//    wc.hCursor = LoadCursor(NULL, IDC_ARROW);
//    wc.hbrBackground = (HBRUSH)(COLOR_WINDOW + 1);
//
//    RegisterClass(&wc);
//
//    HWND hwnd = CreateWindow(
//        "GameScriptManager",
//        "游戏自动化脚本管理器",
//        WS_OVERLAPPEDWINDOW,
//        CW_USEDEFAULT, CW_USEDEFAULT, 800, 600,
//        NULL, NULL, hInstance, NULL
//    );
//
//    if (!hwnd) {
//        return 0;
//    }
//
//    ShowWindow(hwnd, nCmdShow);
//    UpdateWindow(hwnd);
//
//    MSG msg = { 0 };
//    while (GetMessage(&msg, NULL, 0, 0)) {
//        TranslateMessage(&msg);
//        DispatchMessage(&msg);
//    }
//
//    return (int)msg.wParam;
//}
//
//LRESULT CALLBACK WndProc(HWND hwnd, UINT msg, WPARAM wParam, LPARAM lParam)
//{
//    switch (msg)
//    {
//    case WM_CREATE:
//    {
//        // 创建界面元素
//        int yPos = 10;
//        int controlHeight = 25;
//        int listHeight = 200;
//
//        // 脚本列表
//        g_appState.hListbox = CreateWindow(
//            "LISTBOX",
//            "",
//            WS_CHILD | WS_VISIBLE | WS_BORDER | LBS_NOTIFY,
//            10, yPos, 400, listHeight,
//            hwnd, (HMENU)101, ((LPCREATESTRUCT)lParam)->hInstance, NULL
//        );
//
//        yPos += listHeight + 10;
//
//        // 按钮区域
//        int buttonWidth = 80;
//        int buttonSpacing = 10;
//
//        CreateWindow(
//            "BUTTON",
//            "添加",
//            WS_CHILD | WS_VISIBLE,
//            10, yPos, buttonWidth, controlHeight,
//            hwnd, (HMENU)102, ((LPCREATESTRUCT)lParam)->hInstance, NULL
//        );
//
//        CreateWindow(
//            "BUTTON",
//            "编辑",
//            WS_CHILD | WS_VISIBLE,
//            10 + buttonWidth + buttonSpacing, yPos, buttonWidth, controlHeight,
//            hwnd, (HMENU)103, ((LPCREATESTRUCT)lParam)->hInstance, NULL
//        );
//
//        CreateWindow(
//            "BUTTON",
//            "删除",
//            WS_CHILD | WS_VISIBLE,
//            10 + 2 * (buttonWidth + buttonSpacing), yPos, buttonWidth, controlHeight,
//            hwnd, (HMENU)104, ((LPCREATESTRUCT)lParam)->hInstance, NULL
//        );
//
//        CreateWindow(
//            "BUTTON",
//            "上移",
//            WS_CHILD | WS_VISIBLE,
//            10 + 3 * (buttonWidth + buttonSpacing), yPos, buttonWidth, controlHeight,
//            hwnd, (HMENU)109, ((LPCREATESTRUCT)lParam)->hInstance, NULL
//        );
//
//        CreateWindow(
//            "BUTTON",
//            "下移",
//            WS_CHILD | WS_VISIBLE,
//            10 + 4 * (buttonWidth + buttonSpacing), yPos, buttonWidth, controlHeight,
//            hwnd, (HMENU)110, ((LPCREATESTRUCT)lParam)->hInstance, NULL
//        );
//
//        yPos += controlHeight + 10;
//
//        // 运行控制按钮
//        CreateWindow(
//            "BUTTON",
//            "开始运行",
//            WS_CHILD | WS_VISIBLE,
//            10, yPos, buttonWidth, controlHeight,
//            hwnd, (HMENU)105, ((LPCREATESTRUCT)lParam)->hInstance, NULL
//        );
//
//        CreateWindow(
//            "BUTTON",
//            "停止运行",
//            WS_CHILD | WS_VISIBLE,
//            10 + buttonWidth + buttonSpacing, yPos, buttonWidth, controlHeight,
//            hwnd, (HMENU)106, ((LPCREATESTRUCT)lParam)->hInstance, NULL
//        );
//
//        yPos += controlHeight + 10;
//
//        // 状态栏
//        g_appState.hStatus = CreateWindow(
//            "STATIC",
//            "就绪",
//            WS_CHILD | WS_VISIBLE,
//            10, yPos, 760, controlHeight,
//            hwnd, (HMENU)107, ((LPCREATESTRUCT)lParam)->hInstance, NULL
//        );
//
//        UpdateScriptList(hwnd);
//        break;
//    }
//
//    case WM_COMMAND:
//    {
//        int controlId = LOWORD(wParam);
//        int notifyCode = HIWORD(wParam);
//
//        switch (controlId)
//        {
//        case 101: // 列表框通知
//            if (notifyCode == LBN_DBLCLK) {
//                SendMessage(hwnd, WM_COMMAND, MAKEWPARAM(103, BN_CLICKED), 0); // 编辑
//            }
//            break;
//
//        case 102: // 添加
//        {
//            DialogBox(((LPCREATESTRUCT)(((LPMDICREATESTRUCT)lParam)->lParam))->hInstance,
//                MAKEINTRESOURCE(1001), hwnd, EditDialogProc);
//            UpdateScriptList(hwnd);
//            break;
//        }
//
//        case 103: // 编辑
//        {
//            int selectedIndex = SendMessage(g_appState.hListbox, LB_GETCURSEL, 0, 0);
//            if (selectedIndex != LB_ERR && selectedIndex < g_appState.scriptCount) {
//                g_appState.currentScriptIndex = selectedIndex;
//                DialogBox(((LPCREATESTRUCT)(((LPMDICREATESTRUCT)lParam)->lParam))->hInstance,
//                    MAKEINTRESOURCE(1001), hwnd, EditDialogProc);
//                UpdateScriptList(hwnd);
//            }
//            break;
//        }
//
//        case 104: // 删除
//        {
//            int selectedIndex = SendMessage(g_appState.hListbox, LB_GETCURSEL, 0, 0);
//            if (selectedIndex != LB_ERR && selectedIndex < g_appState.scriptCount) {
//                // 移除选定的脚本
//                for (int i = selectedIndex; i < g_appState.scriptCount - 1; i++) {
//                    g_appState.scripts[i] = g_appState.scripts[i + 1];
//                }
//                g_appState.scriptCount--;
//                UpdateScriptList(hwnd);
//            }
//            break;
//        }
//
//        case 105: // 开始运行
//        {
//            if (!g_appState.isRunning && g_appState.scriptCount > 0) {
//                g_appState.isRunning = TRUE;
//                _beginthread(ScriptRunnerThread, 0, &g_appState);
//                SetWindowText(g_appState.hStatus, "正在运行...");
//            }
//            break;
//        }
//
//        case 106: // 停止运行
//        {
//            if (g_appState.isRunning) {
//                g_appState.isRunning = FALSE;
//                if (g_appState.currentScriptProcess) {
//                    TerminateProcess(g_appState.currentScriptProcess, 0);
//                    CloseHandle(g_appState.currentScriptProcess);
//                    g_appState.currentScriptProcess = NULL;
//                }
//                SetWindowText(g_appState.hStatus, "已停止");
//            }
//            break;
//        }
//
//        case 109: // 上移
//        {
//            int selectedIndex = SendMessage(g_appState.hListbox, LB_GETCURSEL, 0, 0);
//            if (selectedIndex > 0 && selectedIndex < g_appState.scriptCount) {
//                // 交换相邻的两个脚本
//                ScriptConfig temp = g_appState.scripts[selectedIndex];
//                g_appState.scripts[selectedIndex] = g_appState.scripts[selectedIndex - 1];
//                g_appState.scripts[selectedIndex - 1] = temp;
//
//                SendMessage(g_appState.hListbox, LB_DELETESTRING, selectedIndex, 0);
//                SendMessage(g_appState.hListbox, LB_INSERTSTRING, selectedIndex - 1,
//                    (LPARAM)g_appState.scripts[selectedIndex - 1].scriptPath);
//                SendMessage(g_appState.hListbox, LB_SETCURSEL, selectedIndex - 1, 0);
//            }
//            break;
//        }
//
//        case 110: // 下移
//        {
//            int selectedIndex = SendMessage(g_appState.hListbox, LB_GETCURSEL, 0, 0);
//            if (selectedIndex >= 0 && selectedIndex < g_appState.scriptCount - 1) {
//                // 交换相邻的两个脚本
//                ScriptConfig temp = g_appState.scripts[selectedIndex];
//                g_appState.scripts[selectedIndex] = g_appState.scripts[selectedIndex + 1];
//                g_appState.scripts[selectedIndex + 1] = temp;
//
//                SendMessage(g_appState.hListbox, LB_DELETESTRING, selectedIndex, 0);
//                SendMessage(g_appState.hListbox, LB_INSERTSTRING, selectedIndex + 1,
//                    (LPARAM)g_appState.scripts[selectedIndex + 1].scriptPath);
//                SendMessage(g_appState.hListbox, LB_SETCURSEL, selectedIndex + 1, 0);
//            }
//            break;
//        }
//        }
//        break;
//    }
//
//    case WM_UPDATE_STATUS:
//    {
//        SetWindowText(g_appState.hStatus, (LPCTSTR)lParam);
//        break;
//    }
//
//    case WM_DESTROY:
//    {
//        PostQuitMessage(0);
//        break;
//    }
//
//    default:
//        return DefWindowProc(hwnd, msg, wParam, lParam);
//    }
//    return 0;
//}
//
//void UpdateScriptList(HWND hwnd)
//{
//    SendMessage(g_appState.hListbox, LB_RESETCONTENT, 0, 0);
//    for (int i = 0; i < g_appState.scriptCount; i++) {
//        SendMessage(g_appState.hListbox, LB_ADDSTRING, 0, (LPARAM)g_appState.scripts[i].scriptPath);
//    }
//}
//
//DWORD WINAPI ScriptRunnerThread(LPVOID lpParam)
//{
//    AppState* state = (AppState*)lpParam;
//
//    for (int i = 0; i < state->scriptCount && state->isRunning; i++) {
//        if (!state->isRunning) break;
//
//        ScriptConfig* config = &state->scripts[i];
//
//        // 更新状态
//        char statusText[256];
//        sprintf_s(statusText, sizeof(statusText), "正在运行脚本 %d/%d: %s",
//            i + 1, state->scriptCount, config->scriptPath);
//        PostMessage(state->hStatus, WM_UPDATE_STATUS, 0, (LPARAM)statusText);
//
//        // 启动脚本进程
//        STARTUPINFO si = { 0 };
//        PROCESS_INFORMATION pi = { 0 };
//        si.cb = sizeof(si);
//
//        char commandLine[MAX_PATH_LENGTH * 2];
//        if (strlen(config->launchArgs) > 0) {
//            sprintf_s(commandLine, sizeof(commandLine), "\"%s\" %s",
//                config->scriptPath, config->launchArgs);
//        }
//        else {
//            sprintf_s(commandLine, sizeof(commandLine), "\"%s\"", config->scriptPath);
//        }
//
//        if (CreateProcess(NULL, commandLine, NULL, NULL, FALSE, 0, NULL, NULL, &si, &pi)) {
//            state->currentScriptProcess = pi.hProcess;
//
//            // 等待脚本完成或满足条件
//            DWORD waitResult = WAIT_TIMEOUT;
//            while (waitResult == WAIT_TIMEOUT && state->isRunning) {
//                // 检查完成条件
//                BOOL gameClosed = !IsProcessRunning(config->gameProcessName);
//                BOOL scriptClosed = WaitForSingleObject(pi.hProcess, 100) != WAIT_TIMEOUT;
//
//                if (config->checkCompletionType == 0 && gameClosed) { // 游戏关闭
//                    break;
//                }
//                else if (config->checkCompletionType == 1 && scriptClosed) { // 脚本关闭
//                    break;
//                }
//                else if (config->checkCompletionType == 2 && (gameClosed || scriptClosed)) { // 游戏或脚本关闭
//                    break;
//                }
//            }
//
//            // 关闭脚本进程（如果需要）
//            if (config->closeScriptOnComplete) {
//                TerminateProcess(pi.hProcess, 0);
//            }
//
//            // 关闭游戏进程（如果需要）
//            if (config->closeGameOnComplete) {
//                KillProcessByName(config->gameProcessName);
//            }
//
//            CloseHandle(pi.hProcess);
//            CloseHandle(pi.hThread);
//            state->currentScriptProcess = NULL;
//        }
//        else {
//            // 启动失败
//            sprintf_s(statusText, sizeof(statusText), "启动脚本失败: %s", config->scriptPath);
//            PostMessage(state->hStatus, WM_UPDATE_STATUS, 0, (LPARAM)statusText);
//        }
//    }
//
//    if (state->isRunning) {
//        PostMessage(state->hStatus, WM_UPDATE_STATUS, 0, (LPARAM)"所有脚本执行完毕");
//    }
//    state->isRunning = FALSE;
//
//    return 0;
//}
//
//BOOL IsProcessRunning(const char* processName)
//{
//    DWORD processes[1024], needed, count;
//
//    if (!EnumProcesses(processes, sizeof(processes), &needed)) {
//        return FALSE;
//    }
//
//    count = needed / sizeof(DWORD);
//
//    for (unsigned int i = 0; i < count; i++) {
//        if (processes[i] != 0) {
//            HANDLE hProcess = OpenProcess(PROCESS_QUERY_INFORMATION | PROCESS_VM_READ, FALSE, processes[i]);
//            if (hProcess != NULL) {
//                HMODULE hMod;
//                DWORD cbNeeded;
//
//                if (EnumProcessModules(hProcess, &hMod, sizeof(hMod), &cbNeeded)) {
//                    char szProcessName[MAX_PATH] = "";
//                    GetModuleBaseNameA(hProcess, hMod, szProcessName, sizeof(szProcessName));
//
//                    if (strcmp(szProcessName, processName) == 0) {
//                        CloseHandle(hProcess);
//                        return TRUE;
//                    }
//                }
//                CloseHandle(hProcess);
//            }
//        }
//    }
//
//    return FALSE;
//}
//
//void KillProcessByName(const char* processName)
//{
//    PROCESSENTRY32 pe32;
//    pe32.dwSize = sizeof(PROCESSENTRY32);
//
//    HANDLE hSnapshot = CreateToolhelp32Snapshot(TH32CS_SNAPPROCESS, 0);
//    if (hSnapshot == INVALID_HANDLE_VALUE) {
//        return;
//    }
//
//    if (Process32First(hSnapshot, &pe32)) {
//        do {
//            if (strcmp(pe32.szExeFile, processName) == 0) {
//                HANDLE hProcess = OpenProcess(PROCESS_TERMINATE, FALSE, pe32.th32ProcessID);
//                if (hProcess != NULL) {
//                    TerminateProcess(hProcess, 1);
//                    CloseHandle(hProcess);
//                }
//            }
//        } while (Process32Next(hSnapshot, &pe32));
//    }
//
//    CloseHandle(hSnapshot);
//}
//
//// 编辑对话框过程
//INT_PTR CALLBACK EditDialogProc(HWND hDlg, UINT message, WPARAM wParam, LPARAM lParam)
//{
//    static ScriptConfig* config = NULL;
//
//    switch (message)
//    {
//    case WM_INITDIALOG:
//    {
//        config = &g_appState.scripts[g_appState.currentScriptIndex];
//
//        // 设置初始值
//        SetDlgItemText(hDlg, 201, config->scriptPath);
//        SetDlgItemText(hDlg, 202, config->scriptProcessName);
//        SetDlgItemText(hDlg, 203, config->gameProcessName);
//        SetDlgItemText(hDlg, 207, config->launchArgs);
//
//        // 设置完成类型
//        SendDlgItemMessage(hDlg, 204, CB_ADDSTRING, 0, (LPARAM)"当游戏被关闭");
//        SendDlgItemMessage(hDlg, 204, CB_ADDSTRING, 0, (LPARAM)"当脚本被关闭");
//        SendDlgItemMessage(hDlg, 204, CB_ADDSTRING, 0, (LPARAM)"当游戏或脚本被关闭");
//        SendDlgItemMessage(hDlg, 204, CB_SETCURSEL, config->checkCompletionType, 0);
//
//        // 设置复选框
//        SendDlgItemMessage(hDlg, 205, BM_SETCHECK, config->closeScriptOnComplete ? BST_CHECKED : BST_UNCHECKED, 0);
//        SendDlgItemMessage(hDlg, 206, BM_SETCHECK, config->closeGameOnComplete ? BST_CHECKED : BST_UNCHECKED, 0);
//
//        return (INT_PTR)TRUE;
//    }
//
//    case WM_COMMAND:
//    {
//        switch (LOWORD(wParam))
//        {
//        case IDOK:
//        {
//            // 获取输入值
//            GetDlgItemText(hDlg, 201, config->scriptPath, MAX_PATH_LENGTH);
//            GetDlgItemText(hDlg, 202, config->scriptProcessName, MAX_NAME_LENGTH);
//            GetDlgItemText(hDlg, 203, config->gameProcessName, MAX_NAME_LENGTH);
//            GetDlgItemText(hDlg, 207, config->launchArgs, MAX_PATH_LENGTH);
//
//            config->checkCompletionType = (int)SendDlgItemMessage(hDlg, 204, CB_GETCURSEL, 0, 0);
//            config->closeScriptOnComplete = (SendDlgItemMessage(hDlg, 205, BM_GETCHECK, 0, 0) == BST_CHECKED);
//            config->closeGameOnComplete = (SendDlgItemMessage(hDlg, 206, BM_GETCHECK, 0, 0) == BST_CHECKED);
//
//            EndDialog(hDlg, LOWORD(wParam));
//            return (INT_PTR)TRUE;
//        }
//
//        case IDCANCEL:
//        {
//            EndDialog(hDlg, LOWORD(wParam));
//            return (INT_PTR)TRUE;
//        }
//
//        case 208: // 浏览按钮
//        {
//            OPENFILENAME ofn = { 0 };
//            char fileName[MAX_PATH_LENGTH] = "";
//
//            ofn.lStructSize = sizeof(ofn);
//            ofn.hwndOwner = hDlg;
//            ofn.lpstrFile = fileName;
//            ofn.nMaxFile = MAX_PATH_LENGTH;
//            ofn.lpstrFilter = "可执行文件\0*.exe\0批处理文件\0*.bat\0所有文件\0*.*\0\0";
//            ofn.nFilterIndex = 1;
//            ofn.lpstrFileTitle = NULL;
//            ofn.nMaxFileTitle = 0;
//            ofn.lpstrInitialDir = NULL;
//            ofn.Flags = OFN_PATHMUSTEXIST | OFN_FILEMUSTEXIST;
//
//            if (GetOpenFileName(&ofn)) {
//                SetDlgItemText(hDlg, 201, fileName);
//            }
//            return (INT_PTR)TRUE;
//        }
//        }
//        break;
//    }
//    }
//    return (INT_PTR)FALSE;
//}


//atoi函数
#include <stdio.h>
#include <stdlib.h>

//int main()
//{
//	char arr[] = "123";
//	int i = atoi(arr);
//	printf("%d", i);
//	return 0;
//}


//模拟实现atoi函数
//#include <assert.h>
//int my_atoi(const char* p)
//{
//	assert(p);
//	int i = 0;
//	int num = 0;
//	int sign = 1;
//	while (*(p + i))
//	{
//		if (*(p + i) == ' ')
//			i++;
//		else if (*(p + i) == '-')
//		{
//			sign = -1;
//			i++;
//		}
//		else
//		{
//			while (*(p + i) >= '0' && *(p + i) <= '9')
//			{
//				num = num * 10 + (*(p + i) - '0');
//				i++;
//			}
//		}
//	}
//	return num * sign;
//	if (num = 0)
//		return 0;
//}
//int main()
//{
//	char arr[] = "123";
//	int i = my_atoi(arr);
//	printf("%d", i);
//	return 0;
//}


#include<stdio.h>
#include<assert.h>
#include<ctype.h>
#include<stdlib.h>
enum State
{
	VAILD,
	INVAILD
}Sta = INVAILD;//创造变量默认为非法




int my_atoi(const char* str)
{
	assert(str);
	if (*str == '\0')
	{
		return 0;
	}
	while (isspace(*str))
	{
		str++;
	}
	int flag = 1;
	if (*str == '+')
	{
		flag = 1;
		str++;
	}
	else if (*str == '-')
	{
		flag = -1;
		str++;
	}
	long long ret = 0;
	while (*str != '\0')
	{
		if (isdigit(*str))
		{
			ret = ret * 10 + flag * (*str - '0');//减去字符0，才是数字0
			if (ret > INT_MAX || ret < INT_MIN)
			{
				return 0;
			}
		}
		else
		{
			return (int)ret;//强制类型转化为int（函数的返回值是int）
		}
		str++;
	}
	if (*str == '\0')
	{
		Sta = VAILD; //正常转换完了，到末尾的 \0
	}
	return (int)ret;




}
int main()
{
	char arr[20] = "1234";
	int ret = my_atoi(arr);
	if (Sta == VAILD)
	{
		printf("合法转换:%d\n", ret);
	}
	else if (Sta == INVAILD)
	{
		printf("非法转换:%d\n", ret);
	}
	return 0;
}