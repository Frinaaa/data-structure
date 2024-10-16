//singly linked list expressions
#include<stdio.h>
#include<stdlib.h>
struct node
{
 int data;
 struct node *next;
};

void main()
{
   struct node *start=(struct node*)0;//null list
   struct node *insert(struct node*,int);
   struct node *delete(struct node*);
   void display(struct node*);
   int opt,data;
do
{
   printf("1.insert\n");
   printf("2.delete\n");
   printf("3.display\n");
   printf("4.exit\n");
  printf("your option:");
  scanf("%d",&opt);
  switch(opt)
  {
    case 1:printf("data:");
    scanf("%d",&data);
    start=insert(start,data);
    break;
    case 2:start=delete(start);
    break;
    case 3:display(start);
           break;
    case 4:exit(0);
  }
  //end of switch
  }
  while(1);
  //end of main
  }
  
  //function
  //to insert a node
  struct node *insert(struct node*s,int item)
  {
    struct node *t;
    t=(struct node*)malloc(sizeof(struct node*));
    t->data=item;
    t->next=s;
    
    }
  //delete node
  struct node *delete(struct node*s)
  { 
  struct node *t=s;
    if(s!=(struct node*)0)
    {
       printf("%d deleted \n",s->data);
       s=s->next;
       free(t);
    }
    else
     printf("empty list\n");
    return s;
  }
  //display list
   void display(struct node*s)
   {
    while(s!=(struct node*)0)
    {
     printf("%d\t\n",s->data );
     s=s->next;
     }
}

