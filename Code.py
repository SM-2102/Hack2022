print("Enter principal amount, annual interest and number of years : ")

p, r, t=map(float, input().split())

i = (p*r*t)/100

print("The total interest is", i)

print("The total amount is", i+p)
