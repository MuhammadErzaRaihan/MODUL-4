input_str=input()
x,y = input_str.split()
x = int(x)

for E in range(1, 51):
    if E % x == 0:
        print(y, end=' ' )    
    else:
        print(E, end=' ')
