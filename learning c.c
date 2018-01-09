#include <stdio.h>
#include <unistd.h>
#include <windows.h>

#define str_y_length 10
#define str_x_length 25

int game_board[str_y_length][str_x_length];

int main(int argc, char const *argv[]) {

  printf("\e[1;1H\e[2J");

  for (size_t i = 0; i < 5; i++) {
    for (size_t x = 0; x < str_x_length; x++) {
      for (size_t y = 0; y < str_y_length; y++) {
        game_board[y][x]=0;
      }
    }
  }

  while(1){
    screen_refresh();
    sleep(1);
    printf("\e[1;1H\e[2J");
  }

  return 0;
}


int screen_refresh(){

  for (size_t y = 0; y < str_y_length; y++) {
    for (size_t x = 0; x < str_x_length; x++) {
      printf("%d", game_board[y][x]);
    }
    printf("\n");
  }

}
