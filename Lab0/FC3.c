#include<stdio.h>
 int main()
 {
    int money,N,Y;
    printf("go to market\n");
    printf("buy product\n");
    char egg,Pork,rice;
    do
    {
    printf("Check product\n");
    printf(" Press Y : Yes\n");
    printf(" Press N : No\n");
    scanf("%d", &egg,Pork,rice);
    }while (egg == N);
    printf("go back to home\n");
 }