#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int main() {
    int n = 0;
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (j == i || j == n - 1 - i) 
            {
                printf("*");
            }
            else 
            {
                printf(" ");
            }
        }
        printf("\n"); 
    }
    return 0;
}
