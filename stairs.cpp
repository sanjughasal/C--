#include<iostream>
using namespace std;


int climbStairs(int nStairs)
{
    if(nStairs <0)
    return 0 ;

    if(nStairs ==0)
    return 1;

    int ans = climbStairs(nStairs-1)+climbStairs(nStairs-2);
    return ans;
    }


int main(){

    int nStairs ;
    cin>>nStairs;

    int ans = climbStairs(nStairs);
    cout<< ans<< endl;
    return 0;
}
