#include<iostream>
#include<conio.h>
#include<stdio.h>
using namespace std;

int main()
{
	int n,a[10],b[10],c[10],na[10],nb[10],nc[10],i,coma,comb,comc,needa[10],needb[10],needc[10],check[10];
	cout<<"enter the number of process=";
	cin>>n;
	cout<<"enter the allocation"<<endl;
	cout<<"a\tb\tc"<<endl;
	for(i=1;i<=n;i++)
	{	
		cin>>a[i];
		cin>>b[i];
		cin>>c[i];
	}
	for(i=1;i<=n;i++)
	{
		check[i]=0;
	}
	cout<<"enter the max resources";
	cout<<endl<<"a\tb\tc"<<endl;
	for(i=1;i<=n;i++)
	{
		cin>>na[i];
		cin>>nb[i];
		cin>>nc[i];
	}
	cout<<"enter the Available"<<endl;
	cout<<"a\tb\tc"<<endl;
	cin>>coma>>comb>>comc;
	cout<<"Need is"<<endl;
	cout<<"a\tb\tc"<<endl;
	for(i=1;i<=n;i++)
	{
		needa[i]=na[i]-a[i];
		needb[i]=nb[i]-b[i];
		needc[i]=nc[i]-c[i];
		cout<<needa[i]<<"\t"<<needb[i]<<"\t"<<needc[i]<<endl;
	}
	cout<<"The Sequence Is:"<<endl;
	z:
	for(i=1;i<=n;i++)
	{
		if(coma>=needa[i]&&comb>=needb[i]&&comc>=needc[i]&&check[i]!=-1)
		{
			cout<<"P"<<i<<"\t";
			cout<<"\t"<<coma<<"\t"<<comb<<"\t"<<comc;
			check[i]=-1;
			coma=coma+a[i];
			comb=comb+b[i];
			comc=comc+c[i];
		}
	}
	for(i=1;i<=n;i++)
	{
		if(check[i]!=-1)
		{
			goto z;
		}
	}
	return 0;
}

