#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
int Index(int n, int k)
{
	if (k == 0)
		return 1;
	else if (k >= 1)
	{
		return n * Index(n, k - 1);
	}
}
int main()
{
	int n = 0;
	int k = 0;
	scanf("%d  %d", &n,& k);
	Index(n,k);
	printf("%d\n", Index(n, k));
	return 0;
}
