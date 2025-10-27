ALGORITMO ClassificadorNumero
INÍCIO
  VAR num: INTEIRO

  ESCREVA "Digite um número inteiro:"
  LEIA num

  // Verifica o sinal
  SE num > 0 ENTÃO
    ESCREVA "O número é POSITIVO."
  SENÃO SE num < 0 ENTÃO
    ESCREVA "O número é NEGATIVO."
  SENÃO
    ESCREVA "O número é ZERO."
  FIM_SE

  // Verifica a paridade
  // Nota: O número 0 é considerado par
  SE num % 2 == 0 ENTÃO
    ESCREVA "O número é PAR."
  SENÃO
    ESCREVA "O número é ÍMPAR."
  FIM_SE
FIM
