divisionError = "Error: no se puede dividir por cero"

def Addition(numA, numB):
    return numA + numB

def Withdraw(numA, numB):
    return numA - numB

def Division(numA, numB):
    if numB == 0:
        return divisionError
    else:
        return numA / numB

def Multiplication(numA, numB):
    return numA * numB

def PrintMenu():    
    print("\n Calculadora Estructurada")   
    print("1---- Suma")
    print("2---- Resta")
    print("3---- Division")
    print("4---- Multiplicacion")
    print("5----- Salir")

def AskValues(Values):
    Values[0] = float(input("Ingrese el primer valor: "))
    Values[1] = float(input("Ingrese el segundo valor: "))

def PrintResults(operation, valueA, valueB):
    if operation == 1:
        print(f"La suma de {valueA} y {valueB} es igual a: ", Addition(valueA, valueB))
    elif operation == 2:
            print(f"La resta de {valueA} y {valueB} es igual a:", Withdraw(valueA, valueB))
    elif operation == 3:
            print(f"La Division entre {valueA} y {valueB} es igual a:", Division(valueA, valueB))
    elif operation == 4:
            print(f"La multiplicacion entre {valueA} y {valueB} es igual a:", Multiplication(valueA, valueB))
    return None

def CalcMenu():
    
    choice = 0
    values = [0, 0]
    while choice != 5:
        PrintMenu()        
        choice = int(input("Ingrese la opcion elegida: "))
        if choice == 5:
            break
        elif choice >=1 and choice <=5:
            AskValues(values)
            PrintResults(choice, values[0], values[1])
        else:
            print("Opcion incorrecta, vuelva a ingresar la opcion.")
def main():
    
    CalcMenu()
    

if __name__ == "__main__":
    main()

