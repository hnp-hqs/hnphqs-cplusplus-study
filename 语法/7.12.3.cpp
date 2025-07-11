void init_array(int a[], int n, int v){
	for(int i=0;i<n;i++){
		*(a+i) = v;
	}
}