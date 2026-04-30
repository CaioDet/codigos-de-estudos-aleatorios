"""Introdução
for/i"""

# senha_salva = '1234'
# senha_digitada = ''
# repeticoes = 0

# while senha_salva !=senha_digitada:
#     senha_digitada = input (f'Sua senha( {repeticoes})x: ')

#     repeticoes +=1

# print('Laço acima com repetições infinitas')

texto = 'Python '

novo_texto =''

for letra in texto:
    novo_texto+=f'*{letra}'
    print(letra)
print(novo_texto)