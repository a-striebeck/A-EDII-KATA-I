divisionError = "Error: no se puede dividir por cero"

def Addition(numA, numB):
    return numA + numB

def Substraction(numA, numB):
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
    print("\"+\" \t Suma")
    print("\"-\" \t Resta")
    print("\"/\" \t Division")
    print("\"*\" \t Multiplicacion")
    print("\"S\" \t Salir")

def AskValues(Values):
    Values[0] = float(input("Ingrese el primer valor: "))
    Values[1] = float(input("Ingrese el segundo valor: "))

def ProcessOperation(operation, Values):
    Result = 0
    if operation == '+':
        Result = Addition(Values[0], Values[1])
    elif operation == '-':
        Result = Substraction(Values[0], Values[1])
    elif operation == '/':
        Result = Division(Values[0], Values[1])
    elif operation == '*':
        Result = Multiplication(Values[0], Values[1])
    return Result


def PrintResults(Result, Values, operation):
    print(f"{Values[0]} {operation} {Values[1]} = {Result}")
    return None

def CalcMenu():
    
    choice = '0'
    values = [0, 0]
    result = 0
    while choice != 'S':
        PrintMenu()        
        choice = (input("Ingrese la opcion elegida: "))
        if choice == 'S' or choice == 's':
            break
        elif choice == '-' or choice == '+' or choice == '/' or choice == '*':
            AskValues(values)
            result = ProcessOperation(choice, values)
            PrintResults(result, values, choice)
        else:
            print("Opcion incorrecta, vuelva a ingresar la opcion.")
def main():
    
    CalcMenu()
    

if __name__ == "__main__":
    main()

