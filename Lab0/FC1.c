#include<stdio.h>
 int main()
 {
    int MAMA,Pot,Water,Bowl,GasStove;
    printf("Put Pot on GasStove\n");
    printf("Open Gas\n");
    printf("Put Water in a Pot\n");
    printf("Wait for Boiling Water\n");
    do
    {
        printf("The Water is Boiling?\n");
        printf("Press 1 : The Water Boiling\n");
        printf("Press 2 : The Wat1er Not Boiling\n");
        scanf("%d",&Water);
    }while(Water == 2);
    printf("Put MAMA into a Pot\n");
    do
    {
        printf("Wait 5 minute\n");
        printf("Cover the Bowl\n");
        printf("Finish\n");
        scanf("%d",&MAMA);
    }while(MAMA);
    }