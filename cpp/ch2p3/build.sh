#!/bin/bash

set -e

NUM_CORES=4
INCREMENTAL_BUILD=false
BUILD_DIR=build

if [ ! -d $BUILD_DIR ] ; then
  echo "creating build directory named: $BUILD_DIR"
  mkdir $BUILD_DIR
fi

OPTS=$(getopt :i "$@")
eval set -- "$OPTS"
while true ; do
  case "$1" in
    -i)
      INCREMENTAL_BUILD=true ; shift 1 ;;
    --) shift; break;;
  esac
done

if $INCREMENTAL_BUILD ; then
  RUN_CMAKE=false
else
  RUN_CMAKE=true
fi

cd $BUILD_DIR

if $RUN_CMAKE ; then
  cmake ..
fi

make -j $NUM_CORES
