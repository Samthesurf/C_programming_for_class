#include <stdio.h>
#include <stdlib.h>
#include "libreofficekit/libreofficekit.h"

int main() {
    /* Initialize LibreOffice */
    libreofficekit_init("C:\Program Files (x86)\LibreOffice");

    /* Open the Excel file */
    LibreOfficeKitDocument* doc = libreofficekit_open_document("C:\Users\ukpsa\Downloads\Octave stuff\sensor.xlsx");

    /* Extract the values in the range B2 to B8 */
    double values[6];
    for (int row = 2; row <= 7; row++) {
        const char* value_str = libreofficekit_get_cell_value(doc, "Sheet1", row, 1);
        values[row-2] = atof(value_str);
    }

    /* Calculate the mean of the values */
    double sum = 0.0, meanVal;
    for (int i = 0; i < 6; i++) {
        sum += values[i];
    }
    meanVal = sum / 6.0;

    /* Print the mean value */
    printf("The mean of B2 to B8 is: %f\n", meanVal);

    /* Clean up */
    libreofficekit_close_document(doc);
    libreofficekit_destroy();
    return 0;
}
