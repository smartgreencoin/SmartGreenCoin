
Debian
====================
This directory contains files used to package SmartGreenCoind/SmartGreenCoin-qt
for Debian-based Linux systems. If you compile SmartGreenCoind/SmartGreenCoin-qt yourself, there are some useful files here.

## SmartGreenCoin: URI support ##


SmartGreenCoin-qt.desktop  (Gnome / Open Desktop)
To install:

	sudo desktop-file-install SmartGreenCoin-qt.desktop
	sudo update-desktop-database

If you build yourself, you will either need to modify the paths in
the .desktop file or copy or symlink your SmartGreenCoinqt binary to `/usr/bin`
and the `../../share/pixmaps/SmartGreenCoin128.png` to `/usr/share/pixmaps`

SmartGreenCoin-qt.protocol (KDE)
