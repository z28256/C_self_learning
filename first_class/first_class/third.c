#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//int main(void)
//{
//	int iq = 0;
//	//scanf()函数返回的是实际读到的数据的个数
//	//scanf()函数读取失败的时候，返回的是EOF
//	//EOF: end of file  文件结束标志
//	while (scanf("%d", &iq) != EOF)
//	{
//		if (iq >= 140)
//		{
//			printf("Genius!\n");
//		}
//	}
//	return 0;
//}


//函数
//#include <stdio.h>
//int Add(int x, int y)
//{
//	int z = 0;
//	z = x + y;
//	return z;
//}
//
//int main(void)
//{
//	int num1 = 0;
//	int num2 = 0;
//	int sum = 0;
//
//	scanf("%d %d", &num1, &num2);
//	sum = Add(num1, num2);
//	printf("%d\n", sum);
//
//	return 0;
//}


//数组：一组相同元素的集合
//#include <stdio.h>
//int main(void)
//{
//	int arr1[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 0 };
//	int arr2[10] = { 1, 2, 3, 4, 5 };//不完全初始化，剩余的默认值是0
//	char ch[5] = { 'a', 'b', 'c' };//不完全初始化，剩余的默认值是'\0'
//
//	int i = 0;
//	while (i < 10)
//	{
//		printf("%d ", arr1[i]);
//		i++;
//	}
//
//	return 0;
//}


//操作符
//#include <stdio.h>
//int main(void)
//{
////   / : 除号（两端是整数，执行整数除法，有一端是浮点数，执行浮点数的除法）
////   % ：取模（取余）(两端必须是整数)
//	float n = 10 % 4;
//	float m = 10 / 4;
//
//	printf("n = %f\n", n);
//	printf("m = %f\n", m);
//	//printf("%f\n", 10 / 4); //报错，类型不符
//
//	return 0;
//}


//#include <stdio.h>
//int main(void)
//{
//	int a = 20;//初始化：创建变量的同时给一个值
//	a = 20;//赋值
//
//	return 0;
//}


//#include <stdio.h>
//int main(void)
//{
//	//0为假，非0为真
//	int flag = 0;
//	scanf("%d", &flag);
//	if (flag)
//	{
//		printf("flag:true\n");
//	}
//	if (!flag)
//	{
//		printf("flag:false\n");
//	}
//	return 0;
//}


//#include <stdio.h>
//int main(void)
//{
////sizeof是操作符，是计算变量所占内存空间的大小，单位是字节
////strlen是库函数，是计算字符串的长度的，统计的是字符串中\0之前出现的字符个数
//	int a = 0;
//	float f = 5.5f;
//
//	printf("%zd\n", sizeof(a));
//	printf("%zd\n", sizeof(int));
//	printf("%zd\n", sizeof(f));
//	printf("%zd\n", sizeof(float));
//
//	return 0;
//}


//#include <stdio.h>
//int main(void)
//{
//	int a = 100;
//	int b = a++;//先++，再计算
//	printf("%d %d\n", a, b);
//	a = 100;
//	int c = ++a;//先计算，在++
//	printf("%d %d\n", a, c);
//
//	int d = (int)8.56;//强制类型转换
//	printf("%d\n", d);
//
//	return 0;
//}


//&&：两边同真才为真
//||：两边同假才为假
//#include <stdio.h>
//int main(void)
//{
//	int age = 2;
//	if (18 <= age <= 36)//  18 <= 2 为假，即为0，0 < 36为真
//	{
//		printf("青年\n");
//	}
//	return 0;
//}


//条件操作符  exp1 ? exp2 : exp3
//#include <stdio.h>
//int main(void)
//{
//	int a = 0;
//	int b = 0;
//	int m = 0;
//	scanf("%d %d", &a, &b);
//	//if (a > b)
//	//{
//	//	m = a;
//	//}
//	//else
//	//{
//	//	m = b;
//	//}
//	
//	m = a > b ? a : b;
//
//	printf("%d\n", m);
//	return 0;
//}


// []: 下标引用操作符
// (): 函数调用操作符