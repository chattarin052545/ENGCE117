#include <stdio.h>

char (*GetText2D( int num ))[16];

int main()
{
    char (*str)[16];
    int num;
    printf("you much do you want num ? : ");
    scanf("%d", &num);
    str = GetText2D(num);
    for ( int i = 0 ; i < num ; i++ ){
        printf("%s \n", str[i]);
    } 

    return 0;
}

char (*GetText2D( int num ))[16]{
    int i;
    char (*text)[16];
    for ( i = 0 ; i < num ; i++ ){
    	printf("Enter you text [%d] : ", i);
        scanf("%s", text[i]);
    } 

    return text;
}
