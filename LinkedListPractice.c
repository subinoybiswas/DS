#include<stdio.h>
#include<stdlib.h>
typedef struct Node node;
struct Node{
int value;
node* next;
};

void nodetraversal(node* point){
    if(point->next!=NULL){
        printf("%d ",point->value);
        point=point->next;
        nodetraversal(point);
    }
    else{
        printf("%d ",point->value);
    }

}

int main(){
node* head;
node* first;
node* second;
head=(node*)malloc(sizeof(node));
first=(node*)malloc(sizeof(node));
second=(node*)malloc(sizeof(node));
head->value=10;
head->next=first;
first->value=100;
first->next=second;
second->value=1000;
second->next=NULL;
nodetraversal(head);
return 0;
}
