#include <string.h>
#include <stdio.h>

void GetText( char **text ); 

int main(){
    char *str;
    GetText(&str);
    printf("%s", str);
    return 0;
}

void GetText( char **text ) { 
     *text = new char[50];
    printf("Enter your text : ");
    gets(*text); 
}