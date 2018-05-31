/* program game x\o exercise of lesson 5 */
#include<stdio.h>
#include<ctype.h>
#include<stdbool.h>

int main(void){

  char another_game = 'Y';
  int play1[2], play2[2];


  int play1_score = 0, play2_score = 0;

  //Start game by press 'Enter' button
  printf("\nGame X&O\nPress Enter to play\n");
  scanf("%c", &another_game);

  do{
    char qipan[3][3] = {
      {' ',' ',' '},
      {' ',' ',' '},
      {' ',' ',' '}
    };
    bool game_status = false;

    //print qipan
    int terms = 0;
    do{

      for(int i = 0; i < 3; i++){
	printf("\n-------\n");
	for(int j = 0; j < 3; j++){
	  printf("|%c",qipan[i][j]);
	}
	printf("|");
      }
      printf("\n-------\n");

      //play1 input 'X' on location
    play1_input:
      printf("\nPlay1 input the location [x y]:");
      scanf("%d %d",&play1[0], &play1[1]);
      if(qipan[(play1[0]-1)][(play1[1]-1)] == ' '){
	qipan[(play1[0]-1)][(play1[1]-1)] = 'X';
      }else{
	goto play1_input;
      }

      terms+= 1;

      //print qipan
      for(int x = 0; x < 3; x++){
	printf("\n-------\n");
	for(int y = 0; y < 3; y++){
	  printf("|%c",qipan[x][y]);
	}
	printf("|");
      }
      printf("\n-------\n");

      //check whether the qipan is fulled
      if(terms == 9){
	printf("\nGame Over, No winner!\n");
	break;
      }
      
      //check play1 situation
      if(terms>=5){
	char tempx[3],tempy[3],tempz[3];
	for(int i = 0; i < 3; i++){
	  for(int j = 0; j <3; j++){
	    tempx[j]= qipan[i][j];
	    tempy[j]= qipan[j][i];
	  }
	  if(tempx[0]==tempx[1]&&tempx[1]==tempx[2]&&tempx[2]=='X'){
	    game_status = true;
	  }
	  if(tempy[0]==tempy[1]&&tempy[1]==tempy[2]&&tempy[2]=='X'){
	    game_status = true;
	  }
	  
	}
	if(qipan[0][0]==qipan[1][1]&&qipan[1][1]==qipan[2][2]&&qipan[2][2]=='X')
	  game_status = true;
	if(qipan[0][2]==qipan[1][1]&&qipan[1][1]==qipan[2][0]&&qipan[2][0]=='X')
	  game_status = true;
      }

      if(game_status){
	printf("\nPlayer 'X' WIN!\n");
	play1_score +=1;
	break;
      }

      //play2 input 'O' on location
    play2_input:
      printf("\nPlay2 input the location [x y]:");
      scanf("%d %d",&play2[0], &play2[1]);
      if(qipan[(play2[0]-1)][(play2[1]-1)] ==' '){
	qipan[(play2[0]-1)][(play2[1]-1)] = 'O';	
      }else{
	goto play2_input;
      }
      terms+= 1;

            //check play1 situation
      if(terms>=5){
	char tempx[3],tempy[3],tempz[3];
	for(int i = 0; i < 3; i++){
	  for(int j = 0; j <3; j++){
	    tempx[j]= qipan[i][j];
	    tempy[j]= qipan[j][i];
	  }
	  if(tempx[0]==tempx[1]&&tempx[1]==tempx[2]&&tempx[2]=='O'){
	    game_status = true;
	  }
	  if(tempy[0]==tempy[1]&&tempy[1]==tempy[2]&&tempy[2]=='O'){
	    game_status = true;
	  }
	  
	}
	if(qipan[0][0]==qipan[1][1]&&qipan[1][1]==qipan[2][2]&&qipan[2][2]=='O')
	  game_status = true;
	if(qipan[0][2]==qipan[1][1]&&qipan[1][1]==qipan[2][0]&&qipan[2][0]=='O')
	  game_status = true;
      }

      if(game_status){
	printf("\nPlayer 'O' WIN!\n");
	play2_score +=1;
	break;
      }

    }while(!game_status);


    //check do they want play again
    printf("\nDo you want play another round: (y/n)? ");
    scanf(" %c",&another_game);
  }while(toupper(another_game)=='Y');
  printf("\n Score: play 'X' vs play 'O': %d - %d\n", play1_score, play2_score);
  return 0;
}


