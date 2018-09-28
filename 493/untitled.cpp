#include<stdio.h>
#include<math.h>

int main() 
{
	int n;
	int a[15]={0};

	scanf("%d", &n);
	int total = 0;
	for(int i=0;i<n;i++) {
		scanf("%d", &a[i]);
		total += a[i];
	}
	int ans = -1;
	if(n == 1) {
		ans = -1;
	} else if(n == 2 && a[0] == a[1]) {
		ans = -1;
	} else {
		for(int i=0;i<n;i++) {
			if(2 * a[i] != total) {
				ans = i+1;
				break;
			}
		}
	}
	if(ans == -1) {
		printf("%d\n", ans);
	} else {
		printf("1\n%d\n", ans);
	}

}