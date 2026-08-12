#
# Copyright (c) 2017-2025 Tencent. All Rights Reserved.
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

set(rce_public_header
  include/tencentcloud/rce/v20260130/RceClient.h
  include/tencentcloud/rce/v20201103/RceClient.h
  include/tencentcloud/rce/v20250425/RceClient.h
  )

set(rce_public_header_model
  include/tencentcloud/rce/v20260130/model/TaskEvent.h
  include/tencentcloud/rce/v20260130/model/DigitalOrder.h
  include/tencentcloud/rce/v20260130/model/Billing.h
  include/tencentcloud/rce/v20260130/model/Decision.h
  include/tencentcloud/rce/v20260130/model/Person.h
  include/tencentcloud/rce/v20260130/model/Environment.h
  include/tencentcloud/rce/v20260130/model/Wallet.h
  include/tencentcloud/rce/v20260130/model/Score.h
  include/tencentcloud/rce/v20260130/model/ClaimRedPacketEvent.h
  include/tencentcloud/rce/v20260130/model/PromotionCode.h
  include/tencentcloud/rce/v20260130/model/ChargeBackEvent.h
  include/tencentcloud/rce/v20260130/model/ReportEventRequest.h
  include/tencentcloud/rce/v20260130/model/WithdrawEvent.h
  include/tencentcloud/rce/v20260130/model/Merchant.h
  include/tencentcloud/rce/v20260130/model/Delivery.h
  include/tencentcloud/rce/v20260130/model/Cust.h
  include/tencentcloud/rce/v20260130/model/AssessEnvironmentRiskRsp.h
  include/tencentcloud/rce/v20260130/model/AssessEnvironmentRiskResponse.h
  include/tencentcloud/rce/v20260130/model/PaymentMethod.h
  include/tencentcloud/rce/v20260130/model/LuckyDrawEvent.h
  include/tencentcloud/rce/v20260130/model/AssessDeviceRiskPremiumProRequest.h
  include/tencentcloud/rce/v20260130/model/Order.h
  include/tencentcloud/rce/v20260130/model/AssessDeviceRiskProResponse.h
  include/tencentcloud/rce/v20260130/model/User.h
  include/tencentcloud/rce/v20260130/model/Address.h
  include/tencentcloud/rce/v20260130/model/Device.h
  include/tencentcloud/rce/v20260130/model/DataAuthorization.h
  include/tencentcloud/rce/v20260130/model/CreateOrderEvent.h
  include/tencentcloud/rce/v20260130/model/Card.h
  include/tencentcloud/rce/v20260130/model/Result.h
  include/tencentcloud/rce/v20260130/model/ReportEventResponse.h
  include/tencentcloud/rce/v20260130/model/RiskLabel.h
  include/tencentcloud/rce/v20260130/model/CustEvent.h
  include/tencentcloud/rce/v20260130/model/IPLocation.h
  include/tencentcloud/rce/v20260130/model/DataScore.h
  include/tencentcloud/rce/v20260130/model/BrowseEvent.h
  include/tencentcloud/rce/v20260130/model/AssessDeviceRiskPremiumProResponse.h
  include/tencentcloud/rce/v20260130/model/AssessDeviceRiskProRequest.h
  include/tencentcloud/rce/v20260130/model/CreditPoint.h
  include/tencentcloud/rce/v20260130/model/Item.h
  include/tencentcloud/rce/v20260130/model/Amount.h
  include/tencentcloud/rce/v20260130/model/SMSEvent.h
  include/tencentcloud/rce/v20260130/model/AssessRiskResponse.h
  include/tencentcloud/rce/v20260130/model/AssessEnvironmentRiskRequest.h
  include/tencentcloud/rce/v20260130/model/AddPromotionEvent.h
  include/tencentcloud/rce/v20260130/model/Promotion.h
  include/tencentcloud/rce/v20260130/model/ModifyAccountEvent.h
  include/tencentcloud/rce/v20260130/model/Inviter.h
  include/tencentcloud/rce/v20260130/model/LogoutEvent.h
  include/tencentcloud/rce/v20260130/model/Browser.h
  include/tencentcloud/rce/v20260130/model/PaymentResult.h
  include/tencentcloud/rce/v20260130/model/TransactionEvent.h
  include/tencentcloud/rce/v20260130/model/AssessRiskRsp.h
  include/tencentcloud/rce/v20260130/model/ModifyPasswordEvent.h
  include/tencentcloud/rce/v20260130/model/AssessDeviceRiskRsp.h
  include/tencentcloud/rce/v20260130/model/Coupon.h
  include/tencentcloud/rce/v20260130/model/RegisterEvent.h
  include/tencentcloud/rce/v20260130/model/App.h
  include/tencentcloud/rce/v20260130/model/LoginEvent.h
  include/tencentcloud/rce/v20260130/model/EventDetail.h
  include/tencentcloud/rce/v20260130/model/IPNetwork.h
  include/tencentcloud/rce/v20260130/model/SecurityVerificationEvent.h
  include/tencentcloud/rce/v20260130/model/AssessDeviceRiskPremiumRsp.h
  include/tencentcloud/rce/v20260130/model/RedeemEvent.h
  include/tencentcloud/rce/v20260130/model/InvitationEvent.h
  include/tencentcloud/rce/v20260130/model/AssessRiskRequest.h
  include/tencentcloud/rce/v20260130/model/ScanCodeEvent.h
  include/tencentcloud/rce/v20201103/model/DataContentInfo.h
  include/tencentcloud/rce/v20201103/model/OutputDescribeNameListFrontFix.h
  include/tencentcloud/rce/v20201103/model/DescribeNameListResponse.h
  include/tencentcloud/rce/v20201103/model/OutputDescribeDataListFront.h
  include/tencentcloud/rce/v20201103/model/InputCreateNameListFront.h
  include/tencentcloud/rce/v20201103/model/ManageMarketingRiskRequest.h
  include/tencentcloud/rce/v20201103/model/InputDeleteNameListFront.h
  include/tencentcloud/rce/v20201103/model/WeChatAccountInfo.h
  include/tencentcloud/rce/v20201103/model/InputDescribeNameListFront.h
  include/tencentcloud/rce/v20201103/model/AccountInfo.h
  include/tencentcloud/rce/v20201103/model/ModifyNameListDataRequest.h
  include/tencentcloud/rce/v20201103/model/OuntputDescribeDataListInfo.h
  include/tencentcloud/rce/v20201103/model/InputDescribeNameListDetail.h
  include/tencentcloud/rce/v20201103/model/OutputManageMarketingRiskValue.h
  include/tencentcloud/rce/v20201103/model/CreateNameListRequest.h
  include/tencentcloud/rce/v20201103/model/DeleteNameListDataResponse.h
  include/tencentcloud/rce/v20201103/model/DescribeUserUsageCntRequest.h
  include/tencentcloud/rce/v20201103/model/ImportNameListDataResponse.h
  include/tencentcloud/rce/v20201103/model/DeleteNameListRequest.h
  include/tencentcloud/rce/v20201103/model/OutputDescribeUserUsageCnt.h
  include/tencentcloud/rce/v20201103/model/DescribeNameListDetailResponse.h
  include/tencentcloud/rce/v20201103/model/OutputDescribeNameListInfo.h
  include/tencentcloud/rce/v20201103/model/ManageMarketingRiskResponse.h
  include/tencentcloud/rce/v20201103/model/OutputDescribeNameListFrontFixListData.h
  include/tencentcloud/rce/v20201103/model/OutputDeleteNameListData.h
  include/tencentcloud/rce/v20201103/model/OutputModifyNameFront.h
  include/tencentcloud/rce/v20201103/model/InputDetails.h
  include/tencentcloud/rce/v20201103/model/ModifyNameListRequest.h
  include/tencentcloud/rce/v20201103/model/OutputModifyNameListFront.h
  include/tencentcloud/rce/v20201103/model/DescribeNameListDetailRequest.h
  include/tencentcloud/rce/v20201103/model/DescribeNameListDataListResponse.h
  include/tencentcloud/rce/v20201103/model/DeleteNameListDataRequest.h
  include/tencentcloud/rce/v20201103/model/InputModifyNameListDataFront.h
  include/tencentcloud/rce/v20201103/model/OutputManageMarketingRisk.h
  include/tencentcloud/rce/v20201103/model/InputDescribeDataListFront.h
  include/tencentcloud/rce/v20201103/model/InputImportNameListDataFront.h
  include/tencentcloud/rce/v20201103/model/DescribeNameListDataListRequest.h
  include/tencentcloud/rce/v20201103/model/InputCryptoManageMarketingRisk.h
  include/tencentcloud/rce/v20201103/model/DescribeNameListRequest.h
  include/tencentcloud/rce/v20201103/model/OutputImportNameListDataFront.h
  include/tencentcloud/rce/v20201103/model/InputModifyNameFront.h
  include/tencentcloud/rce/v20201103/model/SponsorInfo.h
  include/tencentcloud/rce/v20201103/model/CreateNameListResponse.h
  include/tencentcloud/rce/v20201103/model/OtherAccountInfo.h
  include/tencentcloud/rce/v20201103/model/OutputDescribeDataListFrontData.h
  include/tencentcloud/rce/v20201103/model/OutputDescribeNameListDetailFront.h
  include/tencentcloud/rce/v20201103/model/OutputDescribeNameListDetail.h
  include/tencentcloud/rce/v20201103/model/OnlineScamInfo.h
  include/tencentcloud/rce/v20201103/model/QQAccountInfo.h
  include/tencentcloud/rce/v20201103/model/ModifyNameListDataResponse.h
  include/tencentcloud/rce/v20201103/model/InputManageMarketingRisk.h
  include/tencentcloud/rce/v20201103/model/OutputCreateNameListFront.h
  include/tencentcloud/rce/v20201103/model/OutputDescribeUserUsageCntData.h
  include/tencentcloud/rce/v20201103/model/ModifyNameListResponse.h
  include/tencentcloud/rce/v20201103/model/OutputDeleteNameListFront.h
  include/tencentcloud/rce/v20201103/model/InputDeleteNameListData.h
  include/tencentcloud/rce/v20201103/model/ImportNameListDataRequest.h
  include/tencentcloud/rce/v20201103/model/DataAuthorizationInfo.h
  include/tencentcloud/rce/v20201103/model/DeleteNameListResponse.h
  include/tencentcloud/rce/v20201103/model/InputModifyNameListDataFrontListData.h
  include/tencentcloud/rce/v20201103/model/DescribeUserUsageCntResponse.h
  include/tencentcloud/rce/v20250425/model/ManageIPPortraitRiskOutput.h
  include/tencentcloud/rce/v20250425/model/ManageIPPortraitRiskResponse.h
  include/tencentcloud/rce/v20250425/model/ManageIPPortraitRiskRequest.h
  include/tencentcloud/rce/v20250425/model/IpLocationInfo.h
  include/tencentcloud/rce/v20250425/model/ManageIPPortraitRiskInput.h
  include/tencentcloud/rce/v20250425/model/ManageIPPortraitRiskValueOutput.h
  include/tencentcloud/rce/v20250425/model/IpNetworkInfo.h
  )

set(rce_src
  src/v20260130/RceClient.cpp
  src/v20201103/RceClient.cpp
  src/v20250425/RceClient.cpp
  src/v20260130/model/TaskEvent.cpp
  src/v20260130/model/DigitalOrder.cpp
  src/v20260130/model/Billing.cpp
  src/v20260130/model/Decision.cpp
  src/v20260130/model/Person.cpp
  src/v20260130/model/Environment.cpp
  src/v20260130/model/Wallet.cpp
  src/v20260130/model/Score.cpp
  src/v20260130/model/ClaimRedPacketEvent.cpp
  src/v20260130/model/PromotionCode.cpp
  src/v20260130/model/ChargeBackEvent.cpp
  src/v20260130/model/ReportEventRequest.cpp
  src/v20260130/model/WithdrawEvent.cpp
  src/v20260130/model/Merchant.cpp
  src/v20260130/model/Delivery.cpp
  src/v20260130/model/Cust.cpp
  src/v20260130/model/AssessEnvironmentRiskRsp.cpp
  src/v20260130/model/AssessEnvironmentRiskResponse.cpp
  src/v20260130/model/PaymentMethod.cpp
  src/v20260130/model/LuckyDrawEvent.cpp
  src/v20260130/model/AssessDeviceRiskPremiumProRequest.cpp
  src/v20260130/model/Order.cpp
  src/v20260130/model/AssessDeviceRiskProResponse.cpp
  src/v20260130/model/User.cpp
  src/v20260130/model/Address.cpp
  src/v20260130/model/Device.cpp
  src/v20260130/model/DataAuthorization.cpp
  src/v20260130/model/CreateOrderEvent.cpp
  src/v20260130/model/Card.cpp
  src/v20260130/model/Result.cpp
  src/v20260130/model/ReportEventResponse.cpp
  src/v20260130/model/RiskLabel.cpp
  src/v20260130/model/CustEvent.cpp
  src/v20260130/model/IPLocation.cpp
  src/v20260130/model/DataScore.cpp
  src/v20260130/model/BrowseEvent.cpp
  src/v20260130/model/AssessDeviceRiskPremiumProResponse.cpp
  src/v20260130/model/AssessDeviceRiskProRequest.cpp
  src/v20260130/model/CreditPoint.cpp
  src/v20260130/model/Item.cpp
  src/v20260130/model/Amount.cpp
  src/v20260130/model/SMSEvent.cpp
  src/v20260130/model/AssessRiskResponse.cpp
  src/v20260130/model/AssessEnvironmentRiskRequest.cpp
  src/v20260130/model/AddPromotionEvent.cpp
  src/v20260130/model/Promotion.cpp
  src/v20260130/model/ModifyAccountEvent.cpp
  src/v20260130/model/Inviter.cpp
  src/v20260130/model/LogoutEvent.cpp
  src/v20260130/model/Browser.cpp
  src/v20260130/model/PaymentResult.cpp
  src/v20260130/model/TransactionEvent.cpp
  src/v20260130/model/AssessRiskRsp.cpp
  src/v20260130/model/ModifyPasswordEvent.cpp
  src/v20260130/model/AssessDeviceRiskRsp.cpp
  src/v20260130/model/Coupon.cpp
  src/v20260130/model/RegisterEvent.cpp
  src/v20260130/model/App.cpp
  src/v20260130/model/LoginEvent.cpp
  src/v20260130/model/EventDetail.cpp
  src/v20260130/model/IPNetwork.cpp
  src/v20260130/model/SecurityVerificationEvent.cpp
  src/v20260130/model/AssessDeviceRiskPremiumRsp.cpp
  src/v20260130/model/RedeemEvent.cpp
  src/v20260130/model/InvitationEvent.cpp
  src/v20260130/model/AssessRiskRequest.cpp
  src/v20260130/model/ScanCodeEvent.cpp
  src/v20201103/model/DataContentInfo.cpp
  src/v20201103/model/OutputDescribeNameListFrontFix.cpp
  src/v20201103/model/DescribeNameListResponse.cpp
  src/v20201103/model/OutputDescribeDataListFront.cpp
  src/v20201103/model/InputCreateNameListFront.cpp
  src/v20201103/model/ManageMarketingRiskRequest.cpp
  src/v20201103/model/InputDeleteNameListFront.cpp
  src/v20201103/model/WeChatAccountInfo.cpp
  src/v20201103/model/InputDescribeNameListFront.cpp
  src/v20201103/model/AccountInfo.cpp
  src/v20201103/model/ModifyNameListDataRequest.cpp
  src/v20201103/model/OuntputDescribeDataListInfo.cpp
  src/v20201103/model/InputDescribeNameListDetail.cpp
  src/v20201103/model/OutputManageMarketingRiskValue.cpp
  src/v20201103/model/CreateNameListRequest.cpp
  src/v20201103/model/DeleteNameListDataResponse.cpp
  src/v20201103/model/DescribeUserUsageCntRequest.cpp
  src/v20201103/model/ImportNameListDataResponse.cpp
  src/v20201103/model/DeleteNameListRequest.cpp
  src/v20201103/model/OutputDescribeUserUsageCnt.cpp
  src/v20201103/model/DescribeNameListDetailResponse.cpp
  src/v20201103/model/OutputDescribeNameListInfo.cpp
  src/v20201103/model/ManageMarketingRiskResponse.cpp
  src/v20201103/model/OutputDescribeNameListFrontFixListData.cpp
  src/v20201103/model/OutputDeleteNameListData.cpp
  src/v20201103/model/OutputModifyNameFront.cpp
  src/v20201103/model/InputDetails.cpp
  src/v20201103/model/ModifyNameListRequest.cpp
  src/v20201103/model/OutputModifyNameListFront.cpp
  src/v20201103/model/DescribeNameListDetailRequest.cpp
  src/v20201103/model/DescribeNameListDataListResponse.cpp
  src/v20201103/model/DeleteNameListDataRequest.cpp
  src/v20201103/model/InputModifyNameListDataFront.cpp
  src/v20201103/model/OutputManageMarketingRisk.cpp
  src/v20201103/model/InputDescribeDataListFront.cpp
  src/v20201103/model/InputImportNameListDataFront.cpp
  src/v20201103/model/DescribeNameListDataListRequest.cpp
  src/v20201103/model/InputCryptoManageMarketingRisk.cpp
  src/v20201103/model/DescribeNameListRequest.cpp
  src/v20201103/model/OutputImportNameListDataFront.cpp
  src/v20201103/model/InputModifyNameFront.cpp
  src/v20201103/model/SponsorInfo.cpp
  src/v20201103/model/CreateNameListResponse.cpp
  src/v20201103/model/OtherAccountInfo.cpp
  src/v20201103/model/OutputDescribeDataListFrontData.cpp
  src/v20201103/model/OutputDescribeNameListDetailFront.cpp
  src/v20201103/model/OutputDescribeNameListDetail.cpp
  src/v20201103/model/OnlineScamInfo.cpp
  src/v20201103/model/QQAccountInfo.cpp
  src/v20201103/model/ModifyNameListDataResponse.cpp
  src/v20201103/model/InputManageMarketingRisk.cpp
  src/v20201103/model/OutputCreateNameListFront.cpp
  src/v20201103/model/OutputDescribeUserUsageCntData.cpp
  src/v20201103/model/ModifyNameListResponse.cpp
  src/v20201103/model/OutputDeleteNameListFront.cpp
  src/v20201103/model/InputDeleteNameListData.cpp
  src/v20201103/model/ImportNameListDataRequest.cpp
  src/v20201103/model/DataAuthorizationInfo.cpp
  src/v20201103/model/DeleteNameListResponse.cpp
  src/v20201103/model/InputModifyNameListDataFrontListData.cpp
  src/v20201103/model/DescribeUserUsageCntResponse.cpp
  src/v20250425/model/ManageIPPortraitRiskOutput.cpp
  src/v20250425/model/ManageIPPortraitRiskResponse.cpp
  src/v20250425/model/ManageIPPortraitRiskRequest.cpp
  src/v20250425/model/IpLocationInfo.cpp
  src/v20250425/model/ManageIPPortraitRiskInput.cpp
  src/v20250425/model/ManageIPPortraitRiskValueOutput.cpp
  src/v20250425/model/IpNetworkInfo.cpp
  )

set(rce_include
    include/tencentcloud/rce
  )

add_library(rce ${LIB_TYPE}
  ${rce_public_header}
  ${rce_public_header_model}
  ${rce_src})

set_target_properties(rce
  PROPERTIES
  LINKER_LANGUAGE CXX
  ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
  LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
  RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin
  OUTPUT_NAME ${TARGET_OUTPUT_NAME_PREFIX}rce
  )

target_include_directories(rce
  PRIVATE include
    ${CMAKE_SOURCE_DIR}/core/include
  )
target_link_libraries(rce
  core)

#install(FILES ${rce_public_header}
#  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud/rce/v20250425)
#install(FILES ${rce_public_header_model}
#  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud/rce/v20250425/model)
install(DIRECTORY ${rce_include}
  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud)

install(TARGETS rce
  ARCHIVE DESTINATION ${CMAKE_INSTALL_LIBDIR}
  LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
  RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
  )
