#define _CRT_SECURE_NO_WARNINGS 1
//���ֲ���
//#include <stdio.h>
//int check(int arr[], int value, int sz);
//int main()
//{
//	int arr[] = { 1, 2, 3, 4, 8, 9, 77, 456, 1234, 2222, 3333 };
//	int value = 0;
//	int site = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	scanf("%d", &value);
//	site = check(arr, value, sz);
//	if (-1 == site)
//	{
//		printf("�Ҳ���\n");
//	}
//	else
//	{
//		printf("�±���%d\n", site);
//	}
//
//	return 0;
//}
//int check(int arr[], int value, int sz)
//{
//	int left = 0;
//	int right = sz - 1;
//	int mid = 0;
//	while (left <= right)
//	{
//		mid = (left + right) / 2;
//
//		if (arr[mid] < value)
//		{
//			left = mid + 1;
//		}
//		else if (arr[mid] > value)
//		{
//			right = mid - 1;
//		}
//		else
//		{
//			return mid;
//		}
//	}
//	return -1;
//}


//ÿ����һ�κ���,num��ֵ��1
//#include <stdio.h>
//void Add(int* num)
//{
//	 (*num)++;
//}
//int main()
//{
//	int num = 0;
//	Add(&num);
//	printf("%d\n", num);
//	Add(&num);
//	printf("%d\n", num);
//	Add(&num);
//	printf("%d\n", num);
//	return 0;
//}

//��ʽ����
//printf()�������ص��Ǵ�ӡ����Ļ�ϵ��ַ��ĸ���
//#include <stdio.h>
//int main()
//{
//	printf("%d", printf("%d", printf("%d", 43)));
//	return 0;
//}

//����������
//#include <stdio.h>
//int Add(int x, int y);
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d%d", &a, &b);
//	printf("%d\n", Add(a, b));
//	return 0;
//}
// �����Ķ���
// �����Ķ���Ҳ��һ�����������
//int Add(int x, int y)
//{
//	return x + y;
//}

//#include <stdio.h>
////����������
//int g_val;
//
//int main()
//{
//	printf("%d\n", g_val);
//	return 0;
//}
////�����Ķ���
//int g_val = 456;


//#include <stdio.h>
////����
//int val;
//// ȫ�ֱ�������ʼ����ʱ��Ĭ����0
//int main()
//{
//	printf("%d\n", val);
//	return 0;
//}


//�ݹ�
//ջ��� Stack overflow 
//#include <stdio.h>
//int main()
//{
//	printf("asdff\n");
//	main();
//	return 0;
//}

//����1234 ���1 2 3 4 
//#include <stdio.h>
//void Print(unsigned int n);
//int main()
//{
//	unsigned int num = 0;
//	scanf("%u", &num);
//	Print(num);
//	return 0;
//}
//void Print(unsigned int n)
//{
//	if (n >= 10)
//	{
//		Print(n / 10);
//	}
//	printf("%u ", n % 10);
//}

//����ָ��+1�������1�����ͣ�����4���ֽ�
//#include <stdio.h>
////ģ��ʵ��strlen()����
//int my_strlen1(char* arr);
//int my_strlen2(char* arr);
//int main()
//{
//	char arr[] = "123456";
//	printf("%d\n", my_strlen1(arr));
//	printf("%d\n", my_strlen2(arr));
//	return 0;
//}
//int my_strlen1(char* arr)
//{
//	int count = 0;
//	while (*arr != '\0')
//	{
//		count++;
//		arr++;	//�ַ�ָ��+1�������1���ַ�
//	}
//	return count;
//}
////��������ʱ���������ַ����ĳ��ȣ��ݹ飩
//int my_strlen2(char* pc)
//{
//	if (*pc != '\0')
//	{
//		return 1 + my_strlen2(++pc);
//	}
//	else
//	{
//		return 0;
//	}
//}