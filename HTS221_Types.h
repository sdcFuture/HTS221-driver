#ifndef HTS221_TYPES_H
#define HTS221_TYPES_H

typedef enum
{
    HTS221_AVERAGE_HUMIDITY_4_SAMPLES   = 0b000,
    HTS221_AVERAGE_HUMIDITY_8_SAMPLES   = 0b001,
    HTS221_AVERAGE_HUMIDITY_16_SAMPLES  = 0b010,
    HTS221_AVERAGE_HUMIDITY_32_SAMPLES  = 0b011,
    HTS221_AVERAGE_HUMIDITY_64_SAMPLES  = 0b100,
    HTS221_AVERAGE_HUMIDITY_128_SAMPLES = 0b101,
    HTS221_AVERAGE_HUMIDITY_256_SAMPLES = 0b110,
    HTS221_AVERAGE_HUMIDITY_512_SAMPLES = 0b111,
} HTS221AverageHumiditySamples_t;

typedef enum
{
    HTS221_AVERAGE_TEMPERATURE_2_SAMPLES   = (0b000 << 3),
    HTS221_AVERAGE_TEMPERATURE_4_SAMPLES   = (0b001 << 3),
    HTS221_AVERAGE_TEMPERATURE_8_SAMPLES   = (0b010 << 3),
    HTS221_AVERAGE_TEMPERATURE_16_SAMPLES  = (0b011 << 3),
    HTS221_AVERAGE_TEMPERATURE_32_SAMPLES  = (0b100 << 3),
    HTS221_AVERAGE_TEMPERATURE_64_SAMPLES  = (0b101 << 3),
    HTS221_AVERAGE_TEMPERATURE_128_SAMPLES = (0b110 << 3),
    HTS221_AVERAGE_TEMPERATURE_256_SAMPLES = (0b111 << 3),
} HTS221AverageTemperatureSamples_t;

typedef enum
{
    HTS221_DATARATE_ONE_SHOT = 0b00,
    HTS221_DATARATE_1_HZ     = 0b01,
    HTS221_DATARATE_7_HZ     = 0b10,
    HTS221_DATARATE_12_5_HZ  = 0b11,
} HTS221DataRate_t;

typedef enum
{
    HTS221_BDU_DISABLE = (0b0 << 2),
    HTS221_BDU_ENABLE  = (0b1 << 2),
} HTS221DataUpdateMode_t;

typedef enum
{
    HTS221_HEATER_DISABLE = (0b0 << 1),
    HTS221_HEATER_ENABLE  = (0b1 << 1),
} HTS221HeaterMode_t;

typedef enum
{
    HTS221_POWER_DOWN = (0b0 << 7),
    HTS221_POWER_UP   = (0b1 << 7),
} HTS221PowerMode_t;

#endif // #ifndef HTS221_TYPES_H
