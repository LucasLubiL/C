/*John Watson, mesmo após anos trabalhando ao lado de Sherlock Holmes, nunca conseguiu entender
como ele consegue descobrir quem é o culpado com tanta facilidade.
Em uma certa noite, Holmes falou mais do que devia e acabou contando o segredo a John.
“Elementar, meu caro Watson”, disse Sherlock Holmes. “Nunca é o mais suspeito, mas sim o
segundo mais suspeito”.
Após descobrir o segredo, John decidiu resolver um mistério por conta própria, para testar se aquilo
fazia sentido, ou era apenas mais um enigma peculiar de Holmes.
Então, para provar, dada uma lista com N inteiros, representando o quanto cada pessoa é suspeita,
ajude John Watson a encontrar o culpado.


ENTRADA
Cada caso de teste inicia com um inteiro N (2 ≤ N ≤ 1000), representando o número de suspeitos.
Em seguida haverá N inteiros distintos, onde o número representa o quanto a pessoa é suspeita. De
acordo com a classificação W dada por John Watson (1 ≤ W ≤ 10000), quanto maior o número, mais
suspeita é a pessoa.
O último caso de teste é indicado quando N = 0, o qual não deverá ser processado.


SAÍDA
Para cada caso de teste imprima uma linha, contendo um inteiro, representando o índice do culpado,
de acordo com o método citado.
*/


#include <stdio.h>
#include <stdlib.h>

int main()
{
    int N;

    int maior=0,segundo=0,cont2=0;

    scanf("%d",&N);

    while(N>0){
        int W[N];
        segundo=0;
        maior=0;
        cont2=0;
        for(int i=0;i<N;i++){
            scanf("%d",&W[i]);
        }

        for(int i=0;i<N;i++){
            if(maior<W[i]){
                maior=W[i];
            }
        }
        for(int i=0;i<N;i++){
           if(segundo<W[i] && W[i]<maior){
                segundo=W[i];
                cont2=i+1;
            }
        }
        printf("%d\n",cont2);
        scanf("%d",&N);
    }


    return 0;
}
