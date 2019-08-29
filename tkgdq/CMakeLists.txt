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

set(tkgdq_public_header
  include/tencentcloud/tkgdq/v20190411/TkgdqClient.h
  )

set(tkgdq_public_header_model
  include/tencentcloud/tkgdq/v20190411/model/TripleContent.h
  include/tencentcloud/tkgdq/v20190411/model/DescribeEntityRequest.h
  include/tencentcloud/tkgdq/v20190411/model/DescribeTripleRequest.h
  include/tencentcloud/tkgdq/v20190411/model/DescribeTripleResponse.h
  include/tencentcloud/tkgdq/v20190411/model/DescribeRelationResponse.h
  include/tencentcloud/tkgdq/v20190411/model/EntityRelationContent.h
  include/tencentcloud/tkgdq/v20190411/model/DescribeRelationRequest.h
  include/tencentcloud/tkgdq/v20190411/model/EntityRelationObject.h
  include/tencentcloud/tkgdq/v20190411/model/DescribeEntityResponse.h
  include/tencentcloud/tkgdq/v20190411/model/EntityRelationSubject.h
  )

set(tkgdq_src
  src/v20190411/TkgdqClient.cpp
  src/v20190411/model/TripleContent.cpp
  src/v20190411/model/DescribeEntityRequest.cpp
  src/v20190411/model/DescribeTripleRequest.cpp
  src/v20190411/model/DescribeTripleResponse.cpp
  src/v20190411/model/DescribeRelationResponse.cpp
  src/v20190411/model/EntityRelationContent.cpp
  src/v20190411/model/DescribeRelationRequest.cpp
  src/v20190411/model/EntityRelationObject.cpp
  src/v20190411/model/DescribeEntityResponse.cpp
  src/v20190411/model/EntityRelationSubject.cpp
  )

set(tkgdq_include
    include/tencentcloud/tkgdq
  )

add_library(tkgdq ${LIB_TYPE}
  ${tkgdq_public_header}
  ${tkgdq_public_header_model}
  ${tkgdq_src})

set_target_properties(tkgdq
  PROPERTIES
  LINKER_LANGUAGE CXX
  ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
  LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
  RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin
  OUTPUT_NAME ${TARGET_OUTPUT_NAME_PREFIX}tkgdq
  )

target_include_directories(tkgdq
  PRIVATE include
    ${CMAKE_SOURCE_DIR}/core/include
  )
target_link_libraries(tkgdq
  core)

#install(FILES ${tkgdq_public_header}
#  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud/tkgdq/v20190411)
#install(FILES ${tkgdq_public_header_model}
#  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud/tkgdq/v20190411/model)
install(DIRECTORY ${tkgdq_include}
  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud)

install(TARGETS tkgdq
  ARCHIVE DESTINATION ${CMAKE_INSTALL_LIBDIR}
  LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
  RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
  )
