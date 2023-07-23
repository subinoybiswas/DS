#include<stdio.h>
#include<stdlib.h>
typedef struct Node node;
struct Node{
int data;
node* previous;
node* next;
};
void nodetraversal(node* point){
    if(point->next!=NULL){
        printf("%d ",point->data);
        point=point->next;
        nodetraversal(point);
    }
    else{
        printf("%d ",point->data);
    }
};

int main(){
    node* first;
    node* second;
    node* third;
    node* fourth;

    first = (node*) malloc(sizeof(node));
    second = (node*) malloc(sizeof(node));
    third = (node*) malloc(sizeof(node));
    fourth = (node*) malloc(sizeof(node));
    
    first->data=234567;
    first->previous=NULL;
    first->next=second;

    second->data=345678;
    second->previous=first;
    second->next=third;

    third->data=334567;
    third->previous=second;
    third->next=fourth;

    fourth->data=45567;
    fourth->previous=third;
    fourth->next=NULL;
    nodetraversal(first);
    return 0;
}