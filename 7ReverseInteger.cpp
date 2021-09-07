class Solution {
public:
    int reverse(int x) {
        int reversed = 0;
        bool sign = x<0;
        while(x!=0)
        {
            if(reversed>214748364 or reversed<-214748364)
            {
                return 0;
            }
            else reversed *= 10;
            reversed += x%10;
            x/=10;
        }
        return reversed;
    }
};
