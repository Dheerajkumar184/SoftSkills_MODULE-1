//area of circle = pi*R*R and cir = 2 * pi * r
#include<stdio.h>
main()
{
	float pi=3.14, area,circumference;  
	int r=6;
	
	area=pi*r*r;
	circumference=2*pi*r;
	printf("\n\n\t radius = %d", r);
	printf("\n\n\t pi= %.2f",pi);
	printf("\n\n\t area of circle = %.2f",area);
	printf("\n\n\t Circumference of Circle is =%.2f",circumference);
}
