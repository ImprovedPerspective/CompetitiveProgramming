#include <iostream>

using namespace std;
int n =0;
bool check(int row,void *a)
{
	int (*adj)[n] = (int (*)[n]) a;
	int pos1 =0;
	for(int i =0; i < n; i++)
	{
		if(adj[row][i]==1)
		{
			pos1 = i;
			for(int j=i+1; j < n; j++)
			{
				if(adj[pos1][j]==1 && adj[row][j])
						  return true;
			}
		}
	}
	
	return false;
}


int main()
{
	cin >> n;
	while(n!=-1)
	{
		int adj [n][n];
		for(int i = 0; i< n; i++)
		{
			for(int j=0; j < n; j++)
			{
				cin >> adj[i][j];
			}
		}
		for(int r=0; r < n; r++)
		{
			if(!check(r,adj))
			{
				cout << r << " ";
			}
		}
		cout << endl;
		cin >> n;
	}

}
