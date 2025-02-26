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

set(lowcode_public_header
  include/tencentcloud/lowcode/v20210108/LowcodeClient.h
  )

set(lowcode_public_header_model
  include/tencentcloud/lowcode/v20210108/model/DescribeKnowledgeSetListRequest.h
  include/tencentcloud/lowcode/v20210108/model/KnowledgeDocumentSetInfo.h
  include/tencentcloud/lowcode/v20210108/model/DeleteKnowledgeDocumentSetRsp.h
  include/tencentcloud/lowcode/v20210108/model/UploadKnowledgeDocumentSetRequest.h
  include/tencentcloud/lowcode/v20210108/model/UpdateKnowledgeSetResponse.h
  include/tencentcloud/lowcode/v20210108/model/SearchDocListRequest.h
  include/tencentcloud/lowcode/v20210108/model/DescribeKnowledgeDocumentSetListResponse.h
  include/tencentcloud/lowcode/v20210108/model/UploadKnowledgeDocumentSetRsp.h
  include/tencentcloud/lowcode/v20210108/model/DataSourceQueryOption.h
  include/tencentcloud/lowcode/v20210108/model/PageQuery.h
  include/tencentcloud/lowcode/v20210108/model/SearchDocListResponse.h
  include/tencentcloud/lowcode/v20210108/model/DeleteKnowledgeSetResponse.h
  include/tencentcloud/lowcode/v20210108/model/DocumentQuery.h
  include/tencentcloud/lowcode/v20210108/model/UpdateKnowledgeSetRequest.h
  include/tencentcloud/lowcode/v20210108/model/SearchDocInfo.h
  include/tencentcloud/lowcode/v20210108/model/DataSourceDetail.h
  include/tencentcloud/lowcode/v20210108/model/KnowledgeSet.h
  include/tencentcloud/lowcode/v20210108/model/KnowledgeSplitterPreprocess.h
  include/tencentcloud/lowcode/v20210108/model/DescribeKnowledgeDocumentSetDetailRequest.h
  include/tencentcloud/lowcode/v20210108/model/CreateKnowledgeSetResponse.h
  include/tencentcloud/lowcode/v20210108/model/DeleteKnowledgeSetRequest.h
  include/tencentcloud/lowcode/v20210108/model/RelationField.h
  include/tencentcloud/lowcode/v20210108/model/DescribeKnowledgeDocumentSetListRequest.h
  include/tencentcloud/lowcode/v20210108/model/DescribeDataSourceListRequest.h
  include/tencentcloud/lowcode/v20210108/model/DeleteKnowledgeDocumentSetRequest.h
  include/tencentcloud/lowcode/v20210108/model/QureyKnowledgeDocumentSet.h
  include/tencentcloud/lowcode/v20210108/model/DescribeKnowledgeSetListResponse.h
  include/tencentcloud/lowcode/v20210108/model/DescribeDataSourceListResponse.h
  include/tencentcloud/lowcode/v20210108/model/UploadKnowledgeDocumentSetResponse.h
  include/tencentcloud/lowcode/v20210108/model/DeleteKnowledgeDocumentSetResponse.h
  include/tencentcloud/lowcode/v20210108/model/TicketAuthInfo.h
  include/tencentcloud/lowcode/v20210108/model/CreateKnowledgeSetRequest.h
  include/tencentcloud/lowcode/v20210108/model/DescribeKnowledgeDocumentSetDetailRsp.h
  include/tencentcloud/lowcode/v20210108/model/QureyKnowledgeDocumentSetInfo.h
  include/tencentcloud/lowcode/v20210108/model/DescribeKnowledgeDocumentSetListRsp.h
  include/tencentcloud/lowcode/v20210108/model/KnowledgeDocumentSet.h
  include/tencentcloud/lowcode/v20210108/model/DescribeKnowledgeDocumentSetDetailResponse.h
  include/tencentcloud/lowcode/v20210108/model/DataSourceLinkApp.h
  include/tencentcloud/lowcode/v20210108/model/SearchDocRsp.h
  include/tencentcloud/lowcode/v20210108/model/KnowledgeSetRsp.h
  include/tencentcloud/lowcode/v20210108/model/DataSourceDetailItems.h
  )

set(lowcode_src
  src/v20210108/LowcodeClient.cpp
  src/v20210108/model/DescribeKnowledgeSetListRequest.cpp
  src/v20210108/model/KnowledgeDocumentSetInfo.cpp
  src/v20210108/model/DeleteKnowledgeDocumentSetRsp.cpp
  src/v20210108/model/UploadKnowledgeDocumentSetRequest.cpp
  src/v20210108/model/UpdateKnowledgeSetResponse.cpp
  src/v20210108/model/SearchDocListRequest.cpp
  src/v20210108/model/DescribeKnowledgeDocumentSetListResponse.cpp
  src/v20210108/model/UploadKnowledgeDocumentSetRsp.cpp
  src/v20210108/model/DataSourceQueryOption.cpp
  src/v20210108/model/PageQuery.cpp
  src/v20210108/model/SearchDocListResponse.cpp
  src/v20210108/model/DeleteKnowledgeSetResponse.cpp
  src/v20210108/model/DocumentQuery.cpp
  src/v20210108/model/UpdateKnowledgeSetRequest.cpp
  src/v20210108/model/SearchDocInfo.cpp
  src/v20210108/model/DataSourceDetail.cpp
  src/v20210108/model/KnowledgeSet.cpp
  src/v20210108/model/KnowledgeSplitterPreprocess.cpp
  src/v20210108/model/DescribeKnowledgeDocumentSetDetailRequest.cpp
  src/v20210108/model/CreateKnowledgeSetResponse.cpp
  src/v20210108/model/DeleteKnowledgeSetRequest.cpp
  src/v20210108/model/RelationField.cpp
  src/v20210108/model/DescribeKnowledgeDocumentSetListRequest.cpp
  src/v20210108/model/DescribeDataSourceListRequest.cpp
  src/v20210108/model/DeleteKnowledgeDocumentSetRequest.cpp
  src/v20210108/model/QureyKnowledgeDocumentSet.cpp
  src/v20210108/model/DescribeKnowledgeSetListResponse.cpp
  src/v20210108/model/DescribeDataSourceListResponse.cpp
  src/v20210108/model/UploadKnowledgeDocumentSetResponse.cpp
  src/v20210108/model/DeleteKnowledgeDocumentSetResponse.cpp
  src/v20210108/model/TicketAuthInfo.cpp
  src/v20210108/model/CreateKnowledgeSetRequest.cpp
  src/v20210108/model/DescribeKnowledgeDocumentSetDetailRsp.cpp
  src/v20210108/model/QureyKnowledgeDocumentSetInfo.cpp
  src/v20210108/model/DescribeKnowledgeDocumentSetListRsp.cpp
  src/v20210108/model/KnowledgeDocumentSet.cpp
  src/v20210108/model/DescribeKnowledgeDocumentSetDetailResponse.cpp
  src/v20210108/model/DataSourceLinkApp.cpp
  src/v20210108/model/SearchDocRsp.cpp
  src/v20210108/model/KnowledgeSetRsp.cpp
  src/v20210108/model/DataSourceDetailItems.cpp
  )

set(lowcode_include
    include/tencentcloud/lowcode
  )

add_library(lowcode ${LIB_TYPE}
  ${lowcode_public_header}
  ${lowcode_public_header_model}
  ${lowcode_src})

set_target_properties(lowcode
  PROPERTIES
  LINKER_LANGUAGE CXX
  ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
  LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
  RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin
  OUTPUT_NAME ${TARGET_OUTPUT_NAME_PREFIX}lowcode
  )

target_include_directories(lowcode
  PRIVATE include
    ${CMAKE_SOURCE_DIR}/core/include
  )
target_link_libraries(lowcode
  core)

#install(FILES ${lowcode_public_header}
#  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud/lowcode/v20210108)
#install(FILES ${lowcode_public_header_model}
#  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud/lowcode/v20210108/model)
install(DIRECTORY ${lowcode_include}
  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud)

install(TARGETS lowcode
  ARCHIVE DESTINATION ${CMAKE_INSTALL_LIBDIR}
  LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
  RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
  )
