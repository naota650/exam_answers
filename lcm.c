unsigned int lcm(unsigned int a, unsigned int b)
{
	int i = (a > b) ? a : b;
	if(!a || !b)
		return 0;
	while(1)
	{
		if(i % a == 0 && i % b == 0)
			return i;
		++i;
	}
	return 0;
}
