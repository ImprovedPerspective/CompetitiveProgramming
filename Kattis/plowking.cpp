#include <iostream>

using namespace std;

int main()
{
	int n, m;
	cin >> n >> m;
	int adj [n][n];
	for(int r =0; r< n; r++)
	{
		for(int c=0; c< n; c++)
		{
			adj[r][c] = n*(n-1)/2;
		}
	}
	int d = 1;
	for(int i =1; i < n; i++)
	{
		adj[0][i] = m;
		m--;
	}
	int edgeNum =1;
	int row, col;
	while(d<=m)
	{
		row = n-1-edgeNum;
		col = n-1;
		for(int i =0; i < edgeNum && d <= m; i ++)
		{
			adj[row][col-i] = d;
			d++;
		}
		edgeNum++;
	}
	int total =0;
	bool connected [n];
	for(int i =0; i < n; i++)
			  connected[i]=false;
	connected[n-1] = true;
	for(int i =0; i < n-1; i ++)
	{
		row = 0; col = 0;
		for(int j =0; j<n; j++)
		{
			for(int c =j; c < n; c++)
			{
				cout << adj[j][c] << " ";
				if(adj[j][c]<adj[row][col] && (connected[j]||connected[c]))
				{
					row = j; col =c;
				}
			}
			cout << endl;
		}
		total += adj[row][col];
		connected[row] = true;
		connected[col] = true;
		for(int j=0; j < n; j++)
		{
			for(int i=j; i<n; i++)
			{
				if(connected[i]&&connected[j])
				{
					adj[j][i]=n*n;
				}
			}
		}
	}
	cout << total << endl;

}
