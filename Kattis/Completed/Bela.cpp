#include <iostream>

using namespace std;

int main()
{
	int valuesD [8] = {11, 4, 3, 20, 10, 14, 0, 0};
	int valuesN [8]	= {11, 4, 3, 2, 10, 0, 0, 0};
	int hands;
	char suit;
	cin >> hands >> suit;
	int points = 0;
	for(int a =0; a < 4* hands; a++)
	{
		char card, s;
		cin >> card >> s;
		if(s==suit)
		{
			switch(card)
			{
				case 'A':
					points+= valuesD[0];
					break;
				case 'K':
					points+= valuesD[1];
					break;
				case 'Q':
					points+= valuesD[2];
					break;
				case 'J':
					points+= valuesD[3];
					break;
				case 'T':
					points+= valuesD[4];
					break;
				case '9':
					points+= valuesD[5];
					break;
				case '8':
					points+= valuesD[6];
					break;
				case '7':
					points+= valuesD[7];
					break;
			}
		}
		else
		{
			switch(card)
			{
				case 'A':
					points+= valuesN[0];
					break;
				case 'K':
					points+= valuesN[1];
					break;
				case 'Q':
					points+= valuesN[2];
					break;
				case 'J':
					points+= valuesN[3];
					break;
				case 'T':
					points+= valuesN[4];
					break;
				case '9':
					points+= valuesN[5];
					break;
				case '8':
					points+= valuesN[6];
					break;
				case '7':
					points+= valuesN[7];
					break;
			}
		}
	}
	cout << points << endl;

}
