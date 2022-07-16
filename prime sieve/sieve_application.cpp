#include<bits/stdc++.h>
//#include<ext/pb_ds/assoc_container.hpp>
//using namespace __gnu_pbds;
using namespace std;
#define ll        long long int
#define ld        long double
#define mod             1000000007
#define inf             1e18
#define endl      "\n"
#define pb        emplace_back
#define vi              vector<ll>
#define vs        vector<string>
#define pii             pair<ll,ll>
#define ump       unordered_map
#define mp        map
#define pq_max          priority_queue<ll>
#define pq_min          priority_queue<ll,vi,greater<ll> >
#define ff        first
#define ss        second
#define mid(l,r)        (l+(r-l)/2)
#define loop(i,a,b)   for(int i=(a);i<=(b);i++)
#define looprev(i,a,b)  for(int i=(a);i>=(b);i--)

//question:

// CALCULATE THE NUMBER OF DIVISORS OF N! FOR ANY GIVEN N

//THIS IS APPLICATION OF PRIME SIEVE AND THE INPLEMENTATION IS GIVEN BELOW

void file_i_o()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
}
//we can also use bitset in place of vector or array
//initialized with all zeroes
//it can be initialized is_prime(7)->gives the binary of 7 and stores int
//is_prime.set(2)->it makes the bit at 2 - >1
// bitset <50005> is_prime;
vector<bool> isprime(50005, true);
vector<ll> prime;
void gen_primes(ll max_limit)
{
	isprime[0] = isprime[1] = false;
	for (int i = 2; i * i <= max_limit; i++)
	{
		if (isprime[i])
		{
			//ith index is prime
			for (int j = i * i; j <= max_limit; j += i)
			{
				isprime[j] = false;
			}
		}
	}
	for (int i = 0 ; i <= max_limit; i++)
	{
		if (isprime[i])
		{
			prime.push_back(i);
		}
	}
}

ll divisorOfFact(ll n)
{
	ll result = 1;
	for (int i = 0; prime[i] <= n; i++)
	{
		ll k = prime[i];
		ll cnt = 0;
		while ((n / k) != 0)
		{
			cnt = (cnt + (n / k)) % mod;
			k = k * prime[i];
		}
		result = (result % mod * (cnt + 1) % mod) % mod;

	}

	return result;
}
int main(int argc, char const *argv[]) {
	clock_t begin = clock();
	file_i_o();
	//Code here......
	gen_primes(50001);
	// for (int i = 0; i <= prime.size() - 1; i++)
	// {
	// 	cout << prime[i] << " ";
	// }
	int t;
	cin >> t;
	while (t--)
	{
		ll n;
		cin >> n;
		cout << divisorOfFact(n) << endl;
	}

#ifndef ONLINE_JUDGE
	clock_t end  = clock();
	cout << "\n\nEXECUTED IN: " << double(end - begin) / CLOCKS_PER_SEC * 1000 << " ms";
#endif
	return 0;
}
