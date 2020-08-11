#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>


//��ŵ��
void Hanoi(int n, char A, char B, char C)
{
	/*
	�����1������
		ֱ�ӽ�A�����ϵ����Ӵ�A�Ƶ�C
	����
		�Ƚ�A�����ϵ�n-1�����ӽ���C�Ƶ�B
		��ֱ�ӽ�A�����ϵ����Ӵ�A�Ƶ�C
		���B�����ϵ�n-1�����ӽ���A�Ƶ�C
	*/
	//�������������1
	if (1 == n)
	{
		printf("�����Ϊ%d������ֱ�Ӵ�%c�����Ƶ�%c����\n", n, A, C);
	}
	else
	{
		Hanoi(n - 1, A, C, B);
		printf("�����Ϊ%d������ֱ�Ӵ�%c�����Ƶ�%c����\n", n, A, C);
		Hanoi(n - 1, B, A, C);
	}
}
int main()
{
	char c1 = 'A';
	char c2 = 'B';
	char c3 = 'C';
	int n;

	printf("������Ҫ�ƶ����ӵĸ�����");
	scanf("%d", &n);

	Hanoi(n, 'A', 'B', 'C');//��A�ϵ������Ƶ�C��

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