void insertionsSort(int* A,int n){
	int key,j;
	for(int i=1;i<=n-1;i++){
		key=A[i];
		j=i-1;
		while(j>=0 && A[i]>=key){
			A[j+1]=A[j];
			j--;
		}
		A[j+1]=key;
	}

}