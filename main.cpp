#include <iostream>
#include <numeric>
#include <cmath>
using namespace std;

class Solution {
public:
    int gcdOfOddEvenSums(int n) {
        int evenNumbers, oddNumbers = 0;
        evenNumbers = n*(n+1);
        oddNumbers = pow(n, 2);
        return gcd(evenNumbers, oddNumbers);
    }
};