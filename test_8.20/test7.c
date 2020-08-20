#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

int main()
{
	int i = 0;
	int count = 0;


	for (i = 1; i <= 100; i++)
	{
		if (i % 10 == 9)
			count++;
		if (i / 10 == 9)
			count++;
	}
	printf("%d\n", count);
	return 0;


	/*int count = 0;
	for (int i = 1; i < 100; i++) 
	{
		if (9 == i % 10)
		{
			count++;
		}
		if (9 == i / 10)
		{
			count++;
		}
	}
	printf("%d\n", count);
	return 0;*/
}


//int main()
//{
//
//	int i = 0;
//	for (i = 100; i <= 200; i++)
//	{
//		int flag = 1;
//		for (int j = 2; j <= i / 2; j++)
//		{
//			if (i % j == 0)
//			{
//				//不是素数
//				flag = 0;
//				break;
//			}
//		}
//		if (flag == 1)
//		{
//			printf("%d是素数\n", i);
//		}
//	}
//
//	//int i = 0;
//	//int j = 0;
//	//for (i = 100; i <= 200; i++)
//	//{
//	//	for (j = 2; j <= i / 2; j++) 
//	//	{
//	//		if (i % j == 0)
//	//		{
//	//			//不是素数
//	//			break;
//	//		}
//	//	}
//	//	if (j > i / 2) 
//	//	{
//	//		printf("%d是素数\n", i);
//	//	}
//	//}
//
//	/*int i = 1223;
//	int j = 0;
//	int flag = 1;
//	for (j = 2; j < i; j++)
//	{
//		if (0 == i % j)
//		{
//			flag = 0;
//
//		}
//
//	}
//	if (1 == flag) 
//	{
//		printf("%d\n", i);
//	}*/
//	return 0;
//}

//int main()
//{
//	for (int year = 1000; year <= 2000; year++) 
//	{
//		if (((year % 4 == 0) && (year % 100 != 0)) || (year % 400 == 0)) 
//		{
//			printf("%d是闰年\n", year);
//		}
//	}
//	return 0;
//}

//int main()
//{
//	int a = 196;
//	int b = 300;
//	int c = 0;
//	//scanf("%d %d", &a, &b);
//	int d = a < b ? a : b;
//	for (int i = 1; i <= d; i++) {
//		if (0 == a % i && 0 == b % i) {
//			c = i;
//		}
//	}
//	printf("%d和%d的最大公约数为%d\n", a, b, c);
//
//	//辗转相除法
//	int a1 = 18;
//	int b1 = 24;
//	int c1 = 0;
//
//	while (c1 = a1 % b1)
//	{
//		a1 = b1;
//		b1 = c1;
//	}
//
//	printf("%d\n", b1);
//	return 0;
//}

//int func(int a)
//{
//    int b;
//    switch (a)
//    {
//    case 1: b = 30;
//    case 2: b = 20;
//    case 3: b = 16;
//    default: b = 0;
//    }
//    return b;
//}
//int main()
//{
//    int b = func(1);
//    printf("%d\n", b);
//	return 0;
//}

//int main() {
//	int x = 3;
//	int y = 3;
//	switch (x % 2) {
//	case 1:
//		switch (y)
//		{
//		case 0:
//			printf("first");
//		case 1:
//			printf("second");
//			break;
//		default: printf("hello");
//		}
//	case 2:
//		printf("third");
//	}
//	return 0;
//}

//int main()
//{
//	long day = 0;
//	scanf("%d", &day);
//
//	switch (day)
//	{
//	
//	case 1:
//	case 2:
//	case 3:
//	case 4:
//	case 5:
//		printf("工作日\n");
//	case 6:
//	case 7:
//		printf("休息日\n");
//		break;
//	default:
//		printf("选择错误\n");
//	
//	}
//	return 0;
//}