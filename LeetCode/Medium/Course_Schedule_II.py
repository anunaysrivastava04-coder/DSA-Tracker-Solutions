# Problem: 210. Course Schedule II
# Source: LeetCode
# URL: https://leetcode.com/problems/course-schedule-ii/
# Difficulty: Medium
# Language: Python3
# Solved on: 27 Nov 2026
# Solved at: 11:33:41 PM (UTC+05:30)
# Solved at (UTC): 2026-11-27 18:03:41 UTC
# Created by Anunay Srivastava
# Synced by: DSA Tracker

return True

            if node in seen:
                return False

            seen.add(node)
            path.add(node)

            for i in g[node]:
                if dfs(i):
                    return True

            path.remove(node)
            op.append(node)

            return False

        for i in range(numCourses):
            if dfs(i):
                return []

        return op