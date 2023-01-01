# // https://leetcode.com/problems/word-pattern/description/
class Solution:
    def wordPattern(self, pattern, str):
        str = str.split(' ')
        if len(pattern) != len(str):
            return False
        return len(set(zip(pattern, str))) == len(set(str)) and len(set(str)) == len(set(pattern))
