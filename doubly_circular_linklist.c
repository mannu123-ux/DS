#include<stdio.h>
#include<malloc.h>
typedef struct doubly_circular_list
{
    int val;
    struct doubly_circular_list *next;
    struct doubly_circular_list *pre;
}dcl;

dcl*temp=NULL;
dcl*temp2=NULL;
dcl*temp3=NULL;
dcl*start=NULL;
dcl*end=NULL;

void insert_start(int x)
{
    temp=(dcl*)malloc(sizeof(dcl));
    if(temp==NULL)
        printf("Memory is not allocated\n");
    else
    {
        temp->val=x;
        temp->next=start;
        temp->pre=end;
        if(start==NULL)
        {
            start=temp;
            end=temp;
        }
        else
        {
            start->pre=temp;
            start->next=temp;
            temp->next=start;
            start=temp;

        }
    }
}

void insert_end(int x)
{
    temp=(dcl*)malloc(sizeof(dcl));
    if(temp==NULL)
        printf("memory is not allocated\n");
    else
    {
        temp->val=x;
        temp->next=start;
        temp->pre=end;
        if(start==NULL)
        {
            start=temp;
            end=temp;
        }
        else
        {
            end->pre=start;
            end->next=temp;
            temp->next=start;
            temp->pre=end;
            end=temp;
        }
    }
}

void delete_start()
{
    if(start==NULL)
        printf("Under flow\n");
    else
    {
        temp=start;
        printf("Delete = %d",temp->val);
        start=start->next;
        start->pre=NULL;
        free(temp);
    }
}

void delete_end()
{
    if(start==NULL)
        printf("Under flow\n");
    else
    {
        temp=end;
        printf("Delete = %d",temp->val);
        end=end->pre;
        end->next=NULL;
        free(temp);
    }
}

void insert_at(int num,int x)
{
    temp=start;
    while(temp->val!=num)
        temp=temp->next;
    temp2=temp->next;
    temp3=(dcl*)malloc(sizeof(dcl));
    temp3->val=x;
    temp3->next=temp2;
    temp3->pre=temp;
    temp->next=temp3;
    temp2->pre=temp3;
}

void delete_at(int num)
{
    temp=start;
    while(temp->val!=num)
        temp=temp->next;
    temp2=temp->pre;
    temp3=temp->next;
    temp2->next=temp3;
    temp3->pre=temp2;
    free(temp);
}


void display()
{
    temp=end;
    while(temp!=start)
    {
        printf("%d\n",temp->val);
        temp=temp->pre;
    }
    printf("%d\n",temp->val);
}

int main()
{
    int ele,ch,num=0;
    do
    {
        printf("Enter 1 for insert_start\n ");
        printf("Enter 2 for insert end\n");
        printf("Enter 3 for delete start\n");
        printf("Enter 4 for delete end\n");
        printf("Enter 5 for insert a number at any index\n");
        printf("Enter 6 for delete a number at any index\n");
        printf("Enter 7 for display");
        printf("Enter your choice\n");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1:
                printf("Enter the number you want to entered\n");
                scanf("%d",&ele);
                insert_start(ele);
                break;
            
            case 2:
                printf("Enter the number you want to entered\n");
                scanf("%d",&ele);
                insert_end(ele);
                break;

            case 3:
                delete_start();
                break;

            case 4:
                delete_end();
                break;
            
            case 5:
                printf("Enter the number[position]\n");
                scanf("%d",&ele);
                printf("enter the number [new node]\n");
                scanf("%d",&num);
                insert_at(ele,num);
                break;
            case 6:
                printf("Enter the number you want to delete\n");
                scanf("%d",&num);
                delete_at(num);
                break;

            case 7:
                display();
                break;

        }
        
    }while(ch<=7);
    
}




