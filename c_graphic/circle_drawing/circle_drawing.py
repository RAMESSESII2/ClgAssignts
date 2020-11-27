import sys


class Point:
    def __init__(self, x, y):
        self.x = x
        self.y = y


def solver(center, r):
    x = 0
    y = r
    p = 1 - r
    points = []
    points.extend(
        [
            (center.x, y + center.y),
            (center.x, -y + center.y),
            (y + center.x, x + center.y),
            (-y + center.x, x + center.y),
        ]
    )
    while x <= y:
        x += 1
        if p < 0:
            p += 2 * x + 1
        else:
            y -= 1
            p += 2 * x - 2 * y + 1
        if x > y:
            break
        points.extend(
            [
                (x + center.x, y + center.y),
                (-x + center.x, y + center.y),
                (x + center.x, -y + center.y),
                (-x + center.x, -y + center.y),
            ]
        )
        if x != y:
            points.extend(
                [
                    (y + center.y, x + center.x),
                    (-y + center.y, x + center.x),
                    (y + center.y, -x + center.x),
                    (-y + center.y, -x + center.x),
                ]
            )
    # points.sort(key=lambda x: x[0])
    points.sort(key=lambda i: 0 if i[1] == 0 else -1 / i[1])
    return points


if __name__ == "__main__":
    r = int(sys.stdin.readline())
    n, m = map(int, sys.stdin.readline().split())
    center = Point(n, m)
    print(solver(center, r))
