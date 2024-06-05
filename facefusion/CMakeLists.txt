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

set(facefusion_public_header
  include/tencentcloud/facefusion/v20220927/FacefusionClient.h
  include/tencentcloud/facefusion/v20181201/FacefusionClient.h
  )

set(facefusion_public_header_model
  include/tencentcloud/facefusion/v20220927/model/PublicMaterialInfos.h
  include/tencentcloud/facefusion/v20220927/model/DescribeMaterialListResponse.h
  include/tencentcloud/facefusion/v20220927/model/FaceInfo.h
  include/tencentcloud/facefusion/v20220927/model/FuseFaceUltraRequest.h
  include/tencentcloud/facefusion/v20220927/model/MaterialFaces.h
  include/tencentcloud/facefusion/v20220927/model/FuseParam.h
  include/tencentcloud/facefusion/v20220927/model/ImageCodecParam.h
  include/tencentcloud/facefusion/v20220927/model/FusionUltraParam.h
  include/tencentcloud/facefusion/v20220927/model/MergeInfo.h
  include/tencentcloud/facefusion/v20220927/model/FuseFaceUltraResponse.h
  include/tencentcloud/facefusion/v20220927/model/FuseFaceResponse.h
  include/tencentcloud/facefusion/v20220927/model/FuseFaceRequest.h
  include/tencentcloud/facefusion/v20220927/model/FaceRect.h
  include/tencentcloud/facefusion/v20220927/model/MetaData.h
  include/tencentcloud/facefusion/v20220927/model/DescribeMaterialListRequest.h
  include/tencentcloud/facefusion/v20220927/model/LogoParam.h
  include/tencentcloud/facefusion/v20181201/model/PublicMaterialInfos.h
  include/tencentcloud/facefusion/v20181201/model/FaceFusionRequest.h
  include/tencentcloud/facefusion/v20181201/model/FaceFusionResponse.h
  include/tencentcloud/facefusion/v20181201/model/DescribeMaterialListResponse.h
  include/tencentcloud/facefusion/v20181201/model/MaterialFaceList.h
  include/tencentcloud/facefusion/v20181201/model/FaceInfo.h
  include/tencentcloud/facefusion/v20181201/model/MergeInfo.h
  include/tencentcloud/facefusion/v20181201/model/FuseFaceReviewDetail.h
  include/tencentcloud/facefusion/v20181201/model/ImageCodecParam.h
  include/tencentcloud/facefusion/v20181201/model/FuseFaceReviewResult.h
  include/tencentcloud/facefusion/v20181201/model/FuseFaceResponse.h
  include/tencentcloud/facefusion/v20181201/model/FuseFaceRequest.h
  include/tencentcloud/facefusion/v20181201/model/FaceRect.h
  include/tencentcloud/facefusion/v20181201/model/FuseParam.h
  include/tencentcloud/facefusion/v20181201/model/DescribeMaterialListRequest.h
  include/tencentcloud/facefusion/v20181201/model/MetaData.h
  )

set(facefusion_src
  src/v20220927/FacefusionClient.cpp
  src/v20181201/FacefusionClient.cpp
  src/v20220927/model/PublicMaterialInfos.cpp
  src/v20220927/model/DescribeMaterialListResponse.cpp
  src/v20220927/model/FaceInfo.cpp
  src/v20220927/model/FuseFaceUltraRequest.cpp
  src/v20220927/model/MaterialFaces.cpp
  src/v20220927/model/FuseParam.cpp
  src/v20220927/model/ImageCodecParam.cpp
  src/v20220927/model/FusionUltraParam.cpp
  src/v20220927/model/MergeInfo.cpp
  src/v20220927/model/FuseFaceUltraResponse.cpp
  src/v20220927/model/FuseFaceResponse.cpp
  src/v20220927/model/FuseFaceRequest.cpp
  src/v20220927/model/FaceRect.cpp
  src/v20220927/model/MetaData.cpp
  src/v20220927/model/DescribeMaterialListRequest.cpp
  src/v20220927/model/LogoParam.cpp
  src/v20181201/model/PublicMaterialInfos.cpp
  src/v20181201/model/FaceFusionRequest.cpp
  src/v20181201/model/FaceFusionResponse.cpp
  src/v20181201/model/DescribeMaterialListResponse.cpp
  src/v20181201/model/MaterialFaceList.cpp
  src/v20181201/model/FaceInfo.cpp
  src/v20181201/model/MergeInfo.cpp
  src/v20181201/model/FuseFaceReviewDetail.cpp
  src/v20181201/model/ImageCodecParam.cpp
  src/v20181201/model/FuseFaceReviewResult.cpp
  src/v20181201/model/FuseFaceResponse.cpp
  src/v20181201/model/FuseFaceRequest.cpp
  src/v20181201/model/FaceRect.cpp
  src/v20181201/model/FuseParam.cpp
  src/v20181201/model/DescribeMaterialListRequest.cpp
  src/v20181201/model/MetaData.cpp
  )

set(facefusion_include
    include/tencentcloud/facefusion
  )

add_library(facefusion ${LIB_TYPE}
  ${facefusion_public_header}
  ${facefusion_public_header_model}
  ${facefusion_src})

set_target_properties(facefusion
  PROPERTIES
  LINKER_LANGUAGE CXX
  ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
  LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
  RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin
  OUTPUT_NAME ${TARGET_OUTPUT_NAME_PREFIX}facefusion
  )

target_include_directories(facefusion
  PRIVATE include
    ${CMAKE_SOURCE_DIR}/core/include
  )
target_link_libraries(facefusion
  core)

#install(FILES ${facefusion_public_header}
#  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud/facefusion/v20181201)
#install(FILES ${facefusion_public_header_model}
#  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud/facefusion/v20181201/model)
install(DIRECTORY ${facefusion_include}
  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud)

install(TARGETS facefusion
  ARCHIVE DESTINATION ${CMAKE_INSTALL_LIBDIR}
  LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
  RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
  )
