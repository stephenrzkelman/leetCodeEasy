class Solution {
public:
    int mySqrt(int x) {
        long copy = x;
        long sqrt = x;
        long num = x;
        while(copy)
        {
            copy>>=2;
            sqrt>>=1;
        }
        if(sqrt*sqrt>num)
        {
            while(sqrt*sqrt>num)
            {
                sqrt--;
            }
        }
        else
        {
            do
                sqrt++;
            while(sqrt*sqrt<=num);
            sqrt--;
        }
        return sqrt;
    }
};
