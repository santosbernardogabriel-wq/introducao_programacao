ALGORITMO MenuSalarios
INÍCIO
  VAR N, i, opcao: INTEIRO
  VAR salarios[10]: REAL
  VAR soma, media: REAL

  ESCREVA "Quantos salários deseja cadastrar (1 a 10)?"
  LEIA N
  // (Opcional: Adicionar validação para N estar entre 1 e 10)

  // Leitura dos salários
  PARA i DE 0 ATÉ N - 1 FAÇA
    ESCREVA "Digite o salário ", i + 1, ":"
    LEIA salarios[i]
  FIM_PARA

  // Menu de opções
  FAÇA
    ESCREVA "--- MENU SALÁRIOS ---"
    ESCREVA "1) Listar salários"
    ESCREVA "2) Média dos salários"
    ESCREVA "0) Sair"
    ESCREVA "Escolha uma opção:"
    LEIA opcao

    SE opcao == 1 ENTÃO
      ESCREVA "Lista de Salários:"
      PARA i DE 0 ATÉ N - 1 FAÇA
        ESCREVA "Salário ", i + 1, ": R$ ", salarios[i]
      FIM_PARA
      
    SENÃO SE opcao == 2 ENTÃO
      soma = 0
      PARA i DE 0 ATÉ N - 1 FAÇA
        soma = soma + salarios[i]
      FIM_PARA
      media = soma / N
      ESCREVA "Média dos salários: R$ ", media
      
    SENÃO SE opcao == 0 ENTÃO
      ESCREVA "Saindo..."
    SENÃO
      ESCREVA "Opção inválida."
    FIM_SE
    ESCREVA "---------------------"
    
  ENQUANTO opcao != 0
FIM
