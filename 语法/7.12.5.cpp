double max(const double a[],int n){
	if (n==0)
		return std::numeric_limits<double>::quiet_NaN;
	double max_v = a[0];
	for (int i=1;i<n;i++){
		max_v = (max_v < a[i] ? a[i] : max_v);
	}
	return max_v;
}