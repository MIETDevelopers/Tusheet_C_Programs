//A C Program to read .csv files.
#include <stdio.h> //Including standard input output header files.
#include <stdlib.h>//Including standard library header files.
#include <string.h>//Including string header files. 

const char* getfield(char* line, int num)
{
    const char* tok;
    for (tok = strtok(line, ";");
            tok && *tok;
            tok = strtok(NULL, ";\n"))
    {
        if (!--num)
            return tok;
    }
    return NULL;
}
int main()
{
    FILE* stream = fopen("D:\\Softwares\\C_Programs\\Tusheet_C_Programs\\034_ReadCSV.csv", "r"); //Path of the .csv file.

    char line[1024];
    while (fgets(line, 1024, stream))
    {
        char* tmp = strdup(line);
        printf("Field 3 would be %s\n", getfield(tmp, 3));
        free(tmp);
    }
} 
 