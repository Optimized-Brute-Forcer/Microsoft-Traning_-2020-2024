#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cout<<"Enter size :";
    cin>>n;
    for(int i=n;i>=1;i--)
    {
        for(int j=i;j>=1;j--)
        {
            cout<<j<<' ';
        }
        cout<<endl;
    }
    return EXIT_SUCCESS;
}