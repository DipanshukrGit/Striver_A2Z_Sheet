/*
Reverse Words in a String


Problem Statement: Given an input string, containing upper-case and lower-case letters, digits, and spaces( ' ' ). A word is defined as a sequence of non-space characters. The words in s are separated by at least one space. Return a string with the words in reverse order, concatenated by a single space.

*/

class Solution {
public:
    string reverseWords(string s) {
        int n=s.length();
        string ans="";
        reverse(s.begin(),s.end());
        for(int i=0;i<=n;i++){
            string word="";
           while((i < n) && (s[i] != ' ')){
                word+=s[i];
                i++;
            }

             reverse(word.begin(),word.end());
             if(word.length()>0){
                ans+=" "+word;
             }

        }
        return ans.substr(1);
        
    }
};