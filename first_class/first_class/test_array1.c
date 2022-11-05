#define _CRT_SECURE_NO_WARNINGS 1
//函数实现n的k次方，使用递归实现
//#include <stdio.h>
//double Pow(int n, int k)
//{
//	if (k == 0)
//	{
//		return 1.0;
//	}
//	else if (k > 0)
//	{
//		return n * Pow(n, k - 1);
//	}
//	else
//	{
//		return 1.0 / Pow(n, -k);
//	}
//}
//
//int main()
//{
//	int n = 0;
//	int k = 0;
//	scanf("%d%d", &n, &k);
//	double ret = Pow(n, k);
//	printf("%.3f\n", ret);
//	return 0;
//}


//递归函数Digitsum(n),输入一个非负整数，返回他的数字之和
//#include <stdio.h>
//int Digitsum(int n)
//{
//	if (n / 10)
//	{
//		return Digitsum(n / 10) + n % 10;
//	}
//	else
//	{
//		return n;
//	}
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int ret = Digitsum(n);
//	printf("%d\n", ret);
//	return 0;
//}


//字符串倒序
//#include <stdio.h>
//int Strlen(char* str)
//{
//	int count = 0;
//	while (*str != '\0')
//	{
//		count++;
//		str++;
//	}
//	return count;
//}
//void reverse_string(char* string)
//{
//	int len = Strlen(string);
//	char tmp = *string;
//	*string = *(string + len - 1);
//	*(string + len - 1) = '\0';
//	if (Strlen(string + 1) >= 2)
//	{
//		reverse_string(string + 1);
//	}
//	*(string + len - 1) = tmp;
//}
////void reverse_string(char* string)
////{
////	int len = Strlen(string);
////	int left = 0;
////	int right = len - 1;
////	while (left < right)
////	{
////		char tmp = *(string + left);
////		*(string + left) = *(string + right);
////		*(string + right) = tmp;
////		left++;
////		right--;
////	}
////
////}
//int main()
//{
//	char arr[10] = "asdfg";
//	reverse_string(arr);
//	printf("%s\n", arr);
//	return 0;
//}


//数组
//int main()
//{
//	int arr[4 + 9] = { 0 };
//	int arr1[10] = { 0 };
//	int n = 10;
//	int arr2[n];//不支持变长数组，而且变长数组不能初始化
//	return 0;
//}


//#include <stdio.h>
//int main()
//{
//	int arr[5] = { 1, 2, 3, 4, 5 };	//完全初始化
//	int arr1[5] = { 1, 2, 3 };//不完全初始化，剩余元素默认为0
//	int arr2[] = { 1, 2, 3, 4, 5 };//根据初始化的内容确定元素个数
//
//	char arr3[10] = "abc";
//	char arr4[] = "abc";
//
//	char arr5[] = "abc";
//	char arr6[] = { 'a', 'b', 'c' };
//
//	printf("%s\n", arr5);
//	printf("%s\n", arr6);
//	return 0;
//}


//#include <stdio.h>
//int main()
//{
//	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int* p = &arr[0];
//	//for (i = 0; i < sz; i++)
//	//{
//	//	printf("%d\n", *(p + i));
//	//}
//	//for (i = 0; i < sz; i++)
//	//{
//	//	printf("arr[%d]   %p   %p\n", i, (p + i), &arr[i]);
//	//}
//	////按顺序打印
//	//for (i = 0; i < sz; i++)
//	//{
//	//	printf("%d ", arr[i]);
//	//}
//	//printf("\n");
//	////倒叙打印
//	//for (i = sz - 1; i >= 0; i--)
//	//{
//	//	printf("%d ", arr[i]);
//	//}
//	//printf("\n");
//	////间隔打印
//	//for (i = 0; i < sz; i += 2)
//	//{
//	//	printf("%d ", arr[i]);
//	//}
//	return 0;
//}


//二维数组
//#include <stdio.h>
//int main()
//{
//	int arr1[3][4] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12 };
//	int arr2[3][4] = { 7, 8, 9, 10, 11, 12 };
//	int arr3[2][3] = { {1, 2, 5}, {2, 3, 8}};
//	//二维数组的行可以省略，但是列不能省略
//	int arr4[][4] = { 1, 2, 3, 4, 5, 6 };
//
//	int i = 0;
//	for (i = 0; i < sizeof(arr1) / sizeof(arr1[0]); i++)
//	{
//		int j = 0;
//		for (j = 0; j < sizeof(arr1[0]) / sizeof(arr1[0][0]); j++)
//		{
//			printf("%d ", arr1[i][j]);
//		}
//	}
//	printf("\n");
//
//	int* p = &arr1[0][0];
//	for (i = 0; i < sizeof(arr1) / sizeof(arr1[0][0]); i++)
//	{
//		printf("%d ", *(p + i));
//	}
//	printf("\n");
//
//	for (i = 0; i < sizeof(arr1) / sizeof(arr1[0]); i++)
//	{
//		int j = 0;
//		for (j = 0; j < sizeof(arr1[0]) / sizeof(arr1[0][0]); j++)
//		{
//			printf("%d ", *(*(arr1 + i) + j));
//		}
//	}
//	printf("\n");
//
//	return 0;
//}


//#include <stdio.h>
//int main()
//{
//	int arr[10] = { 0 };
//	int i = 0;
//	for (i = 0; i <= 10; i++)//错误代码 i < 10
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;;
//}