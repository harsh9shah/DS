#include <stdio.h>
#include <conio.h>

void array1(int [],int );

int main()
{
    int a[100],i,j,n;

    printf("Enter No. :");
    scanf("%d",&n);

    for(i=0;i<n;i++)
    {
        printf("Enter an Array : ");
        scanf("%d",&a[i]);
    }

    array1(a,n);

    printf("New Array is : \n");

    for(i=0;i<n;i++)
    {
        printf("%d \n",a[i]);
    }
    return 0;
}

void array1(int a[],int n)
{
    int t;
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
           if(a[i]>a[j])
            {
                t=a[i];

                a[i]=a[j];
                a[j] =t;
            }
        }
    }
}
