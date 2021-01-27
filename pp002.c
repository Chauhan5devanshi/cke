//Write a program to input a number and check it to be even or odd using if statement.
#include<stdio.h>
main()
{
	int n;
	printf("Enter the number : ");
	scanf("%d",&n);
	switch(n%2)
	{
		case 0:printf("Number is even");
		break;
		case 1:printf("Number is odd");
		break;
	}
}
/*Output:
Enter the number:24
number is even*/
