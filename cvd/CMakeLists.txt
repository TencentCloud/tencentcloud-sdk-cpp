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

set(cvd_public_header
  include/tencentcloud/cvd/v20201104/CvdClient.h
  )

set(cvd_public_header_model
  include/tencentcloud/cvd/v20201104/model/AssociateSecurityGroupResponse.h
  include/tencentcloud/cvd/v20201104/model/AssociateSecurityGroupRequest.h
  include/tencentcloud/cvd/v20201104/model/RenewInstancesRequest.h
  include/tencentcloud/cvd/v20201104/model/RemoveDataDisksResponse.h
  include/tencentcloud/cvd/v20201104/model/DescribeInstancesBindStatusResponse.h
  include/tencentcloud/cvd/v20201104/model/TerminateInstancesResponse.h
  include/tencentcloud/cvd/v20201104/model/CreateInstancesRequest.h
  include/tencentcloud/cvd/v20201104/model/ModifyImageAttrsResponse.h
  include/tencentcloud/cvd/v20201104/model/StopCommandTasksRequest.h
  include/tencentcloud/cvd/v20201104/model/DescribeInstanceFetchMsgRequest.h
  include/tencentcloud/cvd/v20201104/model/DomainControlDetail.h
  include/tencentcloud/cvd/v20201104/model/DescribeInstanceLoginMsgRequest.h
  include/tencentcloud/cvd/v20201104/model/CreateDomainControlPolicyResponse.h
  include/tencentcloud/cvd/v20201104/model/DeleteImagesRequest.h
  include/tencentcloud/cvd/v20201104/model/DescribePolicyDetailResponse.h
  include/tencentcloud/cvd/v20201104/model/DescribeInstancesResponse.h
  include/tencentcloud/cvd/v20201104/model/DeleteCommandTasksRequest.h
  include/tencentcloud/cvd/v20201104/model/PolicyInfo.h
  include/tencentcloud/cvd/v20201104/model/DeleteDomainControlPolicyRequest.h
  include/tencentcloud/cvd/v20201104/model/DisassociateSecurityGroupRequest.h
  include/tencentcloud/cvd/v20201104/model/RemoveDataDisksRequest.h
  include/tencentcloud/cvd/v20201104/model/StopSessionRequest.h
  include/tencentcloud/cvd/v20201104/model/DescribePolicyDetailRequest.h
  include/tencentcloud/cvd/v20201104/model/DescribeSecurityGroupsResponse.h
  include/tencentcloud/cvd/v20201104/model/DescribeInvocationDetailResponse.h
  include/tencentcloud/cvd/v20201104/model/DescribeSnapshotsRequest.h
  include/tencentcloud/cvd/v20201104/model/DescribeInstanceRegionDistributionRequest.h
  include/tencentcloud/cvd/v20201104/model/DataPoint.h
  include/tencentcloud/cvd/v20201104/model/ResetInstancesResponse.h
  include/tencentcloud/cvd/v20201104/model/DescribeInstancesStatusResponse.h
  include/tencentcloud/cvd/v20201104/model/DescribeImagesResponse.h
  include/tencentcloud/cvd/v20201104/model/Disk.h
  include/tencentcloud/cvd/v20201104/model/BindInstancesResponse.h
  include/tencentcloud/cvd/v20201104/model/CreateInstancesResponse.h
  include/tencentcloud/cvd/v20201104/model/StartInstancesResponse.h
  include/tencentcloud/cvd/v20201104/model/ModifyInstancesTypeResponse.h
  include/tencentcloud/cvd/v20201104/model/Usage.h
  include/tencentcloud/cvd/v20201104/model/CreateDataDiskRequest.h
  include/tencentcloud/cvd/v20201104/model/DeleteDomainControlPolicyResponse.h
  include/tencentcloud/cvd/v20201104/model/StopInstancesRequest.h
  include/tencentcloud/cvd/v20201104/model/RemovePolicyRequest.h
  include/tencentcloud/cvd/v20201104/model/CreatePolicyResponse.h
  include/tencentcloud/cvd/v20201104/model/StartInstancesRequest.h
  include/tencentcloud/cvd/v20201104/model/Tag.h
  include/tencentcloud/cvd/v20201104/model/DescribeInstanceMonitorDataResponse.h
  include/tencentcloud/cvd/v20201104/model/DescribeInstancesBindStatusRequest.h
  include/tencentcloud/cvd/v20201104/model/ModifyInstanceBasicAttributeResponse.h
  include/tencentcloud/cvd/v20201104/model/Partition.h
  include/tencentcloud/cvd/v20201104/model/DescribeInvocationsResponse.h
  include/tencentcloud/cvd/v20201104/model/DescribeInstanceRegionDistributionResponse.h
  include/tencentcloud/cvd/v20201104/model/Dimension.h
  include/tencentcloud/cvd/v20201104/model/DistributionInfo.h
  include/tencentcloud/cvd/v20201104/model/StopInstancesResponse.h
  include/tencentcloud/cvd/v20201104/model/DescribeUsageRequest.h
  include/tencentcloud/cvd/v20201104/model/DescribeUsersRequest.h
  include/tencentcloud/cvd/v20201104/model/ImageInfo.h
  include/tencentcloud/cvd/v20201104/model/AttributeInfo.h
  include/tencentcloud/cvd/v20201104/model/InvocationDetail.h
  include/tencentcloud/cvd/v20201104/model/DescribeUsageResponse.h
  include/tencentcloud/cvd/v20201104/model/StopCommandTasksResponse.h
  include/tencentcloud/cvd/v20201104/model/DescribeInstanceGraphDataRequest.h
  include/tencentcloud/cvd/v20201104/model/BindInstancesRequest.h
  include/tencentcloud/cvd/v20201104/model/CreateImageRequest.h
  include/tencentcloud/cvd/v20201104/model/Instance.h
  include/tencentcloud/cvd/v20201104/model/RunCommandRequest.h
  include/tencentcloud/cvd/v20201104/model/SnapshotInfo.h
  include/tencentcloud/cvd/v20201104/model/ModifyDiskConfigurationResponse.h
  include/tencentcloud/cvd/v20201104/model/DescribeCommandTasksResponse.h
  include/tencentcloud/cvd/v20201104/model/StopSessionResponse.h
  include/tencentcloud/cvd/v20201104/model/ModifyInstancesVpcRequest.h
  include/tencentcloud/cvd/v20201104/model/CreateImageResponse.h
  include/tencentcloud/cvd/v20201104/model/InvocationOutput.h
  include/tencentcloud/cvd/v20201104/model/ModifyImageAttrsRequest.h
  include/tencentcloud/cvd/v20201104/model/InstanceInfo.h
  include/tencentcloud/cvd/v20201104/model/User.h
  include/tencentcloud/cvd/v20201104/model/InstanceStatus.h
  include/tencentcloud/cvd/v20201104/model/DescribeInstancesRequest.h
  include/tencentcloud/cvd/v20201104/model/ModifyDiskConfigurationRequest.h
  include/tencentcloud/cvd/v20201104/model/DescribeInvocationsRequest.h
  include/tencentcloud/cvd/v20201104/model/Filter.h
  include/tencentcloud/cvd/v20201104/model/DescribeUsersResponse.h
  include/tencentcloud/cvd/v20201104/model/DescribeSnapshotsResponse.h
  include/tencentcloud/cvd/v20201104/model/CreateDataDiskResponse.h
  include/tencentcloud/cvd/v20201104/model/DescribeInstanceGraphDataResponse.h
  include/tencentcloud/cvd/v20201104/model/UpdatePolicyResponse.h
  include/tencentcloud/cvd/v20201104/model/ChargePrepaid.h
  include/tencentcloud/cvd/v20201104/model/ModifyInstancesVpcResponse.h
  include/tencentcloud/cvd/v20201104/model/DescribeInvocationDetailRequest.h
  include/tencentcloud/cvd/v20201104/model/ResetInstancesRequest.h
  include/tencentcloud/cvd/v20201104/model/CreatePolicyRequest.h
  include/tencentcloud/cvd/v20201104/model/PolicyDetail.h
  include/tencentcloud/cvd/v20201104/model/BindInfo.h
  include/tencentcloud/cvd/v20201104/model/DisassociateSecurityGroupResponse.h
  include/tencentcloud/cvd/v20201104/model/DescribeInstancesStatusRequest.h
  include/tencentcloud/cvd/v20201104/model/TerminateInstancesRequest.h
  include/tencentcloud/cvd/v20201104/model/DescribeInstanceMonitorDataRequest.h
  include/tencentcloud/cvd/v20201104/model/BindStatusInfo.h
  include/tencentcloud/cvd/v20201104/model/Invocation.h
  include/tencentcloud/cvd/v20201104/model/DeleteImagesResponse.h
  include/tencentcloud/cvd/v20201104/model/StopInvocationRequest.h
  include/tencentcloud/cvd/v20201104/model/DescribeSecurityGroupsRequest.h
  include/tencentcloud/cvd/v20201104/model/ModifyInstanceBasicAttributeRequest.h
  include/tencentcloud/cvd/v20201104/model/DescribeCommandTasksRequest.h
  include/tencentcloud/cvd/v20201104/model/RebootInstancesResponse.h
  include/tencentcloud/cvd/v20201104/model/CreateDomainControlPolicyRequest.h
  include/tencentcloud/cvd/v20201104/model/CreateCommandTaskResponse.h
  include/tencentcloud/cvd/v20201104/model/ModifyInstancesTypeRequest.h
  include/tencentcloud/cvd/v20201104/model/DescribeInstanceLoginMsgResponse.h
  include/tencentcloud/cvd/v20201104/model/DescribeInstanceFetchMsgResponse.h
  include/tencentcloud/cvd/v20201104/model/CommandDetail.h
  include/tencentcloud/cvd/v20201104/model/UnbindInstancesResponse.h
  include/tencentcloud/cvd/v20201104/model/DescribeImagesRequest.h
  include/tencentcloud/cvd/v20201104/model/RunCommandResponse.h
  include/tencentcloud/cvd/v20201104/model/UnbindInstancesRequest.h
  include/tencentcloud/cvd/v20201104/model/RemovePolicyResponse.h
  include/tencentcloud/cvd/v20201104/model/RebootInstancesRequest.h
  include/tencentcloud/cvd/v20201104/model/StopInvocationResponse.h
  include/tencentcloud/cvd/v20201104/model/RenewInstancesResponse.h
  include/tencentcloud/cvd/v20201104/model/CreateCommandTaskRequest.h
  include/tencentcloud/cvd/v20201104/model/VirtualPrivateCloud.h
  include/tencentcloud/cvd/v20201104/model/IpControlDetail.h
  include/tencentcloud/cvd/v20201104/model/DeleteCommandTasksResponse.h
  include/tencentcloud/cvd/v20201104/model/UpdatePolicyRequest.h
  )

set(cvd_src
  src/v20201104/CvdClient.cpp
  src/v20201104/model/AssociateSecurityGroupResponse.cpp
  src/v20201104/model/AssociateSecurityGroupRequest.cpp
  src/v20201104/model/RenewInstancesRequest.cpp
  src/v20201104/model/RemoveDataDisksResponse.cpp
  src/v20201104/model/DescribeInstancesBindStatusResponse.cpp
  src/v20201104/model/TerminateInstancesResponse.cpp
  src/v20201104/model/CreateInstancesRequest.cpp
  src/v20201104/model/ModifyImageAttrsResponse.cpp
  src/v20201104/model/StopCommandTasksRequest.cpp
  src/v20201104/model/DescribeInstanceFetchMsgRequest.cpp
  src/v20201104/model/DomainControlDetail.cpp
  src/v20201104/model/DescribeInstanceLoginMsgRequest.cpp
  src/v20201104/model/CreateDomainControlPolicyResponse.cpp
  src/v20201104/model/DeleteImagesRequest.cpp
  src/v20201104/model/DescribePolicyDetailResponse.cpp
  src/v20201104/model/DescribeInstancesResponse.cpp
  src/v20201104/model/DeleteCommandTasksRequest.cpp
  src/v20201104/model/PolicyInfo.cpp
  src/v20201104/model/DeleteDomainControlPolicyRequest.cpp
  src/v20201104/model/DisassociateSecurityGroupRequest.cpp
  src/v20201104/model/RemoveDataDisksRequest.cpp
  src/v20201104/model/StopSessionRequest.cpp
  src/v20201104/model/DescribePolicyDetailRequest.cpp
  src/v20201104/model/DescribeSecurityGroupsResponse.cpp
  src/v20201104/model/DescribeInvocationDetailResponse.cpp
  src/v20201104/model/DescribeSnapshotsRequest.cpp
  src/v20201104/model/DescribeInstanceRegionDistributionRequest.cpp
  src/v20201104/model/DataPoint.cpp
  src/v20201104/model/ResetInstancesResponse.cpp
  src/v20201104/model/DescribeInstancesStatusResponse.cpp
  src/v20201104/model/DescribeImagesResponse.cpp
  src/v20201104/model/Disk.cpp
  src/v20201104/model/BindInstancesResponse.cpp
  src/v20201104/model/CreateInstancesResponse.cpp
  src/v20201104/model/StartInstancesResponse.cpp
  src/v20201104/model/ModifyInstancesTypeResponse.cpp
  src/v20201104/model/Usage.cpp
  src/v20201104/model/CreateDataDiskRequest.cpp
  src/v20201104/model/DeleteDomainControlPolicyResponse.cpp
  src/v20201104/model/StopInstancesRequest.cpp
  src/v20201104/model/RemovePolicyRequest.cpp
  src/v20201104/model/CreatePolicyResponse.cpp
  src/v20201104/model/StartInstancesRequest.cpp
  src/v20201104/model/Tag.cpp
  src/v20201104/model/DescribeInstanceMonitorDataResponse.cpp
  src/v20201104/model/DescribeInstancesBindStatusRequest.cpp
  src/v20201104/model/ModifyInstanceBasicAttributeResponse.cpp
  src/v20201104/model/Partition.cpp
  src/v20201104/model/DescribeInvocationsResponse.cpp
  src/v20201104/model/DescribeInstanceRegionDistributionResponse.cpp
  src/v20201104/model/Dimension.cpp
  src/v20201104/model/DistributionInfo.cpp
  src/v20201104/model/StopInstancesResponse.cpp
  src/v20201104/model/DescribeUsageRequest.cpp
  src/v20201104/model/DescribeUsersRequest.cpp
  src/v20201104/model/ImageInfo.cpp
  src/v20201104/model/AttributeInfo.cpp
  src/v20201104/model/InvocationDetail.cpp
  src/v20201104/model/DescribeUsageResponse.cpp
  src/v20201104/model/StopCommandTasksResponse.cpp
  src/v20201104/model/DescribeInstanceGraphDataRequest.cpp
  src/v20201104/model/BindInstancesRequest.cpp
  src/v20201104/model/CreateImageRequest.cpp
  src/v20201104/model/Instance.cpp
  src/v20201104/model/RunCommandRequest.cpp
  src/v20201104/model/SnapshotInfo.cpp
  src/v20201104/model/ModifyDiskConfigurationResponse.cpp
  src/v20201104/model/DescribeCommandTasksResponse.cpp
  src/v20201104/model/StopSessionResponse.cpp
  src/v20201104/model/ModifyInstancesVpcRequest.cpp
  src/v20201104/model/CreateImageResponse.cpp
  src/v20201104/model/InvocationOutput.cpp
  src/v20201104/model/ModifyImageAttrsRequest.cpp
  src/v20201104/model/InstanceInfo.cpp
  src/v20201104/model/User.cpp
  src/v20201104/model/InstanceStatus.cpp
  src/v20201104/model/DescribeInstancesRequest.cpp
  src/v20201104/model/ModifyDiskConfigurationRequest.cpp
  src/v20201104/model/DescribeInvocationsRequest.cpp
  src/v20201104/model/Filter.cpp
  src/v20201104/model/DescribeUsersResponse.cpp
  src/v20201104/model/DescribeSnapshotsResponse.cpp
  src/v20201104/model/CreateDataDiskResponse.cpp
  src/v20201104/model/DescribeInstanceGraphDataResponse.cpp
  src/v20201104/model/UpdatePolicyResponse.cpp
  src/v20201104/model/ChargePrepaid.cpp
  src/v20201104/model/ModifyInstancesVpcResponse.cpp
  src/v20201104/model/DescribeInvocationDetailRequest.cpp
  src/v20201104/model/ResetInstancesRequest.cpp
  src/v20201104/model/CreatePolicyRequest.cpp
  src/v20201104/model/PolicyDetail.cpp
  src/v20201104/model/BindInfo.cpp
  src/v20201104/model/DisassociateSecurityGroupResponse.cpp
  src/v20201104/model/DescribeInstancesStatusRequest.cpp
  src/v20201104/model/TerminateInstancesRequest.cpp
  src/v20201104/model/DescribeInstanceMonitorDataRequest.cpp
  src/v20201104/model/BindStatusInfo.cpp
  src/v20201104/model/Invocation.cpp
  src/v20201104/model/DeleteImagesResponse.cpp
  src/v20201104/model/StopInvocationRequest.cpp
  src/v20201104/model/DescribeSecurityGroupsRequest.cpp
  src/v20201104/model/ModifyInstanceBasicAttributeRequest.cpp
  src/v20201104/model/DescribeCommandTasksRequest.cpp
  src/v20201104/model/RebootInstancesResponse.cpp
  src/v20201104/model/CreateDomainControlPolicyRequest.cpp
  src/v20201104/model/CreateCommandTaskResponse.cpp
  src/v20201104/model/ModifyInstancesTypeRequest.cpp
  src/v20201104/model/DescribeInstanceLoginMsgResponse.cpp
  src/v20201104/model/DescribeInstanceFetchMsgResponse.cpp
  src/v20201104/model/CommandDetail.cpp
  src/v20201104/model/UnbindInstancesResponse.cpp
  src/v20201104/model/DescribeImagesRequest.cpp
  src/v20201104/model/RunCommandResponse.cpp
  src/v20201104/model/UnbindInstancesRequest.cpp
  src/v20201104/model/RemovePolicyResponse.cpp
  src/v20201104/model/RebootInstancesRequest.cpp
  src/v20201104/model/StopInvocationResponse.cpp
  src/v20201104/model/RenewInstancesResponse.cpp
  src/v20201104/model/CreateCommandTaskRequest.cpp
  src/v20201104/model/VirtualPrivateCloud.cpp
  src/v20201104/model/IpControlDetail.cpp
  src/v20201104/model/DeleteCommandTasksResponse.cpp
  src/v20201104/model/UpdatePolicyRequest.cpp
  )

set(cvd_include
    include/tencentcloud/cvd
  )

add_library(cvd ${LIB_TYPE}
  ${cvd_public_header}
  ${cvd_public_header_model}
  ${cvd_src})

set_target_properties(cvd
  PROPERTIES
  LINKER_LANGUAGE CXX
  ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
  LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
  RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin
  OUTPUT_NAME ${TARGET_OUTPUT_NAME_PREFIX}cvd
  )

target_include_directories(cvd
  PRIVATE include
    ${CMAKE_SOURCE_DIR}/core/include
  )
target_link_libraries(cvd
  core)

#install(FILES ${cvd_public_header}
#  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud/cvd/v20201104)
#install(FILES ${cvd_public_header_model}
#  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud/cvd/v20201104/model)
install(DIRECTORY ${cvd_include}
  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud)

install(TARGETS cvd
  ARCHIVE DESTINATION ${CMAKE_INSTALL_LIBDIR}
  LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
  RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
  )
