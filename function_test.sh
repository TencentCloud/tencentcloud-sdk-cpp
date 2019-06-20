#!/bin/bash

cd `dirname $0`
echo '-------build function test----------'

MAKE=make
echo $MAKE

FT_BUILD_DIR=ft_build
rm -rf $FT_BUILD_DIR
mkdir $FT_BUILD_DIR
cd $FT_BUILD_DIR
cmake -DBUILD_FUNCTION_TESTS=ON ..
$MAKE core cvm cbs cvm_ft cbs_ft

echo '------- run function test -----------'

ctest --verbose
