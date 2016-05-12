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

It is located at **./gaussian**, and it has three versions. 

- **all-32**: file ./gaussian/gaussian-fixed-x-all-32.cpp 
- **adaptive**: file ./gaussian/gaussian-fxied-x-adaptive.cpp 
- **all-64**: file ./gaussian/gaussian-fixed-x-all-64.cpp 

I would suggest using the input generation script **input-generator.py** located at **./gaussian** to generate inputs. 
By using command 

```
python input-generator.py
```

A CSV file **inputs-fixed-x.csv** will be created which contains the assignments to x, ave and dev (x is fixed to 0.0). 

**variable ranges** 
  
- **ave** : [-1.0, 1.0] 
- **dev** : [1.0, 3.0]



## gaussian -- fixed ave 

It is located at **./gaussian**, and it has three versions.

- **all-32**: file ./gaussian/gaussian-fixed-ave-all-32.cpp
- **adaptive**: file ./gaussian/gaussian-fixed-ave-adaptive.cpp
- **all-64**: file ./gaussian/gaussian-fixed-ave-all-64.cpp

I would **strongly** suggest using the input generation script **input-generator.py** located at **./gaussian** to generate inputs. 
The reason is that the distribution of x depends on ave and dev. 
By using command 

```
python input-generator.py
```

A CSV file **inputs-fixed-ave.csv** will be created which contains the assignments to x, ave and dev (ave is fixed to 0.0). 

**variable ranges**

- **x** : [-10.0, 10.0]
- **dev** : [1.0, 3.0] 



## gaussian -- fixed dev 

It is located at **./gaussian**, and it has three versions.

- **all-32**: file ./gaussian/gaussian-fixed-dev-all-32.cpp
- **adaptive**: file ./gaussian/gaussian-fixed-dev-adaptive.cpp
- **all-64**: file ./gaussian/gaussian-fixed-dev-all-64.cpp

I would **strongly** suggest using the input generation script **input-generator.py** located at **./gaussian** to generate inputs. 
The reason is that the distribution of x depends on ave and dev. 
By using command 

```
python input-generator.py
```

A CSV file **inputs-fixed-dev.csv** will be created which contains the assignments to x, ave and dev (dev is fixed to 1.0). 

**variable ranges**

- **x** : [-10.0, 10.0]
- **ave** : [-1.0, 1.0] 



## horner 

The benchmarks are coming... 
  


## NOTE 

- For all benchmarks, variables named with prefix "__const_" serve as constants. 

- Directory ./fptaylor/archive stores the old benchmarks... 


