#include<iostream>
using namespace std;

int Saydigit(int n  , string arr[]){
//base case
 if(n==0)
 return 1;


//processing
 int digit = n%10;
 n= n/10;

 //recursive call
 Saydigit( n , arr);
 cout<< arr [digit] << " ";
}




int main(){
string arr[10] = {"zero" ,"one","two","three" , "four" ,"five"  , "Six" , " Seven" , "Eight" , "nine" };

int n ;
cin>> n;

cout<< endl << endl;
Saydigit (n,arr);
cout<< endl << endl;


return 0 ;
}
