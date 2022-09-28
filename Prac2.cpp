#include<stdio.h>
#include<stdlib.h>
int main()
{
int* ptr;
int n;
n=7;
printf("enter the number of elements\n");
ptr=(int*)malloc(sizeof(int)) ;
//ptr=realloc(ptr,n*sizeof(int));
if(ptr==NULL){
   printf("memory not allocated.\n");

   }
   else{
    printf("memory successfully allocated using mollac.\n");
    for (int i=0;i<7;i++){
            scanf("%d", &ptr[i]);

ptr[i]=i;
    }
    printf("the elements of the array are:\n");
    for(int i=0;i<7;i++)
        printf("%d\n",ptr[i]);
        }

return(0);
}

