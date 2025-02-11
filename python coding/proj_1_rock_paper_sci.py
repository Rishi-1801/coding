import random
l=['r','s','p']
a=random.choice(l)
b=input("enter the rock,paper or scissor by r,p,s:")
if(a==b):
    print(f"user:{b}\ncomputer:{a}")
    print("there is a tie")
elif(a=='r' and b=='s'):
    print(f"user:{b}\ncomputer:{a}")
    print('the computer wins')
elif(a=='r' and b=='p'):
    print(f"user:{b}\ncomputer:{a}")
    print('the user wins')  
elif(a=='s' and b=='r'):
    print(f"user:{b}\ncomputer:{a}")
    print('the user wins')
elif(a=='s' and b=='p'):
    print(f"user:{b}\ncomputer:{a}")
    print('the computer wins')
elif(a=='p' and b=='s'):
    print(f"user:{b}\ncomputer:{a}")
    print('the user wins')
elif(a=='p' and b=='r'):
    print(f"user:{b}\ncomputer:{a}")
    print('the computer wins') 
else:
    print(f"user:{b}\ncomputer:{a}")
    print('invalid input')  
           