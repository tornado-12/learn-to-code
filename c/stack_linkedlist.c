#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

struct node{
    int data;
    struct node* next;
};

struct node *top=NULL;

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
    if(top==NULL)
        top=t;
    else
    {
        t->next = top;
        top = t;
    }

}

void pop()
{
    struct node *t;
    int d;
    if(top == NULL)
        printf("\n underflow");
    else{
        t = top;
        top=top->next;
        d = t->data;
        free(t);
        printf("\n element removed : %d",d);
    }
}

void display()
{
    printf("\nelements in stack are :");
    struct node *t = top;
    if(top == NULL)
        printf("no element in stack");
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
        printf("\n 1.push 2.pop 3.display 4.exit ");
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
OUTPUT
 1.push 2.pop 3.display 4.exit 1

enter data to be inserted :2

 1.push 2.pop 3.display 4.exit 1

enter data to be inserted :3

 1.push 2.pop 3.display 4.exit 1

enter data to be inserted :4

 1.push 2.pop 3.display 4.exit 3

elements in stack are : 4 3 2
 1.push 2.pop 3.display 4.exit 2

 element removed : 4
 1.push 2.pop 3.display 4.exit 3

elements in stack are : 3 2
*/
