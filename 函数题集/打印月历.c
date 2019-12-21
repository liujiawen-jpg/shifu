#include <stdio.h>
int main(){
	int year,m,i,j,k,flag=0;
	int sum=0;

	scanf("%d %d", &year, &m);

	int a[13]={0,31,28,31,30,31,30,31,31,30,31,30,31};
	if((year%4==0&&year%100!=0)||year%400==0){
		a[2]++;
	}
	for(i=1900;i<year;i++){
		sum+=365;
	if((i%4==0&&i%100!=0)||i%400==0){
	 sum++;
	}}
	for(i=1;i<m;i++){
		sum+=a[i];
	
	} 
	int temp=sum%7;
	temp++;	
	printf("Sun Mon Tue Wed Thu Fri Sat\n");
	for(j=1;j<=temp;j++){
		printf("    ");
		
	}
	
	for(k=1;k<=a[m];k++){
		if(temp!=6&&k!=a[m])
	printf("%3d ",k);
	else printf("%3d",k);
	temp++;
	if(temp==7&&k!=a[m]) {
	printf("\n");
	temp=0;}
	}
	
return 0;
	
} 

