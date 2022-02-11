# 2-1
file = open("article.txt", "r")
filedata = file.read()
text = filedata.replace('.',' ').replace(',',' ').replace('?',' ').replace('"',' ').replace("'",' ').replace(':',' ').replace('-',' ').replace('/',' ')
text = text.lower()
word_list = text.split()

d = {}

for word in word_list:
    d[word] = d.get(word,0)+1
    
word_freq = []

for key, value in d.items():
    word_freq.append((value, key))

word_freq.sort(reverse=True) 
print(word_freq)

for i in word_freq:
    cont = 0
    for j in i[::-1]:
        if cont == 0:
            print(j, end=':')
        else:
            print(j)
        cont+=1
    print('\n')


#### d={}
##for word in word_list:
##    if word is not d:
##        d[word] = 0
##    d[word] += 1
######
