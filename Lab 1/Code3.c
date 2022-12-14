#include <stdio.h>
int multiply(int x,int y);
int opearation(int x,int y,int (*function)(int,int));
int main(){
    int x,y,sum;
    printf("Enter number:");
    scanf("%d",&x);
    printf("Enter add number:");
    scanf("%d",&y);
    sum=opearation(x,y,multiply);
    printf("sum=%d",sum);
    return 0;
}
int multiply(int x, int y){
    return x*y;
}
 int opearation(int x,int y,int(*function)(int,int)){
 return(*function)(x,y);
 }