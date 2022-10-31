from cmath import pi
import math
n=int(input('enter the number of students'))
for i in range(n):
    print('--------menu---------')

    print('''1.square
2.rectangle 
3.rohumbus
4.parallelogram
5.circle
6.cube
7.cuboid
8.right circular cone
9.hemisphere
10.sphere
11.solid cylinder
12.hollow cylinder
13.exit''')
    op=int(input('enter shape'))
    if op==1:
        print('you choose square')
        s=int(input('enter side'))
        a=s*s
        p=s*4
        print('area',a)
        print('perimeter', p)
    elif op==2:
        print('u choose rectangle')
        l=int(input('enter side'))
        b=int(input('enter side 2'))
        a=l*b
        p=2*(l+b)
        print('area',a)
        print('perimeter', p)
    elif op==3:
        print('u choose rhombus')
        l=int(input('enter side'))
        b=int(input('enter daigonal'))
        c=int(input('enter daigonal'))
        a=(b*c)/2
        p=4*(l)
        print('area',a)
        print('perimeter', p)
    elif op==4:
        print('u choose parallelogram')
        l=int(input('enter base'))
        b=int(input('enter side'))
        c=int(input('enter height'))
        a=(l*c)/2
        p=2*(l+b)
        print('area',a)
        print('perimeter', p)
    elif op==5:
        print('you choose circle ')
        r=int(input('enter radius'))
        a=pi*r**2
        p=2*pi*r
        print('area',a)
        print('perimeter', p)
    elif op==6:
        print('you choose cube')
        r=int(input('enter the lenght '))
        print('surface area:',6*r)
        print('volume:',r**3)
    elif op==7:
        print('you choose cuboid')
        l=int(input('enter lenght'))
        b=int(input('enter breath '))
        h=int(input('enter height'))
        print('vol',l*b*h)
        print('surface area' )
    elif op==8:
        print('you choose right circular cone')
        l=int(input('enter slant height'))
        b=int(input('enter radius '))
        h=int(input('enter height'))
        print('surface area', 1/3*pi*r**2*h  )
        print('surface area' , pi*r*l)
        print('tsa', pi *r*(r+l))
    elif op==9:
        print('you choose hemisphere ')
        r=int(input('enter the radiu'))
        print('vol' ,2/3* pi* r**3)
        print('csa', 2*pi*r**2)
        print('tsa', 3*pi*r**2)
    elif op==10:
        print('sphere')
        r=int(input('enter the radius'))
        print('vol' , 4/3*pi*r**3)
        print('tsa' ,4*pi*r**2)
    elif op==11:
        print('solid cylinder')
        r=int(input('enter the radius'))
        h=int(input('enter the height'))
        print('vol', pi*r**2*h)
        print('tsa', 2*pi*r*(r+h))
        print('csa', 2*pi*r*h)
    elif op==12:
        print('hollow cylinder')
        r=int(input('enter the radius'))
        r2=int(input('enter the radius'))
        
        h=int(input('enter the height'))
        print('vol', pi*(r2**2-r**2)*h)
        print('csa' , 2*pi*h(r2+r))
        print('tsa', 2*pi*h(r+r2)+2*pi*(r2-r))
    else:
        print('exit')     
