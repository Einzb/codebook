def fast_power(b, n):
    if(n==0):
        return 1
    else:
        if(n%2==0):
            pow_half = fast_power(b, n/2)
            return pow_half * pow_half
        else:
            return b * fast_power(b, n-1)