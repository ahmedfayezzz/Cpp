#include <iostream>
#include <stdio.h>
using namespace std;
int main()
{
	int x[100][2];
	char string[100];
	cout<<"enter the matrix that represents a given finite state machine:"<<endl;
	for(int i=0; i<3; i++)
	{
		for(int k='a'; k<'c'; k++)
		{
			cin>>x[i][k];
		}
	}
	cout<<"enter a string that contains (a's & b's):";
	gets(string);
	int count=0;
	for(int i=0; string[i]!='\0'; i++)
	{
		count ++;
	}
	count++;
	int end=0;
	for(int i=0; i<count; i++)
	{
		end=x[end][string[i]];

	}
	if(end==2)
	{
		cout<<"accepted"<<endl;
	}
	else
	{
		cout<<"not accepted"<<endl;
	}
	
	/*for(int i=0; i<3; i++)
	{
		for(int k='a'; k<'c'; k++)
		{
			if(x[i][k]==0)
			{
				end=0;
			}
			if(x[i][k]==1)
			{
				end=1;
			}
			if(x[i][k]==2)
			{
				end=2;
			}
		}
	}*/
	system("pause");
	return 0;
}