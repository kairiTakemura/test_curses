#include <ncurses.h>
#include <locale.h>

int main()
{
  char buf[BUFSIZ];
  setlocale(LC_ALL, "");
  initscr();

  move(0, 0);
  addstr("こんにちWorld");
  getnstr(buf, BUFSIZ);
  addstr(buf);

  endwin();
  return (0);
}

