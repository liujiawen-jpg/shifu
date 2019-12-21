#include <stdio.h>
#include <math.h>
 int gy(int a,int b);
 int gb(int a,int b);
int main(){
 int a,b,c,d;
 while(scanf("%d %d", &a, &b)!=EOF){
 c=gy(a,b);
 d=gb(a,b);
 printf("%d %d\n",c,d);}
 return 0;



}
gy(a,b){
      int i,r,flag=1;
    if(a<0||b<0) flag=-1;
    a=fabs(a);
    b=fabs(b);
    do{
    	r=a%b;
    	a=b;
    	b=r;
	}while(r!=0); 
        return a;
    }

int gb(int a,int b){
    int i=0,k,t=0;
    if(a<0||b<0){
        t=1;
    }
    a=abs(a);
    b=abs(b);
    if(a<b){
        k=a;
        a=b;
        b=k;
    }
    do{
        i++;
        k=(a*i)%b;
    }while(k!=0);
    a=a*i;
    if(t==1){
        a=-1*a;
    }
    return a;
}
