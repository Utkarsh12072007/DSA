 #           ! Wrong way

k=int(input("Enter the value to be convert : "))#global k
def DecimalToBinary():
    value=0
    p=0
    while(k!=0):#local k  
        L=k%2
        k=k//2
        value=value + L*(10**p) 
        p+=1

    return value

binary=DecimalToBinary()
print("Binary equivalent is :",binary)




    #      !  Learning
    # Python does not support local variables inside functions.
    # When you declare a variable inside a function, it becomes a local variable.

 #          ? Correct way

i=int(input("Enter the value to be convert : "))
def DecimalToBinary():
    value=0
    p=0
    k=i
    while(k!=0):
        L=k%2
        k=k//2
        value=value + L*(10**p) 
        p+=1

    return value

binary=DecimalToBinary()
print("Binary equivalent is :",binary)