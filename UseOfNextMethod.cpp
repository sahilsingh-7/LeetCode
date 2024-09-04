class Solution {
public:
    map<int, int> mp;

    int findLHS(vector<int>& nums) {
        // Fill the map with the frequency of each element
        for (int num : nums) {
            mp[num]++;
        }

        int maxi = 0;  // Initialize maxi to 0

        for (auto it = mp.begin(); it != mp.end(); ++it) {
            // Check if there is a consecutive element
            auto next_it = next(it); // this is very useful method
            if (next_it != mp.end() && next_it->first - it->first == 1) {
                // Update maxi with the sum of frequencies of consecutive elements
                maxi = max(maxi, it->second + next_it->second);
            }
        }

        return maxi;
    }
};
