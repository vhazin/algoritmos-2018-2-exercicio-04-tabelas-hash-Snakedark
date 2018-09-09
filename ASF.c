/* André de Souza Ferreira 

Desafio 4- Tabelas Hash*/

# include "stdio.h"

int main() {

    int N, C, i, x, k = 0;

    /* Digite o número de casos de teste */
    scanf("%d", &N);
   
    int M[N], *m;
    m = M;
    // Digitando os casos //
    for (i = 0; i < N; i++) {

        scanf("%d%*c%d", &M[i], &C);
        int chave[C], *c, j = 0;
        c = chave;
        char ch;
        while (2 == scanf("%d%c", &x, &ch)) {

            c[j] = x;
            if (ch == '\n')
                break;

            j++;    
        }

        printf("\n");

        /* Imprimindo os resultados */
        while (k < m[i]) {

            printf("%d -> ", k);

            for (j = 0; j < C; j++) {

                if ((c[j] % m[i]) == k) {

                    printf("%d -> ", c[j]);

                }

            }

            printf("\n");

            k++;

        }

        k = 0;
        printf("\n\n");
       

    }
    
       
    return 0;

}