class Solution:
    def lengthOfLastWord(self, s: str) -> int:
        s = s.rstrip()
        a = ""
        for i in reversed(s):
            if i == " ":
                break
            a += i
        return len(a)