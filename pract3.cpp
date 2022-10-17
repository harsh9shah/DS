#include <stdio.h>
#include <conio.h>

void push(int );
int pop();
int peep(int );
void display();
int s[100];
int top=-1;
int n=5;

int main()
{
    int ch1,ch2,n1;
    do
    {
        printf("\n1.push");
        printf("\n2.pop");
        printf("\n3.peep");
        printf("\n4.display");
        scanf("\n%d",&ch1);

        switch(ch1)
        {
            case 1:

                printf("\n Enter element : ");
                scanf("%d",&n1);
                push (n1);
                break;

            case 2:

                n1=pop();
                printf("\n Deleted Element : %d",n1);
                break;

            case 3:

                printf("\n Enter the index: ");
                scanf("%d",&n1);
                printf("\n Selected Element : %d",peep(n));
                break;

            case 4:

                display();
                break;

            default :

                printf("\n Wrong Input : ");

        }
    }while(ch1!=5);
}

void push(int n2)
{
    if(top>=n)
    {
        printf("Over flow");
    }
    else
    {
        top++;
        s[top]=n2;
    }
}

int pop()
{
    int i;
    if(top<0)
    {
        printf("Under flow");
    }
    else
    {
        i=s[top];
        top--;
    }
    return i;
}

int peep(int i)
{
    if(top-i+1<=0)
    {
        printf("Under flow");
    }
    return s[top-i+1];
}

void display()
{
    int i;
    printf("\n");
    for(i=0;i<=top;i++)
    {
        printf("%d\t",s[i]);
    }
}
