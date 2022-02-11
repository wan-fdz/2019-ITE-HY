# 2-2

def sortFirstInList(val): #Function that returns the first element
    return val[0]

def sortSecondInList(val): #Function that returns the second element
    return val[1]



file = open("article.txt", "r")
filedata = file.read()
text = filedata.replace('.','').replace(',','').replace('?','').replace('"','').replace("'",'').replace(':','').replace('-','').replace('/','').replace(' ','').replace('[','').replace(']','').replace('\n','').replace('1','').replace('2','').replace('3','').replace('4','').replace('5','').replace('6','').replace('7','').replace('8','').replace('9','').replace('0','')
textList = list(text)
#print(text)



d = {}

for letter in textList:
    d[letter] = d.get(letter,0)+1
    
letter_freq = []

for key, value in d.items():
    letter_freq.append((value, key))
    

letter_freq.sort(key = sortSecondInList, reverse = False) 

#print(letter_freq)

for i in letter_freq:
    cont = 0
    for j in i[::-1]:
        if cont == 0:
            print(j, end=':')
        else:
            print(j)
        cont+=1
    print('\n')

letter_freq.sort(key = sortFirstInList, reverse = False) 

#print(letter_freq)

for i in letter_freq:
    cont = 0
    for j in i[::-1]:
        if cont == 0:
            print(j, end=':')
        else:
            print(j)
        cont+=1
    print('\n')
