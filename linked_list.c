#include<stdio.h>
#include<malloc.h>
typedef struct linked_list
{
    int val;
    struct linked_list*next;
}link;

link *temp=NULL;
link *temp2=NULL;
link *start=NULL;
link *end=NULL;

void insert_start(int x)
{
    temp=(link*)malloc(sizeof(link));
    if(temp==NULL)
        printf("memory is not allocated\n");
    else
    {
        temp->val=x;
        temp->next=start;
        if(start==NULL)
        {
            start=temp;
            end=temp;
        }
        else
            start=temp;
        
    }
}

void insert_end(int x)
{
    temp=(link*)malloc(sizeof(link));
    if(temp==NULL)
        printf("Memory is not allocated\n");
    else
    {
        temp->val=x;
        temp->next=NULL;
        if(end==NULL)
        {
            start=temp;
            end=temp;
        }
        else
        {
            end->next=temp;
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
        printf("Delete = %d\n",temp->val);
        start=start->next;
        free(temp);
    }
}

void delete_end()
{
    if(end==NULL)
        printf("Under flow\n");
    else
    {
        temp=start;
        while(temp->next!=end)
            temp=temp->next;
        printf("Delete = %d\n",end->val);
        temp->next=NULL;
        end=temp;

    }
}

void inser_at(int num,int x)
{
    temp=start;
    temp2=(link*)malloc(sizeof(link));
    
    while(temp->val!=num)
    {
        temp=temp->next;
    }

    temp2->val=x;
    temp2->next=temp->next;
    temp->next=temp2;
    
}

void delete_at(int num)
{
    temp=start;
    temp2=start;
    while(temp->val!=num)
    {
        temp2=temp;
        temp=temp->next;

    }
    temp2->next=temp->next;
    free(temp);
}

void display()
{
    temp=start;
    while(temp!=NULL)
    {
        printf("%d\n",temp->val);
        temp=temp->next;
    }
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
                inser_at(ele,num);
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


