#include "raylib.h"
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <sys/wait.h>

static const char *font_name = "Iosevka-Regular.ttf";
static const char *title = "CTY";
static char *shell = "/bin/bash";
static int font_size = 40;

typedef struct {
  int width;
  int height;
} Ui;
typedef struct {
  uint32_t rows;
  uint32_t cols;
} Region;

static Region region;

int main(void) {
  Region region = {0};
  region.rows = 20;
  region.cols = 20;

  Vector2 position = {0};
  Ui ui = {0};
  position.x = (float)region.rows;
  position.y = (float)region.cols;
  ui.width = 800;
  ui.height = 600;
  InitWindow(ui.width, ui.height, title);
  Font font = LoadFont(font_name);
  while (!WindowShouldClose()) {
    if (!IsWindowMaximized())
      MaximizeWindow();
    BeginDrawing();
    ClearBackground(BLACK);
    DrawTextEx(font, shell, position, (float)font_size, 0.5f, WHITE);
    EndDrawing();
  }
}
