//write a c program to check whether a number is negative, positive or zero//
# include <stdio.h>
# include <conio.h>
main ()
{
	int a;
	printf ("enter a number");
	scanf ("%d", &a);
	if (a==0)
	{
		printf ("the number is zero");
	}
	else if (a>0)
	{
		printf (" the number is positive");
	}
	else
	{
		printf ("the number is negative");
	}
}
