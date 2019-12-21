#include <stdio.h>
#include <string.h>
int main(){
    int a,b,i=0,j,flag;
    char ch[999]={0};
    char op[999]={0};
    scanf("%d", &a);
  if(a<0){
  	printf("%X\n",a);
  }else{
  
    a=fabs(a);
    while(a>0){
        b=a%16;
        a/=16;
        if(b<=9){
            ch[i]=b+'0';
        }
        else{
        if(b==10){
            ch[i]='A';

        }
        if(b==11)
        ch[i]='B';
        if(b==12)
        ch[i]='C';
        if(b==13)
        ch[i]='D';
        if(b==14)
        ch[i]='E';
        if(b==15)
        ch[i]='F';}
        i++;
    }
    j=0;
    while(i--){
        op[j]=ch[i];
        j++;
    }
    puts(op);}
}
