#Cálculo de IMC

nome=input('Digite seu nome: ')

altura=float(input("Digite a sua altura: "))

peso=int(input('Digite o seu peso: '))

imc = (peso/(altura**2))


print(nome,"tem", altura)
print("Pesa", peso, "quilos", "e seu IMC é", imc)
