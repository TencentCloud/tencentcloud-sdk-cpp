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

set(youmall_public_header
  include/tencentcloud/youmall/v20180228/YoumallClient.h
  )

set(youmall_public_header_model
  include/tencentcloud/youmall/v20180228/model/DescribeClusterPersonArrivedMallResponse.h
  include/tencentcloud/youmall/v20180228/model/DescribeShopTrafficInfoRequest.h
  include/tencentcloud/youmall/v20180228/model/GenderAgeTrafficDetail.h
  include/tencentcloud/youmall/v20180228/model/DescribeZoneFlowAndStayTimeResponse.h
  include/tencentcloud/youmall/v20180228/model/DescribePersonArrivedMallResponse.h
  include/tencentcloud/youmall/v20180228/model/ModifyPersonTypeResponse.h
  include/tencentcloud/youmall/v20180228/model/HourTrafficInfoDetail.h
  include/tencentcloud/youmall/v20180228/model/DescribeZoneFlowDailyByZoneIdResponse.h
  include/tencentcloud/youmall/v20180228/model/DescribeZoneFlowAgeInfoByZoneIdResponse.h
  include/tencentcloud/youmall/v20180228/model/DescribeClusterPersonTraceResponse.h
  include/tencentcloud/youmall/v20180228/model/DescribePersonInfoRequest.h
  include/tencentcloud/youmall/v20180228/model/DescribePersonInfoByFacePictureResponse.h
  include/tencentcloud/youmall/v20180228/model/DescribePersonTraceDetailRequest.h
  include/tencentcloud/youmall/v20180228/model/CreateAccountRequest.h
  include/tencentcloud/youmall/v20180228/model/NetworkLastInfo.h
  include/tencentcloud/youmall/v20180228/model/DescribeZoneFlowGenderAvrStayTimeByZoneIdResponse.h
  include/tencentcloud/youmall/v20180228/model/DeletePersonFeatureResponse.h
  include/tencentcloud/youmall/v20180228/model/DescribeCameraPersonResponse.h
  include/tencentcloud/youmall/v20180228/model/ModifyPersonTagInfoResponse.h
  include/tencentcloud/youmall/v20180228/model/DescribeShopHourTrafficInfoResponse.h
  include/tencentcloud/youmall/v20180228/model/RegisterCallbackResponse.h
  include/tencentcloud/youmall/v20180228/model/NetworkInfo.h
  include/tencentcloud/youmall/v20180228/model/DescribeClusterPersonArrivedMallRequest.h
  include/tencentcloud/youmall/v20180228/model/DescribeZoneFlowGenderInfoByZoneIdResponse.h
  include/tencentcloud/youmall/v20180228/model/DescribeHistoryNetworkInfoRequest.h
  include/tencentcloud/youmall/v20180228/model/DescribePersonTraceDetailResponse.h
  include/tencentcloud/youmall/v20180228/model/DescribePersonInfoByFacePictureRequest.h
  include/tencentcloud/youmall/v20180228/model/DescribePersonVisitInfoRequest.h
  include/tencentcloud/youmall/v20180228/model/DescribeZoneTrafficInfoResponse.h
  include/tencentcloud/youmall/v20180228/model/DeletePersonFeatureRequest.h
  include/tencentcloud/youmall/v20180228/model/DescribeFaceIdByTempIdRequest.h
  include/tencentcloud/youmall/v20180228/model/PersonProfile.h
  include/tencentcloud/youmall/v20180228/model/DescribePersonResponse.h
  include/tencentcloud/youmall/v20180228/model/DescribeTrajectoryDataRequest.h
  include/tencentcloud/youmall/v20180228/model/DescribeZoneTrafficInfoRequest.h
  include/tencentcloud/youmall/v20180228/model/ModifyPersonFeatureInfoResponse.h
  include/tencentcloud/youmall/v20180228/model/ZoneTrafficInfoDetail.h
  include/tencentcloud/youmall/v20180228/model/DescribeZoneFlowGenderAvrStayTimeByZoneIdRequest.h
  include/tencentcloud/youmall/v20180228/model/ZoneFlowAndAvrStayTime.h
  include/tencentcloud/youmall/v20180228/model/SceneInfo.h
  include/tencentcloud/youmall/v20180228/model/CameraPersonInfo.h
  include/tencentcloud/youmall/v20180228/model/DescribePersonVisitInfoResponse.h
  include/tencentcloud/youmall/v20180228/model/DescribeNetworkInfoRequest.h
  include/tencentcloud/youmall/v20180228/model/DescribeZoneFlowAndStayTimeRequest.h
  include/tencentcloud/youmall/v20180228/model/DescribeZoneFlowHourlyByZoneIdRequest.h
  include/tencentcloud/youmall/v20180228/model/DescribeFaceIdByTempIdResponse.h
  include/tencentcloud/youmall/v20180228/model/TrajectorySunData.h
  include/tencentcloud/youmall/v20180228/model/ModifyPersonTagInfoRequest.h
  include/tencentcloud/youmall/v20180228/model/ShopDayTrafficInfo.h
  include/tencentcloud/youmall/v20180228/model/DescribePersonRequest.h
  include/tencentcloud/youmall/v20180228/model/DescribePersonTraceResponse.h
  include/tencentcloud/youmall/v20180228/model/PersonTraceRoute.h
  include/tencentcloud/youmall/v20180228/model/PersonTracePoint.h
  include/tencentcloud/youmall/v20180228/model/ZoneTrafficInfo.h
  include/tencentcloud/youmall/v20180228/model/DescribeNetworkInfoResponse.h
  include/tencentcloud/youmall/v20180228/model/NetworkAndShopInfo.h
  include/tencentcloud/youmall/v20180228/model/DescribeZoneFlowGenderInfoByZoneIdRequest.h
  include/tencentcloud/youmall/v20180228/model/DescribeShopHourTrafficInfoRequest.h
  include/tencentcloud/youmall/v20180228/model/RegisterCallbackRequest.h
  include/tencentcloud/youmall/v20180228/model/DescribeShopInfoRequest.h
  include/tencentcloud/youmall/v20180228/model/NetworkHistoryInfo.h
  include/tencentcloud/youmall/v20180228/model/PersonInfo.h
  include/tencentcloud/youmall/v20180228/model/PersonTagInfo.h
  include/tencentcloud/youmall/v20180228/model/ZoneHourFlow.h
  include/tencentcloud/youmall/v20180228/model/ShopHourTrafficInfo.h
  include/tencentcloud/youmall/v20180228/model/DescribeClusterPersonTraceRequest.h
  include/tencentcloud/youmall/v20180228/model/PersonCoordinate.h
  include/tencentcloud/youmall/v20180228/model/ModifyPersonFeatureInfoRequest.h
  include/tencentcloud/youmall/v20180228/model/ZoneDayFlow.h
  include/tencentcloud/youmall/v20180228/model/DescribePersonTraceRequest.h
  include/tencentcloud/youmall/v20180228/model/DescribeZoneFlowHourlyByZoneIdResponse.h
  include/tencentcloud/youmall/v20180228/model/DescribeZoneFlowDailyByZoneIdRequest.h
  include/tencentcloud/youmall/v20180228/model/DescribePersonInfoResponse.h
  include/tencentcloud/youmall/v20180228/model/DailyTracePoint.h
  include/tencentcloud/youmall/v20180228/model/CreateAccountResponse.h
  include/tencentcloud/youmall/v20180228/model/DescribeHistoryNetworkInfoResponse.h
  include/tencentcloud/youmall/v20180228/model/CreateFacePictureResponse.h
  include/tencentcloud/youmall/v20180228/model/DescribeShopInfoResponse.h
  include/tencentcloud/youmall/v20180228/model/PersonVisitInfo.h
  include/tencentcloud/youmall/v20180228/model/CreateFacePictureRequest.h
  include/tencentcloud/youmall/v20180228/model/DescribeZoneFlowAgeInfoByZoneIdRequest.h
  include/tencentcloud/youmall/v20180228/model/ShopInfo.h
  include/tencentcloud/youmall/v20180228/model/ModifyPersonTypeRequest.h
  include/tencentcloud/youmall/v20180228/model/ArrivedMallInfo.h
  include/tencentcloud/youmall/v20180228/model/ZoneAgeGroupAvrStayTime.h
  include/tencentcloud/youmall/v20180228/model/DescribePersonArrivedMallRequest.h
  include/tencentcloud/youmall/v20180228/model/DescribeCameraPersonRequest.h
  include/tencentcloud/youmall/v20180228/model/DescribeShopTrafficInfoResponse.h
  include/tencentcloud/youmall/v20180228/model/DescribeTrajectoryDataResponse.h
  )

set(youmall_src
  src/v20180228/YoumallClient.cpp
  src/v20180228/model/DescribeClusterPersonArrivedMallResponse.cpp
  src/v20180228/model/DescribeShopTrafficInfoRequest.cpp
  src/v20180228/model/GenderAgeTrafficDetail.cpp
  src/v20180228/model/DescribeZoneFlowAndStayTimeResponse.cpp
  src/v20180228/model/DescribePersonArrivedMallResponse.cpp
  src/v20180228/model/ModifyPersonTypeResponse.cpp
  src/v20180228/model/HourTrafficInfoDetail.cpp
  src/v20180228/model/DescribeZoneFlowDailyByZoneIdResponse.cpp
  src/v20180228/model/DescribeZoneFlowAgeInfoByZoneIdResponse.cpp
  src/v20180228/model/DescribeClusterPersonTraceResponse.cpp
  src/v20180228/model/DescribePersonInfoRequest.cpp
  src/v20180228/model/DescribePersonInfoByFacePictureResponse.cpp
  src/v20180228/model/DescribePersonTraceDetailRequest.cpp
  src/v20180228/model/CreateAccountRequest.cpp
  src/v20180228/model/NetworkLastInfo.cpp
  src/v20180228/model/DescribeZoneFlowGenderAvrStayTimeByZoneIdResponse.cpp
  src/v20180228/model/DeletePersonFeatureResponse.cpp
  src/v20180228/model/DescribeCameraPersonResponse.cpp
  src/v20180228/model/ModifyPersonTagInfoResponse.cpp
  src/v20180228/model/DescribeShopHourTrafficInfoResponse.cpp
  src/v20180228/model/RegisterCallbackResponse.cpp
  src/v20180228/model/NetworkInfo.cpp
  src/v20180228/model/DescribeClusterPersonArrivedMallRequest.cpp
  src/v20180228/model/DescribeZoneFlowGenderInfoByZoneIdResponse.cpp
  src/v20180228/model/DescribeHistoryNetworkInfoRequest.cpp
  src/v20180228/model/DescribePersonTraceDetailResponse.cpp
  src/v20180228/model/DescribePersonInfoByFacePictureRequest.cpp
  src/v20180228/model/DescribePersonVisitInfoRequest.cpp
  src/v20180228/model/DescribeZoneTrafficInfoResponse.cpp
  src/v20180228/model/DeletePersonFeatureRequest.cpp
  src/v20180228/model/DescribeFaceIdByTempIdRequest.cpp
  src/v20180228/model/PersonProfile.cpp
  src/v20180228/model/DescribePersonResponse.cpp
  src/v20180228/model/DescribeTrajectoryDataRequest.cpp
  src/v20180228/model/DescribeZoneTrafficInfoRequest.cpp
  src/v20180228/model/ModifyPersonFeatureInfoResponse.cpp
  src/v20180228/model/ZoneTrafficInfoDetail.cpp
  src/v20180228/model/DescribeZoneFlowGenderAvrStayTimeByZoneIdRequest.cpp
  src/v20180228/model/ZoneFlowAndAvrStayTime.cpp
  src/v20180228/model/SceneInfo.cpp
  src/v20180228/model/CameraPersonInfo.cpp
  src/v20180228/model/DescribePersonVisitInfoResponse.cpp
  src/v20180228/model/DescribeNetworkInfoRequest.cpp
  src/v20180228/model/DescribeZoneFlowAndStayTimeRequest.cpp
  src/v20180228/model/DescribeZoneFlowHourlyByZoneIdRequest.cpp
  src/v20180228/model/DescribeFaceIdByTempIdResponse.cpp
  src/v20180228/model/TrajectorySunData.cpp
  src/v20180228/model/ModifyPersonTagInfoRequest.cpp
  src/v20180228/model/ShopDayTrafficInfo.cpp
  src/v20180228/model/DescribePersonRequest.cpp
  src/v20180228/model/DescribePersonTraceResponse.cpp
  src/v20180228/model/PersonTraceRoute.cpp
  src/v20180228/model/PersonTracePoint.cpp
  src/v20180228/model/ZoneTrafficInfo.cpp
  src/v20180228/model/DescribeNetworkInfoResponse.cpp
  src/v20180228/model/NetworkAndShopInfo.cpp
  src/v20180228/model/DescribeZoneFlowGenderInfoByZoneIdRequest.cpp
  src/v20180228/model/DescribeShopHourTrafficInfoRequest.cpp
  src/v20180228/model/RegisterCallbackRequest.cpp
  src/v20180228/model/DescribeShopInfoRequest.cpp
  src/v20180228/model/NetworkHistoryInfo.cpp
  src/v20180228/model/PersonInfo.cpp
  src/v20180228/model/PersonTagInfo.cpp
  src/v20180228/model/ZoneHourFlow.cpp
  src/v20180228/model/ShopHourTrafficInfo.cpp
  src/v20180228/model/DescribeClusterPersonTraceRequest.cpp
  src/v20180228/model/PersonCoordinate.cpp
  src/v20180228/model/ModifyPersonFeatureInfoRequest.cpp
  src/v20180228/model/ZoneDayFlow.cpp
  src/v20180228/model/DescribePersonTraceRequest.cpp
  src/v20180228/model/DescribeZoneFlowHourlyByZoneIdResponse.cpp
  src/v20180228/model/DescribeZoneFlowDailyByZoneIdRequest.cpp
  src/v20180228/model/DescribePersonInfoResponse.cpp
  src/v20180228/model/DailyTracePoint.cpp
  src/v20180228/model/CreateAccountResponse.cpp
  src/v20180228/model/DescribeHistoryNetworkInfoResponse.cpp
  src/v20180228/model/CreateFacePictureResponse.cpp
  src/v20180228/model/DescribeShopInfoResponse.cpp
  src/v20180228/model/PersonVisitInfo.cpp
  src/v20180228/model/CreateFacePictureRequest.cpp
  src/v20180228/model/DescribeZoneFlowAgeInfoByZoneIdRequest.cpp
  src/v20180228/model/ShopInfo.cpp
  src/v20180228/model/ModifyPersonTypeRequest.cpp
  src/v20180228/model/ArrivedMallInfo.cpp
  src/v20180228/model/ZoneAgeGroupAvrStayTime.cpp
  src/v20180228/model/DescribePersonArrivedMallRequest.cpp
  src/v20180228/model/DescribeCameraPersonRequest.cpp
  src/v20180228/model/DescribeShopTrafficInfoResponse.cpp
  src/v20180228/model/DescribeTrajectoryDataResponse.cpp
  )

set(youmall_include
    include/tencentcloud/youmall
  )

add_library(youmall ${LIB_TYPE}
  ${youmall_public_header}
  ${youmall_public_header_model}
  ${youmall_src})

set_target_properties(youmall
  PROPERTIES
  LINKER_LANGUAGE CXX
  ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
  LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
  RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin
  OUTPUT_NAME ${TARGET_OUTPUT_NAME_PREFIX}youmall
  )

target_include_directories(youmall
  PRIVATE include
    ${CMAKE_SOURCE_DIR}/core/include
  )
target_link_libraries(youmall
  core)

#install(FILES ${youmall_public_header}
#  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud/youmall/v20180228)
#install(FILES ${youmall_public_header_model}
#  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud/youmall/v20180228/model)
install(DIRECTORY ${youmall_include}
  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud)

install(TARGETS youmall
  ARCHIVE DESTINATION ${CMAKE_INSTALL_LIBDIR}
  LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
  RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
  )
