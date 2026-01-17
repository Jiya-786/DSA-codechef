#include <stdio.h>

int main() {
	int n;
	scanf("%d",&n);
	int a[n];
	for(int i=0;i<n;i++){
	    scanf("%d",&a[i]);
	}
	int m;
	scanf("%d",&m);
	int b[m];
	for(int i=0;i<m;i++){
	    scanf("%d",&b[i]);
	}
	int c[m+n];
	int i=0;int j=0;int k=0;
	while(i<n && j<m){
	    if(a[i]>b[j]){
	        c[k]=b[j];
	        k++;j++;
	    }
	    else{
	        c[k]=a[i];
	        k++;i++;
	    }
	}
	while(i<n){
	    c[k]=a[i];
	    k++;i++;
	}
	while(j<m){
	    c[k]=b[j];
	    k++;j++;
	}
	for(int i=0;i<n+m;i++){
	    printf("%d ",c[i]);
	}

}

