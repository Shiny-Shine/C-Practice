//2019-12-23 재귀함수 및 DP 연습
#include <stdio.h>

long long int d[10000] = { 0 };

long long int fibo(int n)
{
	if (n <= 1)	return n;

	if (d[n] != 0)	return d[n];

	d[n] = fibo(n - 1) + fibo(n - 2);
	return d[n];
}

int main()
{
	long long int num;
	scanf("%lld", &num);

	d[0] = 1, d[1] = 1;
	printf("%lld", fibo(num));
}