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
