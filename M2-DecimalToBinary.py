i=int(input("Enter the value to be convert : "))
def DecimalToBinary():
    value=0
    p=0
    k=i
    while(k!=0):
        L=k&1
        k=k>>1
        value=value + L*(10**p) 
        p+=1

    return value

binary=DecimalToBinary()
print("Binary equivalent is :",binary)