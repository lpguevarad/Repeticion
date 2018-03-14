#include <iostream>
 

double swhile (int N)

{
  int i=1, sum = 0;
  while (i<=N){
    sum += i;
    i++;
  }

  return sum;
}  

  double sfor(int N)
{
  int i, sum = 0;
  for (i=1; i<=N;i++){
    sum += i;
  }

  return sum;
}
  

int main ()

{  
  std::cout << sfor(100) << std::endl;
  std::cout << swhile(100) << std::endl;

  return 0;

}
