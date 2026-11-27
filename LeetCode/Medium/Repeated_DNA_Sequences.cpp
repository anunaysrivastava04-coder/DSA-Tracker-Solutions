/*
 * Problem: 187. Repeated DNA Sequences
 * Source: LeetCode
 * URL: https://leetcode.com/problems/repeated-dna-sequences/
 * Difficulty: Medium
 * Language: C++
 * Solved on: 28 Nov 2026
 * Solved at: 04:31:07 AM (UTC+05:30)
 * Solved at (UTC): 2026-11-27 23:01:07 UTC
 * Created by Anunay Srivastava
 * Synced by: DSA Tracker
 */

class Solution {
public:
    vector<string> findRepeatedDnaSequences(string s) {// TC : O(N)+O(N) = O(N) & SC : O(N)
        vector<string>ans;
        unordered_map<string,int>m;

        for(int i=0;i+10<=s.size();i++){
            string DNA = s.substr(i,10);
            m[DNA]++;
        }
        for(auto it : m){
            if(it.second > 1){
                ans.push_back(it.first);
            }
        }

        return ans;
    }
};