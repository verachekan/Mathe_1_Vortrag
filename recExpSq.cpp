int exponentiationBySquaring(int n, int x) {
	if (n < 0) 
		return exponentiationBySquaring(-n, 1/x);
	if (n == 0) 
		return 1;
	if (n == 1)
		return x;
	if (n % 2 == 0)
		return exponentiationBySquaring(n/2, x*x);
	return x*exponentiationBySquaring((n-1)/2, x*x);
}
