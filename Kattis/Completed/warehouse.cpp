#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Item
{
	public:
			string name;
			int num;
			Item(string nm, int nu)
			{
				name = nm; num = nu;
			}
};
bool compare(Item i1, Item i2)
{
	if(i1.num==i2.num)
		return i2.name > (i1.name);
	else
		return i2.num < i1.num;
}

int main()
{
	int t =0;
	cin >> t;
	while(t-->0)
	{
		int n;
		cin >> n;
		vector<Item> list;
		for(int i=0; i<n; i++)
		{
			string s;
			int d;
			cin >> s >> d;
			int pos = -1;
			for(int r=0; r<list.size(); r++)
			{
				if(list[r].name==s)
						  pos = r;
			}
			if(pos != -1)
			{
				list[pos].num += d;
			}
			else
			{
				list.push_back(Item(s,d));
			}
		}
		sort(list.begin(),list.end(),compare);
		cout << list.size() << endl;
		for(int i =0; i<list.size(); i++)
				  cout << list[i].name << " " << list[i].num << endl;
	}

}
