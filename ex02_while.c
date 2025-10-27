ALGORITMO SomaMediaSentinela
INÍCIO
  VAR num, soma, quantidade: INTEIRO
  VAR media: REAL

  soma = 0
  quantidade = 0

  ESCREVA "Digite números inteiros (digite -1 para parar):"
  LEIA num

  ENQUANTO num != -1 FAÇA
    soma = soma + num
    quantidade = quantidade + 1
    LEIA num
  FIM_ENQUANTO

  ESCREVA "Quantidade de números digitados: ", quantidade
  ESCREVA "Soma total: ", soma

  // Evita divisão por zero se o usuário digitar -1 primeiro
  SE quantidade > 0 ENTÃO
    media = (REAL)soma / quantidade
    ESCREVA "Média: ", media
  SENÃO
    ESCREVA "Nenhum número foi inserido."
  FIM_SE
FIM
