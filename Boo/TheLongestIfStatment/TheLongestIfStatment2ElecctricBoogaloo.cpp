#include <iostream>
int main() {
  int i = 4855;
  int count = 0, min = 7856;
  for (i; i <= 7856; i++) {
    if (i % 8 == 0 && i % 19 == 0 && i % 7 != 0 && i % 16 != 0 && i % 24 != 0 && i % 26 != 0) {
      if (i < min)
        min = i;
      count++;
    }
  }
  std::cout << count << " " << min;
  return 0;
}