#define _CRT_SECURE_NO_WARNINGS 1
//�⺯��
//#include <stdio.h>
//#include <string.h>
//int main()
//{
//	char arr1[20] = { 0 };
//	char arr2[] = "Hello World!";
//	//strcpy(arr1, arr2);
//	//printf("%s\n", arr1);
//	char* arr3 = strcpy(arr1, arr2);
//	printf("%s\n", arr1);
//	printf("%s\n", arr2);
//	printf("%s\n", arr3);
//	return 0;
//}


//#include <stdio.h>
//#include <string.h>
//int main()
//{
//	char arr1[] = "Hello World!";
//	printf("%s\n", arr1);
//	memset(arr1, '1', 3);	//�ڶ�������ֻ����һ���ַ�����Ϊ'123',�ض�Ϊ'3'
//	printf("%s\n", arr1);
//	return 0;
//}


//�Զ��庯��
// ���ֵ����ֵ���ã�
//#include <stdio.h>
//int get_max(int x, int y)
//{
//	return x > y ? x : y;
//}
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d%d", &a, &b);
//	int m = get_max(a, b);
//	printf("%d\n", m);
//	return 0;
//}


//��������������ַ���ã�
// ����������ʱ��ʵ�δ��ݸ��βΣ���ʱ�β���ʵ�ε�һ����ʱ������
// ���βεĸı䲻�ı�ʵ��
//#include <stdio.h>
//void swap1(int x, int y)
//{
//	int temp = x;
//	x = y;
//	y = temp;
//}

//void swap2(int* x, int* y)
//{
//	int tmp = *x;
//	*x = *y;
//	*y = tmp;
//}

//int main()
//{
//	int a = 2;
//	int b = 2;
//	scanf("%d%d", &a, &b);
//	//swap1(a, b);
//	//printf("a = %d, b = %d\n", a, b);
//	swap2(&a, &b);
//	printf("a = %d, b = %d\n", a, b);
//
//	return 0;
//}


//�����ж�����(100-200)
//#include <stdbool.h>
//#include <stdio.h>
//bool is_prime(int n)
//{
//	int i = 0;
//	for (i = 2; i * i <= n; i++)
//	{
//		if (!(n % i))
//		{
//			return false;
//		}
//	}
//	return true;
//}
//
//int main()
//{
//	int i = 0;
//	for (i = 101; i <= 200; i += 2)
//	{
//		if (is_prime(i))
//		{
//			printf("%d ", i);
//		}
//	}
//	return 0;
//}


//�����ж�����(1000-2000)
//#include <stdbool.h>
//#include <stdio.h>
//bool is_leap_year(int n)
//{
//	//if (n % 100 != 0 || n % 400 == 0)
//	//{
//	//	return true;
//	//}
//	//else
//	//{
//	//	return false;
//	//}
//
//	//return (n % 100 != 0 || n % 400 == 0) ? true : false;
//
//	//return ((n % 100) || !(n % 400)) ? true : false;
//
//	return n % 100 || !(n % 400);
//}

//int main()
//{
//	int i = 0;
//	for (i = 1000; i <= 2000; i += 4)
//	{
//		if (is_leap_year(i))
//		{
//			printf("%d ", i);
//		}
//	}
//	return 0;
//}