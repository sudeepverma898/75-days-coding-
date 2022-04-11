# The isBadVersion API is already defined for you.
# def isBadVersion(version: int) -> bool:

class Solution:
    def firstBadVersion(self, n: int) -> int:
        left, right = 1, n
        res = float(inf)
        while left <= right:
            mid = left + (right-left) // 2
            if isBadVersion(mid):
                res = min(res, mid)
                right = mid - 1
            if not isBadVersion(mid):
                left = mid + 1
        
        return res
