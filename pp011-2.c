//main() function file taking a number as an input.
#include<stdio.h>
main()
{
	int num;
	printf("Enter the number :");
	scanf("%d",&num);
	if(is_even(num))printf("%d is even",num);
	else printf("%d is odd",num);
}
/*OUTPUT
Enter the number :2345
2345 is odd*/
