#include <iostream>
#include <iomanip>
#include <math.h>
#include <algorithm>
using namespace std;

int main()
{
    int n;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        (i % 2 == 0)? cout<<i:cout<<"";
         (i != n)?cout<<"\n": cout<<"";
    }
    return 0;
}

