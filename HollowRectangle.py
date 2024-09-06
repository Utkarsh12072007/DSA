# ? Kuch naya socha 

k=int(input("Enter the length : "))
l=int(input("Enter the breath : "))

for i in range(k):
    for j in range(l):
        if(i==0 or i==k-1 or j==0 or j==l-1):
            print("* " , end=" ")

        else:
            print("  " , end=" ")
        
    print(" ")

