#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>

////�ݹ�ʵ��n��k�η�
//
//double Pow(int n, int k)
//{
//	if (k == 0)
//		return 1.0;
//	else if (k > 0)
//		return (double)n * Pow(n, k - 1);
//	else
//		return 1.0 / (Pow(n, -k));
//}
//int main()
//{
//	int n = 0;
//	int k = 0;
//	scanf("%d%d", &n, &k);
//	double ret = Pow(n, k);
//	printf("%lf\n", ret);
//	return 0;
//}

//����һ������ÿλ֮�ͣ��ݹ�ʵ�֣�
//
//int DigitSum(int n)
//{
//	if (n > 9)
//	{
//		return DigitSum(n / 10) + n % 10;
//	}
//	else
//	{
//		return n;
//	}
//}
//int main()
//{
//	//DigitSum(1234)
//	//DigitSum(123)+1234%10
//	//DigitSum(12) 123%10 + 1234%10
//	//DigitSum(1) + 12%10 + 123%10 + 1234%10
//	//1+2+3+4
//	int n = 0;
//	scanf("%d", &n);
//	int ret = DigitSum(n);
//	printf("%d\n", ret);
//	return 0;
//}

//void reverse_string(char arr[])
//{
//	int left = 0;
//	int right = strlen(arr)-1;
//
//	while (left<right)
//	{
//		char tmp = arr[left];
//		arr[left] = arr[right];
//		arr[right] = tmp;
//		left++;
//		right--;
//	}
//}

//abcdefg
//
//int my_strlen(char* str)
//{
//	int count = 0;
//	while (*str)
//	{
//		count++;
//		str++;
//	}
//	return count;
//}
//
//void reverse_string(char arr[])
//{
//	char tmp = arr[0];
//	int len = my_strlen(arr);
//	arr[0] = arr[len - 1];
//	arr[len - 1] = '\0';
//	//�м��ַ���������
//	if (strlen(arr+1)>1)
//		reverse_string(arr+1);
//	arr[len - 1] = tmp;
//}
//
//
//int main()
//{
//	char arr[] = "abcdefg";
//	//����-����-arr
//	//fedcba
//	reverse_string(arr);
//	printf("%s\n", arr);
//	return 0;
//}


//
//void print_table(int n)
//{
//	int i = 0;
//	for (i = 1; i <= n; i++)
//	{
//		int j = 0;
//		//��ӡһ��-������
//		for (j = 1; j <= i; j++)
//		{
//			//��ӡһ��
//			printf("%d*%d=%-2d ", i, j, i*j);
//		}
//		printf("\n");
//	}
//}
//
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	print_table(n);
//	return 0;
//}

//extern int Add(int x, int y);
//
//int main()
//{
//	{
//		int a = 10;
//	}
//	printf("a = %d\n", a);
//	return 0;
//}

//main����������
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int c = Add(a, b);
//	printf("c = %d\n", c);
//
//	return 0;
//}
//int test()
//{
//	int a = 10;
//	int b = 20;
//	return b,a;//a,b  --- ���ű��ʽ
//}

//int x = 0;
//int y = 0;
//
//void test()
//{
//	int a = 10;
//	int b = 20;
//	x = a;
//	y = b;
//}
//
//int main()
//{
//
//	test();
//	printf("%d %d\n", x, y);
//	return 0;
//}


//void test(int arr[])
//{
//	int a = 10;
//	int b = 20;
//	arr[0] = a;
//	arr[1] = b;
//}
//
//int main()
//{
//	int arr[2] = {0};
//	test(arr);
//	printf("%d %d\n", arr[0], arr[1]);
//	return 0;
//}

//1*1=1
//2*1=2 2*2=4
//3*1=3 3*2=6 3*3=9
//4*1=4 4*2=8 4*3=12 4*4=16
//...
//9*1=9 9*2=18 ...


//int main()
//{
//	int i = 0;
//	//����
//	for (i = 1; i <= 9; i++)
//	{
//		int j = 0;
//		//��ӡһ��-������
//		for (j = 1; j <= i; j++)
//		{
//			//��ӡһ��
//			printf("%d*%d=%-2d ", i, j, i*j);
//		}
//		printf("\n");
//	}
//
//	return 0;
//}
//
//int main()
//{
//	int arr[10] = { 0 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	//�ҳ���10�����������ֵ
//	int max = arr[0];
//	for (i = 1; i < sz; i++)
//	{
//		if (arr[i]>max)
//		{
//			max = arr[i];
//		}
//	}
//
//	printf("max = %d\n", max);
//
//	return 0;
//}

//     /  ����������   �������߶���������ʱ��ִ�е�����������
//     1/2 != 0.5    == 0
//     /   ���߲�������ֻҪ��һ����������ִ�еľ��Ǹ������ĳ���

//int main()
//{
//	int i = 0;
//	double sum = 0.0;
//	int flag = 1;
//	for (i = 1; i <= 100; i++)
//	{
//		sum += flag * 1.0 / i;
//		flag = -flag;
//	}
//
//	printf("sum = %lf\n", sum);
//
//	return 0;
//}


//#include <stdio.h>
//int main()
//{
//	int a = 0, b = 0;
//	for (a = 1, b = 1; a <= 100; a++)
//	{
//		if (b >= 20) 
//			break;
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



//
//���n��쳲����������������������
//
//
//int Fib1(int m)
//{
//	if (m <= 2)
//		return 1;
//	else
//		return Fib(m - 1) + Fib(m - 2);
//}
//
//int Fib(int m)
//{
//	int a = 1;
//	int b = 1;
//	int c = 1;
//
//	while (m>2)
//	{
//		c = a + b;
//		a = b;
//		b = c;
//		m--;
//	}
//	return c;
//}
//
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int ret = Fib(n);
//	printf("%d\n", ret);
//
//	return 0;
//}