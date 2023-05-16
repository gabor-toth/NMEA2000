#ifndef _NMEA2000_ENV_ESP_H
#define _NMEA2000_ENV_ESP_H

#include "sdkconfig.h"
#include "NMEA2000_esp32_stream.h"
#include "esp_log.h"

#if defined(CONFIG_NMEA2000_FRAME_ERROR_DEBUG)
#define NMEA2000_FRAME_ERROR_DEBUG
#endif
#if defined(CONFIG_NMEA2000_FRAME_IN_DEBUG)
#define NMEA2000_FRAME_IN_DEBUG
#endif
#if defined(CONFIG_NMEA2000_FRAME_OUT_DEBUG)
#define NMEA2000_FRAME_OUT_DEBUG
#endif
#if defined(CONFIG_NMEA2000_DEBUG)
#define NMEA2000_DEBUG
#endif
#if defined(CONFIG_NMEA2000_MSG_DEBUG)
#define NMEA2000_MSG_DEBUG
#endif
#if defined(CONFIG_NMEA2000_BUF_DEBUG)
#define NMEA2000_BUF_DEBUG
#endif

#define DEBUG_TIMESTAMP esp_log_timestamp

#endif //_NMEA2000_ENV_ESP_H
