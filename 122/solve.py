class Solution(object):
    def maxProfit(self, prices):
        """
        :type prices: List[int]
        :rtype: int
        """
        max_intres = 0
        if len(prices) <= 1:
            return max_intres
        for i in range(1, len(prices)):
            if prices[i] > prices[i - 1]:
                max_intres += prices[i] - prices[i - 1]
        return max_intres
    
if __name__ == "__main__":
	prices = [7,1,5,3,6,4]
	sol = Solution()
	print(sol.maxProfit(prices)) # 7
	prices = [1,2,3,4,5]
	print(sol.maxProfit(prices)) # 4
	prices = [7,6,4,3,1]
	print(sol.maxProfit(prices)) # 0
	prices = [1,2]
	print(sol.maxProfit(prices)) # 1
	prices = [2,1,2,0,1]
	print(sol.maxProfit(prices)) # 2
	prices = [2,1,2,1,0,1,2]
	print(sol.maxProfit(prices)) # 3
	prices = [2,1,2,1,0,1,2,2,1,0,1]
	print(sol.maxProfit(prices)) # 4
	prices = [2,1,2,1,0,1,2,2,1,0,1,2]
	print(sol.maxProfit(prices)) # 5
	prices = [2,1,2,1,0,1,2,2,1,0,1,2,2,1,0,1]
	print(sol.maxProfit(prices)) # 6
	prices = [2,1,2,1,0,1,2,2,1,0,1,2,2,1,0,1,2]
	print(sol.maxProfit(prices)) # 7
	prices = [2,1,2,1,0,1,2,2,1,0,1,2,2,1,0,1,2,2,1,0,1]
	print(sol.maxProfit(prices)) # 8