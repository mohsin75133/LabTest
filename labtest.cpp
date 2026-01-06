#include<bits/stdc++.h>
using namespace std;
//write a user defined function to find first N prime numbers;
//the function should be named like : youname_yourid;


void mohsin_231400003(int n) {
    int count = 0;
    int num = 2;

    while (count < n) {
        bool isPrime = true;

        for (int i = 2; i * i <= num; i++) {
            if (num % i == 0) {
                isPrime = false;
                break;
            }
        }

        if (isPrime) {
            cout << num << " ";
            count++;
        }
        num++;
    }
}

int main(){


    int n;
    cout<<"Enter the number n"<<endl;
    cin>>n;
    mohsin_231400003(n);
}
