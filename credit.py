# initializing or declaring variables
u = 0
sum1 = 0
sum2 = 0
    
# making sure the number is positive
while True:
    try:
        card = int(input("Number: "))
        if card > 0:
            break
    except ValueError:
        card = int(input("Number: "))

card1 = card
card3 = card
card2 = card1 // 10
    
# multiplying every other digit by 2, starting from second last
while card2 > 0:
    p = card2 % 10
    p = p * 2
    card2 = card2 // 100
    if p > 9:
        q = p % 10
        p = p // 10
        r = p % 10
        p = q + r
    sum1 = sum1 + p

# adding every other digit starting from last
while card1 > 0:
    s = card1 % 10
    card1 = card1 // 100
    sum2 = sum2 + s

sum = sum1 + sum2

# to obtain the last digit
t = sum % 10

# the number of digits
while card3 > 0:
    card3 = card3 // 10
    u += 1

# obtaining the first and first two digits
x = card // pow(10, (u - 1))
y = card // pow(10, (u - 2))

# checking whether the card number is valid or not
if t == 0:
    # for AMEX
    if (u == 15 and (y == 34 or y == 37)):
        print("AMEX")

    # for MASTERCARD
    elif (u == 16 and (y > 50 and y < 56)):
        print("MASTERCARD")

    # for VISA
    elif ((u == 16 or u == 13) and x == 4):
        print("VISA")
    
    # if the card is not valid
    else:
        print("INVALID")
        
else:
    print("INVALID")