#include <iostream>
#include <string>
using namespace std;

int main() {
	string a;
    string b;
    cin >> a;
    cin >> b;

//both length() and size() can be used
    cout<<a.length()<<" "<<b.size()<<endl;

    cout<<a+b<<endl;

//using swap funtion
    swap(a[0],b[0]);
    cout<<a<<" "<< b;

  
    return 0;
}