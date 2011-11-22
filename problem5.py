maximum = 1
done = False
while not done:
    divisible = True
    for i in range(1, 21):
        if maximum % i != 0:
            divisible = False
    if divisible:
        done = True
    else:
        maximum += 1
print maximum
    