int trailingZeroes(int n) {
	//因为5的个数小于2的个数，所以只需要考虑5的个数
	//如果大于等于25则需要除以5再考虑，因为25可以分解成两个5
    if(n/5<5)
        return n/5;
    else
        return n/5 + trailingZeroes(n/5);
}