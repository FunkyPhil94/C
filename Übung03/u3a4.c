#include <stdio.h>


struct ColorRGB {
    unsigned char R;
    unsigned char G;
    unsigned char B;
};


union Color {
    struct ColorRGB rgb;
    unsigned int hex;
};



struct ColorRGB2 {
    unsigned char R;
    unsigned char G;
    unsigned char B;
};

union Color2 {
    struct ColorRGB rgb;
    unsigned int hex;
};

int main() {
    union Color color;

    color.rgb.R = 255;
    color.rgb.G = 0;
    color.rgb.B = 0;

    printf("RGB values: R=%d, G=%d, B=%d\n", color.rgb.R, color.rgb.G, color.rgb.B);
    printf("Hex value: %X\n", color.hex);

    color.hex = 0x00FF00;

    printf("RGB values: R=%d, G=%d, B=%d\n", color.rgb.R, color.rgb.G, color.rgb.B);
    printf("Hex value: %X\n", color.hex);

    return 0;
}
