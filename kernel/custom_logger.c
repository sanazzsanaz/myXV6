// kernel/custom_logger.c
#include "types.h"
#include "riscv.h"
#include "defs.h"
#include "custom_logger.h"

void log_message(enum log_level level, const char *message)
{
    switch (level)
    {
    case LOG_ERROR:
        printf("ERROR - %s\n", message);
        break;
    case LOG_WARN:
        printf("WARNING - %s\n", message);
        break;
    case LOG_INFO:
        printf("INFO - %s\n", message);
        break;
    default:
        printf("UNKNOWN LOG LEVEL - %s\n", message);
    }
}
