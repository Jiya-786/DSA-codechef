// //  10 20 30 40 50
// //   0  1  2  3  4
// //  40 50 10 20 30
// // n=5; k=2

/*  BRUTE FORCE METHOD-   TIME O(k*n) AND SPACE O(1)
    Brute force = do exactly what the problem says, even if it’s             slow.

    The problem says:
    Rotate the array to the right by k times
    So brute force literally means:
    👉 Rotate right by 1, and repeat this k times 
    
    
    Steps in code:
       Save last element
       Shift everything one step right
       Put saved element at index 0            */

#include <stdio.h>

void rotate(int nums[], int n, int k) {
    k = k % n;   // safety
    for (int j=0;j<k;j++){
        int last = nums[n - 1];
        
        for (int i = n - 1; i > 0; i--) {
            nums[i] = nums[i - 1];
        }
        
        nums[0] = last;
    }
}

int main() {
    int n, k;
    scanf("%d %d", &n, &k);

    int nums[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &nums[i]);
    }
    rotate(nums, n, k);
    for (int i = 0; i < n; i++) {
        printf("%d ", nums[i]);
    }

    return 0;
}


/*   LEVEL 1 OPTIMIZATION TIME O(n) AND SPACE O(k)   */

#include <stdio.h>

void rotate(int nums[], int n, int k) {
    int temp[k];
    for(int i=(n-1)-(k-1);i<n;i++){
        temp[i]=nums[i];            // temp array indexing                             is wrong it will go                             out of bounds
    }
    for(int i=0;i<=k;i++){
         nums[i+2]=nums[i];        // shifting direction is                          wrong, it will                                 overwrite some values
                                 //   and 2 is hardcoded            here, it should be k          not 2
    }
    for(int i=0;i<k;i++){
        nums[i]=temp[i];
    }
   
    for(int i=0;i<n;i++){
        printf("%d ",nums[i]);
    }
    printf("\n");
    
}

int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        int n,k;
        scanf("%d%d",&n,&k);
        int nums[n];
        for(int i=0;i<n;i++){
            scanf("%d",&nums[i]);
        }
        rotate(nums,n,k);
    }
    
    
    return 0;
}

/*  CORRECTED SOLN WITH TIME O(n) AND SPACE O(k)  */

#include <stdio.h>

void rotate(int nums[], int n, int k) {
    k=k%n;
    int temp[k];
    for(int i=(n-1)-(k-1);i<n;i++){
        temp[i-(n-k)]=nums[i];            
    }                               //corrected indexing for                               temp
    for(int i=n-1;i>=k;i--){
         nums[i]=nums[i-k];     //in right shift move from                       right to left to avoid                         data corruption
    }                          
    for(int i=0;i<k;i++){
        nums[i]=temp[i];
    }
   
    for(int i=0;i<n;i++){
        printf("%d ",nums[i]);
    }
    printf("\n");
    
}

int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        int n,k;
        scanf("%d%d",&n,&k);
        int nums[n];
        for(int i=0;i<n;i++){
            scanf("%d",&nums[i]);
        }
        rotate(nums,n,k);
    }
    
    
    return 0;
}                         


/*   SOLVING WITHOUT VLA- USING MALLOC WITH SAME TIME AND SPACE, NO  OPTI YET */

#include <stdio.h>

void rotate(int nums[], int n, int k) {
    k=k%n;
    int* temp=(int*)malloc(k*sizeof(int));
    for(int i=(n-1)-(k-1);i<n;i++){
        temp[i-(n-k)]=nums[i];            
    }                               //corrected indexing for                                     temp
    for(int i=n-1;i>=k;i--){
         nums[i]=nums[i-k];     //in right shift move from                              right to left to avoid                                data corruption
    }                          
    for(int i=0;i<k;i++){
        nums[i]=temp[i];
    }
   
    for(int i=0;i<n;i++){
        printf("%d ",nums[i]);
    }
    printf("\n");
    
    free(temp);
}

int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        int n,k;
        scanf("%d%d",&n,&k);
        int nums[n];
        for(int i=0;i<n;i++){
            scanf("%d",&nums[i]);
        }
        rotate(nums,n,k);
    }
    
    
    return 0;
}                

   /*   BUT WE WANT SOLN WITH TIME O(n) AND SPACE O(1)   
        ie no extra space should be taken up by temp array  
        we need to remove use of that extra temp array.
        So, we will reverse the entire array then reverse the first
        (k) elts and then the remaining (n-k) elts */

// //  10 20 30 40 50
// //   0  1  2  3  4
// //  40 50 10 20 30
// // n=5; k=2

#include <stdio.h>

void reverse(int nums[], int start, int end) {
    while(start<end){
        int temp=nums[start];
        nums[start]=nums[end];
        nums[end]=temp;
        start++;
        end--;
    }
}

int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        int n,k;
        scanf("%d%d",&n,&k);
        int nums[n];
        for(int i=0;i<n;i++){
            scanf("%d",&nums[i]);
        }
        k=k%n;
        reverse(nums,0,n-1);
        reverse(nums,0,k-1);
        reverse(nums,k,n-1);
        
        for(int i=0;i<n;i++){
            printf("%d ",nums[i]);
        }
        printf("\n");
    }
    
    
    return 0;
}        

      /* THERE IS ALSO ANOTHER O(1) SPACE METHOD- THE CYCLIC METHOD
         BUT I DIDN"T QUITE UNDERSTAND HOW TO IMPLEMENT THAT   */