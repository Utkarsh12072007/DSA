k=int(input("Enter the length : "))

for i in range(k):
    for j in range(k-i):
        if (i==0 or i==k-1 or j==0 or j==k-i-1):
            print("* ",end=" ")
        
        else:
            print("  ",end=" ")

    print(" ")

    