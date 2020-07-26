
struct DailyAirData {
    char *date;
    int days_of_unix_epoch;
    char *city;
    int aqi;
    int pm25;
    int pm10;
};

typedef struct DailyAirData DailyAirData;

void air_data_read_csv(DailyAirData data[], int max_size, int *size, FILE *file);

void air_data_filter_by_city(DailyAirData source[], DailyAirData target[], char *city, int max_size, int *size);

int air_data_compare(const void *, const void *);

void print_air_data(DailyAirData [], int);
