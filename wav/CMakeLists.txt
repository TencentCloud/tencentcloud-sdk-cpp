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

set(wav_public_header
  include/tencentcloud/wav/v20210129/WavClient.h
  )

set(wav_public_header_model
  include/tencentcloud/wav/v20210129/model/VehiclePurpose.h
  include/tencentcloud/wav/v20210129/model/QueryExternalContactDetailRequest.h
  include/tencentcloud/wav/v20210129/model/QueryUserInfoListRequest.h
  include/tencentcloud/wav/v20210129/model/CrmStatisticsData.h
  include/tencentcloud/wav/v20210129/model/QueryMaterialListRequest.h
  include/tencentcloud/wav/v20210129/model/QueryExternalContactDetailResponse.h
  include/tencentcloud/wav/v20210129/model/FollowInfo.h
  include/tencentcloud/wav/v20210129/model/DealerInfo.h
  include/tencentcloud/wav/v20210129/model/QueryCrmStatisticsResponse.h
  include/tencentcloud/wav/v20210129/model/QueryChannelCodeListResponse.h
  include/tencentcloud/wav/v20210129/model/CorpUserInfo.h
  include/tencentcloud/wav/v20210129/model/QueryExternalUserEventListResponse.h
  include/tencentcloud/wav/v20210129/model/ActivityDetail.h
  include/tencentcloud/wav/v20210129/model/QueryChannelCodeListRequest.h
  include/tencentcloud/wav/v20210129/model/QueryActivityLiveCodeListRequest.h
  include/tencentcloud/wav/v20210129/model/ClueInfoDetail.h
  include/tencentcloud/wav/v20210129/model/QueryActivityListRequest.h
  include/tencentcloud/wav/v20210129/model/QueryExternalUserMappingInfoRequest.h
  include/tencentcloud/wav/v20210129/model/QueryFollowListResponse.h
  include/tencentcloud/wav/v20210129/model/ActivityJoinDetail.h
  include/tencentcloud/wav/v20210129/model/CreateLeadRequest.h
  include/tencentcloud/wav/v20210129/model/QueryFollowListRequest.h
  include/tencentcloud/wav/v20210129/model/QueryMaterialListResponse.h
  include/tencentcloud/wav/v20210129/model/EnterpriseTag.h
  include/tencentcloud/wav/v20210129/model/TagDetailInfo.h
  include/tencentcloud/wav/v20210129/model/VehicleInfo.h
  include/tencentcloud/wav/v20210129/model/QueryDealerInfoListResponse.h
  include/tencentcloud/wav/v20210129/model/QueryVehicleInfoListRequest.h
  include/tencentcloud/wav/v20210129/model/QueryExternalContactDetailByDateResponse.h
  include/tencentcloud/wav/v20210129/model/CreateChannelCodeRequest.h
  include/tencentcloud/wav/v20210129/model/CreateCorpTagRequest.h
  include/tencentcloud/wav/v20210129/model/QueryMiniAppCodeListResponse.h
  include/tencentcloud/wav/v20210129/model/QueryLicenseInfoResponse.h
  include/tencentcloud/wav/v20210129/model/LiveCodeDetail.h
  include/tencentcloud/wav/v20210129/model/QueryArrivalListResponse.h
  include/tencentcloud/wav/v20210129/model/QueryExternalContactListResponse.h
  include/tencentcloud/wav/v20210129/model/QueryLicenseInfoRequest.h
  include/tencentcloud/wav/v20210129/model/QueryCustomerEventDetailStatisticsRequest.h
  include/tencentcloud/wav/v20210129/model/QueryUserInfoListResponse.h
  include/tencentcloud/wav/v20210129/model/CreateCorpTagResponse.h
  include/tencentcloud/wav/v20210129/model/FollowUserPro.h
  include/tencentcloud/wav/v20210129/model/CustomerActionEventDetail.h
  include/tencentcloud/wav/v20210129/model/QueryCustomerProfileListRequest.h
  include/tencentcloud/wav/v20210129/model/QueryCustomerProfileListResponse.h
  include/tencentcloud/wav/v20210129/model/ExternalUserEventInfo.h
  include/tencentcloud/wav/v20210129/model/ExternalUserMappingInfo.h
  include/tencentcloud/wav/v20210129/model/ArrivalInfo.h
  include/tencentcloud/wav/v20210129/model/PurchaseConcern.h
  include/tencentcloud/wav/v20210129/model/CreateLeadResponse.h
  include/tencentcloud/wav/v20210129/model/MiniAppCodeInfo.h
  include/tencentcloud/wav/v20210129/model/FollowUser.h
  include/tencentcloud/wav/v20210129/model/QueryExternalContactDetailByDateRequest.h
  include/tencentcloud/wav/v20210129/model/QueryActivityLiveCodeListResponse.h
  include/tencentcloud/wav/v20210129/model/QueryActivityJoinListResponse.h
  include/tencentcloud/wav/v20210129/model/QueryArrivalListRequest.h
  include/tencentcloud/wav/v20210129/model/QueryActivityListResponse.h
  include/tencentcloud/wav/v20210129/model/QueryActivityJoinListRequest.h
  include/tencentcloud/wav/v20210129/model/TagGroup.h
  include/tencentcloud/wav/v20210129/model/ChannelTag.h
  include/tencentcloud/wav/v20210129/model/WeComTagDetail.h
  include/tencentcloud/wav/v20210129/model/ExternalContactDetailPro.h
  include/tencentcloud/wav/v20210129/model/SalesActionEventDetail.h
  include/tencentcloud/wav/v20210129/model/QueryDealerInfoListRequest.h
  include/tencentcloud/wav/v20210129/model/CreateChannelCodeResponse.h
  include/tencentcloud/wav/v20210129/model/QueryMiniAppCodeListRequest.h
  include/tencentcloud/wav/v20210129/model/QueryChatArchivingListRequest.h
  include/tencentcloud/wav/v20210129/model/ExternalContact.h
  include/tencentcloud/wav/v20210129/model/LicenseInfo.h
  include/tencentcloud/wav/v20210129/model/QueryCustomerEventDetailStatisticsResponse.h
  include/tencentcloud/wav/v20210129/model/QueryStaffEventDetailStatisticsResponse.h
  include/tencentcloud/wav/v20210129/model/QueryExternalUserMappingInfoResponse.h
  include/tencentcloud/wav/v20210129/model/QueryStaffEventDetailStatisticsRequest.h
  include/tencentcloud/wav/v20210129/model/ChannelCodeInnerDetail.h
  include/tencentcloud/wav/v20210129/model/QueryExternalUserEventListRequest.h
  include/tencentcloud/wav/v20210129/model/ChatArchivingMsgTypeVideo.h
  include/tencentcloud/wav/v20210129/model/QueryExternalContactListRequest.h
  include/tencentcloud/wav/v20210129/model/QueryClueInfoListResponse.h
  include/tencentcloud/wav/v20210129/model/TagInfo.h
  include/tencentcloud/wav/v20210129/model/ExternalContactSimpleInfo.h
  include/tencentcloud/wav/v20210129/model/CustomerProfile.h
  include/tencentcloud/wav/v20210129/model/QueryClueInfoListRequest.h
  include/tencentcloud/wav/v20210129/model/MaterialInfo.h
  include/tencentcloud/wav/v20210129/model/ExternalContactTag.h
  include/tencentcloud/wav/v20210129/model/ChatArchivingDetail.h
  include/tencentcloud/wav/v20210129/model/QueryChatArchivingListResponse.h
  include/tencentcloud/wav/v20210129/model/QueryCrmStatisticsRequest.h
  include/tencentcloud/wav/v20210129/model/QueryVehicleInfoListResponse.h
  )

set(wav_src
  src/v20210129/WavClient.cpp
  src/v20210129/model/VehiclePurpose.cpp
  src/v20210129/model/QueryExternalContactDetailRequest.cpp
  src/v20210129/model/QueryUserInfoListRequest.cpp
  src/v20210129/model/CrmStatisticsData.cpp
  src/v20210129/model/QueryMaterialListRequest.cpp
  src/v20210129/model/QueryExternalContactDetailResponse.cpp
  src/v20210129/model/FollowInfo.cpp
  src/v20210129/model/DealerInfo.cpp
  src/v20210129/model/QueryCrmStatisticsResponse.cpp
  src/v20210129/model/QueryChannelCodeListResponse.cpp
  src/v20210129/model/CorpUserInfo.cpp
  src/v20210129/model/QueryExternalUserEventListResponse.cpp
  src/v20210129/model/ActivityDetail.cpp
  src/v20210129/model/QueryChannelCodeListRequest.cpp
  src/v20210129/model/QueryActivityLiveCodeListRequest.cpp
  src/v20210129/model/ClueInfoDetail.cpp
  src/v20210129/model/QueryActivityListRequest.cpp
  src/v20210129/model/QueryExternalUserMappingInfoRequest.cpp
  src/v20210129/model/QueryFollowListResponse.cpp
  src/v20210129/model/ActivityJoinDetail.cpp
  src/v20210129/model/CreateLeadRequest.cpp
  src/v20210129/model/QueryFollowListRequest.cpp
  src/v20210129/model/QueryMaterialListResponse.cpp
  src/v20210129/model/EnterpriseTag.cpp
  src/v20210129/model/TagDetailInfo.cpp
  src/v20210129/model/VehicleInfo.cpp
  src/v20210129/model/QueryDealerInfoListResponse.cpp
  src/v20210129/model/QueryVehicleInfoListRequest.cpp
  src/v20210129/model/QueryExternalContactDetailByDateResponse.cpp
  src/v20210129/model/CreateChannelCodeRequest.cpp
  src/v20210129/model/CreateCorpTagRequest.cpp
  src/v20210129/model/QueryMiniAppCodeListResponse.cpp
  src/v20210129/model/QueryLicenseInfoResponse.cpp
  src/v20210129/model/LiveCodeDetail.cpp
  src/v20210129/model/QueryArrivalListResponse.cpp
  src/v20210129/model/QueryExternalContactListResponse.cpp
  src/v20210129/model/QueryLicenseInfoRequest.cpp
  src/v20210129/model/QueryCustomerEventDetailStatisticsRequest.cpp
  src/v20210129/model/QueryUserInfoListResponse.cpp
  src/v20210129/model/CreateCorpTagResponse.cpp
  src/v20210129/model/FollowUserPro.cpp
  src/v20210129/model/CustomerActionEventDetail.cpp
  src/v20210129/model/QueryCustomerProfileListRequest.cpp
  src/v20210129/model/QueryCustomerProfileListResponse.cpp
  src/v20210129/model/ExternalUserEventInfo.cpp
  src/v20210129/model/ExternalUserMappingInfo.cpp
  src/v20210129/model/ArrivalInfo.cpp
  src/v20210129/model/PurchaseConcern.cpp
  src/v20210129/model/CreateLeadResponse.cpp
  src/v20210129/model/MiniAppCodeInfo.cpp
  src/v20210129/model/FollowUser.cpp
  src/v20210129/model/QueryExternalContactDetailByDateRequest.cpp
  src/v20210129/model/QueryActivityLiveCodeListResponse.cpp
  src/v20210129/model/QueryActivityJoinListResponse.cpp
  src/v20210129/model/QueryArrivalListRequest.cpp
  src/v20210129/model/QueryActivityListResponse.cpp
  src/v20210129/model/QueryActivityJoinListRequest.cpp
  src/v20210129/model/TagGroup.cpp
  src/v20210129/model/ChannelTag.cpp
  src/v20210129/model/WeComTagDetail.cpp
  src/v20210129/model/ExternalContactDetailPro.cpp
  src/v20210129/model/SalesActionEventDetail.cpp
  src/v20210129/model/QueryDealerInfoListRequest.cpp
  src/v20210129/model/CreateChannelCodeResponse.cpp
  src/v20210129/model/QueryMiniAppCodeListRequest.cpp
  src/v20210129/model/QueryChatArchivingListRequest.cpp
  src/v20210129/model/ExternalContact.cpp
  src/v20210129/model/LicenseInfo.cpp
  src/v20210129/model/QueryCustomerEventDetailStatisticsResponse.cpp
  src/v20210129/model/QueryStaffEventDetailStatisticsResponse.cpp
  src/v20210129/model/QueryExternalUserMappingInfoResponse.cpp
  src/v20210129/model/QueryStaffEventDetailStatisticsRequest.cpp
  src/v20210129/model/ChannelCodeInnerDetail.cpp
  src/v20210129/model/QueryExternalUserEventListRequest.cpp
  src/v20210129/model/ChatArchivingMsgTypeVideo.cpp
  src/v20210129/model/QueryExternalContactListRequest.cpp
  src/v20210129/model/QueryClueInfoListResponse.cpp
  src/v20210129/model/TagInfo.cpp
  src/v20210129/model/ExternalContactSimpleInfo.cpp
  src/v20210129/model/CustomerProfile.cpp
  src/v20210129/model/QueryClueInfoListRequest.cpp
  src/v20210129/model/MaterialInfo.cpp
  src/v20210129/model/ExternalContactTag.cpp
  src/v20210129/model/ChatArchivingDetail.cpp
  src/v20210129/model/QueryChatArchivingListResponse.cpp
  src/v20210129/model/QueryCrmStatisticsRequest.cpp
  src/v20210129/model/QueryVehicleInfoListResponse.cpp
  )

set(wav_include
    include/tencentcloud/wav
  )

add_library(wav ${LIB_TYPE}
  ${wav_public_header}
  ${wav_public_header_model}
  ${wav_src})

set_target_properties(wav
  PROPERTIES
  LINKER_LANGUAGE CXX
  ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
  LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
  RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin
  OUTPUT_NAME ${TARGET_OUTPUT_NAME_PREFIX}wav
  )

target_include_directories(wav
  PRIVATE include
    ${CMAKE_SOURCE_DIR}/core/include
  )
target_link_libraries(wav
  core)

#install(FILES ${wav_public_header}
#  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud/wav/v20210129)
#install(FILES ${wav_public_header_model}
#  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud/wav/v20210129/model)
install(DIRECTORY ${wav_include}
  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud)

install(TARGETS wav
  ARCHIVE DESTINATION ${CMAKE_INSTALL_LIBDIR}
  LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
  RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
  )
