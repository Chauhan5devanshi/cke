/*pp010: Create a header file as pp010.h having a function iseven() which takes a number as input and returns 1 
if the number is even else returns 0. Write a program pp010.c, include the header file into it. Create the main function to input a number and check it to be even or odd.*/
#include"stdio.h" 
#include"pp010.h" //here, pp010 is a header file
main()
{   int num;
	printf("Enter the number  :");
	scanf("%d",&num);
	if(is_even(num))printf("%d is even",num);
	else printf("%d is odd",num);
}
/*OUTPUT
Enter the number  :34567890
34567890 is even*/
