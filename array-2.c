#include<stdio.h>
void main()
{
	int n;
	printf("Enter array size:");
	scanf("%d",&n);
	
	int a[n];
	int i;
	int sum=0;
	float average;
	for(i=0;i<n;i++){
		printf("Enter a[%d]:",i);
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++){
		sum=sum+a[i];
	}
	average=sum/n;
		printf("The avg of array is : %f",average);
}