# to imply randomness in the code we should import it i.e, is by "import random"
#random.randint(a,b) this gives the random integer between a<=x<=b
# random.randrange(a,b) this gives the random integer between a<=x<b
#random.random() this function gives the floting value 0.00<=x<1.00
#random.uniform(a,b) this gives the floating value in the range of a.00<=x<=b.00
#random.choice(list) if list is defined then it chooses the random ele from the list
# random.suffle(list) if list is defined then it suffles the enytire list everytime
# text.split(' ') this splits the text by space(" ") 
import random
a=random.randint(0,1)
if(a==0):
    print("heads")
else:
    print("tails")   
#coding exercise     
import random
name=input("print the names by giving spaces : " )
splitted_names=name.split(' ')
print(splitted_names)
l=len(splitted_names)
a=random.randint(0,l-1)
print(f"{splitted_names[a]} will pay the bill")