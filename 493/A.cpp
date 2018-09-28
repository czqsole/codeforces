#include<stdio.h>
#include<cstring>
#include<iostream>

int main()
{
	int n, ans=0;
	int num[13] = {0};
	int num2[13] = {0};
	char s[10];
	scanf("%d", &n);
	for(int i=0;i<n;i++)
	{
		scanf("%s", s);
		if(strcmp(s, "M") == 0) {
			num[0]++;
		} else if(strcmp(s, "XM") == 0) {
			num[1]++;
		} else if(strcmp(s, "XXM") == 0) {
			num[2]++;
		} else if(strcmp(s, "XXM") == 0) {
			num[3]++;
		} else if(strcmp(s, "S") == 0) {
			num[4]++;
		} else if(strcmp(s, "XS") == 0) {
			num[5]++;
		} else if(strcmp(s, "XXS") == 0) {
			num[6]++;
		} else if(strcmp(s, "XXXS") == 0) {
			num[7]++;
		}else if(strcmp(s, "L") == 0) {
			num[8]++;
		} else if(strcmp(s, "XL") == 0) {
			num[9]++;
		} else if(strcmp(s, "XXL") == 0) {
			num[10]++;
		} else if(strcmp(s, "XXXL") == 0) {
			num[11]++;
		}
	}


	for(int i=0;i<n;i++)
	{
		scanf("%s", s);
		if(strcmp(s, "M") == 0) {
			num2[0]++;
		} else if(strcmp(s, "XM") == 0) {
			num2[1]++;
		} else if(strcmp(s, "XXM") == 0) {
			num2[2]++;
		} else if(strcmp(s, "XXM") == 0) {
			num2[3]++;
		} else if(strcmp(s, "S") == 0) {
			num2[4]++;
		} else if(strcmp(s, "XS") == 0) {
			num2[5]++;
		} else if(strcmp(s, "XXS") == 0) {
			num2[6]++;
		} else if(strcmp(s, "XXXS") == 0) {
			num2[7]++;
		}else if(strcmp(s, "L") == 0) {
			num2[8]++;
		} else if(strcmp(s, "XL") == 0) {
			num2[9]++;
		} else if(strcmp(s, "XXL") == 0) {
			num2[10]++;
		} else if(strcmp(s, "XXXL") == 0) {
			num2[11]++;
		}
	}


	int same=0;
	for(int i=0;i<12;i++) {
		if(num[i] > num2[i]) {
			same += num2[i];
		} else {
			same += num[i];
		}
		ans += num[i];
	}
	printf("%d\n", ans - same);
}