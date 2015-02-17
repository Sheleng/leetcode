/* Compare two version numbers version1 and version1.
 * If version1 > version2 return 1, if version1 < version2 return -1, otherwise return 0.
 *
 * You may assume that the version strings are non-empty and contain only digits and the . character.
 * The . character does not represent a decimal point and is used to separate number sequences.
 * For instance, 2.5 is not "two and a half" or "half way to version three", it is the fifth second-level revision of the second first-level revision.
 *
 * Here is an example of version numbers ordering:
 *
 * 0.1 < 1.1 < 1.2 < 13.37
 */

#include <iostream>
#include <string.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>
using namespace std;

class Solution {
public:
    int compareVersion(string vs1_str, string vs2_str) {
        int major1_i = atoi(vs1_str.c_str()), major2_i = atoi(vs2_str.c_str());
        if(major1_i > major2_i){
            return 1;
        }else if(major1_i < major2_i){
            return -1;
        }else{
            string minor1_str = vs1_str.find('.') != vs1_str.npos ? vs1_str.substr(vs1_str.find('.') + 1) : "0";
            string minor2_str = vs2_str.find('.') != vs2_str.npos ? vs2_str.substr(vs2_str.find('.') + 1) : "0";
            if(minor1_str.find('.') != vs1_str.npos || minor2_str.find('.') != minor2_str.npos){
                return compareVersion(minor1_str,minor2_str);
            }else{
                int minor1_i  = atoi(minor1_str.c_str()), minor2_i = atoi(minor2_str.c_str());
                if(minor1_i > minor2_i){
                    return 1;
                }else if(minor1_i < minor2_i){
                    return -1;
                }
                return 0;
            }
        }
    }
};
