#include <stdio.h>

int totalWaysToScore(int score, int run_type){
  if(score == 0)
    return 1;
  // ways store all possible count of ways....
  int ways = 0;
  if(run_type == 1 && score>1){
    // last_run is single we can score 1 or 2....
    ways = ways + totalWaysToScore(score-1, 1) + totalWaysToScore(score-2, 2);
  }else{
    // last_run is double we can score only 1....
    ways = ways + totalWaysToScore(score-1, 1);
  }
  return ways;
}

int main(void) {
  int total_score, currect_runs = 0;
  
  printf("Enter the score\n");
  scanf("%d", &total_score);
  printf("%d possible ways", totalWaysToScore(total_score, 1));

  return 0;
}
