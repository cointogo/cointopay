
Debian
====================
This directory contains files used to package cointopayd/cointopay-qt
for Debian-based Linux systems. If you compile cointopayd/cointopay-qt yourself, there are some useful files here.

## cointopay: URI support ##


cointopay-qt.desktop  (Gnome / Open Desktop)
To install:

	sudo desktop-file-install cointopay-qt.desktop
	sudo update-desktop-database

If you build yourself, you will either need to modify the paths in
the .desktop file or copy or symlink your cointopayqt binary to `/usr/bin`
and the `../../share/pixmaps/cointopay128.png` to `/usr/share/pixmaps`

cointopay-qt.protocol (KDE)

