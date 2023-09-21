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

set(car_public_header
  include/tencentcloud/car/v20220110/CarClient.h
  )

set(car_public_header_model
  include/tencentcloud/car/v20220110/model/CreateSessionResponse.h
  include/tencentcloud/car/v20220110/model/StopPublishStreamRequest.h
  include/tencentcloud/car/v20220110/model/StartPublishStreamWithURLResponse.h
  include/tencentcloud/car/v20220110/model/StopPublishStreamResponse.h
  include/tencentcloud/car/v20220110/model/StartPublishStreamWithURLRequest.h
  include/tencentcloud/car/v20220110/model/DestroySessionResponse.h
  include/tencentcloud/car/v20220110/model/StartPublishStreamResponse.h
  include/tencentcloud/car/v20220110/model/ApplyConcurrentResponse.h
  include/tencentcloud/car/v20220110/model/ApplyConcurrentRequest.h
  include/tencentcloud/car/v20220110/model/DestroySessionRequest.h
  include/tencentcloud/car/v20220110/model/StartPublishStreamRequest.h
  include/tencentcloud/car/v20220110/model/CreateSessionRequest.h
  )

set(car_src
  src/v20220110/CarClient.cpp
  src/v20220110/model/CreateSessionResponse.cpp
  src/v20220110/model/StopPublishStreamRequest.cpp
  src/v20220110/model/StartPublishStreamWithURLResponse.cpp
  src/v20220110/model/StopPublishStreamResponse.cpp
  src/v20220110/model/StartPublishStreamWithURLRequest.cpp
  src/v20220110/model/DestroySessionResponse.cpp
  src/v20220110/model/StartPublishStreamResponse.cpp
  src/v20220110/model/ApplyConcurrentResponse.cpp
  src/v20220110/model/ApplyConcurrentRequest.cpp
  src/v20220110/model/DestroySessionRequest.cpp
  src/v20220110/model/StartPublishStreamRequest.cpp
  src/v20220110/model/CreateSessionRequest.cpp
  )

set(car_include
    include/tencentcloud/car
  )

add_library(car ${LIB_TYPE}
  ${car_public_header}
  ${car_public_header_model}
  ${car_src})

set_target_properties(car
  PROPERTIES
  LINKER_LANGUAGE CXX
  ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
  LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
  RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin
  OUTPUT_NAME ${TARGET_OUTPUT_NAME_PREFIX}car
  )

target_include_directories(car
  PRIVATE include
    ${CMAKE_SOURCE_DIR}/core/include
  )
target_link_libraries(car
  core)

#install(FILES ${car_public_header}
#  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud/car/v20220110)
#install(FILES ${car_public_header_model}
#  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud/car/v20220110/model)
install(DIRECTORY ${car_include}
  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud)

install(TARGETS car
  ARCHIVE DESTINATION ${CMAKE_INSTALL_LIBDIR}
  LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
  RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
  )
