#include<iostream>
using namespace std;
class X
{
    private:
    int a;
    public:
    void show()
    {
        cin>>a;
        cout<<a;
    }
};
int main()
{
    X x1;
    x1.show();
    return 0;
}