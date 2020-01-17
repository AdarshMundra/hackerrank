#include<stdio.h>
int main()
{
	int n=5;
	int arr[10];
    int i,p;
    for(i=0;i<5;i++)
    {
    	scanf("%d",&arr[i]);
	}
    for(i=0;i<5;i++)
    {
    	printf("%d\n",arr[i]);
	}
    for(i=0;i<4;i++)
    {
        if(arr[i]<arr[i++])
        {
            p=arr[i++];
            arr[i++]=arr[i];
        }
        printf("%d\n",arr[i]);    
    }

}
