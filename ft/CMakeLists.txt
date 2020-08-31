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

set(ft_public_header
  include/tencentcloud/ft/v20200304/FtClient.h
  )

set(ft_public_header_model
  include/tencentcloud/ft/v20200304/model/QueryFaceMorphJobResponse.h
  include/tencentcloud/ft/v20200304/model/CancelFaceMorphJobResponse.h
  include/tencentcloud/ft/v20200304/model/AgeInfo.h
  include/tencentcloud/ft/v20200304/model/FaceRect.h
  include/tencentcloud/ft/v20200304/model/GenderInfo.h
  include/tencentcloud/ft/v20200304/model/SwapGenderPicRequest.h
  include/tencentcloud/ft/v20200304/model/GradientInfo.h
  include/tencentcloud/ft/v20200304/model/SwapGenderPicResponse.h
  include/tencentcloud/ft/v20200304/model/FaceMorphOutput.h
  include/tencentcloud/ft/v20200304/model/MorphFaceRequest.h
  include/tencentcloud/ft/v20200304/model/ChangeAgePicResponse.h
  include/tencentcloud/ft/v20200304/model/ChangeAgePicRequest.h
  include/tencentcloud/ft/v20200304/model/CancelFaceMorphJobRequest.h
  include/tencentcloud/ft/v20200304/model/FaceCartoonPicRequest.h
  include/tencentcloud/ft/v20200304/model/QueryFaceMorphJobRequest.h
  include/tencentcloud/ft/v20200304/model/FaceCartoonPicResponse.h
  include/tencentcloud/ft/v20200304/model/MorphFaceResponse.h
  )

set(ft_src
  src/v20200304/FtClient.cpp
  src/v20200304/model/QueryFaceMorphJobResponse.cpp
  src/v20200304/model/CancelFaceMorphJobResponse.cpp
  src/v20200304/model/AgeInfo.cpp
  src/v20200304/model/FaceRect.cpp
  src/v20200304/model/GenderInfo.cpp
  src/v20200304/model/SwapGenderPicRequest.cpp
  src/v20200304/model/GradientInfo.cpp
  src/v20200304/model/SwapGenderPicResponse.cpp
  src/v20200304/model/FaceMorphOutput.cpp
  src/v20200304/model/MorphFaceRequest.cpp
  src/v20200304/model/ChangeAgePicResponse.cpp
  src/v20200304/model/ChangeAgePicRequest.cpp
  src/v20200304/model/CancelFaceMorphJobRequest.cpp
  src/v20200304/model/FaceCartoonPicRequest.cpp
  src/v20200304/model/QueryFaceMorphJobRequest.cpp
  src/v20200304/model/FaceCartoonPicResponse.cpp
  src/v20200304/model/MorphFaceResponse.cpp
  )

set(ft_include
    include/tencentcloud/ft
  )

add_library(ft ${LIB_TYPE}
  ${ft_public_header}
  ${ft_public_header_model}
  ${ft_src})

set_target_properties(ft
  PROPERTIES
  LINKER_LANGUAGE CXX
  ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
  LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
  RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin
  OUTPUT_NAME ${TARGET_OUTPUT_NAME_PREFIX}ft
  )

target_include_directories(ft
  PRIVATE include
    ${CMAKE_SOURCE_DIR}/core/include
  )
target_link_libraries(ft
  core)

#install(FILES ${ft_public_header}
#  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud/ft/v20200304)
#install(FILES ${ft_public_header_model}
#  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud/ft/v20200304/model)
install(DIRECTORY ${ft_include}
  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud)

install(TARGETS ft
  ARCHIVE DESTINATION ${CMAKE_INSTALL_LIBDIR}
  LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
  RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
  )
