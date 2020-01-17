#include<stdio.h>
int main()
{
	int p,n;
	scanf("%d%d",&n,&p);
	int right,left,total;
    total =n/2;
    right =p/2;
    left = total -right;
    
    printf("\n%d ",total);
    printf("\n%d ",right);
    printf("\n%d ",left);
    if(right < left){
            printf("\n%d ",right);
        }
        else {
            printf("\n%d ",left);
        }
}
