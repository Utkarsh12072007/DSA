K=int(input("Enter size of Pyramid : "))

for i in range(K):
    for j in range(i):
        print(" ", end="")

    for j in range(K-i):
        print("* ", end="")
    
    print(" ")