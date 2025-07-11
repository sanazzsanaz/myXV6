// kernel/custom_logger.h
#ifndef CUSTOM_LOGGER_H
#define CUSTOM_LOGGER_H

enum log_level
{
    LOG_ERROR = 1,
    LOG_WARN,
    LOG_INFO
};

void log_message(enum log_level level, const char *message);

#endif
