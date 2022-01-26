class Solution:
    def lengthOfLastWord(self, s: str) -> int:
        words = s.split(" ");
        max_len=0;
        for i in range(len(words)-1, -1, -1):
            if len(words[i])>0:
                leng = len(words[i])
                max_len = leng;
                break
        return max_len;