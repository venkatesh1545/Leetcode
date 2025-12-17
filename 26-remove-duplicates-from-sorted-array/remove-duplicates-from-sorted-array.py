class Solution(object):
    def removeDuplicates(self, nums):
        """
        :type nums: List[int]
        :rtype: int
        """

        seen = set()
        k = 0
        for num in nums:
            if num not in seen:
                seen.add(num)
                # result.append(num)
                nums[k] = num
                k += 1
        return k
        