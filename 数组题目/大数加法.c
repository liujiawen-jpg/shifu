#include<stdio.h>
#include<string.h>
int main()
{
	char c[1005],d[1005];
	int a[1005] = { 0 }, b[1005] = { 0 }, re[2000] = { 0 },i;
	gets(c);
	gets(d);
	int lc = strlen(c), ld = strlen(d),l=lc,ic=lc,id=ld,jinwei=0;
	if (ld > lc) l = ld;
	for ( i = 0; i < lc; i++) a[--ic] = c[i] - '0';
	for (i = 0; i < ld; i++) b[--id] = d[i] - '0';
	for ( i = 0; i < l+10; i++)
	{
		re[i] = a[i] + b[i] + jinwei;
		if (re[i] >= 10)
		{
			jinwei = 1;
			re[i] = re[i] % 10;
		}
		else jinwei = 0;
	}
	for ( i = l + 10; i >= 0; i--)
	{
		if (re[i] != 0)
		{
			l = i;
			break;
		}
	}
	for ( i = l; i >=0; i--) printf("%d", re[i]);
	return 0;
}

