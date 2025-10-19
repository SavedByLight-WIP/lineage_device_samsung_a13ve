#ifndef INIT_MT6768_H
#define INIT_MT6768_H

#include <string.h>

enum device_variant {
    VARIANT_A137F = 0,
    VARIANT_MAX
};

typedef struct {
    std::string model;
    std::string codename;
} variant;

static const variant international_models_a137f = {
    .model = "SM-A528B",
    .codename = "a52sxq"
};
static const variant *all_variants[VARIANT_MAX] = {
    &international_models_a137f,
};

#endif // INIT_MT6768_H
