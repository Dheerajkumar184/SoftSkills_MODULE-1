#include<stdio.h>
main()
{

	int a,b,add,sub,mul;
	float div; // var.declaration
	a=50;
	b=40;
	
	add=a+b;
	printf("\n\n\t a = %d",a);
	printf("\n\n\t b = %d",b);
	printf("\n\n\t Addition = %d",add);
	
	sub=a-b;
	printf("\n\n\t subtraction = %d",sub);
	
	mul=a*b;
	printf("\n\n\t multiplication %d",mul);
	
	div=a/b;
	printf("\n\n\t division = %.2f",div);
	
}
