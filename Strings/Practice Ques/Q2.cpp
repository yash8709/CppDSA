#include<bits/stdc++.h>
using namespace std;
char tolowercase( char ch){
    
    if(ch>='a'&& ch<='z'){
        return ch;
    }
    else{
        char temp = ch - 'A' + 'a';
        return temp;
    }
}
int getLength(char name[]){
    int count =0;
        for(int i =0;name[i] != '\0';i++){
            count++;
        }
        return count;
}
void reverse( char name[], int n){
    
    int st =0, e = n-1;

    while(st < e){
        swap(name[st++], name[e--]);
    }
}

bool check_palindrome(char name[], int n){
    int s =0, e= n-1;
    while(s<= e){
        if(tolowercase(name[s]) != tolowercase(name[e])){
            return 0;
        }
        else {
            s++, e--;
        }
    }
    return 1;
}

int main(){
    char name[20];
    cout << "enter your name" << endl;
    cin>> name;
    cout<<" your name is " << name << endl;
    int n = getLength(name);
    cout<<"Length of your name is "<< n << endl;
    cout<< " Palindrome or not : " << check_palindrome(name, n);
    // reverse(name, n);
    // cout << " reversed string is " << name << endl;


    return 0;
}