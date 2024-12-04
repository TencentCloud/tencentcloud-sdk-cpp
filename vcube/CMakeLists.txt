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

set(vcube_public_header
  include/tencentcloud/vcube/v20220410/VcubeClient.h
  )

set(vcube_public_header_model
  include/tencentcloud/vcube/v20220410/model/DescribeVcubeApplicationAndLicenseRequest.h
  include/tencentcloud/vcube/v20220410/model/CreateLicenseResponse.h
  include/tencentcloud/vcube/v20220410/model/CreateApplicationAndVideoResponse.h
  include/tencentcloud/vcube/v20220410/model/CreateApplicationAndBindLicenseResponse.h
  include/tencentcloud/vcube/v20220410/model/ModifyFormalApplicationResponse.h
  include/tencentcloud/vcube/v20220410/model/XMagicResourceSimpleInfo.h
  include/tencentcloud/vcube/v20220410/model/DescribeXMagicResourceListRequest.h
  include/tencentcloud/vcube/v20220410/model/DescribeVcubeResourcesListRequest.h
  include/tencentcloud/vcube/v20220410/model/DescribeTrialFeatureResponse.h
  include/tencentcloud/vcube/v20220410/model/CreateTrialLicenseResponse.h
  include/tencentcloud/vcube/v20220410/model/DescribeUserConfigResponse.h
  include/tencentcloud/vcube/v20220410/model/RenewTestXMagicResponse.h
  include/tencentcloud/vcube/v20220410/model/RenewVideoResponse.h
  include/tencentcloud/vcube/v20220410/model/UpdateXMagicRequest.h
  include/tencentcloud/vcube/v20220410/model/DescribeVcubeResourcesRequest.h
  include/tencentcloud/vcube/v20220410/model/CreateLicenseRequest.h
  include/tencentcloud/vcube/v20220410/model/CreateTrialApplicationAndLicenseRequest.h
  include/tencentcloud/vcube/v20220410/model/ModifyFormalApplicationRequest.h
  include/tencentcloud/vcube/v20220410/model/DescribeLicenseListRequest.h
  include/tencentcloud/vcube/v20220410/model/DescribeSTSRequest.h
  include/tencentcloud/vcube/v20220410/model/RenewLicenseRequest.h
  include/tencentcloud/vcube/v20220410/model/LicenseResourceInfo.h
  include/tencentcloud/vcube/v20220410/model/LicenseResourceSimpleInfo.h
  include/tencentcloud/vcube/v20220410/model/RenewLicenseResponse.h
  include/tencentcloud/vcube/v20220410/model/DescribeVcubeApplicationAndPlayListRequest.h
  include/tencentcloud/vcube/v20220410/model/XMagicTrial.h
  include/tencentcloud/vcube/v20220410/model/DescribeVcubeApplicationAndXMagicListRequest.h
  include/tencentcloud/vcube/v20220410/model/DescribeVcubeResourcesListResponse.h
  include/tencentcloud/vcube/v20220410/model/License.h
  include/tencentcloud/vcube/v20220410/model/DescribeLicenseListResponse.h
  include/tencentcloud/vcube/v20220410/model/ModifyApplicationResponse.h
  include/tencentcloud/vcube/v20220410/model/ModifyXMagicRequest.h
  include/tencentcloud/vcube/v20220410/model/XMagicResource.h
  include/tencentcloud/vcube/v20220410/model/RenewResource.h
  include/tencentcloud/vcube/v20220410/model/DescribeVcubeResourcesResponse.h
  include/tencentcloud/vcube/v20220410/model/DescribeNewsRequest.h
  include/tencentcloud/vcube/v20220410/model/CreateTestXMagicResponse.h
  include/tencentcloud/vcube/v20220410/model/DescribeUserConfigRequest.h
  include/tencentcloud/vcube/v20220410/model/RenewTestXMagicRequest.h
  include/tencentcloud/vcube/v20220410/model/UpdateXMagicResponse.h
  include/tencentcloud/vcube/v20220410/model/ModifyLicenseRequest.h
  include/tencentcloud/vcube/v20220410/model/CreateActivityLicenseResponse.h
  include/tencentcloud/vcube/v20220410/model/UpdateTestXMagicResponse.h
  include/tencentcloud/vcube/v20220410/model/CreateTrialApplicationAndLicenseResponse.h
  include/tencentcloud/vcube/v20220410/model/DescribeXMagicResourceRequest.h
  include/tencentcloud/vcube/v20220410/model/ModifyPresetApplicationResponse.h
  include/tencentcloud/vcube/v20220410/model/CreateXMagicResponse.h
  include/tencentcloud/vcube/v20220410/model/ModifyPresetApplicationRequest.h
  include/tencentcloud/vcube/v20220410/model/AppInfo.h
  include/tencentcloud/vcube/v20220410/model/DescribeNewsResponse.h
  include/tencentcloud/vcube/v20220410/model/DescribeSTSResponse.h
  include/tencentcloud/vcube/v20220410/model/Package.h
  include/tencentcloud/vcube/v20220410/model/DescribeXMagicResourceResponse.h
  include/tencentcloud/vcube/v20220410/model/DescribeVcubeApplicationAndPlayListResponse.h
  include/tencentcloud/vcube/v20220410/model/VideoFeature.h
  include/tencentcloud/vcube/v20220410/model/Feature.h
  include/tencentcloud/vcube/v20220410/model/ModifyTrialLicenseResponse.h
  include/tencentcloud/vcube/v20220410/model/UpdateTrialLicenseResponse.h
  include/tencentcloud/vcube/v20220410/model/ModifyApplicationRequest.h
  include/tencentcloud/vcube/v20220410/model/CreateXMagicRequest.h
  include/tencentcloud/vcube/v20220410/model/RenewVideoRequest.h
  include/tencentcloud/vcube/v20220410/model/CreateApplicationAndVideoRequest.h
  include/tencentcloud/vcube/v20220410/model/DescribeVcubeApplicationAndLicenseResponse.h
  include/tencentcloud/vcube/v20220410/model/CreateTestXMagicRequest.h
  include/tencentcloud/vcube/v20220410/model/DescribeVcubeApplicationAndXMagicListResponse.h
  include/tencentcloud/vcube/v20220410/model/CreateTrialLicenseRequest.h
  include/tencentcloud/vcube/v20220410/model/XMagicSimpleInfo.h
  include/tencentcloud/vcube/v20220410/model/XMagicInfo.h
  include/tencentcloud/vcube/v20220410/model/DescribeFeatureListRequest.h
  include/tencentcloud/vcube/v20220410/model/ApplicationInfo.h
  include/tencentcloud/vcube/v20220410/model/CreateActivityLicenseRequest.h
  include/tencentcloud/vcube/v20220410/model/UpdateTrialLicenseRequest.h
  include/tencentcloud/vcube/v20220410/model/UpdateTestXMagicRequest.h
  include/tencentcloud/vcube/v20220410/model/ModifyLicenseResponse.h
  include/tencentcloud/vcube/v20220410/model/CreateApplicationAndWebPlayerLicenseResponse.h
  include/tencentcloud/vcube/v20220410/model/ModifyTrialLicenseRequest.h
  include/tencentcloud/vcube/v20220410/model/XMagicFeature.h
  include/tencentcloud/vcube/v20220410/model/ModifyXMagicResponse.h
  include/tencentcloud/vcube/v20220410/model/CreateApplicationAndWebPlayerLicenseRequest.h
  include/tencentcloud/vcube/v20220410/model/CreateApplicationAndBindLicenseRequest.h
  include/tencentcloud/vcube/v20220410/model/NewsInfo.h
  include/tencentcloud/vcube/v20220410/model/DescribeFeatureListResponse.h
  include/tencentcloud/vcube/v20220410/model/DescribeXMagicResourceListResponse.h
  include/tencentcloud/vcube/v20220410/model/DescribeTrialFeatureRequest.h
  )

set(vcube_src
  src/v20220410/VcubeClient.cpp
  src/v20220410/model/DescribeVcubeApplicationAndLicenseRequest.cpp
  src/v20220410/model/CreateLicenseResponse.cpp
  src/v20220410/model/CreateApplicationAndVideoResponse.cpp
  src/v20220410/model/CreateApplicationAndBindLicenseResponse.cpp
  src/v20220410/model/ModifyFormalApplicationResponse.cpp
  src/v20220410/model/XMagicResourceSimpleInfo.cpp
  src/v20220410/model/DescribeXMagicResourceListRequest.cpp
  src/v20220410/model/DescribeVcubeResourcesListRequest.cpp
  src/v20220410/model/DescribeTrialFeatureResponse.cpp
  src/v20220410/model/CreateTrialLicenseResponse.cpp
  src/v20220410/model/DescribeUserConfigResponse.cpp
  src/v20220410/model/RenewTestXMagicResponse.cpp
  src/v20220410/model/RenewVideoResponse.cpp
  src/v20220410/model/UpdateXMagicRequest.cpp
  src/v20220410/model/DescribeVcubeResourcesRequest.cpp
  src/v20220410/model/CreateLicenseRequest.cpp
  src/v20220410/model/CreateTrialApplicationAndLicenseRequest.cpp
  src/v20220410/model/ModifyFormalApplicationRequest.cpp
  src/v20220410/model/DescribeLicenseListRequest.cpp
  src/v20220410/model/DescribeSTSRequest.cpp
  src/v20220410/model/RenewLicenseRequest.cpp
  src/v20220410/model/LicenseResourceInfo.cpp
  src/v20220410/model/LicenseResourceSimpleInfo.cpp
  src/v20220410/model/RenewLicenseResponse.cpp
  src/v20220410/model/DescribeVcubeApplicationAndPlayListRequest.cpp
  src/v20220410/model/XMagicTrial.cpp
  src/v20220410/model/DescribeVcubeApplicationAndXMagicListRequest.cpp
  src/v20220410/model/DescribeVcubeResourcesListResponse.cpp
  src/v20220410/model/License.cpp
  src/v20220410/model/DescribeLicenseListResponse.cpp
  src/v20220410/model/ModifyApplicationResponse.cpp
  src/v20220410/model/ModifyXMagicRequest.cpp
  src/v20220410/model/XMagicResource.cpp
  src/v20220410/model/RenewResource.cpp
  src/v20220410/model/DescribeVcubeResourcesResponse.cpp
  src/v20220410/model/DescribeNewsRequest.cpp
  src/v20220410/model/CreateTestXMagicResponse.cpp
  src/v20220410/model/DescribeUserConfigRequest.cpp
  src/v20220410/model/RenewTestXMagicRequest.cpp
  src/v20220410/model/UpdateXMagicResponse.cpp
  src/v20220410/model/ModifyLicenseRequest.cpp
  src/v20220410/model/CreateActivityLicenseResponse.cpp
  src/v20220410/model/UpdateTestXMagicResponse.cpp
  src/v20220410/model/CreateTrialApplicationAndLicenseResponse.cpp
  src/v20220410/model/DescribeXMagicResourceRequest.cpp
  src/v20220410/model/ModifyPresetApplicationResponse.cpp
  src/v20220410/model/CreateXMagicResponse.cpp
  src/v20220410/model/ModifyPresetApplicationRequest.cpp
  src/v20220410/model/AppInfo.cpp
  src/v20220410/model/DescribeNewsResponse.cpp
  src/v20220410/model/DescribeSTSResponse.cpp
  src/v20220410/model/Package.cpp
  src/v20220410/model/DescribeXMagicResourceResponse.cpp
  src/v20220410/model/DescribeVcubeApplicationAndPlayListResponse.cpp
  src/v20220410/model/VideoFeature.cpp
  src/v20220410/model/Feature.cpp
  src/v20220410/model/ModifyTrialLicenseResponse.cpp
  src/v20220410/model/UpdateTrialLicenseResponse.cpp
  src/v20220410/model/ModifyApplicationRequest.cpp
  src/v20220410/model/CreateXMagicRequest.cpp
  src/v20220410/model/RenewVideoRequest.cpp
  src/v20220410/model/CreateApplicationAndVideoRequest.cpp
  src/v20220410/model/DescribeVcubeApplicationAndLicenseResponse.cpp
  src/v20220410/model/CreateTestXMagicRequest.cpp
  src/v20220410/model/DescribeVcubeApplicationAndXMagicListResponse.cpp
  src/v20220410/model/CreateTrialLicenseRequest.cpp
  src/v20220410/model/XMagicSimpleInfo.cpp
  src/v20220410/model/XMagicInfo.cpp
  src/v20220410/model/DescribeFeatureListRequest.cpp
  src/v20220410/model/ApplicationInfo.cpp
  src/v20220410/model/CreateActivityLicenseRequest.cpp
  src/v20220410/model/UpdateTrialLicenseRequest.cpp
  src/v20220410/model/UpdateTestXMagicRequest.cpp
  src/v20220410/model/ModifyLicenseResponse.cpp
  src/v20220410/model/CreateApplicationAndWebPlayerLicenseResponse.cpp
  src/v20220410/model/ModifyTrialLicenseRequest.cpp
  src/v20220410/model/XMagicFeature.cpp
  src/v20220410/model/ModifyXMagicResponse.cpp
  src/v20220410/model/CreateApplicationAndWebPlayerLicenseRequest.cpp
  src/v20220410/model/CreateApplicationAndBindLicenseRequest.cpp
  src/v20220410/model/NewsInfo.cpp
  src/v20220410/model/DescribeFeatureListResponse.cpp
  src/v20220410/model/DescribeXMagicResourceListResponse.cpp
  src/v20220410/model/DescribeTrialFeatureRequest.cpp
  )

set(vcube_include
    include/tencentcloud/vcube
  )

add_library(vcube ${LIB_TYPE}
  ${vcube_public_header}
  ${vcube_public_header_model}
  ${vcube_src})

set_target_properties(vcube
  PROPERTIES
  LINKER_LANGUAGE CXX
  ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
  LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
  RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin
  OUTPUT_NAME ${TARGET_OUTPUT_NAME_PREFIX}vcube
  )

target_include_directories(vcube
  PRIVATE include
    ${CMAKE_SOURCE_DIR}/core/include
  )
target_link_libraries(vcube
  core)

#install(FILES ${vcube_public_header}
#  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud/vcube/v20220410)
#install(FILES ${vcube_public_header_model}
#  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud/vcube/v20220410/model)
install(DIRECTORY ${vcube_include}
  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud)

install(TARGETS vcube
  ARCHIVE DESTINATION ${CMAKE_INSTALL_LIBDIR}
  LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
  RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
  )
