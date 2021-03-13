#include <stdio.h>
#include <string.h>

int main()
{
	int num1 = 0;
	int num2 = 0;
	scanf("%d%d", &num1, &num2);
	printf("%d\n", num1 + num2);
	return 0;
}

int main()
{
	int line = 0;
	while (line < 1000)
	{

		printf("写代码%d\n", line);
		line++;
	}
	if (line = 1000)
	
		printf("找到好工作\n");
	
	return 0;
}

int add(int x, int y)
{
	int z = x + y;
	return z;
}
int main()
{
	int num1 = 0;
	int num2 = 0;
	scanf("%d%d", &num1, &num2);
	int sum = add(num1,num2);
	printf("sum=%d\n",sum);
	return 0;
}

int main()
{
	int a[5] = { 1, 3, 5, 7 ,9};
	int i = 0;
	while (i < 5)
	{
		printf("%d\n", a[i]);
		i++;
	}
	return 0;
}

int main()
{
	int a = 8;
	int b = a++;
	printf("%d\n", a);//9
	printf("%d\n", b);//8
	return 0;
}

int main()
{
	char a[] = { 'q', 'w', 'e' };
	printf("%d\n", strlen(a));
	return 0;
}

#include <stdio.h>
int a = 0;
scanf("%d", &a);
if (a >= 140)
printf("Genius");

int a(int x, int y)
{
	if (x < y)
		printf("%d\n", y);
	else if (x>y)
		printf("%d\n", x);
}
int main()
{
	int num1 = 0;
	int num2 = 0;
	scanf("%d%d", &num1, &num2);
	int max = a( num1,  num2);
	printf("%d\n", max);

	return 0;
}

