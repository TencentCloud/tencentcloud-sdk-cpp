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

set(apcas_public_header
  include/tencentcloud/apcas/v20201127/ApcasClient.h
  )

set(apcas_public_header_model
  include/tencentcloud/apcas/v20201127/model/UploadIdResponse.h
  include/tencentcloud/apcas/v20201127/model/QueryCallDetailsRequest.h
  include/tencentcloud/apcas/v20201127/model/GeneralStat.h
  include/tencentcloud/apcas/v20201127/model/LabelValue.h
  include/tencentcloud/apcas/v20201127/model/GetTaskDetailResponse.h
  include/tencentcloud/apcas/v20201127/model/QueryCallDetailsResponse.h
  include/tencentcloud/apcas/v20201127/model/UploadIdRequest.h
  include/tencentcloud/apcas/v20201127/model/LabelDetailData.h
  include/tencentcloud/apcas/v20201127/model/QueryGeneralStatResponse.h
  include/tencentcloud/apcas/v20201127/model/PredictRatingRequest.h
  include/tencentcloud/apcas/v20201127/model/GetTaskListResponse.h
  include/tencentcloud/apcas/v20201127/model/CallStatItem.h
  include/tencentcloud/apcas/v20201127/model/CallDetailItem.h
  include/tencentcloud/apcas/v20201127/model/GetTaskListRequest.h
  include/tencentcloud/apcas/v20201127/model/TaskListData.h
  include/tencentcloud/apcas/v20201127/model/GetTaskDetailRequest.h
  include/tencentcloud/apcas/v20201127/model/CallDetails.h
  include/tencentcloud/apcas/v20201127/model/TaskDetailData.h
  include/tencentcloud/apcas/v20201127/model/RatingData.h
  include/tencentcloud/apcas/v20201127/model/QueryCallStatResponse.h
  include/tencentcloud/apcas/v20201127/model/QueryCallStatRequest.h
  include/tencentcloud/apcas/v20201127/model/ListModel.h
  include/tencentcloud/apcas/v20201127/model/TaskData.h
  include/tencentcloud/apcas/v20201127/model/QueryGeneralStatRequest.h
  include/tencentcloud/apcas/v20201127/model/PredictRatingResponse.h
  )

set(apcas_src
  src/v20201127/ApcasClient.cpp
  src/v20201127/model/UploadIdResponse.cpp
  src/v20201127/model/QueryCallDetailsRequest.cpp
  src/v20201127/model/GeneralStat.cpp
  src/v20201127/model/LabelValue.cpp
  src/v20201127/model/GetTaskDetailResponse.cpp
  src/v20201127/model/QueryCallDetailsResponse.cpp
  src/v20201127/model/UploadIdRequest.cpp
  src/v20201127/model/LabelDetailData.cpp
  src/v20201127/model/QueryGeneralStatResponse.cpp
  src/v20201127/model/PredictRatingRequest.cpp
  src/v20201127/model/GetTaskListResponse.cpp
  src/v20201127/model/CallStatItem.cpp
  src/v20201127/model/CallDetailItem.cpp
  src/v20201127/model/GetTaskListRequest.cpp
  src/v20201127/model/TaskListData.cpp
  src/v20201127/model/GetTaskDetailRequest.cpp
  src/v20201127/model/CallDetails.cpp
  src/v20201127/model/TaskDetailData.cpp
  src/v20201127/model/RatingData.cpp
  src/v20201127/model/QueryCallStatResponse.cpp
  src/v20201127/model/QueryCallStatRequest.cpp
  src/v20201127/model/ListModel.cpp
  src/v20201127/model/TaskData.cpp
  src/v20201127/model/QueryGeneralStatRequest.cpp
  src/v20201127/model/PredictRatingResponse.cpp
  )

set(apcas_include
    include/tencentcloud/apcas
  )

add_library(apcas ${LIB_TYPE}
  ${apcas_public_header}
  ${apcas_public_header_model}
  ${apcas_src})

set_target_properties(apcas
  PROPERTIES
  LINKER_LANGUAGE CXX
  ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
  LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
  RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin
  OUTPUT_NAME ${TARGET_OUTPUT_NAME_PREFIX}apcas
  )

target_include_directories(apcas
  PRIVATE include
    ${CMAKE_SOURCE_DIR}/core/include
  )
target_link_libraries(apcas
  core)

#install(FILES ${apcas_public_header}
#  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud/apcas/v20201127)
#install(FILES ${apcas_public_header_model}
#  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud/apcas/v20201127/model)
install(DIRECTORY ${apcas_include}
  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud)

install(TARGETS apcas
  ARCHIVE DESTINATION ${CMAKE_INSTALL_LIBDIR}
  LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
  RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
  )
