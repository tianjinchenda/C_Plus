#include<stdio.h>
int main(){
	printf("This is a BMI tester for you to calculate whether you are fat\n");
	printf("Please input your gender , If you are a Female please input 1, If you are a male please input 2\n");
	printf("Waiting for your input\n");
	int gender = 0;
	scanf("%d",&gender);
	if (gender==1){
		printf("you are a female\n");
		printf("Please input your height\n");
		int height = 0;
		scanf("%d",&height);
		printf("Please input your weight\n");
		int weight = 0;
		scanf("%d",&weight);
		int Result = 0;
		Result = height-weight;
		if (Result >50 ){
			printf("you are so slam\n");
		}
		else {
			printf("you are so fat\n");
			}
	}
	else if (gender==0){
		printf("You are a male\n");
		printf("Please calc by yourself\n");
}	
}
