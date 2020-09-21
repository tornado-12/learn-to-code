#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node* next;
};

struct node *top = NULL;

struct node* createnode(int data)
{
    struct node* t;
    t = (struct node*)malloc(sizeof(struct node));
    if (t==NULL)
    {
        printf("no free space ");
        exit(1);
    }
    t->data = data;
    t->next = NULL;
    return t;

};

void insertbeg()
{
    int n;
    printf("\nenter data to be inserted:");
    scanf("%d",&n);
    struct node *t;
    t=createnode(n);
    if(top == NULL)
    {
        top = t;
    }
    else
    {
        t->next = top;
        top = t;
    }
}

void pop()
{
    int n;
    struct node *t;
    if(top == NULL)
        printf("\nunderflow");
    else
    {
        t=top;
        top=top->next;
        n = t->data;
        free(t);
    }
    printf("\nElement removed: %d",n);
}

void deleteend()
{
    int n;
    struct node *t,*temp;
    if(top == NULL)
        printf("\n no element in list");
    else
    {
        temp = top;
        while(temp->next->next !=NULL)
            temp = temp->next;
        t=temp->next;
        temp->next = NULL;
        n = t->data;
        free(t);
        }
    printf("\nElement removed: %d",n);
}

void delete_middle()
{
    int n;
    struct node *t,*temp;
    printf("enter the value of element to be removed");
    scanf("%d",&n);
    if(top == NULL)
        printf("\n no element in list");
    else
    {
        temp = top;
        while(temp->next->next !=NULL)
            {
                if(temp->next->data==n)
                {
                    t=temp->next;
                    temp->next = t->next;
                    free(t);
                }
            }

    }
}

void insertend()
{
    int n;
    printf("\nenter data to be inserted:");
    scanf("%d",&n);
    struct node *t,*temp;
    t=createnode(n);
    if(top == NULL)
    {
        top = t;
    }
    else
    {
        temp = top;
        while(temp->next != NULL)
            temp = temp->next;
        temp->next = t;
    }

}

void display()
{
    printf("\ndisplaying the stack :");
    struct node* t;
    t= top;
    while(t!=NULL)
    {
        printf(" %d",t->data);
        t=t->next;
    }
}

void insert_mid()
{
    int n;
    printf("\nenter data to be inserted:");
    scanf("%d",&n);
    struct node *t,*temp;
    t=createnode(n);
    if(top == NULL)
    {
        top = t;
    }
    else
    {

    }

}

void main()
{
    int c;
    do{
        printf("\n1.insert at beginning\n2.insert at middle\n3. insert at end\n4.delete at beginning\n5. delete at middle\n6.delete at end\n7.dispaly\n8.exit\n");
        scanf("%d",&c);
        switch(c)
        {
            case 1:insertbeg();
            getch();
            break;
            case 4:pop();
            getch();
            break;
            case 7:display();
            getch();
            break;
            case 2:
                break;
            case 3: insertend();
            getch();
            break;
            case 5:delete_middle();
            getch();
            break;
            case 6:deleteend();
            getch();
            break;
        }

    }while(c!=8);
}
