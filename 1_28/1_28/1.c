#include <stdio.h>
int main()
{
	typedef unsigned int unum;//��unsigned int��дΪunum
	unsigned int num = 0;//unsigned--�޷���
	unum num1 = 2;
	printf("%d\n", num1);
	return 0;
}


void test()
{
		int a = 1;
		a++;
		printf("%d\n", a);
}
int main()
{
	int i = 0;
	while (i < 10)
	{
		test();
		i++;
	}
    return 0;
}

//void test()
//{
//	static int a = 1;
//	a++;
//	printf("%d\n", a);
//}
//int main()
//{
//	int i = 0;
//	while (i < 10)
//	{
//		test();
//		i++;
//	}
//	return 0;
//}

//extern int a;
//int main()
//{
//	printf("%d\n", a);
//	return 0;
//}

//extern int add(int x, int y);
//int main()
//{
//	int a = 5;
//	int b = 10;
//	int sum = add(a, b);
//	printf("sum=%d\n", sum);
//	return 0;
//}

//int main()
//{
//	register int a = 10;
//	return 0;
//}

//#define min "hello"
//int main()
//{
//	
//	printf("%s\n", min);
//	return 0;
//}
//
//#define add(x,y)(x+y)
//int main()
//{
//	int a = 1;
//	int b = 2;
//	int c = add(a, b);
//	printf("%d\n", c);
//	return 0;
//}

//#define max(x,y)(x)>(y)?(x):(y)
//int main()
//{
//	int a = 1;
//	int b = 2;
//	int c = max(a, b);
//	printf("%d\n", c);
//	return 0;
//}

//int main()
//{
//	int a = 28;
//	int* pa = &a; //pa��ר��������ŵ�ַ�ģ�pa����ָ�����
//	printf("%p\n", a);//%p���յ�ַ�ĸ�ʽ��ӡ
//	//&ȡ��ַ������
//	return 0;

//int main()
//{
//	char og = "yoooo";
//	char*po = &og;
//	printf("%d", *po);
//	return 0;
//}

//��������
//struct per
//{
//	char name[100];
//	int age;
//	char sex[3];
//};
//int main()
//{
//	//�ṹ��Ĵ����ͳ�ʼ��
//	struct per p1={"����", 18, "��"};  //p1�Ǵ�������-����
//	struct per p2 = { "����", 20, "Ů" };
//	struct per*pp = &p1;
//	printf("%s %d %s\n", p1.name, p1.age, p1.sex);  //
//	printf("%s %d %s\n", (*pp).name, (*pp).age, (*pp).sex);  //2
//	printf("%s %d %s\n", pp->name,pp->age, pp->sex);  //3
//    return 0;
//}

//
//int main()
//{
//	char ch[] = { 'u', 'i', 't','\0' };
//	printf("%d", strlen(ch));
//	return 0;
//}