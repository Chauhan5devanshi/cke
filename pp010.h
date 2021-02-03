/*pp010: Create a header file as pp010.h having a function iseven() which takes a number as input and returns 1 
if the number is even else returns 0. Write a program pp010.c, include the header file into it. Create the main function to input a number and check it to be even or odd.*/

int is_even(int n)
{
	return(n%2?0:1);
}
