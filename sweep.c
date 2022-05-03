// Z= 1/(jωC)
// where Z is impedance in ohms, ω is the angular frequency in radians per second, and C is the capacitance in farads.


#include <stdio.h>
#include <math.h>

int main()
{
    float Z, C, w, angfreq;
    
    for (w=1; w<=10; w++) {
        Z = 1/(j*w*C);
        printf("The impedance of the capacitor is %f ohms.\n", Z);
    }
    
    return 0;
}
