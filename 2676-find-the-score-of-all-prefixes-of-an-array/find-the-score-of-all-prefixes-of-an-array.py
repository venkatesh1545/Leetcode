class Solution:
    def findPrefixScore(self, nums: List[int]) -> List[int]:
        result = []
        prefix_sum = 0
        current_max = 0
        for num in nums:
            current_max = max(current_max, num)
            prefix_sum += num + current_max
            result.append(prefix_sum)
            
        return result
        