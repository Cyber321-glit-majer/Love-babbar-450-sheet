/* By swap method*/

#include<bits/stdc++.h>
using namespace std;
int main()
 {
     int t;
     cin>>t;
     while(t--){
         int n;
         cin>>n;
         int a[n];
         for(int i=0;i<n;i++)
         {
             cin>>a[i];
           
         }
         int s=0;
         int e=n-1;
         while(s<e)
         {
             swap(a[s],a[e]);
             s++;
             e--;
         }
        for(int i=0;i<n;i++)
        {
            cout<<a[i]<<" ";
        }
     }


	return 0;
}


/* Recursivemethod*/


#include <bits/stdc++.h>

using namespace std;
void rev(int a[],int s,int e)
{
    if(s>=e)
    return ;
    swap(a[s],a[e]);
    rev(a,s+1,e-1);
}
int main()
{
    int n;
    cin>>n;
    int a[n];
     for(int i=0;i<n;i++)
     {
         cin>>a[i];
    
     }
     rev(a,0,n-1);
     for(int i=0;i<n;i++)
     {
         cout<<a[i]<<" ";
     }

    return 0;
}
