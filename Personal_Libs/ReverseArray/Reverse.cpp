
void Reverse(int *a_one, int *a_two, int a_size) {
    int a = 0;
    while ((a_two[--a_size] = a_one[++a]))
      ;
}