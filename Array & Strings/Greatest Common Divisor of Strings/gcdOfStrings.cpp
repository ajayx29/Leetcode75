class Solution {
public:
    string gcdOfStrings(string str1, string str2) {

        if (str1 + str2 != str2 + str1){
            return "";
        }

        int gcdLength = func_gcd(str1.length(), str2.length());
        return str1.substr(0, gcdLength);
    }

private:
    int func_gcd(int a, int b){ //euclid's algo
        while(b != 0){
            int temp = b;
            b = a % b;
            a = temp;
        }
        return a;
        
    }
};
