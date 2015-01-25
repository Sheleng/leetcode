/*
 * Given an array of size n, find the majority element.
 * The majority element is the element that appears more than ⌊ n/2 ⌋ times.
 *
 * You may assume that the array is non-empty and the majority element always exist in the array.
 */
class Solution {
public:
    int majorityElement(vector<int> &num) {
        int majority = NULL, count = 0, index = 0, size = num.size();
        for(; index < size - 1; index = index + 2){
            if(num[index] == num[index + 1]){
                if(majority == NULL){
                    majority = num[index];
                    count++;
                }else if(majority == num[index]){
                    count++;
                }else {
                    count--;
                    if(count == 0){
                        majority = NULL;
                    }
                }
            }
        }
        if((size % 2 != 0) && count == 0){
            majority = num[size - 1];
        }
        return majority;
    }
 };
