#include <vector>
#include "utility.h"



int main(int argc, char* argv[])
{
  //is_run(argc,argv);
  
  //const int FILES_SIZE = 11;
  //string input_file[FILES_SIZE] = {"./opw_TPE_result.log","./ifc_TPE_result.log","./tdtr_TPE_result.log","./aha_TPE_result.log","./aha_opw_TPE_result.log","./threshold_opw_TPE_result.log","./sttrace_opw_TPE_result.log","./uniform_sample_TPE_result.log","./dp_TPE_result.log","Bellman_result.log","Bellman_result_error.log"};
  
  
  
  //string output_file[FILES_SIZE] = {"./opw.dat","./ifc.dat","./tdtr.dat","./aha.dat","./aha_opw.dat","./threshold_opw.dat","./sttrace_opw.dat","./us.dat","./dp.dat","bellman.dat","bellman_error.dat"};
  vector<string> input_array;
  input_array.push_back("Bellman_CR_er10.log");
  input_array.push_back("Bellman_CR_er15.log");
  input_array.push_back("Bellman_CR_er20.log");
  
  
  
  
  
  
  
  
  
  vector<string> output_array;
  output_array.push_back("Bellman_CR_er10_10.dat");
  output_array.push_back("Bellman_CR_er15_10.dat");
  output_array.push_back("Bellman_CR_er20_10.dat");
  
  
  
  
  
  for(size_t i = 0;i<input_array.size(); i++)
  {
    //const char* input = input_file[i].c_str();
    //const char* output = output_file[i].c_str();
    const char* input = input_array[i].c_str();
    const char* output = output_array[i].c_str();
    (work(input,output))?printf("%s is done\n",input):printf("%s is fail\n",output);
  }
  
  return 0;
}
