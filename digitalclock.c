#include <stdio.h>
#include <time.h>
#include <unistd.h>

void clearScreen()
{
  const char *CLEAR_SCREEN_ANSI = "\e[1;1H\e[2J";
  write(STDOUT_FILENO, CLEAR_SCREEN_ANSI, 12);
}


int main()
{
    char stringtime[64];
    do
    {
        time_t t = time(NULL);
        struct tm *tm = localtime(&t);
        size_t ret = strftime(stringtime, sizeof(stringtime), "%c", tm);
        printf("%s\n", stringtime);
        sleep(1);
        clearScreen();

    } while (1);
    return 0;
}