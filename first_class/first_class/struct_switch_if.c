#define _CRT_SECURE_NO_WARNINGS 1
//VS��֧��C99�еı䳤���飬Linux gcc ������һ�㶼֧��
//C99�������˱䳤����ĸ�������С����ʹ�ñ����������鲻�ܳ�ʼ��
//#include <stdio.h>
//int main(void)
//{
//	int n = 10;
//	int arr[n];
//	return 0;
//}
 
 
//#include <stdio.h>
//int sum(int a)
//{
//	int c = 0;
//	static int b = 3;
//	c += 1;
//	b += 2;
//	return (a + b + c);
//}
//
//int main(void)
//{
//	int i;
//	int a = 2;
//	for (i = 0; i < 5; i++)
//	{
//		printf("%d ", sum(a));
//	}
//
//	return 0;
//}


//#include <stdio.h>
//int main(void)
//{
//	int i = 0;
//	double score[5] = { 0.0 };
//	while (i < 5)
//	{
//		int j = 0;
//		double sum = 0.0;
//		while (j < 5)
//		{
//			scanf("%lf", &score[j]);
//			sum += score[j];
//			printf("%.1f ", score[j]);
//			j++;
//		}
//		printf("%.1f\n", sum);
//		i++;
//	}
//	return 0;
//}


//#include <stdio.h>
//int main(void)
//{
//	int sec = 0;
//	scanf("%d", &sec);
//	int hour = sec / 3600;
//	int min = (sec % 3600) / 60;
//	int left_sec = (sec % 3600) % 60;
//	printf("%d %d %d\n", hour, min, left_sec);
//	return 0;
//}


//�ṹ��  ����һ��ѧ������
//#include <stdio.h>
//struct Stu
//{
//	char name[20];
//	char sex[10];
//	int age;
//};
//void Print(struct Stu* p)
//{
//	printf("%s %s %d\n", (*p).name, (*p).sex, (*p).age);
//	//�ṹ���ָ��->��Ա��
//	printf("%s %s %d\n", p->name, p->sex, p->age);
//}
//int main(void)
//{
//	int num = 0;
//	struct Stu s0 = { "Tom", "female", 25 };
//	struct Stu s1 = { "Jerry", "male", 85 };
//
//	//�ṹ�����.��Ա��
//	printf("%s\n", s0.name);
//	printf("%d\n", s1.age);
//
//	Print(&s0);
//	return 0;
//}


//���Ӱ���Ķ�
//#include <stdio.h>
//int main(void)
//{
//	int a = 0;
//	int b = 2;
//	if (a == 1)
//		if (b == 1)
//			printf("hehe\n");
//	//else ����������ifƥ��
//	else
//		printf("haha\n");
//
//	return 0;
//}


//#include <stdio.h>
//int main(void)
//{
//	int con = 1;
//
//	//����Ч����ȫ��ͬ�Ĵ���
//	if (con) {
//		return 1;
//	}
//	return 2;
//
//	if (con)
//	{
//		return 1;
//	}
//	else
//	{
//		return 2;
//	}
//}


//�Ƚϳ����ͱ����Ƿ���ȣ�����ѳ������ڵȺŵ����
//#include <stdio.h>
//int main(void)
//{
//	int num = 10;
//	if (10 == num)
//	//if (10 = num)		//��д�ȺŻᱨ��
//	{
//		printf("10\n");
//	}
//	return 0;
//}


//���1-100֮�������
//#include <stdio.h>
//int main(void)
//{
//	int i = 1;
//	while (i < 100)
//	{
//		if (i % 2 == 1)
//		{
//			printf("%d\n", i);
//		}
//		i++;
//		//printf("%d\n", i);	//�÷�����������ķ���
//		//i += 2;
//	}
//	return 0;
//}


//switch(���α��ʽ)
// case ���ͳ������ʽ
//#include <stdio.h>
//int main(void)
//{
//	int day = 0;
//	scanf("%d", &day);
//	switch (day)
//	{
//	case 1:
//		printf("1\n");
//		break;
//	case 2:
//		printf("2\n");
//		break;
//	case 3:
//		printf("3\n");
//		break;
//	case 4:
//		printf("4\n");
//		break;
//	case 5:
//		printf("5\n");
//		break;
//	case 6:
//		printf("6\n");
//		break;
//	case 7:
//		printf("7\n");
//		break;
//	default:
//		printf("Error!\n");
//		break;
//	}
//	return 0;
//}


//#include <stdio.h>
//int main(void)
//{
//	int day = 0;
//	scanf("%d", &day);
//	switch (day)
//	{
//	case 1:
//	case 2:
//	case 3:
//	case 4:
//	case 5:
//		printf("work\n");
//		break;
//	case 6:
//	case 7:
//		printf("free\n");
//		break;
//	default:
//		printf("Error!\n");
//		break;
//	}
//	return 0;
//}


//#include <stdio.h>
//int main(void)
//{
//	int n = 1;
//	int m = 2;
//	switch (n)
//	{
//	case 1:
//		m++;
//	case 2:
//		n++;
//	case 3:
//		switch (n)
//		{
//		case 1:
//			n++;
//		case 2:
//			m++;
//			n++;
//			break;
//		}
//	case 4:
//		m++;
//		break;
//	default:
//		break;
//	}
//	printf("m = %d, n = %d\n", m, n);
//	return 0;
//}