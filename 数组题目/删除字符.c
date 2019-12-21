#include <stdio.h>
int main(){
    char ch[999]={0},op;
    
    int i,j,k,d;
    while(gets(ch))
	{
    k=0;
        op=getchar();
        int b=strlen(ch);
        for(d=0;d<b;d++){
		
    for(i=0;i<b;i++){
 if(ch[i]==op) break;
    }
    for(j=i;j<b;j++){
        ch[j]=ch[j+1];
    }}
   for(d=0;d<strlen(ch);d++){
       printf("%c",ch[d]);
   }
    }
}
