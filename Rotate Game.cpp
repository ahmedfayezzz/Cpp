#include <iostream>
using namespace std;
int main()
{
	int x[3][3];
	int reg;
	char direc;
	int r,c;
	for(int i=0; i<3; i++)
	{
		for(int k=0; k<3; k++)
		{
			cin>>x[i][k];
		}
	}
	cout<<"1 >> bottom-right"<<endl;
	cout<<"2 >> bottom-left"<<endl;
	cout<<"3 >> top-right"<<endl;
	cout<<"4 >> top-left"<<endl;
	cout<<endl;
	cout<<"left direction >> l"<<endl;
	cout<<"right direction >> r"<<endl;
	
	for(int j=0; j<99999;  j++)
	{
		for(int i=0; i<3; i++)
		{
			for(int k=0; k<3; k++)
			{
				cout<<x[i][k]<<"|";
			}
			cout<<endl;
		}
		cout<<"Please type the region number:";
		cin>>reg;
		cout<<"Please type the direction:";
		cin>>direc;
		if(reg==1)
		{
			r=1; c=1;
		}
		if(reg==2)
		{
			r=1; c=0;
		}
		if(reg==3)
		{
			r=0; c=1;
		}
		if(reg==4)
		{
			r=0; c=0;
		}
		if(direc=='l')
		{
				
				int t;
				t=x[r][c];
				x[r][c]=x[r][c+1];
				x[r][c+1]=t;

				t=x[r][c+1];
				x[r][c+1]=x[r+1][c];
				x[r+1][c]=t;
					
				t=x[r][c+1];
				x[r][c+1]=x[r+1][c+1];
				x[r+1][c+1]=t;
		}
		if(direc=='r')
		{ 
				int t;
				t=x[r][c];
				x[r][c]=x[r][c+1];
				x[r][c+1]=t;

				t=x[r][c];
				x[r][c]=x[r+1][c+1];
				x[r+1][c+1]=t;
					
				t=x[r][c];
				x[r][c]=x[r+1][c];
				x[r+1][c]=t;
			
		}
		int count=0;
		for(int i=0; i<3; i++)
		{
			for(int k=0; k<3; k++)
			{
				if(x[i][k+1]-x[i][k]==1) count++;
			}
		}
		if(count==8)
		{
			for(int i=0; i<3; i++)
			{
				for(int k=0; k<3; k++)
				{
					cout<<x[i][k]<<"|";
				}
				cout<<endl;
			}
			cout<<"Congratulations! You won"<<endl;
			break;
		}
		cout<<count<<endl;
	}
	return 0;
}