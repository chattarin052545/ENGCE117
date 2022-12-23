#include <stdio.h>

struct theDoctor {
    int age;
    int height;
    int weight;
};

void set( struct theDoctor  *state ); 

int main() {
    struct theDoctor d;
    set(&d);
    printf("theDoctor age is : %d year\n", d.age);
    printf("theDoctor height is : %d cm\n", d.height);
    printf("theDoctor weight is : %d kg\n", d.weight);
    return 0;
}

void set( struct theDoctor *state ){
    (*state).age = 35;
    (*state).height = 178;
    (*state).weight = 56;
}