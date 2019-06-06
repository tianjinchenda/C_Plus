#include<stdio.h>
int main(){
	printf("This Program will Calculate the Length of a Circle\n");
	printf("It will need you in the Radis of the Circle\n");
	printf("Please input the Radis of the Circle below\n");
	float result;
	float radius;
	scanf("%f",&radius);
	result = radius * 2 * 3.14;
	printf("The Length of the Circle is %f\n",result);
	return 0;
	
}
