#
# Copyright (c) 2017-2019 THL A29 Limited, a Tencent company. All Rights Reserved.
#
# Licensed under the Apache License, Version 2.0 (the "License");
# you may not use this file except in compliance with the License.
# You may obtain a copy of the License at
#
#    http://www.apache.org/licenses/LICENSE-2.0
#
# Unless required by applicable law or agreed to in writing, software
# distributed under the License is distributed on an "AS IS" BASIS,
# WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
# See the License for the specific language governing permissions and
# limitations under the License.
#

cmake_minimum_required(VERSION 3.1)

cmake_policy(SET CMP0048 NEW)

file(STRINGS "VERSION" version)

project(tencentcloud-sdk-cpp VERSION ${version})

message(STATUS "Project version: ${PROJECT_VERSION}")

set(TARGET_OUTPUT_NAME_PREFIX "tencentcloud-sdk-cpp-" CACHE STRING "The target's output name prefix")
option(BUILD_SHARED_LIBS  "Enable shared library" ON)
option(BUILD_FUNCTION_TESTS "Enable function test" OFF)

set(LIB_TYPE STATIC)
if(BUILD_SHARED_LIBS)
    set(LIB_TYPE SHARED)
endif()

set_property(GLOBAL
    PROPERTY
    USE_FOLDERS ON)

set(CMAKE_CXX_STANDARD 11)

# include(ExternalProject)
include(GNUInstallDirs)

if(BUILD_FUNCTION_TESTS)
    enable_testing()
    add_subdirectory(test/function_test/cvm)
    add_subdirectory(test/function_test/cbs)
endif()

add_subdirectory(core)
add_subdirectory(gme)
add_subdirectory(cdb)
add_subdirectory(dcdb)
add_subdirectory(faceid)
add_subdirectory(drm)
add_subdirectory(dts)
add_subdirectory(kms)
add_subdirectory(tia)
add_subdirectory(habo)
add_subdirectory(cbs)
add_subdirectory(iai)
add_subdirectory(emr)
add_subdirectory(monitor)
add_subdirectory(ms)
add_subdirectory(cvm)
add_subdirectory(cloudaudit)
add_subdirectory(mariadb)
add_subdirectory(bmlb)
add_subdirectory(ds)
add_subdirectory(bm)
add_subdirectory(redis)
add_subdirectory(scf)
add_subdirectory(cws)
add_subdirectory(bizlive)
add_subdirectory(soe)
add_subdirectory(ocr)
add_subdirectory(tmt)
add_subdirectory(tbp)
add_subdirectory(tav)
add_subdirectory(facefusion)
add_subdirectory(tbm)
add_subdirectory(cim)
add_subdirectory(tke)
add_subdirectory(mongodb)
add_subdirectory(tics)
add_subdirectory(tiia)
add_subdirectory(iot)
add_subdirectory(cds)
add_subdirectory(youmall)
add_subdirectory(aai)
add_subdirectory(postgres)
add_subdirectory(yunjing)
add_subdirectory(tcb)
add_subdirectory(vod)
add_subdirectory(cam)
add_subdirectory(cms)
add_subdirectory(cdn)
add_subdirectory(batch)
add_subdirectory(iotcloud)
add_subdirectory(partners)
add_subdirectory(msp)
add_subdirectory(live)
add_subdirectory(sqlserver)
add_subdirectory(dc)
add_subdirectory(nlp)
add_subdirectory(hcm)
add_subdirectory(as)
add_subdirectory(ic)
add_subdirectory(vpc)
add_subdirectory(bmeip)
add_subdirectory(yunsou)
add_subdirectory(es)
add_subdirectory(iotexplorer)
add_subdirectory(tbaas)
add_subdirectory(ecc)
add_subdirectory(tag)
add_subdirectory(ticm)
add_subdirectory(cis)
add_subdirectory(clb)
add_subdirectory(billing)
add_subdirectory(sts)
add_subdirectory(bmvpc)

