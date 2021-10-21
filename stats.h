#include <vector>

namespace Statistics {
    struct Stats
    {
        float min;
        float max;
        float average;
    };
    Stats ComputeStatistics(const std::vector<float>& senseData);

    struct IAlerter
    {
        struct EmailAlert 
        {
            bool emailSent;
        };

        struct LEDAlert 
        {
            bool ledGlows;
        };
    };
}
