class Solution:
    def lengthOfLastWord(self, s: str) -> int:
        words = s.split(" ");
        max_len=0;
        for i in range(len(words)):
            if len(words[i])>0:
                leng = len(words[i])
                max_len = leng;
        return max_len;