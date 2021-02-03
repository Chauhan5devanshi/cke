/*pp009: Write a program having a function iseven() which takes a number as input and returns 1 if the number is even else returns 0. 
Create the main() function to input a number and check it to be even or odd using iseven() function.*/
#include<stdio.h>
int is_even(int n)
{
	return(n%2?0:1);
}
main()
{   int num;
	printf("Enter the number  :");
	scanf("%d",&num);
	if(is_even(num))printf("%d is even",num);
	else printf("%d is odd",num);
}
/*OUTPUT
Enter the number  :12345672
12345672 is even*/
