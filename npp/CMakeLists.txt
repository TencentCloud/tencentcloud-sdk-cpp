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

set(npp_public_header
  include/tencentcloud/npp/v20190823/NppClient.h
  )

set(npp_public_header_model
  include/tencentcloud/npp/v20190823/model/DescribeCallBackStatusRequest.h
  include/tencentcloud/npp/v20190823/model/DescribeCallBackCdrRequest.h
  include/tencentcloud/npp/v20190823/model/CreateCallBackRequest.h
  include/tencentcloud/npp/v20190823/model/DeleteCallBackRequest.h
  include/tencentcloud/npp/v20190823/model/GetVirtualNumResponse.h
  include/tencentcloud/npp/v20190823/model/DelVirtualNumResponse.h
  include/tencentcloud/npp/v20190823/model/CallBackCdr.h
  include/tencentcloud/npp/v20190823/model/RreCallerHandle.h
  include/tencentcloud/npp/v20190823/model/DescribeCallerDisplayListRequest.h
  include/tencentcloud/npp/v20190823/model/DescribeCallerDisplayListResponse.h
  include/tencentcloud/npp/v20190823/model/CallBackPhoneCode.h
  include/tencentcloud/npp/v20190823/model/CreateCallBackResponse.h
  include/tencentcloud/npp/v20190823/model/DelVirtualNumRequest.h
  include/tencentcloud/npp/v20190823/model/GetVirtualNumRequest.h
  include/tencentcloud/npp/v20190823/model/DeleteCallBackResponse.h
  include/tencentcloud/npp/v20190823/model/Get400CdrRequest.h
  include/tencentcloud/npp/v20190823/model/DescribeCallBackCdrResponse.h
  include/tencentcloud/npp/v20190823/model/KeyList.h
  include/tencentcloud/npp/v20190823/model/VirturalNumCdr.h
  include/tencentcloud/npp/v20190823/model/Get400CdrResponse.h
  include/tencentcloud/npp/v20190823/model/DescribeCallBackStatusResponse.h
  )

set(npp_src
  src/v20190823/NppClient.cpp
  src/v20190823/model/DescribeCallBackStatusRequest.cpp
  src/v20190823/model/DescribeCallBackCdrRequest.cpp
  src/v20190823/model/CreateCallBackRequest.cpp
  src/v20190823/model/DeleteCallBackRequest.cpp
  src/v20190823/model/GetVirtualNumResponse.cpp
  src/v20190823/model/DelVirtualNumResponse.cpp
  src/v20190823/model/CallBackCdr.cpp
  src/v20190823/model/RreCallerHandle.cpp
  src/v20190823/model/DescribeCallerDisplayListRequest.cpp
  src/v20190823/model/DescribeCallerDisplayListResponse.cpp
  src/v20190823/model/CallBackPhoneCode.cpp
  src/v20190823/model/CreateCallBackResponse.cpp
  src/v20190823/model/DelVirtualNumRequest.cpp
  src/v20190823/model/GetVirtualNumRequest.cpp
  src/v20190823/model/DeleteCallBackResponse.cpp
  src/v20190823/model/Get400CdrRequest.cpp
  src/v20190823/model/DescribeCallBackCdrResponse.cpp
  src/v20190823/model/KeyList.cpp
  src/v20190823/model/VirturalNumCdr.cpp
  src/v20190823/model/Get400CdrResponse.cpp
  src/v20190823/model/DescribeCallBackStatusResponse.cpp
  )

set(npp_include
    include/tencentcloud/npp
  )

add_library(npp ${LIB_TYPE}
  ${npp_public_header}
  ${npp_public_header_model}
  ${npp_src})

set_target_properties(npp
  PROPERTIES
  LINKER_LANGUAGE CXX
  ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
  LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
  RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin
  OUTPUT_NAME ${TARGET_OUTPUT_NAME_PREFIX}npp
  )

target_include_directories(npp
  PRIVATE include
    ${CMAKE_SOURCE_DIR}/core/include
  )
target_link_libraries(npp
  core)

#install(FILES ${npp_public_header}
#  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud/npp/v20190823)
#install(FILES ${npp_public_header_model}
#  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud/npp/v20190823/model)
install(DIRECTORY ${npp_include}
  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud)

install(TARGETS npp
  ARCHIVE DESTINATION ${CMAKE_INSTALL_LIBDIR}
  LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
  RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
  )
