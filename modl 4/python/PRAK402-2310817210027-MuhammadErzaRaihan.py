Min = 1
Max = int(input(""))

for Z in range(Min , Max +1):
  if Z % 2 == 0:
   print('' , end='')
  else :
    print(Z,'', end='')

print('')

for Z in range(Max,Min, -1):
  if Z % 2 == 0:
    print(Z,'', end='')
 