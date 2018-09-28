#include <stdio.h>

int main()
{
	int ans, n;
	int a[5] = {100, 20, 10, 5, 1};
	scanf("%d", &n);
	ans = 0;
	for(int i=0; i<5;i++)
	{
		ans += (n / a[i]);
		n = n % a[i];
	}
	printf("%d\n", ans);
}