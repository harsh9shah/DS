#include <stdio.h>
#include <conio.h>

int main()
{
    int a[100],i,j,n,t;

    printf("Enter No. :");
    scanf("%d",&n);

    for(i=0;i<n;i++)
    {
        printf("Enter an Array : ");
        scanf("%d",&a[i]);
    }

    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(a[i]>a[j])
            {
                t=a[i];
                a[i]=a[j];
                a[j]=t;
            }
        }
    }

    printf("New Array is : ");

    for(i=0;i<n;i++)
    {
        printf("%d \n",a[i]);
    }
}
