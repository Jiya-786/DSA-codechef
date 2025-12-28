//                   BRUTE FORCE 
/* This method works only when the array values are non-negative and small, because it relies on direct indexing.  */
// TIME O(n^2) AND SPACE O(1)

int majorityElement(int arr[], int n){
    int ans=0;
    for(int i=0;i<n;i++){
        int freq=0;
        for(int j=0;j<n;j++){
            if(arr[j]==arr[i]) freq++;
            if(freq>n/2){
                ans=arr[i];
            }
        }
    }
    return ans;
}


//                   FREQ COUNTING METHOD
/* This method works only when the array values are non-negative and small, because it relies on direct indexing.   */

int majorityElement(int arr[], int n) {
    int max_elt=0;
    for(int i=0;i<n;i++){
        if(arr[i]>max_elt){
            max_elt=arr[i];
        }
    }
    int* freq=(int*)malloc((max_elt+1)*sizeof(int));
    
    for(int i=0;i<max_elt+1;i++){
        freq[i]=0;
    }
    
    for(int i=0;i<n;i++){
        freq[arr[i]]++;
    }
    
    int ans=0;
    for(int i=0;i<max_elt+1;i++){
        if(freq[i]>n/2){
            ans=i;
            break;
        }
    }
    
    free(freq);
    return ans;
}

//                      SORTING METHOD
/*General proof (intuition)  THIS IS NOT THE OPTIMAL SOLN YET
    TIME O(nlogn) AND SPACE O(1)
    
    A majority element occupies more than half the array
    So it cannot stay completely on one side of the middle
    The middle index must belong to it
    If arr[n/2] were NOT the majority element, then:
    The majority element would have to be either: completely 
    on the left, or completely on the right.
    But that’s impossible, because it has >n/2 elements    */

/* ⚠️ Important:
    This does NOT work if the question was:
        “element appearing more than n/3 times”
        “most frequent element”
        “mode of array”
        It works only because the problem guarantees: count >n/2 */

#include <stdio.h>
#include <stdlib.h>

int cmp(const void* a,const void* b){
    int x=*(int*)a;
    int y=*(int*)b;
    return x-y;
}

int majorityElement(int arr[], int n){
    qsort(arr,n,sizeof(int),cmp);
    
    return (arr[n/2]);
}

//          BOYER MOORE'S VOTING ALGORITHM- OPTI
// TIME O(n) AND SPACE O(1)
/*    Different elements cancel each other out
      The majority element appears more times than all others
      combined
      After all cancellations, the majority element must remain
      because it cannot be completely cancelled
      
      candidate → current possible majority element
      count → vote balance for the candidate
      Only 2 variables → O(1) space   */
      
/*   🔹 Important Notes
        Works only if a majority element is guaranteed
        If not guaranteed, a second pass is required to verify count
        Handles negative numbers and large values
        Much better than frequency array or hashmap   */
        
#include <stdio.h>

int majorityElement(int arr[], int n){
    int freq=0;
    int ans=0;
    for(int i=0;i<n;i++){
        if(freq==0){
            ans=arr[i];
            freq=1;
        }
        else if(arr[i]==ans){
            freq++;
        }
        else{
             freq--;
        } 
    }
    
    return ans;
}


// There's also a hashmap approach TIME O(n) AND SPACE O(n) but i don't get that yet