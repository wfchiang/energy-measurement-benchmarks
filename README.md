# energy-measurement-benchmarks


To Ian and Mark, 

Please check the energy consumption for the benchmarks and their different versions. 
For each version, I had created 100 programs which apply different inputs. 
However, feel free to insert your code for generating random inputs. 
The range for each input variable will be specified later. 
Hope that you don't need to work on the code too much in order to insert you energy profiling code... 


The benchmarks (and their versions) are listed as follows. 

* **fptaylor -- sine**
  It is located at **./fptaylor/sine**, and it has four versions. 
  ** **all-64**: located at ./fptaylor/sine/all-64 
  ** **Err threshold = 4e-07**: located at ./fptaylor/sine/4e-07
  ** **Err threshold = 2e-07**: located at ./fptaylor/sine/2e-07
  ** **all-128** : located at ./fptaylor/sine/all-128  

  **variable range** 
  ** **x** : [ -1.57079632679, 1.57079632679] 

* **fptaylor -- jet** 
  It is located at **./fptaylor/jet**, and it has five versions. 
  

NOTE: 

* For all benchmarks, variables named with prefix "__const_" serve as constants. 