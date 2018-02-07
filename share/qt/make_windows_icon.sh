#!/bin/bash
# create multiresolution windows icon
ICON_SRC=../../src/qt/res/icons/kbc.png
ICON_DST=../../src/qt/res/icons/kbc.ico
convert ${ICON_SRC} -resize 16x16 kbc-16.png
convert ${ICON_SRC} -resize 32x32 kbc-32.png
convert ${ICON_SRC} -resize 48x48 kbc-48.png
convert kbc-16.png kbc-32.png kbc-48.png ${ICON_DST}

