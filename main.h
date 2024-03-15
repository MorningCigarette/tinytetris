#if !defined(MAIN_H_)
#define MAIN_H_

int NUM(int x, int y);

void new_piece();

void set_piece(int x, int y, int r, int v);

int check_hit(int x, int y, int r);

int do_tick();

void runloop();

void remove_line();

void update_piece();
void frame();

#endif // MAIN_H_
