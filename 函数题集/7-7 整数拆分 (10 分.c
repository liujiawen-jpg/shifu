




#include <iostream>
using namespace std;
static int fun1(int n, int k);
int main() {
	int a, b, c, d;
	char ch;
	while (scanf("%d,%d", &a, &b) != EOF || scanf("%d,%d", &a, &b) != '^Z') 
	{
		//cin >>a>>ch>>b;
	    	d=fun1(a,b);
		printf("%d\n", d);

	}
}






int fun1(int n, int k) {

	if (n == 1 || k == 1)

		return 1;

	else if (n < k) return(fun1(n, n));

	else if (n == k) return(1 + fun1(n, k - 1));

	else return(fun1(n, k - 1) + fun1(n - k, k));





}





