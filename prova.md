# Prova

A prova foi dividida em três etapas e seguiu um modelo similar a avaliações de escola/faculdade, ao invés do formato de programações competitivas como a [ICPC](https://pt.wikipedia.org/wiki/ACM_International_Collegiate_Programming_Contest). Veja mais sobre o regulamento [aqui](./regulamento.pdf).

A solução de cada problema está nas pastas `round`. Ex: o problema 3 da etapa 1 está em `round-1/3.cpp`.

Obs: as questões são apenas números ímpares devido a estrutura do formulário da prova.

## Etapa 1 - Estruturas de Dados

### Problema 1

Crie em um vetor com `N` entradas onde `5 ≤ N ≤ 10` de valores inteiros. Reorganize o vetor de forma que o menor valor troque de posição com o valor do índice `0`; e o maior valor do vetor troque de posição com o valor do índice `N-1`.

### Problema 3

Crie uma pilha de dados que armazene valores inteiros com alocação dinâmica. A pilha deverá ter apenas 5 valores inteiros. Insira os dados e apresente a pilha criada. Remova dois valores internos da pilha e apresente depois novamente os dados.

### Problema 5

Resumidamente falando, o DNA é um conjunto de nucleotídeos (existem quatro: adenina [A], citosina [C], guanina [G] e tiamina [T]), que se combinam. As combinações formam nosso genoma ou de qualquer ser vivo que possua um código genético do tipo:

`AGCTTTTCATTCTGACTGCAACGGGCAATATGTCTCTGTGTGGATTAAAAA`

Algumas perguntas que podemos indagar seriam:

1. Quantos nucleotídeos de cada tipo existem nesta sequência de DNA?
2. Qual é o tamanho dessa cadeia?

Faça um código utilizando o conceito de vetor não ordenado, utilizando o método insere e pesquisar do vetor não ordenado que responda as questões 1 e 2.

### Problema 7

Crie um algoritmo, usando uma Pilha, que inverte as letras de cada palavra de um texto terminado por ponto (.) preservando a ordem das palavras. Por exemplo, dado o texto: `ESTE EXERCÍCIO É MUITO FÁCIL`. A saída deve ser: `ETSE OICÍCREXE E OTIUM LICÁF`.

## Etapa 2 - Ordenação

### Problema 1

Crie um vetor com os primeiros 10 números Naturais. Utilize o Método BubbleSort para ordenação e posicione os valores de forma que seja necessário realizar apenas 5 movimentações de trocas para ordenar todas as chaves nas posições corretas. O vetor não deve está parcialmente ordenado (5,6.. 7,8,9.. 2,3).

### Problema 3

Utilize o Método BubbleSort e SelectionSort para ordenação no vetor abaixo. Adicione modificações em cada Método e apresente a quantidade de movimentações ou trocas de chaves necessárias para cada algoritmo.

`10 8 6 4 2 1`

## Etapa 3 - Análise de Algoritmos

### Problema 1

Sabe-se que a Classe de Problemas de representação de custo do Método BubbleSort é O(n2), conhecida como complexidade quadrática. Com base no algoritmos abaixo, ainda que o array esteja previamente ordenado, o algoritmo ainda realizará seu processo de comparações. Quando não há mais trocas ou movimentações a fazer, podemos considerar a hipótese que os dados já estejam ordenados. Analise o código-fonte do BubbleSort e altere de forma que o algoritmo possa ver quando não há movimentações ou trocas, interrompendo o processo do Método e apresentando o vetor final.

 ![image](https://user-images.githubusercontent.com/26108090/115129297-f2bae480-9fba-11eb-9bf6-56e038add0ec.png)
