import matplotlib.pyplot as plt

# from dda_line_drawing import *
from circle_drawing import *

# x, y = dda(2, 3, 10, 11)
x = list(map(lambda y: y[0], solver(Point(4, 4), 10)))
y = list(map(lambda x: x[1], solver(Point(4, 4), 10)))
plt.plot(x, y)

# naming the x axis
plt.xlabel("x - axis")
# naming the y axis
plt.ylabel("y - axis")

# giving a title to my graph
plt.title("CIRCLE ")

# function to show the plot
plt.show()
# plt.plot(
#     x,
#     y,
#     color="green",
#     linestyle="dashed",
#     linewidth=2,
#     marker="o",
#     markerfacecolor="blue",
#     markersize=8,
# )

# # setting x and y axis range
# plt.ylim(-10, 20)
# plt.xlim(-10, 20)

# # naming the x axis
# plt.xlabel("x - axis")
# # naming the y axis
# plt.ylabel("y - axis")

# # giving a title to my graph
# plt.title("DDA Visualizer")

# # function to show the plot
# plt.show()
