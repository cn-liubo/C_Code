#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>


//汉诺塔
void Hanoi(int n, char A, char B, char C)
{
	/*
	如果是1个盘子
		直接将A柱子上的盘子从A移到C
	否则
		先将A柱子上的n-1个盘子借助C移到B
		再直接将A柱子上的盘子从A移到C
		最后将B柱子上的n-1个盘子借助A移到C
	*/
	//最上面的盘子是1
	if (1 == n)
	{
		printf("将编号为%d的盘子直接从%c柱子移到%c柱子\n", n, A, C);
	}
	else
	{
		Hanoi(n - 1, A, C, B);
		printf("将编号为%d的盘子直接从%c柱子移到%c柱子\n", n, A, C);
		Hanoi(n - 1, B, A, C);
	}
}
int main()
{
	char c1 = 'A';
	char c2 = 'B';
	char c3 = 'C';
	int n;

	printf("请输入要移动盘子的个数：");
	scanf("%d", &n);

	Hanoi(n, 'A', 'B', 'C');//将A上的盘子移到C上

	return 0;
}


//int sum(int n)
//{
//	if (1 == n) 
//	{
//		return 1;
//	}
//	else 
//	{
//		return n + sum(n - 1);
//	}
//}
//
//long f(int n)
//{
//	if (1 == n)
//	{
//		return 1;
//	}
//	else
//	{
//		return f(n - 1) * n;
//	}
//}
//
//int main()
//{
//	printf("1+2+3+...+100 = %d\n", sum(100));
//	printf("%d\n", f(5));
//	return 0;
//}