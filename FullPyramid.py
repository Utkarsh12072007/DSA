
K=int(input("Enter size of Pyramid : "))

for i in range(K):
    for j in range(K-i-1):
        print(" ", end="")

    for j in range(i+1):
        print("* ", end="")
    
    print(" ")

