#include<Stdio.h>
#include<math.h>

#define rad 57.2957795

int main()
{
	double opposite,angle;
	float degrees,adjacent;

	puts("How tall is that tree?");
	printf("How far away is the tree in feet?");
	scanf("%f",&adjacent);
	printf("What angle is it to the tree top?");
	scanf("%f",&degrees);

	//Convert degrees to rads

	angle = (double)degrees/rad;

	//get the tree height
	opposite = tan(angle)*(double)adjacent;
	printf("That tree is %.2f feet tall.\n",opposite);
	return 0;
}