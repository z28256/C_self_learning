#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//int main(void)
//{
//	int a = 0;
//	int b = 0;
//	EOF;
////#define EOF    (-1)
//
//	//scanf()������ȡʧ�ܵ�ʱ��᷵��EOF
//	//�����ȡ�����Ļ������ص��Ƕ�ȡ�������ݵĸ���
//	//Ctrl + z
//	int ret = scanf("%d %d", &a, &b);
//	printf("ret = %d\n", ret);
//	printf("a = %d\n", a);
//	printf("b = %d\n", b);
//	return 0;
//}


//register (�Ĵ���)���������
//int main(void)
//{
//	register int a = 10;//����
//	return 0;
//}


//typedef �����ض���
//typedef unsigned int u_int;
//int main(void)
//{
//	unsigned int a;
//	u_int a;		//����������һ��
//	return 0;
//}


//static ���ξֲ������������򲻱䣬�������ڱ䳤
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


//static ����ȫ�ֱ������ⲿ�������Ա���ڲ���������,
//ֻ���������ڵ�Դ�ļ��ڲ�ʹ��
//#include <stdio.h>
//extern int g_a;
//
//int main(void)
//{
//	printf("%d\n", g_a);
//	return 0;
//}


//static ���κ��� 
//�ⲿ�������Ա���ڲ���������
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


//#define �������/��
//#define M 100  // �������

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


//ָ����ǵ�ַ��������ָ��һ��ָ����ָ�����
//#include <stdio.h>
//int main(void)
//{
//	int a = 1;		//���ڴ�����4���ֽ�
//	int* pa = &a;	//ָ�����pa�б������a�ĵ�ַ,&aȡ����a�ĵ�һ���ֽڵĵ�ַ
//	*pa = 45;		// * �����ò��� ͨ��a�ĵ�ַ�ҵ�a��*pa����a
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


//һ��ָ��Ĵ�С
//#include <stdio.h>
//int main(void)
//{
//	char* pc;
//	int* pi;
//
//	printf("%zd\n", sizeof(pc));
//	printf("%zd\n", sizeof(pi));
//	//x86 32λ����	32bit  4byte(�ֽ�)
//	//x64 64λ����  64bit  8byte
//	return 0;
//}
