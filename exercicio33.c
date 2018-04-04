#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void soma(){ 
    float valor1, valor2, result; 
    printf("\nDigite o 1 valor: ");
    scanf ("%f", &valor1); 
    printf("Digite o 2 valor: ");
    scanf ("%f", &valor2); 
    result = valor1 + valor2;
    printf("\nResultado: %.2f\n\n ", result);
    system ("pause"); 
    system("cls"); 
    menu(); 
}
void subtrai(){ 
    float valor1, valor2, result;
    printf("\nDigite o 1 valor: ");
    scanf ("%f", &valor1); 
    printf("Digite o 2 valor: ");
    scanf ("%f", &valor2); 
    result = valor1 - valor2; 
    printf("\nResultado: %.2f\n\n ", result); 
    system ("pause"); 
    system("cls"); 
    menu(); 
}
void divide(){
    float valor1, valor2, result;
    printf("\nDigite o 1 valor: ");
    scanf ("%f", &valor1);
    printf("Digite o 2 valor: ");
    scanf ("%f", &valor2);
    result = valor1 / valor2;
    printf("\nResultado: %.2f\n\n ", result);
    system ("pause");
    system("cls");
    menu();
}
void multiplica(){
    float valor1, valor2, result;
    printf("\nDigite o 1 valor: ");
    scanf ("%f", &valor1);
    printf("Digite o 2 valor: ");
    scanf ("%f", &valor2);
    result = valor1 * valor2;
    printf("\nResultado: %.2f\n\n ", result);
    system ("pause");
    system("cls");
    menu();
}
void fatorial(){
    int nFat;
        nFat = 1;

    if (n == 0){
        return 1;
    }
    else if (n < 0){
        printf("Erro! Nao existe fatorial de numero negativo");
    }
    while (n >= 1){
        nFat = nFat * n;
        n = n - 1;
    }
    return nFat;
    system ("pause");
    system("cls");
    menu();
}
void exponencial(){
    float ex, termo;
    int num,fatorial;
        ex = 0;
        num = 0;

    while (termo > 0.0001){
        termo = pow(x,num)/fatorial(num);
        num = num + 1;
        ex = ex + termo;
    }
		case 5:
            fatorial();
        break;
		
		case 6:
            exponencial();
        break;
		
		case 7:
            radiacao();

        break;

        case 8:
            system("exit");
            printf("\nFinalizando...\n\n"); 
        break; 

        default:
            printf("\nComando invalido, tente novamente!\n\n"); 
            system ("pause"); 
            system ("cls"); 
            menu();
            break; 
    }
}
int main()
{
    menu();
    system("pause"); 
    return 0;
}
