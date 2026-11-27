/*
 * Problem: 216. Combination Sum III
 * Source: LeetCode
 * URL: https://leetcode.com/problems/combination-sum-iii/
 * Difficulty: Medium
 * Language: Java
 * Solved on: 28 Nov 2026
 * Solved at: 04:54:17 AM (UTC+05:30)
 * Solved at (UTC): 2026-11-27 23:24:17 UTC
 * Created by Anunay Srivastava
 * Synced by: DSA Tracker
 */

private void dfs(int start, int idx, int[] path) {

        if (idx == k) {
            if (n == 0) {
                List<Integer> list = new ArrayList<>(k);
                for (int x : path) list.add(x);
                ans.add(list);
            }
            return;
        }
        for (int i = start; i <= 9; i++) {

            if (i > n) break;

            path[idx] = i;
            n -= i;

            dfs(i + 1, idx + 1, path);

            n += i;
        return ans;
    }
        this.n = n;
        dfs(1, 0, new int[k]);
    public List<List<Integer>> combinationSum3(int k, int n) {
        this.k = k;
        }