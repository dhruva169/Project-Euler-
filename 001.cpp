#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
long long int s(long long int n){
    return n*(n+1)/2;
}

int main() {
    
    int t;
    cin>>t;
    while(t--)
        {
       long long int n;
        cin>>n;
        n--;
         cout<< 3*(s(n/3))+5*(s(n/5))-15*(s(n/15))<<endl;
        }
    return 0;
}
