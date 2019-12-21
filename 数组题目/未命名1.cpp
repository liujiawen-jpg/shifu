
#include<iostream>

#include<cstring>

#include<list>

#include<string>

using namespace std;

int main()

{

	list<char> list1 ;

	char str[50000] ;

	while(cin.getline(str,50000))

	{

		int n = strlen(str) ;

		for(int i=n-1;i>=0;i--)

		{

			char c = str[i] ;

			char c1 = str[i-1] ;

			if(c==' ')

				printf(" ") ;

			else

				list1.push_back(c) ;

			if(c!=' '&&c1==' ')

			{

				list<char>::iterator it=list1.begin();

				list1.reverse() ;

				for(it=list1.begin();it!=list1.end();it++)

					printf("%c",*it) ;

				list1.clear() ;

			}

					

		}

		list1.reverse() ;

		list<char>::iterator it=list1.begin();

		for(it=list1.begin();it!=list1.end();it++)

			printf("%c",*it) ;

		printf("\n") ;

		list1.clear() ;

	}

	return 0 ;

}

