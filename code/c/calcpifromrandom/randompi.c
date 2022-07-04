#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(int argc, char **argv) {
    if (argc <= 1) {
        printf("Number of points should be provided.\n");
        return 0;
    }
    int numberOfPoints = atoi(argv[1]);
    
    srand(time(NULL));
    for (int i=0;i<=numberOfPoints;i++) {
        float rX = ((float)rand())/RAND_MAX;
        float rY = ((float)rand())/RAND_MAX;
        printf("%f, %f\n",rX, rY);
    }
    
    return 0;
}