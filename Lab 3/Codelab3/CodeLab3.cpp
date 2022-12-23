#include <stdio.h>
#include <string.h>
struct students {
    char name[20];
    int age;
    int F;
};

struct students findGPM(struct students student[], int count); 

int main() {
    struct students student[5];
    strcpy(student[0].name, "jonh");
    student[0].age = 29;
    student[0].F = 5;
    for( int i = 1 ; i < 5 ; i++ ){
        printf("student %d : name, age, F : ", i);
        scanf("%s %d %d", student[i].name, 
                         &student[i].age, 
                         &student[i].F);
    } 

    struct students Drop;
   Drop = findGPM( student, 5 );
    printf("Drop : %s %d %d", Drop.name, Drop.age, Drop.F);
    return 0;
}

struct students findGPM(struct students student[], int count) {
    int maxDrop, maxI;
    maxDrop = student[0].F;
    maxI = 0;
    for ( int i = 1 ; i < count ; i++ ){
        if ( student[i].F > maxDrop ){
            maxDrop = student[i].F;
            maxI = i;
        }
    } 
    return student[maxI];
}