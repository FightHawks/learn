//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//int main()
//{
//	int i;
//	int p[3] = { 1,0,8 };
//if ((p[0] != 0) && (p[1] != 0) && (p[2] != 0))
//{
//	if (p[0] == p[1] || p[0] == p[2] || p[1] == p[2])
//	{
//		i = 0;
//	}
//	else
//		i = 1;
//}
//else
//{
//	i = 0;
//}
//printf("%d ", i);
//}
//int* myfunc(int* p, int x)
//{
//    int count_0 = 0;
//    int count = 0;
//    int y = 0;
//    for (int i = 0; i <= x; i++)//����0�ĸ���
//    {
//        if (p[i] == 0)
//            count_0++;
//    }
//    y = x - count_0 + 1;
//    int right = 1, left = 0;
//    for (;1;)
//    {
//        if (p[left] == 0 && p[right] != 0)//�ƶ�
//        {
//            p[left] = p[left] ^ p[right];
//            p[right] = p[left] ^ p[right];
//            p[left] = p[left] ^ p[right];
//        }
//        right++;
//        left++;
//        if (right == x)//�ƶ���ʼ��
//        {
//            for (int a = x; a >= y; a--)//�ж��Ƿ��ƶ����
//            {
//                if (p[a] == 0)
//                    count++;
//                if (count == count_0)
//                    goto L1;
//            }
//            count = 0;//��������0
//
//            left = 0;//�����±���ֵ
//            right = 1;
//        }
//    }
//L1:
//    ;
//}
//int main()
//{
//    int* myfunc(int* p,int x);
//    int A[9] = { 10, 0, 2, 4, 0, 4, 0, -22, 0 };
//    int nSize = sizeof(A) / sizeof(A[0]) - 1;
//    int i = 0;
//    int n;
//    myfunc(A,nSize);
  /*  for (i = 0; i <= nSize; i++)
    {
        printf("%d ", A[i]);
    }*/
//    return 0;
//}

//#include<stdio.h>
//#include<stdlib.h>
//int* myfunc(int* A)
//{
//    int x = sizeof(A) / sizeof(A[0]) - 1;
//    int count_0 = 0;
//    int count = 0;
//    int y = 0;
//    // int n = 0;
//    // scanf("%d",&n);
//    //����0�ĸ���
//    for (int i = 0; i <= x; i++)
//    {
//        if (A[i] == 0)
//            count_0++;
//    }
//    y = x - count_0 + 1;
//    for (int right = 1,left = 0; 1;)
//    {
//        //�ƶ�
//        if (A[left] == 0 && A[right] != 0)
//        {
//            /*int temp = 0;
//            temp = A[left];
//            A[left] = A[right];
//            A[right] = temp;*/
//            A[left]=A[left]^A[right];
//            A[right]=A[left]^A[right];
//            A[left]=A[left]^A[right];
//        }
//        right++;
//        left++;
//        //�ж��Ƿ��ƶ����
//        for (int a = x; a >= y; a--)
//        {
//            if (A[a] == 0)
//                count++;
//            if (count == count_0)
//                goto L1;
//
//        }
//        count = 0;//��������0
//         if(right==x)//�ƶ���ʼ��
//         {
//             left=0;
//             right=1;
//         }
//    }
//L1:
//    /*for (int i = 0; i <= x; i++)
//        printf("%d ", A[i]);*/
//    return A;
//}
//int main()
//{
//    int* myfunc(int* A);
//    int nSize;
//    printf("������Ҫ�������͵ĸ���:>");
//    scanf("%d", &nSize);
//    int A[nSize];
//    printf("����������%d������:>",nSize);
//    scanf("%d", A);
//    /*int nSize = sizeof(A) / sizeof(A[0]) - 1;*/
//    myfunc(A);
//    for (int i = 0; i <= nSize; i++)
//       printf("%d ", A[i]);
//    return 0;
//}
       
//#include <stdio.h>
//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//int main()
//{
//	int a = 1;
//	while (a <= 100)
//	{
//		if (a % 2 == 1)
//			printf("%d\n", a);
//		a++;
//
//
//	}
//	return 0;
//}
//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//int main()
//{
//    int day = 0;
//    scanf("%d", &day);
//    switch (day)
//    {
//    case(1):
//        printf("����һ");
//        break;
//    case (2):
//        printf("���ڶ�");
//        break;
//    case (3):
//        printf("������");
//        break;
//    case (4):
//        printf("������");
//        break;
//    case (5):
//        printf("������");
//        break;
//    case (6):
//        printf("������");
//        break;
//    case (7):
//        printf("������");
//        break;
//    }
//
//    return 0;
//
//}
//#include <stdio.h>
//int main()
//{
//    int n, i;
//    int sum = 1;
//    printf("������һ������");
//    scanf("%ld", &n);
//    if (n < 0)
//        return 0;
//    else
//    {
//        if (n > 0 && n <= 12)
//        {
//            for (i = 1; i <= n; i++)
//            {
//                sum = sum * i;
//            }
//            printf("%ld!=%ld", n, sum);
//            return 1;
//        }
//    }
//    if (n > 12)
//        return 2;
//}

//int main()
//{
//	printf("%d\n", sizeof(int));
//	return 0;
//}
//#include <string.h>
//int main()
//{
//	char arr1[20] = "0";
//	char arr2[20] = "0";
//	int n = 0;
//	int m = 1;
//	printf("������һ���ַ���:>");
//	scanf("%s", arr1);
//	printf("�����������ƶ��Ĵ���:>");
//	scanf("%d", &n);
//	for (m = 1;m <= n ; m++)
//	{
//		int i = 0;
//		i = strlen(arr1);
//		while(1)
//		{
//			for (int a = 1, b = 0; a < i; a++, b++)
//			{
//				arr2[b] = arr1[a];
//			}
//			arr2[i - 1] = arr1[0];
//			break;
//		}
//		printf("\n%s\n", arr2);
//		for(int x = 0; x<strlen(arr1);x++)
//		{
//			arr1[x] = arr2[x];
//		}
//	}
//	//printf("\n\n%s\n", arr1);
//	//printf("%s\n", arr2);
//	printf("\n�ַ����ƶ���Ľ��:> %s\n",arr1);
//	return 0;
//}

//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//int main()
//{
//	int a, b;
//	printf("������a��b��ֵ:> ");
//	scanf("%d%d", &a, &b);
//	printf("����ǰa = %d  b = %d\n", a, b);
//
//	printf("������a = %d  b = %d \n", a, b);
//	return 0;
//}
//int main()
//{ 
//	printf("        *                 *\n");
//	printf("  *        *            *        *\n"); 
//	printf("*                *               *\n");
//	printf("  *                             *\n");
//	printf("                              * \n");
//	printf("    *                        *\n");
//	printf("      *                     *\n");
//	printf("        *               *\n");
//	printf("          *           * \n");
//	printf("             *       *\n");
//	printf("                 * \n");
//	return 0;
//
//
//}
//#include <stdio.h>
//#include <string.h>
//int main()
//{
//    char a[100];
//    printf("������һ���ַ�\n");
//    scanf("%s",a);
//   //int right = sizeof(a) / sizeof(a[0]) - 2;
//    int right = strlen(a) - 1;
//    int left = 0;
//    while (left <= right)
//    {
//        //char g = a[right];
//        //a[right] = a[left];
//        //a[left] = g;
//        //(int)a[right] = (int)a[left] + (int)a[right];
//        //(int)a[left] = (int)a[right] - (int)a[left];
//        //(int)a[right] = (int)a[right] + (int)a[left];
//        *(&a[0] - 1) = a[left];
//        a[left] = a[right];
//        a[right] = *(&a[0] - 1);
//        /*a[right] = a[right] ^ a[left];
//        a[left] = a[right] ^ a[left];
//        a[right] = a[right] ^ a[left];*/
//        left++;
//        right--;
//    }
//    printf("%s", a);
//    return 0;
//}
//#include <stdio.h>
//#include <stdlib.h>
//#include <windows.h>
//int main(void)
//{
//	int n, guess, x = 0, g = 1;
//	int ch;
//L1:printf("������С��Ϸ(������)\n");
//	printf("��%d��\n", g);
//
//	printf("���������������(<100):");
//	scanf("%d", &n);
//	system("cls");
//	printf("������С��Ϸ(������)\n");
//	printf("��%d��\n", g);
//	printf("��������������²������:");
//	scanf("%d", &guess);
//	while (guess != n)
//	{
//		x++;
//		if (guess > n)
//		{
//			printf("̫����!\n");
//			printf("�������������:");
//			scanf("%d", &guess);
//		}
//		else if (guess < n)
//		{
//			printf("̫С��!\n");
//			printf("�������������:");
//			scanf("%d", &guess);
//		}
//		else break;
//	}
//	printf("��ϲ��ɹ��³�����!\n");
//	printf("������Ϸ�㹲�´�%d��/n", x);
//	printf("�Ƿ������?\n");
//	printf("������1,�˳���2\n");
//	scanf("%d", &ch);
//	switch (ch)
//	{
//	case 1: g++;
//		x = 0;
//		goto L1;
//		break;
//	case 2: printf("��л����,�ټ�!"); break;
//	}
//	return 0;
//}
