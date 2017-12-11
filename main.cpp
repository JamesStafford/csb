#include <iostream>

using namespace std;

int main()
{
    bool usedBoost = false;
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

        string thrust = "100";
        if (abs(nextCheckpointAngle) >= 90 || (nextCheckpointDist < 50 && nextCheckpointAngle != 0)) {
            thrust = "10";
        }else if ((abs(nextCheckpointAngle) < 90 && abs(nextCheckpointAngle) >= 75) || ((nextCheckpointDist < 50 || nextCheckpointDist > 75)) && nextCheckpointAngle != 0) {
            thrust = "20";
        } else if (abs(nextCheckpointAngle) < 75 && abs(nextCheckpointAngle) >= 60) {
            thrust = "40";
        } else if (abs(nextCheckpointAngle) < 60 && abs(nextCheckpointAngle) >= 45) {
            thrust = "60";
        } else if (abs(nextCheckpointAngle) < 45 && abs(nextCheckpointAngle) >= 30) {
            thrust = "80";
        }


        if (nextCheckpointDist > 5000 && nextCheckpointAngle == 0 && !usedBoost) {
            thrust = "BOOST";
            usedBoost = true;
        }

        cout << nextCheckpointX << " " << nextCheckpointY << " " << thrust << endl;
    }
}