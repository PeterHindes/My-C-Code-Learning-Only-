#include <stdio.h>

#define str_y_length 3
#define str_x_length 5

int game_board[str_y_length][str_x_length];

int main(int argc, char const *argv[]) {



  for (size_t i = 0; i < 5; i++) {
    for (size_t x = 0; x < str_x_length; x++) {
      for (size_t y = 0; y < str_y_length; y++) {
        game_board[y][x]=0;
      }
    }
  }



  return 0;
}

int screen_refresh(){

  for (size_t x = 0; x < str_x_length; x++) {
    for (size_t y = 0; y < str_y_length; y++) {
      printf("%d\n", game_board[y][x]);
    }
  }
}
