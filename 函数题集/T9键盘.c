#include <stdio.h>
#include <string.h>
//int strlen(char str[]);

int main(){
    int n,j=0,y,x=0,d,i;
    scanf("%d",&n);
    char s[999]={0};
    for(i=1;i<=n;i++){
    	y=0;
    	d=0;
    	x=0;
        scanf("%s", s);
        int ui=strlen(s);
        for(j=0;j<ui;j++){
            if(s[j]=='G'||s[j]=='H'|| s[j]=='J'){
                y=4;

            }
            if( s[j]=='A' || s[j]=='B' || s[j]=='C'){
                y=2;

            }
            if( s[j]=='D' || s[j]=='E' || s[j]=='F' ){
                y=3;

            }
            if( s[j]=='J' || s[j]=='K' ||s[j]=='L' ){
                y=5;

            }
            if((s[j]=='M')||(s[j]=='N')||(s[j]=='O')){
                y=6;

            }
            if((s[j]=='P')||(s[j]=='Q')||(s[j]=='R')||(s[j]=='S')){
                y=7;

            }
            if((s[j]=='T')||(s[j]=='U')||(s[j]=='V')){
                y=8;

            }
            if(s[j]=='W'||s[j]=='X'|| s[j]=='Y' || s[j]=='Z' ){
                y=9;

            }
         
            if(d!=y&&j!=0) x++;
            d=y;
       

            
        }
       
       printf("Case #%d: %d\n", i, x);
       
    }
    return 0;
    
}
