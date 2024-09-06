i=int(input("Enter the binary Number : "))
def BinaryToDecimal():
    value=0
    k=i
    p=0
    while(k!=0):
        L=k%10
        value=value + L*(2 ** p)
        k=k//10
        p=p+1
    print(f" Decimal Number is {value}")

BinaryToDecimal()

