#include<iostream>
using namespace std;


int power(int n){
    //base case

    if(n==0)
       return 1;

       return 2*power(n-1);

      // int smallerProb = power(n-1);
       //int bigProb = 2*smallerProb;
    //return bigProb;
}


int main()
{
    int n ;
     cin >> n;
     int ans = power(n);
     cout <<ans<<endl;;
     return 0;



    }
