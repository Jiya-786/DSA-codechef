/*   BRUTE FORCE METHOD would be  Checking every number against every other number TIME O(n^2) or more   */

//                         SORTING METHOD
//  TIME COMPLEXITY DUE TO qsort O(nlogn)+ DUE TO TRAVERSAL O(n) IMPLIES OVERALL TIME O(nlogn) AND SPACE O(1)

#include <stdio.h>
#include <stdlib.h>

int cmp(const void* nums, const void* b){
    long long int x=*(long long int*)nums;
    long long int y=*(long long int*)b;
    if(x>y) return 1;
    else if (x<y) return -1;
    else return 0;
}

int longestConsecutive(long long *nums, int n) {
    if (n == 0) return 0;            //optional
    qsort(nums,n,sizeof(long long),cmp);
    int count=1;
    int ans=1;
    for(int i=1;i<n;i++){
        if(nums[i]==nums[i-1]) continue;
        if(nums[i]==nums[i-1]+1){
            count++;
        }
        if(count>1 && count>ans){
            ans=count;
        }
        else if(nums[i]!=nums[i-1]+1) count=1;
    }
    return ans;
}

//                   HASHSET SOLN- OPTI