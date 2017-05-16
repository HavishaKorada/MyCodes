#include <iostream>
using namespace std;

int main()
{
    int k,count=0,i;
    char x[100];
    cin>>x>>k;
    i=0;
    while(count<k)
    {
        if(x[i]!='9')
        {
        x[i]='9';
        count++;
        }
        i++;
    }
    cout<<x;
    return 0;
}
