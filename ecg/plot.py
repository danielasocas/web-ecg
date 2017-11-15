import matplotlib.pyplot as plt
import matplotlib.ticker as ticker
import scipy.io as sio
import numpy as np
from . import savefig as sf

mat = sio.loadmat("/home/manuel/Documents/Minip/Dataset/training2017/A00002.mat")
fig, ax = plt.subplots(figsize=(200, 50))

ax.set_axisbelow(True)

ax.minorticks_on()
minor_ylocator = ticker.AutoMinorLocator(5)
minor_xlocator = ticker.AutoMinorLocator(5)
ax.xaxis.set_minor_locator(minor_xlocator)
ax.yaxis.set_minor_locator(minor_ylocator)

ax.grid(which='major', linestyle='-', linewidth='0.5', color='black')
ax.grid(which='minor', linestyle=':', linewidth='0.2', color='black')

ax.patch.set_facecolor("#fff4f0")

x = np.linspace(0, 9000, 30, endpoint=True)
mat = mat["val"].tolist()[0]

plt.plot(x,mat,linewidth="0.2", color="black")

fig.show()

sf.save("guhhh", ext="pdf", close=True, verbose=True)