#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

void table(int num)
{
	for (int i = 1; i <= num; i++)
	{
		for (int j = 1; j <= i; j++)
		{
			printf("%d * %d = %d  ", j, i, i * j);
		}
		printf("\n");
	}
}

int main()
{
	int num = 0;
	printf("������һ��������ʾnum * num�ĳ˷��ھ���");
	scanf("%d", &num);
	table(num);
	return 0;
}

//void swap(int* x, int* y)
//{
//	int temp = *x;
//	*x = *y;
//	*y = temp;
//}
//
//int main()
//{
//	int x = 10;
//	int y = 20;
//	printf("����ǰ��x=%d y=%d\n", x, y);
//	swap(&x, &y);
//	printf("������x=%d y=%d\n", x, y);
//	return 0;
//}

//void leap_year(int year)
//{
//	if (((year % 4 == 0) && (year % 100 != 0)) || (year % 400 == 0))
//		printf("%d ������\n", year);
//	else
//		printf("%d ��������\n", year);
//}
//int main()
//{
//	int year = 0;
//	printf("��������ݣ� ");
//	scanf("%d", &year);
//	leap_year(year);
//	return 0;
//}

//int is_prime(int num)
//{
//	for (int i = 2; i <= sqrt(num); i++) 
//	{
//		if (num % i == 0) 
//			return 0;
//	}
//	return 1;
//}
//
//int main()
//{
//	for (int i = 100; i <= 200; i++) 
//	{
//		if (is_prime(i) == 1) 
//		{
//			printf("%d\n", i);
//		}
//	}
//
//	return 0;
//}


//int main()
//{
//	//int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	//int number = 7;
//	//int left = 0;
//	//int right = 9;
//	//while (left <= right) {
//	//	int mid = (left + right) / 2;
//	//	if (number < arr[mid]) {
//	//		right = mid - 1;
//	//	}else if (number > arr[mid]){
//	//		left = mid + 1;
//	//	}else{
//	//		printf("%d���±��ǣ�%d\n", number, mid);
//	//		break;
//	//	}
//	//}
//	//if (left > left) {
//	//	printf("�Ҳ���");
//	//}
//	//return 0;
//
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int key = 3;
//	int left = 0;
//	int right = sizeof(arr) / sizeof(arr[0]); // rightλ�õ�����ȡ����
//
//	while (left <= right) // rightλ��û�����ݣ��˴�����Ҫ���=
//	{
//		int mid = left + (right - left) / 2;
//		if (arr[mid] > key) // keyС���м�λ�����ݣ�˵��key���������࣬��Ҫ�ı��ұ߽�
//		{
//			right = mid; // rightλ�õ�����ȡ���������right=mid������Ҫ��1
//		}
//		else if (arr[mid] < key)// key�����м�λ�����ݣ�˵��key�������Ұ�࣬��Ҫ�ı���߽�
//		{
//			left = mid + 1; // leftλ�õ����ݿ���ȡ�������left=mid+1
//		}
//		else
//		{
//			printf("�ҵ��ˣ��±��ǣ�%d\n", mid);
//			break;
//		}
//	}
//	if (left > right)
//		printf("�Ҳ���\n");
//	return 0;
//}

//void menu()
//{
//	printf("******************************\n");
//	printf("******      1. play     ******\n");
//	printf("******      0. exit     ******\n");
//	printf("******************************\n");
//}
// 
//void game()
//{
//	int number = 0;
//	int ret = rand()%100+1;//rand_max = 32767 - rand�������ص���һ��0-32767֮��������
//	while (1)
//	{
//		printf("�������:>");
//		scanf("%d", &number);
//		if (number > ret)
//		{
//			printf("�´���\n");
//		}
//		else if (number < ret)
//		{
//			printf("��С��\n");
//		}
//		else
//		{
//			printf("��ϲ�㣬�¶���\n");
//			break;
//		}
//	}
//}
//
//int main()
//{
//	int input = 0;
//	srand((unsigned int)time(NULL));//ʱ�̷����仯������ - �����ϵ�ʱ��һֱ�ڱ仯 -
//	do
//	{
//		menu();
//		printf("��ѡ��:>");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			game();
//			break;
//		case 0:
//			printf("�˳���Ϸ\n");
//			break;
//		default:
//			printf("ѡ���������ѡ��!\n");
//			break;
//		}
//	} while (input);
//	return 0;
//}

//int main()
//{
//	for (int i = 1; i <= 9; i++) {
//		for (int j = 1; j <= i; j++) {
//			printf("%d * %d = %d  ", j, i, i * j);
//		}
//		printf("\n");
//	}
//
//	return 0;
//}

//int main()
//{
//	int a[10] = { 0 };
//	for (int i = 0; i < 10; i++) {
//		scanf("%d", &a[i]);
//	}
//	int max = a[0];
//	for (int i = 0; i < 10; i++) {
//		if (max < a[i]) {
//			max = a[i];
//		}
//	}
//	printf("%d\n", max);
//	return 0;
//}

//int main()
//{
//	double sum = 0;
//	int flag = 1;
//	for (double i = 1; i <= 100; i++) {
//		sum = sum + flag / i;
//		flag = -flag;
//	}
//	printf("%lf\n", sum);
//	return 0;
//}

//int main()
//{
//	int a = 0, b = 0;
//	for (a = 1, b = 1; a <= 100; a++)
//	{
//		if (b >= 20) break;
//		if (b % 3 == 1)
//		{
//			b = b + 3;
//			continue;
//		}
//		b = b - 5;
//	}
//	printf("%d\n", a);
//	return 0;
//}