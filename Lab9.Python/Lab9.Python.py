s="hello; you sweetie little mini pig; bye"
count = 0
i=0
while s[i] == ' ' & s[i] != '\0':
    i+=1
slovo=0
while s[i] != '\0':
    if s[i] == ';':
         i+=1
         while s[i] != ';':
             if s[i] != ' ' & slovo == 0:
                 slovo = 1
                 count+=1
             elif s[i] == ' ':
                 slovo = 0
             i+=1
print("Kolvo slov:   ",count)