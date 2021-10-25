#include "stats.h"
#include "math.h"
#include <bits/stdc++.h>
using namespace std;

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

void StatsAlerter::checkAndAlert(const std::vector<float>& Data)
{
    if(maxThreshold > (*std::max_element(vector.begin(), vector.end())))
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
