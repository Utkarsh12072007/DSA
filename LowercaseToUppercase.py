A=input("Enter a Alphabet to  convert it :")

if(ord(A)>=ord("a") and ord(A)<=ord("z")) :
    L=ord(A)-32  
    print("The converted Alphabet is :",chr(L))

elif(ord(A)>=ord("A") and ord(A)<=ord("Z")) :
    L=ord(A)+32
    print("The converted Alphabet is :",chr(L))

else :
    print("Invalid Alphabet")



    #     ! Learning
    # Remember the "ord" function in python to convert charter to
    # it ASCII value and "chr" function to convert
    # ASCII to charter.   
    
