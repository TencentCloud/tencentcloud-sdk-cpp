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

set(svp_public_header
  include/tencentcloud/svp/v20240125/SvpClient.h
  )

set(svp_public_header_model
  include/tencentcloud/svp/v20240125/model/CreateSavingPlanOrderRequest.h
  include/tencentcloud/svp/v20240125/model/DescribeSavingPlanCoverageRequest.h
  include/tencentcloud/svp/v20240125/model/CreateSavingPlanOrderResponse.h
  include/tencentcloud/svp/v20240125/model/DescribeSavingPlanDeductRequest.h
  include/tencentcloud/svp/v20240125/model/SavingPlanOverviewDetail.h
  include/tencentcloud/svp/v20240125/model/SavingPlanCoverageRate.h
  include/tencentcloud/svp/v20240125/model/DescribeSavingPlanUsageRequest.h
  include/tencentcloud/svp/v20240125/model/SavingPlanDeductDetail.h
  include/tencentcloud/svp/v20240125/model/SavingPlanCoverageDetail.h
  include/tencentcloud/svp/v20240125/model/DescribeSavingPlanOverviewResponse.h
  include/tencentcloud/svp/v20240125/model/DescribeSavingPlanUsageResponse.h
  include/tencentcloud/svp/v20240125/model/DescribeSavingPlanDeductResponse.h
  include/tencentcloud/svp/v20240125/model/DescribeSavingPlanOverviewRequest.h
  include/tencentcloud/svp/v20240125/model/SavingPlanUsageDetail.h
  include/tencentcloud/svp/v20240125/model/DescribeSavingPlanCoverageResponse.h
  )

set(svp_src
  src/v20240125/SvpClient.cpp
  src/v20240125/model/CreateSavingPlanOrderRequest.cpp
  src/v20240125/model/DescribeSavingPlanCoverageRequest.cpp
  src/v20240125/model/CreateSavingPlanOrderResponse.cpp
  src/v20240125/model/DescribeSavingPlanDeductRequest.cpp
  src/v20240125/model/SavingPlanOverviewDetail.cpp
  src/v20240125/model/SavingPlanCoverageRate.cpp
  src/v20240125/model/DescribeSavingPlanUsageRequest.cpp
  src/v20240125/model/SavingPlanDeductDetail.cpp
  src/v20240125/model/SavingPlanCoverageDetail.cpp
  src/v20240125/model/DescribeSavingPlanOverviewResponse.cpp
  src/v20240125/model/DescribeSavingPlanUsageResponse.cpp
  src/v20240125/model/DescribeSavingPlanDeductResponse.cpp
  src/v20240125/model/DescribeSavingPlanOverviewRequest.cpp
  src/v20240125/model/SavingPlanUsageDetail.cpp
  src/v20240125/model/DescribeSavingPlanCoverageResponse.cpp
  )

set(svp_include
    include/tencentcloud/svp
  )

add_library(svp ${LIB_TYPE}
  ${svp_public_header}
  ${svp_public_header_model}
  ${svp_src})

set_target_properties(svp
  PROPERTIES
  LINKER_LANGUAGE CXX
  ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
  LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
  RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin
  OUTPUT_NAME ${TARGET_OUTPUT_NAME_PREFIX}svp
  )

target_include_directories(svp
  PRIVATE include
    ${CMAKE_SOURCE_DIR}/core/include
  )
target_link_libraries(svp
  core)

#install(FILES ${svp_public_header}
#  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud/svp/v20240125)
#install(FILES ${svp_public_header_model}
#  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud/svp/v20240125/model)
install(DIRECTORY ${svp_include}
  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud)

install(TARGETS svp
  ARCHIVE DESTINATION ${CMAKE_INSTALL_LIBDIR}
  LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
  RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
  )
