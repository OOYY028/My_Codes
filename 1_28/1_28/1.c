#include <stdio.h>
int main()
{
	typedef unsigned int unum;//将unsigned int简写为unum
	unsigned int num = 0;//unsigned--无符号
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
//	int* pa = &a; //pa是专门用来存放地址的，pa叫做指针变量
//	printf("%p\n", a);//%p按照地址的格式打印
//	//&取地址操作符
//	return 0;

//int main()
//{
//	char og = "yoooo";
//	char*po = &og;
//	printf("%d", *po);
//	return 0;
//}

//创建类型
//struct per
//{
//	char name[100];
//	int age;
//	char sex[3];
//};
//int main()
//{
//	//结构体的创建和初始化
//	struct per p1={"张三", 18, "男"};  //p1是创建对象-张三
//	struct per p2 = { "李四", 20, "女" };
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