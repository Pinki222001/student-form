#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *prevnode,*nextnode;
};
struct node *newnode;
struct node *create()
{
    int x;
    newnode=(struct node *)malloc(sizeof(struct node));
    newnode->prevnode=NULL;
    newnode->nextnode=NULL;
    printf("enter the data(0 for no data) :");
    scanf("%d",&x);
    if(x==0){
        return 0;
    }
    else{
        newnode->data=x;
        printf("\t=> left data of  %d is :",x);
        newnode->prevnode=create();
        printf("\t=> right data of %d is :",x);
        newnode->nextnode=create();
    }
}

int main()
{
    struct node *root;
    root=NULL;
    root=create();
    return 0;
}

