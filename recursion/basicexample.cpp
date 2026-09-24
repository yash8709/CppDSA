#include<iostream>
using namespace std;

void reachhome(int src, int dest){
    cout << "source  " << src << "destination " << dest << endl;
    // base case 
    if(src == dest){
        cout << "pahuch gaya";
        return;
    }
    // processing
    src++;
    // recursive call
    reachhome(src, dest);
}
int main(){
    int src = 1, dest = 10;
    reachhome(src, dest);
    return 0;
}

// Climb Stairs question
// int countDistinctWayToClimbStair(long long nStairs)
// {
//     //base case
//     if(nStairs < 0)
//         return 0;
    
//     if(nStairs == 0)
//         return 1;
    
//     //R.C
//     int ans = countDistinctWayToClimbStair(nStairs-1) 
//         + countDistinctWayToClimbStair(nStairs-2);
    
//     return ans;
// }