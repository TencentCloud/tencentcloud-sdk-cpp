/*
 * Copyright (c) 2017-2019 THL A29 Limited, a Tencent company. All Rights Reserved.
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

#ifndef TENCENTCLOUD_ISS_V20230517_ISSCLIENT_H_
#define TENCENTCLOUD_ISS_V20230517_ISSCLIENT_H_

#include <functional>
#include <future>
#include <tencentcloud/core/AbstractClient.h>
#include <tencentcloud/core/Credential.h>
#include <tencentcloud/core/profile/ClientProfile.h>
#include <tencentcloud/core/AsyncCallerContext.h>
#include <tencentcloud/iss/v20230517/model/AddAITaskRequest.h>
#include <tencentcloud/iss/v20230517/model/AddAITaskResponse.h>
#include <tencentcloud/iss/v20230517/model/AddOrganizationRequest.h>
#include <tencentcloud/iss/v20230517/model/AddOrganizationResponse.h>
#include <tencentcloud/iss/v20230517/model/AddRecordBackupPlanRequest.h>
#include <tencentcloud/iss/v20230517/model/AddRecordBackupPlanResponse.h>
#include <tencentcloud/iss/v20230517/model/AddRecordBackupTemplateRequest.h>
#include <tencentcloud/iss/v20230517/model/AddRecordBackupTemplateResponse.h>
#include <tencentcloud/iss/v20230517/model/AddRecordPlanRequest.h>
#include <tencentcloud/iss/v20230517/model/AddRecordPlanResponse.h>
#include <tencentcloud/iss/v20230517/model/AddRecordRetrieveTaskRequest.h>
#include <tencentcloud/iss/v20230517/model/AddRecordRetrieveTaskResponse.h>
#include <tencentcloud/iss/v20230517/model/AddRecordTemplateRequest.h>
#include <tencentcloud/iss/v20230517/model/AddRecordTemplateResponse.h>
#include <tencentcloud/iss/v20230517/model/AddStreamAuthRequest.h>
#include <tencentcloud/iss/v20230517/model/AddStreamAuthResponse.h>
#include <tencentcloud/iss/v20230517/model/AddUserDeviceRequest.h>
#include <tencentcloud/iss/v20230517/model/AddUserDeviceResponse.h>
#include <tencentcloud/iss/v20230517/model/BatchDeleteVideoDownloadTaskRequest.h>
#include <tencentcloud/iss/v20230517/model/BatchDeleteVideoDownloadTaskResponse.h>
#include <tencentcloud/iss/v20230517/model/BatchOperateDeviceRequest.h>
#include <tencentcloud/iss/v20230517/model/BatchOperateDeviceResponse.h>
#include <tencentcloud/iss/v20230517/model/CallISAPIRequest.h>
#include <tencentcloud/iss/v20230517/model/CallISAPIResponse.h>
#include <tencentcloud/iss/v20230517/model/ControlDevicePTZRequest.h>
#include <tencentcloud/iss/v20230517/model/ControlDevicePTZResponse.h>
#include <tencentcloud/iss/v20230517/model/ControlDevicePresetRequest.h>
#include <tencentcloud/iss/v20230517/model/ControlDevicePresetResponse.h>
#include <tencentcloud/iss/v20230517/model/ControlDeviceSnapshotRequest.h>
#include <tencentcloud/iss/v20230517/model/ControlDeviceSnapshotResponse.h>
#include <tencentcloud/iss/v20230517/model/ControlDeviceStreamRequest.h>
#include <tencentcloud/iss/v20230517/model/ControlDeviceStreamResponse.h>
#include <tencentcloud/iss/v20230517/model/ControlRecordRequest.h>
#include <tencentcloud/iss/v20230517/model/ControlRecordResponse.h>
#include <tencentcloud/iss/v20230517/model/ControlRecordTimelineRequest.h>
#include <tencentcloud/iss/v20230517/model/ControlRecordTimelineResponse.h>
#include <tencentcloud/iss/v20230517/model/CreateVideoDownloadTaskRequest.h>
#include <tencentcloud/iss/v20230517/model/CreateVideoDownloadTaskResponse.h>
#include <tencentcloud/iss/v20230517/model/DeleteAITaskRequest.h>
#include <tencentcloud/iss/v20230517/model/DeleteAITaskResponse.h>
#include <tencentcloud/iss/v20230517/model/DeleteDomainRequest.h>
#include <tencentcloud/iss/v20230517/model/DeleteDomainResponse.h>
#include <tencentcloud/iss/v20230517/model/DeleteGatewayRequest.h>
#include <tencentcloud/iss/v20230517/model/DeleteGatewayResponse.h>
#include <tencentcloud/iss/v20230517/model/DeleteOrganizationRequest.h>
#include <tencentcloud/iss/v20230517/model/DeleteOrganizationResponse.h>
#include <tencentcloud/iss/v20230517/model/DeleteRecordBackupPlanRequest.h>
#include <tencentcloud/iss/v20230517/model/DeleteRecordBackupPlanResponse.h>
#include <tencentcloud/iss/v20230517/model/DeleteRecordBackupTemplateRequest.h>
#include <tencentcloud/iss/v20230517/model/DeleteRecordBackupTemplateResponse.h>
#include <tencentcloud/iss/v20230517/model/DeleteRecordPlanRequest.h>
#include <tencentcloud/iss/v20230517/model/DeleteRecordPlanResponse.h>
#include <tencentcloud/iss/v20230517/model/DeleteRecordRetrieveTaskRequest.h>
#include <tencentcloud/iss/v20230517/model/DeleteRecordRetrieveTaskResponse.h>
#include <tencentcloud/iss/v20230517/model/DeleteRecordTemplateRequest.h>
#include <tencentcloud/iss/v20230517/model/DeleteRecordTemplateResponse.h>
#include <tencentcloud/iss/v20230517/model/DeleteTaskRequest.h>
#include <tencentcloud/iss/v20230517/model/DeleteTaskResponse.h>
#include <tencentcloud/iss/v20230517/model/DeleteUserDeviceRequest.h>
#include <tencentcloud/iss/v20230517/model/DeleteUserDeviceResponse.h>
#include <tencentcloud/iss/v20230517/model/DescribeAITaskRequest.h>
#include <tencentcloud/iss/v20230517/model/DescribeAITaskResponse.h>
#include <tencentcloud/iss/v20230517/model/DescribeAITaskResultRequest.h>
#include <tencentcloud/iss/v20230517/model/DescribeAITaskResultResponse.h>
#include <tencentcloud/iss/v20230517/model/DescribeCNAMERequest.h>
#include <tencentcloud/iss/v20230517/model/DescribeCNAMEResponse.h>
#include <tencentcloud/iss/v20230517/model/DescribeDeviceChannelRequest.h>
#include <tencentcloud/iss/v20230517/model/DescribeDeviceChannelResponse.h>
#include <tencentcloud/iss/v20230517/model/DescribeDevicePresetRequest.h>
#include <tencentcloud/iss/v20230517/model/DescribeDevicePresetResponse.h>
#include <tencentcloud/iss/v20230517/model/DescribeDeviceRegionRequest.h>
#include <tencentcloud/iss/v20230517/model/DescribeDeviceRegionResponse.h>
#include <tencentcloud/iss/v20230517/model/DescribeDomainRequest.h>
#include <tencentcloud/iss/v20230517/model/DescribeDomainResponse.h>
#include <tencentcloud/iss/v20230517/model/DescribeDomainRegionRequest.h>
#include <tencentcloud/iss/v20230517/model/DescribeDomainRegionResponse.h>
#include <tencentcloud/iss/v20230517/model/DescribeGBDeviceAddrRequest.h>
#include <tencentcloud/iss/v20230517/model/DescribeGBDeviceAddrResponse.h>
#include <tencentcloud/iss/v20230517/model/DescribeGatewayRequest.h>
#include <tencentcloud/iss/v20230517/model/DescribeGatewayResponse.h>
#include <tencentcloud/iss/v20230517/model/DescribeGatewayMonitorRequest.h>
#include <tencentcloud/iss/v20230517/model/DescribeGatewayMonitorResponse.h>
#include <tencentcloud/iss/v20230517/model/DescribeGatewayProtocolRequest.h>
#include <tencentcloud/iss/v20230517/model/DescribeGatewayProtocolResponse.h>
#include <tencentcloud/iss/v20230517/model/DescribeGatewayVersionRequest.h>
#include <tencentcloud/iss/v20230517/model/DescribeGatewayVersionResponse.h>
#include <tencentcloud/iss/v20230517/model/DescribeOrganizationRequest.h>
#include <tencentcloud/iss/v20230517/model/DescribeOrganizationResponse.h>
#include <tencentcloud/iss/v20230517/model/DescribeRecordBackupPlanRequest.h>
#include <tencentcloud/iss/v20230517/model/DescribeRecordBackupPlanResponse.h>
#include <tencentcloud/iss/v20230517/model/DescribeRecordBackupTemplateRequest.h>
#include <tencentcloud/iss/v20230517/model/DescribeRecordBackupTemplateResponse.h>
#include <tencentcloud/iss/v20230517/model/DescribeRecordFileRequest.h>
#include <tencentcloud/iss/v20230517/model/DescribeRecordFileResponse.h>
#include <tencentcloud/iss/v20230517/model/DescribeRecordPlanRequest.h>
#include <tencentcloud/iss/v20230517/model/DescribeRecordPlanResponse.h>
#include <tencentcloud/iss/v20230517/model/DescribeRecordPlaybackUrlRequest.h>
#include <tencentcloud/iss/v20230517/model/DescribeRecordPlaybackUrlResponse.h>
#include <tencentcloud/iss/v20230517/model/DescribeRecordRetrieveTaskRequest.h>
#include <tencentcloud/iss/v20230517/model/DescribeRecordRetrieveTaskResponse.h>
#include <tencentcloud/iss/v20230517/model/DescribeRecordSliceRequest.h>
#include <tencentcloud/iss/v20230517/model/DescribeRecordSliceResponse.h>
#include <tencentcloud/iss/v20230517/model/DescribeRecordTemplateRequest.h>
#include <tencentcloud/iss/v20230517/model/DescribeRecordTemplateResponse.h>
#include <tencentcloud/iss/v20230517/model/DescribeStreamAuthRequest.h>
#include <tencentcloud/iss/v20230517/model/DescribeStreamAuthResponse.h>
#include <tencentcloud/iss/v20230517/model/DescribeTaskRequest.h>
#include <tencentcloud/iss/v20230517/model/DescribeTaskResponse.h>
#include <tencentcloud/iss/v20230517/model/DescribeUserDeviceRequest.h>
#include <tencentcloud/iss/v20230517/model/DescribeUserDeviceResponse.h>
#include <tencentcloud/iss/v20230517/model/DescribeVideoBitRateRequest.h>
#include <tencentcloud/iss/v20230517/model/DescribeVideoBitRateResponse.h>
#include <tencentcloud/iss/v20230517/model/DescribeVideoDownloadUrlRequest.h>
#include <tencentcloud/iss/v20230517/model/DescribeVideoDownloadUrlResponse.h>
#include <tencentcloud/iss/v20230517/model/ListAITasksRequest.h>
#include <tencentcloud/iss/v20230517/model/ListAITasksResponse.h>
#include <tencentcloud/iss/v20230517/model/ListDeviceSnapshotsRequest.h>
#include <tencentcloud/iss/v20230517/model/ListDeviceSnapshotsResponse.h>
#include <tencentcloud/iss/v20230517/model/ListDevicesRequest.h>
#include <tencentcloud/iss/v20230517/model/ListDevicesResponse.h>
#include <tencentcloud/iss/v20230517/model/ListGatewayDevicesRequest.h>
#include <tencentcloud/iss/v20230517/model/ListGatewayDevicesResponse.h>
#include <tencentcloud/iss/v20230517/model/ListGatewaysRequest.h>
#include <tencentcloud/iss/v20230517/model/ListGatewaysResponse.h>
#include <tencentcloud/iss/v20230517/model/ListOrganizationChannelNumbersRequest.h>
#include <tencentcloud/iss/v20230517/model/ListOrganizationChannelNumbersResponse.h>
#include <tencentcloud/iss/v20230517/model/ListOrganizationChannelsRequest.h>
#include <tencentcloud/iss/v20230517/model/ListOrganizationChannelsResponse.h>
#include <tencentcloud/iss/v20230517/model/ListRecordBackupPlanDevicesRequest.h>
#include <tencentcloud/iss/v20230517/model/ListRecordBackupPlanDevicesResponse.h>
#include <tencentcloud/iss/v20230517/model/ListRecordBackupPlansRequest.h>
#include <tencentcloud/iss/v20230517/model/ListRecordBackupPlansResponse.h>
#include <tencentcloud/iss/v20230517/model/ListRecordBackupTemplatesRequest.h>
#include <tencentcloud/iss/v20230517/model/ListRecordBackupTemplatesResponse.h>
#include <tencentcloud/iss/v20230517/model/ListRecordPlanChannelsRequest.h>
#include <tencentcloud/iss/v20230517/model/ListRecordPlanChannelsResponse.h>
#include <tencentcloud/iss/v20230517/model/ListRecordPlanDevicesRequest.h>
#include <tencentcloud/iss/v20230517/model/ListRecordPlanDevicesResponse.h>
#include <tencentcloud/iss/v20230517/model/ListRecordPlansRequest.h>
#include <tencentcloud/iss/v20230517/model/ListRecordPlansResponse.h>
#include <tencentcloud/iss/v20230517/model/ListRecordRetrieveTasksRequest.h>
#include <tencentcloud/iss/v20230517/model/ListRecordRetrieveTasksResponse.h>
#include <tencentcloud/iss/v20230517/model/ListRecordTemplatesRequest.h>
#include <tencentcloud/iss/v20230517/model/ListRecordTemplatesResponse.h>
#include <tencentcloud/iss/v20230517/model/ListSubTasksRequest.h>
#include <tencentcloud/iss/v20230517/model/ListSubTasksResponse.h>
#include <tencentcloud/iss/v20230517/model/ListTasksRequest.h>
#include <tencentcloud/iss/v20230517/model/ListTasksResponse.h>
#include <tencentcloud/iss/v20230517/model/ListVideoDownloadTaskRequest.h>
#include <tencentcloud/iss/v20230517/model/ListVideoDownloadTaskResponse.h>
#include <tencentcloud/iss/v20230517/model/PlayRecordRequest.h>
#include <tencentcloud/iss/v20230517/model/PlayRecordResponse.h>
#include <tencentcloud/iss/v20230517/model/QueryForbidPlayChannelListRequest.h>
#include <tencentcloud/iss/v20230517/model/QueryForbidPlayChannelListResponse.h>
#include <tencentcloud/iss/v20230517/model/RefreshDeviceChannelRequest.h>
#include <tencentcloud/iss/v20230517/model/RefreshDeviceChannelResponse.h>
#include <tencentcloud/iss/v20230517/model/SetForbidPlayChannelsRequest.h>
#include <tencentcloud/iss/v20230517/model/SetForbidPlayChannelsResponse.h>
#include <tencentcloud/iss/v20230517/model/UpdateAITaskRequest.h>
#include <tencentcloud/iss/v20230517/model/UpdateAITaskResponse.h>
#include <tencentcloud/iss/v20230517/model/UpdateAITaskStatusRequest.h>
#include <tencentcloud/iss/v20230517/model/UpdateAITaskStatusResponse.h>
#include <tencentcloud/iss/v20230517/model/UpdateDeviceOrganizationRequest.h>
#include <tencentcloud/iss/v20230517/model/UpdateDeviceOrganizationResponse.h>
#include <tencentcloud/iss/v20230517/model/UpdateDeviceStatusRequest.h>
#include <tencentcloud/iss/v20230517/model/UpdateDeviceStatusResponse.h>
#include <tencentcloud/iss/v20230517/model/UpdateGatewayRequest.h>
#include <tencentcloud/iss/v20230517/model/UpdateGatewayResponse.h>
#include <tencentcloud/iss/v20230517/model/UpdateOrganizationRequest.h>
#include <tencentcloud/iss/v20230517/model/UpdateOrganizationResponse.h>
#include <tencentcloud/iss/v20230517/model/UpdateRecordBackupPlanRequest.h>
#include <tencentcloud/iss/v20230517/model/UpdateRecordBackupPlanResponse.h>
#include <tencentcloud/iss/v20230517/model/UpdateRecordBackupTemplateRequest.h>
#include <tencentcloud/iss/v20230517/model/UpdateRecordBackupTemplateResponse.h>
#include <tencentcloud/iss/v20230517/model/UpdateRecordPlanRequest.h>
#include <tencentcloud/iss/v20230517/model/UpdateRecordPlanResponse.h>
#include <tencentcloud/iss/v20230517/model/UpdateRecordTemplateRequest.h>
#include <tencentcloud/iss/v20230517/model/UpdateRecordTemplateResponse.h>
#include <tencentcloud/iss/v20230517/model/UpdateUserDeviceRequest.h>
#include <tencentcloud/iss/v20230517/model/UpdateUserDeviceResponse.h>
#include <tencentcloud/iss/v20230517/model/UpgradeGatewayRequest.h>
#include <tencentcloud/iss/v20230517/model/UpgradeGatewayResponse.h>


namespace TencentCloud
{
    namespace Iss
    {
        namespace V20230517
        {
            class IssClient : public AbstractClient
            {
            public:
                IssClient(const Credential &credential, const std::string &region);
                IssClient(const Credential &credential, const std::string &region, const ClientProfile &profile);

                typedef Outcome<Core::Error, Model::AddAITaskResponse> AddAITaskOutcome;
                typedef std::future<AddAITaskOutcome> AddAITaskOutcomeCallable;
                typedef std::function<void(const IssClient*, const Model::AddAITaskRequest&, AddAITaskOutcome, const std::shared_ptr<const AsyncCallerContext>&)> AddAITaskAsyncHandler;
                typedef Outcome<Core::Error, Model::AddOrganizationResponse> AddOrganizationOutcome;
                typedef std::future<AddOrganizationOutcome> AddOrganizationOutcomeCallable;
                typedef std::function<void(const IssClient*, const Model::AddOrganizationRequest&, AddOrganizationOutcome, const std::shared_ptr<const AsyncCallerContext>&)> AddOrganizationAsyncHandler;
                typedef Outcome<Core::Error, Model::AddRecordBackupPlanResponse> AddRecordBackupPlanOutcome;
                typedef std::future<AddRecordBackupPlanOutcome> AddRecordBackupPlanOutcomeCallable;
                typedef std::function<void(const IssClient*, const Model::AddRecordBackupPlanRequest&, AddRecordBackupPlanOutcome, const std::shared_ptr<const AsyncCallerContext>&)> AddRecordBackupPlanAsyncHandler;
                typedef Outcome<Core::Error, Model::AddRecordBackupTemplateResponse> AddRecordBackupTemplateOutcome;
                typedef std::future<AddRecordBackupTemplateOutcome> AddRecordBackupTemplateOutcomeCallable;
                typedef std::function<void(const IssClient*, const Model::AddRecordBackupTemplateRequest&, AddRecordBackupTemplateOutcome, const std::shared_ptr<const AsyncCallerContext>&)> AddRecordBackupTemplateAsyncHandler;
                typedef Outcome<Core::Error, Model::AddRecordPlanResponse> AddRecordPlanOutcome;
                typedef std::future<AddRecordPlanOutcome> AddRecordPlanOutcomeCallable;
                typedef std::function<void(const IssClient*, const Model::AddRecordPlanRequest&, AddRecordPlanOutcome, const std::shared_ptr<const AsyncCallerContext>&)> AddRecordPlanAsyncHandler;
                typedef Outcome<Core::Error, Model::AddRecordRetrieveTaskResponse> AddRecordRetrieveTaskOutcome;
                typedef std::future<AddRecordRetrieveTaskOutcome> AddRecordRetrieveTaskOutcomeCallable;
                typedef std::function<void(const IssClient*, const Model::AddRecordRetrieveTaskRequest&, AddRecordRetrieveTaskOutcome, const std::shared_ptr<const AsyncCallerContext>&)> AddRecordRetrieveTaskAsyncHandler;
                typedef Outcome<Core::Error, Model::AddRecordTemplateResponse> AddRecordTemplateOutcome;
                typedef std::future<AddRecordTemplateOutcome> AddRecordTemplateOutcomeCallable;
                typedef std::function<void(const IssClient*, const Model::AddRecordTemplateRequest&, AddRecordTemplateOutcome, const std::shared_ptr<const AsyncCallerContext>&)> AddRecordTemplateAsyncHandler;
                typedef Outcome<Core::Error, Model::AddStreamAuthResponse> AddStreamAuthOutcome;
                typedef std::future<AddStreamAuthOutcome> AddStreamAuthOutcomeCallable;
                typedef std::function<void(const IssClient*, const Model::AddStreamAuthRequest&, AddStreamAuthOutcome, const std::shared_ptr<const AsyncCallerContext>&)> AddStreamAuthAsyncHandler;
                typedef Outcome<Core::Error, Model::AddUserDeviceResponse> AddUserDeviceOutcome;
                typedef std::future<AddUserDeviceOutcome> AddUserDeviceOutcomeCallable;
                typedef std::function<void(const IssClient*, const Model::AddUserDeviceRequest&, AddUserDeviceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> AddUserDeviceAsyncHandler;
                typedef Outcome<Core::Error, Model::BatchDeleteVideoDownloadTaskResponse> BatchDeleteVideoDownloadTaskOutcome;
                typedef std::future<BatchDeleteVideoDownloadTaskOutcome> BatchDeleteVideoDownloadTaskOutcomeCallable;
                typedef std::function<void(const IssClient*, const Model::BatchDeleteVideoDownloadTaskRequest&, BatchDeleteVideoDownloadTaskOutcome, const std::shared_ptr<const AsyncCallerContext>&)> BatchDeleteVideoDownloadTaskAsyncHandler;
                typedef Outcome<Core::Error, Model::BatchOperateDeviceResponse> BatchOperateDeviceOutcome;
                typedef std::future<BatchOperateDeviceOutcome> BatchOperateDeviceOutcomeCallable;
                typedef std::function<void(const IssClient*, const Model::BatchOperateDeviceRequest&, BatchOperateDeviceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> BatchOperateDeviceAsyncHandler;
                typedef Outcome<Core::Error, Model::CallISAPIResponse> CallISAPIOutcome;
                typedef std::future<CallISAPIOutcome> CallISAPIOutcomeCallable;
                typedef std::function<void(const IssClient*, const Model::CallISAPIRequest&, CallISAPIOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CallISAPIAsyncHandler;
                typedef Outcome<Core::Error, Model::ControlDevicePTZResponse> ControlDevicePTZOutcome;
                typedef std::future<ControlDevicePTZOutcome> ControlDevicePTZOutcomeCallable;
                typedef std::function<void(const IssClient*, const Model::ControlDevicePTZRequest&, ControlDevicePTZOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ControlDevicePTZAsyncHandler;
                typedef Outcome<Core::Error, Model::ControlDevicePresetResponse> ControlDevicePresetOutcome;
                typedef std::future<ControlDevicePresetOutcome> ControlDevicePresetOutcomeCallable;
                typedef std::function<void(const IssClient*, const Model::ControlDevicePresetRequest&, ControlDevicePresetOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ControlDevicePresetAsyncHandler;
                typedef Outcome<Core::Error, Model::ControlDeviceSnapshotResponse> ControlDeviceSnapshotOutcome;
                typedef std::future<ControlDeviceSnapshotOutcome> ControlDeviceSnapshotOutcomeCallable;
                typedef std::function<void(const IssClient*, const Model::ControlDeviceSnapshotRequest&, ControlDeviceSnapshotOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ControlDeviceSnapshotAsyncHandler;
                typedef Outcome<Core::Error, Model::ControlDeviceStreamResponse> ControlDeviceStreamOutcome;
                typedef std::future<ControlDeviceStreamOutcome> ControlDeviceStreamOutcomeCallable;
                typedef std::function<void(const IssClient*, const Model::ControlDeviceStreamRequest&, ControlDeviceStreamOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ControlDeviceStreamAsyncHandler;
                typedef Outcome<Core::Error, Model::ControlRecordResponse> ControlRecordOutcome;
                typedef std::future<ControlRecordOutcome> ControlRecordOutcomeCallable;
                typedef std::function<void(const IssClient*, const Model::ControlRecordRequest&, ControlRecordOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ControlRecordAsyncHandler;
                typedef Outcome<Core::Error, Model::ControlRecordTimelineResponse> ControlRecordTimelineOutcome;
                typedef std::future<ControlRecordTimelineOutcome> ControlRecordTimelineOutcomeCallable;
                typedef std::function<void(const IssClient*, const Model::ControlRecordTimelineRequest&, ControlRecordTimelineOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ControlRecordTimelineAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateVideoDownloadTaskResponse> CreateVideoDownloadTaskOutcome;
                typedef std::future<CreateVideoDownloadTaskOutcome> CreateVideoDownloadTaskOutcomeCallable;
                typedef std::function<void(const IssClient*, const Model::CreateVideoDownloadTaskRequest&, CreateVideoDownloadTaskOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateVideoDownloadTaskAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteAITaskResponse> DeleteAITaskOutcome;
                typedef std::future<DeleteAITaskOutcome> DeleteAITaskOutcomeCallable;
                typedef std::function<void(const IssClient*, const Model::DeleteAITaskRequest&, DeleteAITaskOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteAITaskAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteDomainResponse> DeleteDomainOutcome;
                typedef std::future<DeleteDomainOutcome> DeleteDomainOutcomeCallable;
                typedef std::function<void(const IssClient*, const Model::DeleteDomainRequest&, DeleteDomainOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteDomainAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteGatewayResponse> DeleteGatewayOutcome;
                typedef std::future<DeleteGatewayOutcome> DeleteGatewayOutcomeCallable;
                typedef std::function<void(const IssClient*, const Model::DeleteGatewayRequest&, DeleteGatewayOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteGatewayAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteOrganizationResponse> DeleteOrganizationOutcome;
                typedef std::future<DeleteOrganizationOutcome> DeleteOrganizationOutcomeCallable;
                typedef std::function<void(const IssClient*, const Model::DeleteOrganizationRequest&, DeleteOrganizationOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteOrganizationAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteRecordBackupPlanResponse> DeleteRecordBackupPlanOutcome;
                typedef std::future<DeleteRecordBackupPlanOutcome> DeleteRecordBackupPlanOutcomeCallable;
                typedef std::function<void(const IssClient*, const Model::DeleteRecordBackupPlanRequest&, DeleteRecordBackupPlanOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteRecordBackupPlanAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteRecordBackupTemplateResponse> DeleteRecordBackupTemplateOutcome;
                typedef std::future<DeleteRecordBackupTemplateOutcome> DeleteRecordBackupTemplateOutcomeCallable;
                typedef std::function<void(const IssClient*, const Model::DeleteRecordBackupTemplateRequest&, DeleteRecordBackupTemplateOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteRecordBackupTemplateAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteRecordPlanResponse> DeleteRecordPlanOutcome;
                typedef std::future<DeleteRecordPlanOutcome> DeleteRecordPlanOutcomeCallable;
                typedef std::function<void(const IssClient*, const Model::DeleteRecordPlanRequest&, DeleteRecordPlanOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteRecordPlanAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteRecordRetrieveTaskResponse> DeleteRecordRetrieveTaskOutcome;
                typedef std::future<DeleteRecordRetrieveTaskOutcome> DeleteRecordRetrieveTaskOutcomeCallable;
                typedef std::function<void(const IssClient*, const Model::DeleteRecordRetrieveTaskRequest&, DeleteRecordRetrieveTaskOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteRecordRetrieveTaskAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteRecordTemplateResponse> DeleteRecordTemplateOutcome;
                typedef std::future<DeleteRecordTemplateOutcome> DeleteRecordTemplateOutcomeCallable;
                typedef std::function<void(const IssClient*, const Model::DeleteRecordTemplateRequest&, DeleteRecordTemplateOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteRecordTemplateAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteTaskResponse> DeleteTaskOutcome;
                typedef std::future<DeleteTaskOutcome> DeleteTaskOutcomeCallable;
                typedef std::function<void(const IssClient*, const Model::DeleteTaskRequest&, DeleteTaskOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteTaskAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteUserDeviceResponse> DeleteUserDeviceOutcome;
                typedef std::future<DeleteUserDeviceOutcome> DeleteUserDeviceOutcomeCallable;
                typedef std::function<void(const IssClient*, const Model::DeleteUserDeviceRequest&, DeleteUserDeviceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteUserDeviceAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeAITaskResponse> DescribeAITaskOutcome;
                typedef std::future<DescribeAITaskOutcome> DescribeAITaskOutcomeCallable;
                typedef std::function<void(const IssClient*, const Model::DescribeAITaskRequest&, DescribeAITaskOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAITaskAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeAITaskResultResponse> DescribeAITaskResultOutcome;
                typedef std::future<DescribeAITaskResultOutcome> DescribeAITaskResultOutcomeCallable;
                typedef std::function<void(const IssClient*, const Model::DescribeAITaskResultRequest&, DescribeAITaskResultOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAITaskResultAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeCNAMEResponse> DescribeCNAMEOutcome;
                typedef std::future<DescribeCNAMEOutcome> DescribeCNAMEOutcomeCallable;
                typedef std::function<void(const IssClient*, const Model::DescribeCNAMERequest&, DescribeCNAMEOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeCNAMEAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeDeviceChannelResponse> DescribeDeviceChannelOutcome;
                typedef std::future<DescribeDeviceChannelOutcome> DescribeDeviceChannelOutcomeCallable;
                typedef std::function<void(const IssClient*, const Model::DescribeDeviceChannelRequest&, DescribeDeviceChannelOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDeviceChannelAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeDevicePresetResponse> DescribeDevicePresetOutcome;
                typedef std::future<DescribeDevicePresetOutcome> DescribeDevicePresetOutcomeCallable;
                typedef std::function<void(const IssClient*, const Model::DescribeDevicePresetRequest&, DescribeDevicePresetOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDevicePresetAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeDeviceRegionResponse> DescribeDeviceRegionOutcome;
                typedef std::future<DescribeDeviceRegionOutcome> DescribeDeviceRegionOutcomeCallable;
                typedef std::function<void(const IssClient*, const Model::DescribeDeviceRegionRequest&, DescribeDeviceRegionOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDeviceRegionAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeDomainResponse> DescribeDomainOutcome;
                typedef std::future<DescribeDomainOutcome> DescribeDomainOutcomeCallable;
                typedef std::function<void(const IssClient*, const Model::DescribeDomainRequest&, DescribeDomainOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDomainAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeDomainRegionResponse> DescribeDomainRegionOutcome;
                typedef std::future<DescribeDomainRegionOutcome> DescribeDomainRegionOutcomeCallable;
                typedef std::function<void(const IssClient*, const Model::DescribeDomainRegionRequest&, DescribeDomainRegionOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDomainRegionAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeGBDeviceAddrResponse> DescribeGBDeviceAddrOutcome;
                typedef std::future<DescribeGBDeviceAddrOutcome> DescribeGBDeviceAddrOutcomeCallable;
                typedef std::function<void(const IssClient*, const Model::DescribeGBDeviceAddrRequest&, DescribeGBDeviceAddrOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeGBDeviceAddrAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeGatewayResponse> DescribeGatewayOutcome;
                typedef std::future<DescribeGatewayOutcome> DescribeGatewayOutcomeCallable;
                typedef std::function<void(const IssClient*, const Model::DescribeGatewayRequest&, DescribeGatewayOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeGatewayAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeGatewayMonitorResponse> DescribeGatewayMonitorOutcome;
                typedef std::future<DescribeGatewayMonitorOutcome> DescribeGatewayMonitorOutcomeCallable;
                typedef std::function<void(const IssClient*, const Model::DescribeGatewayMonitorRequest&, DescribeGatewayMonitorOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeGatewayMonitorAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeGatewayProtocolResponse> DescribeGatewayProtocolOutcome;
                typedef std::future<DescribeGatewayProtocolOutcome> DescribeGatewayProtocolOutcomeCallable;
                typedef std::function<void(const IssClient*, const Model::DescribeGatewayProtocolRequest&, DescribeGatewayProtocolOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeGatewayProtocolAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeGatewayVersionResponse> DescribeGatewayVersionOutcome;
                typedef std::future<DescribeGatewayVersionOutcome> DescribeGatewayVersionOutcomeCallable;
                typedef std::function<void(const IssClient*, const Model::DescribeGatewayVersionRequest&, DescribeGatewayVersionOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeGatewayVersionAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeOrganizationResponse> DescribeOrganizationOutcome;
                typedef std::future<DescribeOrganizationOutcome> DescribeOrganizationOutcomeCallable;
                typedef std::function<void(const IssClient*, const Model::DescribeOrganizationRequest&, DescribeOrganizationOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeOrganizationAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeRecordBackupPlanResponse> DescribeRecordBackupPlanOutcome;
                typedef std::future<DescribeRecordBackupPlanOutcome> DescribeRecordBackupPlanOutcomeCallable;
                typedef std::function<void(const IssClient*, const Model::DescribeRecordBackupPlanRequest&, DescribeRecordBackupPlanOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeRecordBackupPlanAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeRecordBackupTemplateResponse> DescribeRecordBackupTemplateOutcome;
                typedef std::future<DescribeRecordBackupTemplateOutcome> DescribeRecordBackupTemplateOutcomeCallable;
                typedef std::function<void(const IssClient*, const Model::DescribeRecordBackupTemplateRequest&, DescribeRecordBackupTemplateOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeRecordBackupTemplateAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeRecordFileResponse> DescribeRecordFileOutcome;
                typedef std::future<DescribeRecordFileOutcome> DescribeRecordFileOutcomeCallable;
                typedef std::function<void(const IssClient*, const Model::DescribeRecordFileRequest&, DescribeRecordFileOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeRecordFileAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeRecordPlanResponse> DescribeRecordPlanOutcome;
                typedef std::future<DescribeRecordPlanOutcome> DescribeRecordPlanOutcomeCallable;
                typedef std::function<void(const IssClient*, const Model::DescribeRecordPlanRequest&, DescribeRecordPlanOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeRecordPlanAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeRecordPlaybackUrlResponse> DescribeRecordPlaybackUrlOutcome;
                typedef std::future<DescribeRecordPlaybackUrlOutcome> DescribeRecordPlaybackUrlOutcomeCallable;
                typedef std::function<void(const IssClient*, const Model::DescribeRecordPlaybackUrlRequest&, DescribeRecordPlaybackUrlOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeRecordPlaybackUrlAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeRecordRetrieveTaskResponse> DescribeRecordRetrieveTaskOutcome;
                typedef std::future<DescribeRecordRetrieveTaskOutcome> DescribeRecordRetrieveTaskOutcomeCallable;
                typedef std::function<void(const IssClient*, const Model::DescribeRecordRetrieveTaskRequest&, DescribeRecordRetrieveTaskOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeRecordRetrieveTaskAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeRecordSliceResponse> DescribeRecordSliceOutcome;
                typedef std::future<DescribeRecordSliceOutcome> DescribeRecordSliceOutcomeCallable;
                typedef std::function<void(const IssClient*, const Model::DescribeRecordSliceRequest&, DescribeRecordSliceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeRecordSliceAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeRecordTemplateResponse> DescribeRecordTemplateOutcome;
                typedef std::future<DescribeRecordTemplateOutcome> DescribeRecordTemplateOutcomeCallable;
                typedef std::function<void(const IssClient*, const Model::DescribeRecordTemplateRequest&, DescribeRecordTemplateOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeRecordTemplateAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeStreamAuthResponse> DescribeStreamAuthOutcome;
                typedef std::future<DescribeStreamAuthOutcome> DescribeStreamAuthOutcomeCallable;
                typedef std::function<void(const IssClient*, const Model::DescribeStreamAuthRequest&, DescribeStreamAuthOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeStreamAuthAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeTaskResponse> DescribeTaskOutcome;
                typedef std::future<DescribeTaskOutcome> DescribeTaskOutcomeCallable;
                typedef std::function<void(const IssClient*, const Model::DescribeTaskRequest&, DescribeTaskOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeTaskAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeUserDeviceResponse> DescribeUserDeviceOutcome;
                typedef std::future<DescribeUserDeviceOutcome> DescribeUserDeviceOutcomeCallable;
                typedef std::function<void(const IssClient*, const Model::DescribeUserDeviceRequest&, DescribeUserDeviceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeUserDeviceAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeVideoBitRateResponse> DescribeVideoBitRateOutcome;
                typedef std::future<DescribeVideoBitRateOutcome> DescribeVideoBitRateOutcomeCallable;
                typedef std::function<void(const IssClient*, const Model::DescribeVideoBitRateRequest&, DescribeVideoBitRateOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeVideoBitRateAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeVideoDownloadUrlResponse> DescribeVideoDownloadUrlOutcome;
                typedef std::future<DescribeVideoDownloadUrlOutcome> DescribeVideoDownloadUrlOutcomeCallable;
                typedef std::function<void(const IssClient*, const Model::DescribeVideoDownloadUrlRequest&, DescribeVideoDownloadUrlOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeVideoDownloadUrlAsyncHandler;
                typedef Outcome<Core::Error, Model::ListAITasksResponse> ListAITasksOutcome;
                typedef std::future<ListAITasksOutcome> ListAITasksOutcomeCallable;
                typedef std::function<void(const IssClient*, const Model::ListAITasksRequest&, ListAITasksOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ListAITasksAsyncHandler;
                typedef Outcome<Core::Error, Model::ListDeviceSnapshotsResponse> ListDeviceSnapshotsOutcome;
                typedef std::future<ListDeviceSnapshotsOutcome> ListDeviceSnapshotsOutcomeCallable;
                typedef std::function<void(const IssClient*, const Model::ListDeviceSnapshotsRequest&, ListDeviceSnapshotsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ListDeviceSnapshotsAsyncHandler;
                typedef Outcome<Core::Error, Model::ListDevicesResponse> ListDevicesOutcome;
                typedef std::future<ListDevicesOutcome> ListDevicesOutcomeCallable;
                typedef std::function<void(const IssClient*, const Model::ListDevicesRequest&, ListDevicesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ListDevicesAsyncHandler;
                typedef Outcome<Core::Error, Model::ListGatewayDevicesResponse> ListGatewayDevicesOutcome;
                typedef std::future<ListGatewayDevicesOutcome> ListGatewayDevicesOutcomeCallable;
                typedef std::function<void(const IssClient*, const Model::ListGatewayDevicesRequest&, ListGatewayDevicesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ListGatewayDevicesAsyncHandler;
                typedef Outcome<Core::Error, Model::ListGatewaysResponse> ListGatewaysOutcome;
                typedef std::future<ListGatewaysOutcome> ListGatewaysOutcomeCallable;
                typedef std::function<void(const IssClient*, const Model::ListGatewaysRequest&, ListGatewaysOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ListGatewaysAsyncHandler;
                typedef Outcome<Core::Error, Model::ListOrganizationChannelNumbersResponse> ListOrganizationChannelNumbersOutcome;
                typedef std::future<ListOrganizationChannelNumbersOutcome> ListOrganizationChannelNumbersOutcomeCallable;
                typedef std::function<void(const IssClient*, const Model::ListOrganizationChannelNumbersRequest&, ListOrganizationChannelNumbersOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ListOrganizationChannelNumbersAsyncHandler;
                typedef Outcome<Core::Error, Model::ListOrganizationChannelsResponse> ListOrganizationChannelsOutcome;
                typedef std::future<ListOrganizationChannelsOutcome> ListOrganizationChannelsOutcomeCallable;
                typedef std::function<void(const IssClient*, const Model::ListOrganizationChannelsRequest&, ListOrganizationChannelsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ListOrganizationChannelsAsyncHandler;
                typedef Outcome<Core::Error, Model::ListRecordBackupPlanDevicesResponse> ListRecordBackupPlanDevicesOutcome;
                typedef std::future<ListRecordBackupPlanDevicesOutcome> ListRecordBackupPlanDevicesOutcomeCallable;
                typedef std::function<void(const IssClient*, const Model::ListRecordBackupPlanDevicesRequest&, ListRecordBackupPlanDevicesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ListRecordBackupPlanDevicesAsyncHandler;
                typedef Outcome<Core::Error, Model::ListRecordBackupPlansResponse> ListRecordBackupPlansOutcome;
                typedef std::future<ListRecordBackupPlansOutcome> ListRecordBackupPlansOutcomeCallable;
                typedef std::function<void(const IssClient*, const Model::ListRecordBackupPlansRequest&, ListRecordBackupPlansOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ListRecordBackupPlansAsyncHandler;
                typedef Outcome<Core::Error, Model::ListRecordBackupTemplatesResponse> ListRecordBackupTemplatesOutcome;
                typedef std::future<ListRecordBackupTemplatesOutcome> ListRecordBackupTemplatesOutcomeCallable;
                typedef std::function<void(const IssClient*, const Model::ListRecordBackupTemplatesRequest&, ListRecordBackupTemplatesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ListRecordBackupTemplatesAsyncHandler;
                typedef Outcome<Core::Error, Model::ListRecordPlanChannelsResponse> ListRecordPlanChannelsOutcome;
                typedef std::future<ListRecordPlanChannelsOutcome> ListRecordPlanChannelsOutcomeCallable;
                typedef std::function<void(const IssClient*, const Model::ListRecordPlanChannelsRequest&, ListRecordPlanChannelsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ListRecordPlanChannelsAsyncHandler;
                typedef Outcome<Core::Error, Model::ListRecordPlanDevicesResponse> ListRecordPlanDevicesOutcome;
                typedef std::future<ListRecordPlanDevicesOutcome> ListRecordPlanDevicesOutcomeCallable;
                typedef std::function<void(const IssClient*, const Model::ListRecordPlanDevicesRequest&, ListRecordPlanDevicesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ListRecordPlanDevicesAsyncHandler;
                typedef Outcome<Core::Error, Model::ListRecordPlansResponse> ListRecordPlansOutcome;
                typedef std::future<ListRecordPlansOutcome> ListRecordPlansOutcomeCallable;
                typedef std::function<void(const IssClient*, const Model::ListRecordPlansRequest&, ListRecordPlansOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ListRecordPlansAsyncHandler;
                typedef Outcome<Core::Error, Model::ListRecordRetrieveTasksResponse> ListRecordRetrieveTasksOutcome;
                typedef std::future<ListRecordRetrieveTasksOutcome> ListRecordRetrieveTasksOutcomeCallable;
                typedef std::function<void(const IssClient*, const Model::ListRecordRetrieveTasksRequest&, ListRecordRetrieveTasksOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ListRecordRetrieveTasksAsyncHandler;
                typedef Outcome<Core::Error, Model::ListRecordTemplatesResponse> ListRecordTemplatesOutcome;
                typedef std::future<ListRecordTemplatesOutcome> ListRecordTemplatesOutcomeCallable;
                typedef std::function<void(const IssClient*, const Model::ListRecordTemplatesRequest&, ListRecordTemplatesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ListRecordTemplatesAsyncHandler;
                typedef Outcome<Core::Error, Model::ListSubTasksResponse> ListSubTasksOutcome;
                typedef std::future<ListSubTasksOutcome> ListSubTasksOutcomeCallable;
                typedef std::function<void(const IssClient*, const Model::ListSubTasksRequest&, ListSubTasksOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ListSubTasksAsyncHandler;
                typedef Outcome<Core::Error, Model::ListTasksResponse> ListTasksOutcome;
                typedef std::future<ListTasksOutcome> ListTasksOutcomeCallable;
                typedef std::function<void(const IssClient*, const Model::ListTasksRequest&, ListTasksOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ListTasksAsyncHandler;
                typedef Outcome<Core::Error, Model::ListVideoDownloadTaskResponse> ListVideoDownloadTaskOutcome;
                typedef std::future<ListVideoDownloadTaskOutcome> ListVideoDownloadTaskOutcomeCallable;
                typedef std::function<void(const IssClient*, const Model::ListVideoDownloadTaskRequest&, ListVideoDownloadTaskOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ListVideoDownloadTaskAsyncHandler;
                typedef Outcome<Core::Error, Model::PlayRecordResponse> PlayRecordOutcome;
                typedef std::future<PlayRecordOutcome> PlayRecordOutcomeCallable;
                typedef std::function<void(const IssClient*, const Model::PlayRecordRequest&, PlayRecordOutcome, const std::shared_ptr<const AsyncCallerContext>&)> PlayRecordAsyncHandler;
                typedef Outcome<Core::Error, Model::QueryForbidPlayChannelListResponse> QueryForbidPlayChannelListOutcome;
                typedef std::future<QueryForbidPlayChannelListOutcome> QueryForbidPlayChannelListOutcomeCallable;
                typedef std::function<void(const IssClient*, const Model::QueryForbidPlayChannelListRequest&, QueryForbidPlayChannelListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> QueryForbidPlayChannelListAsyncHandler;
                typedef Outcome<Core::Error, Model::RefreshDeviceChannelResponse> RefreshDeviceChannelOutcome;
                typedef std::future<RefreshDeviceChannelOutcome> RefreshDeviceChannelOutcomeCallable;
                typedef std::function<void(const IssClient*, const Model::RefreshDeviceChannelRequest&, RefreshDeviceChannelOutcome, const std::shared_ptr<const AsyncCallerContext>&)> RefreshDeviceChannelAsyncHandler;
                typedef Outcome<Core::Error, Model::SetForbidPlayChannelsResponse> SetForbidPlayChannelsOutcome;
                typedef std::future<SetForbidPlayChannelsOutcome> SetForbidPlayChannelsOutcomeCallable;
                typedef std::function<void(const IssClient*, const Model::SetForbidPlayChannelsRequest&, SetForbidPlayChannelsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> SetForbidPlayChannelsAsyncHandler;
                typedef Outcome<Core::Error, Model::UpdateAITaskResponse> UpdateAITaskOutcome;
                typedef std::future<UpdateAITaskOutcome> UpdateAITaskOutcomeCallable;
                typedef std::function<void(const IssClient*, const Model::UpdateAITaskRequest&, UpdateAITaskOutcome, const std::shared_ptr<const AsyncCallerContext>&)> UpdateAITaskAsyncHandler;
                typedef Outcome<Core::Error, Model::UpdateAITaskStatusResponse> UpdateAITaskStatusOutcome;
                typedef std::future<UpdateAITaskStatusOutcome> UpdateAITaskStatusOutcomeCallable;
                typedef std::function<void(const IssClient*, const Model::UpdateAITaskStatusRequest&, UpdateAITaskStatusOutcome, const std::shared_ptr<const AsyncCallerContext>&)> UpdateAITaskStatusAsyncHandler;
                typedef Outcome<Core::Error, Model::UpdateDeviceOrganizationResponse> UpdateDeviceOrganizationOutcome;
                typedef std::future<UpdateDeviceOrganizationOutcome> UpdateDeviceOrganizationOutcomeCallable;
                typedef std::function<void(const IssClient*, const Model::UpdateDeviceOrganizationRequest&, UpdateDeviceOrganizationOutcome, const std::shared_ptr<const AsyncCallerContext>&)> UpdateDeviceOrganizationAsyncHandler;
                typedef Outcome<Core::Error, Model::UpdateDeviceStatusResponse> UpdateDeviceStatusOutcome;
                typedef std::future<UpdateDeviceStatusOutcome> UpdateDeviceStatusOutcomeCallable;
                typedef std::function<void(const IssClient*, const Model::UpdateDeviceStatusRequest&, UpdateDeviceStatusOutcome, const std::shared_ptr<const AsyncCallerContext>&)> UpdateDeviceStatusAsyncHandler;
                typedef Outcome<Core::Error, Model::UpdateGatewayResponse> UpdateGatewayOutcome;
                typedef std::future<UpdateGatewayOutcome> UpdateGatewayOutcomeCallable;
                typedef std::function<void(const IssClient*, const Model::UpdateGatewayRequest&, UpdateGatewayOutcome, const std::shared_ptr<const AsyncCallerContext>&)> UpdateGatewayAsyncHandler;
                typedef Outcome<Core::Error, Model::UpdateOrganizationResponse> UpdateOrganizationOutcome;
                typedef std::future<UpdateOrganizationOutcome> UpdateOrganizationOutcomeCallable;
                typedef std::function<void(const IssClient*, const Model::UpdateOrganizationRequest&, UpdateOrganizationOutcome, const std::shared_ptr<const AsyncCallerContext>&)> UpdateOrganizationAsyncHandler;
                typedef Outcome<Core::Error, Model::UpdateRecordBackupPlanResponse> UpdateRecordBackupPlanOutcome;
                typedef std::future<UpdateRecordBackupPlanOutcome> UpdateRecordBackupPlanOutcomeCallable;
                typedef std::function<void(const IssClient*, const Model::UpdateRecordBackupPlanRequest&, UpdateRecordBackupPlanOutcome, const std::shared_ptr<const AsyncCallerContext>&)> UpdateRecordBackupPlanAsyncHandler;
                typedef Outcome<Core::Error, Model::UpdateRecordBackupTemplateResponse> UpdateRecordBackupTemplateOutcome;
                typedef std::future<UpdateRecordBackupTemplateOutcome> UpdateRecordBackupTemplateOutcomeCallable;
                typedef std::function<void(const IssClient*, const Model::UpdateRecordBackupTemplateRequest&, UpdateRecordBackupTemplateOutcome, const std::shared_ptr<const AsyncCallerContext>&)> UpdateRecordBackupTemplateAsyncHandler;
                typedef Outcome<Core::Error, Model::UpdateRecordPlanResponse> UpdateRecordPlanOutcome;
                typedef std::future<UpdateRecordPlanOutcome> UpdateRecordPlanOutcomeCallable;
                typedef std::function<void(const IssClient*, const Model::UpdateRecordPlanRequest&, UpdateRecordPlanOutcome, const std::shared_ptr<const AsyncCallerContext>&)> UpdateRecordPlanAsyncHandler;
                typedef Outcome<Core::Error, Model::UpdateRecordTemplateResponse> UpdateRecordTemplateOutcome;
                typedef std::future<UpdateRecordTemplateOutcome> UpdateRecordTemplateOutcomeCallable;
                typedef std::function<void(const IssClient*, const Model::UpdateRecordTemplateRequest&, UpdateRecordTemplateOutcome, const std::shared_ptr<const AsyncCallerContext>&)> UpdateRecordTemplateAsyncHandler;
                typedef Outcome<Core::Error, Model::UpdateUserDeviceResponse> UpdateUserDeviceOutcome;
                typedef std::future<UpdateUserDeviceOutcome> UpdateUserDeviceOutcomeCallable;
                typedef std::function<void(const IssClient*, const Model::UpdateUserDeviceRequest&, UpdateUserDeviceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> UpdateUserDeviceAsyncHandler;
                typedef Outcome<Core::Error, Model::UpgradeGatewayResponse> UpgradeGatewayOutcome;
                typedef std::future<UpgradeGatewayOutcome> UpgradeGatewayOutcomeCallable;
                typedef std::function<void(const IssClient*, const Model::UpgradeGatewayRequest&, UpgradeGatewayOutcome, const std::shared_ptr<const AsyncCallerContext>&)> UpgradeGatewayAsyncHandler;



                /**
                 *添加AI任务
                 * @param req AddAITaskRequest
                 * @return AddAITaskOutcome
                 */
                AddAITaskOutcome AddAITask(const Model::AddAITaskRequest &request);
                void AddAITaskAsync(const Model::AddAITaskRequest& request, const AddAITaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                AddAITaskOutcomeCallable AddAITaskCallable(const Model::AddAITaskRequest& request);

                /**
                 *用于新增组织。
                 * @param req AddOrganizationRequest
                 * @return AddOrganizationOutcome
                 */
                AddOrganizationOutcome AddOrganization(const Model::AddOrganizationRequest &request);
                void AddOrganizationAsync(const Model::AddOrganizationRequest& request, const AddOrganizationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                AddOrganizationOutcomeCallable AddOrganizationCallable(const Model::AddOrganizationRequest& request);

                /**
                 *用于新增录像上云计划 （当前仅适用于通过GB28181协议和网关接入的设备/视频通道）
                 * @param req AddRecordBackupPlanRequest
                 * @return AddRecordBackupPlanOutcome
                 */
                AddRecordBackupPlanOutcome AddRecordBackupPlan(const Model::AddRecordBackupPlanRequest &request);
                void AddRecordBackupPlanAsync(const Model::AddRecordBackupPlanRequest& request, const AddRecordBackupPlanAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                AddRecordBackupPlanOutcomeCallable AddRecordBackupPlanCallable(const Model::AddRecordBackupPlanRequest& request);

                /**
                 *用于新增录像上云模板。
> 该功能本质是拉取设备本地录像数据上云（即存在 IPC 摄像头存储卡或 NVR 硬盘中的录像），操作时需先设定录像时间段（即想要上云的设备本地录像），再设定上云时间段和上云倍速，平台将于上云时间段倍速拉取设备对应前一天的录像时间段数据。

> 设定需至少满足（上云时间段=前一天的录像时间段/上云倍速），建议上云时间段可多设定10%左右的时间，避免因网络波动导致数据拉取不完整。
                 * @param req AddRecordBackupTemplateRequest
                 * @return AddRecordBackupTemplateOutcome
                 */
                AddRecordBackupTemplateOutcome AddRecordBackupTemplate(const Model::AddRecordBackupTemplateRequest &request);
                void AddRecordBackupTemplateAsync(const Model::AddRecordBackupTemplateRequest& request, const AddRecordBackupTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                AddRecordBackupTemplateOutcomeCallable AddRecordBackupTemplateCallable(const Model::AddRecordBackupTemplateRequest& request);

                /**
                 *用于新增实时上云计划
                 * @param req AddRecordPlanRequest
                 * @return AddRecordPlanOutcome
                 */
                AddRecordPlanOutcome AddRecordPlan(const Model::AddRecordPlanRequest &request);
                void AddRecordPlanAsync(const Model::AddRecordPlanRequest& request, const AddRecordPlanAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                AddRecordPlanOutcomeCallable AddRecordPlanCallable(const Model::AddRecordPlanRequest& request);

                /**
                 *用于新建取回任务
                 * @param req AddRecordRetrieveTaskRequest
                 * @return AddRecordRetrieveTaskOutcome
                 */
                AddRecordRetrieveTaskOutcome AddRecordRetrieveTask(const Model::AddRecordRetrieveTaskRequest &request);
                void AddRecordRetrieveTaskAsync(const Model::AddRecordRetrieveTaskRequest& request, const AddRecordRetrieveTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                AddRecordRetrieveTaskOutcomeCallable AddRecordRetrieveTaskCallable(const Model::AddRecordRetrieveTaskRequest& request);

                /**
                 *用于新增实时上云模板
                 * @param req AddRecordTemplateRequest
                 * @return AddRecordTemplateOutcome
                 */
                AddRecordTemplateOutcome AddRecordTemplate(const Model::AddRecordTemplateRequest &request);
                void AddRecordTemplateAsync(const Model::AddRecordTemplateRequest& request, const AddRecordTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                AddRecordTemplateOutcomeCallable AddRecordTemplateCallable(const Model::AddRecordTemplateRequest& request);

                /**
                 *用于设置推拉流鉴权配置。
                 * @param req AddStreamAuthRequest
                 * @return AddStreamAuthOutcome
                 */
                AddStreamAuthOutcome AddStreamAuth(const Model::AddStreamAuthRequest &request);
                void AddStreamAuthAsync(const Model::AddStreamAuthRequest& request, const AddStreamAuthAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                AddStreamAuthOutcomeCallable AddStreamAuthCallable(const Model::AddStreamAuthRequest& request);

                /**
                 *用于新增单个设备。添加设备之后，可根据返回结果到设备上进行配置，配置后等待设备注册/推流。
                 * @param req AddUserDeviceRequest
                 * @return AddUserDeviceOutcome
                 */
                AddUserDeviceOutcome AddUserDevice(const Model::AddUserDeviceRequest &request);
                void AddUserDeviceAsync(const Model::AddUserDeviceRequest& request, const AddUserDeviceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                AddUserDeviceOutcomeCallable AddUserDeviceCallable(const Model::AddUserDeviceRequest& request);

                /**
                 *用于批量删除本地录像下载失败的任务
                 * @param req BatchDeleteVideoDownloadTaskRequest
                 * @return BatchDeleteVideoDownloadTaskOutcome
                 */
                BatchDeleteVideoDownloadTaskOutcome BatchDeleteVideoDownloadTask(const Model::BatchDeleteVideoDownloadTaskRequest &request);
                void BatchDeleteVideoDownloadTaskAsync(const Model::BatchDeleteVideoDownloadTaskRequest& request, const BatchDeleteVideoDownloadTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                BatchDeleteVideoDownloadTaskOutcomeCallable BatchDeleteVideoDownloadTaskCallable(const Model::BatchDeleteVideoDownloadTaskRequest& request);

                /**
                 *用于批量操作（启用，禁用，删除）设备
                 * @param req BatchOperateDeviceRequest
                 * @return BatchOperateDeviceOutcome
                 */
                BatchOperateDeviceOutcome BatchOperateDevice(const Model::BatchOperateDeviceRequest &request);
                void BatchOperateDeviceAsync(const Model::BatchOperateDeviceRequest& request, const BatchOperateDeviceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                BatchOperateDeviceOutcomeCallable BatchOperateDeviceCallable(const Model::BatchOperateDeviceRequest& request);

                /**
                 *本接口可基于海康ISUP 5.0协议实现透传ISAPI的请求数据，调用接口前需确保设备采用ISUP协议成功注册至本平台
                 * @param req CallISAPIRequest
                 * @return CallISAPIOutcome
                 */
                CallISAPIOutcome CallISAPI(const Model::CallISAPIRequest &request);
                void CallISAPIAsync(const Model::CallISAPIRequest& request, const CallISAPIAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CallISAPIOutcomeCallable CallISAPICallable(const Model::CallISAPIRequest& request);

                /**
                 *用于设备通道云台控制，包括转动、变倍、变焦、光圈等。
                 * @param req ControlDevicePTZRequest
                 * @return ControlDevicePTZOutcome
                 */
                ControlDevicePTZOutcome ControlDevicePTZ(const Model::ControlDevicePTZRequest &request);
                void ControlDevicePTZAsync(const Model::ControlDevicePTZRequest& request, const ControlDevicePTZAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ControlDevicePTZOutcomeCallable ControlDevicePTZCallable(const Model::ControlDevicePTZRequest& request);

                /**
                 *用于操作设备预置位，包括设置、删除、调用。
                 * @param req ControlDevicePresetRequest
                 * @return ControlDevicePresetOutcome
                 */
                ControlDevicePresetOutcome ControlDevicePreset(const Model::ControlDevicePresetRequest &request);
                void ControlDevicePresetAsync(const Model::ControlDevicePresetRequest& request, const ControlDevicePresetAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ControlDevicePresetOutcomeCallable ControlDevicePresetCallable(const Model::ControlDevicePresetRequest& request);

                /**
                 *控制设备抓拍--单次，当前仅支持国标设备
                 * @param req ControlDeviceSnapshotRequest
                 * @return ControlDeviceSnapshotOutcome
                 */
                ControlDeviceSnapshotOutcome ControlDeviceSnapshot(const Model::ControlDeviceSnapshotRequest &request);
                void ControlDeviceSnapshotAsync(const Model::ControlDeviceSnapshotRequest& request, const ControlDeviceSnapshotAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ControlDeviceSnapshotOutcomeCallable ControlDeviceSnapshotCallable(const Model::ControlDeviceSnapshotRequest& request);

                /**
                 *用于获取设备的实时开流地址。
                 * @param req ControlDeviceStreamRequest
                 * @return ControlDeviceStreamOutcome
                 */
                ControlDeviceStreamOutcome ControlDeviceStream(const Model::ControlDeviceStreamRequest &request);
                void ControlDeviceStreamAsync(const Model::ControlDeviceStreamRequest& request, const ControlDeviceStreamAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ControlDeviceStreamOutcomeCallable ControlDeviceStreamCallable(const Model::ControlDeviceStreamRequest& request);

                /**
                 *用于录像回放过程中的倍速、跳转、播放/暂停/停止等控制。
                 * @param req ControlRecordRequest
                 * @return ControlRecordOutcome
                 */
                ControlRecordOutcome ControlRecord(const Model::ControlRecordRequest &request);
                void ControlRecordAsync(const Model::ControlRecordRequest& request, const ControlRecordAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ControlRecordOutcomeCallable ControlRecordCallable(const Model::ControlRecordRequest& request);

                /**
                 *用于查询设备本地录像时间轴信息，为NVR/IPC本地存储的录像。
                 * @param req ControlRecordTimelineRequest
                 * @return ControlRecordTimelineOutcome
                 */
                ControlRecordTimelineOutcome ControlRecordTimeline(const Model::ControlRecordTimelineRequest &request);
                void ControlRecordTimelineAsync(const Model::ControlRecordTimelineRequest& request, const ControlRecordTimelineAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ControlRecordTimelineOutcomeCallable ControlRecordTimelineCallable(const Model::ControlRecordTimelineRequest& request);

                /**
                 *创建本地录像下载任务
                 * @param req CreateVideoDownloadTaskRequest
                 * @return CreateVideoDownloadTaskOutcome
                 */
                CreateVideoDownloadTaskOutcome CreateVideoDownloadTask(const Model::CreateVideoDownloadTaskRequest &request);
                void CreateVideoDownloadTaskAsync(const Model::CreateVideoDownloadTaskRequest& request, const CreateVideoDownloadTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateVideoDownloadTaskOutcomeCallable CreateVideoDownloadTaskCallable(const Model::CreateVideoDownloadTaskRequest& request);

                /**
                 *删除AI任务
                 * @param req DeleteAITaskRequest
                 * @return DeleteAITaskOutcome
                 */
                DeleteAITaskOutcome DeleteAITask(const Model::DeleteAITaskRequest &request);
                void DeleteAITaskAsync(const Model::DeleteAITaskRequest& request, const DeleteAITaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteAITaskOutcomeCallable DeleteAITaskCallable(const Model::DeleteAITaskRequest& request);

                /**
                 *用于删除域名。
                 * @param req DeleteDomainRequest
                 * @return DeleteDomainOutcome
                 */
                DeleteDomainOutcome DeleteDomain(const Model::DeleteDomainRequest &request);
                void DeleteDomainAsync(const Model::DeleteDomainRequest& request, const DeleteDomainAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteDomainOutcomeCallable DeleteDomainCallable(const Model::DeleteDomainRequest& request);

                /**
                 *用于删除网关。
                 * @param req DeleteGatewayRequest
                 * @return DeleteGatewayOutcome
                 */
                DeleteGatewayOutcome DeleteGateway(const Model::DeleteGatewayRequest &request);
                void DeleteGatewayAsync(const Model::DeleteGatewayRequest& request, const DeleteGatewayAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteGatewayOutcomeCallable DeleteGatewayCallable(const Model::DeleteGatewayRequest& request);

                /**
                 *用于删除组织。
                 * @param req DeleteOrganizationRequest
                 * @return DeleteOrganizationOutcome
                 */
                DeleteOrganizationOutcome DeleteOrganization(const Model::DeleteOrganizationRequest &request);
                void DeleteOrganizationAsync(const Model::DeleteOrganizationRequest& request, const DeleteOrganizationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteOrganizationOutcomeCallable DeleteOrganizationCallable(const Model::DeleteOrganizationRequest& request);

                /**
                 *用于删除录像上云模板。
                 * @param req DeleteRecordBackupPlanRequest
                 * @return DeleteRecordBackupPlanOutcome
                 */
                DeleteRecordBackupPlanOutcome DeleteRecordBackupPlan(const Model::DeleteRecordBackupPlanRequest &request);
                void DeleteRecordBackupPlanAsync(const Model::DeleteRecordBackupPlanRequest& request, const DeleteRecordBackupPlanAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteRecordBackupPlanOutcomeCallable DeleteRecordBackupPlanCallable(const Model::DeleteRecordBackupPlanRequest& request);

                /**
                 *用于删除录像上云模板。
                 * @param req DeleteRecordBackupTemplateRequest
                 * @return DeleteRecordBackupTemplateOutcome
                 */
                DeleteRecordBackupTemplateOutcome DeleteRecordBackupTemplate(const Model::DeleteRecordBackupTemplateRequest &request);
                void DeleteRecordBackupTemplateAsync(const Model::DeleteRecordBackupTemplateRequest& request, const DeleteRecordBackupTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteRecordBackupTemplateOutcomeCallable DeleteRecordBackupTemplateCallable(const Model::DeleteRecordBackupTemplateRequest& request);

                /**
                 *用于删除实时上云计划
                 * @param req DeleteRecordPlanRequest
                 * @return DeleteRecordPlanOutcome
                 */
                DeleteRecordPlanOutcome DeleteRecordPlan(const Model::DeleteRecordPlanRequest &request);
                void DeleteRecordPlanAsync(const Model::DeleteRecordPlanRequest& request, const DeleteRecordPlanAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteRecordPlanOutcomeCallable DeleteRecordPlanCallable(const Model::DeleteRecordPlanRequest& request);

                /**
                 *用于删除取回任务
                 * @param req DeleteRecordRetrieveTaskRequest
                 * @return DeleteRecordRetrieveTaskOutcome
                 */
                DeleteRecordRetrieveTaskOutcome DeleteRecordRetrieveTask(const Model::DeleteRecordRetrieveTaskRequest &request);
                void DeleteRecordRetrieveTaskAsync(const Model::DeleteRecordRetrieveTaskRequest& request, const DeleteRecordRetrieveTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteRecordRetrieveTaskOutcomeCallable DeleteRecordRetrieveTaskCallable(const Model::DeleteRecordRetrieveTaskRequest& request);

                /**
                 *用于删除实时上云模板
                 * @param req DeleteRecordTemplateRequest
                 * @return DeleteRecordTemplateOutcome
                 */
                DeleteRecordTemplateOutcome DeleteRecordTemplate(const Model::DeleteRecordTemplateRequest &request);
                void DeleteRecordTemplateAsync(const Model::DeleteRecordTemplateRequest& request, const DeleteRecordTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteRecordTemplateOutcomeCallable DeleteRecordTemplateCallable(const Model::DeleteRecordTemplateRequest& request);

                /**
                 *用于删除执行完成的任务
                 * @param req DeleteTaskRequest
                 * @return DeleteTaskOutcome
                 */
                DeleteTaskOutcome DeleteTask(const Model::DeleteTaskRequest &request);
                void DeleteTaskAsync(const Model::DeleteTaskRequest& request, const DeleteTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteTaskOutcomeCallable DeleteTaskCallable(const Model::DeleteTaskRequest& request);

                /**
                 *用于删除已添加的设备。
                 * @param req DeleteUserDeviceRequest
                 * @return DeleteUserDeviceOutcome
                 */
                DeleteUserDeviceOutcome DeleteUserDevice(const Model::DeleteUserDeviceRequest &request);
                void DeleteUserDeviceAsync(const Model::DeleteUserDeviceRequest& request, const DeleteUserDeviceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteUserDeviceOutcomeCallable DeleteUserDeviceCallable(const Model::DeleteUserDeviceRequest& request);

                /**
                 *获取AI任务详情
                 * @param req DescribeAITaskRequest
                 * @return DescribeAITaskOutcome
                 */
                DescribeAITaskOutcome DescribeAITask(const Model::DescribeAITaskRequest &request);
                void DescribeAITaskAsync(const Model::DescribeAITaskRequest& request, const DescribeAITaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeAITaskOutcomeCallable DescribeAITaskCallable(const Model::DescribeAITaskRequest& request);

                /**
                 *获取AI任务识别结果
                 * @param req DescribeAITaskResultRequest
                 * @return DescribeAITaskResultOutcome
                 */
                DescribeAITaskResultOutcome DescribeAITaskResult(const Model::DescribeAITaskResultRequest &request);
                void DescribeAITaskResultAsync(const Model::DescribeAITaskResultRequest& request, const DescribeAITaskResultAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeAITaskResultOutcomeCallable DescribeAITaskResultCallable(const Model::DescribeAITaskResultRequest& request);

                /**
                 *用于根据服务节点获取 CNAME 值。
                 * @param req DescribeCNAMERequest
                 * @return DescribeCNAMEOutcome
                 */
                DescribeCNAMEOutcome DescribeCNAME(const Model::DescribeCNAMERequest &request);
                void DescribeCNAMEAsync(const Model::DescribeCNAMERequest& request, const DescribeCNAMEAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeCNAMEOutcomeCallable DescribeCNAMECallable(const Model::DescribeCNAMERequest& request);

                /**
                 *用于查询设备的通道。
                 * @param req DescribeDeviceChannelRequest
                 * @return DescribeDeviceChannelOutcome
                 */
                DescribeDeviceChannelOutcome DescribeDeviceChannel(const Model::DescribeDeviceChannelRequest &request);
                void DescribeDeviceChannelAsync(const Model::DescribeDeviceChannelRequest& request, const DescribeDeviceChannelAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeDeviceChannelOutcomeCallable DescribeDeviceChannelCallable(const Model::DescribeDeviceChannelRequest& request);

                /**
                 *用于查询设备通道预置位信息。
                 * @param req DescribeDevicePresetRequest
                 * @return DescribeDevicePresetOutcome
                 */
                DescribeDevicePresetOutcome DescribeDevicePreset(const Model::DescribeDevicePresetRequest &request);
                void DescribeDevicePresetAsync(const Model::DescribeDevicePresetRequest& request, const DescribeDevicePresetAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeDevicePresetOutcomeCallable DescribeDevicePresetCallable(const Model::DescribeDevicePresetRequest& request);

                /**
                 *用于添加设备时，查询设备可以使用的服务节点，查询结果为已经绑定了域名的服务节点。
                 * @param req DescribeDeviceRegionRequest
                 * @return DescribeDeviceRegionOutcome
                 */
                DescribeDeviceRegionOutcome DescribeDeviceRegion(const Model::DescribeDeviceRegionRequest &request);
                void DescribeDeviceRegionAsync(const Model::DescribeDeviceRegionRequest& request, const DescribeDeviceRegionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeDeviceRegionOutcomeCallable DescribeDeviceRegionCallable(const Model::DescribeDeviceRegionRequest& request);

                /**
                 *用于查询添加的域名列表。
                 * @param req DescribeDomainRequest
                 * @return DescribeDomainOutcome
                 */
                DescribeDomainOutcome DescribeDomain(const Model::DescribeDomainRequest &request);
                void DescribeDomainAsync(const Model::DescribeDomainRequest& request, const DescribeDomainAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeDomainOutcomeCallable DescribeDomainCallable(const Model::DescribeDomainRequest& request);

                /**
                 *用于用户添加域名时，查询可以绑定的服务节点，结果为平台支持的所有服务节点。（注意：每个服务节点只能绑定一个域名）
                 * @param req DescribeDomainRegionRequest
                 * @return DescribeDomainRegionOutcome
                 */
                DescribeDomainRegionOutcome DescribeDomainRegion(const Model::DescribeDomainRegionRequest &request);
                void DescribeDomainRegionAsync(const Model::DescribeDomainRegionRequest& request, const DescribeDomainRegionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeDomainRegionOutcomeCallable DescribeDomainRegionCallable(const Model::DescribeDomainRegionRequest& request);

                /**
                 *用于获取国标设备的公网地址
                 * @param req DescribeGBDeviceAddrRequest
                 * @return DescribeGBDeviceAddrOutcome
                 */
                DescribeGBDeviceAddrOutcome DescribeGBDeviceAddr(const Model::DescribeGBDeviceAddrRequest &request);
                void DescribeGBDeviceAddrAsync(const Model::DescribeGBDeviceAddrRequest& request, const DescribeGBDeviceAddrAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeGBDeviceAddrOutcomeCallable DescribeGBDeviceAddrCallable(const Model::DescribeGBDeviceAddrRequest& request);

                /**
                 *用于获取网关详情。
                 * @param req DescribeGatewayRequest
                 * @return DescribeGatewayOutcome
                 */
                DescribeGatewayOutcome DescribeGateway(const Model::DescribeGatewayRequest &request);
                void DescribeGatewayAsync(const Model::DescribeGatewayRequest& request, const DescribeGatewayAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeGatewayOutcomeCallable DescribeGatewayCallable(const Model::DescribeGatewayRequest& request);

                /**
                 *用于获取网关的数据及流量监控信息。
                 * @param req DescribeGatewayMonitorRequest
                 * @return DescribeGatewayMonitorOutcome
                 */
                DescribeGatewayMonitorOutcome DescribeGatewayMonitor(const Model::DescribeGatewayMonitorRequest &request);
                void DescribeGatewayMonitorAsync(const Model::DescribeGatewayMonitorRequest& request, const DescribeGatewayMonitorAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeGatewayMonitorOutcomeCallable DescribeGatewayMonitorCallable(const Model::DescribeGatewayMonitorRequest& request);

                /**
                 *用于查询网关接入协议。
                 * @param req DescribeGatewayProtocolRequest
                 * @return DescribeGatewayProtocolOutcome
                 */
                DescribeGatewayProtocolOutcome DescribeGatewayProtocol(const Model::DescribeGatewayProtocolRequest &request);
                void DescribeGatewayProtocolAsync(const Model::DescribeGatewayProtocolRequest& request, const DescribeGatewayProtocolAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeGatewayProtocolOutcomeCallable DescribeGatewayProtocolCallable(const Model::DescribeGatewayProtocolRequest& request);

                /**
                 *查询网关服务版本
                 * @param req DescribeGatewayVersionRequest
                 * @return DescribeGatewayVersionOutcome
                 */
                DescribeGatewayVersionOutcome DescribeGatewayVersion(const Model::DescribeGatewayVersionRequest &request);
                void DescribeGatewayVersionAsync(const Model::DescribeGatewayVersionRequest& request, const DescribeGatewayVersionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeGatewayVersionOutcomeCallable DescribeGatewayVersionCallable(const Model::DescribeGatewayVersionRequest& request);

                /**
                 *用于查询组织。
                 * @param req DescribeOrganizationRequest
                 * @return DescribeOrganizationOutcome
                 */
                DescribeOrganizationOutcome DescribeOrganization(const Model::DescribeOrganizationRequest &request);
                void DescribeOrganizationAsync(const Model::DescribeOrganizationRequest& request, const DescribeOrganizationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeOrganizationOutcomeCallable DescribeOrganizationCallable(const Model::DescribeOrganizationRequest& request);

                /**
                 *用于查询录像上云计划详情。
                 * @param req DescribeRecordBackupPlanRequest
                 * @return DescribeRecordBackupPlanOutcome
                 */
                DescribeRecordBackupPlanOutcome DescribeRecordBackupPlan(const Model::DescribeRecordBackupPlanRequest &request);
                void DescribeRecordBackupPlanAsync(const Model::DescribeRecordBackupPlanRequest& request, const DescribeRecordBackupPlanAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeRecordBackupPlanOutcomeCallable DescribeRecordBackupPlanCallable(const Model::DescribeRecordBackupPlanRequest& request);

                /**
                 *用于查询录像上云模板详情。
                 * @param req DescribeRecordBackupTemplateRequest
                 * @return DescribeRecordBackupTemplateOutcome
                 */
                DescribeRecordBackupTemplateOutcome DescribeRecordBackupTemplate(const Model::DescribeRecordBackupTemplateRequest &request);
                void DescribeRecordBackupTemplateAsync(const Model::DescribeRecordBackupTemplateRequest& request, const DescribeRecordBackupTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeRecordBackupTemplateOutcomeCallable DescribeRecordBackupTemplateCallable(const Model::DescribeRecordBackupTemplateRequest& request);

                /**
                 *用于查询设备云端录像时间轴信息（即为视频上云后设置录像计划后云存储的录像）
                 * @param req DescribeRecordFileRequest
                 * @return DescribeRecordFileOutcome
                 */
                DescribeRecordFileOutcome DescribeRecordFile(const Model::DescribeRecordFileRequest &request);
                void DescribeRecordFileAsync(const Model::DescribeRecordFileRequest& request, const DescribeRecordFileAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeRecordFileOutcomeCallable DescribeRecordFileCallable(const Model::DescribeRecordFileRequest& request);

                /**
                 *用于查询实时上云计划详情
                 * @param req DescribeRecordPlanRequest
                 * @return DescribeRecordPlanOutcome
                 */
                DescribeRecordPlanOutcome DescribeRecordPlan(const Model::DescribeRecordPlanRequest &request);
                void DescribeRecordPlanAsync(const Model::DescribeRecordPlanRequest& request, const DescribeRecordPlanAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeRecordPlanOutcomeCallable DescribeRecordPlanCallable(const Model::DescribeRecordPlanRequest& request);

                /**
                 *用于获取云端录像回放url地址
                 * @param req DescribeRecordPlaybackUrlRequest
                 * @return DescribeRecordPlaybackUrlOutcome
                 */
                DescribeRecordPlaybackUrlOutcome DescribeRecordPlaybackUrl(const Model::DescribeRecordPlaybackUrlRequest &request);
                void DescribeRecordPlaybackUrlAsync(const Model::DescribeRecordPlaybackUrlRequest& request, const DescribeRecordPlaybackUrlAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeRecordPlaybackUrlOutcomeCallable DescribeRecordPlaybackUrlCallable(const Model::DescribeRecordPlaybackUrlRequest& request);

                /**
                 *用于查询云录像取回任务详情
                 * @param req DescribeRecordRetrieveTaskRequest
                 * @return DescribeRecordRetrieveTaskOutcome
                 */
                DescribeRecordRetrieveTaskOutcome DescribeRecordRetrieveTask(const Model::DescribeRecordRetrieveTaskRequest &request);
                void DescribeRecordRetrieveTaskAsync(const Model::DescribeRecordRetrieveTaskRequest& request, const DescribeRecordRetrieveTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeRecordRetrieveTaskOutcomeCallable DescribeRecordRetrieveTaskCallable(const Model::DescribeRecordRetrieveTaskRequest& request);

                /**
                 *平台支持将数据以TS切片的形式存入客户自有COS桶，该接口用于支持客户快捷查询切片信息列表
（注意：只支持标准存储类型的查询）
                 * @param req DescribeRecordSliceRequest
                 * @return DescribeRecordSliceOutcome
                 */
                DescribeRecordSliceOutcome DescribeRecordSlice(const Model::DescribeRecordSliceRequest &request);
                void DescribeRecordSliceAsync(const Model::DescribeRecordSliceRequest& request, const DescribeRecordSliceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeRecordSliceOutcomeCallable DescribeRecordSliceCallable(const Model::DescribeRecordSliceRequest& request);

                /**
                 *用于查询实时上云模板详情
                 * @param req DescribeRecordTemplateRequest
                 * @return DescribeRecordTemplateOutcome
                 */
                DescribeRecordTemplateOutcome DescribeRecordTemplate(const Model::DescribeRecordTemplateRequest &request);
                void DescribeRecordTemplateAsync(const Model::DescribeRecordTemplateRequest& request, const DescribeRecordTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeRecordTemplateOutcomeCallable DescribeRecordTemplateCallable(const Model::DescribeRecordTemplateRequest& request);

                /**
                 *用于查询推拉流鉴权配置。
                 * @param req DescribeStreamAuthRequest
                 * @return DescribeStreamAuthOutcome
                 */
                DescribeStreamAuthOutcome DescribeStreamAuth(const Model::DescribeStreamAuthRequest &request);
                void DescribeStreamAuthAsync(const Model::DescribeStreamAuthRequest& request, const DescribeStreamAuthAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeStreamAuthOutcomeCallable DescribeStreamAuthCallable(const Model::DescribeStreamAuthRequest& request);

                /**
                 *用于查询任务详情
                 * @param req DescribeTaskRequest
                 * @return DescribeTaskOutcome
                 */
                DescribeTaskOutcome DescribeTask(const Model::DescribeTaskRequest &request);
                void DescribeTaskAsync(const Model::DescribeTaskRequest& request, const DescribeTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeTaskOutcomeCallable DescribeTaskCallable(const Model::DescribeTaskRequest& request);

                /**
                 *用于查询设备的详细信息。
                 * @param req DescribeUserDeviceRequest
                 * @return DescribeUserDeviceOutcome
                 */
                DescribeUserDeviceOutcome DescribeUserDevice(const Model::DescribeUserDeviceRequest &request);
                void DescribeUserDeviceAsync(const Model::DescribeUserDeviceRequest& request, const DescribeUserDeviceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeUserDeviceOutcomeCallable DescribeUserDeviceCallable(const Model::DescribeUserDeviceRequest& request);

                /**
                 *用于获取视频通道的码率信息
                 * @param req DescribeVideoBitRateRequest
                 * @return DescribeVideoBitRateOutcome
                 */
                DescribeVideoBitRateOutcome DescribeVideoBitRate(const Model::DescribeVideoBitRateRequest &request);
                void DescribeVideoBitRateAsync(const Model::DescribeVideoBitRateRequest& request, const DescribeVideoBitRateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeVideoBitRateOutcomeCallable DescribeVideoBitRateCallable(const Model::DescribeVideoBitRateRequest& request);

                /**
                 *用于获取云录像下载 url
                 * @param req DescribeVideoDownloadUrlRequest
                 * @return DescribeVideoDownloadUrlOutcome
                 */
                DescribeVideoDownloadUrlOutcome DescribeVideoDownloadUrl(const Model::DescribeVideoDownloadUrlRequest &request);
                void DescribeVideoDownloadUrlAsync(const Model::DescribeVideoDownloadUrlRequest& request, const DescribeVideoDownloadUrlAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeVideoDownloadUrlOutcomeCallable DescribeVideoDownloadUrlCallable(const Model::DescribeVideoDownloadUrlRequest& request);

                /**
                 *获取AI任务列表
                 * @param req ListAITasksRequest
                 * @return ListAITasksOutcome
                 */
                ListAITasksOutcome ListAITasks(const Model::ListAITasksRequest &request);
                void ListAITasksAsync(const Model::ListAITasksRequest& request, const ListAITasksAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ListAITasksOutcomeCallable ListAITasksCallable(const Model::ListAITasksRequest& request);

                /**
                 *获取设备抓拍结果列表
                 * @param req ListDeviceSnapshotsRequest
                 * @return ListDeviceSnapshotsOutcome
                 */
                ListDeviceSnapshotsOutcome ListDeviceSnapshots(const Model::ListDeviceSnapshotsRequest &request);
                void ListDeviceSnapshotsAsync(const Model::ListDeviceSnapshotsRequest& request, const ListDeviceSnapshotsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ListDeviceSnapshotsOutcomeCallable ListDeviceSnapshotsCallable(const Model::ListDeviceSnapshotsRequest& request);

                /**
                 *用于获取对应组织下的设备列表。
                 * @param req ListDevicesRequest
                 * @return ListDevicesOutcome
                 */
                ListDevicesOutcome ListDevices(const Model::ListDevicesRequest &request);
                void ListDevicesAsync(const Model::ListDevicesRequest& request, const ListDevicesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ListDevicesOutcomeCallable ListDevicesCallable(const Model::ListDevicesRequest& request);

                /**
                 *用于查询网关下挂载的设备列表。
                 * @param req ListGatewayDevicesRequest
                 * @return ListGatewayDevicesOutcome
                 */
                ListGatewayDevicesOutcome ListGatewayDevices(const Model::ListGatewayDevicesRequest &request);
                void ListGatewayDevicesAsync(const Model::ListGatewayDevicesRequest& request, const ListGatewayDevicesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ListGatewayDevicesOutcomeCallable ListGatewayDevicesCallable(const Model::ListGatewayDevicesRequest& request);

                /**
                 *用于获取网关列表。
                 * @param req ListGatewaysRequest
                 * @return ListGatewaysOutcome
                 */
                ListGatewaysOutcome ListGateways(const Model::ListGatewaysRequest &request);
                void ListGatewaysAsync(const Model::ListGatewaysRequest& request, const ListGatewaysAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ListGatewaysOutcomeCallable ListGatewaysCallable(const Model::ListGatewaysRequest& request);

                /**
                 *用于查询组织目录下的未添加到实时上云计划中的通道数量
                 * @param req ListOrganizationChannelNumbersRequest
                 * @return ListOrganizationChannelNumbersOutcome
                 */
                ListOrganizationChannelNumbersOutcome ListOrganizationChannelNumbers(const Model::ListOrganizationChannelNumbersRequest &request);
                void ListOrganizationChannelNumbersAsync(const Model::ListOrganizationChannelNumbersRequest& request, const ListOrganizationChannelNumbersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ListOrganizationChannelNumbersOutcomeCallable ListOrganizationChannelNumbersCallable(const Model::ListOrganizationChannelNumbersRequest& request);

                /**
                 *用于查询组织目录下的通道列表
                 * @param req ListOrganizationChannelsRequest
                 * @return ListOrganizationChannelsOutcome
                 */
                ListOrganizationChannelsOutcome ListOrganizationChannels(const Model::ListOrganizationChannelsRequest &request);
                void ListOrganizationChannelsAsync(const Model::ListOrganizationChannelsRequest& request, const ListOrganizationChannelsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ListOrganizationChannelsOutcomeCallable ListOrganizationChannelsCallable(const Model::ListOrganizationChannelsRequest& request);

                /**
                 *用于查询录像上云计划下的设备通道列表。
                 * @param req ListRecordBackupPlanDevicesRequest
                 * @return ListRecordBackupPlanDevicesOutcome
                 */
                ListRecordBackupPlanDevicesOutcome ListRecordBackupPlanDevices(const Model::ListRecordBackupPlanDevicesRequest &request);
                void ListRecordBackupPlanDevicesAsync(const Model::ListRecordBackupPlanDevicesRequest& request, const ListRecordBackupPlanDevicesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ListRecordBackupPlanDevicesOutcomeCallable ListRecordBackupPlanDevicesCallable(const Model::ListRecordBackupPlanDevicesRequest& request);

                /**
                 *用于查询录像上云计划列表。
                 * @param req ListRecordBackupPlansRequest
                 * @return ListRecordBackupPlansOutcome
                 */
                ListRecordBackupPlansOutcome ListRecordBackupPlans(const Model::ListRecordBackupPlansRequest &request);
                void ListRecordBackupPlansAsync(const Model::ListRecordBackupPlansRequest& request, const ListRecordBackupPlansAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ListRecordBackupPlansOutcomeCallable ListRecordBackupPlansCallable(const Model::ListRecordBackupPlansRequest& request);

                /**
                 *用于查询录像上云模板列表。
                 * @param req ListRecordBackupTemplatesRequest
                 * @return ListRecordBackupTemplatesOutcome
                 */
                ListRecordBackupTemplatesOutcome ListRecordBackupTemplates(const Model::ListRecordBackupTemplatesRequest &request);
                void ListRecordBackupTemplatesAsync(const Model::ListRecordBackupTemplatesRequest& request, const ListRecordBackupTemplatesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ListRecordBackupTemplatesOutcomeCallable ListRecordBackupTemplatesCallable(const Model::ListRecordBackupTemplatesRequest& request);

                /**
                 *用于查询用户下所有实时上云计划中的通道列表
                 * @param req ListRecordPlanChannelsRequest
                 * @return ListRecordPlanChannelsOutcome
                 */
                ListRecordPlanChannelsOutcome ListRecordPlanChannels(const Model::ListRecordPlanChannelsRequest &request);
                void ListRecordPlanChannelsAsync(const Model::ListRecordPlanChannelsRequest& request, const ListRecordPlanChannelsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ListRecordPlanChannelsOutcomeCallable ListRecordPlanChannelsCallable(const Model::ListRecordPlanChannelsRequest& request);

                /**
                 *用于查询实时上云计划下的设备通道列表
                 * @param req ListRecordPlanDevicesRequest
                 * @return ListRecordPlanDevicesOutcome
                 */
                ListRecordPlanDevicesOutcome ListRecordPlanDevices(const Model::ListRecordPlanDevicesRequest &request);
                void ListRecordPlanDevicesAsync(const Model::ListRecordPlanDevicesRequest& request, const ListRecordPlanDevicesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ListRecordPlanDevicesOutcomeCallable ListRecordPlanDevicesCallable(const Model::ListRecordPlanDevicesRequest& request);

                /**
                 *用于查询实时上云计划列表
                 * @param req ListRecordPlansRequest
                 * @return ListRecordPlansOutcome
                 */
                ListRecordPlansOutcome ListRecordPlans(const Model::ListRecordPlansRequest &request);
                void ListRecordPlansAsync(const Model::ListRecordPlansRequest& request, const ListRecordPlansAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ListRecordPlansOutcomeCallable ListRecordPlansCallable(const Model::ListRecordPlansRequest& request);

                /**
                 *用于查询取回任务列表
                 * @param req ListRecordRetrieveTasksRequest
                 * @return ListRecordRetrieveTasksOutcome
                 */
                ListRecordRetrieveTasksOutcome ListRecordRetrieveTasks(const Model::ListRecordRetrieveTasksRequest &request);
                void ListRecordRetrieveTasksAsync(const Model::ListRecordRetrieveTasksRequest& request, const ListRecordRetrieveTasksAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ListRecordRetrieveTasksOutcomeCallable ListRecordRetrieveTasksCallable(const Model::ListRecordRetrieveTasksRequest& request);

                /**
                 *用于查询实时上云模板列表
                 * @param req ListRecordTemplatesRequest
                 * @return ListRecordTemplatesOutcome
                 */
                ListRecordTemplatesOutcome ListRecordTemplates(const Model::ListRecordTemplatesRequest &request);
                void ListRecordTemplatesAsync(const Model::ListRecordTemplatesRequest& request, const ListRecordTemplatesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ListRecordTemplatesOutcomeCallable ListRecordTemplatesCallable(const Model::ListRecordTemplatesRequest& request);

                /**
                 *用于查询任务的子任务列表
                 * @param req ListSubTasksRequest
                 * @return ListSubTasksOutcome
                 */
                ListSubTasksOutcome ListSubTasks(const Model::ListSubTasksRequest &request);
                void ListSubTasksAsync(const Model::ListSubTasksRequest& request, const ListSubTasksAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ListSubTasksOutcomeCallable ListSubTasksCallable(const Model::ListSubTasksRequest& request);

                /**
                 *用于查询批量任务和简单任务列表
                 * @param req ListTasksRequest
                 * @return ListTasksOutcome
                 */
                ListTasksOutcome ListTasks(const Model::ListTasksRequest &request);
                void ListTasksAsync(const Model::ListTasksRequest& request, const ListTasksAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ListTasksOutcomeCallable ListTasksCallable(const Model::ListTasksRequest& request);

                /**
                 *查询本店里录像下载任务列表
                 * @param req ListVideoDownloadTaskRequest
                 * @return ListVideoDownloadTaskOutcome
                 */
                ListVideoDownloadTaskOutcome ListVideoDownloadTask(const Model::ListVideoDownloadTaskRequest &request);
                void ListVideoDownloadTaskAsync(const Model::ListVideoDownloadTaskRequest& request, const ListVideoDownloadTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ListVideoDownloadTaskOutcomeCallable ListVideoDownloadTaskCallable(const Model::ListVideoDownloadTaskRequest& request);

                /**
                 *用于获取设备本地录像 URL 地址。
                 * @param req PlayRecordRequest
                 * @return PlayRecordOutcome
                 */
                PlayRecordOutcome PlayRecord(const Model::PlayRecordRequest &request);
                void PlayRecordAsync(const Model::PlayRecordRequest& request, const PlayRecordAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                PlayRecordOutcomeCallable PlayRecordCallable(const Model::PlayRecordRequest& request);

                /**
                 *查询禁播通道列表
                 * @param req QueryForbidPlayChannelListRequest
                 * @return QueryForbidPlayChannelListOutcome
                 */
                QueryForbidPlayChannelListOutcome QueryForbidPlayChannelList(const Model::QueryForbidPlayChannelListRequest &request);
                void QueryForbidPlayChannelListAsync(const Model::QueryForbidPlayChannelListRequest& request, const QueryForbidPlayChannelListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                QueryForbidPlayChannelListOutcomeCallable QueryForbidPlayChannelListCallable(const Model::QueryForbidPlayChannelListRequest& request);

                /**
                 *用于同步国标设备的通道（接口调用后，触发向设备请求通道列表，新增的通道入库，设备上已删除的通道需自行删除、后台不自动删除）。
                 * @param req RefreshDeviceChannelRequest
                 * @return RefreshDeviceChannelOutcome
                 */
                RefreshDeviceChannelOutcome RefreshDeviceChannel(const Model::RefreshDeviceChannelRequest &request);
                void RefreshDeviceChannelAsync(const Model::RefreshDeviceChannelRequest& request, const RefreshDeviceChannelAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                RefreshDeviceChannelOutcomeCallable RefreshDeviceChannelCallable(const Model::RefreshDeviceChannelRequest& request);

                /**
                 *禁止主、子账号对视频通道的实况预览
                 * @param req SetForbidPlayChannelsRequest
                 * @return SetForbidPlayChannelsOutcome
                 */
                SetForbidPlayChannelsOutcome SetForbidPlayChannels(const Model::SetForbidPlayChannelsRequest &request);
                void SetForbidPlayChannelsAsync(const Model::SetForbidPlayChannelsRequest& request, const SetForbidPlayChannelsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                SetForbidPlayChannelsOutcomeCallable SetForbidPlayChannelsCallable(const Model::SetForbidPlayChannelsRequest& request);

                /**
                 *更新AI任务
                 * @param req UpdateAITaskRequest
                 * @return UpdateAITaskOutcome
                 */
                UpdateAITaskOutcome UpdateAITask(const Model::UpdateAITaskRequest &request);
                void UpdateAITaskAsync(const Model::UpdateAITaskRequest& request, const UpdateAITaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                UpdateAITaskOutcomeCallable UpdateAITaskCallable(const Model::UpdateAITaskRequest& request);

                /**
                 *更新 AI 任务状态
                 * @param req UpdateAITaskStatusRequest
                 * @return UpdateAITaskStatusOutcome
                 */
                UpdateAITaskStatusOutcome UpdateAITaskStatus(const Model::UpdateAITaskStatusRequest &request);
                void UpdateAITaskStatusAsync(const Model::UpdateAITaskStatusRequest& request, const UpdateAITaskStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                UpdateAITaskStatusOutcomeCallable UpdateAITaskStatusCallable(const Model::UpdateAITaskStatusRequest& request);

                /**
                 *用于批量更改设备的组织。
                 * @param req UpdateDeviceOrganizationRequest
                 * @return UpdateDeviceOrganizationOutcome
                 */
                UpdateDeviceOrganizationOutcome UpdateDeviceOrganization(const Model::UpdateDeviceOrganizationRequest &request);
                void UpdateDeviceOrganizationAsync(const Model::UpdateDeviceOrganizationRequest& request, const UpdateDeviceOrganizationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                UpdateDeviceOrganizationOutcomeCallable UpdateDeviceOrganizationCallable(const Model::UpdateDeviceOrganizationRequest& request);

                /**
                 *用于启用/禁用设备，禁用后拒绝设备注册。
                 * @param req UpdateDeviceStatusRequest
                 * @return UpdateDeviceStatusOutcome
                 */
                UpdateDeviceStatusOutcome UpdateDeviceStatus(const Model::UpdateDeviceStatusRequest &request);
                void UpdateDeviceStatusAsync(const Model::UpdateDeviceStatusRequest& request, const UpdateDeviceStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                UpdateDeviceStatusOutcomeCallable UpdateDeviceStatusCallable(const Model::UpdateDeviceStatusRequest& request);

                /**
                 *用于修改网关信息（支持对网关名称和描述的修改）。
                 * @param req UpdateGatewayRequest
                 * @return UpdateGatewayOutcome
                 */
                UpdateGatewayOutcome UpdateGateway(const Model::UpdateGatewayRequest &request);
                void UpdateGatewayAsync(const Model::UpdateGatewayRequest& request, const UpdateGatewayAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                UpdateGatewayOutcomeCallable UpdateGatewayCallable(const Model::UpdateGatewayRequest& request);

                /**
                 *用于修改组织。
                 * @param req UpdateOrganizationRequest
                 * @return UpdateOrganizationOutcome
                 */
                UpdateOrganizationOutcome UpdateOrganization(const Model::UpdateOrganizationRequest &request);
                void UpdateOrganizationAsync(const Model::UpdateOrganizationRequest& request, const UpdateOrganizationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                UpdateOrganizationOutcomeCallable UpdateOrganizationCallable(const Model::UpdateOrganizationRequest& request);

                /**
                 *用于修改录像上云计划。
                 * @param req UpdateRecordBackupPlanRequest
                 * @return UpdateRecordBackupPlanOutcome
                 */
                UpdateRecordBackupPlanOutcome UpdateRecordBackupPlan(const Model::UpdateRecordBackupPlanRequest &request);
                void UpdateRecordBackupPlanAsync(const Model::UpdateRecordBackupPlanRequest& request, const UpdateRecordBackupPlanAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                UpdateRecordBackupPlanOutcomeCallable UpdateRecordBackupPlanCallable(const Model::UpdateRecordBackupPlanRequest& request);

                /**
                 *用于修改录像上云模板。
                 * @param req UpdateRecordBackupTemplateRequest
                 * @return UpdateRecordBackupTemplateOutcome
                 */
                UpdateRecordBackupTemplateOutcome UpdateRecordBackupTemplate(const Model::UpdateRecordBackupTemplateRequest &request);
                void UpdateRecordBackupTemplateAsync(const Model::UpdateRecordBackupTemplateRequest& request, const UpdateRecordBackupTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                UpdateRecordBackupTemplateOutcomeCallable UpdateRecordBackupTemplateCallable(const Model::UpdateRecordBackupTemplateRequest& request);

                /**
                 *用于修改实时上云计划
                 * @param req UpdateRecordPlanRequest
                 * @return UpdateRecordPlanOutcome
                 */
                UpdateRecordPlanOutcome UpdateRecordPlan(const Model::UpdateRecordPlanRequest &request);
                void UpdateRecordPlanAsync(const Model::UpdateRecordPlanRequest& request, const UpdateRecordPlanAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                UpdateRecordPlanOutcomeCallable UpdateRecordPlanCallable(const Model::UpdateRecordPlanRequest& request);

                /**
                 *用于修改实时上云模板
                 * @param req UpdateRecordTemplateRequest
                 * @return UpdateRecordTemplateOutcome
                 */
                UpdateRecordTemplateOutcome UpdateRecordTemplate(const Model::UpdateRecordTemplateRequest &request);
                void UpdateRecordTemplateAsync(const Model::UpdateRecordTemplateRequest& request, const UpdateRecordTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                UpdateRecordTemplateOutcomeCallable UpdateRecordTemplateCallable(const Model::UpdateRecordTemplateRequest& request);

                /**
                 *用于修改设备的配置信息。
                 * @param req UpdateUserDeviceRequest
                 * @return UpdateUserDeviceOutcome
                 */
                UpdateUserDeviceOutcome UpdateUserDevice(const Model::UpdateUserDeviceRequest &request);
                void UpdateUserDeviceAsync(const Model::UpdateUserDeviceRequest& request, const UpdateUserDeviceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                UpdateUserDeviceOutcomeCallable UpdateUserDeviceCallable(const Model::UpdateUserDeviceRequest& request);

                /**
                 *用于网关升级（支持对所有待更新的服务一键升级）。
                 * @param req UpgradeGatewayRequest
                 * @return UpgradeGatewayOutcome
                 */
                UpgradeGatewayOutcome UpgradeGateway(const Model::UpgradeGatewayRequest &request);
                void UpgradeGatewayAsync(const Model::UpgradeGatewayRequest& request, const UpgradeGatewayAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                UpgradeGatewayOutcomeCallable UpgradeGatewayCallable(const Model::UpgradeGatewayRequest& request);

            };
        }
    }
}

#endif // !TENCENTCLOUD_ISS_V20230517_ISSCLIENT_H_
