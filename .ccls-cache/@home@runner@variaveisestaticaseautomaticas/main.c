#include <stdio.h>

int main(void) {
  void teste(void);
  teste();
  teste();
  teste();
  teste();

  return 0;
}
void teste(void) {
  int variavellocalautomatica = 2;
  variavellocalautomatica *= 2;
  static int variavellocalestatica = 2;
  variavellocalestatica *= 2;
  printf("local automatica= %i\n", variavellocalautomatica);
  printf("local estatica= %i\n", variavellocalestatica);
}