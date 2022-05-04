#include<stdio.h>
#include<malloc.h>
typedef struct linked_list
{
    int val;
    struct linked_list *nxt;
}link;

link * temp=NULL;
link * temp2=NULL;

link * insert_start(link *s,link *e,int x)
{
    temp=(link *)malloc(sizeof(link));
    if(temp==NULL)
        printf("not allocated");
    else
    {
      temp->val=x;
      temp->nxt=s;

      if(s==NULL)
          s=temp;
      else
      {
          s=temp;
          e=temp;
      }
    }
    return s;
}

link * insert_end(link *e,int x)
{
    temp=(link *)malloc(sizeof(link));
    if(temp==NULL)
        printf("not allocated");
    else
    {
        temp->val=x;
        temp->nxt=NULL;
        if(e==NULL)
            e=temp;
        else
        {
            e->nxt=temp;
            e=temp;
        }
        return e;
    }
}

link * delete_start(link *s)
{
    if(s==NULL)
        printf("underflow");
    else
    {
        temp=s;
        printf("%d ",temp->val);
        s=s->nxt;
        free(temp);
    }
    return(s);
}

link * delete_end(link *s,link *e)
{
    temp=s;
    while(temp->nxt!=e)
        temp=temp->nxt;

    printf("Delete %d ",e->val);
    temp->nxt=NULL;
    e=temp;

    return (e);
}

void insert_at_specified(link *s, int num,int x)
{
    temp=s;
    temp2=(link *)malloc(sizeof(link));
    while(temp->val!=num)
    {
        temp=temp->nxt;
    }
    temp2->val=x;
    temp2->nxt=temp->nxt;
    temp->nxt=temp2;
}
void delete_at_specified(link *s,int num)
{
    temp=s;
    temp2=s;
    while(temp->val!=num)
    {
        temp2=temp;
        temp=temp->nxt;
    }
    temp2->nxt=temp->nxt;
    free(temp);
}
void display(link *s)
{
    temp=s;
    while(temp!=NULL)
    {
        printf("%d ",temp->val);
        temp=temp->nxt;
    }
}
int main()
 {
     int ele,ch;
     int num=0;
     link *start=NULL;
     link *end=NULL;
    do
    {
        printf("enter 1 for insert start\n");
        printf("enter 2 for insert end\n");
        printf("enter 3 for delete front\n");
        printf("enter 4 for delete rear\n");
        printf("enter 5 for insert at specified\n");
        printf("enter 6 for delete at specified\n");
        printf("enter 7 for display\n");
        printf("enter your choice\n");
        scanf("%d",&ch);
        switch(ch)
        {
        case 1:
            printf("enter the number");
            scanf("%d",&ele);
            start=insert_start(start,end,ele);
            if(end==NULL)
                end=start;

            break;
        case 2:
            printf("enter the number ");
            scanf("%d",&ele);
            end=insert_end(end,ele);
            if(start==NULL)
                start=end;

            break;
        case 3:
            start=delete_start(start);
            break;
        case 4:
            end=delete_end(start,end);
            break;
        case 5:
            printf("enter the number [position] ");
            scanf("%d",&ele);
            printf("enter the number [new node] ");
            scanf("%d",&num);
            insert_at_specified(start ,ele,num);
            break;
        case 6:
            printf("enter the number ");
            scanf("%d",&num);
            delete_at_specified(start,num);
            break;
        case 7:
            display(start);
            break;
        }
    }while(ch<=7);
}