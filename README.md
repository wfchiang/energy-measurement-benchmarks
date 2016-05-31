# energy-measurement-benchmarks



## fptaylor -- sine

It is located at **./fptaylor/sine**, and it has four versions. 

- **all-32**: located at ./fptaylor/sine/all-32 
- **error threshold = 4e-07**: located at ./fptaylor/sine/4e-07
- **error threshold = 2e-07**: located at ./fptaylor/sine/2e-07
- **all-64** : located at ./fptaylor/sine/all-64

For each version, I had created 100 programs which take different inputs. 
But feel free to modify the code to generate random inputs at runtime. 

**variable range** 

- **x** : [ -1.57079632679, 1.57079632679] 



## fptaylor -- jet 

It is located at **./fptaylor/jet**, and it has five versions. 

- **all-32**: located at ./fptaylor/jet/all-32 
- **err threshold = 1e-02**: located at ./fptaylor/jet/1e-02 
- **err threshold = 7.5e-03**: located at ./fptaylor/jet/7.5e-03 
- **err threshold = 5e-03**: located at ./fptaylor/jet/5e-03 
- **all-64** : located at ./fptaylor/sine/all-64 

For each version, I had created 100 programs which take different inputs. 
But feel free to modify the code to generate random inputs at runtime. 

**variable ranges**

- **x1** : [-5.0, 5.0] 
- **x2** : [-20.0, 5.0] 



## gaussian -- fixed x

It is located at **./gaussian**, and it has seven versions. 

- **all-32**: file ./gaussian/gaussian-fixed-x-all-32.cpp 
- **adaptive**: file ./gaussian/gaussian-fxied-x-adaptive.cpp 
- **all-64**: file ./gaussian/gaussian-fixed-x-all-64.cpp 
- **error threshold = 5e-07**: file ./gaussian/math-gaussian-fixed-x-5e-07.cpp 
- **error threshold = 1e-07**: file ./gaussian/math-gaussian-fixed-x-1e-07.cpp 
- **error threshold = 5e-08**: file ./gaussian/math-gaussian-fixed-x-5e-08.cpp 
- **error threshold = 1e-22**: file ./gaussian/math-gaussian-fixed-x-1e-22.cpp 

**variable ranges** 
  
- **ave** : [-1.0, 1.0] 
- **dev** : [1.0, 3.0]



## gaussian -- fixed ave 

It is located at **./gaussian**, and it has seven versions.

- **all-32**: file ./gaussian/gaussian-fixed-ave-all-32.cpp
- **adaptive**: file ./gaussian/gaussian-fixed-ave-adaptive.cpp
- **all-64**: file ./gaussian/gaussian-fixed-ave-all-64.cpp
- **error threshold = 5e-07**: file ./gaussian/math-gaussian-fixed-ave-5e-07.cpp 
- **error threshold = 1e-07**: file ./gaussian/math-gaussian-fixed-ave-1e-07.cpp 
- **error threshold = 5e-08**: file ./gaussian/math-gaussian-fixed-ave-5e-08.cpp 
- **error threshold = 1e-22**: file ./gaussian/math-gaussian-fixed-ave-1e-22.cpp 

**variable ranges**

- **x** : [-10.0, 10.0]
- **dev** : [1.0, 3.0] 



## gaussian -- fixed dev 

It is located at **./gaussian**, and it has seven versions.

- **all-32**: file ./gaussian/gaussian-fixed-dev-all-32.cpp
- **adaptive**: file ./gaussian/gaussian-fixed-dev-adaptive.cpp
- **all-64**: file ./gaussian/gaussian-fixed-dev-all-64.cpp
- **error threshold = 5e-07**: file ./gaussian/math-gaussian-fixed-dev-5e-07.cpp 
- **error threshold = 1e-07**: file ./gaussian/math-gaussian-fixed-dev-1e-07.cpp 
- **error threshold = 5e-08**: file ./gaussian/math-gaussian-fixed-dev-5e-08.cpp 
- **error threshold = 1e-22**: file ./gaussian/math-gaussian-fixed-dev-1e-22.cpp 

**variable ranges**

- **x** : [-10.0, 10.0]
- **ave** : [-1.0, 1.0] 



## gaussian -- all variables 

It is located at **./gaussian**, and it has seven versions.

- **all-32**: file ./gaussian/gaussian-allvars-all-32.cpp
- **adaptive**: file ./gaussian/gaussian-allvars-adaptive.cpp
- **all-64**: file ./gaussian/gaussian-allvars-all-64.cpp
- **error threshold = 5e-07**: file ./gaussian/math-gaussian-allvars-5e-07.cpp 
- **error threshold = 1e-07**: file ./gaussian/math-gaussian-allvars-1e-07.cpp 
- **error threshold = 5e-08**: file ./gaussian/math-gaussian-allvars-5e-08.cpp 
- **error threshold = 1e-22**: file ./gaussian/math-gaussian-allvars-1e-22.cpp 

**variable ranges**

- **x** : [-10.0, 10.0]
- **ave** : [-1.0, 1.0] 
- **dev** : [1.0, 3.0] 



## horner 

There are totally four versions of this benchmarks and they are located at **./horner**. 

- **all-32** : file horner-all-32.cpp 
- **adaptive-1e-05** : file adaptive-1e-05.cpp 
- **adaptive-1e-06** : file adaptive-1e-06.cpp 
- **all-64** : file horner-all-64.cpp 



## balanced-reduction 

There are totally three versions of this benchmarks and they are located at **./balanced-reduction**. 

- **all-32** : file bal-reduction-all-32.cpp  
- **mixed** : file bal-reduction-mixed.cpp 
- **all-64** : file bal-reduction-all-64.cpp 



## point-in-circle


There are totally four versions of this benchmarks and they are located at **./p-in-circle**. 

- **all-32** : located at ./p-in-circle-all-32
- **0.0001** : located at ./p-in-circle-0.0001 
- **5e-05** : located at ./p-in-circle-5e-05
- **all-64** : located at ./p-in-circle-all-64 



# point-in-sphere 

There are totally four versions of this benchmarks and they are located at **./p-in-sphere**. 

- **all-32** : located at ./p-in-sphere-all-32
- **0.001** : located at ./p-in-sphere-0.001
- **0.0005** : located at ./p-in-sphere-0.0005
- **all-64** : located at ./p-in-sphere-all-64
  


## NOTE 

- For all benchmarks, variables named with prefix "__const_" serve as constants. 


- If you really have time, try to generate inputs for the **gaussian** benchmarks by script **input-generator.py** located at **./gaussian**. 
It can be run by command 

```
python input-generator.py
```

CSV files **inputs-fixed-x.csv**, **input-fixed-ave.csv**, **input-fixed-dev.csv** and **input-allvars.csv** will be created. 
They are for the corresponding gaussian benchmarks which are suggested by the .csv file name. 


- Directory ./fptaylor/archive stores the old benchmarks... 


