from typing import List


class Solution:
	def canPlaceFlowers(self, flowerbed: List[int], n: int) -> bool:
		
		plant = 0
		for i in range(0, len(flowerbed)):
			left_emp = i == 0 or flowerbed[i-1] == 0
			right_emp = i == len(flowerbed) - 1 or flowerbed[i+1] == 0
			if flowerbed[i] == 0 and left_emp and right_emp:
				flowerbed[i] = 1
				plant += 1
			if plant >= n:
				return True
		return False
		

test = [1, 0, 0, 0, 1]
n = 0
s = Solution()
print(s.canPlaceFlowers(test, n)) # True