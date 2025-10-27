ALGORITMO TestePrimo
INÍCIO
  VAR n, i, menorDivisor: INTEIRO
  VAR ehPrimo: LOGICO

  ehPrimo = VERDADEIRO
  menorDivisor = 0

  ESCREVA "Digite um número inteiro (n >= 2):"
  LEIA n

  // Testa divisores de 2 até n-1
  PARA i DE 2 ATÉ n - 1 FAÇA
    SE n % i == 0 ENTÃO
      ehPrimo = FALSO
      menorDivisor = i
      SAIR_PARA // Interrompe o laço, pois já achamos o menor divisor
    FIM_SE
  FIM_PARA

  SE ehPrimo == VERDADEIRO ENTÃO
    ESCREVA n, " é um número primo."
  SENÃO
    ESCREVA n, " não é um número primo."
    ESCREVA "Seu menor divisor (maior que 1) é: ", menorDivisor
  FIM_SE
FIM
