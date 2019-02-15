def strange_function(n):
    s = 0
    for x in range(n):
        for y in range(n):
            for z in range(n):
                s += x + 2*y + z
    return s

strange_function(2000)