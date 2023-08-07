# 2022-LIS-LDS

# Trabalho Prático 3

```
DCC215 - Algoritmos 1
Igor Joaquim da Silva Costa
```
## 1. Introdução

Oproblemapropostofoidescobrirqualamaiorsequênciaderolosqueumvendedor
detecidospoderiacolocaremsuaprateleira.Maisprecisamente,éapresentadaumasequência
deroloseseuspesos.Paramontaraprateleira,ovendedoroptapororganizarosrolôsem
ordemdecrescentedepeso,apartirdaordemcomqueelessãoapresentados,colocandoum
novoroloàdireitaouàesquerdadasequênciajáformada.Dessaforma,aprateleiraidealé
aquela onde o maior número de rolos é disposto.
Pararesolveroproblemacitado,cadarolofoitratadocomoumnúmeroemumvetor,
onde,apartirdele,devia-secalcularsub-sequênciascrescentesedecrescentesmáximasque
representamaprateleiramontada,paracadaelemento.Assim,aprateleiraidealinicialmenteé
formada pelo elemento que maximiza tais subsequências,comaspróprias subsequências
sendo a configuração da prateleira. Nessesentido, o problema apresentado éreduzido à
encontrar asmaioressubsequênciascrescentesedecrescentespossíveisdeseremformadas
paratodorolo,após,encontrarqualrolopossuimaiorsomadesubsequências.Diantedisso,
foiimplementadoumalgoritmopolinomialdotipoProgramaçãoDinâmicacapazderesolver
o problema.
Diantedoexposto,adocumentaçãopresentepossuicomoobjetivodetalharcomoo
sistemafoimodelado(Seção2),oquãoeficienteelepodeser(Seção3).Porfim,oprojetoé
sumarizado junto com os aprendizados gerados durante a produção do trabalho(Seção 4).

## 2. Modelagem

Estaseçãotemcomoobjetivodiscutirasdecisõesquelevaramàatualmodelagemdo
programa.

## 2.1 LIS e LDS

Comoelucidadonaseção1,oproblemaapresentadopodeserreduzidoaoproblemaà
encontrar sequências decrescentes e crescentes. O motivo dissose dá pela naturezado


problema.Aoobservarcomoovendedormontaaprateleiraapósinseriroprimeiroelemento,
fica nítido que os elementos a direitado primeiro elemento na prateleira formam uma
sequênciadecrescente,eoselementosadireita,umacrescente-considerandoaordemcom
que os elementos são selecionados a partir da entrada.
Assim,nocontextoapresentado,écalculadooLIS(LongestIncreasingSubsequence)e
LDS(Longest Decreasign Subsequence) para cada elemento do array, considerando as
seguintes equações de recorrência, onde N = tamanho da entrada:

LIS(I) = 1 + max{LIS(J)}, tal que I<J<=N e ARR[I] < ARR[J], se J existir
LIS(I) = 1, caso contrário

LDS(I) = 1 + max{LDS(J)}, tal que I<J<=N e ARR[I] > ARR[J], se J existir
LDS(I) = 1, caso contrário

## 2.2 Estrutura de Dados

Pararepresentaroarraydeentrada,oarraydeLDSeoarraydeLIS,foiusadootipo
padrão vector do c++.

## 3. Análise de complexidade

## 3.1 Espaço

SejaNotamanho daentrada,inicialmente,sãocriadosdoisvetoresdeNposições
pararepresentaroLDSeoLIS,alémdovetordeentrada.Assim,acomplexidadedeespaço
se torna𝑂(𝑁)na quantidade de rolos.

## 3.2 Tempo

```
Para análise de tempo, considere N o número de rolos.
```
## 3.2.1 Função de recorrência

ParaseresolveroLISeoLDS,sãofeitasoperaçõesiterativasusandooconceitode
programação dinâmcia. Tomando as equações de recorrência:


_LIS(I) = 1 + max{LIS(J)}, tal que I<J<=N e ARR[I] < ARR[J], se J existir
LIS(I) = 1, caso contrário_

Para cada elemento i da entrada, é procurado iterativamente o valor de j, que pode ser
qualquer valor entre j e N. Dessa forma, o número de operações cresce como uma progressão
aritmética da forma:
𝑁(𝑁+ 1 )/
Ou seja, O(𝑁^2 ) no tamanho da entrada.
No que tange o LDS, o tempo de execução é equivalente ao cálculo do LIS. Além
disso, é necessário procurar qual i que maximiza a soma LDS(i) + LIS(i). Essa busca é feita
de forma iterativa, gastando O(𝑁) passos. Logo,o algoritmo para resolver o problema cresce
quadraticamente no número de rolos, visto que

```
O(𝑁^2 ) + O(𝑁^2 ) + O(𝑁) = O(𝑁^2 ).
```
## 4. Conclusões

Com o intuito de descobrirquala maiorsequência derolos queum vendedorde
tecidos poderia colocar em sua prateleira, foi implementado um programa que utiliza
algoritmos de programação dinâmica para resolver o problema.
Duranteoprojetodosistemaforamlevadasemconsideraçãonãosóaspectospráticos
da implementaçãode umamodelagemcomputacional,mastambémcomoalinguagemde
programaçãoescolhidapoderia serumaferramentaútilparachegarno objetivoesperado.
Todaaquestãodemapearummini-mundodeinteresseemummodelocomputacionalrobusto
semostroubastanteprodutiva,levandooalunoapensaremformascriativasde seresolver e
entender oproblema,tendocomoresultadoum extensoaprendizadosobrecomo pensar,
questionar e implementar um algoritmo de programação dinâmicana prática.Porfim,o
tempo extra usado para projetar o sistema trouxe várias recompensas no sentido da
implementação, sendo um aspecto a ser levado para trabalhos futuros.
Nessesentido,todoofluxodetrabalhofoiessencialparaaconsolidaçãodeconteúdos
aprendidos emsala, além de apresentar,de formaprática,comosoftwaresmaiores, mais
consistentes, robustos e inteligentes são projetados e implementados.


## 5. Instruções para compilação e execução:

## 5.1 Compilação

Existempartesdoprogramaquesãocompatíveisapenasàsversõesmaisrecentesda
linguagem c++, dito isso, deve-se seguir as seguintes configurações para a compilação:

```
Linguagem: C++
Compilador: Gnu g++
Flags de compilação:-std=c++11 -g
Versão da linguagem: standard C++1 1
Sistema operacional (preferência): distribuições baseadas no kernel Linux 5.15.
```
Ocomandoparacompilaroprogramaautomaticamenteestápresentenoarquivo **“Makefile”**
esuaexecuçãoéchamadapelocomando **“makeall”** .Destemodo,oexecutável“tp03”estará
compilado e pronto para ser utilizado.

### 5.2 Execução

```
Seguem as instruções para a execução manual:
```
1. Certifique-se que o compilável foigeradode maneiracorreta,sealgum problema
    ocorrer, execute o comando “make all” presente no “Makefile”.
2. Uma vez que os passos anteriores foram cumpridos, executeo programa com o
    comando: ./tp03 < Teste01.txt )
3. A saída será impressa no terminal.


