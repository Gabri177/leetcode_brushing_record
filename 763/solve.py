class Solution(object):
    def partitionLabels(self, s):
        """
        :type s: str
        :rtype: List[int]
        """
        map = {}
        res = []
        for i, c in enumerate(s):
            map[c] = i
        len = 0
        start = 0
        for i, c in enumerate(s):
            len = max(len, map[c])
            if i == len:
                res.append(i - start + 1)
                start = i + 1
        return res
    
    
s = "ababcbacadefegdehijhklij"
sol = Solution()
print(sol.partitionLabels(s)) # [9, 7, 8]