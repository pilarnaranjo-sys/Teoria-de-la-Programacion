#include <stdio.h>
void valorR(int numClientes);
float valorC(int numCliente, float *totalR);

int main() {
  int numClientes;

  printf("Ingrese la cantidad de clientes: ");
  scanf("%d", &numClientes);
  valorR(numClientes);
  return 0;
}

void valorR(int numClientes){
  float totalR = 0;
  for (int i = 1; i <= numClientes; i++) {
    valorC(i, &totalR);
  }
  printf("El valor total recaudado es: $%.2f\n", totalR);
}

float valorC(int numCliente, float *totalR) {
  int tipo, horas;
  float costo = 0;
  float pagar;

  printf("Cliente %d\n", numCliente);
  do {
    printf("Ingrese el tipo de consola (1=PlayStation, 2=Xbox, 3=Nintendo): ");
    scanf("%d", &tipo);

    if (tipo < 1 || tipo > 3) {
      printf("Consola no valida, intente nuevamente.\n");
    }
  } while (tipo < 1 || tipo > 3);

  printf("Horas de uso: ");
  scanf("%d", &horas);
  if (tipo == 1)
    costo = 2.50;
  else if (tipo == 2)
    costo = 2;
  else if (tipo == 3)
    costo = 1.50;

  pagar = costo * horas;
  printf("El valor a pagar es: $%.2f\n", pagar);
  *totalR = *totalR + pagar;
  return 0;
}
