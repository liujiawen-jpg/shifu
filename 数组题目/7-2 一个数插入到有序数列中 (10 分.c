#include <stdio.h>
int main(){
    int a[999]={0},i,j,k,b,f[999]={0},r=0,t;
    scanf("%d", &b);
    for(i=0;i<b;i++){
        scanf("%d", &a[i]);
    }
    scanf("%d", &j);
    for(i=0;i<b;i++){
        if(j>=a[i])
        break;
    }k=i;
    for(i=b+1;i>k;i--){
    	a[i]=a[i-1];
	}
	a[k]=j;
    for(k=0;k<b+1;k++){
        printf("%3d",a[k]);
    }
}
