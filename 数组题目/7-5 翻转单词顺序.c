#include <stdio.h>
#include <string.h>
int main(){
    char ch[999]={0},b[500][500]={'\0'};
    char op='1';
    int i=0,j,k,v;
  while( gets(ch)!=NULL){
  
   k=strlen(ch)-1;
   int d;
   i=strlen(ch)-1;
   
   
  
  for(i;i>=0;i--){
  	int r=0;
   	if(ch[i]==' '||i==0){
   		r=1;
   		//break;
	       if(ch[i]==' '){
		   
	   for(v=i+1;ch[v] != ' ' && ch[v] != '\n' && ch[v] != '\0';v++){
	   	printf("%c",ch[v]);
	   }}
	   else {
	   for(v=i;ch[v] != ' ' && ch[v] != '\n' && ch[v] != '\0';v++){
	   	printf("%c",ch[v]);
	   }}
	//printf(" ");
 	if (r==1&&i!=0)
					printf("%c",ch[i]);
                if(i==0&&ch[i]==' ')
                    printf("%c",ch[i]);}
  }
     printf("\n");}   }  

   

