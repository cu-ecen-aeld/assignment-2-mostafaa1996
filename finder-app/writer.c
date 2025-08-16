#include <stdlib.h>
#include <stdio.h>
#include <syslog.h>  // For syslog functions

int main(int argc , const char** argv){
 /*first argument is the executable file 
   second argument the file I want to write into 
   third argument the string will be written into the file.*/
if (argc != 3) {
        syslog(LOG_ERR, "Usage: %s <filename> <string>", argv[0]);
        fprintf(stderr, "Usage: %s <filename> <string>\n", argv[0]);
        closelog();
        return 1;
    }
   
FILE* file_ptr = fopen(argv[1], "w");

if (file_ptr == NULL) {
        printf("Error Occurred While creating a "
               "file !");
        syslog(LOG_ERR, "Error opening file: %s", argv[1]);
        closelog();
        return 1;
    }
    
if(fputs(argv[2] , file_ptr)==EOF){
        syslog(LOG_ERR, "Error writing to file: %s", argv[1]);
        fclose(file_ptr);
        closelog();
        return 1;
}
fclose(file_ptr);
syslog(LOG_DEBUG, "Writing '%s' to '%s'", argv[2], argv[1]);

return 0 ;
}
