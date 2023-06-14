import numpy as np
from mpl_toolkits.mplot3d import axes3d
import matplotlib.pyplot as plt

x = np.linspace(-5, 5, 10)
y = np.linspace(-5, 5, 10)
xx, yy = np.meshgrid(x, y)
zz = (np.sqrt(np.sqrt(np.sqrt(3 * xx ** 24 + yy ** 20)))) ** (-1)

fig = plt.figure()
ax = fig.add_subplot(111, projection='3d')
ax.plot_surface(xx, yy, zz)
ax.set_xlabel('X')
ax.set_ylabel('Y')
ax.set_zlabel('Z')
ax.set_title('3D plot')
plt.show()
