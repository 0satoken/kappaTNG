#!/bin/sh

#fullphys
for i in `seq -w 1 100`
do
    for j in `seq -w 1 100`
    do
        curl -OL https://idark.ipmu.jp/~jia.liu/data/kappaTNG/fullphys/maps/LP${i}/LP${i}_run${j}_maps.hdf5
    done
done

#dmonly
for i in `seq -w 1 100`
do
    for j in `seq -w 1 100`
    do
        curl -OL https://idark.ipmu.jp/~jia.liu/data/kappaTNG/dmonly/maps/LP${i}/LP${i}_run${j}_maps.hdf5
    done
done
