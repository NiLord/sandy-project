#include <stdio.h>
#include <conio.h>
#include <windows.h>
#include <math.h>
int n;
int e;
float A, B, C, R, x1, x2;
float determinante;
float Y[5], U[5], O[5], X1R[2], X2R[2];
void menu();
void introducir();
void calcular();
void imprimir();
void salir();
void gotoxy(int x, int y) {
  HANDLE hcon;
  hcon = GetStdHandle(STD_OUTPUT_HANDLE);
  COORD dwPos;
  dwPos.X = x;
  dwPos.Y = y;
  SetConsoleCursorPosition(hcon, dwPos);
}

int main() {
  system("color 8B");
  gotoxy(35, 5);
  printf("UNIVERSIDAD TECNOLOGICA");
  gotoxy(34, 7);
  printf("CENTRO REGIONAL DE AZUERO");
  gotoxy(40, 9);
  printf("PROYECTO FINAL");
  gotoxy(24, 15);
  printf("CALCULOS DE RAICES CON LA ECUACION CUADRATICA");
  gotoxy(10, 21);
  printf("INTENGRANTES:");
  gotoxy(40, 23);
  printf("MARIA ESPINO");
  gotoxy(40, 25);
  printf("SANDY CORONADO");
  gotoxy(40, 27);
  printf("ROMAN CORNEJO");
  gotoxy(40, 29);
  printf("JUAN VALDEZ");
  gotoxy(40, 31);
  printf("JUAN VERGARA \n");
  printf("pulse ENTER para continuar con el programa");
  getch();
  menu();
  return 0;
}
void menu() {
  system("cls");
  gotoxy(10, 7);
  printf("MENU DE OPCIONES:");
  gotoxy(35, 9);
  printf("1- INTRODUCIR LOS VALORES DE LAS ECUACIONES");
  gotoxy(35, 11);
  printf("2- REALIZAR LOS CALCULOS");
  gotoxy(35, 13);
  printf("3- IMPRIMIR RESULTADOS");
  gotoxy(35, 15);
  printf("Contrario- SALIR DEL PROGRAMA \n");
  printf("Seleccione el menu \n");
  scanf("%d", &n);
  switch (n) {
    case 1:
      introducir();
      menu();
      break;
    case 2:
      calcular();
      menu();
      break;
    case 3:
      imprimir();
      menu();
      break;
    case 4:
      salir();
      break;
  }
}
void introducir() {
  for (e = 1; e <= 5; e++) {
    printf("Introducir los valores para la ecuacion %d \n", e);
    scanf("%f %f %f", &A, &B, &C);
    Y[e] = A;
    U[e] = B;
    O[e] = C;
  }
  printf("Datos insertados correctamente, enter para volver al menu principal");
  getch();
}

void calcular() {
  for (e = 1; e <= 5; e++) {
    R = sqrt((B * B) - (4 * A * C));
    x1 = -(B) + (R) / (2 * A);
    x2 = -(B) - (R) / (2 * A);
    X1R[e] = x1;
    X2R[e] = x2;
  }
  printf("Calculos realizados, presione enter para volver al menu");
  getch();
}

void imprimir() {
  for (e = 1; e <= 5; e++) {
    printf("La raiz positiva es:%f \n", x1);
    printf("La raiz negativa es:%f \n", x2);
  }
  getch();
}

void salir() { printf("Saliendo del programa"); }
