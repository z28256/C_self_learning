#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//int main(void)
//{
//	int a = 0;
//	int b = 0;
//	EOF;
////#define EOF    (-1)
//
//	//scanf()函数读取失败的时候会返回EOF
//	//如果读取正常的话，返回的是读取到的数据的个数
//	//Ctrl + z
//	int ret = scanf("%d %d", &a, &b);
//	printf("ret = %d\n", ret);
//	printf("a = %d\n", a);
//	printf("b = %d\n", b);
//	return 0;
//}


//register (寄存器)建议的作用
//int main(void)
//{
//	register int a = 10;//建议
//	return 0;
//}


//typedef 类型重定义
//typedef unsigned int u_int;
//int main(void)
//{
//	unsigned int a;
//	u_int a;		//与上面的语句一样
//	return 0;
//}


//static 修饰局部变量，作用域不变，生命周期变长
//#include <stdio.h>
//void test()
//{
//	//int a = 0;
//	static int a = 0;	
//	a++;
//	printf("%d\n", a);
//}
//int main(void)
//{
//	int i = 0;
//	while (i < 10)
//	{
//		test();
//		i++;
//	}
//	return 0;
//}


//static 修饰全局变量，外部链接属性变成内部链接属性,
//只能在其所在的源文件内部使用
//#include <stdio.h>
//extern int g_a;
//
//int main(void)
//{
//	printf("%d\n", g_a);
//	return 0;
//}


//static 修饰函数 
//外部链接属性变成内部链接属性
//#include <stdio.h>
//extern int Add(int x, int y);
//int main(void)
//{
//	int a = 10;
//	int b = 20;
//	int c = Add(a, b);
//	printf("%d\n", c);
//	return 0;
//}


//#define 定义符号/宏
//#define M 100  // 定义符号

//int Max(int x, int y)
//{
//	return x > y ? x : y;
//}


//#include <stdio.h>
//#define Max(x, y) (x > y ? x : y)
//int main(void)
//{
//	int a = 1;
//	int b = 2;
//	int m = Max(a, b);
//	printf("%d\n", m);
//	return 0;
//}


//指针就是地址，口语中指针一般指的是指针变量
//#include <stdio.h>
//int main(void)
//{
//	int a = 1;		//向内存申请4个字节
//	int* pa = &a;	//指针变量pa中保存的是a的地址,&a取的是a的第一个字节的地址
//	*pa = 45;		// * 解引用操作 通过a的地址找到a，*pa就是a
//	printf("%d\n", a);
//	
//	printf("%p\n", &a);
//	printf("%p\n", pa);
//
//	return 0;
//}


//#include <stdio.h>
//int main()
//{
//	char ch = 'w';
//	char* pc = &ch;
//	*pc = 'b';
//	printf("%c\n", *pc);
//
//	ch = 'q';
//	printf("%c\n", *pc);
//
//	return 0;
//}


//一个指针的大小
//#include <stdio.h>
//int main(void)
//{
//	char* pc;
//	int* pi;
//
//	printf("%zd\n", sizeof(pc));
//	printf("%zd\n", sizeof(pi));
//	//x86 32位环境	32bit  4byte(字节)
//	//x64 64位环境  64bit  8byte
//	return 0;
//}
