#include <iostream>

using namespace std;
/*
int main()
{
    int n;
    cin>>n;
    int count=0;
    while(n)
    {
        count++;
        n = n & (n-1);
    }
    cout<<count<<endl;
    return 0;
}
*/
int main()
{
    int n;
    while(cin>>n)
    {
        int res = 0;
        int flag = 1;
        while(flag)
        {
            if(n&flag)
                res++;
            flag = flag << 1;
        }
        cout<<res<<endl;
    }
    return 0;
}
