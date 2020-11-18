#include <iostream>
using namespace std;
int main()
{
	char x[10][10];
	int pos[10];//display for the columns numbers
	char color;
	int col;//position of each column
	int row;
	int count1,count2;
	int f=0;
	for(int i=0; i<10; i++)
	{
		for(int k=0; k<10; k++)
		{
			x[i][k]='0';
		}
	}
	for(int i=0; i<10; i++)
	{
		pos[i]=i+1;
	}
	cout<<"please select the color (R>red ,, B>black):";
	cin>>color;
	for(int j=0; ; j++)
	{
		for(int i=0; i<10; i++)
		{
			cout<<pos[i]<<"|";
		}
		cout<<endl;
		for(int i=0; i<10; i++)
		{
			for(int k=0; k<10; k++)
			{
				cout<<x[i][k]<<"|";
			}
			cout<<endl;
		}
		if(j%2==0)
		{
			cout<<"player (R) please enter column's number:";
			cin>>col;
		}
		else
		{
			cout<<"player (B) please enter column's number:";
			cin>>col;
		}
		for(int i=0; i<10; i++)
		{
			if(x[i][col-1]!='0')
			{
				break;
			}
			row=i;
		}
		if(j%2==0)
		{
			x[row][col-1]=color;
		}
		else
		{
			if(color=='B')
			{
				x[row][col-1]='R';
			}
			else
			{
				x[row][col-1]='B';
			}
		}
		for(int i=0; i<10; i++)
		{
			for(int k=0; k<10; k++)
			{
				char t1='R';
				char t2='B';
				/*count1=0;
				count2=0;
				for(int c=k; c<k+4; c++)
				{
					if(k+4>9)
					{
						break;
					}
					if(x[i][c]==t1)
					{
						count1++;
					}
					if(x[i][c]==t2)
					{
						count2++;
					}
				}
				if(count1==4) 
				{
					f=1;
					break;
				}
				if(count2==4)
				{
					f=1;
					break;
				}
				count1=0;
				count2=0;
				for(int r=i; r<i+4; r++)
				{
					if(i+4>9)
					{
						break;
					}
					if(x[r][k]==t1)
					{
						count1++;
					}
					if(x[r][k]==t2)
					{
						count2++;
					}
				}
				if(count1==4) 
				{
					f=1;
					break;
				}
				if(count2==4)
				{
					f=1;
					break;
				}*///
				int r=i;
				count1=0;
				count2=0;
				for(int c=k; c<k+4; c++)
				{
					if(k+4>9) 
					{
						break;
					}
					if(i+4>9)
					{
						break;
					}
					if(x[r][c]==t1)
					{
						count1++;
					}
					if(x[r][c]==t2)
					{
						count2++;
					}
					r++;
				}
				if(count1==4) 
				{
					f=1;
					break;
				}
				if(count2==4)
				{
					f=1;
					break;
				}
				r=i;
				count1=0;
				count2=0;
				for(int c=k; c>k-4; c--)
				{
					if(k-4<0) 
					{
						break;
					}
					if(i-4<0)
					{
						break;
					}
					if(x[r][c]==t1)
					{
						count1++;
					}
					if(x[r][c]==t2)
					{
						count2++;
					}
					r--;
				}
				if(count1==4) 
				{
					f=1;
					break;
				}
				if(count2==4)
				//{.+*
				.66`	
					f=1;
					break;
				}
			}
			if(f==1)
			{
				break;
			}
		}
		if(f==1)
		{
			for(int i=0; i<10; i++)
			{
				cout<<pos[i]<<"|";
			}
			cout<<endl;
			for(int i=0; i<10; i++)
			{
				for(int k=0; k<10; k++)
				{
					cout<<x[i][k]<<"|";
				}
				cout<<endl;
			}
			if(j%2==0)
			{
				cout<<"player ("<<color<<") wins";
			}
			else
			{
				if(color=='B')
				{
					cout<<"player (R) wins";
				}
				else
				{
					cout<<"player (B) wins";
				}
			}
			cout<<endl;
			break;
		}

		/*for(int i=0; i<10; i++)
		{
			for(int k=0; k<10; k++)
			{
				
				if(count==4) break;
			}
			if(count==4) break;
		}
		if(count==4) break;

		for(int i=0; i<10; i++)
		{
			for(int k=0; k<10; k++)
			{
				
				if(count==4) break;
			}
			if(count==4) break;
		}
		if(count==4) break;*/

	}

	system("pause");
	return 0;
}