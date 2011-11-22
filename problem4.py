max_n1, max_n2, max_prod = 0, 0, 0

for n1 in range(100, 1000):
    for n2 in range(100, 1000):
        product = str(n2 * n1)
        if product == product[::-1]:
            if max_prod < int(product):
                max_prod = int(product)
                max_n1 = n1
                max_n2 = n2
    
print str(max_n1) + " x " + str(max_n2) + " = " + str(max_prod)