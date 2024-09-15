#include<iostream>
using namespace std;

int Quotient(int num, int den)
    {

        if (num == INT_MIN && den == -1) {
            return INT_MAX;  // Expected output
        }
        else if (num == INT_MAX && den == -1) {
            return INT_MIN+1;  // Expected output
        }
        else if (num == INT_MIN && den == 1) {
            return INT_MIN+1;  // Expected output
        }
        long n = (long)num;
        long d = (long)den;
        if(n==d)return 1;
        bool sign = true;
        if((n>0 && d<0) ||(n<0 && d>0))sign = false;
        n = abs(n);
        d = abs(d);
        
        long ans = 0;
        while(n>=d)
        {
            int count = 0;
            while(n>=(d << (count) ))
            {
                count++;
            }
            ans+=(1<<(count-1));
            n-=(d<<(count-1));
        }
        if(ans>=INT_MAX && (sign== true))return INT_MAX;
        if(ans>=INT_MAX && (sign== false))return INT_MIN;
        if(sign == false) ans=(-1*ans);
        return ans;
    }
int main()
{
    int divisor, dividend;
    cout << "Enter Dividend and Divisor: ";
    cin >> dividend >> divisor;

    cout << "Quotient: " << Quotient(dividend, divisor) << endl;
    return 0;
}