#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//int main(void)
//{
//	{
//		int a = 100;
//	}
//	printf("%d\n", a);		//error: aδ����
//	return 0;
//}


//#include <stdio.h>
//int g_a;		//����
//void test(void)
//{
//	printf("%d\n", g_a);
//}
//int g_a = 12;	//����
//
//int main(void)
//{
//	printf("%d\n", g_a);
//	test();//���ú���
//	return 0;
//}


//extern ���������ⲿ����
//#include <stdio.h>
//extern int g_a;		
//int main(void)
//{
//	printf("%d\n", g_a);
//	return 0;
//}


//const���εĳ�����
//#include <stdio.h>
//int main(void)
//{
//	const int num = 100;
//	//num = 200;   //error: ���ʽ�����ǿ����޸ĵ���ֵ
//
//	//int arr[num] = { 0 };	//error: �������Ӧ���볣�����ʽ
//
//	return 0;
//}


//#define ����ı�ʶ������
//#define M 100
//#include <stdio.h>
//int main(void)
//{
//	int arr[M] = { 0 };
//	printf("%d\n", M);
//	M = 456;		//error: ���ʽ�����ǿ����޸ĵ���ֵ
//	return 0;
//}


//ö�ٳ���
//#include <stdio.h>
//enum Color
//{
//	RED,	//0
//	GREEN,	//1
//	BLUE	//2
//};
//
//int main(void)
//{
//	enum Color c = BLUE;
//	int a = 0;
//	printf("%d\n", RED);
//	printf("%d\n", GREEN);
//	printf("%d\n", BLUE);
//
//	RED = 100;		//error: ���ʽ�����ǿ����޸ĵ���ֵ
//	return 0;
//}


//%s - ��ӡ�ַ�������ӡ��\0��ֹͣ
//strlen()�ɼ���'\0'֮ǰ���ַ������ȣ�ʹ��ǰҪ#include<string.h>
//#include <stdio.h>
//#include <string.h>		
//int main(void)
//{
//	char ch1[] = {'a', 'b', 'c'};
//	char ch2[] = "abc";
//	int len1 = (int)strlen(ch1);		//���ֵ
//	int len2 = (int)strlen(ch2);		//3
//
//	printf("%s\n", ch1);
//	printf("%s\n", ch2);
//	printf("%d\n", len1);
//	printf("%d\n", len2);
//
//	return 0;
//}


//ת���ַ�
//#include <stdio.h>
//int main(void)
//{
//	//����ĸ�ʣ�"??)"������Ϊ" ]"   \?\?
//	//  '/ddd'�ɱ�ʾһ����λ�˽�������
//	//  '/xdd'�ɱ�ʾ��λʮ����������
//	printf("%d\n", '\073');	//073�ǰ˽�������
//	printf("%c\n", '\073');	
//	printf("%d\n", '\x73');	//ʮ������
//	printf("%c\n", '\x73');	
//
//	return 0;
//}


//#include <stdio.h>
//#include <string.h>
//int main(void)
//{
//	printf("%zd\n", strlen("c:\test\628\test.c"));	//14  �˽��� 0-7
//
//	char arr[] = { 'a', 'b', 'c' };
//	char arr1[] = { 'a', 'b', 'c', 0 };
//	char arr2[] = { 'a', 'b', 'c', '\0'};
//	printf("%s\n", arr);
//	printf("%s\n", arr1);
//	printf("%s\n", arr2);
//
//	printf("%zd\n", strlen("abc\qdef"));	//7  '\'����������
//	return 0;
//}


//#include <stdio.h>
//int main(void)
//{
//	int input = 0;
//	printf("Enter the number(1/0)?\n");
//	scanf("%d", &input);
//
//	if (input == 1)
//	{
//		printf("good!\n");
//	}
//	else if (input == 0)
//	{
//		printf("bad!\n");
//	}
//	else
//	{
//		printf("error!\n");
//	}
//
//	return 0;
//}


//#include <stdio.h>
//int main(void)
//{
//	int line = 0;
//
//	while (line <= 20000)
//	{
//		printf("%d: code\n", line);
//		line++;
//	}
//
//	if (line > 20000)
//	{
//		printf("success!\n");
//	}
//	else
//	{
//		printf("come!\n");
//	}
//
//}

//#include <stdio.h>
//#include <string.h>
//int main()
//{
//    printf("%zd\n", strlen("c:\test\121"));
//    return 0;
//}


//#include <stdio.h>
//int num = 10;
//int main()
//{
//    int num = 1;
//    printf("num = %d\n", num);
//    return 0;
//}


//#include <stdio.h>
//#include <string.h>
//
//int main()
//{
//    char arr[] = { 'b', 'i', 't' };
//    printf("%zd\n", strlen(arr));
//    return 0;
//}