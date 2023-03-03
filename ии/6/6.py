def qZ(x,y):
    return (x - 3 *y)/(2*(x**2)+2*(y**2)+1)

def qsumZ(Z):
    return sum(Z)

def exchangeScheme(oldX, oldY, sortedId): 
    X = [0 for i in range(4)] 
    Y = [0 for i in range(4)]
    print(oldX)
    X[2] = oldX[sortedId[2]] 
    X[3] = oldX[sortedId[2]]
    X[0] = oldX[sortedId[0]]
    X[1] = oldX[sortedId[1]]
    Y[0] = oldY[sortedId[2]] 
    Y[1] = oldY[sortedId[2]]
    Y[2] = oldY[sortedId[0]]
    Y[3] = oldY[sortedId[1]]
    return X,Y


def sorting(Z):
    print(Z,1)
    sortedId = sorted(range(len(Z)), key = lambda k: Z[k])
    print(sortedId,2)
    return sortedId


def evoStep(X, Y, Z):
    _, minId = min((value, id) for (id, value) in enumerate(Z)) 
    X = X[:]
    Y = Y[:]
    Z = Z[:]
    X. pop(minId)
    Y.pop(minId)
    Z.pop(minId)
    return X, Y, Z

def evoSteps(X, Y): 
    results = []
    for i in range(4): 
        arrZ = [qZ(x, Y[i]) for i, x in enumerate(X)]
        X,Y,Z = evoStep(X, Y, arrZ)
        Z, Y = exchangeScheme(X, Y, sorting(Z))
        results.append([X, Y, qsumZ(arrZ), arrZ])
    return X, Y, results

X = [-1,0,2,3]
Y = [0,1,-2,2]
results = evoSteps(X,Y)

for i in range(len(results[2])):
    print(results[2][i][2])

qualityArrZ = [] 
for i in range(len(results[2])):
    qualityArrZ += results[2][i][3]
print(f'max Z: {max(qualityArrZ)}')