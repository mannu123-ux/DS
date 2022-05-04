#include<stdio.h>
#include<malloc.h>
typedef struct dqueue
{
    int val;
    struct dqueue*next;
}que;

que*temp=NULL;
que*r=NULL;
que*f=NULL;

void insert_front(int x)
{
    temp=(que*)malloc(sizeof(que));
    if(temp==NULL)
        printf("memory is ot allocated\n");
    else
    {
        temp->val=x;
        temp->next=f;
        if(f==NULL)
        {
            f=temp;
            r=temp;
        }
        else
            f=temp;
    }
}

void insert_rear(int x)
{
    temp=(que*)malloc(sizeof(que));
    if(temp==NULL)
        printf("Memory is not allocated\n");
    else{
        temp->val=x;
        temp->next=NULL;
        if(r==NULL)
        {
            f=temp;
            r=temp;
        }
        else
        {
            r->next=temp;
            r=temp;
        }
            
    }
}

void delete_front()
{
    if(f==NULL)
        printf("Under flow\n");
    else{
        temp=f;
        printf("Delete = %d\n",temp->val);
        f=f->next;
        free(temp);
    }
}

void delete_rear()
{
    if(r==NULL)
        printf("Under flow\n");
    else 
    {
        temp=f;
        while (temp->next!=r)
            temp=temp->next;

        printf("Delete = %d\n",r->val);
        temp->next=NULL;
        r=temp;
        
    }
}

void display()
{
     temp=f;
     while(temp!=NULL)
     {
         printf("%d\n",temp->val);
         temp=temp->next;
     }
}

int main()
{
    int ele,ch;
    do
    {
        printf("Enter 1 for insert_front\n ");
        printf("Enter 2 for insert rear\n");
        printf("Enter 3 for delete front\n");
        printf("Enter 4 for delete rear\n");
        printf("Enter 5 for display\n");
        printf("Enter your choice\n");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1:
                printf("Enter the number you want to entered\n");
                scanf("%d",&ele);
                insert_front(ele);
                break;
            
            case 2:
                printf("Enter the number you want to entered\n");
                scanf("%d",&ele);
                insert_rear(ele);
                break;

            case 3:
                delete_front();
                break;

            case 4:
                delete_rear();
                break;
            
            case 5:
                display();
                break;

        }
        
    }while(ch<=5);
    
}

