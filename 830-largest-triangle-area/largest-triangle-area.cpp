#include <vector>
#include <cmath>

class Solution {
public:
    double largestTriangleArea(std::vector<std::vector<int>>& points) {
        double maxArea = 0.0;

        for (int i = 0; i < points.size(); ++i) {
            for (int j = i + 1; j < points.size(); ++j) {
                for (int k = j + 1; k < points.size(); ++k) {
                    double area = std::abs(
                        points[i][0] * (points[j][1] - points[k][1]) +
                        points[j][0] * (points[k][1] - points[i][1]) +
                        points[k][0] * (points[i][1] - points[j][1])
                    ) / 2.0;
                    maxArea = std::max(maxArea, area);
                }
            }
        }

        return maxArea;
    }
};
