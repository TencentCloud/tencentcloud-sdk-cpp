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

set(icr_public_header
  include/tencentcloud/icr/v20211014/IcrClient.h
  )

set(icr_public_header_model
  include/tencentcloud/icr/v20211014/model/ReqMetadataVagrant.h
  include/tencentcloud/icr/v20211014/model/GetIndustryV1HomeMembersRespIndustry.h
  include/tencentcloud/icr/v20211014/model/ReqMetadata.h
  include/tencentcloud/icr/v20211014/model/GetIndustryV1HomeMembersRespData.h
  include/tencentcloud/icr/v20211014/model/GetIndustryV1HomeMembersRequest.h
  include/tencentcloud/icr/v20211014/model/GetIndustryV1HomeMembersRespFeature.h
  include/tencentcloud/icr/v20211014/model/GetIndustryV1HomeMembersReqPayload.h
  include/tencentcloud/icr/v20211014/model/GetIndustryV1HomeMembersRespProduct.h
  include/tencentcloud/icr/v20211014/model/RspMetadata.h
  include/tencentcloud/icr/v20211014/model/GetIndustryV1HomeMembersRespPayload.h
  include/tencentcloud/icr/v20211014/model/GetIndustryV1HomeMembersResponse.h
  include/tencentcloud/icr/v20211014/model/ReqMetadataLBS.h
  include/tencentcloud/icr/v20211014/model/GetIndustryV1HomeMembersRespType.h
  )

set(icr_src
  src/v20211014/IcrClient.cpp
  src/v20211014/model/ReqMetadataVagrant.cpp
  src/v20211014/model/GetIndustryV1HomeMembersRespIndustry.cpp
  src/v20211014/model/ReqMetadata.cpp
  src/v20211014/model/GetIndustryV1HomeMembersRespData.cpp
  src/v20211014/model/GetIndustryV1HomeMembersRequest.cpp
  src/v20211014/model/GetIndustryV1HomeMembersRespFeature.cpp
  src/v20211014/model/GetIndustryV1HomeMembersReqPayload.cpp
  src/v20211014/model/GetIndustryV1HomeMembersRespProduct.cpp
  src/v20211014/model/RspMetadata.cpp
  src/v20211014/model/GetIndustryV1HomeMembersRespPayload.cpp
  src/v20211014/model/GetIndustryV1HomeMembersResponse.cpp
  src/v20211014/model/ReqMetadataLBS.cpp
  src/v20211014/model/GetIndustryV1HomeMembersRespType.cpp
  )

set(icr_include
    include/tencentcloud/icr
  )

add_library(icr ${LIB_TYPE}
  ${icr_public_header}
  ${icr_public_header_model}
  ${icr_src})

set_target_properties(icr
  PROPERTIES
  LINKER_LANGUAGE CXX
  ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
  LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
  RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin
  OUTPUT_NAME ${TARGET_OUTPUT_NAME_PREFIX}icr
  )

target_include_directories(icr
  PRIVATE include
    ${CMAKE_SOURCE_DIR}/core/include
  )
target_link_libraries(icr
  core)

#install(FILES ${icr_public_header}
#  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud/icr/v20211014)
#install(FILES ${icr_public_header_model}
#  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud/icr/v20211014/model)
install(DIRECTORY ${icr_include}
  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud)

install(TARGETS icr
  ARCHIVE DESTINATION ${CMAKE_INSTALL_LIBDIR}
  LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
  RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
  )
