n = int(input())
m = 3*n #thickness
#top
#middle
#bottom
c = ".|."
import textwrap

for i in range(n//2):
    print((c*(2*i+1)).center(m,"-"))
print('WELCOME'.center(m,"-"))
for i in range(n//2):
    print((c*(n-2*i-2)).center(m,"-"))
