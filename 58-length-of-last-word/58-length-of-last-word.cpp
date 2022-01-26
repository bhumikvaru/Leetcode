class Solution {
public:
    int lengthOfLastWord(string s) {
        string newstring = "";
        int index_count=0;
        int i=s.length()-1;
        while(i>=0)
        {
            if(s[i]==' ')
               i--;
            else break;
        }
       while(i>=0&&s[i]!=' ')
        {i--;index_count++;}
        return (index_count);
        
    }
};