#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>



int Fib(int num)
{
	if (num > 2)
	{
		return Fib(num - 1) + Fib(num - 2);
	}
	else
	{
		return 1;
	}
}
int main()
{
	int num = 10;
	int ret = Fib(num);
	printf("%d\n", ret);
	return 0;
}

//double Pow(int n, int k)
//{
//	if (k > 0)
//	{
//		return n * Pow(n, k - 1);
//	}
//	else if (k == 0)
//	{
//		return 1;
//	}
//	else if (k < 0)
//	{
//		return 1.0 / Pow(n, -k);
//	}
//}
//int main()
//{
//	int n = 2;
//	int k = 3;
//	//double ret = Pow(n, k);
//	//printf("%lf\n", ret);
//	int ret1 = Power(n, k);
//	printf("%d\n", ret1);
//	return 0;
//}

//int DigitSum(int num)
//{
//	int sum = 0;
//	if (num > 9)
//		sum = DigitSum(num / 10);
//	sum += num % 10;
//	return sum;
//}
//int main()
//{
//	int num = 0;
//	scanf("%d", &num);
//	int ret = DigitSum(num);
//	printf("%d\n", ret);
//	return 0;
//}

//int my_strlen(char* str)
//{
//	int count = 0;
//	while (*str != '\0')
//	{
//		count++;
//		str++;
//	}
//	return count;
//}
//void reverse_string1(char* str)
//{
//	int left = 0;
//	int right = my_strlen(str) - 1;
//	while (left <= right)
//	{
//		char temp = str[left];
//		str[left] = str[right];
//		str[right] = temp;
//		left++;
//		right--;
//	}
//}
////void reverse_string(char* arr)
////{
////	char* left = arr;
////	char* right = arr + strlen(arr) - 1;
////
////
////	while (left < right)
////	{
////		char tmp = *left;
////		*left = *right;
////		*right = tmp;
////
////
////		left++;
////		right--;
////	}
////}
//void reverse_string2(char* str)
//{
//	char tmp = str[0];
//	int len = my_strlen(str);
//	str[0] = str[len - 1];
//	str[len - 1] = '\0';
//	//�м��ַ���������
//	if (strlen(str + 1) > 1)
//		reverse_string2(str + 1);
//	str[len - 1] = tmp;
//}
////void reverse_string(char* arr)
////{
////	int len = strlen(arr);
////	char tmp = *arr;
////	*arr = *(arr + len - 1);
////
////	*(arr + len - 1) = '\0';
////	if (strlen(arr + 1) >= 2)
////		reverse_string(arr + 1);
////
////	*(arr + len - 1) = tmp;
////}
//int main()
//{
//	char arr[] = "abcdef";
//	reverse_string1(arr);
//	printf("%s\n", arr);
//
//	reverse_string2(arr);
//	printf("%s\n", arr);
//	return 0;
//}

//int my_strlen1(char* str)
//{
//	int count = 0;
//	while (*str != '\0')
//	{
//		count++;
//		str++;
//	}
//	return count;
//}
//int my_strlen2(char* str)
//{
//	if (*str != '\0')
//		return 1 + my_strlen2(++str);
//	else
//		return 0;
//}
//int main()
//{
//	char arr[] = "abcdef";
//	int ret1 = my_strlen1(arr);
//	printf("%d\n", ret1);
//
//	int ret2 = my_strlen2(arr);
//	printf("%d\n", ret2);
//	return 0;
//}

//int Fac1(int num)
//{
//	if (num <= 1)
//		return 1;
//	else
//		return num * Fac1(num - 1);
//}
//int Fac2(int num)
//{
//	int sum = 1;
//	for (int i = 1; i <= num; i++)
//	{
//		sum *= i;
//	}
//	return sum;
//}
//int main()
//{
//	int num = 0;
//	scanf("%d", &num);
//	int ret1 = Fac1(num);
//	printf("%d\n", ret1);
//
//	int ret2 = Fac2(num);
//	printf("%d\n", ret2);
//	return 0;
//}

//void print(int num)
//{
//	if (num > 9)
//		print(num % 10);
//	printf("%d ", num / 10);
//}
//int main()
//{
//	int num = 0;
//	scanf("%d", &num);
//	print(num);
//	return 0;
//}



//void table(int num)
//{
//	for (int i = 1; i <= num; i++)
//	{
//		for (int j = 1; j <= i; j++)
//		{
//			printf("%d * %d = %d  ", j, i, i * j);
//		}
//		printf("\n");
//	}
//}
//
//int main()
//{
//	int num = 0;
//	printf("������һ��������ʾnum * num�ĳ˷��ھ���");
//	scanf("%d", &num);
//	table(num);
//	return 0;
//}

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