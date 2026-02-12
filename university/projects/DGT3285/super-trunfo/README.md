# 🃏 Super Trunfo - Desafio Nível Novato

## 📋 Descrição do Projeto

Neste primeiro nível, o objetivo é construir a base do jogo **Super Trunfo de Países**: um sistema para cadastrar cartas com informações sobre cidades. Este projeto pratica a leitura de dados do usuário, armazenamento em variáveis e exibição dessas informações na tela.

---

## 🎯 O que você vai fazer

Criar um programa em C que permita ao usuário inserir os dados de **duas cartas** do Super Trunfo.

### Dados de Cada Carta

| Campo | Descrição | Tipo |
|-------|-----------|------|
| **Estado** | Uma letra de 'A' a 'H' (representando um dos oito estados) | `char` |
| **Código da Carta** | Letra do estado + número de 01 a 04 (ex: A01, B03) | `char[]` |
| **Nome da Cidade** | O nome da cidade | `char[]` |
| **População** | Número de habitantes da cidade | `int` |
| **Área** | Área da cidade em km² | `float` |
| **PIB** | Produto Interno Bruto da cidade | `float` |
| **Pontos Turísticos** | Quantidade de pontos turísticos | `int` |

---

## 📤 Exemplo de Saída

Após o usuário inserir os dados, o programa deve exibir as informações de forma organizada:

```
Carta 1:
Estado: A
Código: A01
Nome da Cidade: São Paulo
População: 12325000
Área: 1521.11 km²
PIB: 699.28 bilhões de reais
Número de Pontos Turísticos: 50

Carta 2:
Estado: B
Código: B02
Nome da Cidade: Rio de Janeiro
População: 6748000
Área: 1200.25 km²
PIB: 300.50 bilhões de reais
Número de Pontos Turísticos: 30
```

---

## ✅ Requisitos Funcionais

- ✓ O programa deve ler corretamente os dados de **duas cartas** via entrada padrão (teclado)
- ✓ O programa deve armazenar os dados em **variáveis apropriadas**
- ✓ O programa deve exibir os dados de forma **clara e organizada**

## 📐 Requisitos Não Funcionais

- **Usabilidade**: Interface simples com instruções claras
- **Legibilidade**: Código bem indentado com comentários explicativos
- **Corretude**: Sem erros de compilação ou execução

---

## ⚠️ Simplificações do Desafio

- 📌 Implementar apenas o cadastro e exibição de **duas cartas**
- 📌 Focar somente em: **leitura → armazenamento → exibição**
- 📌 **NÃO usar**:
  - Estruturas de repetição (`for`, `while`)
  - Estruturas de decisão (`if`, `else`)
  - Comparação entre cartas
- 📌 Código deve ser uma **sequência simples de instruções**

---

## 🚀 Como Compilar e Executar

```bash
# Compilar
gcc super-trunfo.c -o super-trunfo

# Executar
./super-trunfo
```

---

## 👨‍💻 Autor

**Derecky Costa**  
Disciplina: [DGT3285] Introdução à programação de computadores