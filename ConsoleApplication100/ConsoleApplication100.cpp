#include<cmath>
#include <iostream>
#include <algorithm>
#include <vector>
#include <set>
#include <map>
#include <iomanip>
#include <string>
#include <queue>
#include <stack>
#define ll  long long
#define ld  long double
#define ll  long long int
#define ull unsigned long long
#define uld unsigned long double
#define line cout << endl;
#define all(v) v.begin(),v.end()
#define allr(s) s.rbegin(),s.rend()
#define ps(x) cout<<x<<" ";
#define ps2(x,y) cout<<x<<" "<<y;
#define pl(x) cout<<x<<endl;
using namespace std;

ll gcd(ll a, ll b)
{
	return b == 0 ? abs(a) : gcd(b, a % b);
}
ll lcm(ll a, ll b)
{
	return a / gcd(a, b) * b;
}
ll nCr(ll n, ll r)
{
	ll ans = 1, div = 1;
	for (ll i = r + 1; i <= n; i++) {
		ans = ans * i;
		ans /= div;
		div++;
	}
	return ans;
}
ll poow(ll x, ll k, ll mod)
{
	ll ret = 1;
	while (k) {
		if (k & 1) ret = (ret * x) % mod;
		k >>= 1; x = (x * x) % mod;
	}
	return ret;
}
ll poow2(ll x, ll k)
{
	ll ret = 1;
	while (k) {
		if (k & 1) ret = (ret * x);
		k >>= 1; x = (x * x);
	}
	return ret;
}



int main()
{
	int n,num,q;
	cin >> n;
	vector<vector<string>>v2d(n);
	
	for (int i = 0; i <n; i++)
	{
		cin >> num;
		for (int j = 0; j < num; j++)
		{
			string s;
			cin >> s;
			v2d[i].push_back(s);
		}
	}
	cin >> q;
	while (q--)
	{
		cin >> num;
		vector<string>vs;
		for (int j = 0; j < num; j++)
		{	
			string s;
			cin >> s;
			vs.push_back(s);
		}
			for (int i = 0; i < v2d.size(); i++)
			{
				if (num<= v2d[i].size())
				{
					bool ok = true;
					for (int i1 = 0; i1 < vs.size(); i1++)
					{
						if (vs[i1] != v2d[i][i1])
						{
							ok = false;
							i1 = num + 10;
							break;
						}
					}
					if (ok)
					{
						for (int k = 0; k < v2d[i].size(); k++)
						{
							cout << v2d[i][k] << " ";
						}
						cout << endl;
					}
				}
			}
			vs.clear();
			cout << "===================================" << endl;
			cout << "===================================" << endl;
	}
}