size=input("enter what size of pizza do u want S/M/L")
bill=0
if(size=='s' or size=='S'):
    print('the price is 100 rupees')
    bill=100
elif(size=='m' or size=='M'):
    print('the price is 200 rupees')
    bill=200
else:
    print('the price is 300 rupees')
    bill=300
p=input("do u want pepper onion Y/N  ")
if(p=='Y' or p=='y'):
    if(size=='s' or size=='S'):
       bill=bill+30
    else:
        bill=bill+50
c=input("do u want extra cheese Y/N ")
if(c=='y' or c=='Y'):
    bill=bill+20
print(f"the total bill is {bill}")    

   
# in python else if statement if used as "elif"