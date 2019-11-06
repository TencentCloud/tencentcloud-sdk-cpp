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

set(iottid_public_header
  include/tencentcloud/iottid/v20190411/IottidClient.h
  )

set(iottid_public_header_model
  include/tencentcloud/iottid/v20190411/model/DescribePermissionRequest.h
  include/tencentcloud/iottid/v20190411/model/VerifyChipBurnInfoResponse.h
  include/tencentcloud/iottid/v20190411/model/DeliverTidsResponse.h
  include/tencentcloud/iottid/v20190411/model/BurnTidNotifyResponse.h
  include/tencentcloud/iottid/v20190411/model/DescribeAvailableLibCountResponse.h
  include/tencentcloud/iottid/v20190411/model/UploadDeviceUniqueCodeResponse.h
  include/tencentcloud/iottid/v20190411/model/AuthTestTidResponse.h
  include/tencentcloud/iottid/v20190411/model/DeliverTidNotifyResponse.h
  include/tencentcloud/iottid/v20190411/model/AuthTestTidRequest.h
  include/tencentcloud/iottid/v20190411/model/BurnTidNotifyRequest.h
  include/tencentcloud/iottid/v20190411/model/VerifyChipBurnInfoRequest.h
  include/tencentcloud/iottid/v20190411/model/UploadDeviceUniqueCodeRequest.h
  include/tencentcloud/iottid/v20190411/model/DescribeAvailableLibCountRequest.h
  include/tencentcloud/iottid/v20190411/model/DeliverTidsRequest.h
  include/tencentcloud/iottid/v20190411/model/DeliverTidNotifyRequest.h
  include/tencentcloud/iottid/v20190411/model/TidKeysInfo.h
  include/tencentcloud/iottid/v20190411/model/DescribePermissionResponse.h
  include/tencentcloud/iottid/v20190411/model/DownloadTidsRequest.h
  include/tencentcloud/iottid/v20190411/model/DownloadTidsResponse.h
  )

set(iottid_src
  src/v20190411/IottidClient.cpp
  src/v20190411/model/DescribePermissionRequest.cpp
  src/v20190411/model/VerifyChipBurnInfoResponse.cpp
  src/v20190411/model/DeliverTidsResponse.cpp
  src/v20190411/model/BurnTidNotifyResponse.cpp
  src/v20190411/model/DescribeAvailableLibCountResponse.cpp
  src/v20190411/model/UploadDeviceUniqueCodeResponse.cpp
  src/v20190411/model/AuthTestTidResponse.cpp
  src/v20190411/model/DeliverTidNotifyResponse.cpp
  src/v20190411/model/AuthTestTidRequest.cpp
  src/v20190411/model/BurnTidNotifyRequest.cpp
  src/v20190411/model/VerifyChipBurnInfoRequest.cpp
  src/v20190411/model/UploadDeviceUniqueCodeRequest.cpp
  src/v20190411/model/DescribeAvailableLibCountRequest.cpp
  src/v20190411/model/DeliverTidsRequest.cpp
  src/v20190411/model/DeliverTidNotifyRequest.cpp
  src/v20190411/model/TidKeysInfo.cpp
  src/v20190411/model/DescribePermissionResponse.cpp
  src/v20190411/model/DownloadTidsRequest.cpp
  src/v20190411/model/DownloadTidsResponse.cpp
  )

set(iottid_include
    include/tencentcloud/iottid
  )

add_library(iottid ${LIB_TYPE}
  ${iottid_public_header}
  ${iottid_public_header_model}
  ${iottid_src})

set_target_properties(iottid
  PROPERTIES
  LINKER_LANGUAGE CXX
  ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
  LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
  RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin
  OUTPUT_NAME ${TARGET_OUTPUT_NAME_PREFIX}iottid
  )

target_include_directories(iottid
  PRIVATE include
    ${CMAKE_SOURCE_DIR}/core/include
  )
target_link_libraries(iottid
  core)

#install(FILES ${iottid_public_header}
#  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud/iottid/v20190411)
#install(FILES ${iottid_public_header_model}
#  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud/iottid/v20190411/model)
install(DIRECTORY ${iottid_include}
  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud)

install(TARGETS iottid
  ARCHIVE DESTINATION ${CMAKE_INSTALL_LIBDIR}
  LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
  RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
  )
