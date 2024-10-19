class Solution {
public:
    char findKthBit(int n, int k) {
        if(n == 1) return '0';
        int length = pow(2,n) - 1;   // length of sn
        int mid = (length / 2) + 1;  //finding th emid term
        if(k == mid) return '1';
        if(k < mid) return findKthBit(n-1, k);   //recursively calling findkthBit when k < mid
        else {
            char bit = findKthBit(n-1, length - k + 1);  // storing the value in bit (char)
            return bit == '0' ? '1' : '0';
        }
    }
};