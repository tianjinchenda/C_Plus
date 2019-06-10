//该程序主要用来比较两款不同手机的价格
#include<stdio.h>
int main(){
	printf("请输入手机1的价格\n");
	float FirstCellphonePrice;
	float SecondCellphonePrice;
	float Result;
	//分别定义了第一个，第二个手机价格的变量
	//并定义了方法最终结果的变量Result
	scanf("%f" , &FirstCellphonePrice);
	printf("请输入第二个手机的价格\n");
	scanf("%f" , &SecondCellphonePrice);
	//向客户弹出询问价格的窗口，并存入指定变量中
	Result = FirstCellphonePrice - SecondCellphonePrice;
	printf("手机价格差距为%f\n",Result);//打印输出结果
	return 0;
}
