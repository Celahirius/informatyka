#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;

int main()
{	
	srand(time(NULL));

	int n,m;
	cin>>n>>m;
	
	int tab[n][m];
	
	int max=0, suma;
	int ni, nj;
	
	for(int i=0; i<n; i++)
	{
		for(int j=0; j<m; j++)
		{
			tab[i][j]=rand()%(m*n);
			
		}
	}
	
	for(int i=0; i<n; i++)
	{
		for(int j=0; j<m; j++)
		{
			cout<<tab[i][j]<<" ";
		}
		cout<<endl;
	}
	
	cout<<endl;
	
	for(int i=0; i<n-1; i++)
	{
		for(int j=0; j<m-1; j++)
		{
			suma=tab[i][j]+tab[i+1][j]+tab[i][j+1]+tab[i+1][j+1];
			if(suma>max) 
			{
				max=suma;
				ni=i;
				nj=j;
			}
		}
	}
	
	cout<<tab[ni][nj]<<" "<<tab[ni][nj+1]<<endl;
	cout<<tab[ni+1][nj]<<" "<<tab[ni+1][nj+1]<<endl;
	cout<<suma<<endl;
}
