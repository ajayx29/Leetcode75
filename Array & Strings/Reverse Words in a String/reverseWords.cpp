class Solution {
public:
    string reverseWords(string s) {
        stack<string> arr;
        string word = "";
        int trig = 0;
        for(int i = 0; i < s.size(); i++) {
            if (s[i] == ' ') {
                if (!word.empty()) {
                    arr.push(word);
                    word = "";
                }
            }
            else {
                word += s[i];
            }
        }
        if (!word.empty())
            arr.push(word);
        string rev_words = "";
        while(1) {
            rev_words += arr.top();
            arr.pop();
            if (!arr.empty())
                rev_words += " ";
            else
                break;
        }

        return rev_words;
    }
};
