#include <stdio.h>
#include <string.h>

struct human {
    char name[20];
    int age;
    int weight;
};

int main(){
    struct human *a;
    struct human b;

    strcpy(b.name , "Emo");

    b.age = 20;
    b.weight = 48;
    a = &b;

    printf("%s\n", (*a).name);
    printf("%d year\n", (*a).age);
    printf("%d kg\n", (*a).weight);

    a->age = 99;

    printf("%d year\n", (*a).age);
    printf("%d year\n", b.age);
    
    return 0;
}