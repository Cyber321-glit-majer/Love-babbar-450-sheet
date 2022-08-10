
#include <bits/stdc++.h>

using namespace std;

int main()
{
   int n=4;
   int a[n]={4, 2, 1, 8};
   sort(a,a+n);
   std::vector<int>v ;
   for(int i=0;i<n;i++)
   {
       cout<<a[i]<<" ";
   }
   cout<<endl;
   int sum=0;
   for(int i=0;i<n/2;i++)
   {
       v.push_back(a[i]);
       v.push_back(a[n-i-1]);
   }
   for(auto i:v)
   {
       cout<<i<<" ";
   }
   cout<<endl;
     for(int i=0;i<n;i++)
   {
       sum+=abs(v[i]-v[i+1]);
       cout<<v[i]<<" "<<v[i+1]<<" ";

       
   }
   cout<<endl;
   cout<<sum-v[0];

    return 0;
}
