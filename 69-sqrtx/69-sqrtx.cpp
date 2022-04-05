class Solution {
public:
    int mySqrt(int x) {
        long max=0;
        if(x == 0)
            return 0;
        else if (x==1)
            return 1;
        for(long i = 1;i*i<=x;i++)
        {
                max=i;
        }
        return max;
    }
};