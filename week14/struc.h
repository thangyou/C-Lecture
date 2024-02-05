typedef union 
{
    int ea;
    double kg;
    double liter;
} Unit;

typedef struct 
{
    char name[20];
    enum food { EGG=1, MILK, MEAT} kind;
    Unit amount;
} Gift;