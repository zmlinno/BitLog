#ifndef __M_LEVEL_H__
#define __M_LEVEL_H__

namespace bitlog{
class LogLevel{
    public:
        enum class value {
            UNKNOW = 0,
            DEBUG,
            INFO,
            WARN,
            ERROR,
            FATAL,
            OFF
        };
        static const char *toString(LogLevel::value l) {
            switch(l) {
                #define TOSTRING(name) #name
                case LogLevel::value::DEBUG: return TOSTRING(DEBUG);
                case LogLevel::value::INFO: return TOSTRING(INFO);
                case LogLevel::value::WARN: return TOSTRING(WARN);
                case LogLevel::value::ERROR: return TOSTRING(ERROR);
                case LogLevel::value::FATAL: return TOSTRING(FATAL);
                case LogLevel::value::OFF: return TOSTRING(OFF);
                #undef TOSTRING
                default: return "UNKNOW";
            }
            return "UNKNOW";
        }
};
}
#endif