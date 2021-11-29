
def max_element(max,kilkist,m_list):
    for i in range(kilkist):
        if m_list[i]>max:
            max=m_list[i]
    return max

def function(max_2,kilkist_2,m_list_2,kol):
    for i in range(kilkist_2):
        if i % 2==0:
            if m_list_2[i] % 2 != 0:
                kol=kol+1
                m_list_2[i] = abs(max_2 - m_list_2[i])
    return kol
m_size=int(input("Введіть розмір масиву "))
m=[None]*m_size
print("Введіть ",m_size, " елементів масива")
for i in range(m_size):
    m[i]=int(input())
max_m=m[0]
max_m=max_element(max_m,m_size,m)
k=0
k=function(max_m,m_size,m,k)
if k!=0:
    print("Кількість непарних елементів, що мають парний порядковим номер= ",k)
    for i in range(m_size):
        print(m[i])
else: print("Немає непарних елементів, що мають парний порядковий номер")