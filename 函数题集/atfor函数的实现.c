#include <stdio.h>
#include <string.h>
#include <math.h>
int main(){
    char ch[9999]={0};
    int i=0,flag=1,op,fl=0;
    double sum=0.0,a;
    gets(ch);
    while(ch[0]!='q'){
         fl=0;
        sum=0.0;
        flag=1;
       if(ch[0]=='.') fl--;
       if(ch[0]=='-'&&ch[1]=='.') fl--; 
        for(i=0;i<strlen(ch);i++){
        	
            if(ch[i]=='-') {
			flag=-1;
			fl++;}
            if(ch[i]>='0'&&ch[i]<='9'){
                a=ch[i]-'0';
                op=i;
                if(ch[i-1]=='.'){
                	fl++;
                	
				}
				if(fl!=0) op-=fl;
            sum+=a*pow(10,-op);
     
        }

        
    }
    printf("%.6f\n", sum*flag);
   
	gets(ch);}
    return 0;
}
