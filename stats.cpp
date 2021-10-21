#include "stats.h"
#include <cmath>

Stats Statistics::ComputeStatistics(const std::vector<float>& senseData) {
    //Implement statistics here
    Stats computedStats;
    if(vector.empty())
    {
        computedStats.min = NAN;
        computedStats.max = NAN;
        computedStats.average = NAN;
    }
    else
    {
        computedStats.min = senseData[0];
        computedStats.max = senseData[0];
        float sum = 0.0;
        std::vector<float>::iterator It = senseData.begin();
        for(senseData.begin(); It <= senseData.end(); It++) 
        {
            computedStats.min = (senseData[It] < computedStats.min) ? senseData[It] : computedStats.min;
            computedStats.max = (senseData[It] > computedStats.max) ? senseData[It] : computedStats.max;
            sum = sum + senseData[It];
        }
        computedStats.average = sum / vector.size();
    }
    return computedStats;
}
