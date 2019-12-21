#include<stdio.h>
#include<string.h>
int main(){
    char x;
    int i,j;
      char a[1000];
	while(gets(a)!=NULL){
    scanf("%c",&x);
    int len=strlen(a);
   
    for(int i=0;i<len;i++){
    	if(a[i]==x){
		}
    	else
    	printf("%c",a[i]);
	}
    printf("\n");
getchar();
 }
}
