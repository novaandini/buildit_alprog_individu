#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    for (int i = 1; i < n; i++)
    {
        for (int j = i; j < n - 1; j++)
        {
            printf(" ");
        }
        
        for (int j = 1; j <= i * 2 - 1; j++)
        {
            printf("*");
        }
        printf("\n");
    }

    for (int k = 1; k < n - 1; k++)
    {
        printf(" ");
    }
    printf("*");
    return 0;
}