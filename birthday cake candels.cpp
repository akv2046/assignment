#include <bits/stdc++.h>

using namespace std;
int main(){
    int n,max=0;
    cin>>n;
    vector<int>candles(n);
    for(int i = 0; i < n; i++)
    {
    cin>>candles[i];   
    }
    sort(candles.begin(),candles.end());
     for(int i = 0; i<n; i++)
     {
       if(candles[i]==candles[n-1])
           max++;
     }
     cout<<max;
}
