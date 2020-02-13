#include <iostream>

using namespace std;

int main()
{
    int a,maxi,mini,tmp,c=0,b=0;
    cin>>a;
    maxi,mini;
    cin>>maxi;
    mini=maxi;
    for(int i=1;i<a;i++)
    {
        cin>>tmp;
        if(tmp>maxi)
        {
            maxi=tmp;
            b++;
        }
          if(tmp<mini)
        {
            mini=tmp;
            c++;
        }
    }
    cout<<b<<" "<<c<<endl;
    return 0;
}
