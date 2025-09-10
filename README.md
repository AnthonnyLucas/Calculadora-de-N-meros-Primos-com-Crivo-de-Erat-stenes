# Calculadora de Números Primos com Crivo de Eratóstenes

Este é um programa de console, desenvolvido em C++, projetado para encontrar e listar todos os números primos em um intervalo de 1 até um número N fornecido pelo usuário. A implementação utiliza o **Crivo de Eratóstenes**, um algoritmo clássico e eficiente para essa finalidade.

## ✨ Funcionalidades

- **Cálculo Eficiente:** Utiliza o Crivo de Eratóstenes para encontrar todos os primos até N com alta performance.
- **Interface Interativa:** Executa em um loop contínuo, permitindo ao usuário testar diferentes valores de N sem reiniciar o programa.
- **Saída Clara:** Exibe o valor de N, a lista de primos encontrados e a quantidade total.
- **Validação de Entrada:** O código trata entradas inválidas, como textos, números negativos ou nulos, guiando o usuário a inserir um dado correto.
- **Saída Elegante:** O usuário pode encerrar o programa a qualquer momento digitando `0`.

## 🛠️ Pré-requisitos

Para compilar e executar este projeto, você precisará de:

1.  Um **compilador C++**, como o **g++**. A forma mais recomendada de obtê-lo no Windows é através do **MSYS2 com MinGW-w64**.
2.  **(Opcional, mas recomendado)** O **Git** para clonar o repositório.

## 🚀 Como Baixar e Executar

Siga este passo a passo detalhado para rodar o projeto em sua máquina local.

### Passo 1: Instalação do Compilador (g++ no Windows)

Se você ainda não tem o compilador `g++` instalado e configurado no PATH do seu sistema, siga estas instruções:

1.  **Baixe e Instale o MSYS2:** Acesse [https://www.msys2.org/](https://www.msys2.org/) e instale o MSYS2.
2.  **Instale o Toolchain do Compilador:** Abra o terminal do MSYS2 (UCRT64) e execute os seguintes comandos:
    ```sh
    # Atualiza o gerenciador de pacotes
    pacman -Syu

    # Instala o compilador g++ e outras ferramentas essenciais
    pacman -S --needed base-devel mingw-w64-ucrt-x86_64-toolchain
    ```
3.  **Adicione ao PATH do Windows:** Adicione o diretório do compilador às variáveis de ambiente do Windows. O caminho geralmente é:
    `C:\msys64\ucrt64\bin`
4.  **Verifique a Instalação:** Abra um **novo** terminal (PowerShell ou CMD) e digite `g++ --version`. Se uma versão for exibida, a instalação foi bem-sucedida.

### Passo 2: Baixando o Projeto

1.  Abra o terminal de sua preferência.
2.  Clone o repositório para a sua máquina (substitua pela URL do seu repositório):
    ```sh
    git clone [https://github.com/SEU-USUARIO/SEU-REPOSITORIO.git](https://github.com/SEU-USUARIO/SEU-REPOSITORIO.git)
    ```
3.  Navegue até a pasta do projeto:
    ```sh
    cd SEU-REPOSITORIO
    ```

### Passo 3: Compilando o Código

Dentro da pasta do projeto, execute o seguinte comando para compilar o arquivo `primos.cpp` (ou o nome que você deu a ele):

```sh
g++ primos.cpp -o primos.exe -std=c++11
```
* `g++ primos.cpp`: Invoca o compilador para o arquivo de código-fonte.
* `-o primos.exe`: Especifica que o arquivo executável de saída se chamará `primos.exe`.
* `-std=c++11`: Garante a compatibilidade com o padrão C++11 ou superior.

### Passo 4: Executando o Programa

Após a compilação bem-sucedida, um arquivo `primos.exe` será criado. Para executá-lo, digite:

```sh
./primos.exe
```

## 💻 Exemplo de Uso

Após executar o programa, o terminal ficará assim:

```
Digite um numero inteiro N > 0 (ou 0 para sair): 30

----------------------------------------
Valor de N: 30
----------------------------------------
Numeros primos encontrados:
2 3 5 7 11 13 17 19 23 29

Quantidade de numeros primos encontrados: 10
----------------------------------------

Digite um numero inteiro N > 0 (ou 0 para sair): 100

----------------------------------------
Valor de N: 100
----------------------------------------
Numeros primos encontrados:
2 3 5 7 11 13 17 19 23 29 31 37 41 43 47 53 59 61 67 71 73 79 83 89 97

Quantidade de numeros primos encontrados: 25
----------------------------------------

Digite um numero inteiro N > 0 (ou 0 para sair): 0
Encerrando o programa...
```
