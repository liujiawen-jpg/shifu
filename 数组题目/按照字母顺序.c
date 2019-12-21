#include <stdio.h>
int main(){
    char a[999]={0},b[999]={0},c[999]={0},d[999]={0},e[999]={0},f[999]={0};
    gets(a);
    gets(b);
    gets(c);
    int i,j,k;
    j=0;
    strcpy(d,a);
    for(i=0;i<3;i++){
        if(a[0]<b[0]){
            strcpy(d,b);
            if(b[0]<c[0]){
                strcpy(d,c);
            }
        }

    }
   
}
