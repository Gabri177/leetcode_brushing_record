from typing import List

class Solution:
	def findMinArrowShots(self, points: List[List[int]]) -> int:
		if not points:
			return 0
		points.sort(key=lambda x: x[1])
		pre_end = points[0][1]
		count = 1
		for i in range(1, len(points)):
			if points[i][0] <= pre_end:
				points[i][0] = pre_end
			else:
				count += 1
				pre_end = points[i][1]
		return count
