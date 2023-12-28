#include<stdio.h>
void main()
{
	int n;
	printf("Enter array size:");
	scanf("%d",&n);
	
	int a[n],b[n],c[n];
	int i;
	
	printf("Enter the value of A element:\n");
	for(i=0;i<n;i++){
		printf("Enter a[%d]:",i);
		scanf("%d",&a[i]);
	}
	printf("Enter the value of B element:\n");
		for(i=0;i<n;i++){
		printf("Enter b[%d]:",i);
		scanf("%d",&b[i]);
	}
	for(i=0;i<n;i++){
		c[i]=a[i]+b[i];
		printf("The sum of A and B is : %d\n",c[i]);
	}
}