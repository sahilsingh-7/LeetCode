class Solution {
public:
    vector<string> commonChars(vector<string>& word) {
        int i, j, min = INT_MAX, temp, x = word.size();
        int a[26] = {0};
        vector<int> b(26, 0);
        vector<string> res;

        for (i = 0; i < x; i++) {
            if (min > word[i].size()) {
                min = word[i].size();
                temp = i;
            }
        }

        for (i = 0; i < word[temp].size(); i++) {
            a[word[temp][i] - 'a']++;
        }
        
        for (i = 0; i < x; i++) {
            if (i == temp) 
                continue;
            for (j = 0; j < word[i].size(); j++) {
                b[word[i][j] - 'a']++;
            }
            for (j = 0; j < 26; j++) {
                if (a[j] > b[j]) 
                    a[j] = b[j];
            }
            fill(b.begin(), b.end(), 0);
        }

        for (i = 0; i < 26; i++) {
            while (a[i]--) {
                string s = "";
                s += ('a' + i);
                res.push_back(s);
            }
        }
        return res;
    }
};
