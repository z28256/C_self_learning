#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//int main()
//{
//	int i = 1;
//	while (i <= 10)
//	{
//		if (i == 5)
//			continue;		//��ӡ 1 2 3 4��Ȼ�������ѭ��
//		printf("%d ", i);
//		i++;
//	}
//
//	//while (i < 10)
//	//{
//	//	i++;
//	//	if (i == 5)
//	//		continue;		//��ӡ1 2 3 4  6 7 8 9 10
//	//	printf("%d ", i);	
//	//}
//	return 0;
//}


//#include <stdio.h>
//int main()
//{
//	char password[20] = { 0 };
//	int ch = 0;
//	printf("���������룺");
//	scanf("%s", password);		//�������������ǵ�ַ
//
//	while (getchar() != '\n')	//��������
//	{
//		;
//	}
//
//	printf("��ȷ������(Y/N):");
//	ch = getchar();
//	if (ch == 'Y')
//	{
//		printf("ȷ�ϳɹ�\n");
//	}
//	else
//	{
//		printf("ȷ��ʧ��\n");
//	}
//	return 0;
//}


//ֻ��������ַ�
//#include <stdio.h>
//int main()
//{
//	char ch = 0;
//	while ((ch = getchar()) != EOF)		//һ�� Ctrl + z�Ϳ��Խ���
//	{
//		if (ch < '0' || ch > '9')
//		{
//			continue;
//		}
//		putchar(ch);
//	}
//	return 0;
//}


//for��ӡ1 - 10
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
//	//for (;;)				//��ѭ��
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
//		//for (j = 0; j < 3; j++)		//��ӡ9��
//		//{
//		//	printf("haha\n");
//		//}
//		for ( ; j < 3; j++)		//��ӡ3��,ѭ��һ�κ�j = 3,���ٴ�ӡ
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
//		if (5 == i)			//��ѭ������ӡ5
//			continue;
//		i++;
//	} while (i <= 10);
//	return 0;
//}


//�׳�
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


//1��n�Ľ׳˺�
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
//		ret = 1;		//retӦ����ÿһ��ѭ�����¸�ֵΪ1
//		for (j = 1; j <= i; j++)
//		{
//			ret *= j;
//		}
//		sum += ret;
//	}
//	printf("%d\n", sum);
//	return 0;
//}


//����ķ���
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


//�����������в���ĳ����������(���ֲ���/�۰����)
//#include <stdio.h>
//int main()
//{
//	int arr[10] = { 1, 2, 3, 4, 5, 6, 17, 18, 19, 20 };
//	int left = 0;
//	int right = 9;
//	int mid = 0;
//	int k = 7;		//����Ԫ��
//	int flag = 0;
//
//	while (left <= right)
//	{
//		mid = (left + right) / 2;		//���м�Ԫ�ص��±�
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
//			printf("�ҵ��ˣ��±�Ϊ%d\n", mid);
//			break;		//�ҵ�������ѭ��
//		}
//
//	}
//	if (flag == 0)
//	{
//		printf("�Ҳ���\n");
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
//	for (i = 0, k = 0; k = 0; i++, k++)		//�ж�Ϊ k = 0,0��ѭ��
//	{
//		k++; 
//		count++;
//	}
//	printf("%d\n", count);
//	return 0;
//}

