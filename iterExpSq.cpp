int exponentiationBySquaring(int n, int x) {
	if (n < 0) {
		n = -n;
		x = 1/x;
	}
	if (n == 0)
		return 1;
	int y = 1;
	while (n > 1) {
		if (n % 2 == 0) {
			x = x * x;
			n = n/2;
		} else {
			y = y * x;
			x = x * x;
			n = (n - 1) / 2;
		}
	}
	return x*y;
}
