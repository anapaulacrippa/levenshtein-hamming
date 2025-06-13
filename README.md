# Projeto de Integração C, Python e Bibliotecas Externas: Levenshtein e Hamming

Projeto prático desenvolvido para a disciplina de **Programação para Interfaceamento de Hardware e Software** da Universidade Estadual de Maringá, ministrada pelo professor Marcelo de Gomensoro Malheiros.

## 1. Objetivos

Esse projeto tem como principal objetivo demonstrar a integração entre:

- Uma biblioteca externa em C;

- Uma aplicação em C com interpretador embutido (PocketPy);

- Um script em Python que chama a função C, expostas via PocketPy;

## 2. Funcionalidades

- Cálculo da distância de **Levenshtein** entre duas strings;

- Cálculo da distância de **Hamming** entre duas strings de mesmo comprimento;

- Chamada das funções C diretamente a partir de um script Python;

- Exibição dos resultados no terminal com base em pares de testes pré-definidos;

## 3. Estrutura do projeto

```
├── include/
│ ├── hamming.h
│ └── levenshtein.h
│ └── pocketpy.h
├── hamming.c
├── levenshtein.c
├── main.c
├── pocketpy.c
├── script.py
├── Makefile
├── LICENSE
└── README.md
```


## 4. Bibliotecas externas utilizadas

- **PocketPy** interpretador Python embutido. Disponível em: [https://github.com/pocketpy/pocketpy](https://github.com/pocketpy/pocketpy)

- **Levenshtein (por Titus Wormer)**: algoritmo de cálculo da distância entre strings (adaptado para integração). Disponível em: [https://github.com/wooorm/levenshtein.c] (https://github.com/wooorm/levenshtein.c)

## 5. Licenciamento

Este projeto utiliza a licença MIT, conforme recomendação da biblioteca do algoritmo de Levenshtein e do interpretador PocketPy.

Ver arquivo [LICENSE](LICENSE) para mais detalhes.

## 6. Como compilar e executar

### Pré-requisitos

- Compilador C (recomenda-se `gcc`);

- Ambiente que suporte Makefile.

### Comandos disponíveis

- `make`  
  Compila todos os arquivos e gera o executável `main`.

- `make run`  
  Executa o programa principal, que interpreta o script Python (`script.py`) e exibe os resultados das distâncias.

- `make clean`  
  Remove arquivos objetos (`.o`) e o executável `main`.

### Exemplo de saída esperada:

