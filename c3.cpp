//write a c program to find a maximum between three numbers//
# include <stdio.h>
# include <conio.h>
main ()
{
	int a,b,c;
	printf ("enter three numbers ");
	scanf ("%d%d%d", &a, &b, &c);
	if (a>b && a>c)
	{
		printf ("%d is a maximum number", a);
	}
	else if (b>a && b>c)
	{
		printf ("%d is a maximum number", b);
	}
	else 
	{
		printf ("%d is a maximum number", c);
	}
}
