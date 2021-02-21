#include <iostream>
int main() {
  int counter = 0;
  int maxn = 5883 - 2;
  for (int n = 5883; n <= 15906; n++) {
    if (n % 9 == 0 && n % 23 == 0 && n % 13 != 0 && n % 18 != 0 && n % 19 != 0 && n % 22 != 0) {
      counter++;
      if (n > maxn)
        maxn = n;
    }
  }
  std::cout << counter <<" "<< maxn << std::endl;
  return 0;
}
