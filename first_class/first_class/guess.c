#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//#include <stdlib.h>			//system()函数
//#include <string.h>			//strlen()函数
//#include <windows.h>		//Sleep()函数
//int main()
//{
//	char arr1[] = "************";
//	char arr2[] = "Hello World!";
//	int left = 0;
//	int right = (int)strlen(arr1) - 1;
//	printf("%s\n", arr1);
//	while (left <= right)
//	{
//		arr1[left] = arr2[left];
//		arr1[right] = arr2[right];
//		left++;
//		right--;
//		printf("%s\n", arr1);
//		Sleep(100);		//100的单位是毫秒
//		system("cls");	//system可以执行系统命令
//	}
//	printf("%s\n", arr1);
//	return 0;
//}


//密码输入（3次）
//strcmp()函数，判断两个字符串是否相等
//若第一个大于（小/等于）第二个，返回大于（小/等于）0的数字
//如："ap">"abcd"
//int ret = strcmp("abcd", "ap");
//printf("%d\n", ret);

//#include <stdio.h>
//#include <stdbool.h>
//#include <string.h>		//strcmp()函数
//int main()
//{
//	char passwords[20] = { 0 };
//	int i = 0;
//	bool flag = false;
//
//	for (i = 1; i <= 3; i++)
//	{
//		printf("Enter the passwords: ");
//		scanf("%s", passwords);
//
//		if (!strcmp(passwords, "123456"))
//		{
//			flag = true;
//			printf("Right!\n");
//			break;
//		}
//		else
//		{
//			printf("The number of mistake: %d\n", i);
//		}
//	}
//
//	if (!flag)
//	{
//		printf("Exit!");
//	}
//
//	return 0;
//}


//猜数字
//rand函数是专门用来生成随机数的
//rand函数在使用之前要使用一个srand函数来设置随机数的生成器
//srand函数在程序中只要调用一次就可以了，不需要频繁调用

//#include <stdio.h>
//#include <stdlib.h>
//#include <time.h>
//void menu();
//void game();
//int main()
//{
//	srand((unsigned int)time(NULL));
//	int choice = 0;
//	do
//	{
//		menu();
//		scanf("%d", &choice);
//		switch (choice)
//		{
//		case 0:
//			break;
//		case 1:
//			game();
//			break;
//		default:
//			break;
//		}
//
//	} while (choice);		//变量choice同时在switch语句中和do..while语句中使用
//
//	return 0;
//}
//void menu()
//{
//	printf("*************\n");
//	printf("*  1.play   *\n");
//	printf("*  0.exit   *\n");
//	printf("*************\n");
//}
//void game()
//{
//	int num = rand()%100 + 1;
//	int guess = 0;
//	//printf("%d\n", num);
//	while (1)
//	{
//		scanf("%d", &guess);
//		if (guess == num)
//		{
//			printf("Great!\n");
//			break;
//		}
//		else if (guess < num)
//		{
//			printf("Your number is small.\n");
//		}
//		else
//		{
//			printf("Your number is big.\n");
//		}
//
//	}
//}


//goto 语句
//#include <stdio.h>
//int main()
//{
//	flag:
//	printf("111");
//	goto flag;
//	return 0;
//}


//关机程序
//shutdown -s -t 60
//shutdown -a
//#include <stdio.h>
//#include <string.h>
//#include <stdlib.h>
//int main()
//{
//	char str[40] = { 0 };
//	while (1)
//	{
//		system("shutdown -s -t 60");
//		printf("Enter '147258369': ");
//		scanf("%s", str);
//
//		if (!strcmp(str, "147258369"))
//		{
//			system("shutdown -a");
//			break;
//		}
//	}
//
//	return 0;
//}


//#include <stdio.h>
//int main()
//{
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		if (i = 5)		//i = 5 是赋值表达式
//		{
//			printf("%d ", i);
//		}
//	}
//	return 0;
//}


//#include <stdio.h>
//int main()
//{
//	int i = 0;
//	for (i = 3; 3 * i <= 100; i++)
//	{
//		printf("%d ", 3 * i);
//	}
//	return 0;
//}


//3个数按照从大到小输出
//#include <stdio.h>
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	int tmp = 0;
//	scanf("%d%d%d", &a, &b, &c);
//	if (a < b)
//	{
//		tmp = a;
//		a = b;
//		b = tmp;
//	}
//	if (a < c)
//	{
//		tmp = a;
//		a = c;
//		c = tmp;
//	}
//	if (b < c)
//	{
//		tmp = b;
//		b = c;
//		c = tmp;
//
//	}
//	printf("%d %d %d\n", a, b, c);
//	return 0;
//}


//100-200之间的素数
//#include <stdio.h>
//#include <stdbool.h>
//#include <math.h>	//sqrt()开平方函数
//int main()
//{
//	int i = 0;
//	int j = 0;
//
//	for (i = 101; i <= 200; i += 2)		//从101开始，且偶数一定不是素数
//	{
//		bool flag = false;
//		for (j = 2; j * j <= i; j++)
//		//for (j = 2; j <= sqrt(i); j++)
//		{
//			if (i % j == 0)
//			{
//				flag = true;
//				break;
//			}
//		}
//		if (!flag)
//		{
//			printf("%d ", i);
//		}
//	}
//	return 0;
//}


//#include <stdio.h>
//int main()
//{
//	int n = 0;
//	int m = 0;
//	int tmp = 0;
//	scanf("%d %d", &n, &m);
//	while (tmp = m % n)		//tmp = m % n可以作为判断表达式，每次循环都要进行
//	{
//		m = n;
//		n = tmp;
//	}
//	printf("%d\n", n);
//	return 0;
//}