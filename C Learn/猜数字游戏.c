#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <time.h>
void game()
{
	int ret = 0;
	int guess = 0;
	system("cls");
	ret = rand()%100 + 1;
	while (1)
	{
		system("cls");
		printf("�������:> ");
		scanf("%d", &guess);
		if (guess>ret)
		{
			system("cls");
			printf("�´���\n");
			Sleep(1000);
		}
		else if (guess < ret)
		{
			system("cls");
			printf("��С��\n");
			Sleep(1000);
		}
		else
		{
			system("cls");
			printf("��ϲ��,�¶���\n");
			Sleep(1000);
			break;
		}
	}

}

void menu()
{
	system("cls");
	printf("###############################\n");
	printf("######  1.play  2.exit  #######\n");
	printf("###############################\n");
	printf("������:> ");
}
int main()
{
	srand((unsigned int)time(NULL));
	int input = 0;
	int ret = 0;
	do
	{
		menu();
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			system("cls");
			game();
			break;
		case 2:
			input = 0;
			printf("�˳���Ϸ\n");
			break;
		default:
			printf("�������");
			Sleep(1000);
			system("cls");
			break;
		}

	} while (input);
	return 0;
}

