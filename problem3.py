v = 600851475143
d = 2
while v > d:
    if v % d == 0:
        v /= d
    else:
        d += 1
print v