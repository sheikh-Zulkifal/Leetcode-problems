class Solution {
public:
    int strStr(string haystack, string needle) {
        if (needle.empty()) // Check if the needle is empty
            return 0;
        if (needle.size() > haystack.size()) // Check if needle is longer than haystack
            return -1;
        for (int i = 0; i <= haystack.size() - needle.size(); i++) {
            if (haystack.substr(i, needle.size()) == needle) // Use substr to extract substring
                return i;
        }
        return -1;
    }
};
