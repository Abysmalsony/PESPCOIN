
Debian
====================
This directory contains files used to package PESPCOINd/PESPCOIN-qt
for Debian-based Linux systems. If you compile PESPCOINd/PESPCOIN-qt yourself, there are some useful files here.

## PESPCOIN: URI support ##


PESPCOIN-qt.desktop  (Gnome / Open Desktop)
To install:

	sudo desktop-file-install PESPCOIN-qt.desktop
	sudo update-desktop-database

If you build yourself, you will either need to modify the paths in
the .desktop file or copy or symlink your PESPCOIN-qt binary to `/usr/bin`
and the `../../share/pixmaps/PESPCOIN128.png` to `/usr/share/pixmaps`

PESPCOIN-qt.protocol (KDE)

