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

set(mvj_public_header
  include/tencentcloud/mvj/v20190926/MvjClient.h
  )

set(mvj_public_header_model
  include/tencentcloud/mvj/v20190926/model/MarketingValueJudgementRequest.h
  include/tencentcloud/mvj/v20190926/model/Data.h
  include/tencentcloud/mvj/v20190926/model/MarketingValueJudgementResponse.h
  )

set(mvj_src
  src/v20190926/MvjClient.cpp
  src/v20190926/model/MarketingValueJudgementRequest.cpp
  src/v20190926/model/Data.cpp
  src/v20190926/model/MarketingValueJudgementResponse.cpp
  )

set(mvj_include
    include/tencentcloud/mvj
  )

add_library(mvj ${LIB_TYPE}
  ${mvj_public_header}
  ${mvj_public_header_model}
  ${mvj_src})

set_target_properties(mvj
  PROPERTIES
  LINKER_LANGUAGE CXX
  ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
  LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
  RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin
  OUTPUT_NAME ${TARGET_OUTPUT_NAME_PREFIX}mvj
  )

target_include_directories(mvj
  PRIVATE include
    ${CMAKE_SOURCE_DIR}/core/include
  )
target_link_libraries(mvj
  core)

#install(FILES ${mvj_public_header}
#  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud/mvj/v20190926)
#install(FILES ${mvj_public_header_model}
#  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud/mvj/v20190926/model)
install(DIRECTORY ${mvj_include}
  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud)

install(TARGETS mvj
  ARCHIVE DESTINATION ${CMAKE_INSTALL_LIBDIR}
  LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
  RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
  )
