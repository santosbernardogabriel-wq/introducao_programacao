ALGORITMO ContaVogais
INÍCIO
  VAR linha[100]: TEXTO
  VAR contadorVogais, i: INTEIRO
  VAR char: CARACTERE

  contadorVogais = 0
  ESCREVA "Digite uma frase:"
  LEIA linha

  PARA i DE 0 ATÉ (COMPRIMENTO(linha) - 1) FAÇA
    // Converte o caractere para minúsculo para facilitar a comparação
    char = MINUSCULO(linha[i]) 
    
    SE char == 'a' OU char == 'e' OU char == 'i' OU char == 'o' OU char == 'u' ENTÃO
      contadorVogais = contadorVogais + 1
    FIM_SE
  FIM_PARA

  ESCREVA "Total de vogais: ", contadorVogais
FIM
