#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
////n的阶乘
//int Fac(int n)
//{
//	if (n <= 1)
//	{
//		return 1;
//	}
//	else
//	{
//		return n * Fac(n - 1);
//	}
//}
//int fac(int n)
//{
//	int i = 0;
//	int ret = 1;
//	for (i = 1; i <= n; i++)
//	{
//		ret *= i;
//	}
//	return ret;
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	printf("%d\n", Fac(n));
//	printf("%d\n", fac(n));
//	return 0;
//}


//斐波那契数
//#include <stdio.h>
//int count = 0;
//int Fib(int n)
//{
//	//if (n == 3)
//	//{
//	//	count++;	//计算 n = 3 的次数
//	//}
//	if (n <= 2)
//	{
//		return 1;
//	}
//	else
//	{
//		return Fib(n - 1) + Fib(n - 2);
//	}
//}
//int Fib1(int n)
//{
//	int n1 = 1;
//	int n2 = 1;
//	int ret = 1;
//	while (n > 2)
//	{
//		ret = n1 + n2;
//		n1 = n2;
//		n2 = ret;
//		n--;
//	}
//	return ret;
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	printf("%d\n", Fib1(n));
//	printf("%d\n", Fib(n));
//	//printf("count = %d\n", count);//3的次数
//	return 0;
//}


//#include <stdio.h>
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


//乘法表
//#include <stdio.h>
//int main()
//{
//	int i = 0;
//	int line = 0;
//	scanf("%d", &line);
//	for (i = 1; i <= line; i++)
//	{
//		int j = 0;
//		for (j = 1; j <= i; j++)
//		{
//			printf("%d x %d = %-2d ", i, j, i * j);
//		}
//		printf("\n");
//	}
//	return 0;
//}


//求10个数中的最大值
//#include <stdio.h>
//#define SIZE 10
//int main()
//{
//	int arr[SIZE] = { 0 };
//	int i = 0;
//	for (i = 0; i < SIZE; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	int max = arr[0];
//	for (i = 1; i < SIZE; i++)
//	{
//		max = max > arr[i] ? max : arr[i];
//	}
//	printf("%d\n", max);
//	return 0;
//}


//计算1/1-1/2+1/3-1/4+1/5...+1/99-1/100
//#include <stdio.h>
//int main(void)
//{
//	int i = 0;
//	double sum = 0.0;
//	int flag = 1;
//	for (i = 1; i <= 100; i++)
//	{
//		sum += flag * (1.0 / i);
//		flag = -flag;
//	}
//	printf("%f\n", sum);
//	return 0;
//}


//1到100中有多少个9
//#include <stdio.h>
//int main()
//{
//	int i = 0;
//	int count = 0;
//	for (i = 1; i <= 100; i++)
//	{
//		if (i % 10 == 9)
//		{
//			count++;
//		}
//		if (i / 10 == 9)
//		{
//			count++;
//		}
//	}
//	printf("%d\n", count);
//	return 0;
//}


//求和
//#include <stdio.h>
//int main()
//{
//	int n = 0;
//	long long sum = 0;
//	long long sum1 = 0;
//
//	scanf("%d", &n);
//	int i = 0;
//	for (i = 1; i <= n; i++)
//	{
//		sum += i;
//	}
//	printf("%lld\n", sum);
//	
//	sum1 = (1 + n) * n / 2;		//等差数列求和
//	printf("%lld\n", sum1);
//
//	return 0;
//}


//电梯上下各两分钟，一趟电梯可以乘坐12人,前面有n个人，需要等待几分钟到达楼层
//#include <stdio.h>
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	printf("%d\n", (n / 12) * 4 + 2);
//	return 0;
//}

//#include <stdio.h>
//void test(int arr[])
//{
//	arr[0] = 3;
//	arr[1] = 4;
//}
//int main()
//{
//	int arr[2] = { 0 };
//	printf("%d %d\n", arr[0], arr[1]);
//	test(arr);
//	printf("%d %d\n", arr[0], arr[1]);
//	return 0;
//}


//全局变量和静态变量默认初始化为0
//全局变量和静态变量都在静态区
//局部变量不初始化时，默认是随机值
// 局部变量存储在栈区
//#include <stdio.h>
//int b;
//int main()
//{
//	static int a;
//	printf("%d %d\n", a, b);
//	return 0;
//}