#include<iostream>
using namespace std;
int main()
{
    int array[]={5,9,15,25,28};
    int max=array[0];
    for(int i=0;i<5;i++)
    {
        if(array[i]>max)
        {
            max=array[i];
        }
    }

    cout<<max<<endl;
    return 0;
    
}