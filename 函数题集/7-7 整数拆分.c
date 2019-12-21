


 

  #include <stdio.h>
  int k=0;
   int fun1(int n, int k);
int main(){
    int a,b,c,d,r;
    while(scanf("%d,%d", &a, &b)!=EOF||scanf("%d,%d",&a,&b)!='^Z'){
    	 d=fun1(a,b);
		r=d; 
        printf("%d\n",r);
		continue; 
       

    }
     return 0;
}
  
  
  
  
  
  
    int fun1(n,k) {

		// TODO Auto-generated method stub

	   if(n==1||k==1)

		   return 1;

	   else if(n<k) return(fun1(n,n));

	   else if(n==k) return(1+fun1(n,k-1));

	   else return(fun1(n,k-1)+fun1(n-k,k));

	

	

	}





