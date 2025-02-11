b=3
print(type(b))
#here type() is used to check the data type of variable , in python datatypes are classes and variables are objects of that class
#in python \ is used to skip the special meaning created in python 
#Ob or OB,Oo or OO,Ox or OX are used convert the given number into binary,octal,hexadecimal
print("rishi\'s \"lectures\"")
#here special meaning of ' and "are skipped by using \
#in python we can do type casting means changing the datypes of variableby using following functions
#int()
#str()
#float()
first_num=input("enter the first number=")
second_num=input("enter the second number=")
sum=int(first_num)+int(second_num)
print(sum)
#small exercise based on above theory
#enter the two digit number and print sum of that number
a=input("enter the two digit number =")
sum=int(a[0])+int(a[1])
print("sum ="+str(sum))
