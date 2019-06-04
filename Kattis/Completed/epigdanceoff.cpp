#include <iostream>

using namespace std;

int main()
{
	int n,m;
	cin >> n >> m;
	char dances [n][m];
	for(int r=0; r< n; r++)
	{
		for(int c=0; c< m; c++)
		{
			cin >> dances[r][c];
		}
	}
	int rating =1;
	for(int i=0; i < m; i++)
	{
		int d =0;
		rating++;
		while(d<n)
		{
			if(dances[d][i]=='$')
			{
				rating--;
				break;
			}
			else
			{
				d++;
			}
		}
	}
	cout << rating << endl;
}
