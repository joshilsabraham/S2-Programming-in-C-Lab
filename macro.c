#include <stdio.h>
#define PI 3.14159
#define AREA_OF_CIRCLE(r) (PI*r*r)
#define SURFACE_AREA_OF_CYLINDER(r,h) (2*PI*r*(r+h))
int main(){
	float r1,r2,h,area,surface_area;
	printf("Enter the radius of Circle: ");
	scanf("%f",&r1);
	area = AREA_OF_CIRCLE(r1);
	printf("Area of Circle with radius %.2f = %.2f \n",r1,area);
	printf("Enter the radius of Cylinder: ");
	scanf("%f",&r2);
	printf("Enter height of Cylinder:");
	scanf("%f",&h);
	surface_area = SURFACE_AREA_OF_CYLINDER(r2,h);
	printf("Area of Cylinder with radius %.2f and height %.2f = %.2f \n",r2,h,surface_area);
	return 0;
}
