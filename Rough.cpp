#include<iostream>
using namespace std;
int main()
{
    /*
    int i=0 ;
    while(i<3)
    {
        cout << i << " " ;
        i = i++ ; 
    }
    */


    /*
    int x = 5 ;
    auto f = [=]()mutable{
        x++ ;
        return x ;
    };
    
    cout << f() << " " << x << endl ;
    */


    int x = 5 ;
    cout << (x++ + ++x) << endl ;
}