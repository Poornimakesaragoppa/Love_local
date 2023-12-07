#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

string shortestPalindrome(string s) {
    int n = s.length();
    
    // Create a new string to store s + "#" + reverse(s)
    string rev = s;
    reverse(rev.begin(), rev.end());
    string newString = s + "#" + rev;
    
    int m = newString.length();
    
    // Calculate the longest proper prefix which is also a proper suffix for each position
    vector<int> lps(m, 0);
    for (int i = 1, len = 0; i < m; ) {
        if (newString[i] == newString[len]) {
            lps[i++] = ++len;
        } else {
            if (len) {
                len = lps[len - 1];
            } else {
                lps[i++] = 0;
            }
        }
    }
    
    // The length of the palindrome suffix
    int palindromeSuffixLength = lps[m - 1];
    
    // Add the reverse of the remaining prefix to the beginning
    string prefix = s.substr(palindromeSuffixLength);
    reverse(prefix.begin(), prefix.end());
    
    return prefix + s;
}

int main() {
    string s;
    cin>>s;
    string result = shortestPalindrome(s);
    cout << "Output: " << result << endl;

    return 0;
}