#include<stdio.h>
  int main(){
  	printf("该程序用于比较两个手机的价格\n");
        printf("请您输入第一个手机的价格\n");
	float Cellphone_1;
	scanf("%f",&Cellphone_1);
	printf("请您输入第二个手机的价格\n");
	float Cellphone_2;
	scanf("%f",&Cellphone_2);
	printf("两个手机的差价为 %f \n",Cellphone_1-Cellphone_2);
	return 0;
  
  }
