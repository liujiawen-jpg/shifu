#include <stdio.h>
#include <string.h>

int main(){
    
    int a;
    scanf("%d\n", &a);
      int g;   
    int m,i,j,k,bj=0,space=0,lj;
    
	
    for(m=1;m<=a;m++){
    	lj=0;
    	bj=0;
    	space=0;
    char b[99999]={0};
	gets(b);
	for(i=0;i<strlen(b);i++){
		if(b[i]==','){
			if(b[i-1]=='g') lj=1;
			if(b[i-2]=='n') lj=2;
			if(b[i-3]=='o') lj=3;
		
		}
		if(b[i]=='.'){
			if(b[i-1]=='g') bj=1;
			if(b[i-2]=='n') bj=2;
			if(b[i-3]=='o') bj=3;
		}
		
	}
	if((lj==3)&&(bj==3)){
	
	for(k=strlen(b)-1;k>=0;k--){
		if(b[k]==' ') space++;
		if(space==3) break;
	
	}
	for(j=0;j<k;j++){
		printf("%c", b[j]);
	}
	printf(" qiao ben zhong.\n");	
	}
    
    else printf("Skipped\n");
	}

return 0;
    }
