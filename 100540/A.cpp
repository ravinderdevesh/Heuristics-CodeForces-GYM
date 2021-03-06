// akshayjaggi

#include<bits/stdc++.h>

using namespace std;

#define TRACE
#ifdef TRACE
#define trace(...) __f(#__VA_ARGS__, __VA_ARGS__)
template <typename Arg1>
void __f(const char* name, Arg1&& arg1){
    cerr << name << " : " << arg1 << std::endl;
}
template <typename Arg1, typename... Args>
void __f(const char* names, Arg1&& arg1, Args&&... args){
    const char* comma = strchr(names + 1, ',');cerr.write(names, comma - names) << " : " << arg1<<" | ";__f(comma+1, args...);
}
#else
#define trace(...)
#endif

#define si(x) scanf("%d",&x)
#define F first
#define S second
#define PB push_back
#define MP make_pair


typedef long long LL;
typedef pair<int,int> PII;
typedef vector<int> VI;
typedef vector<PII> VPII;

#ifdef ONLINE_JUDGE
//FILE *fin = freopen("in","r",stdin);
//FILE *fout = freopen("out","w",stdout);
#endif

int main()
{
	//ios_base::sync_with_stdio(false);
	int S,B;
	si(S);
	si(B);
	while(S!=0 && B!=0)
	{
		list<int> lis;
		map<int,list<int>::iterator> mp;
		for(int i=0; i<=S+1; i++)
		{
		lis.push_back(i);
		mp[i]=--lis.end();
	}
	for(int i=0; i<B; i++)
	{
		int L,R;
		si(L);
		si(R);
		auto ll = mp[L];
		auto rr = mp[R];
		auto l = *(--ll);
		auto r = *(++rr);
		if(l==0)
			printf("*");
		else
			printf("%d",l);
		printf(" ");
		if(r==S+1)
			printf("*");
		else
			printf("%d",r);
		printf("\n");
		lis.erase(mp[L],rr);
	}
	printf("-\n");
	si(S);
	si(B);
	}
  return 0;	
}

