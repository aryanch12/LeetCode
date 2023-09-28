class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        // Step 1: Sort the input intervals by their start values
        sort(intervals.begin(), intervals.end());

        int n = intervals.size();
        vector<vector<int>> mergedIntervals; // Resultant merged intervals

        for (int i = 0; i < n; i++) {
            // If the result is empty or the current interval's start is greater
            // than the end of the last merged interval, add the current interval
            if (mergedIntervals.empty() || intervals[i][0] > mergedIntervals.back()[1]) {
                mergedIntervals.push_back(intervals[i]);
            } else {
                // If there is overlap, update the end of the last merged interval
                mergedIntervals.back()[1] = max(mergedIntervals.back()[1], intervals[i][1]);
            }
        }

        return mergedIntervals;
    }
};
