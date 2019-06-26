/*
 * @Author: czqsole
 * @Date: 2019-06-12 16:48
 */
#include <bits/stdc++.h>

using namespace std;


int num_vowel(string s) {
    int len = s.length();
    int num = 0;
    for (int i = 0; i < len; ++i) {
        if(s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u' ) {
            num++;
        }
    }
    return num;
}

char last_vowel(string s) {
    int len = s.length();
    for (int i = len - 1; i >= 0; i--) {
        if(s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u' ) {
            return s[i];
        }
    }
}

int main() {
    int n;

    vector<pair<int, pair<string, char>>> words;

    for (int i = 0; i < n; ++i) {
        string word;
        cin >> word;
        int len = word.length();
        int num = num_vowel(word);
        char last = last_vowel(word);
        words.push_back(pair<num, pair<word, last>>);
    }


}