#include <stdio.h>
#include <string.h>
int main(){
    char ch[999]={0},op;
    int i=0;
    gets(ch);
int j,k=0;
for(i=0;i<strlen(ch);i++){
    for(j=i+1;j<strlen(ch)-1;j++){
        if(ch[i]==ch[j]){
            k++;
        }
    }
    ch[i]=ch[i+k];
}
puts(ch);}
