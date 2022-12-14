int main(){
    int *a;
    int var=10;
    a= &var;
    
    printf("*a=5d\n", *a);

    var =20;
    printf("*a =%d\n", *a);
    *a=30;
    printf("*a= %d\n", *a);
    printf("var= %d\n", var);
    return 0;
}