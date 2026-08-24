class Solution {
public:
    bool isAnagram(string s, string t) {

        map<char,int>dict_s ={};
        map<char,int>dict_t = {};
        for(char c: s){

            dict_s[c] +=1;

        }

        for(char c:t ){

            dict_t[c] +=1;

        }

        if(dict_s == dict_t){
            return 1;


        }

        return 0;
        

        
    }
};
