
#include <bits/stdc++.h>

using namespace std;


    string minWindow(string s, string t) {
        unordered_map<char, int> chars;
        for (auto ch : t) chars[ch]++;
        
        int first = 0; int last = 0;
        int counter = 0;
        int minStart; int minLength = INT_MAX;
        
        while(last < s.length()) {
            if (chars[s[last++]]-- > 0) ++counter;
            while (counter == t.length()) {
                while (chars[s[first]] < 0) ++chars[s[first]], ++first;
                if (last - first < minLength) minLength = last - (minStart = first);
                ++chars[s[first++]]; --counter;
            }
        }
        
        return minLength == INT_MAX ? "" : s.substr(minStart, minLength);
    }

int main()
{
    string s="ADOBECODEBANC";
    string t = "ABC";
    
    cout<<"Smallest window is: "<<endl;
    cout<<minWindow(s,t);

    return 0;
}