#define _CRT_SECURE_NO_WARNINGS
#define _USE_MATH_DEFINES
#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <set>
#include <map>
#include <cmath>
#include <queue>
#include <iomanip>
#include <bitset>
#include <stack>
#include <memory.h>
#include <list>
#include <numeric>
#include <functional>
#include <complex>
#include <cassert>
#include <regex>
#include <random>
#include <fstream>
#include <math.h>
#include <numeric>
#include <unordered_set>
#include <unordered_map>

#define ll long long
#define ld long double
#define ul unsigned ll
#define ushi unsigned short int
#define endl '\n'
#define rf(i,a,b) for(ll i=a; i>=b; i--)
#define f(i,a,b) for(ll i=a; i<b; i++)
#define vll vector<ll>
#define vdb vector<double>
#define vi vector<int>
#define vb vector<bool>
#define vch vector<char>
#define vs vector<string>
#define pii pair<int,int>
#define pll pair<ll,ll>
#define vvll vector<vll>
#define vvdb vector<vdb>
#define vvs vector<vs>
#define vpll vector<pll>
#define vpii vector<pii>
#define vvi vector<vi>
#define ub upper_bound
#define all(v) v.begin(),v.end()
#define rall(v) v.rbegin(),v.rend()
#define csolve() int t; cin>>t; while(t--){solve();}
#define no cout << "NO\n"
#define yes cout << "YES\n"
#define pack(n) ll n; cin >> n; vll v(n); f(i, 0, n) { cin >> v[i]; }
#define ret return
ll MOD = 1e9 + 7;
ll LINF = (ll)4e18;
double EPS = 1e-7;

using namespace std;

ll gcd(ll a, ll b) {
	return b ? gcd(b, a % b) : a;
}
ll lcm(ll a, ll b) {
	return a / gcd(a, b) * b;
}

vector<int> z_func(string s) {
	int n = (int)s.length();
	vector<int> z(n);
	for (int i = 1, l = 0, r = 0; i < n; ++i) {
		if (i <= r)
			z[i] = min(r - i + 1, z[i - l]);
		while (i + z[i] < n && s[z[i]] == s[i + z[i]])
			++z[i];
		if (i + z[i] - 1 > r)
			l = i, r = i + z[i] - 1;
	}
	return z;
}
ll dfs(int v, vvll& g, vb& used, ll dim = 0)
{
	used[v] = 1;
	f(i, 0, g[v].size())
	{
		if (!used[g[v][i]])
		{
			return max(dfs(g[v][i], g, used, dim + 1), dim);
		}
	}
	return dim;
}
double log(double a, double b)
{
	return log(b) / log(a);
}
ll factorial(ll k) {
	if (k == 1 || k == 0)
		return 1;
	return	k * factorial(k - 1);
}

void dfs(int v, vvll& a, vll& us, ll c, ll n) {
	us[v] = c;
	for (vector<ll>::iterator i = a[v].begin(); i != a[v].end(); ++i)
		if (us[*i] == -1 && *i != n)
			dfs(*i, a, us, c, n);
}


void solve();
int main() {
#ifdef _DEBUG
	freopen("in.txt", "r", stdin);   freopen("out.txt", "w", stdout);
#else
	//freopen("input.txt", "r", stdin); freopen("output.txt", "w", stdout);
#endif
	ios::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);
	csolve();
	return 0;
}

void solve() {
	
}



