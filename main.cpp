#include <iostream>
using namespace std;
int main() {

    int n=0;
    cin>>n;

    int a=0, b=1, c=a+b;
    cout<<b<<endl;

    while(c<=n){

        c=a+b;
        a=b;
        b=c;
        cout << a << endl;
    }
