/* Recursive */
class Solution {
public:
    int fib(int n) {
        int sum = 0;
        F(n, sum);
        return sum;
    }
    
    void F(int n, int& sum){
        if (n < 2){
            sum += n;
            return;
        }
        else{
            F(n - 1, sum);
            F(n - 2, sum);
        }
    }
};

/* Iterative */

class Solution {
public:
    int fib(int n) {
        int prev1 = 1;
        int prev2 = 0;
        int i = 2;
        int result = 0;
        if (n == 1)
            return 1;
        while (i <= n){
            result = prev1 + prev2;
            prev2 = prev1;
            prev1 = result;
            i++;
        }
        return result;
    }
};