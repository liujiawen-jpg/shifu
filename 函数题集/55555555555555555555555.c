#include <stdio.h>
int main(){
    char a[999]={0},b[999]={0},c[999]={0};
    gets(a);
    gets(b);
    int i,j,k;
    for(i=strlen(a);i>=0;i--){
        
        c[i]=a[i]+b[i];
        if(c[i]>='9'){
            c[i]=c[i]-'9';
            c[i-1]++;

        }
    }
    puts(c);
}
