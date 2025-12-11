class Solution:
    def isPalindrome(self, x: int) -> bool:
        # if x < 0:
        #     return False
        # ori = x
        # rev = 0
        # while x > 0:
        #     rev = rev * 10 + x%10
        #     x //= 10

        # return rev == ori 

        s = str(x)
        rev = s[::-1]
        return s == rev