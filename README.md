# Matriz

## Descrição
Este programa em C gera e exibe uma matriz retangular na saída padrão, com bordas representadas por caracteres específicos. A matriz é gerada com base na largura (x) e altura (y) fornecidas pelo usuário.

## Funcionalidade
A função `matriz(int x, int y)` imprime uma matriz de `x` colunas e `y` linhas, seguindo estas regras:
- Os cantos da matriz são representados pelo caractere `o`.
- As bordas superior e inferior são representadas pelo caractere `x` separado por espaços.
- As laterais são representadas pelo caractere `x`.
- O interior da matriz é preenchido com espaços em branco.

## Exemplo de Saída
Se `x = 5` e `y = 3`, a saída será:
```
o x x x o
x       x
o x x x o
```

## Uso
### Compilar o código:
```sh
gcc matriz.c -o matriz
```
### Executar o programa:
```sh
./matriz 5 3
```
Ou utilize a versão sem argumentos na `main` para testar com valores fixos:
```sh
./matriz
```

## Estrutura do Código
- `matriz(int x, int y)`: Função principal que gera e imprime a matriz.
- `main(int argc, char **argv)`: Função principal que recebe os valores via linha de comando.

## Regras e Restrições
- `x` e `y` devem ser maiores que zero.
- O programa verifica se os argumentos são válidos antes de processar a matriz.

## Autor
- [Nathan-N7](https://github.com/Nathan-N7)

