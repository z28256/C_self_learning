#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//int main()
//{
//	int i = 1;
//	while (i <= 10)
//	{
//		if (i == 5)
//			continue;		//打印 1 2 3 4，然后进入死循环
//		printf("%d ", i);
//		i++;
//	}
//
//	//while (i < 10)
//	//{
//	//	i++;
//	//	if (i == 5)
//	//		continue;		//打印1 2 3 4  6 7 8 9 10
//	//	printf("%d ", i);	
//	//}
//	return 0;
//}


//#include <stdio.h>
//int main()
//{
//	char password[20] = { 0 };
//	int ch = 0;
//	printf("请输入密码：");
//	scanf("%s", password);		//数组名本来就是地址
//
//	while (getchar() != '\n')	//清理缓存区
//	{
//		;
//	}
//
//	printf("请确认密码(Y/N):");
//	ch = getchar();
//	if (ch == 'Y')
//	{
//		printf("确认成功\n");
//	}
//	else
//	{
//		printf("确认失败\n");
//	}
//	return 0;
//}


//只输出数字字符
//#include <stdio.h>
//int main()
//{
//	char ch = 0;
//	while ((ch = getchar()) != EOF)		//一次 Ctrl + z就可以结束
//	{
//		if (ch < '0' || ch > '9')
//		{
//			continue;
//		}
//		putchar(ch);
//	}
//	return 0;
//}


//for打印1 - 10
//#include <stdio.h>
//int main()
//{
//	int i = 0;
//	for (i = 1; i <= 10; i++)
//	{
//		if (i == 5)
//			continue;		//1 2 3 4   6 7 8 9 10
//		printf("%d ", i);
//	}
//	return 0;
//}


//#include <stdio.h>
//int main()
//{
//	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//
//	return 0;
//}


//#include <stdio.h>
//int main()
//{
//	//for (;;)				//死循环
//	//{
//	//	printf("*****\n");
//	//	printf("****\n");
//	//	printf("***\n");
//	//	printf("**\n");
//	//	printf("*\n");
//	//}
//
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < 3; i++)
//	{
//		//for (j = 0; j < 3; j++)		//打印9次
//		//{
//		//	printf("haha\n");
//		//}
//		for ( ; j < 3; j++)		//打印3次,循环一次后j = 3,不再打印
//		{
//			printf("haha\n");
//		}
//	}
//	return 0;
//}


//#include <stdio.h>
//int main()
//{
//	int i = 1;
//	do
//	{
//		printf("%d ", i);
//		if (5 == i)			//死循环，打印5
//			continue;
//		i++;
//	} while (i <= 10);
//	return 0;
//}


//阶乘
//#include <stdio.h>
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int i = 0;
//	int ret = 1;
//	for (i = 1; i <= n; i++)
//	{
//		ret *= i;
//	}
//	printf("%d\n", ret);
//	return 0;
//}


//1到n的阶乘和
//#include <stdio.h>
//int main()
//{
//	int n = 0;
//	int i = 0;
//	int j = 0;
//	int ret = 1;
//	int sum = 0;
//	scanf("%d", &n);
//	for (i = 1; i <= n; i++)
//	{
//		ret = 1;		//ret应该在每一次循环重新赋值为1
//		for (j = 1; j <= i; j++)
//		{
//			ret *= j;
//		}
//		sum += ret;
//	}
//	printf("%d\n", sum);
//	return 0;
//}


//更快的方法
//#include <stdio.h>
//int main()
//{
//	int n = 0;
//	int i = 0; 
//	int ret = 1;
//	int sum = 0;
//	scanf("%d", &n);
//	for (i = 1; i <= n; i++)
//	{
//		ret *= i;
//		sum += ret;
//	}
//	printf("%d\n", sum);
//	return 0;
//}


//在有序数组中查找某个具体数字(二分查找/折半查找)
//#include <stdio.h>
//int main()
//{
//	int arr[10] = { 1, 2, 3, 4, 5, 6, 17, 18, 19, 20 };
//	int left = 0;
//	int right = 9;
//	int mid = 0;
//	int k = 7;		//查找元素
//	int flag = 0;
//
//	while (left <= right)
//	{
//		mid = (left + right) / 2;		//求中间元素的下标
//		if (arr[mid] < k)
//		{
//			left = mid + 1;
//		}
//		else if (arr[mid] > k)
//		{
//			right = mid - 1;
//		}
//		else
//		{
//			flag = 1;
//			printf("找到了，下标为%d\n", mid);
//			break;		//找到后，跳出循环
//		}
//
//	}
//	if (flag == 0)
//	{
//		printf("找不到\n");
//	}
//
//	return 0;
//}


//#include <stdio.h>
//int main()
//{
//	int i = 0;
//	int k = 0;
//	int count = 0;
//	for (i = 0, k = 0; k = 0; i++, k++)		//判断为 k = 0,0次循环
//	{
//		k++; 
//		count++;
//	}
//	printf("%d\n", count);
//	return 0;
//}

