#define _CRT_SECURE_NO_WARNINGS 1

#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>



////շת�����
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	scanf("%d%d", &a, &b);
//
//	while (c = a % b)
//	{
//		a = b;
//		b = c;
//	}
//
//	printf("���Լ����:%d\n", b);
//	return 0;
//}

//�������
//
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int min = 0;
//	int i = 0;
//	scanf("%d%d", &a, &b);
//	if (a > b)
//		min = b;
//	else
//		min = a;
//
//	for (i = min; i >= 1; i--)
//	{
//		if (a%i == 0 && b%i == 0)
//		{
//			break;
//		}
//	}
//	printf("���Լ����:%d\n", i);
//	return 0;
//}
//#include <stdio.h>
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



//
//int main()
//{
//	int i = 0;
//	for (i = 3; i <= 100; i += 3)
//	{
//		printf("%d ", i);
//	}
//	//for (i = 1; i <= 100; i++)
//	//{
//	//	//�ж�i�Ƿ�Ϊ3�ı���
//	//	if (i % 3 == 0)
//	//	{
//	//		printf("%d ", i);
//	//	}
//	//}
//	return 0;
//}

//
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	scanf("%d%d%d", &a, &b, &c);//2 3 1
//	//����
//	if (a < b)
//	{
//		int tmp = a;
//		a = b;
//		b = tmp;
//	}
//	if (a < c)
//	{
//		int tmp = a;
//		a = c;
//		c = tmp;
//	}
//	if (b < c)
//	{
//		int tmp = b;
//		b = c;
//		c = tmp;
//	}
//
//	printf("%d %d %d\n", a, b, c);
//	return 0;
//}


//int main()
//{
//	int i = 0;
//	for (i = 0; i<10; i++)
//	{
//		if (i = 5)
//			printf("%d ", i);//5 5 5 ...
//	}
//	return 0;
//}


//
//#include <stdio.h>
//int sum(int a)
//{
//	int c = 0;
//	static int b = 3;
//	c += 1;
//	b += 2;
//	return (a + b + c);
//}
//int main()
//{
//	int i;
//	int a = 2;
//	for (i = 0; i < 5; i++)
//	{
//		printf("%d,", sum(a));
//	}
//}
//

//
//int main()
//{
//	int n = 10;
//	//int arr[n] = { 0 };//�����Сָ��һ���ǳ������߳������ʽ//err
//	//const ������
//
//	return 0;
//}

//�ػ�����
//������������������ʾ1�����ڹػ���������룺��������ȡ���ػ�!


//
//int main()
//{
//	char input[20] = { 0 };
//	system("shutdown -s -t 60");
//
//	while (1)
//	{
//		printf("��ע�⣬��ĵ�����1�����ڹػ���������룺��������ȡ���ػ�\n");
//		scanf("%s", input);
//		//�Ƚ������ַ���-strcmp
//		if (strcmp(input, "������") == 0)
//		{
//			system("shutdown -a");
//			break;
//		}
//	}
//
//	return 0;
//}



//
//int main()
//{
//	char input[20] = { 0 };
//	system("shutdown -s -t 60");
//
//again:
//	printf("��ע�⣬��ĵ�����1�����ڹػ���������룺��������ȡ���ػ�\n");
//	scanf("%s", input);
//	//�Ƚ������ַ���-strcmp
//	if (strcmp(input, "������") == 0)
//	{
//		system("shutdown -a");
//	}
//	else
//	{
//		goto again;
//	}
//	return 0;
//}

//int main()
//{
//flag:
//	printf("hehe\n");
//	printf("haha\n");
//	goto flag;
//	return 0;
//}


//��������Ϸ
//1. �����������һ������
//2. ��Ҳ�����
//
//void menu()
//{
//	printf("******************************\n");
//	printf("******      1. play     ******\n");
//	printf("******      0. exit     ******\n");
//	printf("******************************\n");
//}
//
////RAND_MAX = 32767 - rand�������ص���һ��0-32767֮��������
// 
//void game()
//{
//	//1. ��������� 1-100 ֮��������
//	//C��������һ������������ĺ��� - rand
//	//time����
//	int guess = 0;
//	int ret = rand()%100+1;
//	//printf("%d\n", ret);
//	//2. ������
//	while (1)
//	{
//		printf("�������:>");
//		scanf("%d", &guess);
//		if (guess > ret)
//		{
//			printf("�´���\n");
//		}
//		else if (guess < ret)
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
//		//1. ��ӡһ���˵�
//		menu();
//		printf("��ѡ��:>");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			//��Ϸ���߼�
//			game();//��������Ϸ�Ĵ���
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

//
//int main()
//{
//	int i = 0;
//	//������ȷ�������ǣ�"123456"
//
//	char password[20] = { 0 };
//	for (i = 0; i < 3; i++)
//	{
//		printf("����������:>");
//		scanf("%s", password);
//		//�ж��������ȷ�� - �Ƚ�2���ַ����Ĵ�С��ϵ
//		//strcmp - �����������Ƚ��ַ����Ĵ�С��ϵ��
//		//�⺯��-����Ҫ��ͷ�ļ��ǣ�string.h
//		if (strcmp(password, "123456") == 0)
//		{
//			printf("������ȷ\n");
//			break;
//		}
//		else
//		{
//			printf("���������������\n");
//		}
//	}
//	if (i == 3)
//	{
//		printf("������������˳�����\n");
//	}
//	return 0;
//}

//��һ�����������в��Ҿ����ĳ������n

//
//welcome to bit!!!!!
//###################
//w#################!
//we###############!!
//wel#############!!!
//....
//welcome to bit!!!!!
//
//char arr[] = "bit";
//[b][i][t][\0]
// 0  1  2
//
//#include <windows.h>

//int main()
//{
//	char arr1[] = "welcome to bit!!!!!";
//	char arr2[] = "###################";
//	int left = 0;
//	int right = strlen(arr1)-1;
//
//	while (left<=right)
//	{
//		arr2[left] = arr1[left];
//		arr2[right] = arr1[right];
//		printf("%s\n", arr2);
//		Sleep(1000);
//		system("cls");//cls �����Ļ
//		left++;
//		right--;
//	}
//	printf("%s\n", arr2);
//
//	return 0;
//}

//���ֲ���
//int main()
//{
//	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//
//	int n = 17;
//	
//	int left = 0;
//	int right = 9;
//
//	//���������±������м�Ԫ�ص��±�
//	while (left<=right)
//	{
//		int mid = (left + right) / 2;
//		if (arr[mid] < n)
//		{
//			left = mid + 1;
//		}
//		else if (arr[mid]>n)
//		{
//			right = mid - 1;
//		}
//		else
//		{
//			printf("�ҵ��ˣ��±��ǣ�%d\n", mid);
//			break;
//		}
//	}
//	if (left > right)
//	{
//		printf("�Ҳ�����\n");
//	}
//	return 0;
//}



//���β���
//int main()
//{
//	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//
//	int n = 7;
//	int i = 0;
//	
//	for (i = 0; i < 10; i++)
//	{
//		if (arr[i] == n)
//		{
//			printf("�ҵ���:%d\n", i);
//			break;
//		}
//	}
//	if (i == 10)
//	{
//		printf("�Ҳ���\n");
//	}
//	return 0;
//}



//���� n�Ľ׳�
//1*2*3*...*n


//int main()
//{
//	int i = 1;
//	int n = 0;
//	int ret = 1;
//	int sum = 0;
//	int j = 0;
//	//1+2+6 = 9
//	for (j = 1; j <= 3; j++)
//	{
//		//�������j�Ľ׳ˣ�retӦ���Ǵ�1��ʼ
//		ret *= j;
//		sum += ret;
//	}
//
//	printf("%d\n", sum);
//
//	return 0;
//}


//
//int main()
//{
//	int i = 1;
//	int n = 0;
//	int ret = 1;
//	int sum = 0;
//	int j = 0;
//	//1+2+6 = 9
//	for (j = 1; j <= 3; j++)
//	{
//		//�������j�Ľ׳ˣ�retӦ���Ǵ�1��ʼ
//		ret = 1;
//		for (i = 1; i <= j; i++)
//		{
//			ret *= i;
//		}
//		sum += ret;
//	}
//
//	printf("%d\n", sum);
//
//	return 0;
//}


//
//int main()
//{
//	int i = 1;
//	int n = 0;
//	int ret = 1;
//
//	scanf("%d", &n);//5
//
//	//while (i <= n)
//	//{
//	//	ret = ret*i;
//	//	i++;
//	//}
//
//	for (i = 1; i <= n; i++)
//	{
//		ret *= i;
//	}
//
//	printf("%d\n", ret);
//
//	return 0;
//}