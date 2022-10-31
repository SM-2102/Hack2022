def getReverse(n):
    if int(n)<10:
        m=n
    else:
        m=n[::-1]
    return(m)
def checkpalindrome(n):
    rever=n[::-1]
    re=False
    if rever==n:
        print('its palindrome ')
    else:
        print('its not ')
def checkNarcissistic(n):
    l=len(n)
    sum=0
    for i in n:
        sum=sum+int(i)**l
    if int(n)==sum:
        print('its narcissistic')
    else:
        print('its not')   
def findDigitSum(n):
    sum=0
    for i in n:
        sum=sum+int(i)

    return sum 
def findSquareDigitSum(n):
    sum=0
    for i in n:
        sum=sum+int(i)**2
    return sum
print(''' 1. Find reverse of a number 
2. Check whether a number is a palindrome or not. 
3. Check whether a number is a Narcissistic number or not. 
4. Find the sum of digits of a number 
5. Find the sum of squares of digits of a number. 
6. Select 6 to exit the application. 
''')

run=True
while run:
    op=int(input('enter the option'))
    if op==1:
        n=str(input())
        print(getReverse(n))
    elif op==2:
        n=str(input())
        r=print(checkpalindrome(n))
    elif op==3:
        n=str(input())
        print(checkNarcissistic(n))
    elif op==4:
        n=str(input())
        print(findDigitSum(n))
    elif op==5:
        n=str(input('enter the number'))
        print(findSquareDigitSum(n))
    else:
        run=False 
        print('exit')
