a = [1, 3, 5, 7, 9, 11, 13, 15, 17]
N = len(a)
print(a) #使用前
for i in range(N-1):
   if a[i+1] < a[i]:
     a[i], a[i+1] = a[i+1], a[i]
print(a) #使用後     