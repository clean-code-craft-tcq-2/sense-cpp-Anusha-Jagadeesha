#include <vector>

namespace Statistics {
    Stats ComputeStatistics(const std::vector<float>& senseData);
}
    
    struct Stats
    {
        float min;
        float max;
        float average;
    };

    class IAlerter
    {
        public:
        IAlerter(){}
        bool emailSent;
        bool ledGlows;
    };

    class EmailAlert : public IAlerter
    {
        public:
        EmailAlert(){}
    };

    class LEDAlert : public IAlerter
    {
        public:
        LEDAlert(){}
    };

    class StatsAlerter
    {
        public:
        StatsAlerter(){}
        const float maxThreshold = 0.0f;
        std::vector<IAlerter*> alerter;
        void checkAndAlert(const std::vector<float>&);
        StatsAlerter(const float maxthreshold, std::vector<IAlerter*> Alerter) :
                     maxThreshold(maxthreshold), alerter(Alerter){}
    };
