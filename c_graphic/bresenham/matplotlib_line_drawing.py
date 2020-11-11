import matplotlib.pyplot as plt

# from dda_line_drawing import *
from bresenhams_line_drawing import *

# x, y = dda(2, 3, 10, 11)
x, y = brnhms(2, 2, 12, 8)

plt.plot(
    x,
    y,
    color="green",
    linestyle="dashed",
    linewidth=2,
    marker="o",
    markerfacecolor="blue",
    markersize=8,
)

# setting x and y axis range
plt.ylim(0, 10)
plt.xlim(0, 18)

# naming the x axis
plt.xlabel("x - axis")
# naming the y axis
plt.ylabel("y - axis")

# giving a title to my graph
plt.title("DDA Visualizer")

# function to show the plot
plt.show()
