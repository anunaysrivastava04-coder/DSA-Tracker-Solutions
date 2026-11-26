# Problem: 189. Rotate Array
# Source: LeetCode
# URL: https://leetcode.com/problems/rotate-array/
# Difficulty: Medium
# Language: Python3
# Solved on: 26 Nov 2026
# Solved at: 09:41:05 PM (UTC+05:30)
# Solved at (UTC): 2026-11-26 16:11:05 UTC
# Created by Anunay Srivastava
# Synced by: DSA Tracker

class Solution:
    def rotate(self, nums: List[int], k: int) -> None:
        n = len(nums)
        k = k % n
        rotated = [0] * n

        for i in range(n):
            rotated[(i + k) % n] = nums[i]
        
        for i in range(n):
            nums[i] = rotated[i]