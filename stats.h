#include <vector>

namespace Statistics {
    Stats ComputeStatistics(const std::vector<float>&);
}
    
    struct Stats
    {
        float min = 0.0f;
        float max = 0.0f;
        float average = 0.0f;
    };

    class IAlerter
    {
        public:
        IAlerter(){}
        bool emailSent = false;
        bool ledGlows = false;
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
        const float MaxThreshold = 0.0f;
        std::vector<IAlerter*> alerter;
        void checkAndAlert(const std::vector<float>&);
        StatsAlerter(const float maxthreshold, std::vector<IAlerter*> Alerter) :
                     MaxThreshold(maxthreshold), alerter(Alerter){}
    };
