import time
start1 = time.time()
for i in range(0,200):
    print('*', end=' ')
end1 = time.time()
print(end1-start1)

start = time.time()
s = ''
for i in range(0,200):
    s+='*'
print(s)
end = time.time()
print(end-start)
