/*
 * Copyright (c) 2017-2025 Tencent. All Rights Reserved.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *    http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#ifndef TENCENTCLOUD_IOA_V20220601_IOACLIENT_H_
#define TENCENTCLOUD_IOA_V20220601_IOACLIENT_H_

#include <functional>
#include <future>
#include <tencentcloud/core/AbstractClient.h>
#include <tencentcloud/core/Credential.h>
#include <tencentcloud/core/profile/ClientProfile.h>
#include <tencentcloud/core/AsyncCallerContext.h>
#include <tencentcloud/ioa/v20220601/model/BindBusinessResourceConnectorGroupRequest.h>
#include <tencentcloud/ioa/v20220601/model/BindBusinessResourceConnectorGroupResponse.h>
#include <tencentcloud/ioa/v20220601/model/CreateBusinessResourceRequest.h>
#include <tencentcloud/ioa/v20220601/model/CreateBusinessResourceResponse.h>
#include <tencentcloud/ioa/v20220601/model/CreateDLPFileDetectTaskRequest.h>
#include <tencentcloud/ioa/v20220601/model/CreateDLPFileDetectTaskResponse.h>
#include <tencentcloud/ioa/v20220601/model/CreateDLPFileDetectionTaskRequest.h>
#include <tencentcloud/ioa/v20220601/model/CreateDLPFileDetectionTaskResponse.h>
#include <tencentcloud/ioa/v20220601/model/CreateDeviceTaskRequest.h>
#include <tencentcloud/ioa/v20220601/model/CreateDeviceTaskResponse.h>
#include <tencentcloud/ioa/v20220601/model/CreateDeviceVirtualGroupRequest.h>
#include <tencentcloud/ioa/v20220601/model/CreateDeviceVirtualGroupResponse.h>
#include <tencentcloud/ioa/v20220601/model/CreatePrivilegeCodeRequest.h>
#include <tencentcloud/ioa/v20220601/model/CreatePrivilegeCodeResponse.h>
#include <tencentcloud/ioa/v20220601/model/DescribeAccountGroupsRequest.h>
#include <tencentcloud/ioa/v20220601/model/DescribeAccountGroupsResponse.h>
#include <tencentcloud/ioa/v20220601/model/DescribeAggrSoftCategorySoftListRequest.h>
#include <tencentcloud/ioa/v20220601/model/DescribeAggrSoftCategorySoftListResponse.h>
#include <tencentcloud/ioa/v20220601/model/DescribeAggrSoftDetailRequest.h>
#include <tencentcloud/ioa/v20220601/model/DescribeAggrSoftDetailResponse.h>
#include <tencentcloud/ioa/v20220601/model/DescribeAggrSoftDeviceListRequest.h>
#include <tencentcloud/ioa/v20220601/model/DescribeAggrSoftDeviceListResponse.h>
#include <tencentcloud/ioa/v20220601/model/DescribeBusinessResourcesRequest.h>
#include <tencentcloud/ioa/v20220601/model/DescribeBusinessResourcesResponse.h>
#include <tencentcloud/ioa/v20220601/model/DescribeDLPEdgeNodeGroupsRequest.h>
#include <tencentcloud/ioa/v20220601/model/DescribeDLPEdgeNodeGroupsResponse.h>
#include <tencentcloud/ioa/v20220601/model/DescribeDLPEdgeNodesRequest.h>
#include <tencentcloud/ioa/v20220601/model/DescribeDLPEdgeNodesResponse.h>
#include <tencentcloud/ioa/v20220601/model/DescribeDLPFileDetectResultRequest.h>
#include <tencentcloud/ioa/v20220601/model/DescribeDLPFileDetectResultResponse.h>
#include <tencentcloud/ioa/v20220601/model/DescribeDLPFileDetectTaskResultRequest.h>
#include <tencentcloud/ioa/v20220601/model/DescribeDLPFileDetectTaskResultResponse.h>
#include <tencentcloud/ioa/v20220601/model/DescribeDeviceChildGroupsRequest.h>
#include <tencentcloud/ioa/v20220601/model/DescribeDeviceChildGroupsResponse.h>
#include <tencentcloud/ioa/v20220601/model/DescribeDeviceDetailListRequest.h>
#include <tencentcloud/ioa/v20220601/model/DescribeDeviceDetailListResponse.h>
#include <tencentcloud/ioa/v20220601/model/DescribeDeviceHardwareInfoListRequest.h>
#include <tencentcloud/ioa/v20220601/model/DescribeDeviceHardwareInfoListResponse.h>
#include <tencentcloud/ioa/v20220601/model/DescribeDeviceInfoRequest.h>
#include <tencentcloud/ioa/v20220601/model/DescribeDeviceInfoResponse.h>
#include <tencentcloud/ioa/v20220601/model/DescribeDeviceVirtualGroupsRequest.h>
#include <tencentcloud/ioa/v20220601/model/DescribeDeviceVirtualGroupsResponse.h>
#include <tencentcloud/ioa/v20220601/model/DescribeDevicesRequest.h>
#include <tencentcloud/ioa/v20220601/model/DescribeDevicesResponse.h>
#include <tencentcloud/ioa/v20220601/model/DescribeDirectAccountGroupResourcesRequest.h>
#include <tencentcloud/ioa/v20220601/model/DescribeDirectAccountGroupResourcesResponse.h>
#include <tencentcloud/ioa/v20220601/model/DescribeLocalAccountsRequest.h>
#include <tencentcloud/ioa/v20220601/model/DescribeLocalAccountsResponse.h>
#include <tencentcloud/ioa/v20220601/model/DescribeResourceGrantedAccountGroupsRequest.h>
#include <tencentcloud/ioa/v20220601/model/DescribeResourceGrantedAccountGroupsResponse.h>
#include <tencentcloud/ioa/v20220601/model/DescribeResourceGrantedAccountsRequest.h>
#include <tencentcloud/ioa/v20220601/model/DescribeResourceGrantedAccountsResponse.h>
#include <tencentcloud/ioa/v20220601/model/DescribeResourceGrantedVirtualGroupsRequest.h>
#include <tencentcloud/ioa/v20220601/model/DescribeResourceGrantedVirtualGroupsResponse.h>
#include <tencentcloud/ioa/v20220601/model/DescribeRootAccountGroupRequest.h>
#include <tencentcloud/ioa/v20220601/model/DescribeRootAccountGroupResponse.h>
#include <tencentcloud/ioa/v20220601/model/DescribeSoftCensusListByDeviceRequest.h>
#include <tencentcloud/ioa/v20220601/model/DescribeSoftCensusListByDeviceResponse.h>
#include <tencentcloud/ioa/v20220601/model/DescribeSoftwareInformationRequest.h>
#include <tencentcloud/ioa/v20220601/model/DescribeSoftwareInformationResponse.h>
#include <tencentcloud/ioa/v20220601/model/DescribeVirtualDevicesRequest.h>
#include <tencentcloud/ioa/v20220601/model/DescribeVirtualDevicesResponse.h>
#include <tencentcloud/ioa/v20220601/model/ExportDeviceDownloadTaskRequest.h>
#include <tencentcloud/ioa/v20220601/model/ExportDeviceDownloadTaskResponse.h>
#include <tencentcloud/ioa/v20220601/model/ExportSoftwareInformationListRequest.h>
#include <tencentcloud/ioa/v20220601/model/ExportSoftwareInformationListResponse.h>
#include <tencentcloud/ioa/v20220601/model/GrantResourcesByAccountGroupsRequest.h>
#include <tencentcloud/ioa/v20220601/model/GrantResourcesByAccountGroupsResponse.h>
#include <tencentcloud/ioa/v20220601/model/GrantResourcesByAccountsRequest.h>
#include <tencentcloud/ioa/v20220601/model/GrantResourcesByAccountsResponse.h>
#include <tencentcloud/ioa/v20220601/model/GrantResourcesByVirtualGroupsRequest.h>
#include <tencentcloud/ioa/v20220601/model/GrantResourcesByVirtualGroupsResponse.h>
#include <tencentcloud/ioa/v20220601/model/ModifyBusinessResourceRequest.h>
#include <tencentcloud/ioa/v20220601/model/ModifyBusinessResourceResponse.h>
#include <tencentcloud/ioa/v20220601/model/ModifyDeviceTrustStatusRequest.h>
#include <tencentcloud/ioa/v20220601/model/ModifyDeviceTrustStatusResponse.h>
#include <tencentcloud/ioa/v20220601/model/ModifyVirtualDeviceGroupsRequest.h>
#include <tencentcloud/ioa/v20220601/model/ModifyVirtualDeviceGroupsResponse.h>


namespace TencentCloud
{
    namespace Ioa
    {
        namespace V20220601
        {
            class IoaClient : public AbstractClient
            {
            public:
                IoaClient(const Credential &credential, const std::string &region);
                IoaClient(const Credential &credential, const std::string &region, const ClientProfile &profile);

                typedef Outcome<Core::Error, Model::BindBusinessResourceConnectorGroupResponse> BindBusinessResourceConnectorGroupOutcome;
                typedef std::future<BindBusinessResourceConnectorGroupOutcome> BindBusinessResourceConnectorGroupOutcomeCallable;
                typedef std::function<void(const IoaClient*, const Model::BindBusinessResourceConnectorGroupRequest&, BindBusinessResourceConnectorGroupOutcome, const std::shared_ptr<const AsyncCallerContext>&)> BindBusinessResourceConnectorGroupAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateBusinessResourceResponse> CreateBusinessResourceOutcome;
                typedef std::future<CreateBusinessResourceOutcome> CreateBusinessResourceOutcomeCallable;
                typedef std::function<void(const IoaClient*, const Model::CreateBusinessResourceRequest&, CreateBusinessResourceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateBusinessResourceAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateDLPFileDetectTaskResponse> CreateDLPFileDetectTaskOutcome;
                typedef std::future<CreateDLPFileDetectTaskOutcome> CreateDLPFileDetectTaskOutcomeCallable;
                typedef std::function<void(const IoaClient*, const Model::CreateDLPFileDetectTaskRequest&, CreateDLPFileDetectTaskOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateDLPFileDetectTaskAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateDLPFileDetectionTaskResponse> CreateDLPFileDetectionTaskOutcome;
                typedef std::future<CreateDLPFileDetectionTaskOutcome> CreateDLPFileDetectionTaskOutcomeCallable;
                typedef std::function<void(const IoaClient*, const Model::CreateDLPFileDetectionTaskRequest&, CreateDLPFileDetectionTaskOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateDLPFileDetectionTaskAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateDeviceTaskResponse> CreateDeviceTaskOutcome;
                typedef std::future<CreateDeviceTaskOutcome> CreateDeviceTaskOutcomeCallable;
                typedef std::function<void(const IoaClient*, const Model::CreateDeviceTaskRequest&, CreateDeviceTaskOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateDeviceTaskAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateDeviceVirtualGroupResponse> CreateDeviceVirtualGroupOutcome;
                typedef std::future<CreateDeviceVirtualGroupOutcome> CreateDeviceVirtualGroupOutcomeCallable;
                typedef std::function<void(const IoaClient*, const Model::CreateDeviceVirtualGroupRequest&, CreateDeviceVirtualGroupOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateDeviceVirtualGroupAsyncHandler;
                typedef Outcome<Core::Error, Model::CreatePrivilegeCodeResponse> CreatePrivilegeCodeOutcome;
                typedef std::future<CreatePrivilegeCodeOutcome> CreatePrivilegeCodeOutcomeCallable;
                typedef std::function<void(const IoaClient*, const Model::CreatePrivilegeCodeRequest&, CreatePrivilegeCodeOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreatePrivilegeCodeAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeAccountGroupsResponse> DescribeAccountGroupsOutcome;
                typedef std::future<DescribeAccountGroupsOutcome> DescribeAccountGroupsOutcomeCallable;
                typedef std::function<void(const IoaClient*, const Model::DescribeAccountGroupsRequest&, DescribeAccountGroupsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAccountGroupsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeAggrSoftCategorySoftListResponse> DescribeAggrSoftCategorySoftListOutcome;
                typedef std::future<DescribeAggrSoftCategorySoftListOutcome> DescribeAggrSoftCategorySoftListOutcomeCallable;
                typedef std::function<void(const IoaClient*, const Model::DescribeAggrSoftCategorySoftListRequest&, DescribeAggrSoftCategorySoftListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAggrSoftCategorySoftListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeAggrSoftDetailResponse> DescribeAggrSoftDetailOutcome;
                typedef std::future<DescribeAggrSoftDetailOutcome> DescribeAggrSoftDetailOutcomeCallable;
                typedef std::function<void(const IoaClient*, const Model::DescribeAggrSoftDetailRequest&, DescribeAggrSoftDetailOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAggrSoftDetailAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeAggrSoftDeviceListResponse> DescribeAggrSoftDeviceListOutcome;
                typedef std::future<DescribeAggrSoftDeviceListOutcome> DescribeAggrSoftDeviceListOutcomeCallable;
                typedef std::function<void(const IoaClient*, const Model::DescribeAggrSoftDeviceListRequest&, DescribeAggrSoftDeviceListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAggrSoftDeviceListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeBusinessResourcesResponse> DescribeBusinessResourcesOutcome;
                typedef std::future<DescribeBusinessResourcesOutcome> DescribeBusinessResourcesOutcomeCallable;
                typedef std::function<void(const IoaClient*, const Model::DescribeBusinessResourcesRequest&, DescribeBusinessResourcesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeBusinessResourcesAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeDLPEdgeNodeGroupsResponse> DescribeDLPEdgeNodeGroupsOutcome;
                typedef std::future<DescribeDLPEdgeNodeGroupsOutcome> DescribeDLPEdgeNodeGroupsOutcomeCallable;
                typedef std::function<void(const IoaClient*, const Model::DescribeDLPEdgeNodeGroupsRequest&, DescribeDLPEdgeNodeGroupsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDLPEdgeNodeGroupsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeDLPEdgeNodesResponse> DescribeDLPEdgeNodesOutcome;
                typedef std::future<DescribeDLPEdgeNodesOutcome> DescribeDLPEdgeNodesOutcomeCallable;
                typedef std::function<void(const IoaClient*, const Model::DescribeDLPEdgeNodesRequest&, DescribeDLPEdgeNodesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDLPEdgeNodesAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeDLPFileDetectResultResponse> DescribeDLPFileDetectResultOutcome;
                typedef std::future<DescribeDLPFileDetectResultOutcome> DescribeDLPFileDetectResultOutcomeCallable;
                typedef std::function<void(const IoaClient*, const Model::DescribeDLPFileDetectResultRequest&, DescribeDLPFileDetectResultOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDLPFileDetectResultAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeDLPFileDetectTaskResultResponse> DescribeDLPFileDetectTaskResultOutcome;
                typedef std::future<DescribeDLPFileDetectTaskResultOutcome> DescribeDLPFileDetectTaskResultOutcomeCallable;
                typedef std::function<void(const IoaClient*, const Model::DescribeDLPFileDetectTaskResultRequest&, DescribeDLPFileDetectTaskResultOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDLPFileDetectTaskResultAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeDeviceChildGroupsResponse> DescribeDeviceChildGroupsOutcome;
                typedef std::future<DescribeDeviceChildGroupsOutcome> DescribeDeviceChildGroupsOutcomeCallable;
                typedef std::function<void(const IoaClient*, const Model::DescribeDeviceChildGroupsRequest&, DescribeDeviceChildGroupsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDeviceChildGroupsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeDeviceDetailListResponse> DescribeDeviceDetailListOutcome;
                typedef std::future<DescribeDeviceDetailListOutcome> DescribeDeviceDetailListOutcomeCallable;
                typedef std::function<void(const IoaClient*, const Model::DescribeDeviceDetailListRequest&, DescribeDeviceDetailListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDeviceDetailListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeDeviceHardwareInfoListResponse> DescribeDeviceHardwareInfoListOutcome;
                typedef std::future<DescribeDeviceHardwareInfoListOutcome> DescribeDeviceHardwareInfoListOutcomeCallable;
                typedef std::function<void(const IoaClient*, const Model::DescribeDeviceHardwareInfoListRequest&, DescribeDeviceHardwareInfoListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDeviceHardwareInfoListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeDeviceInfoResponse> DescribeDeviceInfoOutcome;
                typedef std::future<DescribeDeviceInfoOutcome> DescribeDeviceInfoOutcomeCallable;
                typedef std::function<void(const IoaClient*, const Model::DescribeDeviceInfoRequest&, DescribeDeviceInfoOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDeviceInfoAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeDeviceVirtualGroupsResponse> DescribeDeviceVirtualGroupsOutcome;
                typedef std::future<DescribeDeviceVirtualGroupsOutcome> DescribeDeviceVirtualGroupsOutcomeCallable;
                typedef std::function<void(const IoaClient*, const Model::DescribeDeviceVirtualGroupsRequest&, DescribeDeviceVirtualGroupsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDeviceVirtualGroupsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeDevicesResponse> DescribeDevicesOutcome;
                typedef std::future<DescribeDevicesOutcome> DescribeDevicesOutcomeCallable;
                typedef std::function<void(const IoaClient*, const Model::DescribeDevicesRequest&, DescribeDevicesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDevicesAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeDirectAccountGroupResourcesResponse> DescribeDirectAccountGroupResourcesOutcome;
                typedef std::future<DescribeDirectAccountGroupResourcesOutcome> DescribeDirectAccountGroupResourcesOutcomeCallable;
                typedef std::function<void(const IoaClient*, const Model::DescribeDirectAccountGroupResourcesRequest&, DescribeDirectAccountGroupResourcesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDirectAccountGroupResourcesAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeLocalAccountsResponse> DescribeLocalAccountsOutcome;
                typedef std::future<DescribeLocalAccountsOutcome> DescribeLocalAccountsOutcomeCallable;
                typedef std::function<void(const IoaClient*, const Model::DescribeLocalAccountsRequest&, DescribeLocalAccountsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeLocalAccountsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeResourceGrantedAccountGroupsResponse> DescribeResourceGrantedAccountGroupsOutcome;
                typedef std::future<DescribeResourceGrantedAccountGroupsOutcome> DescribeResourceGrantedAccountGroupsOutcomeCallable;
                typedef std::function<void(const IoaClient*, const Model::DescribeResourceGrantedAccountGroupsRequest&, DescribeResourceGrantedAccountGroupsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeResourceGrantedAccountGroupsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeResourceGrantedAccountsResponse> DescribeResourceGrantedAccountsOutcome;
                typedef std::future<DescribeResourceGrantedAccountsOutcome> DescribeResourceGrantedAccountsOutcomeCallable;
                typedef std::function<void(const IoaClient*, const Model::DescribeResourceGrantedAccountsRequest&, DescribeResourceGrantedAccountsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeResourceGrantedAccountsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeResourceGrantedVirtualGroupsResponse> DescribeResourceGrantedVirtualGroupsOutcome;
                typedef std::future<DescribeResourceGrantedVirtualGroupsOutcome> DescribeResourceGrantedVirtualGroupsOutcomeCallable;
                typedef std::function<void(const IoaClient*, const Model::DescribeResourceGrantedVirtualGroupsRequest&, DescribeResourceGrantedVirtualGroupsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeResourceGrantedVirtualGroupsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeRootAccountGroupResponse> DescribeRootAccountGroupOutcome;
                typedef std::future<DescribeRootAccountGroupOutcome> DescribeRootAccountGroupOutcomeCallable;
                typedef std::function<void(const IoaClient*, const Model::DescribeRootAccountGroupRequest&, DescribeRootAccountGroupOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeRootAccountGroupAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeSoftCensusListByDeviceResponse> DescribeSoftCensusListByDeviceOutcome;
                typedef std::future<DescribeSoftCensusListByDeviceOutcome> DescribeSoftCensusListByDeviceOutcomeCallable;
                typedef std::function<void(const IoaClient*, const Model::DescribeSoftCensusListByDeviceRequest&, DescribeSoftCensusListByDeviceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeSoftCensusListByDeviceAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeSoftwareInformationResponse> DescribeSoftwareInformationOutcome;
                typedef std::future<DescribeSoftwareInformationOutcome> DescribeSoftwareInformationOutcomeCallable;
                typedef std::function<void(const IoaClient*, const Model::DescribeSoftwareInformationRequest&, DescribeSoftwareInformationOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeSoftwareInformationAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeVirtualDevicesResponse> DescribeVirtualDevicesOutcome;
                typedef std::future<DescribeVirtualDevicesOutcome> DescribeVirtualDevicesOutcomeCallable;
                typedef std::function<void(const IoaClient*, const Model::DescribeVirtualDevicesRequest&, DescribeVirtualDevicesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeVirtualDevicesAsyncHandler;
                typedef Outcome<Core::Error, Model::ExportDeviceDownloadTaskResponse> ExportDeviceDownloadTaskOutcome;
                typedef std::future<ExportDeviceDownloadTaskOutcome> ExportDeviceDownloadTaskOutcomeCallable;
                typedef std::function<void(const IoaClient*, const Model::ExportDeviceDownloadTaskRequest&, ExportDeviceDownloadTaskOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ExportDeviceDownloadTaskAsyncHandler;
                typedef Outcome<Core::Error, Model::ExportSoftwareInformationListResponse> ExportSoftwareInformationListOutcome;
                typedef std::future<ExportSoftwareInformationListOutcome> ExportSoftwareInformationListOutcomeCallable;
                typedef std::function<void(const IoaClient*, const Model::ExportSoftwareInformationListRequest&, ExportSoftwareInformationListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ExportSoftwareInformationListAsyncHandler;
                typedef Outcome<Core::Error, Model::GrantResourcesByAccountGroupsResponse> GrantResourcesByAccountGroupsOutcome;
                typedef std::future<GrantResourcesByAccountGroupsOutcome> GrantResourcesByAccountGroupsOutcomeCallable;
                typedef std::function<void(const IoaClient*, const Model::GrantResourcesByAccountGroupsRequest&, GrantResourcesByAccountGroupsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> GrantResourcesByAccountGroupsAsyncHandler;
                typedef Outcome<Core::Error, Model::GrantResourcesByAccountsResponse> GrantResourcesByAccountsOutcome;
                typedef std::future<GrantResourcesByAccountsOutcome> GrantResourcesByAccountsOutcomeCallable;
                typedef std::function<void(const IoaClient*, const Model::GrantResourcesByAccountsRequest&, GrantResourcesByAccountsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> GrantResourcesByAccountsAsyncHandler;
                typedef Outcome<Core::Error, Model::GrantResourcesByVirtualGroupsResponse> GrantResourcesByVirtualGroupsOutcome;
                typedef std::future<GrantResourcesByVirtualGroupsOutcome> GrantResourcesByVirtualGroupsOutcomeCallable;
                typedef std::function<void(const IoaClient*, const Model::GrantResourcesByVirtualGroupsRequest&, GrantResourcesByVirtualGroupsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> GrantResourcesByVirtualGroupsAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyBusinessResourceResponse> ModifyBusinessResourceOutcome;
                typedef std::future<ModifyBusinessResourceOutcome> ModifyBusinessResourceOutcomeCallable;
                typedef std::function<void(const IoaClient*, const Model::ModifyBusinessResourceRequest&, ModifyBusinessResourceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyBusinessResourceAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyDeviceTrustStatusResponse> ModifyDeviceTrustStatusOutcome;
                typedef std::future<ModifyDeviceTrustStatusOutcome> ModifyDeviceTrustStatusOutcomeCallable;
                typedef std::function<void(const IoaClient*, const Model::ModifyDeviceTrustStatusRequest&, ModifyDeviceTrustStatusOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyDeviceTrustStatusAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyVirtualDeviceGroupsResponse> ModifyVirtualDeviceGroupsOutcome;
                typedef std::future<ModifyVirtualDeviceGroupsOutcome> ModifyVirtualDeviceGroupsOutcomeCallable;
                typedef std::function<void(const IoaClient*, const Model::ModifyVirtualDeviceGroupsRequest&, ModifyVirtualDeviceGroupsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyVirtualDeviceGroupsAsyncHandler;



                /**
                 *saas版本，创建/修改业务资源后，调用绑定连接器接口,私有化调用path为：capi/GatewayResource/BindBusinessResourceConnectorGroup
                 * @param req BindBusinessResourceConnectorGroupRequest
                 * @return BindBusinessResourceConnectorGroupOutcome
                 */
                BindBusinessResourceConnectorGroupOutcome BindBusinessResourceConnectorGroup(const Model::BindBusinessResourceConnectorGroupRequest &request);
                void BindBusinessResourceConnectorGroupAsync(const Model::BindBusinessResourceConnectorGroupRequest& request, const BindBusinessResourceConnectorGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                BindBusinessResourceConnectorGroupOutcomeCallable BindBusinessResourceConnectorGroupCallable(const Model::BindBusinessResourceConnectorGroupRequest& request);

                /**
                 *创建业务资源，会对一些必填参数进行校验和参数合法性校验，创建业务资源时，先调用下校验相同业务资源接口，看资源是不是有冲突。创建时也会做校验，但没有返回对应的异常信息，私有化调用path为：capi/GatewayResource/CreateBusinessResource
                 * @param req CreateBusinessResourceRequest
                 * @return CreateBusinessResourceOutcome
                 */
                CreateBusinessResourceOutcome CreateBusinessResource(const Model::CreateBusinessResourceRequest &request);
                void CreateBusinessResourceAsync(const Model::CreateBusinessResourceRequest& request, const CreateBusinessResourceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateBusinessResourceOutcomeCallable CreateBusinessResourceCallable(const Model::CreateBusinessResourceRequest& request);

                /**
                 *创建文件鉴定任务，私有化调用path为：capi/DlpOpenApi/CreateDLPFileDetectTask
                 * @param req CreateDLPFileDetectTaskRequest
                 * @return CreateDLPFileDetectTaskOutcome
                 */
                CreateDLPFileDetectTaskOutcome CreateDLPFileDetectTask(const Model::CreateDLPFileDetectTaskRequest &request);
                void CreateDLPFileDetectTaskAsync(const Model::CreateDLPFileDetectTaskRequest& request, const CreateDLPFileDetectTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateDLPFileDetectTaskOutcomeCallable CreateDLPFileDetectTaskCallable(const Model::CreateDLPFileDetectTaskRequest& request);

                /**
                 *提交送检任务
                 * @param req CreateDLPFileDetectionTaskRequest
                 * @return CreateDLPFileDetectionTaskOutcome
                 */
                CreateDLPFileDetectionTaskOutcome CreateDLPFileDetectionTask(const Model::CreateDLPFileDetectionTaskRequest &request);
                void CreateDLPFileDetectionTaskAsync(const Model::CreateDLPFileDetectionTaskRequest& request, const CreateDLPFileDetectionTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateDLPFileDetectionTaskOutcomeCallable CreateDLPFileDetectionTaskCallable(const Model::CreateDLPFileDetectionTaskRequest& request);

                /**
                 *创建获取终端进程网络服务信息任务，私有化调用path为：capi/Assets/Device/DescribeDeviceInfo
                 * @param req CreateDeviceTaskRequest
                 * @return CreateDeviceTaskOutcome
                 */
                CreateDeviceTaskOutcome CreateDeviceTask(const Model::CreateDeviceTaskRequest &request);
                void CreateDeviceTaskAsync(const Model::CreateDeviceTaskRequest& request, const CreateDeviceTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateDeviceTaskOutcomeCallable CreateDeviceTaskCallable(const Model::CreateDeviceTaskRequest& request);

                /**
                 *创建终端自定义分组，私有化调用path为：/capi/Assets/Device/CreateDeviceVirtualGroup
                 * @param req CreateDeviceVirtualGroupRequest
                 * @return CreateDeviceVirtualGroupOutcome
                 */
                CreateDeviceVirtualGroupOutcome CreateDeviceVirtualGroup(const Model::CreateDeviceVirtualGroupRequest &request);
                void CreateDeviceVirtualGroupAsync(const Model::CreateDeviceVirtualGroupRequest& request, const CreateDeviceVirtualGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateDeviceVirtualGroupOutcomeCallable CreateDeviceVirtualGroupCallable(const Model::CreateDeviceVirtualGroupRequest& request);

                /**
                 *生成特权码，私有化调用path为：capi/Assets/Device/CreatePrivilegeCode，生成的特权码、卸载码，仅对该设备当天有效
                 * @param req CreatePrivilegeCodeRequest
                 * @return CreatePrivilegeCodeOutcome
                 */
                CreatePrivilegeCodeOutcome CreatePrivilegeCode(const Model::CreatePrivilegeCodeRequest &request);
                void CreatePrivilegeCodeAsync(const Model::CreatePrivilegeCodeRequest& request, const CreatePrivilegeCodeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreatePrivilegeCodeOutcomeCallable CreatePrivilegeCodeCallable(const Model::CreatePrivilegeCodeRequest& request);

                /**
                 *以分页的方式查询账号分组列表，私有化调用path为：/capi/Assets/DescribeAccountGroups
                 * @param req DescribeAccountGroupsRequest
                 * @return DescribeAccountGroupsOutcome
                 */
                DescribeAccountGroupsOutcome DescribeAccountGroups(const Model::DescribeAccountGroupsRequest &request);
                void DescribeAccountGroupsAsync(const Model::DescribeAccountGroupsRequest& request, const DescribeAccountGroupsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeAccountGroupsOutcomeCallable DescribeAccountGroupsCallable(const Model::DescribeAccountGroupsRequest& request);

                /**
                 *聚合的分类软件列表
                 * @param req DescribeAggrSoftCategorySoftListRequest
                 * @return DescribeAggrSoftCategorySoftListOutcome
                 */
                DescribeAggrSoftCategorySoftListOutcome DescribeAggrSoftCategorySoftList(const Model::DescribeAggrSoftCategorySoftListRequest &request);
                void DescribeAggrSoftCategorySoftListAsync(const Model::DescribeAggrSoftCategorySoftListRequest& request, const DescribeAggrSoftCategorySoftListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeAggrSoftCategorySoftListOutcomeCallable DescribeAggrSoftCategorySoftListCallable(const Model::DescribeAggrSoftCategorySoftListRequest& request);

                /**
                 *聚合的软件详情
                 * @param req DescribeAggrSoftDetailRequest
                 * @return DescribeAggrSoftDetailOutcome
                 */
                DescribeAggrSoftDetailOutcome DescribeAggrSoftDetail(const Model::DescribeAggrSoftDetailRequest &request);
                void DescribeAggrSoftDetailAsync(const Model::DescribeAggrSoftDetailRequest& request, const DescribeAggrSoftDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeAggrSoftDetailOutcomeCallable DescribeAggrSoftDetailCallable(const Model::DescribeAggrSoftDetailRequest& request);

                /**
                 *聚合软件的已安装终端列表
                 * @param req DescribeAggrSoftDeviceListRequest
                 * @return DescribeAggrSoftDeviceListOutcome
                 */
                DescribeAggrSoftDeviceListOutcome DescribeAggrSoftDeviceList(const Model::DescribeAggrSoftDeviceListRequest &request);
                void DescribeAggrSoftDeviceListAsync(const Model::DescribeAggrSoftDeviceListRequest& request, const DescribeAggrSoftDeviceListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeAggrSoftDeviceListOutcomeCallable DescribeAggrSoftDeviceListCallable(const Model::DescribeAggrSoftDeviceListRequest& request);

                /**
                 *获取业务资源列表,支持分页，如果分页信息不传递会有默认分页，支持排序，不传排序字段，按业务资源创建时间排序,私有化调用path为：capi/GatewayResource/DescribeBusinessResources
                 * @param req DescribeBusinessResourcesRequest
                 * @return DescribeBusinessResourcesOutcome
                 */
                DescribeBusinessResourcesOutcome DescribeBusinessResources(const Model::DescribeBusinessResourcesRequest &request);
                void DescribeBusinessResourcesAsync(const Model::DescribeBusinessResourcesRequest& request, const DescribeBusinessResourcesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeBusinessResourcesOutcomeCallable DescribeBusinessResourcesCallable(const Model::DescribeBusinessResourcesRequest& request);

                /**
                 *查询边缘节点分组，私有化调用path为：capi/Connectors/DescribeDLPEdgeNodeGroups
                 * @param req DescribeDLPEdgeNodeGroupsRequest
                 * @return DescribeDLPEdgeNodeGroupsOutcome
                 */
                DescribeDLPEdgeNodeGroupsOutcome DescribeDLPEdgeNodeGroups(const Model::DescribeDLPEdgeNodeGroupsRequest &request);
                void DescribeDLPEdgeNodeGroupsAsync(const Model::DescribeDLPEdgeNodeGroupsRequest& request, const DescribeDLPEdgeNodeGroupsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeDLPEdgeNodeGroupsOutcomeCallable DescribeDLPEdgeNodeGroupsCallable(const Model::DescribeDLPEdgeNodeGroupsRequest& request);

                /**
                 *查询边缘节点列表，私有化调用path为：capi/DlpOpenApi/DescribeDLPEdgeNodes
                 * @param req DescribeDLPEdgeNodesRequest
                 * @return DescribeDLPEdgeNodesOutcome
                 */
                DescribeDLPEdgeNodesOutcome DescribeDLPEdgeNodes(const Model::DescribeDLPEdgeNodesRequest &request);
                void DescribeDLPEdgeNodesAsync(const Model::DescribeDLPEdgeNodesRequest& request, const DescribeDLPEdgeNodesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeDLPEdgeNodesOutcomeCallable DescribeDLPEdgeNodesCallable(const Model::DescribeDLPEdgeNodesRequest& request);

                /**
                 *webservice查询文件检测结果
                 * @param req DescribeDLPFileDetectResultRequest
                 * @return DescribeDLPFileDetectResultOutcome
                 */
                DescribeDLPFileDetectResultOutcome DescribeDLPFileDetectResult(const Model::DescribeDLPFileDetectResultRequest &request);
                void DescribeDLPFileDetectResultAsync(const Model::DescribeDLPFileDetectResultRequest& request, const DescribeDLPFileDetectResultAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeDLPFileDetectResultOutcomeCallable DescribeDLPFileDetectResultCallable(const Model::DescribeDLPFileDetectResultRequest& request);

                /**
                 *查询文件鉴定任务结果
                 * @param req DescribeDLPFileDetectTaskResultRequest
                 * @return DescribeDLPFileDetectTaskResultOutcome
                 */
                DescribeDLPFileDetectTaskResultOutcome DescribeDLPFileDetectTaskResult(const Model::DescribeDLPFileDetectTaskResultRequest &request);
                void DescribeDLPFileDetectTaskResultAsync(const Model::DescribeDLPFileDetectTaskResultRequest& request, const DescribeDLPFileDetectTaskResultAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeDLPFileDetectTaskResultOutcomeCallable DescribeDLPFileDetectTaskResultCallable(const Model::DescribeDLPFileDetectTaskResultRequest& request);

                /**
                 *查询设备组子分组详情，私有化调用path为：capi/Assets/Device/DescribeDeviceChildGroups
                 * @param req DescribeDeviceChildGroupsRequest
                 * @return DescribeDeviceChildGroupsOutcome
                 */
                DescribeDeviceChildGroupsOutcome DescribeDeviceChildGroups(const Model::DescribeDeviceChildGroupsRequest &request);
                void DescribeDeviceChildGroupsAsync(const Model::DescribeDeviceChildGroupsRequest& request, const DescribeDeviceChildGroupsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeDeviceChildGroupsOutcomeCallable DescribeDeviceChildGroupsCallable(const Model::DescribeDeviceChildGroupsRequest& request);

                /**
                 *基于软件查看终端详情列表,私有化调用path为：capi/Software/DescribeDeviceDetailList
                 * @param req DescribeDeviceDetailListRequest
                 * @return DescribeDeviceDetailListOutcome
                 */
                DescribeDeviceDetailListOutcome DescribeDeviceDetailList(const Model::DescribeDeviceDetailListRequest &request);
                void DescribeDeviceDetailListAsync(const Model::DescribeDeviceDetailListRequest& request, const DescribeDeviceDetailListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeDeviceDetailListOutcomeCallable DescribeDeviceDetailListCallable(const Model::DescribeDeviceDetailListRequest& request);

                /**
                 *查询满足条件的查询终端硬件信息列表，私有化调用path为：/capi/Assets/Device/DescribeDeviceHardwareInfoList
                 * @param req DescribeDeviceHardwareInfoListRequest
                 * @return DescribeDeviceHardwareInfoListOutcome
                 */
                DescribeDeviceHardwareInfoListOutcome DescribeDeviceHardwareInfoList(const Model::DescribeDeviceHardwareInfoListRequest &request);
                void DescribeDeviceHardwareInfoListAsync(const Model::DescribeDeviceHardwareInfoListRequest& request, const DescribeDeviceHardwareInfoListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeDeviceHardwareInfoListOutcomeCallable DescribeDeviceHardwareInfoListCallable(const Model::DescribeDeviceHardwareInfoListRequest& request);

                /**
                 *获取终端进程网络服务信息，私有化调用path为：capi/Assets/Device/DescribeDeviceInfo
                 * @param req DescribeDeviceInfoRequest
                 * @return DescribeDeviceInfoOutcome
                 */
                DescribeDeviceInfoOutcome DescribeDeviceInfo(const Model::DescribeDeviceInfoRequest &request);
                void DescribeDeviceInfoAsync(const Model::DescribeDeviceInfoRequest& request, const DescribeDeviceInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeDeviceInfoOutcomeCallable DescribeDeviceInfoCallable(const Model::DescribeDeviceInfoRequest& request);

                /**
                 *查询终端自定义分组列表，私有化调用path为：/capi/Assets/Device/DescribeDeviceVirtualGroups
                 * @param req DescribeDeviceVirtualGroupsRequest
                 * @return DescribeDeviceVirtualGroupsOutcome
                 */
                DescribeDeviceVirtualGroupsOutcome DescribeDeviceVirtualGroups(const Model::DescribeDeviceVirtualGroupsRequest &request);
                void DescribeDeviceVirtualGroupsAsync(const Model::DescribeDeviceVirtualGroupsRequest& request, const DescribeDeviceVirtualGroupsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeDeviceVirtualGroupsOutcomeCallable DescribeDeviceVirtualGroupsCallable(const Model::DescribeDeviceVirtualGroupsRequest& request);

                /**
                 *查询满足条件的终端数据详情，私有化调用path为：/capi/Assets/Device/DescribeDevices
                 * @param req DescribeDevicesRequest
                 * @return DescribeDevicesOutcome
                 */
                DescribeDevicesOutcome DescribeDevices(const Model::DescribeDevicesRequest &request);
                void DescribeDevicesAsync(const Model::DescribeDevicesRequest& request, const DescribeDevicesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeDevicesOutcomeCallable DescribeDevicesCallable(const Model::DescribeDevicesRequest& request);

                /**
                 *列表账户组直接关联的资源，私有化调用path为：capi/Assets/DescribeDirectAccountGroupResources
                 * @param req DescribeDirectAccountGroupResourcesRequest
                 * @return DescribeDirectAccountGroupResourcesOutcome
                 */
                DescribeDirectAccountGroupResourcesOutcome DescribeDirectAccountGroupResources(const Model::DescribeDirectAccountGroupResourcesRequest &request);
                void DescribeDirectAccountGroupResourcesAsync(const Model::DescribeDirectAccountGroupResourcesRequest& request, const DescribeDirectAccountGroupResourcesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeDirectAccountGroupResourcesOutcomeCallable DescribeDirectAccountGroupResourcesCallable(const Model::DescribeDirectAccountGroupResourcesRequest& request);

                /**
                 *获取账号列表，支持分页，模糊搜索，私有化调用path为：/capi/Assets/Account/DescribeLocalAccounts
                 * @param req DescribeLocalAccountsRequest
                 * @return DescribeLocalAccountsOutcome
                 */
                DescribeLocalAccountsOutcome DescribeLocalAccounts(const Model::DescribeLocalAccountsRequest &request);
                void DescribeLocalAccountsAsync(const Model::DescribeLocalAccountsRequest& request, const DescribeLocalAccountsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeLocalAccountsOutcomeCallable DescribeLocalAccountsCallable(const Model::DescribeLocalAccountsRequest& request);

                /**
                 *列表账户组直接关联的资源，私有化调用path为：capi/NGN/DescribeResourceGrantedAccounts
                 * @param req DescribeResourceGrantedAccountGroupsRequest
                 * @return DescribeResourceGrantedAccountGroupsOutcome
                 */
                DescribeResourceGrantedAccountGroupsOutcome DescribeResourceGrantedAccountGroups(const Model::DescribeResourceGrantedAccountGroupsRequest &request);
                void DescribeResourceGrantedAccountGroupsAsync(const Model::DescribeResourceGrantedAccountGroupsRequest& request, const DescribeResourceGrantedAccountGroupsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeResourceGrantedAccountGroupsOutcomeCallable DescribeResourceGrantedAccountGroupsCallable(const Model::DescribeResourceGrantedAccountGroupsRequest& request);

                /**
                 *列表账户组直接关联的资源，私有化调用path为：capi/NGN/DescribeResourceGrantedAccounts
                 * @param req DescribeResourceGrantedAccountsRequest
                 * @return DescribeResourceGrantedAccountsOutcome
                 */
                DescribeResourceGrantedAccountsOutcome DescribeResourceGrantedAccounts(const Model::DescribeResourceGrantedAccountsRequest &request);
                void DescribeResourceGrantedAccountsAsync(const Model::DescribeResourceGrantedAccountsRequest& request, const DescribeResourceGrantedAccountsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeResourceGrantedAccountsOutcomeCallable DescribeResourceGrantedAccountsCallable(const Model::DescribeResourceGrantedAccountsRequest& request);

                /**
                 *列表账户组直接关联的资源，私有化调用path为：capi/NGN/DescribeResourceGrantedVirtualGroups
                 * @param req DescribeResourceGrantedVirtualGroupsRequest
                 * @return DescribeResourceGrantedVirtualGroupsOutcome
                 */
                DescribeResourceGrantedVirtualGroupsOutcome DescribeResourceGrantedVirtualGroups(const Model::DescribeResourceGrantedVirtualGroupsRequest &request);
                void DescribeResourceGrantedVirtualGroupsAsync(const Model::DescribeResourceGrantedVirtualGroupsRequest& request, const DescribeResourceGrantedVirtualGroupsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeResourceGrantedVirtualGroupsOutcomeCallable DescribeResourceGrantedVirtualGroupsCallable(const Model::DescribeResourceGrantedVirtualGroupsRequest& request);

                /**
                 *查询账号根分组详情。对应“用户与授权管理”里内置不可见的全网根账号组，所有新建的目录，都挂在该全网根账号组下。
                 * @param req DescribeRootAccountGroupRequest
                 * @return DescribeRootAccountGroupOutcome
                 */
                DescribeRootAccountGroupOutcome DescribeRootAccountGroup(const Model::DescribeRootAccountGroupRequest &request);
                void DescribeRootAccountGroupAsync(const Model::DescribeRootAccountGroupRequest& request, const DescribeRootAccountGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeRootAccountGroupOutcomeCallable DescribeRootAccountGroupCallable(const Model::DescribeRootAccountGroupRequest& request);

                /**
                 *查看终端树下的软件列表,私有化调用path为：capi/Software/DescribeSoftCensusListByDevice
                 * @param req DescribeSoftCensusListByDeviceRequest
                 * @return DescribeSoftCensusListByDeviceOutcome
                 */
                DescribeSoftCensusListByDeviceOutcome DescribeSoftCensusListByDevice(const Model::DescribeSoftCensusListByDeviceRequest &request);
                void DescribeSoftCensusListByDeviceAsync(const Model::DescribeSoftCensusListByDeviceRequest& request, const DescribeSoftCensusListByDeviceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeSoftCensusListByDeviceOutcomeCallable DescribeSoftCensusListByDeviceCallable(const Model::DescribeSoftCensusListByDeviceRequest& request);

                /**
                 *查看指定终端的软件详情列表,私有化调用path为：capi/Software/DescribeSoftwareInformation
                 * @param req DescribeSoftwareInformationRequest
                 * @return DescribeSoftwareInformationOutcome
                 */
                DescribeSoftwareInformationOutcome DescribeSoftwareInformation(const Model::DescribeSoftwareInformationRequest &request);
                void DescribeSoftwareInformationAsync(const Model::DescribeSoftwareInformationRequest& request, const DescribeSoftwareInformationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeSoftwareInformationOutcomeCallable DescribeSoftwareInformationCallable(const Model::DescribeSoftwareInformationRequest& request);

                /**
                 *展示自定义分组终端列表，私有化调用path为：/capi/Assets/DescribeVirtualDevices
                 * @param req DescribeVirtualDevicesRequest
                 * @return DescribeVirtualDevicesOutcome
                 */
                DescribeVirtualDevicesOutcome DescribeVirtualDevices(const Model::DescribeVirtualDevicesRequest &request);
                void DescribeVirtualDevicesAsync(const Model::DescribeVirtualDevicesRequest& request, const DescribeVirtualDevicesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeVirtualDevicesOutcomeCallable DescribeVirtualDevicesCallable(const Model::DescribeVirtualDevicesRequest& request);

                /**
                 *创建终端导出任务，私有化调用path为：capi/Assets/Device/ExportDeviceDownloadTask
                 * @param req ExportDeviceDownloadTaskRequest
                 * @return ExportDeviceDownloadTaskOutcome
                 */
                ExportDeviceDownloadTaskOutcome ExportDeviceDownloadTask(const Model::ExportDeviceDownloadTaskRequest &request);
                void ExportDeviceDownloadTaskAsync(const Model::ExportDeviceDownloadTaskRequest& request, const ExportDeviceDownloadTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ExportDeviceDownloadTaskOutcomeCallable ExportDeviceDownloadTaskCallable(const Model::ExportDeviceDownloadTaskRequest& request);

                /**
                 *导出基于指定终端查看软件信息详情列表查询,私有化调用path为：capi/Software/ExportSoftwareInformationList
                 * @param req ExportSoftwareInformationListRequest
                 * @return ExportSoftwareInformationListOutcome
                 */
                ExportSoftwareInformationListOutcome ExportSoftwareInformationList(const Model::ExportSoftwareInformationListRequest &request);
                void ExportSoftwareInformationListAsync(const Model::ExportSoftwareInformationListRequest& request, const ExportSoftwareInformationListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ExportSoftwareInformationListOutcomeCallable ExportSoftwareInformationListCallable(const Model::ExportSoftwareInformationListRequest& request);

                /**
                 *添加资源授权到账号组
                 * @param req GrantResourcesByAccountGroupsRequest
                 * @return GrantResourcesByAccountGroupsOutcome
                 */
                GrantResourcesByAccountGroupsOutcome GrantResourcesByAccountGroups(const Model::GrantResourcesByAccountGroupsRequest &request);
                void GrantResourcesByAccountGroupsAsync(const Model::GrantResourcesByAccountGroupsRequest& request, const GrantResourcesByAccountGroupsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                GrantResourcesByAccountGroupsOutcomeCallable GrantResourcesByAccountGroupsCallable(const Model::GrantResourcesByAccountGroupsRequest& request);

                /**
                 *添加资源授权到账号组
                 * @param req GrantResourcesByAccountsRequest
                 * @return GrantResourcesByAccountsOutcome
                 */
                GrantResourcesByAccountsOutcome GrantResourcesByAccounts(const Model::GrantResourcesByAccountsRequest &request);
                void GrantResourcesByAccountsAsync(const Model::GrantResourcesByAccountsRequest& request, const GrantResourcesByAccountsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                GrantResourcesByAccountsOutcomeCallable GrantResourcesByAccountsCallable(const Model::GrantResourcesByAccountsRequest& request);

                /**
                 *添加资源授权到账号组
                 * @param req GrantResourcesByVirtualGroupsRequest
                 * @return GrantResourcesByVirtualGroupsOutcome
                 */
                GrantResourcesByVirtualGroupsOutcome GrantResourcesByVirtualGroups(const Model::GrantResourcesByVirtualGroupsRequest &request);
                void GrantResourcesByVirtualGroupsAsync(const Model::GrantResourcesByVirtualGroupsRequest& request, const GrantResourcesByVirtualGroupsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                GrantResourcesByVirtualGroupsOutcomeCallable GrantResourcesByVirtualGroupsCallable(const Model::GrantResourcesByVirtualGroupsRequest& request);

                /**
                 *修改业务资源，会对一些必填参数进行校验和参数合法性校验，修改业务资源时，先调用下校验相同业务资源接口，看资源是不是有冲突。修改时也会做校验，但没有返回对应的异常信息,私有化调用path为：capi/GatewayResource/ModifyBusinessResource
                 * @param req ModifyBusinessResourceRequest
                 * @return ModifyBusinessResourceOutcome
                 */
                ModifyBusinessResourceOutcome ModifyBusinessResource(const Model::ModifyBusinessResourceRequest &request);
                void ModifyBusinessResourceAsync(const Model::ModifyBusinessResourceRequest& request, const ModifyBusinessResourceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyBusinessResourceOutcomeCallable ModifyBusinessResourceCallable(const Model::ModifyBusinessResourceRequest& request);

                /**
                 *给接入设备加黑加白,私有化调用path为：capi/NGN/ModifyDeviceTrustStatus
                 * @param req ModifyDeviceTrustStatusRequest
                 * @return ModifyDeviceTrustStatusOutcome
                 */
                ModifyDeviceTrustStatusOutcome ModifyDeviceTrustStatus(const Model::ModifyDeviceTrustStatusRequest &request);
                void ModifyDeviceTrustStatusAsync(const Model::ModifyDeviceTrustStatusRequest& request, const ModifyDeviceTrustStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyDeviceTrustStatusOutcomeCallable ModifyDeviceTrustStatusCallable(const Model::ModifyDeviceTrustStatusRequest& request);

                /**
                 *终端自定义分组增减终端，私有化调用path为：/capi/Assets/Device/ModifyVirtualDeviceGroups
                 * @param req ModifyVirtualDeviceGroupsRequest
                 * @return ModifyVirtualDeviceGroupsOutcome
                 */
                ModifyVirtualDeviceGroupsOutcome ModifyVirtualDeviceGroups(const Model::ModifyVirtualDeviceGroupsRequest &request);
                void ModifyVirtualDeviceGroupsAsync(const Model::ModifyVirtualDeviceGroupsRequest& request, const ModifyVirtualDeviceGroupsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyVirtualDeviceGroupsOutcomeCallable ModifyVirtualDeviceGroupsCallable(const Model::ModifyVirtualDeviceGroupsRequest& request);

            };
        }
    }
}

#endif // !TENCENTCLOUD_IOA_V20220601_IOACLIENT_H_
