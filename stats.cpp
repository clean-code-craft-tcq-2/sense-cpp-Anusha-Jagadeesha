#include "stats.h"
#include "math.h"
#include <bits/stdc++.h>
using namespace std;

Stats Statistics::ComputeStatistics(const std::vector<float>& senseData) {
    //Implement statistics here
    Stats computedStats;
    if(senseData.empty())
    {
        computedStats.min = NAN;
        computedStats.max = NAN;
        computedStats.average = NAN;
    }
    else
    {
        float sum = 0.0;
        auto It = senseData.begin();
        for(; It <= senseData.end(); It++) 
        {
            sum = sum + *It;
        }
        computedStats.min = *std::max_element(senseData.begin(), senseData.end());
        computedStats.max = *std::max_element(senseData.begin(), senseData.end());
        computedStats.average = sum / senseData.size();
    }
    return computedStats;
}

void StatsAlerter::checkAndAlert(const std::vector<float>& Data)
{
    if(MaxThreshold > (*std::max_element(Data.begin(), Data.end())))
    {
        alerter[0]->emailSent = true;
        alerter[1]->ledGlows = true;
    }
    else
    {
        alerter[0]->emailSent = false;
        alerter[1]->ledGlows = false;
    }
}
