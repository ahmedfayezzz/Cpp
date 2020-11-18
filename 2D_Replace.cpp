#include <iostream>
using namespace std;
int main()
{
	int x[3][6];

	for(int i=0; i<3; i++)
	{
		for(int k=0; k<6; k++)
		{
			cin>>x[i][k];
		}
	}
	int tot,average; 
	for(int i=0; i<3; i++)
	{
		for(int k=0; k<6; k+=3)
		{
			tot=0;
			tot+=x[i][k]+x[i][k+1]+x[i][k+2];
			average=tot/3;
			x[i][k]=average;
			x[i][k+1]=average;
			x[i][k+2]=average;
			
		}
		
	}
	for(int i=0; i<3; i++)
	{
		for(int k=0; k<6; k++)
		{
			cout<<x[i][k]<<"|";
		}
		cout<<endl;
	}
	system("pause");
	return 0;
}