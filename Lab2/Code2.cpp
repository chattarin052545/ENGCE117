#include <string.h>
#include <stdio.h>
void GetText(char*text);
int main(){

    char text[50];
    GetText(text);
    printf("%s",text);
}
void GetText(char *text){
    printf("Enter your text:");
    gets(text);
}