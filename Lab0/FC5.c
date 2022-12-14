#include<stdio.h>
 int main()
 {
    int product,phone,order;
    printf("enter information\n");
    printf("add product in app line man\n");
    printf("wait order \n");
    do
    {
        printf("Have a o1rder?\n");
        printf("Press 1 : Have\n");
        printf("Press 2 : Nope\n");
        scanf("%d",&order);
    }while(order == 2);
    printf("make order\n");
    printf("Wait lineman\n");
    printf("Take money\n");
    }