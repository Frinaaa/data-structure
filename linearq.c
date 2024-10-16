//linear que operations
#include<stdio.h>
#include<stdlib.h>
#define size 10
int que[size];
int front=-1,rear=-1;
void main()
{
void insertq(int);
int deleteq();
int searchq(int);
int data,opt,temp,ans;
do
{
   printf("1.insert\n");
   printf("2.delete\n");
   printf("3.search\n");
   printf("4.exit\n");
   printf("your option:");
   scanf("%d",&opt);
   switch(opt)
   {
   case 1:printf("data:");
   scanf("%d",&data);
   insertq(data);
   break;
   case 2:data=deleteq();
   printf("delete item=%d\n",data);
   break;
   case 3:printf("item to search:");
   scanf("%d",&data);
   ans=searchq(data);
   if(ans==1)
    printf("found\n");
    else
    printf("not found\n");
    break;
    case 4:exit(0);
    }
   }
   while(1);
   }
   // function to insert an item in linear queue
   void insertq(int item)
   {
      if(rear==size-1)
      printf("queue is full\n");
      else
      que[++rear]=item;
   }
 // function to delete an item
 int deleteq()
 {
     if(front==rear)
     {
     printf("que is empty\n");
     exit(1);}
     else
     return que[++front];
    
   }
//function to search an element in queue
int searchq(int item)
{
  int tfront=front+1;
  //searching
  while(tfront!=rear && que[tfront]!=item)
      ++tfront;
   if(que[tfront]==item)
     return 1 ;
     else
     return 0;
  }
