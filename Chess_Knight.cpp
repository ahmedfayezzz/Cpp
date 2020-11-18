#include <iostream>
using namespace std;
int main()
{
	int dis[8][8];
	char x[8][8];
	int pos, tar;
	int cn = 0;
	int c, r, ct, rt;
	int m;
	for (int i = 0; i<8; i++)
	{
		for (int k = 0; k<8; k++)
		{
			cn++;
			dis[i][k] = cn;
		}
	}
	for (int i = 0; i<8; i++)
	{
		for (int k = 0; k<8; k++)
		{
			cout << dis[i][k] << "|";
		}
		cout << endl;
	}
	cout << "please enter the position of knight:";
	cin >> pos;
	cout << "please enter the target cell:";
	cin >> tar;
	for (int i = 0; i<8; i++)
	{
		for (int k = 0; k<8; k++)
		{
			if (dis[i][k] == pos)
			{
				r = i;
				c = k;
			}
			if (dis[i][k] == tar)
			{
				rt = i;
				ct = k;
			}
		}
	}
	for (int j = 0; j<9999; j++)
	{
		char l = 49;
		for (int i = 0; i<8; i++)
		{
			for (int k = 0; k<8; k++)
			{
				x[i][k] = ' ';
			}
		}

		x[r][c] = 'X';
		x[rt][ct] = 'T';
		if (r - 2<0 || c - 1<0)//1
		{
		}
		else
		{
			x[r - 2][c - 1] = l;
			l++;
		}
		if (r - 2<0 || c + 1>7)//2
		{
		}
		else
		{
			x[r - 2][c + 1] = l;
			l++;
		}
		if (r - 1<0 || c + 2>7)//3
		{
		}
		else
		{
			x[r - 1][c + 2] = l;
			l++;
		}
		if (r + 1>7 || c + 2>7)//4
		{
		}
		else
		{
			x[r + 1][c + 2] = l;
			l++;
		}
		if (r + 2>8 || c + 1>7)//5
		{
		}
		else
		{
			x[r + 2][c + 1] = l;
			l++;
		}
		if (r + 2>7 || c - 1<0)//6
		{
		}
		else
		{
			x[r + 2][c - 1] = l;
			l++;
		}
		if (r + 1>7 || c - 2<0)//7
		{
		}
		else
		{
			x[r + 1][c - 2] = l;
			l++;
		}
		if (r - 1<0 || c - 2<0)//8
		{
		}
		else
		{
			x[r - 1][c - 2] = l;
			l++;
		}
		for (int i = 0; i<8; i++)
		{
			for (int k = 0; k<8; k++)
			{
				cout << x[i][k] << "|";
			}
			cout << endl;
		}
		cout << "please select next move: ";
		cin >> pos;
		for (int i = 0; i<8; i++)
		{
			for (int k = 0; k<8; k++)
			{
				if (x[i][k] == pos + 48)
				{
					r = i;
					c = k;
				}
			}
		}
		cout << pos << endl;
		cout << r << c << endl;
		if (r == rt && c == ct)
		{
			cout << "Game over" << endl;
			cout << "Number of movements is: " << j + 1 << endl;
			break;
		}
	}
	return 0;
}