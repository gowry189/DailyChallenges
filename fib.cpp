# include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,sum=0;
	cin>>n;
	int a=0,b=1,temp;
	for(int i=0;i<n;i++)
	{
	    temp=a+b;
	    a=b;
	    b=temp;
	    sum+=a;
	}

    cout<<sum;
}
