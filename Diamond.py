L=int(input("Enter size of Diamond : "))
K=int(L/2)
for i in range(K-1):
    for j in range(K-i-1):
        print(" ", end="")

    for j in range(i+1):
        print("* ", end="")
    
    print(" ")

for i in range(K):
    for j in range(i):
        print(" ", end="")

    for j in range(K-i):
        print("* ", end="")
    
    print(" ")