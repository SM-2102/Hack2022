n=int(input('enter the number of lines u want to print'))#number of lines you want to print 

for i in range(1,n+1):
    for j in range(0,n-i+1):
        print(' ', end='')
    for  k in range(1,2*i):
        print(k, end='')
    print()
