#include <stdio.h>
#include <string.h>
int ged(int i);
int main(){
   int a[400000]={0},b[400000]={0};
   int i,j,k,count=0,d;
   for(j=1;j<=40000;j++){
   	if(ged(j)){ 
   	a[j]=1;} 
   	else a[j]=0;
   }
   
   while(scanf("%d",&i)!=EOF){
   
   
   for(k=1;k<=d;k++){
   	if(a[j]==1) count++;
   }
   printf("%d\n",count);
}


int ged(int i){
	int one=0,two=0;
	while(i!=0){
		int d[40000]={'\0'},p=0;
		int m;
		
        j=i%2;
        i/=2;
        if(j==0)
        one++;
        else
        two++;   }
        
       int l=0;
       if(one>two) l=1;
       
         return l;
       
    }  
}
