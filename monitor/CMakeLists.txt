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

set(monitor_public_header
  include/tencentcloud/monitor/v20180724/MonitorClient.h
  )

set(monitor_public_header_model
  include/tencentcloud/monitor/v20180724/model/DescribePolicyConditionListConfigManual.h
  include/tencentcloud/monitor/v20180724/model/CreatePolicyGroupEventCondition.h
  include/tencentcloud/monitor/v20180724/model/DescribeProductEventListRequest.h
  include/tencentcloud/monitor/v20180724/model/DescribeServiceDiscoveryResponse.h
  include/tencentcloud/monitor/v20180724/model/DescribePolicyConditionListMetric.h
  include/tencentcloud/monitor/v20180724/model/DescribePolicyGroupListResponse.h
  include/tencentcloud/monitor/v20180724/model/BindingPolicyObjectRequest.h
  include/tencentcloud/monitor/v20180724/model/CreateServiceDiscoveryResponse.h
  include/tencentcloud/monitor/v20180724/model/DescribePolicyGroupInfoRequest.h
  include/tencentcloud/monitor/v20180724/model/DeleteServiceDiscoveryResponse.h
  include/tencentcloud/monitor/v20180724/model/DescribePolicyGroupInfoCallback.h
  include/tencentcloud/monitor/v20180724/model/DescribeProductEventListDimensions.h
  include/tencentcloud/monitor/v20180724/model/DescribePolicyGroupInfoResponse.h
  include/tencentcloud/monitor/v20180724/model/PutMonitorDataRequest.h
  include/tencentcloud/monitor/v20180724/model/CreatePolicyGroupResponse.h
  include/tencentcloud/monitor/v20180724/model/PutMonitorDataResponse.h
  include/tencentcloud/monitor/v20180724/model/DescribeBaseMetricsResponse.h
  include/tencentcloud/monitor/v20180724/model/SendCustomAlarmMsgRequest.h
  include/tencentcloud/monitor/v20180724/model/DescribePolicyConditionListConfigManualContinueTime.h
  include/tencentcloud/monitor/v20180724/model/CommonNamespace.h
  include/tencentcloud/monitor/v20180724/model/GetMonitorDataRequest.h
  include/tencentcloud/monitor/v20180724/model/DataPoint.h
  include/tencentcloud/monitor/v20180724/model/DescribePolicyConditionListConfigManualPeriod.h
  include/tencentcloud/monitor/v20180724/model/UnBindingPolicyObjectRequest.h
  include/tencentcloud/monitor/v20180724/model/DescribeServiceDiscoveryRequest.h
  include/tencentcloud/monitor/v20180724/model/DescribePolicyConditionListRequest.h
  include/tencentcloud/monitor/v20180724/model/DescribeBindingPolicyObjectListInstance.h
  include/tencentcloud/monitor/v20180724/model/DeletePolicyGroupResponse.h
  include/tencentcloud/monitor/v20180724/model/DescribeMonitorTypesRequest.h
  include/tencentcloud/monitor/v20180724/model/DimensionsDesc.h
  include/tencentcloud/monitor/v20180724/model/ServiceDiscoveryItem.h
  include/tencentcloud/monitor/v20180724/model/CreateServiceDiscoveryRequest.h
  include/tencentcloud/monitor/v20180724/model/DescribePolicyConditionListCondition.h
  include/tencentcloud/monitor/v20180724/model/DescribeProductListRequest.h
  include/tencentcloud/monitor/v20180724/model/PeriodsSt.h
  include/tencentcloud/monitor/v20180724/model/ModifyAlarmReceiversResponse.h
  include/tencentcloud/monitor/v20180724/model/DescribePolicyConditionListResponse.h
  include/tencentcloud/monitor/v20180724/model/DescribeAllNamespacesResponse.h
  include/tencentcloud/monitor/v20180724/model/DescribeBasicAlarmListResponse.h
  include/tencentcloud/monitor/v20180724/model/ProductSimple.h
  include/tencentcloud/monitor/v20180724/model/ModifyAlarmReceiversRequest.h
  include/tencentcloud/monitor/v20180724/model/DescribeProductEventListEventsDimensions.h
  include/tencentcloud/monitor/v20180724/model/MetricSet.h
  include/tencentcloud/monitor/v20180724/model/DescribeBindingPolicyObjectListResponse.h
  include/tencentcloud/monitor/v20180724/model/ModifyPolicyGroupEventCondition.h
  include/tencentcloud/monitor/v20180724/model/ModifyPolicyGroupRequest.h
  include/tencentcloud/monitor/v20180724/model/DescribeProductEventListResponse.h
  include/tencentcloud/monitor/v20180724/model/DescribeBaseMetricsRequest.h
  include/tencentcloud/monitor/v20180724/model/Instance.h
  include/tencentcloud/monitor/v20180724/model/BindingPolicyObjectDimension.h
  include/tencentcloud/monitor/v20180724/model/UpdateServiceDiscoveryResponse.h
  include/tencentcloud/monitor/v20180724/model/DescribeMonitorTypesResponse.h
  include/tencentcloud/monitor/v20180724/model/Dimension.h
  include/tencentcloud/monitor/v20180724/model/DescribeBasicAlarmListAlarms.h
  include/tencentcloud/monitor/v20180724/model/UpdateServiceDiscoveryRequest.h
  include/tencentcloud/monitor/v20180724/model/UnBindingAllPolicyObjectResponse.h
  include/tencentcloud/monitor/v20180724/model/DescribeAlarmHistoriesRequest.h
  include/tencentcloud/monitor/v20180724/model/MetricObjectMeaning.h
  include/tencentcloud/monitor/v20180724/model/DeletePolicyGroupRequest.h
  include/tencentcloud/monitor/v20180724/model/ModifyPolicyGroupResponse.h
  include/tencentcloud/monitor/v20180724/model/DescribePolicyConditionListConfigManualCalcType.h
  include/tencentcloud/monitor/v20180724/model/DescribePolicyGroupInfoCondition.h
  include/tencentcloud/monitor/v20180724/model/DescribeProductEventListEventsGroupInfo.h
  include/tencentcloud/monitor/v20180724/model/DescribePolicyGroupInfoConditionTpl.h
  include/tencentcloud/monitor/v20180724/model/DescribeBindingPolicyObjectListRequest.h
  include/tencentcloud/monitor/v20180724/model/UnBindingPolicyObjectResponse.h
  include/tencentcloud/monitor/v20180724/model/DescribeProductEventListEvents.h
  include/tencentcloud/monitor/v20180724/model/DescribePolicyConditionListConfigManualPeriodNum.h
  include/tencentcloud/monitor/v20180724/model/DescribeAllNamespacesRequest.h
  include/tencentcloud/monitor/v20180724/model/DescribePolicyGroupListGroupInstanceGroup.h
  include/tencentcloud/monitor/v20180724/model/InstanceGroup.h
  include/tencentcloud/monitor/v20180724/model/DescribeAccidentEventListResponse.h
  include/tencentcloud/monitor/v20180724/model/DescribePolicyConditionListConfigManualStatType.h
  include/tencentcloud/monitor/v20180724/model/DescribeAccidentEventListAlarms.h
  include/tencentcloud/monitor/v20180724/model/DescribeProductListResponse.h
  include/tencentcloud/monitor/v20180724/model/DescribeAlarmHistoriesResponse.h
  include/tencentcloud/monitor/v20180724/model/AlarmHistory.h
  include/tencentcloud/monitor/v20180724/model/MonitorTypeNamespace.h
  include/tencentcloud/monitor/v20180724/model/CreatePolicyGroupRequest.h
  include/tencentcloud/monitor/v20180724/model/CreatePolicyGroupCondition.h
  include/tencentcloud/monitor/v20180724/model/DescribePolicyGroupInfoReceiverInfo.h
  include/tencentcloud/monitor/v20180724/model/DescribePolicyConditionListEventMetric.h
  include/tencentcloud/monitor/v20180724/model/DescribePolicyGroupListRequest.h
  include/tencentcloud/monitor/v20180724/model/DescribeBasicAlarmListRequest.h
  include/tencentcloud/monitor/v20180724/model/DescribePolicyGroupListGroup.h
  include/tencentcloud/monitor/v20180724/model/DescribeAccidentEventListRequest.h
  include/tencentcloud/monitor/v20180724/model/MetricDatum.h
  include/tencentcloud/monitor/v20180724/model/DescribeBindingPolicyObjectListInstanceGroup.h
  include/tencentcloud/monitor/v20180724/model/DescribeBindingPolicyObjectListDimension.h
  include/tencentcloud/monitor/v20180724/model/InstanceGroups.h
  include/tencentcloud/monitor/v20180724/model/GetMonitorDataResponse.h
  include/tencentcloud/monitor/v20180724/model/ReceiverInfo.h
  include/tencentcloud/monitor/v20180724/model/UnBindingAllPolicyObjectRequest.h
  include/tencentcloud/monitor/v20180724/model/DescribePolicyGroupInfoEventCondition.h
  include/tencentcloud/monitor/v20180724/model/SendCustomAlarmMsgResponse.h
  include/tencentcloud/monitor/v20180724/model/ModifyPolicyGroupCondition.h
  include/tencentcloud/monitor/v20180724/model/DeleteServiceDiscoveryRequest.h
  include/tencentcloud/monitor/v20180724/model/DescribeProductEventListOverView.h
  include/tencentcloud/monitor/v20180724/model/DescribePolicyConditionListConfigManualCalcValue.h
  include/tencentcloud/monitor/v20180724/model/BindingPolicyObjectResponse.h
  )

set(monitor_src
  src/v20180724/MonitorClient.cpp
  src/v20180724/model/DescribePolicyConditionListConfigManual.cpp
  src/v20180724/model/CreatePolicyGroupEventCondition.cpp
  src/v20180724/model/DescribeProductEventListRequest.cpp
  src/v20180724/model/DescribeServiceDiscoveryResponse.cpp
  src/v20180724/model/DescribePolicyConditionListMetric.cpp
  src/v20180724/model/DescribePolicyGroupListResponse.cpp
  src/v20180724/model/BindingPolicyObjectRequest.cpp
  src/v20180724/model/CreateServiceDiscoveryResponse.cpp
  src/v20180724/model/DescribePolicyGroupInfoRequest.cpp
  src/v20180724/model/DeleteServiceDiscoveryResponse.cpp
  src/v20180724/model/DescribePolicyGroupInfoCallback.cpp
  src/v20180724/model/DescribeProductEventListDimensions.cpp
  src/v20180724/model/DescribePolicyGroupInfoResponse.cpp
  src/v20180724/model/PutMonitorDataRequest.cpp
  src/v20180724/model/CreatePolicyGroupResponse.cpp
  src/v20180724/model/PutMonitorDataResponse.cpp
  src/v20180724/model/DescribeBaseMetricsResponse.cpp
  src/v20180724/model/SendCustomAlarmMsgRequest.cpp
  src/v20180724/model/DescribePolicyConditionListConfigManualContinueTime.cpp
  src/v20180724/model/CommonNamespace.cpp
  src/v20180724/model/GetMonitorDataRequest.cpp
  src/v20180724/model/DataPoint.cpp
  src/v20180724/model/DescribePolicyConditionListConfigManualPeriod.cpp
  src/v20180724/model/UnBindingPolicyObjectRequest.cpp
  src/v20180724/model/DescribeServiceDiscoveryRequest.cpp
  src/v20180724/model/DescribePolicyConditionListRequest.cpp
  src/v20180724/model/DescribeBindingPolicyObjectListInstance.cpp
  src/v20180724/model/DeletePolicyGroupResponse.cpp
  src/v20180724/model/DescribeMonitorTypesRequest.cpp
  src/v20180724/model/DimensionsDesc.cpp
  src/v20180724/model/ServiceDiscoveryItem.cpp
  src/v20180724/model/CreateServiceDiscoveryRequest.cpp
  src/v20180724/model/DescribePolicyConditionListCondition.cpp
  src/v20180724/model/DescribeProductListRequest.cpp
  src/v20180724/model/PeriodsSt.cpp
  src/v20180724/model/ModifyAlarmReceiversResponse.cpp
  src/v20180724/model/DescribePolicyConditionListResponse.cpp
  src/v20180724/model/DescribeAllNamespacesResponse.cpp
  src/v20180724/model/DescribeBasicAlarmListResponse.cpp
  src/v20180724/model/ProductSimple.cpp
  src/v20180724/model/ModifyAlarmReceiversRequest.cpp
  src/v20180724/model/DescribeProductEventListEventsDimensions.cpp
  src/v20180724/model/MetricSet.cpp
  src/v20180724/model/DescribeBindingPolicyObjectListResponse.cpp
  src/v20180724/model/ModifyPolicyGroupEventCondition.cpp
  src/v20180724/model/ModifyPolicyGroupRequest.cpp
  src/v20180724/model/DescribeProductEventListResponse.cpp
  src/v20180724/model/DescribeBaseMetricsRequest.cpp
  src/v20180724/model/Instance.cpp
  src/v20180724/model/BindingPolicyObjectDimension.cpp
  src/v20180724/model/UpdateServiceDiscoveryResponse.cpp
  src/v20180724/model/DescribeMonitorTypesResponse.cpp
  src/v20180724/model/Dimension.cpp
  src/v20180724/model/DescribeBasicAlarmListAlarms.cpp
  src/v20180724/model/UpdateServiceDiscoveryRequest.cpp
  src/v20180724/model/UnBindingAllPolicyObjectResponse.cpp
  src/v20180724/model/DescribeAlarmHistoriesRequest.cpp
  src/v20180724/model/MetricObjectMeaning.cpp
  src/v20180724/model/DeletePolicyGroupRequest.cpp
  src/v20180724/model/ModifyPolicyGroupResponse.cpp
  src/v20180724/model/DescribePolicyConditionListConfigManualCalcType.cpp
  src/v20180724/model/DescribePolicyGroupInfoCondition.cpp
  src/v20180724/model/DescribeProductEventListEventsGroupInfo.cpp
  src/v20180724/model/DescribePolicyGroupInfoConditionTpl.cpp
  src/v20180724/model/DescribeBindingPolicyObjectListRequest.cpp
  src/v20180724/model/UnBindingPolicyObjectResponse.cpp
  src/v20180724/model/DescribeProductEventListEvents.cpp
  src/v20180724/model/DescribePolicyConditionListConfigManualPeriodNum.cpp
  src/v20180724/model/DescribeAllNamespacesRequest.cpp
  src/v20180724/model/DescribePolicyGroupListGroupInstanceGroup.cpp
  src/v20180724/model/InstanceGroup.cpp
  src/v20180724/model/DescribeAccidentEventListResponse.cpp
  src/v20180724/model/DescribePolicyConditionListConfigManualStatType.cpp
  src/v20180724/model/DescribeAccidentEventListAlarms.cpp
  src/v20180724/model/DescribeProductListResponse.cpp
  src/v20180724/model/DescribeAlarmHistoriesResponse.cpp
  src/v20180724/model/AlarmHistory.cpp
  src/v20180724/model/MonitorTypeNamespace.cpp
  src/v20180724/model/CreatePolicyGroupRequest.cpp
  src/v20180724/model/CreatePolicyGroupCondition.cpp
  src/v20180724/model/DescribePolicyGroupInfoReceiverInfo.cpp
  src/v20180724/model/DescribePolicyConditionListEventMetric.cpp
  src/v20180724/model/DescribePolicyGroupListRequest.cpp
  src/v20180724/model/DescribeBasicAlarmListRequest.cpp
  src/v20180724/model/DescribePolicyGroupListGroup.cpp
  src/v20180724/model/DescribeAccidentEventListRequest.cpp
  src/v20180724/model/MetricDatum.cpp
  src/v20180724/model/DescribeBindingPolicyObjectListInstanceGroup.cpp
  src/v20180724/model/DescribeBindingPolicyObjectListDimension.cpp
  src/v20180724/model/InstanceGroups.cpp
  src/v20180724/model/GetMonitorDataResponse.cpp
  src/v20180724/model/ReceiverInfo.cpp
  src/v20180724/model/UnBindingAllPolicyObjectRequest.cpp
  src/v20180724/model/DescribePolicyGroupInfoEventCondition.cpp
  src/v20180724/model/SendCustomAlarmMsgResponse.cpp
  src/v20180724/model/ModifyPolicyGroupCondition.cpp
  src/v20180724/model/DeleteServiceDiscoveryRequest.cpp
  src/v20180724/model/DescribeProductEventListOverView.cpp
  src/v20180724/model/DescribePolicyConditionListConfigManualCalcValue.cpp
  src/v20180724/model/BindingPolicyObjectResponse.cpp
  )

set(monitor_include
    include/tencentcloud/monitor
  )

add_library(monitor ${LIB_TYPE}
  ${monitor_public_header}
  ${monitor_public_header_model}
  ${monitor_src})

set_target_properties(monitor
  PROPERTIES
  LINKER_LANGUAGE CXX
  ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
  LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
  RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin
  OUTPUT_NAME ${TARGET_OUTPUT_NAME_PREFIX}monitor
  )

target_include_directories(monitor
  PRIVATE include
    ${CMAKE_SOURCE_DIR}/core/include
  )
target_link_libraries(monitor
  core)

#install(FILES ${monitor_public_header}
#  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud/monitor/v20180724)
#install(FILES ${monitor_public_header_model}
#  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud/monitor/v20180724/model)
install(DIRECTORY ${monitor_include}
  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud)

install(TARGETS monitor
  ARCHIVE DESTINATION ${CMAKE_INSTALL_LIBDIR}
  LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
  RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
  )
