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
        if (nextCheckpointAngle > 90 || nextCheckpointAngle < -90) {
            thrust = 0;
        }

        cout << nextCheckpointX << " " << nextCheckpointY << " " << thrust << endl;
    }
}