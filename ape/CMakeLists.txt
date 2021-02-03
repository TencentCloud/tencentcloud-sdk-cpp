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

set(ape_public_header
  include/tencentcloud/ape/v20200513/ApeClient.h
  )

set(ape_public_header_model
  include/tencentcloud/ape/v20200513/model/DescribeImagesRequest.h
  include/tencentcloud/ape/v20200513/model/BatchDescribeOrderCertificateRequest.h
  include/tencentcloud/ape/v20200513/model/BatchDescribeOrderImageResponse.h
  include/tencentcloud/ape/v20200513/model/ImageItem.h
  include/tencentcloud/ape/v20200513/model/DescribeImagesResponse.h
  include/tencentcloud/ape/v20200513/model/ImageInfo.h
  include/tencentcloud/ape/v20200513/model/CreateOrderAndDownloadsRequest.h
  include/tencentcloud/ape/v20200513/model/ImageMarshal.h
  include/tencentcloud/ape/v20200513/model/BatchDescribeOrderCertificateResponse.h
  include/tencentcloud/ape/v20200513/model/DescribeImageResponse.h
  include/tencentcloud/ape/v20200513/model/DescribeAuthUsersResponse.h
  include/tencentcloud/ape/v20200513/model/DownloadInfo.h
  include/tencentcloud/ape/v20200513/model/AuthInfo.h
  include/tencentcloud/ape/v20200513/model/DescribeImageRequest.h
  include/tencentcloud/ape/v20200513/model/DescribeDownloadInfosResponse.h
  include/tencentcloud/ape/v20200513/model/CreateOrderAndPayResponse.h
  include/tencentcloud/ape/v20200513/model/DescribeAuthUsersRequest.h
  include/tencentcloud/ape/v20200513/model/DescribeDownloadInfosRequest.h
  include/tencentcloud/ape/v20200513/model/CreateOrderAndPayRequest.h
  include/tencentcloud/ape/v20200513/model/CreateOrderAndDownloadsResponse.h
  include/tencentcloud/ape/v20200513/model/BatchDescribeOrderImageRequest.h
  )

set(ape_src
  src/v20200513/ApeClient.cpp
  src/v20200513/model/DescribeImagesRequest.cpp
  src/v20200513/model/BatchDescribeOrderCertificateRequest.cpp
  src/v20200513/model/BatchDescribeOrderImageResponse.cpp
  src/v20200513/model/ImageItem.cpp
  src/v20200513/model/DescribeImagesResponse.cpp
  src/v20200513/model/ImageInfo.cpp
  src/v20200513/model/CreateOrderAndDownloadsRequest.cpp
  src/v20200513/model/ImageMarshal.cpp
  src/v20200513/model/BatchDescribeOrderCertificateResponse.cpp
  src/v20200513/model/DescribeImageResponse.cpp
  src/v20200513/model/DescribeAuthUsersResponse.cpp
  src/v20200513/model/DownloadInfo.cpp
  src/v20200513/model/AuthInfo.cpp
  src/v20200513/model/DescribeImageRequest.cpp
  src/v20200513/model/DescribeDownloadInfosResponse.cpp
  src/v20200513/model/CreateOrderAndPayResponse.cpp
  src/v20200513/model/DescribeAuthUsersRequest.cpp
  src/v20200513/model/DescribeDownloadInfosRequest.cpp
  src/v20200513/model/CreateOrderAndPayRequest.cpp
  src/v20200513/model/CreateOrderAndDownloadsResponse.cpp
  src/v20200513/model/BatchDescribeOrderImageRequest.cpp
  )

set(ape_include
    include/tencentcloud/ape
  )

add_library(ape ${LIB_TYPE}
  ${ape_public_header}
  ${ape_public_header_model}
  ${ape_src})

set_target_properties(ape
  PROPERTIES
  LINKER_LANGUAGE CXX
  ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
  LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
  RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin
  OUTPUT_NAME ${TARGET_OUTPUT_NAME_PREFIX}ape
  )

target_include_directories(ape
  PRIVATE include
    ${CMAKE_SOURCE_DIR}/core/include
  )
target_link_libraries(ape
  core)

#install(FILES ${ape_public_header}
#  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud/ape/v20200513)
#install(FILES ${ape_public_header_model}
#  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud/ape/v20200513/model)
install(DIRECTORY ${ape_include}
  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud)

install(TARGETS ape
  ARCHIVE DESTINATION ${CMAKE_INSTALL_LIBDIR}
  LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
  RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
  )
