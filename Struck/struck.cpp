#include <cstdio>

struct titik {
int x, y;
};

titik a, b;
int main() {
  a.x = 5;
  a.y = 3;
  b.y = 2;
  b.x = 1;
  printf("%d %d\n", a.x, a.y);
  printf("%d %d\n", b.x, b.y);
}
