# Definição da função para escolher o personagem
def escolher_personagem():
    print("Escolha uma classe de personagem:")
    print("1. Mago")
    print("2. Guerreiro")
    print("3. Arqueiro")
    
    escolha = input("Digite o número da sua escolha (1, 2 ou 3): ")
    
    # Convertendo a escolha para um número inteiro
    escolha = int(escolha)
    
    if escolha == 1:
        personagem = "Mago"
        magia = 80
        força = 30
        defesa = 40
        descricao = ("O mago usa magia poderosa para derrotar seus inimigos e proteger seus aliados. "
                     "Alta em magia, moderada em defesa e baixa em força.")
    elif escolha == 2:
        personagem = "Guerreiro"
        magia = 20
        força = 80
        defesa = 70
        descricao = ("O guerreiro é forte e corajoso, especializado em combate corpo a corpo. "
                     "Alta em força e defesa, baixa em magia.")
    elif escolha == 3:
        personagem = "Arqueiro"
        magia = 50
        força = 60
        defesa = 50
        descricao = ("O arqueiro é ágil e preciso, especialista em ataques à distância com arcos e flechas. "
                     "Moderada em magia, força e defesa.")
    else:
        print("Escolha inválida. Por favor, escolha um número entre 1 e 3.")
        return escolher_personagem()  # Chama a função novamente em caso de escolha inválida
    
    # Exibindo as informações do personagem
    print(f"Você escolheu {personagem}.")
    print(descricao)
    print(f"Atributos: Magia = {magia}, Força = {força}, Defesa = {defesa}")
    
    return personagem, magia, força, defesa

# Definição da função principal do jogo
def jogo():
    print("Bem-vindo ao Mundo!")
    nome = input("Digite seu nome: ")
    
    print(f"Seja bem-vindo {nome}! Agora escolha a sua classe de personagem.")
    
    personagem, magia, força, defesa = escolher_personagem()
    
    print(f"\n{nome}, escolha o seu caminho!")
    porta = input("Escolha a sua porta (1 ou 2): ")
    
    # Convertendo a escolha da porta para um número inteiro
    porta = int(porta)
    
    if porta == 1:
        print('Você escolheu a porta certa!')
        porta_um = input('Agora escolha seu prêmio (1 ou 2): ')
        
        # Convertendo a escolha do prêmio para um número inteiro
        porta_um = int(porta_um)
        
        if porta_um == 1:
            print('Você encontrou uma espada!')
        else:
            print('Baú vazio')
    else:
        print('Você escolheu a porta errada!')

# Executando o jogo
jogo()
