#include<stdio.h>
#include<math.h>
int main() {
int n,len,i,start;
long long ans;
scanf("%d",&n);
for(len=12;len>=1;len--){
for(start=2;start<=sqrt(n);start++) {
ans=1;
for(i=start;i<=start+len-1;i++)
{
ans*=i;
}
if(n%ans==0){
printf("%d\n%d",len,start);
for(i=start+1;i<=len+start-1;i++) {
printf("*%d",i);
}
//���Ե�4���˴���Ҫ��return 0;��������goto���ֱ���˳���
//������Ե�4��ʾ�𰸴���
return 0;
}
}
}
//printf(��1\n%d��,n);
return 0;
}


