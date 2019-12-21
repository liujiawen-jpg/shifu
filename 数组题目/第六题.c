#include<stdio.h>
int main(){
    int x,i=0,j;
    scanf("%d",&x);
    char h[16]={'0','1','2','3','4','5','6','7','8','9','A','B','C','D','E','F'};
    int a[5];
    if(x!=0){
    
    while(x!=0){
        a[i]=x%16;
        x=x/16;
        i++;
    }
    for(j=i-1;j>=0;j--){
        printf("%c",h[a[j]]);
    }}
    else
    printf("0");
}
