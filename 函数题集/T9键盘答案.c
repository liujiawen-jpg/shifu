#include <stdio.h>
int main() {
	int t, i = 1, j, k, sum = 0, b[50];
	char a[50 + 1];
	scanf("%d", &t);
	while (i <= t) {
		scanf("%s", a);
		k = 0;
		for (j = 0; a[j] != '\0'; j++) {
			switch (a[k]) {
			case 'A':case 'B':case 'C':b[k++] = 2; break;
			case 'D':case 'E':case 'F':b[k++] = 3; break;
			case 'G':case 'H':case 'I':b[k++] = 4; break;
			case 'J':case 'K':case 'L':b[k++] = 5; break;
			case 'M':case 'N':case 'O':b[k++] = 6; break;
			case 'P':case 'Q':case 'R':case 'S':b[k++] = 7; break;
			case 'T':case 'U':case 'V':b[k++] = 8; break;
			case 'W':case 'X':case 'Y':case 'Z':b[k++] = 9; break;
			}
		}
		for (j = 1; j < k; j++) {
			if (b[j] != b[j - 1]) {
				sum++;
			}
		}
		printf("Case #%d: %d\n", i, sum);
		i++;
		sum = 0;
	}
	return 0;
}

