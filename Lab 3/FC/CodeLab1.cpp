#include <stdio.h>

struct Mo {
    int age;
    int height;
    int weight;
};

int main() {
    struct Mo body;
    body.age = 20;
    body.height = 168;
    body.weight = 48;
    printf("Mo age is : %d year\n", body.age );
    printf("Mo height is : %d cm\n", body.height );
    printf("Mo weight is: %d kg\n", body.weight );
    return 0;
}