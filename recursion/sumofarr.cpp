#include<iostream>
using namespace std;
int sumofarr( int arr[],int i, int n){
   if(i == n){
    return 0;
   } 
   return arr[i] + sumofarr(arr, i+1,n);
}
int main(){
    int sum =0;
    int arr[5] = {5,4,7,4,8};
    cout << sumofarr(arr, 0,5) << endl;
    return 0;
}

// #include<iostream>
// using namespace std;

// int getSum(int *arr, int size) {

//     //base case
//     if(size == 0) {
//         return 0;
//     }
//     if(size == 1 )
//     {
//         return arr[0];
//     }

//     int remainingPart = getSum(arr+1, size-1);
//     int sum = arr[0] + remainingPart;
//     return sum;
// }

// int main() {

//     int arr[5] = {2,4,9,9,9};
//     int size = 5;

//     int sum = getSum(arr, size);

//     cout << "Sum is " << sum << endl;

//     return 0;
// }