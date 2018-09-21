/*
 * Given an integer k and a string s, find the length of the longest substring
 * that contains at most k distinct characters.
 * For example, given s = "abcba" and k = 2, the longest substring with k 
 * distinct characters is "bcb".
 */
#include <iostream>
#include <string>
using namespace std;

int main(int argc, char const *argv[])
{
    string s;
    string result;
    cin >> s;
    int k;
    cin >> k;
    unsigned n = s.length();
    for (unsigned i = 0; i < n; i++) {
        int count = 0;
        for (unsigned j = i; j < n; j++) {
            int* d = new int[26];
            if (!d[s[j]]) {
                count++;
                d[s[j]]++;
            }
            if (count > 2) {
                if (j-i > result.length()) {
                    result = s.substr(i,j-i);
                    cout << "[D]: " << result << endl;
                    break;
                }
            }
            delete[] d;
        }
    }
    cout << result << endl;
    return 0;
}
