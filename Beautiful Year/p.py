year = int(input())+1

flag = True
while flag:
   stYear = str(year)
   for i in range (len(stYear)):
      if(stYear.count(stYear[i])>1):
         year+=1
         break
      elif  i== (len(stYear)-1):
         flag = False
      

print(year)