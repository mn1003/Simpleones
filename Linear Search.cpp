#include<stdio.h>
int main()
{
	int n,a,i,c=0;
	scanf("%d",&n);
	int arr[n];
	for(i=0;i<n;i++)
	 scanf("%d",&arr[i]);
	printf("Enter element to be searched");
	scanf("%d",&a);
	for(i=0;i<n;i++)
	{
	
	 if(arr[i]==a)
	 {
	  printf("Element found at index %d",i);
	  c++;
	  break;
     }
 }
    if(c==0)
     printf("Element not found");
    return 0;
}
