#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--)
    {
        int n, res = 1e6;
		cin >> n;
		int a[n];
		for (int i = 0 ; i < n ; i++)
		{
			cin >> a[i];
		}
		for (int i = 0 ; i < n - 1 ; i++)
		{
			for (int j = i + 1 ; j < n ; j++)
			{
				if ( abs(a[i] + a[j]) < abs(res) )
				{
					res = a[i] + a[j];
				}
			}
		}
		cout << res;
		if ( t != 0 )
		{
			cout << endl;
		}
	}
}