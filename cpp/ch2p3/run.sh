#!/bin/bash

set -e

BUILD_DIR=build
EXECUTABLE=main

if [ ! -f $BUILD_DIR/bin/$EXECUTABLE ] ; then
  echo "executable at $BUILD_DIR/bin/$EXECUTABLE does not exist. Building it now..."
  ./build.sh
fi

$BUILD_DIR/bin/$EXECUTABLE
