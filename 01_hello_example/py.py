# A simple forward Euler solver for the ODE dy/dt = -y
import numpy as np
import matplotlib.pyplot as plt

def f(y):
    return -y

y0 = 1
t0 = 0
t1 = 10
h = 0.1

t = np.arange(t0, t1+h, h)
y = np.zeros_like(t)
y[0] = y0

for i in range(1, len(t)):
    y[i] = y[i-1] + h*f(y[i-1])

plt.plot(t, y)
plt.show()