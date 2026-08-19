class Solution {
public:
    int carFleet(int target, vector<int>& position, vector<int>& speed) {
        int n = position.size();
        vector<pair<int,int>> cars(n);
        for (int i = 0; i < n; i++)
            cars[i] = {position[i], speed[i]};
        
        sort(cars.begin(), cars.end(), [](auto& a, auto& b) {
            return a.first > b.first;
        });
        
        int fleets = 0;
        double lastArrival = -1; 
        
        for (auto& [pos, spd] : cars) {
            double timeToReach = (double)(target - pos) / spd;
            if (timeToReach > lastArrival) {
                fleets++;
                lastArrival = timeToReach;
            }
            
        }
        
        return fleets;
    }
};
