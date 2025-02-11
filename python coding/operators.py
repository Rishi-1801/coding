#operators in  python are many like 
# arithemetic 
# comaparision 
# logical 
# bitwise 
# assigment 
# identity 
# membership
#in arithmetic
# +(add),-(sub),/(div gives float),//(clear division gives integer),%(modulo division),*(mul),**(power)
#precidency of operators of arithmetic
#()
#**(right to left)
#   * /  //  % (left to right)
# + -(left to right)
weight=int(input("enetr the weight in kg="))
height=float(input("enter the height in meters="))
BMI=weight//(height**2)
print(BMI)
#in python =(assignment),
#in python logical and is used as(and),logical or is (or),logical not is (not)
#the bitwise operaters (&,|,^,~,<<,>>) work on binary digits
# & work as normal and gate in binary 
# | work as normal or gate in binary
# ^ it work as xor i.e gives true for odd multiples of true  and else false
#~ it is negation it give the twos complement of the given num in negative sign 
#the operator simple formula is ~a=-(a+1)
#<<(left shift)formula is (a<<n)=a*(2**n)
#>>(rigth shift )formula is (a>>n)=a/(2**n)
# in python == is used check values but (is) is used check the adresses or particularly (identity) of operators
# in python adress can be printed by using id() 
# in python if value is same it doesnot create another object again so u will get same address
# (is not) gives reverse output (is)
# in python (in) is used to check a charecter or substring or numbers present in string or lists.
# (not in ) gives reverse output of (in).
# in python we can use round(num,no of digits) for rounding off in case of tie breaker it choose nearest even integer
#in python  we  can use f-strings rather than type casting a num in string by taking{}this brackets
# in python it follows intentation means in control statements (if_else) in that statements should be given spaces.
height=int(input("enter the height in feet:"))
if(height>3):
    print("buy token")
else:
    print("buy the token")