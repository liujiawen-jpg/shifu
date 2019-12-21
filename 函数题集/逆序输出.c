#include <stdio.h>

int reverse( int number );

int main()
{
    int n;

    scanf("%d", &n);
    printf("%d\n", reverse(n));

    return 0;
}

/* 你的代码将被嵌在这里 */
int reverse(int number){
   int a,b[999],i=0,flag=1;
   if(number==0) return number;
   else{
   if(number<0){
       number=-number;
       flag=-1;
   }
   while(number>0){
       a=number%10;
       number/=10;
       b[i]=a;
       i++;
   } 
   int j=0,d=0;
   for(j=0;j<i;j++){
       d+=b[j]*pow(10,i-j-1);
   }
   return d*flag;}

}
