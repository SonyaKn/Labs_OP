
import random
def palindrom(k):
    n=0
    for i in range(k):
        pal=0
        chislo=random.randint(1,10000)
        c=chislo
        while c:
            pal=10*pal+ c%10
            c=c//10
        if chislo==pal:
            n+=1
    return n

kilkist=int(input("Введіть кількість натуральних чисел:  "))
if palindrom(kilkist)==0: 
    print("Серед чисел немає паліндромів")
else: print("Серед чисел є паліндроми")

