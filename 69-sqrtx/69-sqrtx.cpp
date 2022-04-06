class Solution {
public:
    int mySqrt(int x) {
        
        if(x == 0) return 0;
        else if(x<4) return 1;
        long low = 0, high = x/2, mid,ans;
        while(low<=high)
        {
            mid = low+(high-low)/2;
            if(mid*mid == x || (mid*mid<x)&&(mid+1)*(mid+1)>x)
                return mid;
            else if(mid*mid<x)
            {
                ans = mid;
                low = mid+1;
            }
            else
            {
                high = mid -1;
            }

        }
                    return ans;
        // long max=0;
        // if(x == 0)
        //     return 0;
        // else if (x==1)
        //     return 1;
        // for(long i = 1;i*i<=x;i++)
        // {
        //         max=i;
        // }
        // return max;
    }
};