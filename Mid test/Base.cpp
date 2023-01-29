// นาย ฉัตริน ใสสี 65543206009-4 sec2
#include<stdio.h>

struct NumNode{
    int num;
    struct NumNode *next;//ใช้ชี้Nodeถัดไป
};
struct NumNode *AddNode(struct NumNode **walk, int n);
void ShowAll    ( struct NumNode *walk);

int main(){
    struct NumNode *start ;
    start = NULL; 
    AddNode(&start,10);
    AddNode(&start,20);
    AddNode(&start,30);
    AddNode(&start,40);
    ShowAll(start); //10, 20, 30, 40
    return 0;
}
struct NumNode *AddNode( struct NumNode **walk,int n){
 struct NumNode *newNode = new NumNode, *endNode = NULL;
 newNode->num = n;
 newNode->next = NULL;
 if (*walk == NULL){
    *walk = newNode;
 }
    else{
        endNode= *walk;
        while (endNode->next != NULL){
            endNode = endNode->next;
        }
        endNode->next = newNode;
    }
}
void ShowAll( struct NumNode *walk){
    while ( walk != NULL)
    {
    printf( "%d ",walk->num );
    walk = walk->next;
    }
    printf("\n");
}

