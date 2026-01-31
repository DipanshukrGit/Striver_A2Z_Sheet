/*
Largest Odd Number in a String.

Problem Statement: Given a string s, representing a large integer, the task is to return the largest-valued odd integer (as a string) that is a substring of the given string s.
The number returned should not have leading zero's. But the given input string may have leading zero.
*/

class Solution {
public:
    string largestOddNumber(string num) {
        for(int i=num.size();i>=0;i--){
            if((num[i]-'0')%2!=0){
                return num.substr(0,i+1);
            }
        }
        return "";
    }
    
};