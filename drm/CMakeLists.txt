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

set(drm_public_header
  include/tencentcloud/drm/v20181115/DrmClient.h
  )

set(drm_public_header_model
  include/tencentcloud/drm/v20181115/model/CreateLicenseResponse.h
  include/tencentcloud/drm/v20181115/model/KeyParam.h
  include/tencentcloud/drm/v20181115/model/GenerateTDRMKeyResponse.h
  include/tencentcloud/drm/v20181115/model/FairPlayPemDigestInfo.h
  include/tencentcloud/drm/v20181115/model/GenerateTDRMKeyRequest.h
  include/tencentcloud/drm/v20181115/model/CreateEncryptKeysResponse.h
  include/tencentcloud/drm/v20181115/model/CreateLicenseRequest.h
  include/tencentcloud/drm/v20181115/model/DescribeAllKeysRequest.h
  include/tencentcloud/drm/v20181115/model/DrmSourceObject.h
  include/tencentcloud/drm/v20181115/model/CreateEncryptKeysRequest.h
  include/tencentcloud/drm/v20181115/model/ModifyFairPlayPemResponse.h
  include/tencentcloud/drm/v20181115/model/DescribeFairPlayPemResponse.h
  include/tencentcloud/drm/v20181115/model/Key.h
  include/tencentcloud/drm/v20181115/model/DescribeDRMLicenseResponse.h
  include/tencentcloud/drm/v20181115/model/PlaybackPolicy.h
  include/tencentcloud/drm/v20181115/model/AddFairPlayPemResponse.h
  include/tencentcloud/drm/v20181115/model/AddFairPlayPemRequest.h
  include/tencentcloud/drm/v20181115/model/DeleteFairPlayPemRequest.h
  include/tencentcloud/drm/v20181115/model/DescribeKeysResponse.h
  include/tencentcloud/drm/v20181115/model/DescribeDRMLicenseRequest.h
  include/tencentcloud/drm/v20181115/model/DescribeAllKeysResponse.h
  include/tencentcloud/drm/v20181115/model/StartEncryptionRequest.h
  include/tencentcloud/drm/v20181115/model/ModifyFairPlayPemRequest.h
  include/tencentcloud/drm/v20181115/model/DeleteFairPlayPemResponse.h
  include/tencentcloud/drm/v20181115/model/DrmOutputPara.h
  include/tencentcloud/drm/v20181115/model/StartEncryptionResponse.h
  include/tencentcloud/drm/v20181115/model/DescribeFairPlayPemRequest.h
  include/tencentcloud/drm/v20181115/model/DescribeKeysRequest.h
  include/tencentcloud/drm/v20181115/model/DrmOutputObject.h
  )

set(drm_src
  src/v20181115/DrmClient.cpp
  src/v20181115/model/CreateLicenseResponse.cpp
  src/v20181115/model/KeyParam.cpp
  src/v20181115/model/GenerateTDRMKeyResponse.cpp
  src/v20181115/model/FairPlayPemDigestInfo.cpp
  src/v20181115/model/GenerateTDRMKeyRequest.cpp
  src/v20181115/model/CreateEncryptKeysResponse.cpp
  src/v20181115/model/CreateLicenseRequest.cpp
  src/v20181115/model/DescribeAllKeysRequest.cpp
  src/v20181115/model/DrmSourceObject.cpp
  src/v20181115/model/CreateEncryptKeysRequest.cpp
  src/v20181115/model/ModifyFairPlayPemResponse.cpp
  src/v20181115/model/DescribeFairPlayPemResponse.cpp
  src/v20181115/model/Key.cpp
  src/v20181115/model/DescribeDRMLicenseResponse.cpp
  src/v20181115/model/PlaybackPolicy.cpp
  src/v20181115/model/AddFairPlayPemResponse.cpp
  src/v20181115/model/AddFairPlayPemRequest.cpp
  src/v20181115/model/DeleteFairPlayPemRequest.cpp
  src/v20181115/model/DescribeKeysResponse.cpp
  src/v20181115/model/DescribeDRMLicenseRequest.cpp
  src/v20181115/model/DescribeAllKeysResponse.cpp
  src/v20181115/model/StartEncryptionRequest.cpp
  src/v20181115/model/ModifyFairPlayPemRequest.cpp
  src/v20181115/model/DeleteFairPlayPemResponse.cpp
  src/v20181115/model/DrmOutputPara.cpp
  src/v20181115/model/StartEncryptionResponse.cpp
  src/v20181115/model/DescribeFairPlayPemRequest.cpp
  src/v20181115/model/DescribeKeysRequest.cpp
  src/v20181115/model/DrmOutputObject.cpp
  )

set(drm_include
    include/tencentcloud/drm
  )

add_library(drm ${LIB_TYPE}
  ${drm_public_header}
  ${drm_public_header_model}
  ${drm_src})

set_target_properties(drm
  PROPERTIES
  LINKER_LANGUAGE CXX
  ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
  LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
  RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin
  OUTPUT_NAME ${TARGET_OUTPUT_NAME_PREFIX}drm
  )

target_include_directories(drm
  PRIVATE include
    ${CMAKE_SOURCE_DIR}/core/include
  )
target_link_libraries(drm
  core)

#install(FILES ${drm_public_header}
#  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud/drm/v20181115)
#install(FILES ${drm_public_header_model}
#  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud/drm/v20181115/model)
install(DIRECTORY ${drm_include}
  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud)

install(TARGETS drm
  ARCHIVE DESTINATION ${CMAKE_INSTALL_LIBDIR}
  LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
  RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
  )
