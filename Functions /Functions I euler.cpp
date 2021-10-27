#include <iostream>

/*
Tenemos un número N <-- long long
Lo que queremos primero es cálcular los divisores primos.

Podriamos empezar a calcular los divisores y luego verificar si es primo. 
*/

int main(void)
{
  const long long N = 600851475143;

  for(long long ii = 2; ii < N ; ii++){
    
    if (N/ii == 0){
      //std::cout << ii << std :: endl;
      //Falta verificar que es primo
      long long largedivisor = N/ii; 
      bool isprime = true; 
        for (long long jj = 2; jj < largedivisor;jj++){
          if (largedivisor%jj == 0){
            isprime = false;
            break;

          }
        }
        if (isprime){
          std::cout << largedivisor << std::endl;
          break;
        }
        
    }


  }

  return 0;
}