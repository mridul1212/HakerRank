#include<iostream>
using namespace std;
int main()
{
    int x1,a1,x2,a2;
    cin>>x1>>a1>>x2>>a2;
    if(a2>=a1)
        cout<<"NO"<<endl;
    else if((x2-x1)%(a1-a2)==0)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
    return 0;
}

