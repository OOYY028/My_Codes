#include <stdio.h>
//int main()
//{
//	int a = 0;
//	a = getchar();//getchar�ӱ�׼���루���̣���ȡһ���ַ�
//	//������һ�����ֻ�����ĸ�����ţ�
//	putchar(a);//putchar��ӡһ���ַ�����׼�������Ļ��
//	return 0;
//}


//int main()
//{
//	int a = 0;
//	while ((a=getchar()) != EOF)
//		putchar(a);
//	return 0;
//}
//��ȡʧ�ܵ�ʱ��getchar����EOF
//EOF����end of file
//ֹͣ��ctrl+z
//
//int main()
//{
//	char password[8] = {0};
//	printf("�������룺");
//	scanf("%s", password);
//	int ch = 0;
//	getchar();
//	printf("��ȷ��(Y/N)");
//	ch = getchar();
//	if (ch == 'Y')
//		printf("ȷ�ϳɹ�\n");
//	else
//		printf("ȷ��ʧ��\n");
//
//	return 0;
//}

//int main()
//{
//	int arr[4] = { 1, 2, 3, 4 };
//	int i = 0;
//	for (i = 0; i <= 3; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}

//int main()
//{
//	int a = 0;
//	int b = 0;
//	for (; a < 10; a++)
//	{
//		for (; b < 10; b++)
//		{
//			printf("hehe\n");
//		}
//	}
//	return 0;
//}

//int main()
//{
//	int a = 1;
//	do
//	{
//		if (a == 5)
//			continue;
//		printf("%d ", a);
//		a++;
//	} while (a <= 10);
//	return 0;
//}

//int main()
//{
//	int a = 1;
//	do
//	{
//		if (a == 5)
//			break;
//		printf("%d ", a);
//		a++;
//	} while (a <= 10);
//	return 0;
//}

//int main()
//{
//	int a = 1;
//	do
//	{
//		if (a == 5)
//			continue;
//		printf("%d ", a);
//		a++;
//	} while (a <= 10);
//	return 0;
//}

int main()
{
	int n = 0;
	int ret = 1;
	int i = 0;
	for (n = 1; n <= 10; n++)
	
	for (i = 1; i <= n; i++)
	{
		ret = ret*i;
	}
	printf("%d ", ret);
	return 0;
}

//int main()
//{
//	int n = 0;
//	int i = 0;
//	int ret = 1;
//	int sum = 0;
//	for (n = 1; i <= 3; i++)
//	{
//		ret = ret*n;
//		sum = sum + ret;
//	}
//	printf("%d ", sum);
//	return 0;
//}