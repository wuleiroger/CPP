
// No Rail recusion for fibonacci
unsigned int fib_normal_rec(unsigned int n)
{
	if (n <= 2)
		return 1;
	else
		return fib_normal_rec(n - 1) + fib_normal_rec(n - 2);
}

// Rail recusion for fibonacci
unsigned int fib_rail_rec(unsigned int n, unsigned int first, unsigned int second)
{
	if (n == 1) return first;
	if (n == 2) return second;
	return fib_rail_rec(n - 1, second, second + first);
}

/*
名称：
尾部优化

原因：
函数栈空间有限，无限调用会导致爆栈的发生

说明：
尾部优化的本质，是去除函数调用新栈帧创建，如尾部优化过的递归函数，实则利用函数自身的栈帧进行计算，
从而到达不开辟新的栈帧。
*/