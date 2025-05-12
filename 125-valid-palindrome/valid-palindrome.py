class Solution:
    def isPalindrome(self, s: str) -> bool:
        a = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789"
        x = ""
        for i in s:
            if i in a:
                x += i.lower()
        y = x[::-1]
        print(x)
        print(y)
        if x == y:
            return True
        else:
            return False