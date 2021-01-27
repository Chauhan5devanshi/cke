//Write a program to create an array of 10 integers, input the data and show all even numbers in the given numbers
#include<stdio.h>
main()
{
	int arr[10],i;
	printf("Enter the 10 numbers: ");
	for(i=0;i<10;i++)
	{
		scanf("%d",&arr[i]);
	}
	for(i=0;i<10;i++)
	{
		if(arr[i]%2==0)printf("%d ",arr[i]);
	}
}
/*OUTPUT:
Enter the 10 numbers: 11 12 13 14 15 16 17 18 19 20
12 14 16 18 20*/
