#include<stdio.h>
#include<stdlib.h>
typedef struct que
{
    int val;
    struct que *next;
}que;

que*temp=NULL;

que * insert(que*rear,int x)
{
    temp=(que*)malloc(sizeof(que));
    if(temp==NULL)
        printf("Memory is not allocated\n");
    else{
        temp->val=x;
        temp->next=NULL;
        if(rear==NULL)
            rear=temp;
        else{
            rear->next=temp;
            rear=temp;
        }
    }
    return rear;
}

que *delete(que*front)
{
    if(front==NULL)
        printf("Under flow\n");
    else{
        temp=front;
        printf("Delete = %d\n",temp->val);
        front=front->next;
        free(temp);
    }
    return front;
}

void display(que*front,que*rear)
{
    temp=front;
    while(temp!=NULL)
    {
        printf("%d\n",temp->val);
        temp=temp->next;
    }
}

int main()
{
    que*f=NULL;
    que*r=NULL;
    int ch,ele;

     do{
        printf("Enter 1 for insert\n");
        printf("Enter 2 for delete\n");
        printf("Enter 3 for display\n");
        scanf("%d",&ch);

        switch(ch)
        {
            case 1:
                printf("Enter the number you want to insert\n");
                scanf("%d",&ele);
                r=insert(r,ele);
                if(f==NULL)
                    f=r;
                break;

            case 2:
                f=delete(f);
                break;

            case 3:
                display(f,r);
                break;
            case 4:
                break;
        }
    }while(ch<=3);
}