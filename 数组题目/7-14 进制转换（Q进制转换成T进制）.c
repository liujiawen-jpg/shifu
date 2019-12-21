#include <stdio.h>
#include <math.h>
#include <string.h>
int main(){
    int a,b,i,j,k,flag=1;
    char ch;
    int sum=0;
    scanf("%d\n",&a);
    int f[999]={0},op[999]={0};
    while((ch=getchar())!='\n'){
    	if(ch>='0'&&ch<('0'+a))
    	sum=sum*a+(ch-'0');
	}
    scanf("%d",&b);
    i=0;
    if(sum==0) {
printf("0\n");
return 0;}
    while(sum!=0){
    	op[i]=sum%b;
    	sum/=b;
    	i++;
	}
 
 
 
 
    int y1=0;
    for(j=i-1;j>-1;j--){
        printf("%d",op[j]);
    }
    printf("\n");
   
    
}
