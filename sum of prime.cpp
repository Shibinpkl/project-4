#include <iostream>
using namespace std;
bool prime(int x)
{
    int m,flag=0,c=0;
    m=x/2;
    for(int i=2;i<=m;i++)
    {
        if(x%i==0)
        {
            flag=1;
            break;
        }
    }
    if(flag==0)
    c=1;
}
int main()
{
    int n;
    cout<<"Enter a positive integer";
    cin>>n;
    for(int i=1;i<=(n/2);i++)
    {
        if(prime(i)&&prime(n-i))
        {
            cout<<i<<"+"<<n-i<<"="<<n<<"\n";   
        }
    }
    return 0;
}
