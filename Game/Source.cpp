#include <iostream>
#include <windows.h>
#include <conio.h>
using namespace std;
void Disp(char X[][200],int V)
{	

	system("cls");
	cout.flush();
	if (V == 4)
	{
		X[9][49] = 'G';
		X[9][50] = 'A';
		X[9][51] = 'M';
		X[9][52] = 'E';
		X[9][53] = ' ';
		X[9][54] = 'O';
		X[9][55] = 'V';
		X[9][56] = 'E';
		X[9][57] = 'R';
		for (int i = 48; i < 59; i++)
		{
			X[8][i] = 220;
		}
		for (int i = 48; i < 59; i++)
		{
			X[10][i] = 223;
		}
	}
	for (int i = 0; i < 24; i++)
	{
		for (int k = 10; k < 100; k++)
		{
			cout << X[i][k];
		}
	}
	Sleep(200);
}
void Design0(char X[][200])
{
	for (int i = 0; i < 24; i++)
	{
		if (i == 23)
		{
			for (int k = 10; k < 100; k++)
			{
				X[i][k] = 176;
			}
		}
		else
		{
			for (int k = 10; k < 100; k++)
			{
				X[i][k] = ' ';
			}
		}

	}
}
void Design1(char X[][200], int r, int c)
{
	/*X[r - 1][c+2] = 92;
	X[r - 2][c + 1]=92; */
	X[r - 3][c] = 92;
	X[r - 4][c-1] = 92;
	////////////
	X[r][c - 6] = '/';
	X[r - 1][c - 5] = '/';
	X[r - 2][c - 4] = '/';
	X[r - 3][c- 3] = '/';
	X[r - 4][c - 2] = '/';
	////////////
	X[r - 3][c+1] = '/';
	X[r - 4][c +2] = '/';
	X[r - 5][c + 3] = '/';
	X[r - 6][c + 4] = '/';
	/////////
	X[r - 6][c + 5] = 92;
	X[r - 5][c + 6] = 92;
	X[r - 4][c + 7] = 92;
	X[r - 3][c + 8] = 92;
	X[r - 2][c + 9] = 92;
	X[r - 1][c + 10] = 92;
	X[r][c + 11] = 92;
	/////////
	X[r - 3][c + 9] = '/';
	X[r - 4][c + 10] = '/';
	X[r - 5][c + 11] = '/';
	//////
	X[r - 5][c + 12] = 92;
	X[r - 4][c + 13] = 92;
	X[r - 3][c + 14] = 92;
	X[r - 2][c + 15] = 92;
	X[r - 1][c + 16] = 92;
	X[r][c + 17] = 92;
	///////////
	X[r][c + 25] = '/';
	X[r - 1][c + 26] = '/';
	X[r - 2][c + 27]= '/';
	X[r - 3][c + 28] = '/';
	/////////
	X[r][c + 32] = 92;
	X[r - 1][c + 31] = 92;
	X[r - 2][c + 30] = 92;
	X[r - 3][c + 29] = 92;
	////////
	X[r][c - 10] = '/';
	X[r - 1][c - 9] = '/';
	X[r - 2][c - 8] = '/';
	/////////
	//X[r][c - 9] = 92;
	X[r - 1][c - 6] = 92;
	X[r - 2][c - 7] = 92;
	////
	X[r][c - 30] = '/';
	X[r - 1][c - 29] = '/';
	X[r - 2][c - 28] = '/';
	X[r - 3][c - 27] = '/';
	//
	X[r - 3][c - 26] = 92;
	//
	X[r - 3][c - 25] = '/';
	X[r - 4][c - 24] = '/';
	////
	X[r - 4][c - 23] = 92;
	X[r - 3][c - 22] = 92;
	X[r - 2][c - 21] = 92;
	X[r - 1][c - 20] = 92;
	X[r ][c - 19] = 92;
	////
	X[r][c + 35] = '/';
	X[r-1][c + 36] = '/';
	X[r-2][c + 37] = '/';
	X[r-3][c + 38] = '/';
	//
	X[r][c + 42] = 92;
	X[r - 1][c + 41] = 92;
	X[r - 2][c + 40] = 92;
	X[r - 3][c + 39] = 92;
}
void SetHero(char X[][200], int RH, int CH, int v, int fh)
{
	if (fh == 0)
	{

		X[RH][CH + 4] = 47;//track
		X[RH][CH + 3] = '_';//track
		X[RH][CH + 1] = '_';//track

		X[RH][CH - 1] = '_';//track
		X[RH][CH - 3] = '_';//track
		X[RH][CH - 4] = 92;//track
						   /////////////
		X[RH][CH + 2] = 'o';//wheels
		X[RH][CH] = 'o';//wheels
		X[RH][CH - 2] = 'o';//wheels
							////////////
		X[RH - 1][CH + 4] = 219;//body
		X[RH - 1][CH + 3] = 219;//body
		X[RH - 1][CH + 2] = 219;//body
		X[RH - 1][CH + 1] = 219;//body
		X[RH - 1][CH] = 219;//body
		X[RH - 1][CH - 1] = 219;//body
		X[RH - 1][CH - 2] = 219;//body
		X[RH - 1][CH - 3] = 219;//body
		X[RH - 1][CH - 4] = 219;//body
								///////////
		X[RH - 2][CH - 1] = 219;//missile gun
		X[RH - 2][CH - 2] = 219;//missile gun
		X[RH - 2][CH - 3] = 219;//missile gun
		X[RH - 3][CH - 2] = 219;
		if (v == 1)
		{
			X[RH - 3][CH - 1] = 196; //forward
			X[RH - 3][CH] = 196;//forward
		}
		if (v == 2)
		{
			X[RH - 4][CH - 1] = 47; //diagonal 1 
		}
		if (v == 3)
		{
			X[RH - 4][CH - 2] = '|';//up
		}
		if (v == 4)
		{
			X[RH - 4][CH - 3] = 92; //diagonal 2
		}
		if (v == 5)
		{
			X[RH - 3][CH - 3] = 196; //backward
			X[RH - 3][CH - 4] = 196;//backward
		}

		/////////
		X[RH - 2][CH + 3] = 213;//bullets gun
	}
	if (fh == 1)
		{

			X[RH][CH + 4] = 47;//track
			X[RH][CH + 3] = '_';//track
			X[RH][CH + 1] = '_';//track

			X[RH][CH - 1] = '_';//track
			X[RH][CH - 3] = '_';//track
			X[RH][CH - 4] = 92;//track
							   /////////////
			X[RH][CH + 2] = 'o';//wheels
			X[RH][CH] = 'o';//wheels
			X[RH][CH - 2] = 'o';//wheels
								////////////
			X[RH - 1][CH + 4] = 220;//body
			X[RH - 1][CH + 3] = 219;//body
			X[RH - 1][CH + 2] = 219;//body
			X[RH - 1][CH + 1] = 219;//body
			X[RH - 1][CH] = 219;//body
			X[RH - 1][CH - 1] = 219;//body
			X[RH - 1][CH - 2] = 219;//body
			X[RH - 1][CH - 3] = 219;//body
			X[RH - 1][CH - 4] = 219;//body
									///////////
			X[RH - 2][CH - 1] = 219;//missile gun
			X[RH - 2][CH - 2] = 219;//missile gun
			X[RH - 2][CH - 3] = 219;//missile gun
			X[RH - 3][CH - 2] = 219;
			if (v == 1)
			{
				X[RH - 3][CH - 1] = 196; //forward
				X[RH - 3][CH] = 196;//forward
			}
			if (v == 2)
			{
				X[RH - 4][CH - 1] = 47; //diagonal 1 
			}
			if (v == 3)
			{
				X[RH - 4][CH - 2] = '|';//up
			}
			if (v == 4)
			{
				X[RH - 4][CH - 3] = 92; //diagonal 2
			}
			if (v == 5)
			{
				X[RH - 3][CH - 3] = 196; //backward
				X[RH - 3][CH - 4] = 196;//backward*/
			}

			/////////
			X[RH - 2][CH + 3] = 213;//bullets gun
		}
	if (fh == 2)
	{
		//X[RH][CH + 4] = 47;//track
		X[RH][CH + 3] = '_';//track
		X[RH][CH + 1] = '_';//track

		X[RH][CH - 1] = '_';//track
		X[RH][CH - 3] = '_';//track
		X[RH][CH - 4] = 92;//track
						   /////////////
		X[RH][CH + 2] = 'o';//wheels
		X[RH][CH] = 'o';//wheels
		X[RH][CH - 2] = 'o';//wheels
							////////////
		X[RH - 1][CH + 4] = 220;//body
		X[RH - 1][CH + 3] = 219;//body
		X[RH - 1][CH + 2] = 220;//body
		X[RH - 1][CH + 1] = 219;//body
		X[RH - 1][CH] = 219;//body
		X[RH - 1][CH - 1] = 219;//body
		X[RH - 1][CH - 2] = 219;//body
		X[RH - 1][CH - 3] = 219;//body
		X[RH - 1][CH - 4] = 219;//body
								///////////
		X[RH - 2][CH - 1] = 219;//missile gun
		X[RH - 2][CH - 2] = 219;//missile gun
		X[RH - 2][CH - 3] = 219;//missile gun
		X[RH - 3][CH - 2] = 219;
		if (v == 1)
		{
			X[RH - 3][CH - 1] = 196; //forward
			X[RH - 3][CH] = 196;//forward
		}
		if (v == 2)
		{
			X[RH - 4][CH - 1] = 47; //diagonal 1 
		}
		if (v == 3)
		{
			X[RH - 4][CH - 2] = '|';//up
		}
		if (v == 4)
		{
			X[RH - 4][CH - 3] = 92; //diagonal 2
		}
		if (v == 5)
		{
			X[RH - 3][CH - 3] = 196; //backward
			X[RH - 3][CH - 4] = 196;//backward*/
		}

		/////////
		X[RH - 2][CH + 3] = 241;//bullets gun
	}
	if (fh == 3)
	{
		//X[RH][CH + 4] = 47;//track
		X[RH][CH + 3] = '_';//track
		X[RH][CH + 1] = '_';//track

		X[RH][CH - 1] = '_';//track
		X[RH][CH - 3] = '_';//track
		X[RH][CH - 4] = 92;//track
						   /////////////
		X[RH][CH + 2] = 'o';//wheels
		X[RH][CH] = 'o';//wheels
		X[RH][CH - 2] = 'o';//wheels
							////////////
		X[RH - 1][CH + 4] = 220;//body
		X[RH - 1][CH + 3] = 220;//body
		X[RH - 1][CH + 2] = 220;//body
		//X[RH - 1][CH + 1] = 219;//body
		X[RH - 1][CH] = 219;//body
		X[RH - 1][CH - 1] = 219;//body
		X[RH - 1][CH - 2] = 219;//body
		X[RH - 1][CH - 3] = 219;//body
		X[RH - 1][CH - 4] = 219;//body
								///////////
		//X[RH - 2][CH - 1] = 219;//missile gun
		X[RH - 2][CH - 2] = 219;//missile gun
		//X[RH - 2][CH - 3] = 219;//missile gun
		X[RH - 3][CH - 2] = 219;
		if (v == 1)
		{
			X[RH - 3][CH - 1] = 196; //forward
			X[RH - 3][CH] = 196;//forward
		}
		if (v == 2)
		{
			X[RH - 4][CH - 1] = 47; //diagonal 1 
		}
		if (v == 3)
		{
			X[RH - 4][CH - 2] = '|';//up
		}
		if (v == 4)
		{
			X[RH - 4][CH - 3] = 92; //diagonal 2
		}
		if (v == 5)
		{
			X[RH - 3][CH - 3] = 196; //backward
			X[RH - 3][CH - 4] = 196;//backward*/
		}

		/////////
		X[RH - 2][CH + 3] = 241;//bullets gun
	}
	if (fh == 4)
	{
		//X[RH][CH + 4] = 47;//track
		X[RH][CH + 3] = '_';//track
		X[RH][CH + 1] = '_';//track

		X[RH][CH - 1] = '_';//track
		X[RH][CH - 3] = '_';//track
		X[RH][CH - 4] = 92;//track
						   /////////////
		//X[RH][CH + 2] = 'o';//wheels
		X[RH][CH] = 'o';//wheels
		//X[RH][CH - 2] = 'o';//wheels
							////////////
		X[RH - 1][CH + 4] = 220;//body
		X[RH - 1][CH + 3] = 220;//body
		X[RH - 1][CH + 2] = 220;//body
								//X[RH - 1][CH + 1] = 219;//body
		//X[RH - 1][CH] = 219;//body
		//X[RH - 1][CH - 1] = 219;//body
		X[RH - 1][CH - 2] = 219;//body
		//X[RH - 1][CH - 3] = 219;//body
		X[RH - 1][CH - 4] = 219;//body

		/////////
		X[RH - 2][CH + 3] = 241;//bullets gun
	}
}
void SetMovingHero(char X[][200], int RH, int CH, int v, int fh)
{
	if (fh == 0)
	{
		X[RH][CH + 4] = 47;//track
		X[RH][CH + 3] = 205;//track
		X[RH][CH + 1] = 205;//track
		X[RH][CH - 1] = 205;//track
		X[RH][CH - 3] = 205;//track
		X[RH][CH - 4] = 92;//track
						   /////////////
		X[RH][CH + 2] = 'o';//wheels
		X[RH][CH] = 'o';//wheels
		X[RH][CH - 2] = 'o';//wheels
							////////////
		X[RH - 1][CH + 4] = 219;//body
		X[RH - 1][CH + 3] = 219;//body
		X[RH - 1][CH + 2] = 219;//body
		X[RH - 1][CH + 1] = 219;//body
		X[RH - 1][CH] = 219;//body
		X[RH - 1][CH - 1] = 219;//body
		X[RH - 1][CH - 2] = 219;//body
		X[RH - 1][CH - 3] = 219;//body
		X[RH - 1][CH - 4] = 219;//body
								///////////
		X[RH - 2][CH - 1] = 219;//missile gun
		X[RH - 2][CH - 2] = 219;//missile gun
		X[RH - 2][CH - 3] = 219;//missile gun
		X[RH - 3][CH - 2] = 219;
		if (v == 1)
		{
			X[RH - 3][CH - 1] = 196; //forward
			X[RH - 3][CH] = 196;//forward
		}
		if (v == 2)
		{
			X[RH - 4][CH - 1] = 47; //diagonal 1 
		}
		if (v == 3)
		{
			X[RH - 4][CH - 2] = '|';//up
		}
		if (v == 4)
		{
			X[RH - 4][CH - 3] = 92; //diagonal 2
		}
		if (v == 5)
		{
			X[RH - 3][CH - 3] = 196; //backward
			X[RH - 3][CH - 4] = 196;//backward*/
		}

		/////////
		X[RH - 2][CH + 3] = 213;//bullets gun
	}
	if (fh == 1)
	{
		X[RH][CH + 4] = 47;//track
		X[RH][CH + 3] = 205;//track
		X[RH][CH + 1] = 205;//track
		X[RH][CH - 1] = 205;//track
		X[RH][CH - 3] = 205;//track
		X[RH][CH - 4] = 92;//track
						   /////////////
		X[RH][CH + 2] = 'o';//wheels
		X[RH][CH] = 'o';//wheels
		X[RH][CH - 2] = 'o';//wheels
							////////////
		X[RH - 1][CH + 4] = 220;//body
		X[RH - 1][CH + 3] = 219;//body
		X[RH - 1][CH + 2] = 220;//body
		X[RH - 1][CH + 1] = 219;//body
		X[RH - 1][CH] = 219;//body
		X[RH - 1][CH - 1] = 219;//body
		X[RH - 1][CH - 2] = 219;//body
		X[RH - 1][CH - 3] = 219;//body
		X[RH - 1][CH - 4] = 219;//body
								///////////
		X[RH - 2][CH - 1] = 219;//missile gun
		X[RH - 2][CH - 2] = 219;//missile gun
		X[RH - 2][CH - 3] = 219;//missile gun
		X[RH - 3][CH - 2] = 219;
		if (v == 1)
		{
			X[RH - 3][CH - 1] = 196; //forward
			X[RH - 3][CH] = 196;//forward
		}
		if (v == 2)
		{
			X[RH - 4][CH - 1] = 47; //diagonal 1 
		}
		if (v == 3)
		{
			X[RH - 4][CH - 2] = '|';//up
		}
		if (v == 4)
		{
			X[RH - 4][CH - 3] = 92; //diagonal 2
		}
		if (v == 5)
		{
			X[RH - 3][CH - 3] = 196; //backward
			X[RH - 3][CH - 4] = 196;//backward*/
		}

		/////////
		X[RH - 2][CH + 3] = 213;//bullets gun
	}
	if (fh == 2)
	{
		//X[RH][CH + 4] = 47;//track
		X[RH][CH + 3] = 205;//track
		X[RH][CH + 1] = 205;//track
		X[RH][CH - 1] = 205;//track
		X[RH][CH - 3] = 205;//track
		X[RH][CH - 4] = 92;//track
						   /////////////
		X[RH][CH + 2] = 'o';//wheels
		X[RH][CH] = 'o';//wheels
		X[RH][CH - 2] = 'o';//wheels
							////////////
		X[RH - 1][CH + 4] = 220;//body
		X[RH - 1][CH + 3] = 219;//body
		X[RH - 1][CH + 2] = 220;//body
		X[RH - 1][CH + 1] = 219;//body
		X[RH - 1][CH] = 219;//body
		X[RH - 1][CH - 1] = 219;//body
		X[RH - 1][CH - 2] = 219;//body
		X[RH - 1][CH - 3] = 219;//body
		X[RH - 1][CH - 4] = 219;//body
								///////////
		X[RH - 2][CH - 1] = 219;//missile gun
		X[RH - 2][CH - 2] = 219;//missile gun
		X[RH - 2][CH - 3] = 219;//missile gun
		X[RH - 3][CH - 2] = 219;
		if (v == 1)
		{
			X[RH - 3][CH - 1] = 196; //forward
			X[RH - 3][CH] = 196;//forward
		}
		if (v == 2)
		{
			X[RH - 4][CH - 1] = 47; //diagonal 1 
		}
		if (v == 3)
		{
			X[RH - 4][CH - 2] = '|';//up
		}
		if (v == 4)
		{
			X[RH - 4][CH - 3] = 92; //diagonal 2
		}
		if (v == 5)
		{
			X[RH - 3][CH - 3] = 196; //backward
			X[RH - 3][CH - 4] = 196;//backward*/
		}

		/////////
		X[RH - 2][CH + 3] = 241;//bullets gun
	}
	if (fh == 3)
	{
		X[RH][CH + 3] = 205;//track
		X[RH][CH + 1] = 205;//track
		X[RH][CH - 1] = 205;//track
		X[RH][CH - 3] = 205;//track
		X[RH][CH - 4] = 92;//track
						   /////////////
		X[RH][CH + 2] = 'o';//wheels
		X[RH][CH] = 'o';//wheels
		X[RH][CH - 2] = 'o';//wheels
							////////////
		X[RH - 1][CH + 4] = 220;//body
		X[RH - 1][CH + 3] = 220;//body
		X[RH - 1][CH + 2] = 220;//body
								//X[RH - 1][CH + 1] = 219;//body
		X[RH - 1][CH] = 219;//body
		X[RH - 1][CH - 1] = 219;//body
		X[RH - 1][CH - 2] = 219;//body
		X[RH - 1][CH - 3] = 219;//body
		X[RH - 1][CH - 4] = 219;//body
								///////////
								//X[RH - 2][CH - 1] = 219;//missile gun
		X[RH - 2][CH - 2] = 219;//missile gun
								//X[RH - 2][CH - 3] = 219;//missile gun
		X[RH - 3][CH - 2] = 219;
		if (v == 1)
		{
			X[RH - 3][CH - 1] = 196; //forward
			X[RH - 3][CH] = 196;//forward
		}
		if (v == 2)
		{
			X[RH - 4][CH - 1] = 47; //diagonal 1 
		}
		if (v == 3)
		{
			X[RH - 4][CH - 2] = '|';//up
		}
		if (v == 4)
		{
			X[RH - 4][CH - 3] = 92; //diagonal 2
		}
		if (v == 5)
		{
			X[RH - 3][CH - 3] = 196; //backward
			X[RH - 3][CH - 4] = 196;//backward*/
		}

		/////////
		X[RH - 2][CH + 3] = 241;//bullets gun
	}
}
void Scroll(int CE1[], int CE2[], int CE3[], int c[], char Q, int CB[], int CM[])
{
	if (Q == 'd')
	{
		for (int i = 0; i < 1000; i++)
		{
			if (CE1 > 0)
			{
				CE1[i]--;
			}
			
			if (CE2 > 0)
			{
				CE2[i]--;
			}
			if (CE3 > 0)
			{
				CE3[i]--;
			}
			if (c[i] > -40)
			{
				c[i]--;
			}
			
		}
		for (int i = 0; i < 1000; i++)
		{
			CM[i]--;
			CB[i]--;
		}
	}


}
void ScrollBackward(int CE1[], int CE2[], int CE3[], int CB[], int CM[], int c[])
{
	
	for (int i = 0; i < 1000; i++)
	{
		c[i]++;
		CM[i]++;
		CB[i]++;
		CE1[i]++;
		CE2[i]++;
		CE3[i]++;
	}
}
void MoveHero(int &CH, char Q, int CE1[], int CE2[], int CE3[], int CM[], int CB[], int c[])
{
	if (Q == 'd')
	{
		if (CH + 4 == 99)
		{

		}
		else
		{
			if (CH < 50)
			{
				CH++;
			}
			
		}

	}
	if (Q == 'a')
	{
		if (CH - 4 == 10)
		{
			ScrollBackward(CE1, CE2, CE3, CB, CM,c);
		}
		else
		{
			
			CH--;
		}

	}
}
void SetHolicopter(char X[][200], int RE, int CE, int time)
{
	X[RE][CE] = 212;
	X[RE][CE + 1] = 205;
	X[RE][CE + 2] = 205;
	X[RE][CE + 3] = 207;

	X[RE - 1][CE] = '_';
	X[RE - 1][CE + 1] = '_';
	X[RE - 1][CE + 2] = '_';
	X[RE - 1][CE + 3] = '_';

	X[RE - 1][CE + 4] = 245;
	X[RE - 2][CE + 4] = '|';
	X[RE - 1][CE - 1] = 92;
	X[RE - 2][CE - 2] = '(';

	X[RE - 3][CE - 1] = 196;
	X[RE - 3][CE] = 196;
	X[RE - 3][CE + 1] = 196;
	X[RE - 3][CE + 2] = 196;
	X[RE - 3][CE + 3] = 196;

	if (time % 2 == 0)
	{
		X[RE - 5][CE] = '_';
		X[RE - 5][CE + 2] = '_';
		X[RE - 5][CE - 1] = '_';
		X[RE - 5][CE + 3] = '_';
		X[RE - 5][CE - 2] = '_';
		X[RE - 5][CE + 4] = '_';

		X[RE - 2][CE + 9] = 197;
	}
	else
	{
		X[RE - 2][CE + 9] = 193;
	}
	X[RE - 4][CE + 1] = '|';

	X[RE - 2][CE + 5] = 196;
	X[RE - 2][CE + 6] = 196;
	X[RE - 2][CE + 7] = 196;
	X[RE - 2][CE + 8] = 196;

}
void MoveHolicopter(int &CE)
{
	CE -= 2;
}
void MoveMissileLauncher(int &v, char Q)
{
	if (Q == 'w')
	{
		if (v == 5)
		{

		}
		else
		{
			v++;
		}
	}
	if (Q == 's')
	{
		if (v == 1)
		{

		}
		else
		{
			v--;
		}
	}
}
void Destroyholicopter(char X[][200], int RE, int CE)
{
	X[RE][CE] = 196;
	X[RE][CE - 1] = 196;
	X[RE - 1][CE + 2] = 197;
	X[RE - 1][CE + 1] = 196;
	X[RE - 1][CE - 1] = '(';
	X[RE][CE + 2] = 196;
	X[RE - 1][CE] = '/';
	X[RE][CE + 5] = 208;
	X[RE - 1][CE + 5] = 209;
}
void MoveDestroyedHol(int &RE)
{
	if (RE + 7 > 22)
	{
		RE = 22;
	}
	else
	{
		RE += 7;
	}
}
void SetBombsLauncher(char X[][200], int RE, int CE)
{
	X[RE][CE - 1] = 'O';
	X[RE][CE + 10] = 'O';
	for (int i = CE - 2; i < CE + 13; i++)
	{
		X[RE - 1][i] = 219;
	}
	X[RE - 1][CE - 3] = 244;
	X[RE - 2][CE - 2] = 219;
	X[RE - 2][CE - 1] = 220;
	X[RE - 2][CE] = 219;
	X[RE - 3][CE - 2] = 220;
	X[RE - 3][CE - 1] = 220;
	X[RE - 3][CE] = 220;

	X[RE - 2][CE + 8] = 219;
	X[RE - 2][CE + 7] = 219;
	X[RE - 2][CE + 9] = 219;
	X[RE - 3][CE + 8] = 186;
	X[RE - 4][CE + 8] = 187;
	X[RE - 4][CE + 7] = 205;
	X[RE - 4][CE + 6] = '<';
}
void MoveBombLauncher(int &CE)
{
	if (CE > 80)
	{
		CE -= 2;
	}
}
void DestroyBombLauncher(char X[][200], int RE, int CE, int f)
{
	if (f == 1)
	{
		X[RE][CE - 3] = 244;
		X[RE - 1][CE - 2] = 222;
		X[RE][CE - 1] = 'O';
		X[RE][CE + 10] = 'O';
		for (int i = CE - 1; i < CE + 13; i++)
		{
			X[RE - 1][i] = 219;
		}
		X[RE - 2][CE - 2] = 220;
		X[RE - 2][CE] = 219;
		X[RE - 3][CE - 2] = 220;
		X[RE - 3][CE - 1] = 220;
		X[RE - 3][CE] = 220;

		X[RE - 2][CE + 8] = 219;
		X[RE - 2][CE + 7] = 219;
		X[RE - 2][CE + 9] = 219;
		X[RE - 3][CE + 8] = 186;
		X[RE - 4][CE + 8] = 187;
		X[RE - 4][CE + 7] = 205;
		X[RE - 4][CE + 6] = '<';

	}
	if (f == 2)
	{
		for (int i = CE - 1; i < CE + 12; i++)
		{
			if (i == CE + 5 || i == CE + 9)
			{
				X[RE][i] = 216;
			}
			else
			{
				X[RE][i] = 178;
			}
		}
		X[RE][CE - 3] = 244;
		X[RE][CE - 1] = 'O';
		X[RE][CE + 10] = 'O';
		X[RE - 1][CE - 2] = 220;
		X[RE - 1][CE - 1] = 220;
		X[RE - 1][CE] = 220;

		X[RE - 1][CE + 8] = '_';
		X[RE - 1][CE + 7] = 223;
		X[RE - 1][CE + 9] = 197;
		X[RE - 1][CE + 8] = 186;
		X[RE - 1][CE + 5] = 187;
		X[RE - 1][CE + 7] = 205;
		X[RE - 1][CE + 6] = '<';
	}
}
void SetSoldiers(char X[][200], int RE, int CE)
{
	X[RE][CE] = '|';
	X[RE][CE + 1] = '|';
	X[RE - 1][CE] = 219;
	X[RE - 1][CE + 1] = 219;
	X[RE - 2][CE] = 239;
	X[RE - 1][CE - 1] = 47;
	X[RE - 1][CE - 2] = 170;
}
void MoveSoldier(int &CE)
{
	if (CE > 50)
	{
		CE--;
	}
}
void JumpSoldier(int &RE, int &t)
{
	if (t == 0)
	{
		RE -= 2;
	}
	if (t == 1)
	{
		RE += 2;
	}
		
	
}
///////////////////
void Setbullet(char X[][200], int r, int c)
{
	X[r][c] = '*';
}
void MoveBullet(int &c)
{
	c+=5;
}
void DestroySoldier(char X[][200], int RE, int CE)
{
	X[RE][CE + 1] = 196;
	X[RE][CE] = 223;
	X[RE][CE - 1] = 224;
	X[RE][CE - 3] = 170;
}
void CheckBullet(char X[][200], int &c, int RE[], int CE[], int &f, int fb[], int cntS)
{
	if (c > 99)
	{
		f = 1;
		c = 0;
	}
	for (int i = 0; i < cntS; i++)
	{
		if (c >= CE[i] && c <= CE[i]+4 && fb[i]==0)
		{
			f = 1;
			fb[i] = 1;
			c = 0;
			//r = 0;
		}
	}
}
void SetMiss(char X[][200], int R, int C)
{
	X[R][C] = 233;
}
void MoveMiss(int &R, int &C, int V)
{
	if (V == 1)
	{
		C+=5;
	}
	if (V == 2)
	{
		R-=2;
		C+=3;
	}
	if (V == 3)
	{
		R-=3;
	}
	if (V == 4)
	{
		R-=2;
		C-=3;
	}
	if (V == 5)
	{
		C-=5;
	}
}
void CheckMissHol(char X[][200], int R, int &C, int RE[], int CE[], int &f, int fm[], int cntH)
{
	if (C > 99 || C < 0 || R < 0)
	{
		f = 1;
		C = 0;
	}
	for (int i = 0; i < cntH; i++)
	{
		if (fm[i] == 0)
		{
			if (R <= RE[i] && R >= RE[i] - 5 && C >= CE[i] && C <= CE[i] + 3)
			{
				f = 1;
				C = 0;
				fm[i] = 1;
			}
			if (R <= RE[i] - 1 && R >= RE[i] - 5 && C >= CE[i] - 1 && C <= CE[i] + 3)
			{
				f = 1;
				C = 0;
				fm[i] = 1;
			}
			if (R <= RE[i] - 2 && R >= RE[i] - 5 && C >= CE[i] + 5 && C <= CE[i] + 9)
			{
				f = 1;
				C = 0;
				fm[i] = 1;
			}
		}
		else
		{

		}
	}
}
void CheckMissBL(char X[][200], int R, int &C, int RE[], int CE[], int &f,int fm[], int cntBL)
{
	if (C > 99 || C < 0 || R < 0)
	{
		f = 1;
		C = 0;
	}
	for (int i = 0; i < cntBL; i++)
	{
		if (R >= RE[i] - 4 && R >= RE[i] - 5 && C > CE[i] - 3 && C < CE[i] + 8 && fm[i]<2)
		{
			f = 1;
			C = 0;
			if (fm[i] < 2)
			{
				fm[i]++;
			}
		}
	}
}
void SetSbullet(char X[][200],int r,int c)
{
	X[r][c] = '.';
}
void MoveSbullet(int &c)
{
	c -= 5;
}
void CheckSbullet(int r, int &c, int RH, int CH, int RH2, int CH2, int &f)
{
	if (c < 10)
	{
		f = 1;
		c = 0;
	}
	if (c<CH + 4 && c>CH - 4 && r<RH && r>RH - 3)
	{
		f = 1;
		c = 0;
	}
}
void SetBomb(char X[][200], int r, int c)
{
	X[r][c] = 60;
	X[r][c + 1] = 205;
}	 
void MoveBomb(int &c)
{
	c -= 3;
}
void CheckBomb(int r, int &c, int RH, int CH, int RH2, int CH2, int &f,int &fh)
{
	if (c < 10 || r>21)
	{
		f = 1;
		c = 0;
		r = 0;
	}
	if (c<CH + 4 && c>CH - 4 && r<RH && r>RH - 3)
	{
		f = 1;
		c = 0;
		if (fh < 4)
		{
			fh++;
		}
		
	}
}
void SetHB(char X[][200], int r, int c)
{
	X[r][c] = 251;
}
void MoveHB(int &r, int &c)
{
	c -= 6;
	r += 2;
}
void CheckHB(int &r, int &c, int RH, int CH, int RH2, int CH2, int &f, int &fh)
{
	if (r >= 23)
	{
		f = 1;
		r = 0;
	}
	if (c < 10)
	{
		f = 1;
		c = 0;
	}
	if (c<CH + 4 && c>CH - 4 && r<RH && r>RH - 4)
	{
		f = 1;
		c = 0;
		if (fh < 4)
		{
			fh++;
		}
	}
}
void SetDefense(char X[][200], int r, int c)
{
	X[r][c] = 252;
}
void MoveDefense(int &r, int &c)
{
	if (r > 18)
	{
		r --;
		c++;
	}
	else
	{
		c += 4;
	}
}
void CheckDefense(int c[], int r[], int &C, int R, int f[], int &f2, int cntDF)
{
	for (int i = 0; i < cntDF; i++)
	{
		if (c[i] > 90)
		{
			f[i] = 1;
			c[i] = 0;
		}
	}
	for (int i = 0; i < cntDF; i++)
	{
		if (r[i] == R && c[i] > C && c[i] < C + 8)
		{
			f[i] = 1;
			c[i] = 0;
			C = 0;
			f2 = 1;

		}
	}
	
}
void main()
{
	int time = 0;
	char X[24][200];
	int CH, RH;//hero position
	int CH2, RH2;//hero2 posotios(soldier)
	int RE1[1000], CE1[1000];//bombs launcher position
	int RE2[1000], CE2[1000];//holicopter position
	int RE3[1000], CE3[1000];//soldier position
	char Q;
	int V = 1;//position of missile gun
	int f[1000]; //check bullets
	int f2[1000]; //check missiles
	int cntbull = 0; //number of shot bullets
	int cntmiss = 0; //number of shot missiles
	int RB[1000]; //row of bullets
	int CB[1000]; //column of bullets
	int RM[1000]; //row of missiles
	int CM[1000]; //column of missiles
	int VM[1000]; //missile directions
	int fb[1000]; //to check if the soldier is dead
	int fm[1000]; //to check if Holicopter is destroyed
	int fm2[1000]; //to check if Holicopter is destroyed
	int fh = 0;
	int cntBL = 1;//showed bomb launchers
	int cntH = 1;//showed holicpters
	int cntS = 1;//showed soldiers
	int ffb[1000], ffm[1000], ffm2[1000];
	int ff1[1000], ff2[1000], ff3[1000];//create new enemy
	int sr[1000], sc[1000];//soldier bullets 
	int bc[1000],  br[1000];//bombs
	int hc[1000], hr[1000];//Hbombs
	int fe[1000], fbl[1000], fhb[1000];
	int cntSB = 0;
	int cntbmb = 0;
	int cntHB = 0;
	int r=22, c[1000];
	int dr[1000],dc[1000];
	c[0] = 45;
	int cntD=1;
	int ex;
	int df[1000];
	int jump = 0;
	int cntJ = 0;
	int cntDF = 0;
	CH = 15;
	RH = 22;
	CH2 = 40;
	RH2 = 22;
	CE1[0] = 120;
	RE1[0] = 22;
	RE2[0] = 5;
	CE2[0] = 105;
	RE3[0] = 22;
	CE3[0] = 120;
	for (int i = 0; i < 1000; i++)
	{
		f[i] = 0;
		f2[i] = 0;
		fb[i] = 0;
		fm[i] = 0;
		fm2[i] = 0;
		ffb[i] = 0;
		ffm[i] = 0;
		ffm2[i] = 0;
		ff1[i] = 0;
		ff2[i] = 0;
		ff3[i] = 0;
		fe[i] = 0;
		fbl[i] = 0;
		fhb[i] = 0;
		df[i] = 0;
	}
	while (1)
	{
		for (int i = 0; i < 1000; i++)
		{
			RB[i] = RH - 2;
		}
		while (!kbhit())
		{
			Design0(X);
			if (c[cntD - 1] < 35)
			{
				c[cntD] = 130;
				cntD++;
			}
			for (int i = 0; i < cntD; i++)
			{
				Design1(X, r, c[i]);
			}
			for (int i = 0; i < cntbull; i++)
			{
				CheckBullet(X, CB[i], RE3, CE3, f[i], fb, cntS);
				if (f[i] == 0)
				{
					Setbullet(X, RB[i], CB[i]);
					MoveBullet(CB[i]);
				}
			}
			for (int i = 0; i < cntmiss; i++)
			{
				CheckMissBL(X, RM[i], CM[i], RE1, CE1, f2[i], fm2, cntBL);
				CheckMissHol(X, RM[i], CM[i], RE2, CE2, f2[i], fm, cntH);
				if (f2[i] == 0)
				{
					SetMiss(X, RM[i], CM[i]);
					MoveMiss(RM[i], CM[i], VM[i]);
				}
			}
			for (int k = 0; k < cntBL; k++)
			{
				if (fm2[k] == 0)
				{
					SetBombsLauncher(X, RE1[k], CE1[k]);
					if (cntBL == 1)
					{
						MoveBombLauncher(CE1[k]);
					}
					
				}
				else
				{
					DestroyBombLauncher(X, RE1[k], CE1[k], fm2[k]);
					if (ffm2[k] == 0 && fm2[k]==2)
					{
						ffm2[k] = 1;
						//ff1[k] = 1;
						cntBL++;
						CE1[cntBL - 1] = 130;
						RE1[cntBL - 1] = 22;
						break;
					}
				}
			}
			for (int k = 0; k < cntH; k++)
			{
				if (fm[k] == 0)
				{
					if (CE2[k] > 0)
					{
						SetHolicopter(X, RE2[k], CE2[k], time);
						MoveHolicopter(CE2[k]);
					}
					else
					{
						CE2[k] = 130;
					}
				}
				else
				{
					if (RE2[k] != 22)
					{
						Destroyholicopter(X, RE2[k], CE2[k]);
						MoveDestroyedHol(RE2[k]);
					}
					else
					{
						Destroyholicopter(X, RE2[k], CE2[k]);
						if (ffm[k] == 0)
						{
							ffm[k] = 1;
							ff2[k] = 1;
							cntH++;
							RE2[cntH - 1] = 5;
							CE2[cntH - 1] = 140;
							break;
						}
					}

				}
			}
			for (int k = 0; k < cntS; k++)
			{
				if (fb[k] == 0)
				{
					SetSoldiers(X, RE3[k], CE3[k]);
					MoveSoldier(CE3[k]);
				}
				else
				{
					DestroySoldier(X, RE3[k], CE3[k]);
					if (ffb[k] == 0)
					{
						ffb[k] = 1;
						CE3[cntS] = 105;
						RE3[cntS] = 22;
						cntS++;
						break;
					}
				}
			}
			if (time % 20==0 && time != 0 && CE3[cntS-1]<60)
			{
				sr[cntSB] = RE3[cntS-1]-1;
				sc[cntSB] = CE3[cntS-1]-3;
				cntSB++;
			}
			for (int i = 0; i < cntSB; i++)
			{
				CheckSbullet(sr[i], sc[i], RH, CH, RH2, CH2, fe[i]);
				if (fe[i] == 0)
				{
					SetSbullet(X, sr[i], sc[i]);
					MoveSbullet(sc[i]);
				}
			}
			if (time % 10 == 0 && time != 0 && CE3[cntS - 1] < 75)
			{
				jump = 1;
				cntJ = 0;
			}
			if (jump == 1)
			{
				JumpSoldier(RE3[cntS - 1], cntJ);
				cntJ++;
			}
			if (time % 40 == 0 && time !=0 && CE1[cntBL - 1]<90)
			{
				br[cntbmb] = RE1[cntBL - 1] - 4;
				bc[cntbmb] = CE1[cntBL - 1] - 6;
				cntbmb++;
			}
			for (int i = 0; i < cntbmb; i++)
			{
				CheckDefense(dc, dr, bc[i], br[i], df, fbl[i],cntDF);
				CheckBomb(br[i], bc[i], RH, CH, RH2, CH2, fbl[i], fh);
				if (fbl[i] == 0)
				{
					if (bc[i]<CH+14)
					{
						br[i]++;
					}
					SetBomb(X, br[i], bc[i]);
					MoveBomb(bc[i]);
				}
			}
			if (time % 30 == 0 && time != 0 && CE2[cntH-1]>10 && CE2[cntH - 1]<90)
			{
				hr[cntHB] = RE2[cntH - 1];
				hc[cntHB] = CE2[cntH - 1] - 1;
				cntHB++;
			}
			for (int i = 0; i < cntHB; i++)
			{
				CheckHB(hr[i], hc[i], RH, CH, RH2, CH2, fhb[i], fh);
				if (fhb[i] == 0)
				{
					SetHB(X, hr[i], hc[i]);
					MoveHB(hr[i], hc[i]);
				}
			}
			for (int i = 0; i < cntDF; i++)
			{
				if (df[i] == 0)
				{
					SetDefense(X, dr[i], dc[i]);
					MoveDefense(dr[i], dc[i]);
				}
			}
			
			SetHero(X, RH, CH, V, fh);
			Disp(X,fh);
			//cout << fh;
			time++;
			if (fh == 4)
			{
				break;
			}
		}
		Q = getch();
		if (Q == 'j')
		{
			if (fh < 3)
			{
				RB[cntbull] = RH - 2;
				CB[cntbull] = CH + 4;
				cntbull++;
			}
			Design0(X);
			if (c[cntD - 1] < 35)
			{
				c[cntD] = 130;
				cntD++;
			}
			for (int i = 0; i < cntD; i++)
			{
				Design1(X, r, c[i]);
			}
			for (int i = 0; i < cntbull; i++)
			{
				CheckBullet(X, CB[i], RE3, CE3, f[i], fb, cntS);
				if (f[i] == 0)
				{
					Setbullet(X, RB[i], CB[i]);
					MoveBullet(CB[i]);
				}
			}
			for (int i = 0; i < cntmiss; i++)
			{
				CheckMissBL(X, RM[i], CM[i], RE1, CE1, f2[i], fm2, cntBL);
				CheckMissHol(X, RM[i], CM[i], RE2, CE2, f2[i], fm, cntH);
				if (f2[i] == 0 )
				{
					SetMiss(X, RM[i], CM[i]);
					MoveMiss(RM[i], CM[i], VM[i]);
				}
			}
			for (int k = 0; k < cntBL; k++)
			{
				if (fm2[k] == 0)
				{
					SetBombsLauncher(X, RE1[k], CE1[k]);
					if (cntBL == 1)
					{
						MoveBombLauncher(CE1[k]);
					}
				}
				else
				{
					DestroyBombLauncher(X, RE1[k], CE1[k], fm2[k]);
					if (ffm2[k] == 0 && fm2[k] == 2)
					{
						ffm2[k] = 1;
						//ff1[k] = 1;
						cntBL++;
						CE1[cntBL - 1] = 130;
						RE1[cntBL - 1] = 22;
						break;
					}
				}
			}
			for (int k = 0; k < cntH; k++)
			{
				if (fm[k] == 0)
				{
					if (CE2[k] > 0)
					{
						SetHolicopter(X, RE2[k], CE2[k], time);
						MoveHolicopter(CE2[k]);
					}
					else
					{
						CE2[k] = 130;
					}
				}
				else
				{
					if (RE2[k] != 22)
					{
						Destroyholicopter(X, RE2[k], CE2[k]);
						MoveDestroyedHol(RE2[k]);
					}
					else
					{
						Destroyholicopter(X, RE2[k], CE2[k]);
						if (ffm[k] == 0)
						{
							ffm[k] = 1;
							ff2[k] = 1;
							cntH++;
							RE2[cntH - 1] = 5;
							CE2[cntH - 1] = 140;
							break;
						}
					}

				}
			}
			for (int k = 0; k < cntS; k++)
			{
				if (fb[k] == 0)
				{
					SetSoldiers(X, RE3[k], CE3[k]);
					MoveSoldier(CE3[k]);
				}
				else
				{
					DestroySoldier(X, RE3[k], CE3[k]);
					if (ffb[k] == 0)
					{
						ffb[k] = 1;
						CE3[cntS] = 105;
						RE3[cntS] = 22;
						cntS++;
						break;
					}
				}
			}
			if (time % 10 == 0)
			{
				sr[cntSB] = RE3[cntS - 1] - 1;
				sc[cntSB] = CE3[cntS - 1] - 3;
				cntSB++;
			}
			for (int i = 0; i < cntSB; i++)
			{
				CheckSbullet(sr[i], sc[i], RH, CH, RH2, CH2, fe[i]);
				if (fe[i] == 0)
				{
					SetSbullet(X, sr[i], sc[i]);
					MoveSbullet(sc[i]);
				}
			}
			if (time % 10 == 0 && time != 0 && CE3[cntS - 1] < 75)
			{
				jump = 1;
				cntJ = 0;
			}
			if (jump == 1)
			{
				JumpSoldier(RE3[cntS - 1], cntJ);
				cntJ++;
			}
			if (time % 25 == 0)
			{
				br[cntbmb] = RE1[cntBL - 1] - 4;
				bc[cntbmb] = CE1[cntBL - 1] - 6;
				cntbmb++;
			}
			for (int i = 0; i < cntbmb; i++)
			{
				CheckDefense(dc, dr, bc[i], br[i], df, fbl[i], cntDF);
				CheckBomb(br[i], bc[i], RH, CH, RH2, CH2, fbl[i], fh);
				if (fbl[i] == 0)
				{
					if (bc[i]<CH + 14)
					{
						br[i]++;
					}
					SetBomb(X, br[i], bc[i]);
					MoveBomb(bc[i]);
				}
			}
			if (time % 20 == 0 && CE2[cntH - 1]>10 && CE2[cntH - 1]<90)
			{
				hr[cntHB] = RE2[cntH - 1];
				hc[cntHB] = CE2[cntH - 1] - 1;
				cntHB++;
			}
			for (int i = 0; i < cntHB; i++)
			{
				CheckHB(hr[i], hc[i], RH, CH, RH2, CH2, fhb[i], fh);
				if (fhb[i] == 0)
				{
					SetHB(X, hr[i], hc[i]);
					MoveHB(hr[i], hc[i]);
				}
			}
			for (int i = 0; i < cntDF; i++)
			{
				if (df[i] == 0)
				{
					SetDefense(X, dr[i], dc[i]);
					MoveDefense(dr[i], dc[i]);
				}
			}
			SetHero(X, RH, CH, V, fh);
			Disp(X,fh);
		}
		else
		{
			if (Q == 'k')
			{
				VM[cntmiss] = V;
				if (V == 1)
				{
					RM[cntmiss] = RH - 3;
					CM[cntmiss] = CH + 1;
				}
				if (V == 2)
				{
					RM[cntmiss] = RH - 5;
					CM[cntmiss] = CH;
				}
				if (V == 3)
				{
					RM[cntmiss] = RH - 5;
					CM[cntmiss] = CH - 2;
				}
				if (V == 4)
				{
					RM[cntmiss] = RH - 5;
					CM[cntmiss] = CH - 4;
				}
				if (V == 5)
				{
					RM[cntmiss] = RH - 3;
					CM[cntmiss] = CH - 5;
				}
				if (fh < 4)
				{
					cntmiss++;
				}
				Design0(X);
				if (c[cntD - 1] < 35)
				{
					c[cntD] = 130;
					cntD++;
				}
				for (int i = 0; i < cntD; i++)
				{
					Design1(X, r, c[i]);
				}
				for (int i = 0; i < cntbull; i++)
				{
					CheckBullet(X, CB[i], RE3, CE3, f[i], fb, cntS);
					if (f[i] == 0)
					{
						Setbullet(X, RB[i], CB[i]);
						MoveBullet(CB[i]);
					}
				}
				for (int i = 0; i < cntmiss; i++)
				{
					CheckMissBL(X, RM[i], CM[i], RE1, CE1, f2[i], fm2, cntBL);
					CheckMissHol(X, RM[i], CM[i], RE2, CE2, f2[i], fm, cntH);
					if (f2[i] == 0)
					{
						SetMiss(X, RM[i], CM[i]);
						MoveMiss(RM[i], CM[i], VM[i]);
					}
				}
				for (int k = 0; k < cntBL; k++)
					for (int k = 0; k < cntBL; k++)
					{
						if (fm2[k] == 0)
						{
							SetBombsLauncher(X, RE1[k], CE1[k]);
							if (cntBL == 1)
							{
								MoveBombLauncher(CE1[k]);
							}
						}
						else
						{
							DestroyBombLauncher(X, RE1[k], CE1[k], fm2[k]);
							if (ffm2[k] == 0 && fm2[k] == 2)
							{
								ffm2[k] = 1;
								//ff1[k] = 1;
								cntBL++;
								CE1[cntBL - 1] = 130;
								RE1[cntBL - 1] = 22;
								break;
							}
						}
					}
				for (int k = 0; k < cntH; k++)
				{
					if (fm[k] == 0)
					{
						if (CE2[k] > 0)
						{
							SetHolicopter(X, RE2[k], CE2[k], time);
							MoveHolicopter(CE2[k]);
						}
						else
						{
							CE2[k] = 130;
						}
					}
					else
					{
						if (RE2[k] != 22)
						{
							Destroyholicopter(X, RE2[k], CE2[k]);
							MoveDestroyedHol(RE2[k]);
						}
						else
						{
							Destroyholicopter(X, RE2[k], CE2[k]);
							if (ffm[k] == 0)
							{
								ffm[k] = 1;
								ff2[k] = 1;
								cntH++;
								RE2[cntH - 1] = 5;
								CE2[cntH - 1] = 140;
								break;
							}
						}

					}
				}
				for (int k = 0; k < cntS; k++)
				{
					if (fb[k] == 0)
					{
						SetSoldiers(X, RE3[k], CE3[k]);
						MoveSoldier(CE3[k]);
					}
					else
					{
						DestroySoldier(X, RE3[k], CE3[k]);
						if (ffb[k] == 0)
						{
							ffb[k] = 1;
							CE3[cntS] = 105;
							RE3[cntS] = 22;
							cntS++;
							break;
						}
					}
				}
				if (time % 10 == 0)
				{
					sr[cntSB] = RE3[cntS - 1] - 1;
					sc[cntSB] = CE3[cntS - 1] - 3;
					cntSB++;
				}
				for (int i = 0; i < cntSB; i++)
				{
					CheckSbullet(sr[i], sc[i], RH, CH, RH2, CH2, fe[i]);
					if (fe[i] == 0)
					{
						SetSbullet(X, sr[i], sc[i]);
						MoveSbullet(sc[i]);
					}
				}
				if (time % 10 == 0 && time != 0 && CE3[cntS - 1] < 75)
				{
					jump = 1;
					cntJ = 0;
				}
				if (jump == 1)
				{
					JumpSoldier(RE3[cntS - 1], cntJ);
					cntJ++;
				}
				if (time % 25 == 0)
				{
					br[cntbmb] = RE1[cntBL - 1] - 4;
					bc[cntbmb] = CE1[cntBL - 1] - 6;
					cntbmb++;
				}
				for (int i = 0; i < cntbmb; i++)
				{
					CheckDefense(dc, dr, bc[i], br[i], df, fbl[i], cntDF);
					CheckBomb(br[i], bc[i], RH, CH, RH2, CH2, fbl[i], fh);
					if (fbl[i] == 0)
					{
						if (bc[i]<CH + 14)
						{
							br[i]++;
						}
						SetBomb(X, br[i], bc[i]);
						MoveBomb(bc[i]);
					}
				}
				if (time % 20 == 0 && CE2[cntH - 1]>10 && CE2[cntH - 1]<90)
				{
					hr[cntHB] = RE2[cntH - 1];
					hc[cntHB] = CE2[cntH - 1] - 1;
					cntHB++;
				}
				for (int i = 0; i < cntHB; i++)
				{
					CheckHB(hr[i], hc[i], RH, CH, RH2, CH2, fhb[i], fh);
					if (fhb[i] == 0)
					{
						SetHB(X, hr[i], hc[i]);
						MoveHB(hr[i], hc[i]);
					}
				}
				for (int i = 0; i < cntDF; i++)
				{
					if (df[i] == 0)
					{
						SetDefense(X, dr[i], dc[i]);
						MoveDefense(dr[i], dc[i]);
					}
				}
				SetHero(X, RH, CH, V, fh);
				Disp(X,fh);
			}
			else
			{
				Design0(X);
				if (c[cntD-1] < 35)
				{
					c[cntD] = 130;
					cntD++;
				}
				for (int i = 0; i < cntD; i++)
				{
					Design1(X, r, c[i]);
				}
				for (int i = 0; i < cntbull; i++)
				{
					CheckBullet(X, CB[i], RE3, CE3, f[i], fb, cntS);
					if (f[i] == 0)
					{
						Setbullet(X, RB[i], CB[i]);
						MoveBullet(CB[i]);
					}
				}
				for (int i = 0; i < cntmiss; i++)
				{
					CheckMissBL(X, RM[i], CM[i], RE1, CE1, f2[i], fm2, cntBL);
					CheckMissHol(X, RM[i], CM[i], RE2, CE2, f2[i], fm, cntH);
					if (f2[i] == 0)
					{
						SetMiss(X, RM[i], CM[i]);
						MoveMiss(RM[i], CM[i], VM[i]);
					}
				}
				for (int k = 0; k < cntBL; k++)
				{
					if (fm2[k] == 0)
					{
						SetBombsLauncher(X, RE1[k], CE1[k]);
						if (cntBL == 1)
						{
							MoveBombLauncher(CE1[k]);
						}
					}
					else
					{
						DestroyBombLauncher(X, RE1[k], CE1[k], fm2[k]);
						if (ffm2[k] == 0 && fm2[k] == 2)
						{
							ffm2[k] = 1;
							//ff1[k] = 1;
							cntBL++;
							CE1[cntBL - 1] = 130;
							RE1[cntBL - 1] = 22;
							break;
						}
					}
				}
				for (int k = 0; k < cntH; k++)
				{
					if (fm[k] == 0)
					{
						if (CE2[k] > 0)
						{
							SetHolicopter(X, RE2[k], CE2[k], time);
							MoveHolicopter(CE2[k]);
						}
						else
						{
							CE2[k] = 130;
						}
					}
					else
					{
						if (RE2[k] != 22)
						{
							Destroyholicopter(X, RE2[k], CE2[k]);
							MoveDestroyedHol(RE2[k]);
						}
						else
						{
							Destroyholicopter(X, RE2[k], CE2[k]);
							if (ffm[k] == 0)
							{
								ffm[k] = 1;
								ff2[k] = 1;
								cntH++;
								RE2[cntH - 1] = 5;
								CE2[cntH - 1] = 140;
								break;
							}
						}

					}
				}
				for (int k = 0; k < cntS; k++)
				{
					if (fb[k] == 0)
					{
						SetSoldiers(X, RE3[k], CE3[k]);
						MoveSoldier(CE3[k]);
					}
					else
					{
						DestroySoldier(X, RE3[k], CE3[k]);
						if (ffb[k] == 0)
						{
							ffb[k] = 1;
							CE3[cntS] = 105;
							RE3[cntS] = 22;
							cntS++;
							break;
						}
					}
				}
				if (time % 10 == 0)
				{
					sr[cntSB] = RE3[cntS - 1] - 1;
					sc[cntSB] = CE3[cntS - 1] - 3;
					cntSB++;
				}
				for (int i = 0; i < cntSB; i++)
				{
					CheckSbullet(sr[i], sc[i], RH, CH, RH2, CH2, fe[i]);
					if (fe[i] == 0)
					{
						SetSbullet(X, sr[i], sc[i]);
						MoveSbullet(sc[i]);
					}
				}
				if (time % 10 == 0 && time != 0 && CE3[cntS - 1] < 75)
				{
					jump = 1;
					cntJ = 0;
				}
				if (jump == 1)
				{
					JumpSoldier(RE3[cntS - 1], cntJ);
					cntJ++;
				}
				if (time % 25 == 0)
				{
					br[cntbmb] = RE1[cntBL - 1] - 4;
					bc[cntbmb] = CE1[cntBL - 1] - 6;
					cntbmb++;
				}
				for (int i = 0; i < cntbmb; i++)
				{
					CheckDefense(dc, dr, bc[i], br[i], df, fbl[i], cntDF);
					CheckBomb(br[i], bc[i], RH, CH, RH2, CH2, fbl[i], fh);
					if (fbl[i] == 0)
					{
						if (bc[i]<CH + 14)
						{
							br[i]++;
						}
						SetBomb(X, br[i], bc[i]);
						MoveBomb(bc[i]);
					}
				}
				if (time % 20 == 0 && CE2[cntH - 1]>10 && CE2[cntH - 1]<90)
				{
					hr[cntHB] = RE2[cntH - 1];
					hc[cntHB] = CE2[cntH - 1] - 1;
					cntHB++;
				}
				for (int i = 0; i < cntHB; i++)
				{
					CheckHB(hr[i], hc[i], RH, CH, RH2, CH2, fhb[i], fh);
					if (fhb[i] == 0)
					{
						SetHB(X, hr[i], hc[i]);
						MoveHB(hr[i], hc[i]);
					}
				}
				if (Q == 'a' || Q == 'd')
				{
					if (fh == 4)
					{
						SetHero(X, RH, CH, V, fh);
					}
					else
					{
						SetMovingHero(X, RH, CH, V, fh);
						Scroll(CE1, CE2, CE3, c, Q, CB, CM);
						MoveHero(CH, Q, CE1, CE2, CE3, CB, CM, c);
							
					}
					
				}
				else
				{
					if (Q == 'h' && fh < 3)
					{
						dr[cntDF] = RH-2;
						dc[cntDF] = CH + 3;
						cntDF++;
						
					}
				}
				for (int i = 0; i < cntDF; i++)
				{
					if (df[i] == 0)
					{
						SetDefense(X, dr[i], dc[i]);
						MoveDefense(dr[i], dc[i]);
					}
				}
				if (Q == 'h' || (Q != 'a' && Q != 'd') || Q=='w' || Q=='s')
				{
					SetHero(X, RH, CH, V, fh);

				}
				MoveMissileLauncher(V, Q);
				Disp(X,fh);
			}
		}
		time++;
		if (fh == 4)
		{
			break;
		}
	}
}
