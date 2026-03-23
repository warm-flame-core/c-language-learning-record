#define _CRT_SECURE_NO_WARNINGS 1
#include "SepList.h"
#include "Contact.h"

// 初始化通讯录
void ContactInit(Contact* con)
{
    SLInit(con);
}

// 销毁通讯录
void ContactDestroy(Contact* con)
{
    SLDestroy(con);
}

void ContactAdd(Contact* con)
{
    PenoInfo info;
    printf("请输入要添加的联系人姓名:\n");
    scanf("%s", info.name);

    printf("请输入要添加的联系人性别:\n");
    scanf("%s", info.gender);

    printf("请输入要添加的联系人年龄:\n");
    scanf("%d", &info.age);

    printf("请输入要添加的联系人电话:\n");
    scanf("%s", info.tel);

    printf("请输入要添加的联系人住址:\n");
    scanf("%s", info.addr);

    SLPushBack(con, info);
}

int FindByName(Contact* con, char name[])
{
    for (int i = 0; i < con->size; i++)
    {
        if (strcmp(con->arr[i].name, name) == 0)
        {
            return i;
        }
    }
    return -1;
}

void ContactDel(Contact* con)
{
    char name[NAME_MAX];
    printf("请输入要删除联系人的姓名:");
    // 修复：数组名无需&
    scanf("%s", name);
    int result = FindByName(con, name); 
    if (result >= 0)
    {
        SLErase(con, result);
        printf("删除成功\n");
    }
    else
    {
        printf("联系人不存在\n");
    }
}

void ContactModify(Contact* con)
{
    char name[NAME_MAX];
    printf("请输入要修改联系人的姓名:");
    scanf("%s", name);
    int result = FindByName(con, name);
    if (result >= 0)
    {
        printf("请输入姓名：\n");
        scanf("%s", con->arr[result].name);

        printf("请输入性别：\n");
        scanf("%s", con->arr[result].gender);

        printf("请输入年龄：\n");
        scanf("%d", &con->arr[result].age);

        printf("请输入电话：\n");
        scanf("%s", con->arr[result].tel);

        printf("请输入地址：\n");
        scanf("%s", con->arr[result].addr);

        printf("修改联系人成功\n");
    }
    else
    {
        printf("联系人不存在\n");
    }
}

// 显示所有联系人
void ContactShow(Contact* con)
{
    printf("%-8s %-4s %-4s %-11s %-20s\n", "姓名", "性别", "年龄", "电话", "地址"); // 优化格式，避免挤在一起
    for (int i = 0; i < con->size; i++)
    {
        printf("%-8s %-4s %-4d %-11s %-20s\n",
            con->arr[i].name,
            con->arr[i].gender,
            con->arr[i].age,
            con->arr[i].tel,
            con->arr[i].addr
        );
    }
}

// 查找联系人
void ContactFind(Contact* con)
{
    char name[NAME_MAX];
    printf("请输入要查找联系人的姓名:");
    // 修复：数组名无需&
    scanf("%s", name);
    int result = FindByName(con, name); // 修复拼写错误：reasult → result
    if (result >= 0)
    {
        // 优化格式，和显示函数保持一致
        printf("%-8s %-4s %-4d %-11s %-20s\n",
            con->arr[result].name,
            con->arr[result].gender,
            con->arr[result].age,
            con->arr[result].tel,
            con->arr[result].addr
        );
    }
    else
    {
        printf("联系人不存在\n");
    }
}