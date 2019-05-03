#include<iostream>
#include<stdio.h>
#include<conio.h>
#include<iomanip>
using namespace std;
int main()
{
	int p[20], bt[20], wt[20], tat[20], i, k, n, temp;
	float wt_avg, tat_avg;
	cout<<"\nEnter the number of processes = ";
	cin>>n;
	for(i=0;i<n;i++)
	{
	p[i]=i;
	cout<<"Enter Burst Time for Process "<< i<<" = ";
	cin>>bt[i];
	}
	for(i=0;i<n;i++)
	{
		for(k=i+1;k<n;k++)
		{
			if(bt[i]>bt[k])
			{
				temp=bt[i];
				bt[i]=bt[k];
				bt[k]=temp;
				temp=p[i];
				p[i]=p[k];
				p[k]=temp;
			}
		}
	}	
	wt[0] = wt_avg = 0;
	tat[0] = tat_avg = bt[0];
	for(i=1;i<n;i++)
	{
		wt[i] = wt[i-1] +bt[i-1];
		tat[i] = tat[i-1] +bt[i];
		wt_avg = wt_avg + wt[i];
		tat_avg = tat_avg + tat[i];
	}
	cout<<"\n\t PROCESS \tBURST TIME \t WAITING TIME\t TURNAROUND TIME\n"<<endl;
	for(i=0;i<n;i++)
		cout<<setw(15)<<p[i]<<setw(15)<<bt[i]<<setw(15)<< wt[i]<<setw(15)<<tat[i]<<endl;
		cout<<"\nAverage Waiting Time 		="<< wt_avg/n;
		cout<<"\nAverage Turnaround Time 	="<< tat_avg/n;
	
	return 0;
}
