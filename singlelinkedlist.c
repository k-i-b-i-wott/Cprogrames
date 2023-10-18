#include<stdio.h>
#include<stdlib.h>
#include<malloc.h>
typedef struct node
{
    int num;
    struct node *ptr;
}ND;
ND *head;
int count =0;
void printing()
{
    
    ND *temp;
    temp=head;
    printf("The elements of the linked list are displayed below\n");
    while(temp=NULL)
    {
        printf("%d",temp->num);
        temp =temp->ptr;
    }
    printf("\n");
}
void insertion()
{
     ND *temp,*value;
    int i,val,c=0;
    printf("Enter the location to the new vnode(between 0 & %d)=",count);
    scanf("%d",&i);
    if(i>=0 && i<=count)
    {
    printf("\nEnter the value to be put the node=");
    scanf("%d",&val);
    temp=head;
    while((i-1) > c)
    {
        temp=temp->ptr;
        c++;
    }
    value=(ND*)malloc(sizeof(ND));
    if(1==0)
    {
        value->num=val;
        value->ptr=head;
        head=value;
    }
    else
    {
        value->num=val;
        value->ptr=temp->ptr;
        temp->ptr=value;
    }
    count++;
    }
}
void deletion()
{
    ND *temp,*value,*f;
    int i,c=1;
    printf("Enter the node to delete(between 1 & %d)=",count);
    scanf("%d",&i);
    if(i>=1 && i<=count)
    {
        temp =head;
        while((i-1)>c)
        {
            temp=temp->ptr;
            c++;
        }
        if(i==1)
        {
            f=head;
            head=head->ptr;
        }
        else{
            f=temp->ptr;
            temp->ptr=temp->ptr;
        }
        free(f);
        count--;
    }
}
int main(void)
{
    int choice=0;
    head=NULL;
    printf("This is a program to insert/delete/print numbers of linear linked list\n");
    while(choice!=5)
    {
        printf("Enter 1 to count No. of nodes\n");
        printf("Enter 2 to insert No. of nodes\n");
        printf("Enter 3 to delete No. of nodes\n");
        printf("Enter 4 to count No. of nodes\n");
        printf("Enter 5 to count No. of nodes\n");
        printf("Enter here\n");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1:
            printf("There are %d nodes\n",count);
            break;
            case 2:
            insertion();
            printf("There are %d nodes in now",count);
            break;
            case 3:
            if(count==0)
            {
                printf("The list is empty,Insert numbers first");
            }
            else
            {
                    deletion();
                    printf("Thre are %d nodes now",count);
                    printing();
                }
                break;
            case 4:
            if(count==0)
            {
                printf("The list is empty, Insert");
            } 
            else
               printing(); 
            break;
        default: 
            break; 
        }  
        }
        if(choice==5)
        {
            exit(0);
        }
        return 0;
    }


