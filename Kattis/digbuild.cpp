#include <iostream>

using namespace std;
long long factorial(long long a)
{
	if(a==1 || a==0)
			  return 1;
	else
			  return a*factorial(a-1);
}
int main ()
{
  long long n;
  cin >> n;
  n *= 3;
  long long c;
  long long total =1;
  if( n%2==0 )
  {
		c = n/2;
		for(long long i =1; i <=c; i ++ )
		{
			total += 2*(factorial(c)/(factorial(c-i)*factorial(i)));
		}
		cout << total << endl;
  }
	
}
