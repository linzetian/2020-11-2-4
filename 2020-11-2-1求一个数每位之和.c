//求一个数每位之和....
//写一个递归函数DigitSum（n），输入一个非负整数，返回组成的数字之和
//例如输入1234，输出10
#include<stdio.h>
int DigitSum(int n)
{
	if (n > 9)
	{
		return DigitSum(n / 10) + n % 10;
	}
	else
	{
		return n;
	}

}
int main()
{
	int n = 0;
	printf("输入一个非负整数n：");
	scanf("%d",&n);
	int ret=DigitSum(n);
	printf("%d",ret);
	return 0;
}