#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//int main(void)
//{
//	int iq = 0;
//	//scanf()�������ص���ʵ�ʶ��������ݵĸ���
//	//scanf()������ȡʧ�ܵ�ʱ�򣬷��ص���EOF
//	//EOF: end of file  �ļ�������־
//	while (scanf("%d", &iq) != EOF)
//	{
//		if (iq >= 140)
//		{
//			printf("Genius!\n");
//		}
//	}
//	return 0;
//}


//����
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


//���飺һ����ͬԪ�صļ���
//#include <stdio.h>
//int main(void)
//{
//	int arr1[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 0 };
//	int arr2[10] = { 1, 2, 3, 4, 5 };//����ȫ��ʼ����ʣ���Ĭ��ֵ��0
//	char ch[5] = { 'a', 'b', 'c' };//����ȫ��ʼ����ʣ���Ĭ��ֵ��'\0'
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


//������
//#include <stdio.h>
//int main(void)
//{
////   / : ���ţ�������������ִ��������������һ���Ǹ�������ִ�и������ĳ�����
////   % ��ȡģ��ȡ�ࣩ(���˱���������)
//	float n = 10 % 4;
//	float m = 10 / 4;
//
//	printf("n = %f\n", n);
//	printf("m = %f\n", m);
//	//printf("%f\n", 10 / 4); //�������Ͳ���
//
//	return 0;
//}


//#include <stdio.h>
//int main(void)
//{
//	int a = 20;//��ʼ��������������ͬʱ��һ��ֵ
//	a = 20;//��ֵ
//
//	return 0;
//}


//#include <stdio.h>
//int main(void)
//{
//	//0Ϊ�٣���0Ϊ��
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
////sizeof�ǲ��������Ǽ��������ռ�ڴ�ռ�Ĵ�С����λ���ֽ�
////strlen�ǿ⺯�����Ǽ����ַ����ĳ��ȵģ�ͳ�Ƶ����ַ�����\0֮ǰ���ֵ��ַ�����
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
//	int b = a++;//��++���ټ���
//	printf("%d %d\n", a, b);
//	a = 100;
//	int c = ++a;//�ȼ��㣬��++
//	printf("%d %d\n", a, c);
//
//	int d = (int)8.56;//ǿ������ת��
//	printf("%d\n", d);
//
//	return 0;
//}


//&&������ͬ���Ϊ��
//||������ͬ�ٲ�Ϊ��
//#include <stdio.h>
//int main(void)
//{
//	int age = 2;
//	if (18 <= age <= 36)//  18 <= 2 Ϊ�٣���Ϊ0��0 < 36Ϊ��
//	{
//		printf("����\n");
//	}
//	return 0;
//}


//����������  exp1 ? exp2 : exp3
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


// []: �±����ò�����
// (): �������ò�����