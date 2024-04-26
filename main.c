#include <stdio.h>

float MontoMensual() {
  float montomen;
  printf("Colocar el Monto Mensual: ");
  scanf("%f", &montomen);
  return montomen;
}

int TotalMeses() {
  int totalmeses;
  printf("Colocar total Meses: ");
  scanf("%d", &totalmeses);
  return totalmeses;
}

float TasaInteres() {
  float tasaanual;
  printf("Tasa interes: ");
  scanf("%f", &tasaanual);
  return tasaanual;
}

int main(void) {
  float montomen, tasaanual, tasamensual, mestotal, nmes, nmestotal;
  int totalmeses, i, nmont = 0;

  montomen = MontoMensual();
  totalmeses = TotalMeses();
  tasaanual = TasaInteres();

  tasamensual = tasaanual / 12;
  mestotal = ((montomen * tasamensual) / 100) + montomen;

  for(i = 1; i <= totalmeses; i++) {
    nmes = mestotal + montomen;
    nmestotal = (nmes * tasamensual) / 100;


    printf("Mes %d: %f (%f)\n", i, montomen, mestotal );

    mestotal = mestotal + montomen + nmestotal;
    montomen += montomen;
  }

  return 0;
}