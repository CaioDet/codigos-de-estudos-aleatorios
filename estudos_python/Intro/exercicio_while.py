""" Exercício While
Iterando com stings while

"""

nome = 'Caio Vinicius Detoni'


ind = 0
novo_nome = ' '

while ind < len(nome):
    letra = nome[ind]
    novo_nome += f'*{letra}'
    ind += 1
novo_nome += '*'
print(novo_nome)

#print : *C*a*i*o* *V*i*n*i*c*i*u*s* *D*e*t*o*n*i*