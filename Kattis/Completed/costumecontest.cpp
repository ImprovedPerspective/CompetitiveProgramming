#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <utility>

using namespace std;


int main()
{
	int n;
	cin >> n;
   vector<pair<int,string>> v;
	while(n-->0)
	{
		string temp;
		cin >> temp;
		bool insert = true;
		for(int i=0; i < v.size(); i++)
		{
			if(v[i].second==temp)
			{
				v[i].first++;
				insert = false;
				break;
			}
		}
		if(insert)
		{
			v.push_back(pair<int,string>(0,temp));
		}
	}
	sort(v.begin(),v.end());
	for(int i=0; i < v.size(); i ++)
	{
		if(v[0].first == v[i].first)
		cout << v[i].second << endl;
	}
}

