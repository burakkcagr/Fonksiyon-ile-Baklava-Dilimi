#include <stdio.h>

void trigon(int val);
void invertedtrigon(int val);

int main(void)
{
	int val,ispace,istar;

	printf("Bir sayi giriniz :");
	scanf("%d",&val);

	trigon(val);
	invertedtrigon(val);

	return 0;
}

void trigon(int val)
{
	int ispace;

	ispace = val - 1;

	for (int i = 1; i <= val; ++i)
	{
		for (int j = 1; j <= ispace; ++j)
		{
			putchar(' ');
		}
		ispace--;
		for (int j = 1; j <= 2 * i - 1; ++j)
		{
			putchar('*');

		}
		putchar('\n');
	}
}

void invertedtrigon(int val)
{
	int ispace;

	ispace = 1;

	for (int i = 1; i <= val-1; ++i)
	{
		for (int j = 1; j <= ispace; ++j)
		{
			putchar(' ');
		}
		ispace++;
		for (int j = 1; j <= 2*(val-i)- 1; ++j)
		{
			putchar('*');

		}
		putchar('\n');
	}
}