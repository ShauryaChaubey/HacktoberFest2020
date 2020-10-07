#include <stdio.h>

int main(void)
{
   int i, j, n, temp=0, arr[250], f=0;

   printf("Enter number of elements: ");
   scanf("%d",&n);

   printf("Enter elements: ");
   for(i=0;i<n;i++)
   {
      scanf("%d",&arr[i]);
   }
   for(i=0;i<n;i++)
   {
       f = 0;
      for(j=0;j<n-i-1;j++)
      {
         if(arr[j]>arr[j+1])
         {
            temp=arr[j];
            arr[j]=arr[j+1];
            arr[j+1]=temp;
            f = 1;
         }
      }
      if(f == 0)
      {
          break;
      }
   }

   printf("Sorted array is: ");
   for(i=0;i<n;i++)
   {
     printf(" %d",arr[i]);
   }

}
