#!/bin/bash
# create multiresolution windows icon
#mainnet
ICON_SRC=../../src/qt/res/icons/SmartGreenCoin.png
ICON_DST=../../src/qt/res/icons/SmartGreenCoin.ico
convert ${ICON_SRC} -resize 16x16 SmartGreenCoin-16.png
convert ${ICON_SRC} -resize 32x32 SmartGreenCoin-32.png
convert ${ICON_SRC} -resize 48x48 SmartGreenCoin-48.png
convert SmartGreenCoin-16.png SmartGreenCoin-32.png SmartGreenCoin-48.png ${ICON_DST}
#testnet
ICON_SRC=../../src/qt/res/icons/SmartGreenCoin_testnet.png
ICON_DST=../../src/qt/res/icons/SmartGreenCoin_testnet.ico
convert ${ICON_SRC} -resize 16x16 SmartGreenCoin-16.png
convert ${ICON_SRC} -resize 32x32 SmartGreenCoin-32.png
convert ${ICON_SRC} -resize 48x48 SmartGreenCoin-48.png
convert SmartGreenCoin-16.png SmartGreenCoin-32.png SmartGreenCoin-48.png ${ICON_DST}
rm SmartGreenCoin-16.png SmartGreenCoin-32.png SmartGreenCoin-48.png
