//                        BRUTE FORCE

void moveZeroes(int nums[], int n) {
    int non_zero_elts[n];
    int counter=0;
    for(int i=0;i<n;i++){
        if(nums[i]!=0){
            non_zero_elts[counter]=nums[i];
            counter++;
        }
    }
    for(int i=0;i<counter;i++){
        nums[i]=non_zero_elts[i];
    }
    for(int i=counter;i<n;i++){
        nums[i]=0;
    }
    
}

//              WITHOUT ANY EXTRA ARRAY AS SPECIFIED BY QS
// BUT THIS IS STILL NOT OPTIMAL SINCE TIME O(n^2)

// 4 0 5 0 0 7 8
// 0 1 2 3 4 5 6
// 4 5 0 0 7 8 0
// 4 5 0 7 8 0 0
/*   int index=0;
     for(int i=0;i<n;i++){
     if(nums[i]==0){
         index=i;
     }
     for(int i=index;i<n;i++){
         a[i]=a[i+1];
     }
     a[n-1]=0;
   }    */

void moveZeroes(int nums[], int n){
    
     if(n==1) return;
    
     int index=0;
     for(int i=0;i<n;i++){
         if(nums[i]==0){
         index=i;
         for(int i=index;i<=n-2;i++){       /*imp note this for loop                                  has to be inside if
                                              statement*/
         nums[i]=nums[i+1];
         
        }
        nums[n-1]=0;
        i--;              // This line is v.imp since we need to re                  -check index after shifting places
     }
     
   } 
}    
    
    
// OPTIMAL SOLN

void moveZeroes(int nums[], int n){
    
    if(n==1) return;
    int j=0;
    for(int i=0;i<n;i++){
        if(nums[i]!=0){
            nums[j]=nums[i];
            j++;
        }
    }
    
    while(j<n){
        nums[j]=0;
        j++;
    }
    
    
}
    
    
    
