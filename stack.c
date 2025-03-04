#include<stdio.h>
int stack[100],i,j,choice=0,n,top=-1;
void push()
{
    int val;
    if(top==n)
    {
        printf("overflow\n");
    }
    else
    {
        printf("enter the value:");
        scanf("%d",&val);
        top=top+1;
        stack[top]=val;
    }
}
void pop()
{
    if(top==-1)
    {
        printf("underflow\n");
    }
    else
    {
        top=top-1;
    }
}
void show()
{
    if(top==-1)
    {
        printf("stack is empty\n");
    }
    for(i=top;i>=0;i--)
    {
        printf("%d\n",stack[i]);
    }
}
void main()
{
   int ch;
   printf("enter the number of elements in the stack:");
   scanf("%d",&n);
   do
   {
       printf("choose one from the below options...\n");
       printf("\n 1-push\n 2-pop\n 3-show\n ");
       printf("enter your choice:");
       scanf("%d",&choice);
       switch(choice)
       {
            case 1: push();
                    break;
            case 2: pop();
                    break;
            case 3: show();
                    break;
            default:printf("enter valid choice\n");
       }
       printf("enter 1 for continue:");
       scanf("%d",&ch);

   }while(ch==1);
   if(ch!=1)
   {
       printf("exiting..\n");
   }
}
