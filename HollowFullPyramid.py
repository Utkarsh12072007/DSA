k = int(input("Enter the size of pyramid : "))

for i in range(k):
    if (i==0 or i==k-1):
        for j in range(k-i-1):
            print(" ",end=" ")

        for j in range(i+1):
            print("*  ",end=" ")

    else:
        for j in range(k-i-1):
            print(" ",end=" ")
        
        print("*",end="")

        for j in range(2*i-1):
            print(" ",end=" ")
        
        print(" *",end="")

    print(" ")