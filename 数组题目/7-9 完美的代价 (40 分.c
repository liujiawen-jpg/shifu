
#include <stdio.h>

#include <string.h>




int main()

{

	int i,j,p,n;

	char s[9999],ch;

	scanf("%d\n",&n);
	gets(s);

	int k=n-1,flag,a;

	a=0;
	flag=0;       

	for(i=0;i<k;i++){
	  

	

		for(j=k;j>=i;j--)//从两侧靠近 
		{ 
		

			if(j==i)//循环到最后           
			{

				if(n%2==0||flag==1)    
				{                      

					printf("Impossible\n");

					return 0;//强制结束 

				}

				flag=1;

			
			
			}

			else if(s[i]==s[j])      

			{

				for(p=j;p<k;p++)

				{
					ch=s[p];
					s[p]=s[p+1];
					s[p+1]=ch;
					

					a++;

				}

				k--;

				break;

			}

		}

	}

	printf("%d\n",a);

	return 0;

 } 

