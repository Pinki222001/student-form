#include<stdio.h>
void bubble_sort();
int main()
{
	int i,j,arr[5],swap;
	printf("element are stored ");
	for(i=0;i<5;i++)
	scanf("%d",&arr[i]);
	
	//for(i=0;i<5;i++)
	//printf("\nelement %d= %d ",i,arr[i]);
	bubble_sort();
	return 0;
}
void bubble_sort()
{
    int i,swap,j,arr[5];	
    for(i=0;i<5;i++)
	{
		for(j=0;j<4;j++)
		{
		
		 if(arr[j]>arr[j+1])
		 {
		   swap=arr[j+1];
		   arr[j+1]=arr[j];
		   arr[j]=swap;
	     }
		}
	}
	
	for(i=0;i<5;i++)
	printf("\nsorted element %d= %d ",i,arr[i]);
}
