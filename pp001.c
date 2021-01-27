//Write a program to input a number and check it to be even or odd using if statement
#include<stdio.h>
main()
{
	int n;
	printf("Enter the number : ");
	scanf("%d",&n);//input a number
	if(n%2)
	{
		printf("Number is odd");
	}
	else
	{
		printf("Number is even");
	}
}
/*Output
Enter the number:24
Number is even*/
