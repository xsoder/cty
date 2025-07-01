#include <stdio.h>
#include <stdint.h>
#include "raylib.h"

typedef struct {
  uint32_t rows = 20;
  uint32_t cols = 80;
} Region;

static Region region;

int main(void) {
  int posX = 10;
  int posY = 10;
  int width = 200;
  int height = 100; 
  const char *fileName = "Iosevka";
  LoadFont(fileName); 

  const char *title = "CTY";
  InitWindow(800, 600, title);
  while (!WindowShouldClose()) {
    BeginDrawing();
    ClearBackground(BLACK);
    DrawText(const char *text, int posX, int posY, int fontSize, Color color);
    DrawRectangle(posX, posY,  width, height, WHITE);
    EndDrawing();
  }
}
