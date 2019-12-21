#include <stdio.h>
int main(){
    int a,s[1000]={0},i,j,num=0,n[1000]={0};
    scanf("%d",&a);
    for(i=0;i<a;i++){
        scanf("%d", &s[i]);
    }
    for(i=0;i<a;i++){
        for(j=0;j<a;j++){
            if(s[i]==s[j]){
            num++;
            }}
            n[i]=num;
            num=0;
        
    }
    int max=0;
    for(j=0;j<i;j++){
        if(n[j]>n[max]){
            max=j;
        }
    }
    printf("%d %d",s[max],n[max]);
    return 0;
}
