#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

struct node{
    int data;
    struct node* next;
};

struct node *f=NULL , *r = NULL;

struct node* createnewnode(int data)
{
    struct node* t=NULL;
    t = (struct node*)malloc(sizeof(struct node));
    if(t==NULL)
    {
        printf("cannot allocate heap memory");
        exit(1);
    }
    t->data = data;
    t->next = NULL;
}

void push()
{
    printf("\nenter data to be inserted :");
    int d;
    scanf("%d",&d);
    struct node *t=createnewnode(d);
    if(f==NULL && r==NULL)
        f = r = t;
    else
    {
        r->next = t;
        r = t;
    }

}

void pop()
{
    struct node *t;
    int d;
    if(f == NULL && r==NULL)
        printf("\n underflow");
    else if(f == r)
    {
        t=f;
        f=NULL;
        r=NULL;
        d=t->data;
        free(t);
        printf("\n element removed : %d",d);
    }
    else{
        t = f;
        f=f->next;
        d = t->data;
        free(t);
        printf("\n element removed : %d",d);
    }
}

void display()
{
    printf("\nelements in queue are :");
    struct node *t = f;
    if(f == NULL)
        printf("no element in queue");
    else{
        while(t!=NULL)
        {
            printf(" %d",t->data);
            t = t->next;
        }
    }
}

void main()
{
    int c;
    do{
        printf("\n 1.enqueue 2.dequeue 3.display 4.exit ");
        scanf("%d",&c);
        switch(c)
        {
            case 1:push();
            getch();
            break;
            case 2: pop();
            getch();
            break;
            case 3: display();
            getch();
            break;
        }
    }while(c!=4);
}

/*
output

 1.enqueue 2.dequeue 3.display 4.exit 1

enter data to be inserted :5

 1.enqueue 2.dequeue 3.display 4.exit 1

enter data to be inserted :4

 1.enqueue 2.dequeue 3.display 4.exit 1

enter data to be inserted :7

 1.enqueue 2.dequeue 3.display 4.exit 3

elements in queue are : 5 4 7
 1.enqueue 2.dequeue 3.display 4.exit 2

 element removed : 5
 1.enqueue 2.dequeue 3.display 4.exit 3

elements in queue are : 4 7
*/
