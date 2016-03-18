#!/usr/bin/env python 

import os
import sys


BENCHS = ["sine", "sqroot", "predatorPrey", "rigidBody-1", "turbine-1", "turbine-2", "turbine-3", "carbonGas", "jet"] 

CXX = "arm-linux-gnueabihf-g++ -O0" 



def cfassert(fname): 
    if (not os.path.isfile(fname)): 
        print ("ERROR: missing file : " + fname) 
        sys.exit(1) 



# ==== chech files ==== 
EXES = [] 

for b in BENCHS: 
    b_all32 = b + "-all32" 
    b_mix   = b + "-mix" 
    b_all64 = b + "-all64" 

    cfassert(b_all32 + ".cpp") 
    cfassert(b_mix   + ".cpp") 
    cfassert(b_all64 + ".cpp") 

    EXES.append(b_all32)
    EXES.append(b_mix) 
    EXES.append(b_all64) 



# ==== compile ====
for e in EXES: 
    os.system("rm " + e) 
    os.system(CXX + " -o " + e + " " + e + ".cpp") 

    cfassert(e) 



# ==== generate autotests ==== 
N_TESTS = 10 

autotests = open("./autotests", "w") 

for e in EXES: 
    autotests.write("echo \"==== " + e + " ====\"\n") 

    for i in range(0, N_TESTS): 
        autotests.write("./" + e + " " + str(i) + "\n") 

    autotests.write("\n") 

autotests.close() 


