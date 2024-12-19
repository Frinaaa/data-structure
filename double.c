//doubly linked list expression
#include<stdio.h>
#include<stdlib.h>
struct node
{
int data;
struct node *left ,*right;
};
void main()
{
  struct node *start=(struct node *)0;//null list
  struct node *insert(struct node *,int);
  struct node *delete(struct node*,int);
  struct node *search(struct node*,int);
  void display(struct node*);
  int opt,data;
  do
  {
  printf("1.insert\n");
  printf("2.delete\n");
  printf("3.search\n");
  printf("4.display\n");
  printf("5.exit\n");
  printf("your option:");
  scanf("%d",&opt);
  switch(opt)
  {
  case 1:printf("data:");
  scanf("%d",&data);
  start=insert(start,data);
  break;
  case 2:printf("data:");
         scanf("%d",&data);
         start=delete(start,data);
         break;
  case 3:printf("item to be search:");
         scanf("%d",&data);
         if(search(start,data)==(struct node *)0)
         printf("item not found\n");
         else
         printf("item found\n");
         break;
  case 4:display(start);
         break;
  case 5:exit(0);
  }//end of switch
  }//end of do while
  while(1);
  }
  //end of main
  //to display list
  void display(struct node *s)
  {
  while(s!=(struct node *)0)
  {
  printf("%d\n",s->data);
  s=s->right;
  }
}
//search an item
struct node *search(struct node *s,int data)
{
while(s!=(struct node*)0 && s->data!=data)
s=s->right;
return s;
}
//insert a node
 struct node *insert(struct node*s,int data)
 {
 struct node *t;
 t=(struct node *)malloc(sizeof(struct node));
 t->data=data;
 t->left=(struct node *)0;
 t->right=s;
 if(s!=(struct node *)0)//not a null list
 
 s->left=t;
 return t;
 }
 //delete a node
 struct node *delete(struct node *s,int data)
 {
 struct node *t;
 t=search(s,data);
 if(t!=(struct node *)0)//found
 {
 if(t->left==(struct node *)0 && t->right==(struct node *)0) //case of first node
 {
    s=(struct node*)0;
    printf("item %d deleted.\n",data);
 }
 else if(t->left==0)//case of first node
 {
 s=s->right;
 s->left=0;
 printf("item %d deleted.\n",data);
 }
 else if(t->right==0)//case of last node
 {
 t->left->right=0;
 printf("item %d deleted.\n",data);
 }
 else //interior node
 {
 t->left->right=t->right;
 t->right->left=t->left;
 printf("item %d deleted.\n",data);
 }
 free(t);
 }
 else
 printf("not found\n");
 return s;
 }
 
 
