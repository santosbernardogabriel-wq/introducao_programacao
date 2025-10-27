ALGORITMO AnaliseVetor
INÍCIO
  VAR vetor[10]: INTEIRO
  VAR i, maior, menor: INTEIRO
  VAR soma: INTEIRO
  VAR media: REAL

  soma = 0

  // Leitura do vetor
  PARA i DE 0 ATÉ 9 FAÇA
    ESCREVA "Digite o valor ", i + 1, ":"
    LEIA vetor[i]
  FIM_PARA

  // Inicializa maior e menor com o primeiro elemento
  maior = vetor[0]
  menor = vetor[0]
  soma = vetor[0] // Inicia a soma

  // Processamento (começa do segundo elemento, índice 1)
  PARA i DE 1 ATÉ 9 FAÇA
    soma = soma + vetor[i]

    SE vetor[i] > maior ENTÃO
      maior = vetor[i]
    FIM_SE

    SE vetor[i] < menor ENTÃO
      menor = vetor[i]
    FIM_SE
  FIM_PARA

  media = (REAL)soma / 10

  ESCREVA "Maior valor: ", maior
  ESCREVA "Menor valor: ", menor
  ESCREVA "Média: ", media
FIM
