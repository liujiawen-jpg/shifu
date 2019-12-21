#include <stdio.h>
#include <string.h>
#include <math.h>
int main(){
    char ch[999]={0};
    int i=0,flag=1;
    float sum=0.0,a;
    while(ch[0]!='q'){
           gets(ch); 
        for(i=0;i<strlen(ch);i++){
            if(ch[i]='-') flag=-1;
            if(ch[i]>='0'&&ch<='9'){
                a=ch[i]-'0';
            sum+=a*pow(10,-i);
        }

        
    }
    printf("%f", sum);
	   char ch[9999]={0};}
    return 0;
}
