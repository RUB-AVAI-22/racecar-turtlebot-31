import numpy as np
import matplotlib.pyplot

def get_timestamp_as_float(msg):
    return msg.header.stamp.sec + msg.header.stamp.nanosec / 1e9

def is_range_in_range(inner_range, outer_range):    
    # check if at left border
    if inner_range[0] < -1:
        # check only right border
        return inner_range[1] <= outer_range[1]
    #check if at right border
    elif inner_range[1] > 1:
        # check only left border
        return outer_range[0] <= inner_range[0]
    else:
        # check both borders
        return outer_range[0] <= inner_range[0] and inner_range[1] <= outer_range[1]
    



class Map:
    def __init__(self, size=10*100) -> None:
        # all distances are in mm
        self.size = size
        self.data = np.zeros((size, size)) - 1
        
    def plot(self):
        pass

map = Map()
print(map.data)
