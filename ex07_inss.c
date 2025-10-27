ALGORITMO MenuRHSimples
INÍCIO
  VAR salario, inss, valorHora, totalExtras: REAL
  VAR horasExtras: INTEIRO
  VAR opcao: INTEIRO

  ESCREVA "Digite o salário mensal do colaborador: R$"
  LEIA salario

  FAÇA
    ESCREVA "--- MENU RH ---"
    ESCREVA "1) Calcular INSS (8%)"
    ESCREVA "2) Calcular valor das horas extras (50%)"
    ESCREVA "0) Sair"
    ESCREVA "Escolha uma opção:"
    LEIA opcao

    SE opcao == 1 ENTÃO
      inss = salario * 0.08
      ESCREVA "Valor do INSS: R$ ", inss
    SENÃO SE opcao == 2 ENTÃO
      ESCREVA "Digite a quantidade de horas extras:"
      LEIA horasExtras
      
      valorHora = salario / 220
      // Adicional de 50% significa multiplicar por 1.5
      totalExtras = (valorHora * 1.5) * horasExtras 
      
      ESCREVA "Valor total das horas extras: R$ ", totalExtras
    SENÃO SE opcao == 0 ENTÃO
      ESCREVA "Saindo do sistema..."
    SENÃO
      ESCREVA "Opção inválida. Tente novamente."
    FIM_SE
    ESCREVA "----------------"

  ENQUANTO opcao != 0
FIM
