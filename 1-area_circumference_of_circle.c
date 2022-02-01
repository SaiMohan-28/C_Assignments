//Program to calculate area and circumference of a circle.
#include<stdio.h>
#define pie 3.14
int main()
{
	float area=0,circum=0,radius;
	printf("enter the radius\n");
	scanf("%f",&radius);
	circum = 2*pie*radius;
	area =  pie*radius*radius;
	printf("circum=%f\narea=%f\n",circum,area);
	return 0;
}
