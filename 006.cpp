//
//  main.cpp
//  practice
//
//  Created by Dhruva Mahajan on 08/06/18.
//  Copyright © 2018 Dhruva Mahajan. All rights reserved.
//

#ifndef _GLIBCXX_NO_ASSERT
#include <cassert>
#endif
#include <cctype>
#include <cerrno>
#include <cfloat>
#include <ciso646>
#include <climits>
#include <clocale>
#include <cmath>
#include <csetjmp>
#include <csignal>
#include <cstdarg>
#include <cstddef>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <ctime>

#if __cplusplus >= 201103L
#include <ccomplex>
#include <cfenv>
#include <cinttypes>
#include <cstdbool>
#include <cstdint>
#include <ctgmath>
#include <cwchar>
#include <cwctype>
#endif

// C++
#include <algorithm>
#include <bitset>
#include <complex>
#include <deque>
#include <exception>
#include <fstream>
#include <functional>
#include <iomanip>
#include <ios>
#include <iosfwd>
#include <iostream>
#include <istream>
#include <iterator>
#include <limits>
#include <list>
#include <locale>
#include <map>
#include <memory>
#include <new>
#include <numeric>
#include <ostream>
#include <queue>
#include <set>
#include <sstream>
#include <stack>
#include <stdexcept>
#include <streambuf>
#include <string>
#include <typeinfo>
#include <utility>
#include <valarray>
#include <vector>

#if __cplusplus >= 201103L
#include <array>
#include <atomic>
#include <chrono>
#include <condition_variable>
#include <forward_list>
#include <future>
#include <initializer_list>
#include <mutex>
#include <random>
#include <ratio>
#include <regex>
#include <scoped_allocator>
#include <system_error>
#include <thread>
#include <tuple>
#include <typeindex>
#include <type_traits>
#include <unordered_map>
#include <unordered_set>
#endif

/*#ifdef PRINTERS
#include "printers.hpp"
using namespace printers;
#define tr(a)        cerr<<#a<<" : "<<a<<endl
#else
#define tr(a)
#endif*/

#define ll          long long
#define pb          push_back
#define    endl        '\n'
#define mp          make_pair
#define pii         pair<ll int,ll int>
#define vi          vector<ll int>
#define all(a)      (a).begin(),(a).end()
#define F           first
#define S           second
#define bs          binary_search
#define sz(x)       (int)x.size()
#define hell        1000000007
#define endl        '\n'
#define lbnd        lower_bound
#define ubnd        upper_bound
#define rep(i,a,b)    for(int i=a;i<b;i++)
#define strrev(s)    reverse(s.begin(), s.end())
using namespace std;

#define N  100005

int main(){
    
    ll n,t;
    cin>>t;
    rep(i,0,t){
        cin>>n;
        ll a=pow((n*(n+1))/2,2)-(n*(n+1)*(2*n+1))/6;
        cout<<a<<endl;
    }
    
    return 0;
}
