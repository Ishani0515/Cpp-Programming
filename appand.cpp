#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    ofstream out;
    char str[20];
    out.open("text.txt",ios::app);
    cout<<"\n Append txt:-"<<endl;
    cin.getline(str,20);
    out<<str;
    out.close();
    ifstream in;
    in.open("text.txt",ios::in);
    cout<<"contents of the file:-\n";
    while(in.eof()==0)
    {
        in>>str;
        cout<<str;    
    }
    in.close();
    return 0;
    }