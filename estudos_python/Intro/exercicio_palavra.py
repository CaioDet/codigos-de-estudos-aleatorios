"""
Faça um jogo para o usuário adivinhar qual
a palavra secreta.

- Você vai propor uma palavra secreta
qualquer e vai dar a possibilidade para
o usuário digitar apenas uma letra.

- Quando o usuário digitar uma letra, você 
vai conferir se a letra digitada está
na palavra secreta.

    - Se a letra digitada estiver na
    palavra secreta; exiba a letra;
    - Se a letra digitada não estiver
    na palavra secreta; exiba *.
Faça a contagem de tentativas do seu
usuário.

"""
# Definição da palavra secreta
palavra_secreta = "python"

# Variáveis auxiliares
tentativas = 0
palavra_descoberta = ["*" for _ in palavra_secreta]

# Tela inicial
print('Jogo da palavra secreta!')
print("Palavra: ", "".join(palavra_descoberta))

# Criar loop para o usuário
while "*" in palavra_descoberta:  # Jogo continua enquanto houver letras ocultas
    letra = input('\nDigite uma letra: ').lower()  # Usuário insere uma letra
    tentativas += 1

    # Verifica se a letra está na palavra secreta
    if letra in palavra_secreta:
        # Substituir '*' pela letra correta
        for i, l in enumerate(palavra_secreta):
            if l == letra:
                palavra_descoberta[i] = letra  # Corrigido: atribuindo a letra ao índice
    else:
        print('Letra não encontrada!')

    # Exibe progresso da palavra descoberta
    print("Palavra: ", "".join(palavra_descoberta))

# Mensagem final após o usuário descobrir a palavra
print(f"\nParabéns! Você descobriu a palavra '{palavra_secreta}' em {tentativas} tentativas.")
