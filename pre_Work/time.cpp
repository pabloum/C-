#include <iostream>
#include <time.h>
#include <vector>

using namespace std;

void olaKase(){
  std::cout << "Hola qué hace" << '\n';
}


int main(int argc, char const *argv[]) {

  std::vector<int> array;

  for (size_t i = 0; i < 10; i++) {
    array.resize(i+1);
    std::cout << "Ingrese numero "; cin >> array[i];
    cout << "Acabó de ingresar " << array[i] << endl;
  }

  for (size_t i = 0; i < 10; i++) {
    std::cout << "array[" << i << "] = " << array[i]  << '\n';

  }

  // int *p;
  // p = new int[5];
  // for(int i=0;i<5;i++)
  //    *(p+i)=i;
  //
  // // realloc
  // int* temp = new int[6];
  // std::copy(p, p + 5, temp); // Suggested by comments from Nick and Bojan
  // delete [] p;
  // p = temp;

  time_t start, end;

  time (&start);
  time (&end);

  double diff = (difftime (end,start));

  while ( diff < 5){
    olaKase();
    std::cout << "Han transcurrido " << diff << " segundos" << '\n';
    time (&end);
    diff = (difftime (end,start));
  }



  return 0;
}

/*
#include <stdio.h>

time_t start);
.
.
.
<your code>
.
.
.
time (&end);
double dif = difftime (end,start);
printf ("Elasped time is %.2lf seconds.", dif );
*/
