#include<stdio.h>
#include<stdlib.h>
#define size 10
int front=0,rear=0;
//empty queue
int que[size];
void main()
{
  void insertq(int);
  int deleteq();
  int searchq(int);
  int data,opt,ans;
 do
 {
   printf("1.insert\n");
   printf("2.delete\n");
   printf("3.search\n");
   printf("4.exit\n");
   printf("enter your option:");
   scanf("%d",&opt);
 switch(opt)
 {
   case 1:printf("data:");
   scanf("%d",&data);
   insertq(data);
   break;
   case 2:data=deleteq();
   printf("delete data=%d\n",data);
   break;
   case 3:printf("search data:");
         scanf("%d",&data);
         ans=searchq(data);
         if(ans==1)
          printf("found\n");
          else 
          printf("not found\n");
          break;
    case 4 :exit(0);
   }
  }
  while(1);
  }
  //function to insert an item in circular queue
  void insertq(int item)
  {
    int trear=rear;
    trear=(trear+1)%size;
    if(trear==front)
      printf("que is full");
      else
      {
      rear=trear;
      que[rear]=item;
      }
   }
   
 //delete an item from circular queue
 int deleteq()
 {
 if(front==rear)
  { printf("que is empty\n");
  exit(1);}
   else
   {
   front=(front+1)%size;
   return que[front];
   }
   }
   //search an item in circular queue
   int searchq(int item)
   {
   int tfront=front;
   if(tfront!=rear)
   {                                                                              
   do
   tfront=(tfront+1)%size;
   while(tfront!=rear && que[tfront]!=item);
   
   if(que[tfront]==item)
    return 1;
    else
    return 0;}
    return 0;
  }
   
