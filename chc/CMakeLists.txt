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

set(chc_public_header
  include/tencentcloud/chc/v20230418/ChcClient.h
  )

set(chc_public_header_model
  include/tencentcloud/chc/v20230418/model/CreatePersonnelVisitWorkOrderRequest.h
  include/tencentcloud/chc/v20230418/model/WorkOrderTinyInfo.h
  include/tencentcloud/chc/v20230418/model/DescribePositionsRequest.h
  include/tencentcloud/chc/v20230418/model/ModelEvaluationBaseInfo.h
  include/tencentcloud/chc/v20230418/model/DescribeIdcUnitAssetDetailRequest.h
  include/tencentcloud/chc/v20230418/model/CreateMovingWorkOrderRequest.h
  include/tencentcloud/chc/v20230418/model/Position.h
  include/tencentcloud/chc/v20230418/model/SelfOperation.h
  include/tencentcloud/chc/v20230418/model/CreateServerModelRequest.h
  include/tencentcloud/chc/v20230418/model/WorkOrderTypeDetail.h
  include/tencentcloud/chc/v20230418/model/DescribeModelVersionListResponse.h
  include/tencentcloud/chc/v20230418/model/CreateModelEvaluationWorkOrderRequest.h
  include/tencentcloud/chc/v20230418/model/DescribeModelVersionListRequest.h
  include/tencentcloud/chc/v20230418/model/CreateNetDeviceModelRequest.h
  include/tencentcloud/chc/v20230418/model/IdcUnitInfo.h
  include/tencentcloud/chc/v20230418/model/ServerModel.h
  include/tencentcloud/chc/v20230418/model/DescribeIdcUnitDetailResponse.h
  include/tencentcloud/chc/v20230418/model/DescribeIdcsRequest.h
  include/tencentcloud/chc/v20230418/model/DescribeIdcUnitAssetDetailResponse.h
  include/tencentcloud/chc/v20230418/model/DescribePositionsResponse.h
  include/tencentcloud/chc/v20230418/model/WorkOrderFamilyDetail.h
  include/tencentcloud/chc/v20230418/model/DescribePositionStatusSummaryResponse.h
  include/tencentcloud/chc/v20230418/model/DescribeDeviceListRequest.h
  include/tencentcloud/chc/v20230418/model/CreateSpeciallyQuitWorkOrderRequest.h
  include/tencentcloud/chc/v20230418/model/ConfirmCommonServiceWorkOrderRequest.h
  include/tencentcloud/chc/v20230418/model/OtherDevReceivingInfo.h
  include/tencentcloud/chc/v20230418/model/DescribeModelEvaluationWorkOrderDetailRequest.h
  include/tencentcloud/chc/v20230418/model/TemplateOption.h
  include/tencentcloud/chc/v20230418/model/CreateReceivingWorkOrderRequest.h
  include/tencentcloud/chc/v20230418/model/DescribeWorkOrderStatisticsRequest.h
  include/tencentcloud/chc/v20230418/model/DescribeResourceUsageRequest.h
  include/tencentcloud/chc/v20230418/model/LogisticsReceipt.h
  include/tencentcloud/chc/v20230418/model/CreateCommonServiceWorkOrderRequest.h
  include/tencentcloud/chc/v20230418/model/CreateCommonServiceWorkOrderResponse.h
  include/tencentcloud/chc/v20230418/model/DescribeIdcUnitDetailRequest.h
  include/tencentcloud/chc/v20230418/model/DescribeAvailableModelListRequest.h
  include/tencentcloud/chc/v20230418/model/CreatePersonnelVisitWorkOrderResponse.h
  include/tencentcloud/chc/v20230418/model/ExpressDelivery.h
  include/tencentcloud/chc/v20230418/model/DescribeModelRequest.h
  include/tencentcloud/chc/v20230418/model/ModelVersionDetail.h
  include/tencentcloud/chc/v20230418/model/CreateRackOffWorkOrderRequest.h
  include/tencentcloud/chc/v20230418/model/ExportCustomerWorkOrderDetailResponse.h
  include/tencentcloud/chc/v20230418/model/AvailableModelVersion.h
  include/tencentcloud/chc/v20230418/model/CustomerReceipt.h
  include/tencentcloud/chc/v20230418/model/Cage.h
  include/tencentcloud/chc/v20230418/model/PowerOffConfirm.h
  include/tencentcloud/chc/v20230418/model/DeviceRackOn.h
  include/tencentcloud/chc/v20230418/model/DescribeModelTemplateResponse.h
  include/tencentcloud/chc/v20230418/model/DescribeWorkOrderListRequest.h
  include/tencentcloud/chc/v20230418/model/DescribeWorkOrderTypesResponse.h
  include/tencentcloud/chc/v20230418/model/Distribution.h
  include/tencentcloud/chc/v20230418/model/Rack.h
  include/tencentcloud/chc/v20230418/model/DescribePositionStatusSummaryRequest.h
  include/tencentcloud/chc/v20230418/model/DescribeWorkOrderTypesRequest.h
  include/tencentcloud/chc/v20230418/model/CreateRackOnWorkOrderRequest.h
  include/tencentcloud/chc/v20230418/model/NetReceivingInfo.h
  include/tencentcloud/chc/v20230418/model/DescribeCampusListResponse.h
  include/tencentcloud/chc/v20230418/model/WireReceivingInfo.h
  include/tencentcloud/chc/v20230418/model/DescribeModelTemplateRequest.h
  include/tencentcloud/chc/v20230418/model/DeviceOrderBaseInfo.h
  include/tencentcloud/chc/v20230418/model/CreateMovingWorkOrderResponse.h
  include/tencentcloud/chc/v20230418/model/Campus.h
  include/tencentcloud/chc/v20230418/model/WorkOrderData.h
  include/tencentcloud/chc/v20230418/model/ExportCustomerWorkOrderDetailRequest.h
  include/tencentcloud/chc/v20230418/model/NetDeviceModel.h
  include/tencentcloud/chc/v20230418/model/ModelVersion.h
  include/tencentcloud/chc/v20230418/model/DescribeResourceUsageResponse.h
  include/tencentcloud/chc/v20230418/model/CreateRackOffWorkOrderResponse.h
  include/tencentcloud/chc/v20230418/model/RackUsage.h
  include/tencentcloud/chc/v20230418/model/CommonServiceBaseInfo.h
  include/tencentcloud/chc/v20230418/model/CreatePowerOnWorkOrderResponse.h
  include/tencentcloud/chc/v20230418/model/CreateRackOnWorkOrderResponse.h
  include/tencentcloud/chc/v20230418/model/DescribePersonnelVisitWorkOrderDetailRequest.h
  include/tencentcloud/chc/v20230418/model/DescribeCustomerInfoResponse.h
  include/tencentcloud/chc/v20230418/model/Device.h
  include/tencentcloud/chc/v20230418/model/CreateServerModelResponse.h
  include/tencentcloud/chc/v20230418/model/DescribeCampusListRequest.h
  include/tencentcloud/chc/v20230418/model/Filter.h
  include/tencentcloud/chc/v20230418/model/OptionValueItem.h
  include/tencentcloud/chc/v20230418/model/IdcUnit.h
  include/tencentcloud/chc/v20230418/model/ModifyWorkOrderTypeCollectFlagResponse.h
  include/tencentcloud/chc/v20230418/model/DescribeRacksDistributionRequest.h
  include/tencentcloud/chc/v20230418/model/DescribeCommonServiceWorkOrderDetailResponse.h
  include/tencentcloud/chc/v20230418/model/ModifyWorkOrderTypeCollectFlagRequest.h
  include/tencentcloud/chc/v20230418/model/CreateNetDeviceModelResponse.h
  include/tencentcloud/chc/v20230418/model/DescribeCommonServiceWorkOrderDetailRequest.h
  include/tencentcloud/chc/v20230418/model/ServerReceivingInfo.h
  include/tencentcloud/chc/v20230418/model/CustomerInfo.h
  include/tencentcloud/chc/v20230418/model/ModelVersionCount.h
  include/tencentcloud/chc/v20230418/model/CreateModelEvaluationWorkOrderResponse.h
  include/tencentcloud/chc/v20230418/model/DescribeWorkOrderListResponse.h
  include/tencentcloud/chc/v20230418/model/DescribeAvailableModelListResponse.h
  include/tencentcloud/chc/v20230418/model/Personnel.h
  include/tencentcloud/chc/v20230418/model/DescribeWorkOrderStatisticsResponse.h
  include/tencentcloud/chc/v20230418/model/CreateReceivingWorkOrderResponse.h
  include/tencentcloud/chc/v20230418/model/DescribePersonnelVisitWorkOrderDetailResponse.h
  include/tencentcloud/chc/v20230418/model/CreateQuitWorkOrderRequest.h
  include/tencentcloud/chc/v20230418/model/PositionStatusItem.h
  include/tencentcloud/chc/v20230418/model/DescribeModelResponse.h
  include/tencentcloud/chc/v20230418/model/CreatePowerOnWorkOrderRequest.h
  include/tencentcloud/chc/v20230418/model/OrderStep.h
  include/tencentcloud/chc/v20230418/model/CreatePowerOffWorkOrderResponse.h
  include/tencentcloud/chc/v20230418/model/CreateSpeciallyQuitWorkOrderResponse.h
  include/tencentcloud/chc/v20230418/model/DeviceHistory.h
  include/tencentcloud/chc/v20230418/model/PersonnelVisitBaseInfo.h
  include/tencentcloud/chc/v20230418/model/ConfirmCommonServiceWorkOrderResponse.h
  include/tencentcloud/chc/v20230418/model/CreatePowerOffWorkOrderRequest.h
  include/tencentcloud/chc/v20230418/model/CreateQuitWorkOrderResponse.h
  include/tencentcloud/chc/v20230418/model/DevicePosition.h
  include/tencentcloud/chc/v20230418/model/DescribeRacksDistributionResponse.h
  include/tencentcloud/chc/v20230418/model/DescribeCustomerInfoRequest.h
  include/tencentcloud/chc/v20230418/model/DescribeDeviceListResponse.h
  include/tencentcloud/chc/v20230418/model/DescribeDeviceWorkOrderDetailRequest.h
  include/tencentcloud/chc/v20230418/model/DescribeModelEvaluationWorkOrderDetailResponse.h
  include/tencentcloud/chc/v20230418/model/Idc.h
  include/tencentcloud/chc/v20230418/model/DescribeRacksResponse.h
  include/tencentcloud/chc/v20230418/model/DescribeRacksRequest.h
  include/tencentcloud/chc/v20230418/model/DescribeIdcsResponse.h
  include/tencentcloud/chc/v20230418/model/DescribeDeviceWorkOrderDetailResponse.h
  )

set(chc_src
  src/v20230418/ChcClient.cpp
  src/v20230418/model/CreatePersonnelVisitWorkOrderRequest.cpp
  src/v20230418/model/WorkOrderTinyInfo.cpp
  src/v20230418/model/DescribePositionsRequest.cpp
  src/v20230418/model/ModelEvaluationBaseInfo.cpp
  src/v20230418/model/DescribeIdcUnitAssetDetailRequest.cpp
  src/v20230418/model/CreateMovingWorkOrderRequest.cpp
  src/v20230418/model/Position.cpp
  src/v20230418/model/SelfOperation.cpp
  src/v20230418/model/CreateServerModelRequest.cpp
  src/v20230418/model/WorkOrderTypeDetail.cpp
  src/v20230418/model/DescribeModelVersionListResponse.cpp
  src/v20230418/model/CreateModelEvaluationWorkOrderRequest.cpp
  src/v20230418/model/DescribeModelVersionListRequest.cpp
  src/v20230418/model/CreateNetDeviceModelRequest.cpp
  src/v20230418/model/IdcUnitInfo.cpp
  src/v20230418/model/ServerModel.cpp
  src/v20230418/model/DescribeIdcUnitDetailResponse.cpp
  src/v20230418/model/DescribeIdcsRequest.cpp
  src/v20230418/model/DescribeIdcUnitAssetDetailResponse.cpp
  src/v20230418/model/DescribePositionsResponse.cpp
  src/v20230418/model/WorkOrderFamilyDetail.cpp
  src/v20230418/model/DescribePositionStatusSummaryResponse.cpp
  src/v20230418/model/DescribeDeviceListRequest.cpp
  src/v20230418/model/CreateSpeciallyQuitWorkOrderRequest.cpp
  src/v20230418/model/ConfirmCommonServiceWorkOrderRequest.cpp
  src/v20230418/model/OtherDevReceivingInfo.cpp
  src/v20230418/model/DescribeModelEvaluationWorkOrderDetailRequest.cpp
  src/v20230418/model/TemplateOption.cpp
  src/v20230418/model/CreateReceivingWorkOrderRequest.cpp
  src/v20230418/model/DescribeWorkOrderStatisticsRequest.cpp
  src/v20230418/model/DescribeResourceUsageRequest.cpp
  src/v20230418/model/LogisticsReceipt.cpp
  src/v20230418/model/CreateCommonServiceWorkOrderRequest.cpp
  src/v20230418/model/CreateCommonServiceWorkOrderResponse.cpp
  src/v20230418/model/DescribeIdcUnitDetailRequest.cpp
  src/v20230418/model/DescribeAvailableModelListRequest.cpp
  src/v20230418/model/CreatePersonnelVisitWorkOrderResponse.cpp
  src/v20230418/model/ExpressDelivery.cpp
  src/v20230418/model/DescribeModelRequest.cpp
  src/v20230418/model/ModelVersionDetail.cpp
  src/v20230418/model/CreateRackOffWorkOrderRequest.cpp
  src/v20230418/model/ExportCustomerWorkOrderDetailResponse.cpp
  src/v20230418/model/AvailableModelVersion.cpp
  src/v20230418/model/CustomerReceipt.cpp
  src/v20230418/model/Cage.cpp
  src/v20230418/model/PowerOffConfirm.cpp
  src/v20230418/model/DeviceRackOn.cpp
  src/v20230418/model/DescribeModelTemplateResponse.cpp
  src/v20230418/model/DescribeWorkOrderListRequest.cpp
  src/v20230418/model/DescribeWorkOrderTypesResponse.cpp
  src/v20230418/model/Distribution.cpp
  src/v20230418/model/Rack.cpp
  src/v20230418/model/DescribePositionStatusSummaryRequest.cpp
  src/v20230418/model/DescribeWorkOrderTypesRequest.cpp
  src/v20230418/model/CreateRackOnWorkOrderRequest.cpp
  src/v20230418/model/NetReceivingInfo.cpp
  src/v20230418/model/DescribeCampusListResponse.cpp
  src/v20230418/model/WireReceivingInfo.cpp
  src/v20230418/model/DescribeModelTemplateRequest.cpp
  src/v20230418/model/DeviceOrderBaseInfo.cpp
  src/v20230418/model/CreateMovingWorkOrderResponse.cpp
  src/v20230418/model/Campus.cpp
  src/v20230418/model/WorkOrderData.cpp
  src/v20230418/model/ExportCustomerWorkOrderDetailRequest.cpp
  src/v20230418/model/NetDeviceModel.cpp
  src/v20230418/model/ModelVersion.cpp
  src/v20230418/model/DescribeResourceUsageResponse.cpp
  src/v20230418/model/CreateRackOffWorkOrderResponse.cpp
  src/v20230418/model/RackUsage.cpp
  src/v20230418/model/CommonServiceBaseInfo.cpp
  src/v20230418/model/CreatePowerOnWorkOrderResponse.cpp
  src/v20230418/model/CreateRackOnWorkOrderResponse.cpp
  src/v20230418/model/DescribePersonnelVisitWorkOrderDetailRequest.cpp
  src/v20230418/model/DescribeCustomerInfoResponse.cpp
  src/v20230418/model/Device.cpp
  src/v20230418/model/CreateServerModelResponse.cpp
  src/v20230418/model/DescribeCampusListRequest.cpp
  src/v20230418/model/Filter.cpp
  src/v20230418/model/OptionValueItem.cpp
  src/v20230418/model/IdcUnit.cpp
  src/v20230418/model/ModifyWorkOrderTypeCollectFlagResponse.cpp
  src/v20230418/model/DescribeRacksDistributionRequest.cpp
  src/v20230418/model/DescribeCommonServiceWorkOrderDetailResponse.cpp
  src/v20230418/model/ModifyWorkOrderTypeCollectFlagRequest.cpp
  src/v20230418/model/CreateNetDeviceModelResponse.cpp
  src/v20230418/model/DescribeCommonServiceWorkOrderDetailRequest.cpp
  src/v20230418/model/ServerReceivingInfo.cpp
  src/v20230418/model/CustomerInfo.cpp
  src/v20230418/model/ModelVersionCount.cpp
  src/v20230418/model/CreateModelEvaluationWorkOrderResponse.cpp
  src/v20230418/model/DescribeWorkOrderListResponse.cpp
  src/v20230418/model/DescribeAvailableModelListResponse.cpp
  src/v20230418/model/Personnel.cpp
  src/v20230418/model/DescribeWorkOrderStatisticsResponse.cpp
  src/v20230418/model/CreateReceivingWorkOrderResponse.cpp
  src/v20230418/model/DescribePersonnelVisitWorkOrderDetailResponse.cpp
  src/v20230418/model/CreateQuitWorkOrderRequest.cpp
  src/v20230418/model/PositionStatusItem.cpp
  src/v20230418/model/DescribeModelResponse.cpp
  src/v20230418/model/CreatePowerOnWorkOrderRequest.cpp
  src/v20230418/model/OrderStep.cpp
  src/v20230418/model/CreatePowerOffWorkOrderResponse.cpp
  src/v20230418/model/CreateSpeciallyQuitWorkOrderResponse.cpp
  src/v20230418/model/DeviceHistory.cpp
  src/v20230418/model/PersonnelVisitBaseInfo.cpp
  src/v20230418/model/ConfirmCommonServiceWorkOrderResponse.cpp
  src/v20230418/model/CreatePowerOffWorkOrderRequest.cpp
  src/v20230418/model/CreateQuitWorkOrderResponse.cpp
  src/v20230418/model/DevicePosition.cpp
  src/v20230418/model/DescribeRacksDistributionResponse.cpp
  src/v20230418/model/DescribeCustomerInfoRequest.cpp
  src/v20230418/model/DescribeDeviceListResponse.cpp
  src/v20230418/model/DescribeDeviceWorkOrderDetailRequest.cpp
  src/v20230418/model/DescribeModelEvaluationWorkOrderDetailResponse.cpp
  src/v20230418/model/Idc.cpp
  src/v20230418/model/DescribeRacksResponse.cpp
  src/v20230418/model/DescribeRacksRequest.cpp
  src/v20230418/model/DescribeIdcsResponse.cpp
  src/v20230418/model/DescribeDeviceWorkOrderDetailResponse.cpp
  )

set(chc_include
    include/tencentcloud/chc
  )

add_library(chc ${LIB_TYPE}
  ${chc_public_header}
  ${chc_public_header_model}
  ${chc_src})

set_target_properties(chc
  PROPERTIES
  LINKER_LANGUAGE CXX
  ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
  LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
  RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin
  OUTPUT_NAME ${TARGET_OUTPUT_NAME_PREFIX}chc
  )

target_include_directories(chc
  PRIVATE include
    ${CMAKE_SOURCE_DIR}/core/include
  )
target_link_libraries(chc
  core)

#install(FILES ${chc_public_header}
#  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud/chc/v20230418)
#install(FILES ${chc_public_header_model}
#  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud/chc/v20230418/model)
install(DIRECTORY ${chc_include}
  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud)

install(TARGETS chc
  ARCHIVE DESTINATION ${CMAKE_INSTALL_LIBDIR}
  LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
  RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
  )
