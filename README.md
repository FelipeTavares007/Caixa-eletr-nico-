# 🏧 Simulador de Caixa Eletrônico

Programa em C++ que simula um caixa eletrônico no terminal, com autenticação por senha e menu de operações bancárias básicas.

## 📋 Funcionalidades

- 🔐 **Autenticação por senha**, com limite de 3 tentativas
- 💰 **Consulta de saldo**
- 💸 **Saque**, com verificação de saldo suficiente
- 🏦 **Depósito**
- 🚪 **Sair** do sistema

## 🛠️ Tecnologias

- C++
- Bibliotecas padrão: `iostream`, `string`, `iomanip`, `locale`

## 🚀 Como executar

### Pré-requisitos

- Um compilador C++ 

### Compilando e rodando

```bash
g++ caixa_eletronico.cpp -o caixa_eletronico
./caixa_eletronico
```

No Windows:

```bash
caixa_eletronico.exe
```

## 🔑 Como usar

1. Digite a senha do caixa (senha de teste: `1209`).
2. Após 3 senhas incorretas, o acesso é bloqueado.
3. No menu, escolha uma opção de 1 a 4:
