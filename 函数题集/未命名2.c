#include <stdio.h>
#include <string.h>
int main(){
    int b,i,j,k,g,y;
    scanf("%d\n", &g);
    char a[9999]={0};
    for(i=0;i<g;i++){
        gets(a);
        for(y=0;y<strlen(a);y++){
        	printf("%c",a[y]);
		}
		printf("\n");
        int flag=0;
        for(j=0;j<strlen(a);j++){
            flag=0;
            if(a[j]>='A'&&a[j]<='Z'&&(a[j]!='I'))
            a[j]=a[j]-'A'+'a';
            if(a[j]==' '&&a[j+1]==' '){
                flag++;
            }
            if(a[j]=='?')
            a[j]='!';
            if(flag!=0){
            for(k=j;k<strlen(a);k++){
                a[k]=a[k+1];
            }}
            
        }
        printf("AI: ");
        for(b=0;b<strlen(a);b++){
        	  if(a[b]=="I"){
        	 	printf("you");
        	 	//b+=2;
			 }
			  else if(a[b]=='m'&&a[b+1]=='e'&&a[b+2]==' '){
			 	printf("you");
			 	b++;
			 }
			 else if(a[b]=='c'&&a[b+2]=='u'&&a[b+3]=='l'){
			 	printf("I could");
			 	b+=8;
			 	
			 }
			 else if(a[b]=='c'&&a[b+2]=='n'&&a[b+3]==' '){
			 	printf("I can");
			 	b+=7;
			 }
			 
            else printf("%c",a[b]);
        }
        printf("\n");
    }
    
}
