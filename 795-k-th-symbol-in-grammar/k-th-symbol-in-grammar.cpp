class Solution {
public:
    int kthGrammar(int n, int k) {
        if(n==1 && k==1){
            return 0;
        }
        double length = pow(2.0, n-1.0);
        int mid = length/2;

        if(k<=mid){
            return kthGrammar(n-1, k);
        }else{
            return !kthGrammar(n-1, k-mid);
        }
    }
};