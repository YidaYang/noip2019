#include<iostream>
#include<cstdio>
#include<string>
#include<cmath>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
struct jl{
	ll tool;
	ll price;
	ll t;
	bool youhui;
}a[100001];
ll n,ans,highprice,hight;
bool flg;
int main()
{
	//freopen("transfer.in","r",stdin);
	//freopen("transfer.out","w",stdout);
	scanf("%lld",&n);
	for(ull z=1;z<=n;z++)
	{
		flg=0;
		scanf("%lld",&a[z].tool);
		scanf("%lld",&a[z].price);
		scanf("%lld",&a[z].t);
		if(a[z].tool==0)
		{
			a[z].youhui=1;
			if(a[z].price>highprice)
			{
				highprice=a[z].price;
			}
			if(a[z].t>hight)
			{
				hight=a[z].t;
			}
		}
		if(a[z].tool==0)
		{
			ans+=a[z].price;
			continue;
		}
		if(a[z].t-hight>45||a[z].price>highprice)
		{
			flg=0;
		}
		else
		for(ull i=1;i<z;i++)
		{
			if((a[z].t-a[i].t<=45)&&(a[i].tool==0)&&(a[i].youhui==1)&&(a[i].price>=a[z].price))
			{
				a[i].youhui=0;
				flg=1;
				break;
			}
		}
		if(flg==0)
		{
			ans+=a[z].price;
		}
	}
	cout<<ans;
	//fclose(stdin);
	//fclose(stdout);
	return 0;
}
