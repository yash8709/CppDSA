#include<bits/stdc++.h>
#include <string>
using namespace std;

int main(){
    char name[] ="Hello World";
    cout << name << endl;
    name[5]= '\0';
    cout << name;

    string s = "hello";

    s.push_back('\0');

    cout << s << endl;
    s += "world";
    cout << s << endl;

    return 0;
    

}