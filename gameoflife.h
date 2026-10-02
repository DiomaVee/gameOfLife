#ifndef GAME_OF_LIFE_H
#define GAME_OF_LIFE_H

/* --- Function Prototypes --- */
/* These match your implementation and let main() know they exist */
int count_alive(const char *field, int i, int j, int size);
void evolve(const char *field, char *t, int size);

/* --- Conway's Game of Life Logic Macros --- */
/* Your exact internal grid tracking macros, properly guarded */
#define CELL(I,J) (field[size*(I)+(J)])
#define ALIVE(I,J) t[size*(I)+(J)] = 1
#define DEAD(I,J)  t[size*(I)+(J)] = 0

#endif /* GAME_OF_LIFE_H */
