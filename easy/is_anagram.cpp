//
// Created by Peter on 2022/4/15.
//

#include "is_anagram.h"

namespace Easy {

    /*
     * Date: 2021/12/20
     * Runtime: 20 ms, faster than 9.52% of C++ online submissions for Valid Anagram.
     * Memory Usage: 7.3 MB, less than 43.17% of C++ online submissions for Valid Anagram.
     * */
    bool isAnagram(string s, string t) {
        if (s.size() != t.size()) {
            return false;
        }

        auto sMap = map<char, int>{};
        auto tMap = map<char, int>{};

        for (int i = 0; i < s.size(); ++i) {
            auto existA = sMap[s[i]];
            if (existA == 0) {
                sMap[s[i]] = 1;
            } else {
                sMap[s[i]] += 1;
            }
            auto existB = tMap[t[i]];
            if (existB == 0) {
                tMap[t[i]] = 1;
            } else {
                tMap[t[i]] += 1;
            }
        }

        for (auto c: s) {
            if (sMap[c] != tMap[c]) {
                return false;
            }
        }

        return true;
    }

}
