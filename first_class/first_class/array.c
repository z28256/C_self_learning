#define _CRT_SECURE_NO_WARNINGS 1
//ð������
//#include <stdio.h>
//void sort(int* arr, int n);
//int main()
//{
//	int arr[] = { 5, 4, 3, 1, 2, 7, 6, 8, 9, 0 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	sort(arr, sz);
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}
//void sort(int* arr, int n)
//{
//	int i = 0;
//	for (i = 0; i < n - 1; i++)
//	{
//		int j = 0;
//		for (j = 0; j < n - 1 - i; j++)
//		{
//			if (*(arr + j) < *(arr + j + 1))
//			{
//				int temp = *(arr + j);
//				*(arr + j) = *(arr + j + 1);
//				*(arr + j + 1) = temp;
//			}
//		}
//	}
//}


//����������Ԫ�صĵ�ַ
//�������⣺
//sizeof(������)���������������ʾ�������飬����������������С
//&�������������������Ҳ��ʾ�������飬ȡ��������������ĵ�ַ
//��ַ��С��4�ֽڣ�X86��  8�ֽڣ�X64��
//#include <stdio.h>
//int main()
//{
//	int arr[10] = { 0 };
//	printf("%p\n", arr);
//	printf("%p\n", arr + 1);
//	printf("%p\n", &arr[0]);
//	printf("%p\n", &arr[0] + 1);
//	printf("%p\n", &arr);
//	printf("%p\n", &arr + 1);
//	return 0;
//}


//#include "game.h"
//void menu()
//{
//	printf("0.exit\n");
//	printf("1.play\n");
//}
//void game()
//{
//	char ret = 0;
//	char board[ROW][COL] = { 0 };
//	init_board(board, ROW, COL);
//	print_board(board, ROW, COL);
//	while (1)
//	{
//		player_move(board, ROW, COL);
//		print_board(board, ROW, COL);
//		ret = is_win(board, ROW, COL);
//		if (ret != 'C')
//		{
//			break;
//		}
//		computer_move(board, ROW, COL);
//		print_board(board, ROW, COL);
//		ret = is_win(board, ROW, COL);
//		if (ret != 'C')
//		{
//			break;
//		}
//
//	}
//	if (ret == '*')
//	{
//		printf("���Ӯ��\n");
//	}
//	else if (ret == '#')
//	{
//		printf("����Ӯ��\n");
//	}
//	else if (ret == 'Q')
//	{
//		printf("ƽ��\n");
//	}
//}
//
//void test()
//{
//	int input = 0;
//	srand((unsigned int)time(NULL));
//	do
//	{
//		menu();
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			game();
//			break;
//		case 0:
//			printf("�˳���Ϸ\n");
//			break;
//		default:
//			printf("��������\n");
//			break;
//		}
//	} while (input);
//}
//int main()
//{
//	test();
//	return 0;
//}