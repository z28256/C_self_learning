#define _CRT_SECURE_NO_WARNINGS 1
//二分查找
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
//		printf("找不到\n");
//	}
//	else
//	{
//		printf("下标是%d\n", site);
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


//每调用一次函数,num的值加1
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

//链式访问
//printf()函数返回的是打印在屏幕上的字符的个数
//#include <stdio.h>
//int main()
//{
//	printf("%d", printf("%d", printf("%d", 43)));
//	return 0;
//}

//函数的声明
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
// 函数的定义
// 函数的定义也是一种特殊的声明
//int Add(int x, int y)
//{
//	return x + y;
//}

//#include <stdio.h>
////变量的声明
//int g_val;
//
//int main()
//{
//	printf("%d\n", g_val);
//	return 0;
//}
////变量的定义
//int g_val = 456;


//#include <stdio.h>
////定义
//int val;
//// 全局变量不初始化的时候，默认是0
//int main()
//{
//	printf("%d\n", val);
//	return 0;
//}


//递归
//栈溢出 Stack overflow 
//#include <stdio.h>
//int main()
//{
//	printf("asdff\n");
//	main();
//	return 0;
//}

//输入1234 输出1 2 3 4 
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

//整形指针+1，向后跳1个整型，就是4个字节
//#include <stdio.h>
////模拟实现strlen()函数
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
//		arr++;	//字符指针+1，向后跳1个字符
//	}
//	return count;
//}
////不创建临时变量，求字符串的长度（递归）
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