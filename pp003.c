//Write a program to input a number and check it to be even and odd using bitwise operator
#include<stdio.h>
main()
{
	int n;
	printf("Enter the number: ");
	scanf("%d",&n);
	if(n&1)printf("%d is odd",n);
	else printf("%d is even",n);
}
/*OUTPUT:
Enter the number: 234561
234561 is odd*/

