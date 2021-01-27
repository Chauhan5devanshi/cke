//Write a program to input two numbers and print all even numbers in the given range
#include<stdio.h>
main()
{
	int a,b,i;
	printf("Enter the two numbers : ");
	scanf("%d %d",&a,&b);
	for(i=a;i<=b;i++)
	{
		if(i%2==0)printf("%d ",i);
	}
}
/*Enter the two numbers : 1 10
2 4 6 8 10*/
