#include <iostream>
using namespace std;

//Printing n to 1 using backtracking
void print(int i , int n){
    if(i > n){
        return ;
    }
    print(i+1, n);
    cout << i << " ";
}

int main(){
    int n;
    cin >> n;
    print(1, n);
    return 0;
}