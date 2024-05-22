# To do:
#  Implement a menu
#  Exceptions when divide by 0

def Addition(numA, numB):
    return numA + numB

def Withdraw(numA, numB):
    return numA - numB

def Division(numA, numB):
    return numA / numB

def Multiplication(numA, numB):
    return numA * numB


def main():
    
    valueA = float(input("Ingrese el primer valor: "))
    valueB = float(input("Ingrese el segundo valor: "))

    print("La suma de {valueA} y {valueB} es igual a: ")
    Addition(valueA, valueB)
    print("La resta de {valueA} y {valueB} es igual a:")
    Withdraw(valueA, valueB)
    print("La Division entre {valueA} y {valueB} es igual a:")
    Division(valueA, valueB)
    print("La multiplicacion entre {valueA} y {valueB} es igual a:")
    Multiplication(valueA, valueB)


if __name__ == "__main__":
    main()

