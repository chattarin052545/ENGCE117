// นาย ฉัตริน ใสสี 65543206009-4 sec2
#include<stdio.h>
#include<string.h>

struct NumNode{
    int num;
    struct NumNode *next;
};
struct NumNode *AddNode(struct NumNode **startNode, int n);
void ShowAll    ( struct NumNode *walk);
void ShowBack   ( struct NumNode *walk);

int main(){
    struct NumNode *start, *now;
    start = NULL; 
    AddNode(&start,10);
    AddNode(&start,20);
    AddNode(&start,30);
    AddNode(&start,40);
    ShowAll(start); //10, 20, 30, 40
    ShowBack(start);//40 ,30 ,20 ,10
    return 0;
}
struct NumNode *AddNode( struct NumNode **startNode,int n){
 struct NumNode *newNode = new NumNode, *endNode = NULL;
 newNode->num = n;
 newNode->next = NULL;
 if (*startNode == NULL){
    *startNode = newNode;
 }
    else{
        endNode= *startNode;
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
void ShowBack ( struct NumNode *walk){
    NumNode *startNode = NULL, *next = NULL;
     while (walk != NULL) {
            next = walk->next;
            walk->next = startNode;
            startNode = walk;
            walk = next;
        }
        walk = startNode;
        ShowAll(walk);
    }

