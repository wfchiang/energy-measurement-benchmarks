
import numpy 
import random 
import os 
import sys 


N_INPUTS = 100 

FNAME_fixed_x   = "inputs-fixed-x.csv"
FNAME_fixed_ave = "inputs-fixed-ave.csv" 
FNAME_fixed_dev = "inputs-fixed-dev.csv" 
FNAME_allvars   = "inputs-allvars.csv" 

f_fixed_x   = open(FNAME_fixed_x,   "w") 
f_fixed_ave = open(FNAME_fixed_ave, "w")
f_fixed_dev = open(FNAME_fixed_dev, "w") 
f_allvars   = open(FNAME_allvars,   "w") 

f_fixed_x.write("\"ave\",\"dev\",\"x\"\n") 
f_fixed_ave.write("\"ave\",\"dev\",\"x\"\n") 
f_fixed_dev.write("\"ave\",\"dev\",\"x\"\n") 
f_allvars.write("\"ave\",\"dev\",\"x\"\n") 


# for fixed x 
for i in range(0, N_INPUTS): 
    ave = random.uniform(-1.0, 1.0) 
    dev = random.uniform(1.0, 3.0) 
    x   = 0.0 

    f_fixed_x.write(str(ave) + "," + str(dev) + "," + str(x) + "\n")


# for fixed ave 
for i in range(0, N_INPUTS): 
    ave = 0.0 
    dev = random.uniform(1.0, 3.0) 
    x   = numpy.random.normal(ave, dev) 

    f_fixed_ave.write(str(ave) + "," + str(dev) + "," + str(x) + "\n")


# for fixed dev 
for i in range(0, N_INPUTS): 
    ave = random.uniform(-1.0, 1.0) 
    dev = 1.0 
    x   = numpy.random.normal(ave, dev) 

    f_fixed_dev.write(str(ave) + "," + str(dev) + "," + str(x) + "\n")


# for all variables 
for i in range(0, N_INPUTS): 
    ave = random.uniform(-1.0, 1.0)
    dev = random.uniform(1.0, 3.0) 
    x   = numpy.random.normal(ave, dev) 

    f_allvars.write(str(ave) + "," + str(dev) + "," + str(x) + "\n")


f_fixed_x.close() 
f_fixed_ave.close() 
f_fixed_dev.close() 
f_allvars.close() 
    
