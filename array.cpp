/* WAP to inisert an element in array at position entered by the user */
#include<stdio.h>
int main()
{int pos,i,n;

	int a[]={1,2,3,4,5};
	printf("enter the position u want to enter the element");
	scanf("%d",&pos);
	printf("enter the element ");
	scanf("%d",& n);
	a[pos]=n;
	for(i=0;i<5;i++)
	{
		printf("%d",a[i]);
		
	}
	
}
