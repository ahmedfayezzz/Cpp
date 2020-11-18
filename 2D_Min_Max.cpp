#include <iostream>
using namespace std;
int main()
{
	int x[3][15];

	cout<<"enter the attendence states for the students:"<<endl;
	for(int i=0; i<3; i++)
	{
		for(int k=0; k<15; k++)
		{
			cin>>x[i][k];
		}
	}
	int tot;
	int average;
	int min=999999;
	int max=-999999;
	int smax,smin;
	for(int i=0; i<3; i++)
	{
		tot=0;
		for(int k=0; k<15; k++)
		{
			tot+=(5-x[i][k]);
		}
		average=tot/15;
		cout<<"the average absents for student #"<<i<<"is:"<<average<<endl;
		if(average>max)
		{
			max=average;
			smax=i;

		}
		if(average<min)
		{
			min=average;
			smin=i;
		}
	}
	cout<<"The student with the maximum absents is student #"<<smax<<endl;
	cout<<"The student with the minimum absents is student #"<<smin<<endl;
	return 0;
}