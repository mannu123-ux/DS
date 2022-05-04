#include<stdio.h>
#include<malloc.h>
typedef struct linked_list
{
    int val;
    struct linked_list *next;
    struct linked_list *pre;
}link;

link*temp;
link*temp2;
link*temp3;
link*insert_end(link*end,link*start,int x)
{
    temp=(link*)malloc(sizeof(link));
    if(temp==NULL)
        printf("Memory is not allocated\n");
    else
    {
        temp->val=x;
        temp->next=NULL;
        if(end==NULL)
            end=temp;
        else
        {
            end->next=temp;
            temp->next=start;
            temp->pre=end;
            end=temp;
        }
    }
    return end;
}

link* insert_start(link*end,link*start,int x)
{
    temp=(link*)malloc(sizeof(link));
    if(temp==NULL)
        printf("memory is not allocated\n");
    else{
        temp->val=x;
        temp->next=start;
        if(start==NULL)
            start=temp;
        else
        {
            temp->pre=end;
            start->pre=temp;
            start=temp;

        }
    }
    return start;
}

link*delete_start(link*start)
{
    temp=start;
    printf("Delete = %d\n",temp->val);
    start=start->next;
    free(temp);
    return start;
}

link*delete_end(link*start,link*end)
{
    temp=start;
    while(temp->next!=end)
    {
        temp2=temp;
        temp=temp->next;
    }
    

    printf("Delete = %d\n",end->val);
    temp2->next=start;
    start->pre=temp2;
    end=temp2;
    free(temp);
    
}

link *insert_at(link*end,link*start,int num,int x)
{
    temp2=(link*)malloc(sizeof(link));
    temp=start;
    while(temp->val!=num)
    {
        temp=temp->next;
    }
    temp3=temp->next;
    temp2->val=x;
    temp2->next=temp3;
    temp2->pre=temp;
    temp->next=temp2;
    temp3->pre=temp2;

}

link *delete_at(link*end,link*start,int num)
{
    temp=start;
    while(temp->val!=num)
    {
        temp2=temp;
        temp=temp->next;
    }
    temp3=temp->next;
    printf("Delete = %d",temp->val);
    temp2->next=temp3;
    temp3->pre=temp2;
    free(temp);

}

void display(link*start,link*end)
{
    temp=start;
    while(temp!=end)
    {
        printf("%d\n",temp->val);
        temp=temp->next;
    }
    printf("%d\n",temp->val);
}


int main()
{
    link*start=NULL;
    link*end=NULL;
    int ch ,num,x;
    do
    {
        printf("Enter 1 for insert END\n");
        printf("Enter 2 for insert START\n");
        printf("Enter 3 for delete END\n");
        printf("Enter 4 for delete START\n");
        printf("Enter 5 for Insert at specific index\n");
        printf("Enter 6 for delete at specific index\n");
        printf("Enter 7 for DISPLAY\n");
        printf("Enter your choice\n");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1:
                printf("Enter the number you want to insert\n");
                scanf("%d",&num);
                end=insert_end(end,start,num);
                if(start==NULL)
                    start=end;
                break;
            case 2:
                printf("Enter the number you want to insert\n");
                scanf("%d",&num);
                start=insert_start(end,start,num);
                if(end==NULL)
                    end=start;
                break;

            case 3:
                 end=delete_end(start,end);
                 break;
                
            case 4:
                start=delete_start(start);
                break;

            case 5:
                printf("enter number [position]\n");
                scanf("%d",&num);
                printf("Enter number \n");
                scanf("%d",&x);
                insert_at(end,start,num,x);
                break;
            case 6:
                printf("Enter the number\n");
                scanf("%d",&num);
                delete_at(end,start,num);
                break;
            case 7:
                display(start,end);

        }
    }while(ch<=7);
}
