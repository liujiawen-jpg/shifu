#include<stdio.h>
#include <string.h>
#include <math.h>
int main(){
    char ch[999]={0};
    int op[999]={0};
    gets(ch);
    int i,j,k,sum=0;
    j=0;
    for(i=0;i<strlen(ch);i++){
        if(ch[i]>='0'&&ch[i]<='9'){
        op[j]=ch[i]-'0';
        j++;}
    }
    for(k=0;k<j;k++){
        sum+=op[k]*pow(10,j-k-1);
    }
    printf("%d\n",sum);
}
