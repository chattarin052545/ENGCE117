#include <stdio.h>
#include <string.h>
char *GetText();
int main()
{
    char text[50];
    strcpy( text, GetText() );
    printf("%s", text);
    return 0;
}
char *GetText(){
    char *text = new char[50];
    printf("Enter your text : ");
    gets(text);
    return text;
}