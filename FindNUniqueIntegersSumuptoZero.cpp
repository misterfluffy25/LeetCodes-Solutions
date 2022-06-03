/*
Question - 
Given an integer n, return any array containing n unique integers such that they add up to 0.

 

Example 1:

Input: n = 5
Output: [-7,-1,1,3,4]
Explanation: These arrays also are accepted [-5,-1,1,2,3] , [-3,-1,2,-2,4].
Example 2:

Input: n = 3
Output: [-1,0,1]
Example 3:

Input: n = 1
Output: [0]
 

Constraints:

1 <= n <= 1000
*/
class Solution {
public:
    vector<int> sumZero(int n) {
        vector<int> vec;
        if(n == 1) {                            //base condition if given number is 1 from the sample outputs
            return {0};
        }
        
        if(n % 2 == 0) {                       //Check if the given number is even if even then enter the loop and do the further operation 
            for(int i = -n/2; i < 0; i++) {
                vec.emplace_back(i);
            }
            for(int i = 1; i <= n/2; i++) {    //For operating on the positive side of the symmetric array : Exclusive Zero.
                vec.emplace_back(i);
            }
        }
        else {                                  //For the input number to be odd ex: n = 3 -> -3/2 = -1 -> Print -1 -> i = 0 condition false -> exit loop
            for(int i = -n/2; i < 0; i++) {
                vec.emplace_back(i);
            }
            for(int i = 0; i <= n/2; i++) {     // For printing the non-negative side : Inclusive Zero.
                vec.emplace_back(i);
            }
        }
        return vec;
    }
};
