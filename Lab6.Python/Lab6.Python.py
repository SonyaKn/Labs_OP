
import random
def palindrom(k):
    n=0
    for i in range(k):
        pal=0
        chislo=i
        while chislo:
            pal=10*pal+ chislo%10
            chislo=chislo//10
        if i==pal:
            n+=1
    return n

kilkist=int(input("Введіть кількість натуральних чисел:  "))
if palindrom(kilkist)==0: 
    print("Серед чисел немає паліндромів")
else: print("Серед чисел є паліндроми")

