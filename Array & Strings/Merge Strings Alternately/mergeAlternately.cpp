class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        
        string merged = "";
        int i = 0;

        while(i < word1.size() && i < word2.size()){
            merged += word1[i];
            merged += word2[i];
            i++;
        }

        if(i < word1.size()){
            merged += word1.substr(i);
        }
        else{
            merged += word2.substr(i);
        }

        return merged;
    }
};
