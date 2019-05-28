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

set(cr_public_header
  include/tencentcloud/cr/v20180321/CrClient.h
  )

set(cr_public_header_model
  include/tencentcloud/cr/v20180321/model/DescribeCreditResultRequest.h
  include/tencentcloud/cr/v20180321/model/DescribeTaskStatusRequest.h
  include/tencentcloud/cr/v20180321/model/ApplyBlackListRequest.h
  include/tencentcloud/cr/v20180321/model/ApplyCreditAuditRequest.h
  include/tencentcloud/cr/v20180321/model/DownloadReportResponse.h
  include/tencentcloud/cr/v20180321/model/DescribeCreditResultResponse.h
  include/tencentcloud/cr/v20180321/model/UploadFileRequest.h
  include/tencentcloud/cr/v20180321/model/UploadFileResponse.h
  include/tencentcloud/cr/v20180321/model/ApplyBlackListResponse.h
  include/tencentcloud/cr/v20180321/model/DescribeRecordsRequest.h
  include/tencentcloud/cr/v20180321/model/DescribeTaskStatusResponse.h
  include/tencentcloud/cr/v20180321/model/DescribeRecordsResponse.h
  include/tencentcloud/cr/v20180321/model/DownloadReportRequest.h
  include/tencentcloud/cr/v20180321/model/ApplyCreditAuditResponse.h
  include/tencentcloud/cr/v20180321/model/UploadDataFileResponse.h
  include/tencentcloud/cr/v20180321/model/SingleBlackApply.h
  include/tencentcloud/cr/v20180321/model/UploadDataFileRequest.h
  include/tencentcloud/cr/v20180321/model/SingleRecord.h
  )

set(cr_src
  src/v20180321/CrClient.cpp
  src/v20180321/model/DescribeCreditResultRequest.cpp
  src/v20180321/model/DescribeTaskStatusRequest.cpp
  src/v20180321/model/ApplyBlackListRequest.cpp
  src/v20180321/model/ApplyCreditAuditRequest.cpp
  src/v20180321/model/DownloadReportResponse.cpp
  src/v20180321/model/DescribeCreditResultResponse.cpp
  src/v20180321/model/UploadFileRequest.cpp
  src/v20180321/model/UploadFileResponse.cpp
  src/v20180321/model/ApplyBlackListResponse.cpp
  src/v20180321/model/DescribeRecordsRequest.cpp
  src/v20180321/model/DescribeTaskStatusResponse.cpp
  src/v20180321/model/DescribeRecordsResponse.cpp
  src/v20180321/model/DownloadReportRequest.cpp
  src/v20180321/model/ApplyCreditAuditResponse.cpp
  src/v20180321/model/UploadDataFileResponse.cpp
  src/v20180321/model/SingleBlackApply.cpp
  src/v20180321/model/UploadDataFileRequest.cpp
  src/v20180321/model/SingleRecord.cpp
  )

set(cr_include
    include/tencentcloud/cr
  )

add_library(cr ${LIB_TYPE}
  ${cr_public_header}
  ${cr_public_header_model}
  ${cr_src})

set_target_properties(cr
  PROPERTIES
  LINKER_LANGUAGE CXX
  ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
  LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
  RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin
  OUTPUT_NAME ${TARGET_OUTPUT_NAME_PREFIX}cr
  )

target_include_directories(cr
  PRIVATE include
    ${CMAKE_SOURCE_DIR}/core/include
  )
target_link_libraries(cr
  core)

#install(FILES ${cr_public_header}
#  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud/cr/v20180321)
#install(FILES ${cr_public_header_model}
#  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud/cr/v20180321/model)
install(DIRECTORY ${cr_include}
  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud)

install(TARGETS cr
  ARCHIVE DESTINATION ${CMAKE_INSTALL_LIBDIR}
  LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
  RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
  )
