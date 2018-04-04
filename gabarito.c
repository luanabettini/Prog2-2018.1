#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
int criarvetor (int n);
void lervetor (int n);
void mostrarvetor (int n);
int *idades; // ponteiro utilizado na alocação
int criarvetor (int n)
{
 int result = 1;
 idades = (int *) malloc ((n)* sizeof(int)); // alocação
 if (idades == NULL)
 {
 printf ("\nErro reservando memoria");
 result = 0;
 }
 return result;
}
void lervetor (int n)
{
 int *cont = idades;
 for (int i = 0;i < n; i++)
 {
 printf ("\nDigite o elemento %d ", i + 1);
 scanf ("%d",cont++);
 }
}
void mostrarvetor (int n)
{
 int *cont = idades;
 for (int i = 0; i < n; i++)
 {
 printf ("\nO elemento %d eh %d ",i + 1, *cont++);
 }
}
main()
{
 int n;
 printf ("\n Quantas idades deseja cadastrar ? ");
 scanf ("%d",&n);
 if (criarvetor(n))
 {
 lervetor(n);
 mostrarvetor(n);
 getch();
 free (idades); // Liberar memória alocada
 }
} 
