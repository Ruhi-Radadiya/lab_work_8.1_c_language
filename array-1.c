#include<stdio.h>
void main()
{
	int cnt,n;
	printf("Enter array size:");
	scanf("%d",&n);
	
	int a[n];
	int i;

	for(i=0;i<n;i++){
		printf("Enter a[%d]:",i);
		scanf("%d",&a[i]);
		cnt=i;
	}
		printf("The length of array is : %d",n);
}