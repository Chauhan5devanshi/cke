//Write a program to input numbers till 0 is pressed and check it to be even and odd.
#include<stdio.h>
main()
{
	int n;
	
	for(;;)
	{
		printf("Enter the number : ");
		scanf("%d",&n);
		if(n!=0)
	    	n%2?printf("%d is odd\n",n):printf("%d is even\n",n);
	    else break;	
		
}
}
/*output:
Enter the number : 345678
345678 is even
Enter the number : 3456789
3456789 is odd
Enter the number : 987654
987654 is even
Enter the number : 0
-------------------------*/
