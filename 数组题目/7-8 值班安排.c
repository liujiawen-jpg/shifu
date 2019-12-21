
//EDBFCAG

#include <stdio.h>
int main(){
    int a,b,c,d,e,f,g,l1,l2,l3,l4,l5,l6,l7,sum,n,r;
    char y1[99]={'\0'},y2[99]={'\0'},y3[99]={'\0'},y4[99]={'\0'},y5[99]={'\0'},y6[99]={'\0'},y7[99]={'\0'},ch[8]={'\0'};
     int u;
	 scanf("%d\n",&a); 
     gets(y1);
     gets(y2);
     gets(y3);
     gets(y4);
     gets(y5);
     gets(y6);
     gets(y7);
    for(a=1;a<=7;a++){
        for(b=1;b<=7;b++){
            for(c=1;c<=7;c++){
                for(d=1;d<=7;d++){
                    for(e=1;e<=7;e++){
                    	for(f=1;f<=7;f++){
                    		for(g=1;g<=7;g++){
							switch(y1[0]){
                    				case 'A': n=a;break;
                    				case 'B': n=b;break;
                    				case 'C': n=c;break;
                    				case 'D': n=d;break;
                    				case 'E': n=e;break;
                    				case 'F': n=f;break;
                    				case 'G': r=g;break;

								}
									switch(y1[2]){
                    				case 'A': r=a;break;
                    				case 'B': r=b;break;
                    				case 'C': r=c;break;
                    				case 'D': r=d;break;
                    				case 'E': r=e;break;
                    				case 'F': r=f;break;
                    				case 'G': r=g;break;


								}
							
                    		if(y1[1]=='=')
                    		l1=(n==(y1[2]-'0'));
                    		if(y1[1]=='<'){
                    		
								l1=((n-r)==(y1[3]-'0'));
							}
							if(y1[1]=='>'){
                    			
								l1=((r-n)==(y1[3]-'0'));
							}
							
							
							
								switch(y2[0]){
                    			case 'A': n=a;break;
                    				case 'B': n=b;break;
                    				case 'C': n=c;break;
                    				case 'D': n=d;break;
                    				case 'E': n=e;break;
                    				case 'F': n=f;break;
                    				case 'G': r=g;break;

								}
									switch(y2[2]){
                    				case 'A': r=a;break;
                    				case 'B': r=b;break;
                    				case 'C': r=c;break;
                    				case 'D': r=d;break;
                    				case 'E': r=e;break;
                    				case 'F': r=f;break;
									case 'G': r=g;break;

								}
							
							
								if(y2[1]=='=')
                    		l2=(n==(y2[2]-'0'));
                    		if(y2[1]=='<'){
                    			
								l2=((n-r)==(y1[3]-'0'));
							}
							if(y2[1]=='>'){
                    			
								l2=((r-n)==(y2[3]-'0'));
							}
							
							
							switch(y3[0]){
                    				case 'A': n=a;break;
                    				case 'B': n=b;break;
                    				case 'C': n=c;break;
                    				case 'D': n=d;break;
                    				case 'E': n=e;break;
                    				case 'F': n=f;break;
                    				case 'G': r=g;break;

								}
									switch(y3[2]){
                    				case 'A': r=a;break;
                    				case 'B': r=b;break;
                    				case 'C': r=c;break;
                    				case 'D': r=d;break;
                    				case 'E': r=e;break;
                    				case 'F': r=f;break;
                    				case 'G': r=g;break;


								}
							
							
								if(y3[1]=='=')
                    		l3=(n==(y3[2]-'0'));
                    		if(y3[1]=='<'){
                    			
								l3=((n-r)==(y3[3]-'0'));
							}
							if(y3[1]=='>'){
                    		
								l3=((r-n)==(y3[3]-'0'));
							}
									switch(y4[0]){
                    			case 'A': n=a;break;
                    				case 'B': n=b;break;
                    				case 'C': n=c;break;
                    				case 'D': n=d;break;
                    				case 'E': n=e;break;
                    				case 'F': n=f;break;
                    				case 'G': r=g;break;

								}
									switch(y4[2]){
                    				case 'A': r=a;break;
                    				case 'B': r=b;break;
                    				case 'C': r=c;break;
                    				case 'D': r=d;break;
                    				case 'E': r=e;break;
                    				case 'F': r=f;break;
                    				case 'G': r=g;break;

								}
							
							
								if(y4[1]=='=')
                    		l4=(n==(y4[2]-'0'));
                    		if(y4[1]=='<'){
                    			
								l4=((n-r)==(y4[3]-'0'));
							}
							if(y4[1]=='>'){
                    		
								l4=((r-n)==(y4[3]-'0'));
							}
							
							
								switch(y5[0]){
                    				case 'A': n=a;break;
                    				case 'B': n=b;break;
                    				case 'C': n=c;break;
                    				case 'D': n=d;break;
                    				case 'E': n=e;break;
                    				case 'F': n=f;break;
                    				case 'G': r=g;break;

								}
									switch(y5[2]){
                    				case 'A': r=a;break;
                    				case 'B': r=b;break;
                    				case 'C': r=c;break;
                    				case 'D': r=d;break;
                    				case 'E': r=e;break;
                    				case 'F': r=f;break;
                    				case 'G': r=g;break;


								}
							
							
								if(y5[1]=='=')
                    		l5=(n==(y5[2]-'0'));
                    		if(y5[1]=='<'){
                    			
								l5=((n-r)==(y5[3]-'0'));
							}
							if(y5[1]=='>'){
                    		
								l5=((r-n)==(y5[3]-'0'));
							}
									
									
									switch(y6[0]){
                    			case 'A': n=a;break;
                    				case 'B': n=b;break;
                    				case 'C': n=c;break;
                    				case 'D': n=d;break;
                    				case 'E': n=e;break;
                    				case 'F': n=f;break;
                    				case 'G': r=g;break;

								}
									switch(y6[2]){
                    				case 'A': r=a;break;
                    				case 'B': r=b;break;
                    				case 'C': r=c;break;
                    				case 'D': r=d;break;
                    				case 'E': r=e;break;
                    				case 'F': r=f;break;
                    				case 'G': r=g;break;


								}
							
							
								if(y6[1]=='=')
                    		l6=(n==(y6[2]-'0'));
                    		if(y6[1]=='<'){
                    			
								l6=((n-r)==(y6[3]-'0'));
							}
							if(y6[1]=='>'){
                    		
								l6=((r-n)==(y6[3]-'0'));
							}
							switch(y7[0]){
                    			case 'A': n=a;break;
                    				case 'B': n=b;break;
                    				case 'C': n=c;break;
                    				case 'D': n=d;break;
                    				case 'E': n=e;break;
                    				case 'F': n=f;break;
                    				case 'G': r=g;break;

								}
									switch(y7[2]){
                    				case 'A': r=a;break;
                    				case 'B': r=b;break;
                    				case 'C': r=c;break;
                    				case 'D': r=d;break;
                    				case 'E': r=e;break;
                    				case 'F': r=f;break;
                    				case 'G': r=g;break;


								}
							
							
								if(y7[1]=='=')
                    		l7=(n==(y7[2]-'0'));
                    		if(y7[1]=='<'){
                    			
								l7=((n-r)==(y7[3]-'0'));
							}
							if(y7[1]=='>'){
                    		
								l7=((r-n)==(y7[3]-'0'));
							}
							
							sum=l1+l2+l3+l4+l5+l6+l7;
							if(sum==7) goto label;
							
							
							
							
					
					
					
					
					
						}}}}}}}






label:
     ch[a-1]='A';
     ch[b-1]='B';
     ch[c-1]='C';
     ch[d-1]='D';
     ch[e-1]='E';
     ch[f-1]='F';
     ch[g-1]='G';
     puts(ch);
     
}
/*EDBFCAG
医院有A、B、C、D、E、F、G 7位大夫，在一星期内（星期一至星期天）每人要轮流值班一天，如果已知： 
（1）A大夫比C大夫晚1天值班； （2）D大夫比E大夫晚1天值班； （3）E大夫比B大夫早2天值班 （4）B大夫比G大夫早4天值班； 
（5）F大夫比B大夫晚1天值班； （6）F大夫比C大夫早1天值班；
 （7）F大夫星期四值班。 就可以确定周一至周日的值班人员分别为：E、D、B、F、C、A、G。 编写程序，根据输入的条件，输出星期一至星期天的值班人员。*/
