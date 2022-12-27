#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
  if (argc < 3) {
    printf("Usage: btf time_per_page num_pages\n");
    return 1;
  }

  int time_per_page = atoi(argv[1]);
  int num_pages = atoi(argv[2]);

  int total_time = time_per_page * num_pages;

  int num_hours = total_time / 60;
  int remaining_minutes = total_time % 60;

  printf("It will take you %d hours and %d minutes to finish the book.\n",
         num_hours, remaining_minutes);

  return 0;
}