# Calculadora para Engenheiros e Arquitetos
Projeto desenvolvido para a disciplina de Laboratório de Técnicas de Programação, com o objetivo de auxiliar arquitetos e engenheiros no cálculo de áreas, volumes, conversões e estimativas de materiais usados em obras.
O sistema utiliza uma biblioteca própria implementada em C, tornando o código modular, limpo e reaproveitável.

Projeto desenvolvido por :   
João Pedro Melchiori - 845677
Pedro Henrique Marques Cintra - 846221

# Estrutura do Projeto
    calceng.h:
    - Declaração das funções disponiveis na biblioteca

    calceng.c:
    - A implementação completa das funções declaradas em calceng.h
    - Tratamento de erros

    main.c:
    - Interface do usuário
    - Exibir o menu
    - Ler as entradas do usuário


# Funcionalidades do Sistema
Cálculo de Áreas

Área de retângulo

Área de triângulo

Área de círculo

Cálculo de Volumes

Volume de prisma

Volume de cilindro

Conversões de Unidades

Estimativa de materiais


# INSTRUÇÕES PARA COMPILAR :
1. gcc main.c calceng.c -o calculadora -lm
2. ./calculadora
