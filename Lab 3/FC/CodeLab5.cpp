#include <stdio.h>
#include <string.h>
struct ghost {
    char name[20];
    int DEAD;
    int scary;
};
struct ghost *findscary(struct ghost people[], int count); 

int main(){
    struct ghost people[5];
    strcpy(people[0].name, "NANA");
    people[0].DEAD = 87;
    people[0].scary = 867;
    for( int i = 1 ; i < 5 ; i++ ){
        printf("ghost %d : name, DEAD, scary : ", i);
        scanf("%s %d %d", people[i].name, 
                         &people[i].DEAD, 
                         &people[i].scary);
    } 

    struct ghost *mostscary;
    mostscary = findscary( people, 5 );
    printf("scary very very : %s %d %d", (*mostscary).name, 
                                         (*mostscary).DEAD, 
                                         (*mostscary).scary);
    return 0;
}
struct ghost *findscary(struct ghost people[], int count){
    int maxscary, maxI;
    maxscary = people[0].scary;
    maxI = 0;
    for ( int i = 1 ; i < count ; i++ ){
        if ( people[i].scary > maxscary ){
            maxscary = people[i].scary;
            maxI = i;
        }
    } 
    return &people[maxI];
}