import random
list1=['0','1','2','3','4','5','6','7','8','9']
list2=['A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z','a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z']
list3=['!','@','#','$','%','&','*','(',')']
print('welcom !... to password generator')
a=input("how many letters do u want: ")
letter=int(a)
pass_list=[]
for i in range(1,letter+1):
  pass_list += random.choice(list2)
b=input("how many numbers do u want :")  
num=int(b)
for i in range(1,num+1):
     pass_list += random.choice(list1)
c=input('how many special characters do u want :')
character=int(c)
for i in range(1,character+1):
     pass_list += random.choice(list3)
print(pass_list)
random.shuffle(pass_list)
print(pass_list)
password=''
for i in pass_list:
   password += i
print(password)   