#include<iostream>
using namespace std;


int print(int n ){
    if (n == 0){
        return 1 ;

}
print(n-1);
     cout << n << endl;;

}


int main(){

    int n ;
    cin >> n ;
    cout << endl;
    print(n);
}
