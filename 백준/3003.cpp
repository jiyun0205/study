#include <iostream>

int main() 
{
  int input[6] = {0};
  int chess[6] ={1, 1, 2, 2, 2, 8};

  for(int i=0; i<6; ++i)
  {
    std::cin >> input[i];
  }

  for(int i=0; i<6; ++i)
  {
    std::cout << chess[i] - input[i] << " ";
  }

  return 0;
}
