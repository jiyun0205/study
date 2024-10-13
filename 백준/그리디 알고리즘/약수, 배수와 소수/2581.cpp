#include <iostream>
#include <cmath> // sqrt

bool find_decimal(int a)
{
  if(a<=1) return false; // 1은 소수가 아님

  for(int i=2; i<=sqrt(a); i++)
  {
    if(a%i == 0)
    {
      return false;
    }
  }
  return true;
}


int main() 
{
  int m,n,first;
  int sum=0;
  bool found_decimal=false;

  scanf("%d\n%d", &m, &n);

  for(int i=m; i<=n; i++)
  {
    if(find_decimal(i))
    {
      if(!found_decimal)
      {
        first = i;
        found_decimal = true;
      }
      sum+=i;
    }
  }

  if(found_decimal)
  {
    std::cout << sum << "\n";
    std::cout << first << "\n";
  }
  else
  {
    std::cout << "-1\n";
  }

  return 0;
}
