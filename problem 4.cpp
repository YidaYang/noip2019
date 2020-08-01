#include<bits/stdc++.h>
typedef unsigned long long ull;
using namespace std;
int a[20001][20001];
ull n,m,q;
bool flg;
void dfs(ull a1,ull l)
{
	if(flg) return;
	if(l==0)
	{
		if(a1==1)
		{
			flg=1;
			return;
		}
		else
		{
			return;
		}
	}
	for(ull i=1;i<=a[a1][0];i++)
	{
		dfs(a[a1][i],l-1);
	}
}
int main()
{
	scanf("%lld%lld%lld",&n,&m,&q);
	ull u,v;
	for(ull i=1;i<=m;i++)
	{
		scanf("%lld%lld",&u,&v);
		a[u][0]++;
		a[u][a[u][0]]=v;
		a[v][0]++;
		a[v][a[v][0]]=u;
	}
	ull a,l;
	for(ull i=1;i<=q;i++)
	{
		flg=0;
		//scanf("%lld%lld",&a,&l);
		cin>>a>>l;
		dfs(a,l);
		if(flg)
		{
			printf("Yes\n");
		}
		else
		{
			printf("No\n");
		}
	}
	return 0;
 } 
