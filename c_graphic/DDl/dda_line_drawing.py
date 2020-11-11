def dda(x0, y0, X, Y):
    dx = abs(X - x0)
    dy = abs(Y - y0)
    sx = (X - x0) // dx
    sy = (Y - y0) // dy
    x = [x0]
    y = [y0]
    if (dx) > (dy):
        steps = dx
    else:
        steps = dy
    prevx = x0
    prevy = y0
    for i in range(1, steps + 1):
        prevx = prevx + (dx / (steps) * sx)
        prevy = prevy + (dy / (steps) * sy)
        x.append(round(prevx, 1))
        y.append(round(prevy, 1))
    return x, y


if __name__ == "__main__":
    x, y = dda(2, 3, 10, 11)
    print(f"x={x} and y={y}")
#     print(dda(5, 10, 2, 3))
#     print(dda(-5, 10, 2, -3))
#     print(dda(-5, -10, 2, 3))
