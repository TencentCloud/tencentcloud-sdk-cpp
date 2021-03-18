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

set(iotvideoindustry_public_header
  include/tencentcloud/iotvideoindustry/v20201201/IotvideoindustryClient.h
  )

set(iotvideoindustry_public_header_model
  include/tencentcloud/iotvideoindustry/v20201201/model/CreateTimeTemplateResponse.h
  include/tencentcloud/iotvideoindustry/v20201201/model/RecordTaskItem.h
  include/tencentcloud/iotvideoindustry/v20201201/model/ControlDevicePTZResponse.h
  include/tencentcloud/iotvideoindustry/v20201201/model/DeleteRecordPlanRequest.h
  include/tencentcloud/iotvideoindustry/v20201201/model/StatisticItem.h
  include/tencentcloud/iotvideoindustry/v20201201/model/CreateDeviceGroupResponse.h
  include/tencentcloud/iotvideoindustry/v20201201/model/DescribeSIPServerResponse.h
  include/tencentcloud/iotvideoindustry/v20201201/model/GetVideoListByConResponse.h
  include/tencentcloud/iotvideoindustry/v20201201/model/DeleteTimeTemplateResponse.h
  include/tencentcloud/iotvideoindustry/v20201201/model/GetTimeTemplatesRequest.h
  include/tencentcloud/iotvideoindustry/v20201201/model/DescribeSubGroupsRequest.h
  include/tencentcloud/iotvideoindustry/v20201201/model/ControlDevicePTZRequest.h
  include/tencentcloud/iotvideoindustry/v20201201/model/DescribeGroupsResponse.h
  include/tencentcloud/iotvideoindustry/v20201201/model/ServerConfiguration.h
  include/tencentcloud/iotvideoindustry/v20201201/model/UpdateRecordPlanRequest.h
  include/tencentcloud/iotvideoindustry/v20201201/model/GroupInfo.h
  include/tencentcloud/iotvideoindustry/v20201201/model/ModifyDeviceDataResponse.h
  include/tencentcloud/iotvideoindustry/v20201201/model/DescribeStatisticDetailsResponse.h
  include/tencentcloud/iotvideoindustry/v20201201/model/DescribeGroupDevicesRequest.h
  include/tencentcloud/iotvideoindustry/v20201201/model/GetRecordPlanByDevRequest.h
  include/tencentcloud/iotvideoindustry/v20201201/model/GetRecordDatesByDevResponse.h
  include/tencentcloud/iotvideoindustry/v20201201/model/GetRecordPlanByDevResponse.h
  include/tencentcloud/iotvideoindustry/v20201201/model/DescribeDeviceGroupRequest.h
  include/tencentcloud/iotvideoindustry/v20201201/model/UpdateDeviceGroupResponse.h
  include/tencentcloud/iotvideoindustry/v20201201/model/RecordPlanItem.h
  include/tencentcloud/iotvideoindustry/v20201201/model/GetRecordPlanByIdResponse.h
  include/tencentcloud/iotvideoindustry/v20201201/model/DescribeGroupsRequest.h
  include/tencentcloud/iotvideoindustry/v20201201/model/DeleteDeviceRequest.h
  include/tencentcloud/iotvideoindustry/v20201201/model/DescribeStatisticDetailsRequest.h
  include/tencentcloud/iotvideoindustry/v20201201/model/DescribeGroupByIdRequest.h
  include/tencentcloud/iotvideoindustry/v20201201/model/DescribeGroupByIdResponse.h
  include/tencentcloud/iotvideoindustry/v20201201/model/CreateTimeTemplateRequest.h
  include/tencentcloud/iotvideoindustry/v20201201/model/DeviceItem.h
  include/tencentcloud/iotvideoindustry/v20201201/model/GroupItem.h
  include/tencentcloud/iotvideoindustry/v20201201/model/DescribeDeviceStreamsRequest.h
  include/tencentcloud/iotvideoindustry/v20201201/model/GetTimeTemplateByIdRequest.h
  include/tencentcloud/iotvideoindustry/v20201201/model/TimeTemplateSpec.h
  include/tencentcloud/iotvideoindustry/v20201201/model/CreateRecordPlanResponse.h
  include/tencentcloud/iotvideoindustry/v20201201/model/DescribeDeviceStreamsResponse.h
  include/tencentcloud/iotvideoindustry/v20201201/model/DescribeAllDeviceListRequest.h
  include/tencentcloud/iotvideoindustry/v20201201/model/DeleteTimeTemplateRequest.h
  include/tencentcloud/iotvideoindustry/v20201201/model/DescribeSIPServerRequest.h
  include/tencentcloud/iotvideoindustry/v20201201/model/GroupDeviceItem.h
  include/tencentcloud/iotvideoindustry/v20201201/model/DeleteDeviceGroupRequest.h
  include/tencentcloud/iotvideoindustry/v20201201/model/DeleteRecordPlanResponse.h
  include/tencentcloud/iotvideoindustry/v20201201/model/GetRecordPlanByIdRequest.h
  include/tencentcloud/iotvideoindustry/v20201201/model/GetRecordPlansRequest.h
  include/tencentcloud/iotvideoindustry/v20201201/model/DescribeDeviceGroupResponse.h
  include/tencentcloud/iotvideoindustry/v20201201/model/DescribeSubGroupsResponse.h
  include/tencentcloud/iotvideoindustry/v20201201/model/DescribeGroupByPathRequest.h
  include/tencentcloud/iotvideoindustry/v20201201/model/DeleteDeviceGroupResponse.h
  include/tencentcloud/iotvideoindustry/v20201201/model/AllDeviceInfo.h
  include/tencentcloud/iotvideoindustry/v20201201/model/CreateRecordPlanRequest.h
  include/tencentcloud/iotvideoindustry/v20201201/model/TimeTemplateItem.h
  include/tencentcloud/iotvideoindustry/v20201201/model/CreateDeviceGroupRequest.h
  include/tencentcloud/iotvideoindustry/v20201201/model/UpdateTimeTemplateRequest.h
  include/tencentcloud/iotvideoindustry/v20201201/model/GetRecordPlansResponse.h
  include/tencentcloud/iotvideoindustry/v20201201/model/UpdateDevicePassWordResponse.h
  include/tencentcloud/iotvideoindustry/v20201201/model/GetVideoListByConRequest.h
  include/tencentcloud/iotvideoindustry/v20201201/model/UpdateDevicePassWordRequest.h
  include/tencentcloud/iotvideoindustry/v20201201/model/ModifyDeviceDataRequest.h
  include/tencentcloud/iotvideoindustry/v20201201/model/DevGroupInfo.h
  include/tencentcloud/iotvideoindustry/v20201201/model/GetRecordDatesByDevRequest.h
  include/tencentcloud/iotvideoindustry/v20201201/model/GetTimeTemplatesResponse.h
  include/tencentcloud/iotvideoindustry/v20201201/model/BindGroupDevicesResponse.h
  include/tencentcloud/iotvideoindustry/v20201201/model/CreateDeviceResponse.h
  include/tencentcloud/iotvideoindustry/v20201201/model/CreateDeviceRequest.h
  include/tencentcloud/iotvideoindustry/v20201201/model/DescribeStatisticSummaryResponse.h
  include/tencentcloud/iotvideoindustry/v20201201/model/DescribeDevicePassWordResponse.h
  include/tencentcloud/iotvideoindustry/v20201201/model/UpdateDeviceGroupRequest.h
  include/tencentcloud/iotvideoindustry/v20201201/model/DescribeDevicePassWordRequest.h
  include/tencentcloud/iotvideoindustry/v20201201/model/DeleteDeviceResponse.h
  include/tencentcloud/iotvideoindustry/v20201201/model/UpdateTimeTemplateResponse.h
  include/tencentcloud/iotvideoindustry/v20201201/model/DescribeAllDeviceListResponse.h
  include/tencentcloud/iotvideoindustry/v20201201/model/DescribeStatisticSummaryRequest.h
  include/tencentcloud/iotvideoindustry/v20201201/model/DescribeGroupByPathResponse.h
  include/tencentcloud/iotvideoindustry/v20201201/model/UpdateRecordPlanResponse.h
  include/tencentcloud/iotvideoindustry/v20201201/model/DescribeGroupDevicesResponse.h
  include/tencentcloud/iotvideoindustry/v20201201/model/DescribeDeviceStreamsData.h
  include/tencentcloud/iotvideoindustry/v20201201/model/GetTimeTemplateByIdResponse.h
  include/tencentcloud/iotvideoindustry/v20201201/model/BindGroupDevicesRequest.h
  )

set(iotvideoindustry_src
  src/v20201201/IotvideoindustryClient.cpp
  src/v20201201/model/CreateTimeTemplateResponse.cpp
  src/v20201201/model/RecordTaskItem.cpp
  src/v20201201/model/ControlDevicePTZResponse.cpp
  src/v20201201/model/DeleteRecordPlanRequest.cpp
  src/v20201201/model/StatisticItem.cpp
  src/v20201201/model/CreateDeviceGroupResponse.cpp
  src/v20201201/model/DescribeSIPServerResponse.cpp
  src/v20201201/model/GetVideoListByConResponse.cpp
  src/v20201201/model/DeleteTimeTemplateResponse.cpp
  src/v20201201/model/GetTimeTemplatesRequest.cpp
  src/v20201201/model/DescribeSubGroupsRequest.cpp
  src/v20201201/model/ControlDevicePTZRequest.cpp
  src/v20201201/model/DescribeGroupsResponse.cpp
  src/v20201201/model/ServerConfiguration.cpp
  src/v20201201/model/UpdateRecordPlanRequest.cpp
  src/v20201201/model/GroupInfo.cpp
  src/v20201201/model/ModifyDeviceDataResponse.cpp
  src/v20201201/model/DescribeStatisticDetailsResponse.cpp
  src/v20201201/model/DescribeGroupDevicesRequest.cpp
  src/v20201201/model/GetRecordPlanByDevRequest.cpp
  src/v20201201/model/GetRecordDatesByDevResponse.cpp
  src/v20201201/model/GetRecordPlanByDevResponse.cpp
  src/v20201201/model/DescribeDeviceGroupRequest.cpp
  src/v20201201/model/UpdateDeviceGroupResponse.cpp
  src/v20201201/model/RecordPlanItem.cpp
  src/v20201201/model/GetRecordPlanByIdResponse.cpp
  src/v20201201/model/DescribeGroupsRequest.cpp
  src/v20201201/model/DeleteDeviceRequest.cpp
  src/v20201201/model/DescribeStatisticDetailsRequest.cpp
  src/v20201201/model/DescribeGroupByIdRequest.cpp
  src/v20201201/model/DescribeGroupByIdResponse.cpp
  src/v20201201/model/CreateTimeTemplateRequest.cpp
  src/v20201201/model/DeviceItem.cpp
  src/v20201201/model/GroupItem.cpp
  src/v20201201/model/DescribeDeviceStreamsRequest.cpp
  src/v20201201/model/GetTimeTemplateByIdRequest.cpp
  src/v20201201/model/TimeTemplateSpec.cpp
  src/v20201201/model/CreateRecordPlanResponse.cpp
  src/v20201201/model/DescribeDeviceStreamsResponse.cpp
  src/v20201201/model/DescribeAllDeviceListRequest.cpp
  src/v20201201/model/DeleteTimeTemplateRequest.cpp
  src/v20201201/model/DescribeSIPServerRequest.cpp
  src/v20201201/model/GroupDeviceItem.cpp
  src/v20201201/model/DeleteDeviceGroupRequest.cpp
  src/v20201201/model/DeleteRecordPlanResponse.cpp
  src/v20201201/model/GetRecordPlanByIdRequest.cpp
  src/v20201201/model/GetRecordPlansRequest.cpp
  src/v20201201/model/DescribeDeviceGroupResponse.cpp
  src/v20201201/model/DescribeSubGroupsResponse.cpp
  src/v20201201/model/DescribeGroupByPathRequest.cpp
  src/v20201201/model/DeleteDeviceGroupResponse.cpp
  src/v20201201/model/AllDeviceInfo.cpp
  src/v20201201/model/CreateRecordPlanRequest.cpp
  src/v20201201/model/TimeTemplateItem.cpp
  src/v20201201/model/CreateDeviceGroupRequest.cpp
  src/v20201201/model/UpdateTimeTemplateRequest.cpp
  src/v20201201/model/GetRecordPlansResponse.cpp
  src/v20201201/model/UpdateDevicePassWordResponse.cpp
  src/v20201201/model/GetVideoListByConRequest.cpp
  src/v20201201/model/UpdateDevicePassWordRequest.cpp
  src/v20201201/model/ModifyDeviceDataRequest.cpp
  src/v20201201/model/DevGroupInfo.cpp
  src/v20201201/model/GetRecordDatesByDevRequest.cpp
  src/v20201201/model/GetTimeTemplatesResponse.cpp
  src/v20201201/model/BindGroupDevicesResponse.cpp
  src/v20201201/model/CreateDeviceResponse.cpp
  src/v20201201/model/CreateDeviceRequest.cpp
  src/v20201201/model/DescribeStatisticSummaryResponse.cpp
  src/v20201201/model/DescribeDevicePassWordResponse.cpp
  src/v20201201/model/UpdateDeviceGroupRequest.cpp
  src/v20201201/model/DescribeDevicePassWordRequest.cpp
  src/v20201201/model/DeleteDeviceResponse.cpp
  src/v20201201/model/UpdateTimeTemplateResponse.cpp
  src/v20201201/model/DescribeAllDeviceListResponse.cpp
  src/v20201201/model/DescribeStatisticSummaryRequest.cpp
  src/v20201201/model/DescribeGroupByPathResponse.cpp
  src/v20201201/model/UpdateRecordPlanResponse.cpp
  src/v20201201/model/DescribeGroupDevicesResponse.cpp
  src/v20201201/model/DescribeDeviceStreamsData.cpp
  src/v20201201/model/GetTimeTemplateByIdResponse.cpp
  src/v20201201/model/BindGroupDevicesRequest.cpp
  )

set(iotvideoindustry_include
    include/tencentcloud/iotvideoindustry
  )

add_library(iotvideoindustry ${LIB_TYPE}
  ${iotvideoindustry_public_header}
  ${iotvideoindustry_public_header_model}
  ${iotvideoindustry_src})

set_target_properties(iotvideoindustry
  PROPERTIES
  LINKER_LANGUAGE CXX
  ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
  LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
  RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin
  OUTPUT_NAME ${TARGET_OUTPUT_NAME_PREFIX}iotvideoindustry
  )

target_include_directories(iotvideoindustry
  PRIVATE include
    ${CMAKE_SOURCE_DIR}/core/include
  )
target_link_libraries(iotvideoindustry
  core)

#install(FILES ${iotvideoindustry_public_header}
#  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud/iotvideoindustry/v20201201)
#install(FILES ${iotvideoindustry_public_header_model}
#  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud/iotvideoindustry/v20201201/model)
install(DIRECTORY ${iotvideoindustry_include}
  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud)

install(TARGETS iotvideoindustry
  ARCHIVE DESTINATION ${CMAKE_INSTALL_LIBDIR}
  LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
  RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
  )
