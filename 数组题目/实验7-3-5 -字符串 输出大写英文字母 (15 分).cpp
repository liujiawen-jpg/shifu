#include <stdio.h>
#include <string.h>
int main(){
    char ch[999]={0},d[999]={0};
    gets(ch);
    int i=0,j=0,k=0,g=0;
    for(i=0;i<strlen(ch);i++){
        if(ch[i]>='A'&&ch[i]<='Z'){
            d[j]=ch[i];
            j++;

        }

    }
    if(j==0) printf("Not Found");
    else{
    for(k=0;k<j;k++){
        for(i=k+1;i<j-1;i++){
            if(d[k]==d[i])
            g++;
        }
    ch[k]=ch[k+g-1];
    }
	    puts(ch);  }
    return 0;
}
