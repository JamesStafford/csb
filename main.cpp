#include <iostream>

using namespace std;

int main()
{
    while (true) {
        int x;
        int y;
        int nextCheckpointX;
        int nextCheckpointY;
        int nextCheckpointDist;
        int nextCheckpointAngle;
        cin >> x >> y >> nextCheckpointX >> nextCheckpointY >> nextCheckpointDist >> nextCheckpointAngle; cin.ignore();

        int opponentX;
        int opponentY;
        cin >> opponentX >> opponentY; cin.ignore();

        int thrust = 100;
        if (abs(nextCheckpointAngle) >= 90) {
            thrust = 0;
        }else if (abs(nextCheckpointAngle) < 90 && abs(nextCheckpointAngle) >= 75) {
            thrust = 20;
        } else if (abs(nextCheckpointAngle) < 75 && abs(nextCheckpointAngle) >= 60) {
            thrust = 40;
        } else if (abs(nextCheckpointAngle) < 60 && abs(nextCheckpointAngle) >= 45) {
            thrust = 60;
        } else if (abs(nextCheckpointAngle) < 45 && abs(nextCheckpointAngle) >= 30) {
            thrust = 80;
        }

        cout << nextCheckpointX << " " << nextCheckpointY << " " << thrust << endl;
    }
}