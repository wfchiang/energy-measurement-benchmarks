# energy-measurement-benchmarks


To Ian and Mark, 

Please check the energy consumption for the benchmarks and their different versions. 

For each version of each benchmark under **fptaylor** directory, 
I had created 100 programs which apply different inputs. 
However, feel free to insert your code for generating random inputs. 
The range for each input variable will be specified later. 
Hope that you don't need to work on the code too much in order to insert you energy profiling code... 



The benchmarks (and their versions) are listed as follows. 

- **fptaylor -- sine**

  It is located at **./fptaylor/sine**, and it has four versions. 
  * **all-32**: located at ./fptaylor/sine/all-32 
  * **Err threshold = 4e-07**: located at ./fptaylor/sine/4e-07
  * **Err threshold = 2e-07**: located at ./fptaylor/sine/2e-07
  * **all-64** : located at ./fptaylor/sine/all-64

  **variable range** 
  * **x** : [ -1.57079632679, 1.57079632679] 


- **fptaylor -- jet** 

  It is located at **./fptaylor/jet**, and it has five versions. 

  * **all-32**: located at ./fptaylor/jet/all-32 
  * **Err threshold = 1e-02**: located at ./fptaylor/jet/1e-02 
  * **Err threshold = 7.5e-03**: located at ./fptaylor/jet/7.5e-03 
  * **Err threshold = 5e-03**: located at ./fptaylor/jet/5e-03 
  * **all-64** : located at ./fptaylor/sine/all-64 

  **variable ranges**
  * **x1** : [-5.0, 5.0] 
  * **x2** : [-20.0, 5.0] 


- **gaussian -- fixed x**

  SORRY, THIS BENCHMARK IS NOT READY YET...  

  It is located at **./gaussian**, and it has three versions. 

  * **all-32**: file ./gaussian/gaussian-fixed-x-all-32.cpp 
  * **adaptive**: file ./gaussian/gaussian-fxied-x-adaptive.cpp 
  * **all-64**: file ./gaussian/gaussian-fixed-x-all-64.cpp 

  **variable ranges** 
  * **ave** : [-1.0, 1.0] 
  * **dev** : [1.0, 3.0] 
  


NOTE: 

- For all benchmarks, variables named with prefix "__const_" serve as constants. 

- Directory ./fptaylor/archive stores the old benchmarks... 


Thanks a lots for the help! 

Wei-Fan 