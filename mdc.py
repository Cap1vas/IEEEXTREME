def mdc(a,b):
    i=1
    if(a>b):
        maior = a
    else:
        maior = b
    while i<maior:
        if((a % i == 0) and (b % i == 0)):
            valor=i
        i=i+1
    return valor


                
            


a = int(input("Insira"))
b=int(input("insira"))

print(mdc(a,b))