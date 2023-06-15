#!/bin/bash
# create multiresolution windows icon
ICON_DST=../../src/qt/res/icons/pepperscore.ico

convert ../../src/qt/res/icons/pepperscore-16.png ../../src/qt/res/icons/pepperscore-32.png ../../src/qt/res/icons/pepperscore-48.png ${ICON_DST}
