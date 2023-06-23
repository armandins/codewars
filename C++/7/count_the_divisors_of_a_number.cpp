int divisors(int n)
{
	int z = 0;
	for (int i = 1; i <= n; ++i)
		if (n % i == 0)
			z++;
	return z;
}
