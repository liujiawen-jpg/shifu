#include <stdio.h>
#include <string.h>
int main() {
	int i, j, k, s;
	char str[60000];
	while (gets(str)!=NULL) {
		j = strlen(str);
		for (i = j; i >= 0; i--) {
			s = 0;
			if (str[i] == ' ' || i == 0) {
				s = 1;
				if (str[i] == ' ')
					for (k = i + 1; str[k] != ' ' && str[k] != '\n' && str[k] != '\0'; k++) {
						printf("%c", str[k]);
					}
				else {
					for (k = i; str[k] != ' ' && str[k] != '\n' && str[k] != '\0'; k++) {
						printf("%c", str[k]);
					}
				}
				if (s==1&&i!=0)
					printf("%c",str[i]);
                if(i==0&&str[i]==' ')
                    printf(" ");
			}
		}
		printf("\n");
	}
	return 0;
}

