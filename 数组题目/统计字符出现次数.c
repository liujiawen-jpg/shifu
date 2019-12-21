#include <stdio.h>
#include <string.h>
int main(){
    char ch[999]={0},op;
    int i,j=0,k=0;
    gets(ch);
    
    op=getchar();
    for(i=0;i<strlen(ch);i++){
        if(ch[i]==op)
        j++;
    }
    printf("%d\n",j);
}
