#include "utility.h"

void is_run(const int argc,const char** argv){
    if(argc<3)
    {
        printf("You must give input and output filenames");
        exit(1);
    }
}
bool work(const char* input_file_name,const char* output_file_name)
{

  printf("%s -> %s\n",input_file_name,output_file_name);
    int original_num, filtered_num, counter=1;
    double saving_space, error_distance,compress_rate;
    FILE* input_file = fopen(input_file_name,"r");
    FILE* output_file = fopen(output_file_name,"a+");
    const char* OUTPUT_PATTERN = "%d %d %lf %lf %lf\n";

    if(input_file ==NULL || output_file ==NULL)
        return false;

    while(fscanf(input_file,"%*d%*cori:%d%*copw:%d%*csaving_space:%lf%*cerror_distance:%lf",&original_num,&filtered_num,&saving_space,&error_distance)==4)
    {
        compress_rate = 1 - saving_space;
        int n = counter+1;
        int threshold = counter*10;
        printf(OUTPUT_PATTERN,n,threshold,compress_rate,error_distance,saving_space);
        fprintf(output_file,OUTPUT_PATTERN,n,threshold,compress_rate,error_distance,saving_space);
        counter++;
    }

    fclose(input_file);
    fclose(output_file);
    return true;

}
