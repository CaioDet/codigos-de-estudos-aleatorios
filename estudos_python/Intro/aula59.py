""""
repetições
while (enquanto)
executa uma ação enquanto uma condição for verdadeira
Loop infinito -> quando um código não tem fim
"""
# condicao = True

# while condicao:
#     nome = input ('Qual o seu nome: ')
#     print (f'seu nome é {nome}')
    
#     if nome == 'sair':
#         break

print('Acabou')

contador = 0

while contador < 100:
    contador = contador + 1
    print (contador)

    if contador == 99:
        break

print (f'Parabéns por contar até {contador}')