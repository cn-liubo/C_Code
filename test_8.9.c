#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>


////дһ���ӷ��Ĵ���

//int Add(int x, int y)
//{
//	int z = x + y;
//	return z;
//}
//
//int main()
//{
//	//���� - 
//	//f(x, y) = x+y;
//	int num1 = 0;
//	int num2 = 0;
//	scanf("%d%d", &num1, &num2);
//	//int sum = num1 + num2;
//	//�����ķ�ʽ�����
//	//ϣ����һ���ӷ��ĺ���
//	//Add
//	int sum = Add(num1, num2);
//
//	printf("%d\n", sum);
//	return 0;
//}

//int main()
//{
//	int line = 0;
//	printf("�������\n");
//	while (line < 20000)
//	{ 
//		printf("���ô���:%d\n", line);
//		line++;
//	}
//	if (line >= 20000)
//	{
//		printf("��offer\n");
//	}
//	return 0;
//}
//
//
//int main()
//{
//	int input = 0;
//	printf("�������\n");
//	printf("��Ҫ�ú�ѧϰ��(1/0)��\n");
//	scanf("%d", &input);
//	if (input == 1)
//	{
//		printf("��offer\n");
//	}
//	else
//	{
//		printf("������\n");
//	}
//
//	return 0;
//}

//ע��


//int main()
//{
//	/*
//	��������a������ֵ10
//	*/
//	int a = 10;
//	
//	//��������arr������10��Ԫ�أ�������ֵΪ0
//	int arr[10] = { 0 };
//	return 0;
//}



//
//int main()
//{
//	printf("%d\n", strlen("abcdef"));
//	// \32��������һ��ת���ַ�
//	printf("%d\n", strlen("c:\test\328\test.c"));//14
//	return 0;
//}



//%d - ��ӡ����
//%s - ��ӡ�ַ���
//%c - ��ӡ�ַ�


//ʮ���Ƶ�����
//0-9
//123
//100
//8��������
//0-7��������ɵ�

//int main()
//{
//	//printf("%c\n", '\'');
//	/*printf("%s\n", "abc");
//	printf("%s\n", "a");
//	printf("%s\n", "\"");*/
//	/*printf("\a\a\a\a\a\a\a\a\a");*/
//	//printf("%c\n", '\101');//  '\ddd'
//	
//	//'\061'������ 49 ��ΪASCII ��ֵ��������ַ�
//	//16��������
//	//0-9-ABCDEF
//	//
//	printf("%c\n", '\x5F');
//	//5F
//	//80+15 = 95
//	//
//	return 0;
//}

//'\n';
//'\0';
//ת���ַ�
//׼��������˼
//
//int main()
//{
//	//printf("c:\\code\\test.c");
//	//printf("hehe\n");//\n-����
//
//	return 0;
//}

//strlen - string length - �ַ�������
//int main()
//{
//	char arr1[] = "bit";
//	char arr2[] = { 'b', 'i', 't' };
//	printf("%d\n", sizeof(arr1));
//	printf("%d\n", sizeof(arr2));
//
//	//char arr1[] = "bit";
//	//char arr2[] = { 'b', 'i', 't' ,'\0'};
//	//printf("%d\n", strlen(arr1));
//	//printf("%d\n", strlen(arr2));//?
//
//	return 0;
//}

//int main()
//{
//	char arr1[] = "abcdef";
//	char arr2[] = { 'a', 'b', 'c', 'd', 'e', 'f' ,'\0'};
//	//%s �Ǵ�ӡ�ַ���
//
//	printf("%s\n", arr1);
//	printf("%s\n", arr2);
//
//	return 0;
//}

//int main()
//{
//	//��˫������������һ���ַ������ַ���
//	"abc";
//	"a";
//	"";//���ַ���
//	printf("hello bit\n");
//	return 0;
//}

//ö�� - һһ�о�

////����һ��ö������
//enum Sex
//{
//	//ö������Sex����������ȡֵ - ö�ٳ���
//	MALE,
//	FEMALE,
//	SECRET
//};
//
//int main()
//{
////	enum Sex sex = FEMALE;
//	//MALE = 2;//err
//	printf("%d\n", MALE);
//	printf("%d\n", FEMALE);
//	printf("%d\n", SECRET);
//
//	return 0;
//}


//#define NUM 100
//
//int main()
//{
//	//NUM �� #define����ĳ���
//	char c[NUM];
//
//	//NUM = 200;
//	printf("��ӡ����ǣ�%d\n", NUM);
//
//	return 0;
//}


//int main()
//{
//	//1. ���泣��
//	/*100;
//	'a';
//	3.14;*/
//	//2. const���εĳ�����
//	//const int num = 10;
//	//printf("num = %d\n", num);
//	//num = 20;
//	//printf("num = %d\n", num);
//
//	const int n = 10;//������ - ���г����Եı���
//	int arr[n] = {1,2,3};
//
//	return 0;
//}


//int b = 100;

//int main()
//{
//	printf("b = %d\n", b);
//	{
//		int a = 10;
//		printf("a = %d\n", a);//ok
//	}
//	//printf("a = %d\n", a);//No
//	printf("b = %d\n", b);
//	return 0;
//}

//
//int a = 100;
//
//void test()
//{
//	printf("test()--> a = %d\n", a);
//}
//
//int main()
//{
//	printf("%d\n", a);
//	test();
//	return 0;
//}

//int main()
//{
//	{
//		int a = 10;
//		//printf("a = %d\n", a);
//	}
//	printf("a = %d\n", a);
//
//	return 0;
//}

//int main()
//{
//	int num1 = 0;
//	int num2 = 0;
//	printf("��������������:");
//
//	scanf("%d%d", &num1, &num2);
//	int sum = num1 + num2;
//
//	printf("%d\n", sum);
//	return 0;
//}


//
//ȫ�ֱ��� - ����{}�����ȫ�ֱ���
//int a = 100;
//
//int main()
//{
//	//�ֲ�����a - ����{}��ߵľ��Ǿֲ�����
//	int a = 10;
//	printf("%d\n", a);//��ȫ�ֱ����;ֲ�����������ͬʱ���ֲ�����
//
//	return 0;
//}
