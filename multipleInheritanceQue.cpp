#include<iostream>
using namespace std;
class I1
{
int x,y;
protected:
int c;
public:
void in(){
    cout<<"enter 3 nos: \n";
    cin>>x>>y>>c;
}
void out(){
    cout<<x<<y<<c<<endl;
}
};
class I2
{
int a,b;
public:
void in()
{
    cout<<"Input 2 nos: \n";
    cin>>a>>b;
}
};
class I3: public I1,public I2{
    int m;
    public:
    void in()
    {
        cout<<"input 2 nos: \n";
        cin >> a >> b;
    }
    void out()
    {
     cout << a<< b ;
    }
};
class I3:public I1,public I2
{
    int m;
    public:
    void get()
    {
        m=c*c;
    }
    void put()
    {
     cout<<m;
    };
    int main()
    {
        I3 ob;
        ob.I1::in();
        ob.I1::out();
        ob.I2::in();
        ob.I2::out();
        ob.get();
        ob.put();
      return 0;
     }
}
