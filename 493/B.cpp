#include<stdio.h>
#include<math.h>

int main()
{
	int n, M;
	int a[100000+5] = {0};
	int b[100000+5] = {0};
	scanf("%d%d", &n, &M);
	a[0] = 0;
	b[0] = 0;
	for(int i=0;i<n;i++) {
		scanf("%d", &a[i+1]);
		if(i%2 == 0) {
			b[i+1] = b[i] + (a[i+1] - a[i]);
		}else {
			b[i+1] = b[i];
		}
	}
	a[n+1] = M;
	if(n%2 == 1) {
		b[n+1] = b[n];
	} else {
		b[n+1] = b[n] + (M - a[n]);
	}
	int ans = b[n+1];

	for(int i=1;i <= n+1; i++) {
		//printf("b%d=%d a%d=%d\n", i, b[i], i, a[i]);
		int tmp = -1;
		if(a[i] - a[i-1] <= 1) {
			continue;
		}
		tmp = b[i-1] + (a[i] - a[i-1] - 1) + (M - a[i]) - (b[n+1] - b[i]);
		if(tmp > ans) {
			ans = tmp;
		}
	}
	printf("%d\n", ans);

}