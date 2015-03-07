/* Given an integer n, return the number of trailing zeroes in n!.
 * Note: Your solution should be in logarithmic time complexity.d
 */

#include <iostream>
using namespace std;

class Solution {
public:
   int trailingZeroes(int n) {
       int counter = 0;
       while(n > 1){
           counter += n / 5;
           n = n / 5;
       }
       return counter;
   }
};
