//problem from codeforces
#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define fast ios_base::sync_with_stdio(false);cin.tie();cout.tie();
 
 
int main()
{
    fast
    int h1,m1,h2,m2;
    char c;
    cin>>h1>>c>>m1>>h2>>c>>m2;
    
    int ans = (h1+h2)*60 + m1+m2;
    ans/=2;
    cout <<setw(2)<<setfill('0')<<ans/60<< ":" <<setw(2)<<setfill('0')<<ans%60;
    
}    
