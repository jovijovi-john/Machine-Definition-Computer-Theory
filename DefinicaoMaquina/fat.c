#include <stdio.h>

// Máquina:
// V  = NxN
// X  = N
// Y  = N

// pi_x : X --> V,   pi_x(a) =  (n1 := a;)
// pi_y : V --> Y,   pi_y(n1) =  n2

// PI_F = { F, G}
// F : V --> V,   F(n1,n2) = (n1-n2, n2)
// G : V --> V,   G(n1,n2) = (n1, n2-n1)

// PI_T =
// T1 : V --> {v,f},  T1(n1,n2) = verd. se (n1 != n2)
//                                      senão falso
// T2 : V --> {v,f},  T2(n1,n2) = verd. se (n1 > n2)
//                                      senão falso

int fat(int n);
void main () {
  int n, r;

  scanf("%d", &n);
  r = fat(n);
  printf("Fatorial = %d\n", r);
  return;
}

int fat(int n) {

  int i;
  int f = 1;

  for (i = 1; i <= n; i++){
    f *= i;
  }

  return f;
}