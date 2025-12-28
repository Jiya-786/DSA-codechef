// The input and output formats given below are only if you want to test using custom inputs. implies no need of int main 

/* Brute force = try all possible subarrays
   and check which ones have sum = k. this won't pass all test cases
   because of TLE in case of v.large inputs becuase TIME O(n^2) and
   SPACE O(1)   */

#include <stdio.h>

int longestSubarraySum(int* arr, int n, int k) {
    int length=0;
    for(int i=0;i<n;i++){
        int sum=0;
        int count=0;
        for(int j=i;j<n;j++){
            sum+=arr[j];
            count++;
            
            if(sum==k && count>length){
                length=count;
            }
        }
    }
    
    
    return length;
}


                    // PREFIX SUM METHOD