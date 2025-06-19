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

set(tiia_public_header
  include/tencentcloud/tiia/v20190529/TiiaClient.h
  )

set(tiia_public_header_model
  include/tencentcloud/tiia/v20190529/model/RecognizeCarProRequest.h
  include/tencentcloud/tiia/v20190529/model/DetectChefDressResponse.h
  include/tencentcloud/tiia/v20190529/model/SearchImageResponse.h
  include/tencentcloud/tiia/v20190529/model/DetectDisgustRequest.h
  include/tencentcloud/tiia/v20190529/model/Pet.h
  include/tencentcloud/tiia/v20190529/model/DetectPetRequest.h
  include/tencentcloud/tiia/v20190529/model/CreateImageRequest.h
  include/tencentcloud/tiia/v20190529/model/BodyAttributes.h
  include/tencentcloud/tiia/v20190529/model/DeleteImagesResponse.h
  include/tencentcloud/tiia/v20190529/model/CropImageRequest.h
  include/tencentcloud/tiia/v20190529/model/DetectProductRequest.h
  include/tencentcloud/tiia/v20190529/model/DetectLabelResponse.h
  include/tencentcloud/tiia/v20190529/model/DescribeGroupsRequest.h
  include/tencentcloud/tiia/v20190529/model/DetectMisbehaviorResponse.h
  include/tencentcloud/tiia/v20190529/model/AssessQualityResponse.h
  include/tencentcloud/tiia/v20190529/model/DetectDisgustResponse.h
  include/tencentcloud/tiia/v20190529/model/DetectChefDressRequest.h
  include/tencentcloud/tiia/v20190529/model/SearchImageRequest.h
  include/tencentcloud/tiia/v20190529/model/AttributesForBody.h
  include/tencentcloud/tiia/v20190529/model/DetectLabelRequest.h
  include/tencentcloud/tiia/v20190529/model/DetectLabelProResponse.h
  include/tencentcloud/tiia/v20190529/model/EnhanceImageResponse.h
  include/tencentcloud/tiia/v20190529/model/AssessQualityRequest.h
  include/tencentcloud/tiia/v20190529/model/DeleteImagesRequest.h
  include/tencentcloud/tiia/v20190529/model/CreateGroupRequest.h
  include/tencentcloud/tiia/v20190529/model/UpdateImageRequest.h
  include/tencentcloud/tiia/v20190529/model/DescribeImagesRequest.h
  include/tencentcloud/tiia/v20190529/model/Rect.h
  include/tencentcloud/tiia/v20190529/model/RecognizeCarResponse.h
  include/tencentcloud/tiia/v20190529/model/Box.h
  include/tencentcloud/tiia/v20190529/model/DetectSecurityResponse.h
  include/tencentcloud/tiia/v20190529/model/RecognizeCarRequest.h
  include/tencentcloud/tiia/v20190529/model/EnhanceImageRequest.h
  include/tencentcloud/tiia/v20190529/model/GroupInfo.h
  include/tencentcloud/tiia/v20190529/model/CropImageResponse.h
  include/tencentcloud/tiia/v20190529/model/ObjectInfo.h
  include/tencentcloud/tiia/v20190529/model/Product.h
  include/tencentcloud/tiia/v20190529/model/Coord.h
  include/tencentcloud/tiia/v20190529/model/DetectSecurityRequest.h
  include/tencentcloud/tiia/v20190529/model/DetectEnvelopeRequest.h
  include/tencentcloud/tiia/v20190529/model/DetectPetResponse.h
  include/tencentcloud/tiia/v20190529/model/DetectProductResponse.h
  include/tencentcloud/tiia/v20190529/model/ColorInfo.h
  include/tencentcloud/tiia/v20190529/model/ImageRect.h
  include/tencentcloud/tiia/v20190529/model/CreateImageResponse.h
  include/tencentcloud/tiia/v20190529/model/DetectLabelItem.h
  include/tencentcloud/tiia/v20190529/model/UpdateImageResponse.h
  include/tencentcloud/tiia/v20190529/model/CarPlateContent.h
  include/tencentcloud/tiia/v20190529/model/DetectLabelProRequest.h
  include/tencentcloud/tiia/v20190529/model/ImageInfo.h
  include/tencentcloud/tiia/v20190529/model/DetectEnvelopeResponse.h
  include/tencentcloud/tiia/v20190529/model/ImageTag.h
  include/tencentcloud/tiia/v20190529/model/Attribute.h
  include/tencentcloud/tiia/v20190529/model/RecognizeCarProResponse.h
  include/tencentcloud/tiia/v20190529/model/DescribeGroupsResponse.h
  include/tencentcloud/tiia/v20190529/model/CarTagItem.h
  include/tencentcloud/tiia/v20190529/model/DescribeImagesResponse.h
  include/tencentcloud/tiia/v20190529/model/DetectMisbehaviorRequest.h
  include/tencentcloud/tiia/v20190529/model/CreateGroupResponse.h
  )

set(tiia_src
  src/v20190529/TiiaClient.cpp
  src/v20190529/model/RecognizeCarProRequest.cpp
  src/v20190529/model/DetectChefDressResponse.cpp
  src/v20190529/model/SearchImageResponse.cpp
  src/v20190529/model/DetectDisgustRequest.cpp
  src/v20190529/model/Pet.cpp
  src/v20190529/model/DetectPetRequest.cpp
  src/v20190529/model/CreateImageRequest.cpp
  src/v20190529/model/BodyAttributes.cpp
  src/v20190529/model/DeleteImagesResponse.cpp
  src/v20190529/model/CropImageRequest.cpp
  src/v20190529/model/DetectProductRequest.cpp
  src/v20190529/model/DetectLabelResponse.cpp
  src/v20190529/model/DescribeGroupsRequest.cpp
  src/v20190529/model/DetectMisbehaviorResponse.cpp
  src/v20190529/model/AssessQualityResponse.cpp
  src/v20190529/model/DetectDisgustResponse.cpp
  src/v20190529/model/DetectChefDressRequest.cpp
  src/v20190529/model/SearchImageRequest.cpp
  src/v20190529/model/AttributesForBody.cpp
  src/v20190529/model/DetectLabelRequest.cpp
  src/v20190529/model/DetectLabelProResponse.cpp
  src/v20190529/model/EnhanceImageResponse.cpp
  src/v20190529/model/AssessQualityRequest.cpp
  src/v20190529/model/DeleteImagesRequest.cpp
  src/v20190529/model/CreateGroupRequest.cpp
  src/v20190529/model/UpdateImageRequest.cpp
  src/v20190529/model/DescribeImagesRequest.cpp
  src/v20190529/model/Rect.cpp
  src/v20190529/model/RecognizeCarResponse.cpp
  src/v20190529/model/Box.cpp
  src/v20190529/model/DetectSecurityResponse.cpp
  src/v20190529/model/RecognizeCarRequest.cpp
  src/v20190529/model/EnhanceImageRequest.cpp
  src/v20190529/model/GroupInfo.cpp
  src/v20190529/model/CropImageResponse.cpp
  src/v20190529/model/ObjectInfo.cpp
  src/v20190529/model/Product.cpp
  src/v20190529/model/Coord.cpp
  src/v20190529/model/DetectSecurityRequest.cpp
  src/v20190529/model/DetectEnvelopeRequest.cpp
  src/v20190529/model/DetectPetResponse.cpp
  src/v20190529/model/DetectProductResponse.cpp
  src/v20190529/model/ColorInfo.cpp
  src/v20190529/model/ImageRect.cpp
  src/v20190529/model/CreateImageResponse.cpp
  src/v20190529/model/DetectLabelItem.cpp
  src/v20190529/model/UpdateImageResponse.cpp
  src/v20190529/model/CarPlateContent.cpp
  src/v20190529/model/DetectLabelProRequest.cpp
  src/v20190529/model/ImageInfo.cpp
  src/v20190529/model/DetectEnvelopeResponse.cpp
  src/v20190529/model/ImageTag.cpp
  src/v20190529/model/Attribute.cpp
  src/v20190529/model/RecognizeCarProResponse.cpp
  src/v20190529/model/DescribeGroupsResponse.cpp
  src/v20190529/model/CarTagItem.cpp
  src/v20190529/model/DescribeImagesResponse.cpp
  src/v20190529/model/DetectMisbehaviorRequest.cpp
  src/v20190529/model/CreateGroupResponse.cpp
  )

set(tiia_include
    include/tencentcloud/tiia
  )

add_library(tiia ${LIB_TYPE}
  ${tiia_public_header}
  ${tiia_public_header_model}
  ${tiia_src})

set_target_properties(tiia
  PROPERTIES
  LINKER_LANGUAGE CXX
  ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
  LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
  RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin
  OUTPUT_NAME ${TARGET_OUTPUT_NAME_PREFIX}tiia
  )

target_include_directories(tiia
  PRIVATE include
    ${CMAKE_SOURCE_DIR}/core/include
  )
target_link_libraries(tiia
  core)

#install(FILES ${tiia_public_header}
#  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud/tiia/v20190529)
#install(FILES ${tiia_public_header_model}
#  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud/tiia/v20190529/model)
install(DIRECTORY ${tiia_include}
  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud)

install(TARGETS tiia
  ARCHIVE DESTINATION ${CMAKE_INSTALL_LIBDIR}
  LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
  RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
  )
