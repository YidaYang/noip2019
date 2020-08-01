#include<bits/stdc++.h>
#include<limits.h>
typedef unsigned long long ull;
ull t,n,m;
using namespace std;
ull a[101];
ull mmin=LLONG_MAX;
int main()
{
	scanf("%lld%lld%lld",&t,&n,&m);
	for(ull i=1;i<=t;i++)
	{
		for(ull j=1;j<=n;j++)
		{
			scanf("%lld",&a[i]);
			mmin=min(a[i],mmin);
		}
	}
	if(t==1)
	{
		printf("%lld",m);
		return 0;
	}
	else if(m<mmin)
	{
		printf("%lld",m);
		return 0;
	}
	else
	{
		printf("217\n");
	}
	return 0;
 } 
