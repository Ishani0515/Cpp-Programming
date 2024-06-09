#include<iostream>
using namespace std;
int i=10;
int main()
{
    int i=20;
    {
        int i=30;
        cout<<i<<::i;
    }
    cout<<i;
    return 0;
}
