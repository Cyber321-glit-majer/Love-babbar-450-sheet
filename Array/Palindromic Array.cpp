class Solution {
public:

bool palin(int num)
{
    int rev=0,digit;
    int n=num;
    do
     {
         digit = num % 10;
         rev = (rev * 10) + digit;
         num = num / 10;
     } while (num != 0);
     if(n==rev)
     {
         return 1;
     }
     else
     return 0;

}
    int PalinArray(int a[], int n)
    {
    for(int i=0;i<n;i++)
    {
        if(!palin(a[i]))
        {
            return 0;
        }
    }
    return 1;
    }
};
