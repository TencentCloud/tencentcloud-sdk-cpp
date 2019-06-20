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

set(cloudaudit_public_header
  include/tencentcloud/cloudaudit/v20190319/CloudauditClient.h
  )

set(cloudaudit_public_header_model
  include/tencentcloud/cloudaudit/v20190319/model/InquireAuditCreditResponse.h
  include/tencentcloud/cloudaudit/v20190319/model/StopLoggingRequest.h
  include/tencentcloud/cloudaudit/v20190319/model/CmqRegionInfo.h
  include/tencentcloud/cloudaudit/v20190319/model/GetAttributeKeyRequest.h
  include/tencentcloud/cloudaudit/v20190319/model/DeleteAuditResponse.h
  include/tencentcloud/cloudaudit/v20190319/model/UpdateAuditRequest.h
  include/tencentcloud/cloudaudit/v20190319/model/InquireAuditCreditRequest.h
  include/tencentcloud/cloudaudit/v20190319/model/ListAuditsRequest.h
  include/tencentcloud/cloudaudit/v20190319/model/LookUpEventsRequest.h
  include/tencentcloud/cloudaudit/v20190319/model/StartLoggingRequest.h
  include/tencentcloud/cloudaudit/v20190319/model/CreateAuditResponse.h
  include/tencentcloud/cloudaudit/v20190319/model/StartLoggingResponse.h
  include/tencentcloud/cloudaudit/v20190319/model/AttributeKeyDetail.h
  include/tencentcloud/cloudaudit/v20190319/model/ListCosEnableRegionRequest.h
  include/tencentcloud/cloudaudit/v20190319/model/Resource.h
  include/tencentcloud/cloudaudit/v20190319/model/ListCosEnableRegionResponse.h
  include/tencentcloud/cloudaudit/v20190319/model/StopLoggingResponse.h
  include/tencentcloud/cloudaudit/v20190319/model/LookupAttribute.h
  include/tencentcloud/cloudaudit/v20190319/model/ListAuditsResponse.h
  include/tencentcloud/cloudaudit/v20190319/model/UpdateAuditResponse.h
  include/tencentcloud/cloudaudit/v20190319/model/DescribeAuditRequest.h
  include/tencentcloud/cloudaudit/v20190319/model/CreateAuditRequest.h
  include/tencentcloud/cloudaudit/v20190319/model/DeleteAuditRequest.h
  include/tencentcloud/cloudaudit/v20190319/model/ListCmqEnableRegionRequest.h
  include/tencentcloud/cloudaudit/v20190319/model/GetAttributeKeyResponse.h
  include/tencentcloud/cloudaudit/v20190319/model/ListCmqEnableRegionResponse.h
  include/tencentcloud/cloudaudit/v20190319/model/LookUpEventsResponse.h
  include/tencentcloud/cloudaudit/v20190319/model/CosRegionInfo.h
  include/tencentcloud/cloudaudit/v20190319/model/DescribeAuditResponse.h
  include/tencentcloud/cloudaudit/v20190319/model/Event.h
  include/tencentcloud/cloudaudit/v20190319/model/AuditSummary.h
  )

set(cloudaudit_src
  src/v20190319/CloudauditClient.cpp
  src/v20190319/model/InquireAuditCreditResponse.cpp
  src/v20190319/model/StopLoggingRequest.cpp
  src/v20190319/model/CmqRegionInfo.cpp
  src/v20190319/model/GetAttributeKeyRequest.cpp
  src/v20190319/model/DeleteAuditResponse.cpp
  src/v20190319/model/UpdateAuditRequest.cpp
  src/v20190319/model/InquireAuditCreditRequest.cpp
  src/v20190319/model/ListAuditsRequest.cpp
  src/v20190319/model/LookUpEventsRequest.cpp
  src/v20190319/model/StartLoggingRequest.cpp
  src/v20190319/model/CreateAuditResponse.cpp
  src/v20190319/model/StartLoggingResponse.cpp
  src/v20190319/model/AttributeKeyDetail.cpp
  src/v20190319/model/ListCosEnableRegionRequest.cpp
  src/v20190319/model/Resource.cpp
  src/v20190319/model/ListCosEnableRegionResponse.cpp
  src/v20190319/model/StopLoggingResponse.cpp
  src/v20190319/model/LookupAttribute.cpp
  src/v20190319/model/ListAuditsResponse.cpp
  src/v20190319/model/UpdateAuditResponse.cpp
  src/v20190319/model/DescribeAuditRequest.cpp
  src/v20190319/model/CreateAuditRequest.cpp
  src/v20190319/model/DeleteAuditRequest.cpp
  src/v20190319/model/ListCmqEnableRegionRequest.cpp
  src/v20190319/model/GetAttributeKeyResponse.cpp
  src/v20190319/model/ListCmqEnableRegionResponse.cpp
  src/v20190319/model/LookUpEventsResponse.cpp
  src/v20190319/model/CosRegionInfo.cpp
  src/v20190319/model/DescribeAuditResponse.cpp
  src/v20190319/model/Event.cpp
  src/v20190319/model/AuditSummary.cpp
  )

set(cloudaudit_include
    include/tencentcloud/cloudaudit
  )

add_library(cloudaudit ${LIB_TYPE}
  ${cloudaudit_public_header}
  ${cloudaudit_public_header_model}
  ${cloudaudit_src})

set_target_properties(cloudaudit
  PROPERTIES
  LINKER_LANGUAGE CXX
  ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
  LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
  RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin
  OUTPUT_NAME ${TARGET_OUTPUT_NAME_PREFIX}cloudaudit
  )

target_include_directories(cloudaudit
  PRIVATE include
    ${CMAKE_SOURCE_DIR}/core/include
  )
target_link_libraries(cloudaudit
  core)

#install(FILES ${cloudaudit_public_header}
#  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud/cloudaudit/v20190319)
#install(FILES ${cloudaudit_public_header_model}
#  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud/cloudaudit/v20190319/model)
install(DIRECTORY ${cloudaudit_include}
  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud)

install(TARGETS cloudaudit
  ARCHIVE DESTINATION ${CMAKE_INSTALL_LIBDIR}
  LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
  RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
  )
