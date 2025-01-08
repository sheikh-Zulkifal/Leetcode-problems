class Solution {
public:
    int carFleet(int target, vector<int>& position, vector<int>& speed) {
        vector<pair<int, int>> car;
        for (int i = 0; i < position.size(); i++) {
            car.push_back({position[i], speed[i]});
        }
        
        // Sort cars based on their positions in descending order
        sort(car.rbegin(), car.rend());
        
        vector<double> timeToTarget;
        for (auto& pair : car) {
            double time = (target - pair.first) * 1.0 / pair.second;
            // If the current car's time is less than or equal to the last car in the fleet,
            // it will join the same fleet.
            if (!timeToTarget.empty() && time <= timeToTarget.back()) {
                continue;
            }
            timeToTarget.push_back(time);
        }
        
        // The size of timeToTarget represents the number of fleets
        return timeToTarget.size();
    }
};
