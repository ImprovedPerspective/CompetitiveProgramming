#include <iostream>

using namespace std;

int main()
{
	int earth, mars, cs;
	cs =0;
	while(cin >> earth >> mars){
	cs++;
	int total = (365-earth)%365;
	mars += total;
	mars %= 687;
	while(mars!=0)
	{
		mars += 365;
		mars %= 687;
		total += 365;
	}
	cout << "Case "<<cs << ": "<< total << endl;
	}
}

