import numpy as np
import matplotlib.pyplot as plt

q = 5e-6
omega = 100 * np.pi
T = 2 * np.pi / omega

t = np.linspace(0, 2 * T, 5000)
Q = q * np.sin(omega * t)

plt.plot(t, Q)
plt.grid(True, alpha=0.6)
plt.title('Charge Graph')
plt.xlabel('Time (s)')
plt.ylabel('Charge (C)')

plt.show()
