//corrección del código en clase 
#include <stdio.h>

int main()
{
  int a,b,fact=1;
  printf("Escribe el número al que le quieres obtener su factorial:\n");
  scanf("%d",&a);
  if(a<0){
    printf("No se puede calcular el factorial de los numeros negativos");
    return 0;
  } else{
  for(b=a; b>1; b--)
  {
      fact=fact*b;
  }
  printf("El factorial de %d = %d \n", a, fact);
  getchar();
  return 0;
  }
}
