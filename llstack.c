#include <stdio.h>
#include <stdlib.h>
int a[10],top=-1;
int n;
void push();
void pop();
void display();

struct node
{
int data;
struct node *link;
};
struct node *head;
void main ()
{
    int choice = 0;
    while(choice != 4)
    {
        printf("\n----------------------------------------------\n");
        printf("\n1.Push\n2.Pop\n3.Show\n4.Exit");
        printf("\n Enter your choice  :");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1:
            {
                push();
                break;
            }
            case 2:
            {
                pop();
                break;
            }
            case 3:
            {
                display();
                break;
            }
            case 4:
            {
                printf("Exiting....");
                break;
            }
            default:
            {
                printf("************Please Enter dataid choice*************** ");
            }
        };
    }
}

void push ()
{
    int val;
    struct node *i = malloc(sizeof(struct node));
    
        printf("Enter the value:");
        scanf("%d",&val);
        if(head==NULL)
        {
            i->data = val;
            i -> link = NULL;
            head=i;
        }
        else
        {
            i->data = val;
            i->link = head;
            head=i;

        }
        printf("Item pushed");

    
}

void pop()
{
    if (head == NULL)
    {
        printf("********** stack is empty : Underflow********");
    }
    else
    {
        head = head->link;

    }
}
void display()
{
   
    struct node *start;
    start=head;
    if(start == NULL)
    {
        printf("Stack is empty\n");
    }
    else
    {
        printf("Printing Stack elements \n");
        while(start!=NULL)
        {
            printf("%d\n",start->data);
            start = start->link;
        }
    }
}
