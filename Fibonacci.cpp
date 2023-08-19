#include<iostream>
using namespace std;

int fib(int n) {
    if (n == 0)
        return 0;

    if (n == 1)
        return 1;

    int ans = fib(n - 1) + fib(n - 2);
    return ans;
}

int main() {
    int n;

    cin >> n;

    int ans = fib(n);
    cout << ans << endl; 
    return 0;
}
// #include<iostream>
// using namespace std;

// void printFibSeries(int n) {
//     int fib[n + 2];
//     fib[0] = 0;
//     fib[1] = 1;

//     for (int i = 2; i <= n; i++) {
//         fib[i] = fib[i - 1] + fib[i - 2];
//     }

//     for (int i = 0; i <= n; i++) {
//         cout << fib[i] << " ";
//     }
//     cout << endl;
// }

// int main() {
//     int n;
//     cin >> n;

//     printFibSeries(n);

//     return 0;
// }
