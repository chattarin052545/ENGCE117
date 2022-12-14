#include <stdio.h>
int main(){
    int g[3][4]= {
        {1,2,3,4},
        {5,6,7,8},
        {9,10,11,12}
 };
int(*h)[3] =g;
h[1][3] = 50;
 for ( int a = 0; a < 3 ; a++){
 for ( int b = 0; b < 4 ; b++){
    printf("%d ", g[a][b]);
 }
    printf("\n");
 }
 return 0;
}

    

    