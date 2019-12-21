#include <stdio.h>
#include <string.h>
int main(){
    char ch[999]={0},op;
    int i=0;
    gets(ch);
    for(i=0;i<strlen(ch);i++){
        if(ch[i]>='a'&&ch[i]<='z')
        ch[i]=ch[i]-'a'+'A';
        else if(ch[i]>='A'&&ch[i]<='Z')
        ch[i]=ch[i]-'A'+'a';
     
    }
    i=0;
    while(ch[i]!='#'){
    	printf("%c", ch[i]);
    	i++;
	}
}
