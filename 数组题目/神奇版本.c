#include <stdio.h>
int main(){
    char ch[999]={0},op;
    
    int i,j,k,d;
    while(gets(ch))
	{op=getchar();
   for(i=0;i<strlen(ch);i++){
       if(ch[i]!=op)
       printf("%c",ch[i]);
   }
   printf("\n");
}}
