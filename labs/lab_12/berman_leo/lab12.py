import sys
import numpy

# Function call to read matrix given a filename
#
def readmatrix(arg1):

    # Opens the file
    #
    file=open(arg1,"r")
    
    # Reads the lines into a list
    #
    f=file.readlines()
    
    # Grabs the dimensions and clears the new lines
    #
    rows,cols=f[0].strip().split()
    
    # Sets a working count
    #
    count = 1
    
    # Defines a matrix
    #
    mat = []
    
    # Loops through appending the matrix
    #
    while (count <= int(rows)):
        
        # Tokenizes and removes the new line character
        #
        list = f[int(count)].strip().split()

        # Converts values into floats from strings
        #
        listfloat = [float(x) for x in list]
        
        # appends the matrix
        #
        mat.append(listfloat)
        
        # Keeps count of the row number
        #
        count = count+1
        
    # returns the matrix
    #
    return mat

# Calls functions
#
mat1 = readmatrix(sys.argv[1])
mat2 = readmatrix(sys.argv[2])

try:
    # Multiplies the matrixes
    #
    mat3 = numpy.matmul(mat1,mat2)

except:
    print("Error multiplying matrixes, check for dimensions\n")
    exit()

# Prints the matrixes
#
print("\n")
for x in mat1:
    print("",x,"\n")

print("\n*\n")
for x in mat2:
    print("",x,"\n")
print("\n=\n")

for x in mat3:
    print("",x,"\n")
