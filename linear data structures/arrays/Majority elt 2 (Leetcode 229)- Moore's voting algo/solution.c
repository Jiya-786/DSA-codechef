//                   MOORE'S VOTING ALGO
// using voting algo there can never be more than 2 candidates that can win since we need >n/3 implies if more than 2 say 3 candidates win then total will be >1 hence not possible.

// you can also think of it like a pie diagram, if 2 candidates win, ie >2n/3 space is taken there remains <n/3 space implies there can never be a third candidate

// so possibilities are 0,1,2 wins

void maxSubArray(int nums[], int n){
    
    int candidate1=0;
    int candidate2=0;
    int life1=0;
    int life2=0;
    
    for(int i=0;i<n;i++){
        if(nums[i]==candidate1){
            life1++;
        }
        else if(nums[i]==candidate2){
            life2++;
        }
        else if(life1==0){
            candidate1=nums[i];
            life1=1;
        }
        else if(life2==0){
            candidate2=nums[i];
            life2=1;
        }
        else{
            life1--;
            life2--;
        }
    }
    count1=0;
    count2=0;
    int ans[2]={0};
    int count=0;
    for(int i=0;i<n;i++){
        if(nums[i]==candidate1){
            count1++;
        }
        if(nums[i]==candidate2){
            count2++;
        }
    }
    if(count1>n/3){
        ans[count]=candidate1;
        count++;
    }
    if(count2>n/3){
        ans[count]=candidate2;
        count++;
    }
    if(ans[count]>ans[0]){
        int temp=ans[count];
        ans[count]=ans[0];
        ans[0]=temp;
        }
    for(int i=0;i<count;i++){
        printf("%d",ans[i]);
    }
    printf("\n");
        // if(life1){
        //     printf("%d",candidate1);
        // }
        // if(life2){
        //     printf("%d",candidate2);
        // }
        // printf("\n");
    
}




    




