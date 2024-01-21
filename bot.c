#include <stdio.h>


enum Movement {
    STRAIGHT,
    UTURN,
    RIGHT,
    LEFT
};


void moveForward() {
    printf("Moving Forward\n");
}

void moveLeft() {
    printf("Turning Left\n");
}

void moveRight() {
    printf("Turning Right\n");
}

void UTurn() {
    printf("Making U-turn\n");
}


void followPath(int road) {
    // Check if the road is blocked
    if (road == 0) {
        makeUTurn();
    } else if ((road & 0110) == 2) { // Check if only the right path is available
        moveRight();
    } else if ((road & 0011) == 2) { // Check if only the left path is available
        moveLeft();
    } else if ((road & 0101) == 4) { // Check if only the straight path is available
        moveForward();
    } else if ((road & 0111) == 1) { // Check if right and straight paths are available
        moveRight();
    } else {
        //other conditions.
    }
}

// 
void loop() {
   
    int road =0101; 

    
    followPath(road);
}


void setup() {
   
    printf("Robot setup completed\n");
}


int main() {
    setup();

    for (int i = 0; i < 10; ++i) {
        loop();
    }

    return 0;
}
