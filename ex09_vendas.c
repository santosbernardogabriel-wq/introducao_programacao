ALGORITMO MenuVendas
INÍCIO
  VAR vendas[2][2]: REAL
  VAR i, j, opcao: INTEIRO
  VAR total: REAL

  // Leitura da Matriz (i = filial, j = mês)
  PARA i DE 0 ATÉ 1 FAÇA // Linhas (Filiais)
    PARA j DE 0 ATÉ 1 FAÇA // Colunas (Meses)
      ESCREVA "Vendas [Filial ", i + 1, "] [Mês ", j + 1, "]: R$"
      LEIA vendas[i][j]
    FIM_PARA
  FIM_PARA

  // Menu de opções
  FAÇA
    ESCREVA "--- MENU VENDAS ---"
    ESCREVA "1) Total por filial (linha)"
    ESCREVA "2) Total por mês (coluna)"
    ESCREVA "3) Total geral"
    ESCREVA "0) Sair"
    ESCREVA "Escolha uma opção:"
    LEIA opcao

    SE opcao == 1 ENTÃO // Total por Filial (soma das linhas)
      PARA i DE 0 ATÉ 1 FAÇA
        total = vendas[i][0] + vendas[i][1]
        ESCREVA "Total Filial ", i + 1, ": R$ ", total
      FIM_PARA
      
    SENÃO SE opcao == 2 ENTÃO // Total por Mês (soma das colunas)
      PARA j DE 0 ATÉ 1 FAÇA
        total = vendas[0][j] + vendas[1][j]
        ESCREVA "Total Mês ", j + 1, ": R$ ", total
      FIM_PARA
      
    SENÃO SE opcao == 3 ENTÃO // Total Geral
      total = vendas[0][0] + vendas[0][1] + vendas[1][0] + vendas[1][1]
      ESCREVA "Total Geral de Vendas: R$ ", total
      
    SENÃO SE opcao == 0 ENTÃO
      ESCREVA "Saindo..."
    SENÃO
      ESCREVA "Opção inválida."
    FIM_SE
    ESCREVA "-------------------"
    
  ENQUANTO opcao != 0
FIM
