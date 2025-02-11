# coding exercise 1
#a=input('enter the heights seperated by spaces: ')
#b=a.split(' ')
#sum=0
#c=0
#for i in b:
#    sum=sum+int(i)
#    c=c+1
#else:
#    avg=sum//c
#    print("the average of all heights are:",avg)  


# coding exercise 2  
num=input("enter the numbers separated bt space: ")
b=num.split(' ')
c=0
for i in b:
  c=c+1
for i in range(c):
  b[i]=int(b[i])
print(b)
max=b[0]
for i in range(c):
  if(max<b[i]):
    max=b[i] 
else:
  print('the maximum of the given numbers :',max)  



# range(start,stop,step size)
# start means starting point, stop means stop-1 point,step size means how many steps between two digits to give
# this is all about range function