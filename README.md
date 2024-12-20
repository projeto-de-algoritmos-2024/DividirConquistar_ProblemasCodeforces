# PROBLEMAS CODEFORCES

**Número da Lista**: 18<br>
**Conteúdo da Disciplina**: D&C<br>
## Alunos

| Matrícula  | Aluno                    |
| ---------- | ------------------------ |
| 22/2006169 | Natan da Cruz Almeida    |
| 22/1022408 | Paulo Henrique Lamounier |

## Sobre

Este projeto consta com 4 desafios resolvidos do Codeforces, sendo eles:

- **(Q1) - D. Permutation Transformation [link](https://codeforces.com/problemset/problem/1490/D):** Dada uma permutação `a` de números inteiros de 1 a `n`, você deve transformá-la em uma árvore binária.
    - O maior elemento da permutação se torna a raiz da árvore.
    - Os elementos à esquerda do maior formam a subárvore esquerda.
    - Os elementos à direita do maior formam a subárvore direita.
    - Para cada elemento da permutação, calcule sua profundidade na árvore (o número de arestas do caminho da raiz até o nó).
- **(Q2) - D. a-Good String [link](https://codeforces.com/problemset/problem/1385/D):** Dada uma string `s` de letras minúsculas, você precisa transformar essa string em uma "c-good string" para o valor `c = 'a'`.
     A string é considerada `c-good` se pelo menos uma das seguintes condições for atendida:
    - Para a string `s = "cdbbaaaa"`, ela é uma `a-good string` porque:
        - A segunda metade (`aaaa`) é composta apenas por `a`.
        - A primeira metade (`cdbb`) é uma `b-good string`.
        - A primeira metade de `cdbb` (`cd`) é uma `c-good string`.
    - Determinar o número mínimo de mudanças necessárias para transformar a string `s` em uma `a-good string`.
- **(Q3) - D. Masha and a Beautiful Tree: [link](https://codeforces.com/contest/1741/problem/D)** O problema pede para organizar as folhas de uma árvore binária completa em ordem crescente da esquerda para a direita. Masha pode inverter os filhos de qualquer nó interno da árvore. O objetivo é encontrar o número mínimo de inversões necessárias para alcançar essa organização ou indicar se é impossível.
- **(Q4) - B. Equivalent Strings: [link](https://codeforces.com/contest/559/problem/B)** Verifique se duas strings de mesmo comprimento são equivalentes, podendo ser idênticas ou reorganizadas em metades equivalentes de forma recursiva. Retorne "YES" se forem equivalentes, caso contrário, "NO".

## Vídeos

* **Solução Q1 e Q2:** [link](https://youtu.be/Q4cIWN53WJQ)

* **Solução Q3:** [link](https://youtu.be/pcDF0yMNnxc)
  
* **Solução Q4:** [link](https://youtu.be/pcDF0yMNnxc?si=VwpCquslS61G01Yt&t=444)

## Instalação

**Linguagem**: C++<br>
**Framework**: Não possui frameworks<br>
Para utilizar e testar os programas, primeiro é necessário ter um compilador de c/c++ instalado em sua máquina, caso não tenha, utilize esse fórum para baixar  

> [acesse-aqui](https://www.geeksforgeeks.org/installing-mingw-tools-for-c-c-and-changing-environment-variable/)

Após instalar o compilador em sua máquina, clone o repositório utilizando

``` bash

git clone <link do repisotório>

```

## Uso

Após clonar o repositório, entre na pasta via terminal e compile os códigos utilizando

``` bash

g++ -Wall -o <nome_arquivo_compilado> <arquivo_para_compilar>

```

ex:

``` bash

g++ -Wall -o main Q1.cpp

```

Um arquivo executável (.exe) será criado, para realizar os testes, utilize

```bash

./main

```

Dessa forma será possível utilizar os casos de teste dos programas. Também é possível colocar os casos de teste em algum arquivo de texto e utilizar o comando cat para testá-los

``` bash

cat <arquivo.txt> | ./main

```