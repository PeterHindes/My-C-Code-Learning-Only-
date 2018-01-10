#include <stdio.h>
#include <unistd.h>
//#include <windows.h>

#define str_y_length 10
#define str_x_length 25
int game_board[str_y_length][str_x_length];

int main(int argc, char const *argv[]) {
  //Postx Clear Screen
  printf("\e[1;1H\e[2J");

  //Vars
  //Clear Array
  for (size_t i = 0; i < 5; i++) {
    for (size_t x = 0; x < str_x_length; x++) {
      for (size_t y = 0; y < str_y_length; y++) {
        game_board[y][x]=0;
      }
    }
  }

  //Where is the player
  int player_place[2] = {str_x_length/2,str_y_length/2};

  //Move The Player
  char c;
  while (1) {
    c = stdin;
    printf("%c",c);
    printf("%c",c);
    printf("%c",c);
  }

  /*//Write To Display (for postx terminals)
  while(1){
    screen_refresh();
    sleep(1);
    //Postx Clear Screen
    printf("\e[1;1H\e[2J");
  }*/

  //Exit
  return 0;
}

//Write To Display (this version is only for postx terminals)
int screen_refresh(){

  for (size_t y = 0; y < str_y_length; y++) {
    for (size_t x = 0; x < str_x_length; x++) {
      printf("%d", game_board[y][x]);
    }
    printf("\n");
  }

}
