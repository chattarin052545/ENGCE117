// นาย ฉัตริน ใสสี 65543206009-4 sec2
#include<stdio.h>
#include<string.h>

struct NumNode{
    int num;
    struct NumNode *next;
};
struct NumNode *AddNode(struct NumNode **walk, int n);
void ShowAll    ( struct NumNode *walk);
void SwapNode   ( struct NumNode **head, int Pa, int Pb);

int main(){
    struct NumNode *start;
    start = NULL; 
    AddNode(&start,10);
    AddNode(&start,20);
    AddNode(&start,30);
    AddNode(&start,40);
    ShowAll(start); //10, 20, 30, 40
    SwapNode(&start, 20, 30);
    ShowAll(start); //10, 30, 20, 40
    SwapNode(&start, 40, 10);
    ShowAll(start); //40, 30, 20, 10
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
void swap(NumNode*& a, NumNode*& b)
{
    NumNode* temp = a;
    a = b;
    b = temp;
}
void SwapNode( struct NumNode **head, int Pa,int Pb ){
      if ( Pa == Pb)
        return;
    NumNode **a = NULL, **b = NULL;
    while (*head) {
        if ((*head)->num == Pa)
            a = head;
        else if ((*head)->num == Pb)
            b = head;
        head = &((*head)->next);
    }
    if (a && b) {
        swap(*a, *b);
        swap(((*a)->next), ((*b)->next));
    }
}