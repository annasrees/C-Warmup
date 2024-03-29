/**
 * Anna Rees
 * Operating Systems Warmup Assignment
 * 23 Jan 2024
 */
#define MAX_NAME_LENGTH 63
typedef struct {
    char name[1+MAX_NAME_LENGTH];
    unsigned int value;
    unsigned int weight;
} Collectible;

Collectible *createCollectible(char *name, unsigned int value, unsigned int weight);

int compareCollectibles(Collectible *collectibleOne, Collectible *collectibleTwo);