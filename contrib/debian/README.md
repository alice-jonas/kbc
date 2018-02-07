
Debian
====================
This directory contains files used to package kbcd/kbc-qt
for Debian-based Linux systems. If you compile kbcd/kbc-qt yourself, there are some useful files here.

## kbc: URI support ##


kbc-qt.desktop  (Gnome / Open Desktop)
To install:

	sudo desktop-file-install kbc-qt.desktop
	sudo update-desktop-database

If you build yourself, you will either need to modify the paths in
the .desktop file or copy or symlink your kbc-qt binary to `/usr/bin`
and the `../../share/pixmaps/kbc128.png` to `/usr/share/pixmaps`

kbc-qt.protocol (KDE)

