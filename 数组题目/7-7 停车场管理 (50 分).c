#include <stdio.h>
int main(){
    int a,i,j,k,y1,y2,x=0,u,tc=0;
    scanf("%d",&a);
    char op,ch;
    int r[999]={0},l[999]={0};
    i=0;
    op=getchar();
    while(op=getchar()){
        j=0;
        u=0;
        if(op=='\n') op=getchar();
        if(op=='E') {
        
		break;}
        if(op=='A'){
            scanf("%d",&r[i]);
            scanf("%d",&l[i]);
            i++;
            j=1;
            x++;
            int kl=x;
        }
        if(op=='D'){
            u++;
            scanf("%d",&y1);
            scanf("%d",&y2);
            for(k=0;k<i;k++){
                if(y1==r[k]){
                    j=2;
                    break;
                }
            }}
            if(j==1){if(x>3){ 
            
			printf("car#%d waiting\n",i) ;
			tc=i;} 
                else printf("car#%d in parking space #%d\n",i,x);
            } 
            if(u!=0){
            	u
            	
            	x--;
			
                if(j==2) {
				printf("car#%d out,parking time %d\n",r[k],y2-l[k]);
				if(tc!=0&&x==3){
            		
            		printf("car#%d in parking space #%d\n",y1+1,a);
            		l[tc-1]=y2;
            	tc=0;
				}}
                else printf("the car not in park\n");
			}
            }
            
        }
    

