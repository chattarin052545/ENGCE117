// นาย ฉัตริน ใสสี 65543206009-4 sec2
#include<stdio.h>
#include<string.h>

struct NumNode{
    int num;
    struct NumNode *next;
};
struct NumNode *AddNode(struct NumNode **startNode, int n);
void ShowAll    ( struct NumNode *walk);
void Showback   ( struct NumNode *walk);
void UpdateNode ( struct NumNode **update, int n ,int up);
void SwapNode   ( struct NumNode *swap);

int main(){
    struct NumNode *start, *now;
    start = NULL; 
    AddNode(&start,10);
    AddNode(&start,20);
    AddNode(&start,30);
    AddNode(&start,40);
    ShowAll(start); //10, 20, 30, 40
    UpdateNode(&start, 10, 99 );
    ShowAll(start); //99, 20, 30, 40
    UpdateNode(&start, 10, 98 );
    ShowAll(start); //99, 20, 30, 40
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
void UpdateNode( struct NumNode **update, int n,int up){
    struct NumNode *newNode = new NumNode;
    newNode = *update;
   while(newNode != NULL)
   {
    if(newNode->num == n){
        newNode->num= up;
        break;
    }
    else{
        newNode=newNode->next;
    }
   }
}

