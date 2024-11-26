from typing import List

class Solution(object):
    def eraseOverlapIntervals(self, intervals: List[int]) -> int:
        if not intervals:
            return 0
        sorted_intervals = sorted(intervals, key=lambda x: x[1])
        pre_end = sorted_intervals[0][1]
        remove = 0
        for i in range(1, len(sorted_intervals)):
            if sorted_intervals[i][0] < pre_end:
                remove += 1
            else:
                pre_end = sorted_intervals[i][1]
        return remove
            
        
test = [[1,2],[2,3],[3,4],[1,3]]
s = Solution()
print(s.eraseOverlapIntervals(test)) # 1