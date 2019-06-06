#include<stdio.h>
int main(){
	int num = 0;
	printf("This is a function Test For sizeof\n");
	printf("This function will calc the bytes number of a variable\n");
	int number;
	number =sizeof (num);
	printf("the variable bytes of 'a' is %d\n",number);
	return 0;
}
