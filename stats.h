#include <vector>

namespace Statistics {
    struct Stats
    {
        float min;
        float max;
        float average;
    };
    Stats ComputeStatistics(const std::vector<float>& senseData);
}

    struct EmailAlert 
    {
        bool emailSent;
    };

    struct LEDAlert 
    {
        bool ledGlows;
    };

    struct IAlerter
    {
        EmailAlert &emailAlert;
        LEDAlert &ledAlert;
    };
