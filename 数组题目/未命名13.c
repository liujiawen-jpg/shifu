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
//测试点4：此处需要用return 0;不可以用goto语句直接退出；
//否则测试点4显示答案错误；
return 0;
}
}
}
//printf(“1\n%d”,n);
return 0;
}


