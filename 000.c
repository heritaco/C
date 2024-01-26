// Solo lo hice para crear mis 100 files y pasar mis replits

#include <stdio.h>

int main()
{
    for (int i = 1; i <= 100; i++)
    {
        char filename[10];
        sprintf(filename, "%03d.c", i); // Format the filename

        FILE *file = fopen(filename, "w"); // Open the file for writing

        if (file == NULL)
        {
            printf("Error opening file!\n");
            return 1;
        }

        fprintf(file, "#include <stdio.h>\n\nint main() {\n    printf(\"This is file %03d.c\\n\");\n    return 0;\n}\n", i); // Write some basic C code to the file

        fclose(file); // Close the file
    }

    return 0;
}