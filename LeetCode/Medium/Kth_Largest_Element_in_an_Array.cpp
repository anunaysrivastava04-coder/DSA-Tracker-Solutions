/*
 * Problem: 215. Kth Largest Element in an Array
 * Source: LeetCode
 * URL: https://leetcode.com/problems/kth-largest-element-in-an-array/
 * Difficulty: Medium
 * Language: C++
 * Solved on: 28 Nov 2026
 * Solved at: 04:23:46 AM (UTC+05:30)
 * Solved at (UTC): 2026-11-27 22:53:46 UTC
 * Created by Anunay Srivastava
 * Synced by: DSA Tracker
 */

class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        sort(nums.begin(), nums.end());
        return nums[nums.size() - k];
    }
};