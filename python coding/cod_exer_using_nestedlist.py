r1=[1,1,1]
r2=[1,1,1]
r3=[1,1,1]
print(f"{r1}\n{r2}\n{r3}")
pos=input("enter the positions that u want to hide separated by comma")
p=pos.split(',')
print(p[0],p[1]) 
if(int(p[0])==1):
    if(int(p[1])==1):
      r1[0]='x'
    elif(int(p[1])==2):
       r1[1]='x'
    else:
       r1[2]='x' 
elif(int(p[0])==2):
   if(int(p[1])==1):
      r2[0]='x'
   elif(int(p[1])==2):
        r2[1]='x'
   else:
        r2[2]='x'   
else:
    if(int(p[1])==1):
      r3[0]='x'
    elif(int(p[1])==2):
        r3[1]='x'
    else:
        r3[2]='x' 
print(f"{r1}\n{r2}\n{r3}")
# 2nd method   
r1=[1,1,1]
r2=[1,1,1]
r3=[1,1,1]
print(f"{r1}\n{r2}\n{r3}")
pos=input("enter the positions that u want to hide separated by comma")     
mat=[r1,r2,r3]  
row=int(pos[0])   
col=int(pos[1]) 
row_sel=mat[row-1]
row_sel[col-1] ='x'  
print(f"{r1}\n{r2}\n{r3}")          