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

#ifndef TENCENTCLOUD_WEILINGWITH_V20230427_WEILINGWITHCLIENT_H_
#define TENCENTCLOUD_WEILINGWITH_V20230427_WEILINGWITHCLIENT_H_

#include <functional>
#include <future>
#include <tencentcloud/core/AbstractClient.h>
#include <tencentcloud/core/Credential.h>
#include <tencentcloud/core/profile/ClientProfile.h>
#include <tencentcloud/core/AsyncCallerContext.h>
#include <tencentcloud/weilingwith/v20230427/model/AddAlarmProcessRecordRequest.h>
#include <tencentcloud/weilingwith/v20230427/model/AddAlarmProcessRecordResponse.h>
#include <tencentcloud/weilingwith/v20230427/model/BatchCreateDeviceRequest.h>
#include <tencentcloud/weilingwith/v20230427/model/BatchCreateDeviceResponse.h>
#include <tencentcloud/weilingwith/v20230427/model/BatchDeleteDeviceRequest.h>
#include <tencentcloud/weilingwith/v20230427/model/BatchDeleteDeviceResponse.h>
#include <tencentcloud/weilingwith/v20230427/model/BatchKillAlarmRequest.h>
#include <tencentcloud/weilingwith/v20230427/model/BatchKillAlarmResponse.h>
#include <tencentcloud/weilingwith/v20230427/model/BatchReportAppMessageRequest.h>
#include <tencentcloud/weilingwith/v20230427/model/BatchReportAppMessageResponse.h>
#include <tencentcloud/weilingwith/v20230427/model/ChangeAlarmStatusRequest.h>
#include <tencentcloud/weilingwith/v20230427/model/ChangeAlarmStatusResponse.h>
#include <tencentcloud/weilingwith/v20230427/model/ControlCameraPTZRequest.h>
#include <tencentcloud/weilingwith/v20230427/model/ControlCameraPTZResponse.h>
#include <tencentcloud/weilingwith/v20230427/model/ControlDeviceRequest.h>
#include <tencentcloud/weilingwith/v20230427/model/ControlDeviceResponse.h>
#include <tencentcloud/weilingwith/v20230427/model/CreateApplicationTokenRequest.h>
#include <tencentcloud/weilingwith/v20230427/model/CreateApplicationTokenResponse.h>
#include <tencentcloud/weilingwith/v20230427/model/DeleteDeviceGroupRequest.h>
#include <tencentcloud/weilingwith/v20230427/model/DeleteDeviceGroupResponse.h>
#include <tencentcloud/weilingwith/v20230427/model/DescribeActionListRequest.h>
#include <tencentcloud/weilingwith/v20230427/model/DescribeActionListResponse.h>
#include <tencentcloud/weilingwith/v20230427/model/DescribeAdministrationByTagRequest.h>
#include <tencentcloud/weilingwith/v20230427/model/DescribeAdministrationByTagResponse.h>
#include <tencentcloud/weilingwith/v20230427/model/DescribeAlarmLevelListRequest.h>
#include <tencentcloud/weilingwith/v20230427/model/DescribeAlarmLevelListResponse.h>
#include <tencentcloud/weilingwith/v20230427/model/DescribeAlarmListRequest.h>
#include <tencentcloud/weilingwith/v20230427/model/DescribeAlarmListResponse.h>
#include <tencentcloud/weilingwith/v20230427/model/DescribeAlarmStatusListRequest.h>
#include <tencentcloud/weilingwith/v20230427/model/DescribeAlarmStatusListResponse.h>
#include <tencentcloud/weilingwith/v20230427/model/DescribeAlarmTypeListRequest.h>
#include <tencentcloud/weilingwith/v20230427/model/DescribeAlarmTypeListResponse.h>
#include <tencentcloud/weilingwith/v20230427/model/DescribeApplicationListRequest.h>
#include <tencentcloud/weilingwith/v20230427/model/DescribeApplicationListResponse.h>
#include <tencentcloud/weilingwith/v20230427/model/DescribeBuildingListRequest.h>
#include <tencentcloud/weilingwith/v20230427/model/DescribeBuildingListResponse.h>
#include <tencentcloud/weilingwith/v20230427/model/DescribeBuildingModelRequest.h>
#include <tencentcloud/weilingwith/v20230427/model/DescribeBuildingModelResponse.h>
#include <tencentcloud/weilingwith/v20230427/model/DescribeBuildingProfileRequest.h>
#include <tencentcloud/weilingwith/v20230427/model/DescribeBuildingProfileResponse.h>
#include <tencentcloud/weilingwith/v20230427/model/DescribeCameraExtendInfoRequest.h>
#include <tencentcloud/weilingwith/v20230427/model/DescribeCameraExtendInfoResponse.h>
#include <tencentcloud/weilingwith/v20230427/model/DescribeCityWorkspaceListRequest.h>
#include <tencentcloud/weilingwith/v20230427/model/DescribeCityWorkspaceListResponse.h>
#include <tencentcloud/weilingwith/v20230427/model/DescribeDeviceGroupListRequest.h>
#include <tencentcloud/weilingwith/v20230427/model/DescribeDeviceGroupListResponse.h>
#include <tencentcloud/weilingwith/v20230427/model/DescribeDeviceListRequest.h>
#include <tencentcloud/weilingwith/v20230427/model/DescribeDeviceListResponse.h>
#include <tencentcloud/weilingwith/v20230427/model/DescribeDeviceShadowListRequest.h>
#include <tencentcloud/weilingwith/v20230427/model/DescribeDeviceShadowListResponse.h>
#include <tencentcloud/weilingwith/v20230427/model/DescribeDeviceStatusListRequest.h>
#include <tencentcloud/weilingwith/v20230427/model/DescribeDeviceStatusListResponse.h>
#include <tencentcloud/weilingwith/v20230427/model/DescribeDeviceStatusStatRequest.h>
#include <tencentcloud/weilingwith/v20230427/model/DescribeDeviceStatusStatResponse.h>
#include <tencentcloud/weilingwith/v20230427/model/DescribeDeviceTagListRequest.h>
#include <tencentcloud/weilingwith/v20230427/model/DescribeDeviceTagListResponse.h>
#include <tencentcloud/weilingwith/v20230427/model/DescribeDeviceTypeListRequest.h>
#include <tencentcloud/weilingwith/v20230427/model/DescribeDeviceTypeListResponse.h>
#include <tencentcloud/weilingwith/v20230427/model/DescribeEdgeApplicationTokenRequest.h>
#include <tencentcloud/weilingwith/v20230427/model/DescribeEdgeApplicationTokenResponse.h>
#include <tencentcloud/weilingwith/v20230427/model/DescribeElementProfilePageRequest.h>
#include <tencentcloud/weilingwith/v20230427/model/DescribeElementProfilePageResponse.h>
#include <tencentcloud/weilingwith/v20230427/model/DescribeElementProfileTreeRequest.h>
#include <tencentcloud/weilingwith/v20230427/model/DescribeElementProfileTreeResponse.h>
#include <tencentcloud/weilingwith/v20230427/model/DescribeEventListRequest.h>
#include <tencentcloud/weilingwith/v20230427/model/DescribeEventListResponse.h>
#include <tencentcloud/weilingwith/v20230427/model/DescribeFileDownloadURLRequest.h>
#include <tencentcloud/weilingwith/v20230427/model/DescribeFileDownloadURLResponse.h>
#include <tencentcloud/weilingwith/v20230427/model/DescribeFileUploadURLRequest.h>
#include <tencentcloud/weilingwith/v20230427/model/DescribeFileUploadURLResponse.h>
#include <tencentcloud/weilingwith/v20230427/model/DescribeInterfaceListRequest.h>
#include <tencentcloud/weilingwith/v20230427/model/DescribeInterfaceListResponse.h>
#include <tencentcloud/weilingwith/v20230427/model/DescribeLinkRuleListRequest.h>
#include <tencentcloud/weilingwith/v20230427/model/DescribeLinkRuleListResponse.h>
#include <tencentcloud/weilingwith/v20230427/model/DescribeModelListRequest.h>
#include <tencentcloud/weilingwith/v20230427/model/DescribeModelListResponse.h>
#include <tencentcloud/weilingwith/v20230427/model/DescribeProductListRequest.h>
#include <tencentcloud/weilingwith/v20230427/model/DescribeProductListResponse.h>
#include <tencentcloud/weilingwith/v20230427/model/DescribePropertyListRequest.h>
#include <tencentcloud/weilingwith/v20230427/model/DescribePropertyListResponse.h>
#include <tencentcloud/weilingwith/v20230427/model/DescribeRuleDetailRequest.h>
#include <tencentcloud/weilingwith/v20230427/model/DescribeRuleDetailResponse.h>
#include <tencentcloud/weilingwith/v20230427/model/DescribeSceneListRequest.h>
#include <tencentcloud/weilingwith/v20230427/model/DescribeSceneListResponse.h>
#include <tencentcloud/weilingwith/v20230427/model/DescribeSpaceDeviceIdListRequest.h>
#include <tencentcloud/weilingwith/v20230427/model/DescribeSpaceDeviceIdListResponse.h>
#include <tencentcloud/weilingwith/v20230427/model/DescribeSpaceDeviceRelationListRequest.h>
#include <tencentcloud/weilingwith/v20230427/model/DescribeSpaceDeviceRelationListResponse.h>
#include <tencentcloud/weilingwith/v20230427/model/DescribeSpaceInfoByDeviceIdRequest.h>
#include <tencentcloud/weilingwith/v20230427/model/DescribeSpaceInfoByDeviceIdResponse.h>
#include <tencentcloud/weilingwith/v20230427/model/DescribeSpaceRelationByDeviceIdRequest.h>
#include <tencentcloud/weilingwith/v20230427/model/DescribeSpaceRelationByDeviceIdResponse.h>
#include <tencentcloud/weilingwith/v20230427/model/DescribeSpaceTypeListRequest.h>
#include <tencentcloud/weilingwith/v20230427/model/DescribeSpaceTypeListResponse.h>
#include <tencentcloud/weilingwith/v20230427/model/DescribeTenantBuildingCountAndAreaRequest.h>
#include <tencentcloud/weilingwith/v20230427/model/DescribeTenantBuildingCountAndAreaResponse.h>
#include <tencentcloud/weilingwith/v20230427/model/DescribeTenantDepartmentListRequest.h>
#include <tencentcloud/weilingwith/v20230427/model/DescribeTenantDepartmentListResponse.h>
#include <tencentcloud/weilingwith/v20230427/model/DescribeTenantUserListRequest.h>
#include <tencentcloud/weilingwith/v20230427/model/DescribeTenantUserListResponse.h>
#include <tencentcloud/weilingwith/v20230427/model/DescribeVideoCloudRecordRequest.h>
#include <tencentcloud/weilingwith/v20230427/model/DescribeVideoCloudRecordResponse.h>
#include <tencentcloud/weilingwith/v20230427/model/DescribeVideoLiveStreamRequest.h>
#include <tencentcloud/weilingwith/v20230427/model/DescribeVideoLiveStreamResponse.h>
#include <tencentcloud/weilingwith/v20230427/model/DescribeVideoRecordStreamRequest.h>
#include <tencentcloud/weilingwith/v20230427/model/DescribeVideoRecordStreamResponse.h>
#include <tencentcloud/weilingwith/v20230427/model/DescribeWorkSpaceBuildingCountAndAreaRequest.h>
#include <tencentcloud/weilingwith/v20230427/model/DescribeWorkSpaceBuildingCountAndAreaResponse.h>
#include <tencentcloud/weilingwith/v20230427/model/DescribeWorkspaceListRequest.h>
#include <tencentcloud/weilingwith/v20230427/model/DescribeWorkspaceListResponse.h>
#include <tencentcloud/weilingwith/v20230427/model/DescribeWorkspaceUserListRequest.h>
#include <tencentcloud/weilingwith/v20230427/model/DescribeWorkspaceUserListResponse.h>
#include <tencentcloud/weilingwith/v20230427/model/ModifyDeviceFieldRequest.h>
#include <tencentcloud/weilingwith/v20230427/model/ModifyDeviceFieldResponse.h>
#include <tencentcloud/weilingwith/v20230427/model/ModifyDeviceGroupRequest.h>
#include <tencentcloud/weilingwith/v20230427/model/ModifyDeviceGroupResponse.h>
#include <tencentcloud/weilingwith/v20230427/model/ModifyDeviceNameRequest.h>
#include <tencentcloud/weilingwith/v20230427/model/ModifyDeviceNameResponse.h>
#include <tencentcloud/weilingwith/v20230427/model/ModifyDeviceTagRequest.h>
#include <tencentcloud/weilingwith/v20230427/model/ModifyDeviceTagResponse.h>
#include <tencentcloud/weilingwith/v20230427/model/ReportAppMessageRequest.h>
#include <tencentcloud/weilingwith/v20230427/model/ReportAppMessageResponse.h>
#include <tencentcloud/weilingwith/v20230427/model/SaveDeviceGroupRequest.h>
#include <tencentcloud/weilingwith/v20230427/model/SaveDeviceGroupResponse.h>
#include <tencentcloud/weilingwith/v20230427/model/StopVideoStreamingRequest.h>
#include <tencentcloud/weilingwith/v20230427/model/StopVideoStreamingResponse.h>
#include <tencentcloud/weilingwith/v20230427/model/UpdateWorkspaceParkAttributesRequest.h>
#include <tencentcloud/weilingwith/v20230427/model/UpdateWorkspaceParkAttributesResponse.h>


namespace TencentCloud
{
    namespace Weilingwith
    {
        namespace V20230427
        {
            class WeilingwithClient : public AbstractClient
            {
            public:
                WeilingwithClient(const Credential &credential, const std::string &region);
                WeilingwithClient(const Credential &credential, const std::string &region, const ClientProfile &profile);

                typedef Outcome<Core::Error, Model::AddAlarmProcessRecordResponse> AddAlarmProcessRecordOutcome;
                typedef std::future<AddAlarmProcessRecordOutcome> AddAlarmProcessRecordOutcomeCallable;
                typedef std::function<void(const WeilingwithClient*, const Model::AddAlarmProcessRecordRequest&, AddAlarmProcessRecordOutcome, const std::shared_ptr<const AsyncCallerContext>&)> AddAlarmProcessRecordAsyncHandler;
                typedef Outcome<Core::Error, Model::BatchCreateDeviceResponse> BatchCreateDeviceOutcome;
                typedef std::future<BatchCreateDeviceOutcome> BatchCreateDeviceOutcomeCallable;
                typedef std::function<void(const WeilingwithClient*, const Model::BatchCreateDeviceRequest&, BatchCreateDeviceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> BatchCreateDeviceAsyncHandler;
                typedef Outcome<Core::Error, Model::BatchDeleteDeviceResponse> BatchDeleteDeviceOutcome;
                typedef std::future<BatchDeleteDeviceOutcome> BatchDeleteDeviceOutcomeCallable;
                typedef std::function<void(const WeilingwithClient*, const Model::BatchDeleteDeviceRequest&, BatchDeleteDeviceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> BatchDeleteDeviceAsyncHandler;
                typedef Outcome<Core::Error, Model::BatchKillAlarmResponse> BatchKillAlarmOutcome;
                typedef std::future<BatchKillAlarmOutcome> BatchKillAlarmOutcomeCallable;
                typedef std::function<void(const WeilingwithClient*, const Model::BatchKillAlarmRequest&, BatchKillAlarmOutcome, const std::shared_ptr<const AsyncCallerContext>&)> BatchKillAlarmAsyncHandler;
                typedef Outcome<Core::Error, Model::BatchReportAppMessageResponse> BatchReportAppMessageOutcome;
                typedef std::future<BatchReportAppMessageOutcome> BatchReportAppMessageOutcomeCallable;
                typedef std::function<void(const WeilingwithClient*, const Model::BatchReportAppMessageRequest&, BatchReportAppMessageOutcome, const std::shared_ptr<const AsyncCallerContext>&)> BatchReportAppMessageAsyncHandler;
                typedef Outcome<Core::Error, Model::ChangeAlarmStatusResponse> ChangeAlarmStatusOutcome;
                typedef std::future<ChangeAlarmStatusOutcome> ChangeAlarmStatusOutcomeCallable;
                typedef std::function<void(const WeilingwithClient*, const Model::ChangeAlarmStatusRequest&, ChangeAlarmStatusOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ChangeAlarmStatusAsyncHandler;
                typedef Outcome<Core::Error, Model::ControlCameraPTZResponse> ControlCameraPTZOutcome;
                typedef std::future<ControlCameraPTZOutcome> ControlCameraPTZOutcomeCallable;
                typedef std::function<void(const WeilingwithClient*, const Model::ControlCameraPTZRequest&, ControlCameraPTZOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ControlCameraPTZAsyncHandler;
                typedef Outcome<Core::Error, Model::ControlDeviceResponse> ControlDeviceOutcome;
                typedef std::future<ControlDeviceOutcome> ControlDeviceOutcomeCallable;
                typedef std::function<void(const WeilingwithClient*, const Model::ControlDeviceRequest&, ControlDeviceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ControlDeviceAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateApplicationTokenResponse> CreateApplicationTokenOutcome;
                typedef std::future<CreateApplicationTokenOutcome> CreateApplicationTokenOutcomeCallable;
                typedef std::function<void(const WeilingwithClient*, const Model::CreateApplicationTokenRequest&, CreateApplicationTokenOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateApplicationTokenAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteDeviceGroupResponse> DeleteDeviceGroupOutcome;
                typedef std::future<DeleteDeviceGroupOutcome> DeleteDeviceGroupOutcomeCallable;
                typedef std::function<void(const WeilingwithClient*, const Model::DeleteDeviceGroupRequest&, DeleteDeviceGroupOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteDeviceGroupAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeActionListResponse> DescribeActionListOutcome;
                typedef std::future<DescribeActionListOutcome> DescribeActionListOutcomeCallable;
                typedef std::function<void(const WeilingwithClient*, const Model::DescribeActionListRequest&, DescribeActionListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeActionListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeAdministrationByTagResponse> DescribeAdministrationByTagOutcome;
                typedef std::future<DescribeAdministrationByTagOutcome> DescribeAdministrationByTagOutcomeCallable;
                typedef std::function<void(const WeilingwithClient*, const Model::DescribeAdministrationByTagRequest&, DescribeAdministrationByTagOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAdministrationByTagAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeAlarmLevelListResponse> DescribeAlarmLevelListOutcome;
                typedef std::future<DescribeAlarmLevelListOutcome> DescribeAlarmLevelListOutcomeCallable;
                typedef std::function<void(const WeilingwithClient*, const Model::DescribeAlarmLevelListRequest&, DescribeAlarmLevelListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAlarmLevelListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeAlarmListResponse> DescribeAlarmListOutcome;
                typedef std::future<DescribeAlarmListOutcome> DescribeAlarmListOutcomeCallable;
                typedef std::function<void(const WeilingwithClient*, const Model::DescribeAlarmListRequest&, DescribeAlarmListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAlarmListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeAlarmStatusListResponse> DescribeAlarmStatusListOutcome;
                typedef std::future<DescribeAlarmStatusListOutcome> DescribeAlarmStatusListOutcomeCallable;
                typedef std::function<void(const WeilingwithClient*, const Model::DescribeAlarmStatusListRequest&, DescribeAlarmStatusListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAlarmStatusListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeAlarmTypeListResponse> DescribeAlarmTypeListOutcome;
                typedef std::future<DescribeAlarmTypeListOutcome> DescribeAlarmTypeListOutcomeCallable;
                typedef std::function<void(const WeilingwithClient*, const Model::DescribeAlarmTypeListRequest&, DescribeAlarmTypeListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAlarmTypeListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeApplicationListResponse> DescribeApplicationListOutcome;
                typedef std::future<DescribeApplicationListOutcome> DescribeApplicationListOutcomeCallable;
                typedef std::function<void(const WeilingwithClient*, const Model::DescribeApplicationListRequest&, DescribeApplicationListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeApplicationListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeBuildingListResponse> DescribeBuildingListOutcome;
                typedef std::future<DescribeBuildingListOutcome> DescribeBuildingListOutcomeCallable;
                typedef std::function<void(const WeilingwithClient*, const Model::DescribeBuildingListRequest&, DescribeBuildingListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeBuildingListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeBuildingModelResponse> DescribeBuildingModelOutcome;
                typedef std::future<DescribeBuildingModelOutcome> DescribeBuildingModelOutcomeCallable;
                typedef std::function<void(const WeilingwithClient*, const Model::DescribeBuildingModelRequest&, DescribeBuildingModelOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeBuildingModelAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeBuildingProfileResponse> DescribeBuildingProfileOutcome;
                typedef std::future<DescribeBuildingProfileOutcome> DescribeBuildingProfileOutcomeCallable;
                typedef std::function<void(const WeilingwithClient*, const Model::DescribeBuildingProfileRequest&, DescribeBuildingProfileOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeBuildingProfileAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeCameraExtendInfoResponse> DescribeCameraExtendInfoOutcome;
                typedef std::future<DescribeCameraExtendInfoOutcome> DescribeCameraExtendInfoOutcomeCallable;
                typedef std::function<void(const WeilingwithClient*, const Model::DescribeCameraExtendInfoRequest&, DescribeCameraExtendInfoOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeCameraExtendInfoAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeCityWorkspaceListResponse> DescribeCityWorkspaceListOutcome;
                typedef std::future<DescribeCityWorkspaceListOutcome> DescribeCityWorkspaceListOutcomeCallable;
                typedef std::function<void(const WeilingwithClient*, const Model::DescribeCityWorkspaceListRequest&, DescribeCityWorkspaceListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeCityWorkspaceListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeDeviceGroupListResponse> DescribeDeviceGroupListOutcome;
                typedef std::future<DescribeDeviceGroupListOutcome> DescribeDeviceGroupListOutcomeCallable;
                typedef std::function<void(const WeilingwithClient*, const Model::DescribeDeviceGroupListRequest&, DescribeDeviceGroupListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDeviceGroupListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeDeviceListResponse> DescribeDeviceListOutcome;
                typedef std::future<DescribeDeviceListOutcome> DescribeDeviceListOutcomeCallable;
                typedef std::function<void(const WeilingwithClient*, const Model::DescribeDeviceListRequest&, DescribeDeviceListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDeviceListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeDeviceShadowListResponse> DescribeDeviceShadowListOutcome;
                typedef std::future<DescribeDeviceShadowListOutcome> DescribeDeviceShadowListOutcomeCallable;
                typedef std::function<void(const WeilingwithClient*, const Model::DescribeDeviceShadowListRequest&, DescribeDeviceShadowListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDeviceShadowListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeDeviceStatusListResponse> DescribeDeviceStatusListOutcome;
                typedef std::future<DescribeDeviceStatusListOutcome> DescribeDeviceStatusListOutcomeCallable;
                typedef std::function<void(const WeilingwithClient*, const Model::DescribeDeviceStatusListRequest&, DescribeDeviceStatusListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDeviceStatusListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeDeviceStatusStatResponse> DescribeDeviceStatusStatOutcome;
                typedef std::future<DescribeDeviceStatusStatOutcome> DescribeDeviceStatusStatOutcomeCallable;
                typedef std::function<void(const WeilingwithClient*, const Model::DescribeDeviceStatusStatRequest&, DescribeDeviceStatusStatOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDeviceStatusStatAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeDeviceTagListResponse> DescribeDeviceTagListOutcome;
                typedef std::future<DescribeDeviceTagListOutcome> DescribeDeviceTagListOutcomeCallable;
                typedef std::function<void(const WeilingwithClient*, const Model::DescribeDeviceTagListRequest&, DescribeDeviceTagListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDeviceTagListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeDeviceTypeListResponse> DescribeDeviceTypeListOutcome;
                typedef std::future<DescribeDeviceTypeListOutcome> DescribeDeviceTypeListOutcomeCallable;
                typedef std::function<void(const WeilingwithClient*, const Model::DescribeDeviceTypeListRequest&, DescribeDeviceTypeListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDeviceTypeListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeEdgeApplicationTokenResponse> DescribeEdgeApplicationTokenOutcome;
                typedef std::future<DescribeEdgeApplicationTokenOutcome> DescribeEdgeApplicationTokenOutcomeCallable;
                typedef std::function<void(const WeilingwithClient*, const Model::DescribeEdgeApplicationTokenRequest&, DescribeEdgeApplicationTokenOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeEdgeApplicationTokenAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeElementProfilePageResponse> DescribeElementProfilePageOutcome;
                typedef std::future<DescribeElementProfilePageOutcome> DescribeElementProfilePageOutcomeCallable;
                typedef std::function<void(const WeilingwithClient*, const Model::DescribeElementProfilePageRequest&, DescribeElementProfilePageOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeElementProfilePageAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeElementProfileTreeResponse> DescribeElementProfileTreeOutcome;
                typedef std::future<DescribeElementProfileTreeOutcome> DescribeElementProfileTreeOutcomeCallable;
                typedef std::function<void(const WeilingwithClient*, const Model::DescribeElementProfileTreeRequest&, DescribeElementProfileTreeOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeElementProfileTreeAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeEventListResponse> DescribeEventListOutcome;
                typedef std::future<DescribeEventListOutcome> DescribeEventListOutcomeCallable;
                typedef std::function<void(const WeilingwithClient*, const Model::DescribeEventListRequest&, DescribeEventListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeEventListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeFileDownloadURLResponse> DescribeFileDownloadURLOutcome;
                typedef std::future<DescribeFileDownloadURLOutcome> DescribeFileDownloadURLOutcomeCallable;
                typedef std::function<void(const WeilingwithClient*, const Model::DescribeFileDownloadURLRequest&, DescribeFileDownloadURLOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeFileDownloadURLAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeFileUploadURLResponse> DescribeFileUploadURLOutcome;
                typedef std::future<DescribeFileUploadURLOutcome> DescribeFileUploadURLOutcomeCallable;
                typedef std::function<void(const WeilingwithClient*, const Model::DescribeFileUploadURLRequest&, DescribeFileUploadURLOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeFileUploadURLAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeInterfaceListResponse> DescribeInterfaceListOutcome;
                typedef std::future<DescribeInterfaceListOutcome> DescribeInterfaceListOutcomeCallable;
                typedef std::function<void(const WeilingwithClient*, const Model::DescribeInterfaceListRequest&, DescribeInterfaceListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeInterfaceListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeLinkRuleListResponse> DescribeLinkRuleListOutcome;
                typedef std::future<DescribeLinkRuleListOutcome> DescribeLinkRuleListOutcomeCallable;
                typedef std::function<void(const WeilingwithClient*, const Model::DescribeLinkRuleListRequest&, DescribeLinkRuleListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeLinkRuleListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeModelListResponse> DescribeModelListOutcome;
                typedef std::future<DescribeModelListOutcome> DescribeModelListOutcomeCallable;
                typedef std::function<void(const WeilingwithClient*, const Model::DescribeModelListRequest&, DescribeModelListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeModelListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeProductListResponse> DescribeProductListOutcome;
                typedef std::future<DescribeProductListOutcome> DescribeProductListOutcomeCallable;
                typedef std::function<void(const WeilingwithClient*, const Model::DescribeProductListRequest&, DescribeProductListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeProductListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribePropertyListResponse> DescribePropertyListOutcome;
                typedef std::future<DescribePropertyListOutcome> DescribePropertyListOutcomeCallable;
                typedef std::function<void(const WeilingwithClient*, const Model::DescribePropertyListRequest&, DescribePropertyListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribePropertyListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeRuleDetailResponse> DescribeRuleDetailOutcome;
                typedef std::future<DescribeRuleDetailOutcome> DescribeRuleDetailOutcomeCallable;
                typedef std::function<void(const WeilingwithClient*, const Model::DescribeRuleDetailRequest&, DescribeRuleDetailOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeRuleDetailAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeSceneListResponse> DescribeSceneListOutcome;
                typedef std::future<DescribeSceneListOutcome> DescribeSceneListOutcomeCallable;
                typedef std::function<void(const WeilingwithClient*, const Model::DescribeSceneListRequest&, DescribeSceneListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeSceneListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeSpaceDeviceIdListResponse> DescribeSpaceDeviceIdListOutcome;
                typedef std::future<DescribeSpaceDeviceIdListOutcome> DescribeSpaceDeviceIdListOutcomeCallable;
                typedef std::function<void(const WeilingwithClient*, const Model::DescribeSpaceDeviceIdListRequest&, DescribeSpaceDeviceIdListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeSpaceDeviceIdListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeSpaceDeviceRelationListResponse> DescribeSpaceDeviceRelationListOutcome;
                typedef std::future<DescribeSpaceDeviceRelationListOutcome> DescribeSpaceDeviceRelationListOutcomeCallable;
                typedef std::function<void(const WeilingwithClient*, const Model::DescribeSpaceDeviceRelationListRequest&, DescribeSpaceDeviceRelationListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeSpaceDeviceRelationListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeSpaceInfoByDeviceIdResponse> DescribeSpaceInfoByDeviceIdOutcome;
                typedef std::future<DescribeSpaceInfoByDeviceIdOutcome> DescribeSpaceInfoByDeviceIdOutcomeCallable;
                typedef std::function<void(const WeilingwithClient*, const Model::DescribeSpaceInfoByDeviceIdRequest&, DescribeSpaceInfoByDeviceIdOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeSpaceInfoByDeviceIdAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeSpaceRelationByDeviceIdResponse> DescribeSpaceRelationByDeviceIdOutcome;
                typedef std::future<DescribeSpaceRelationByDeviceIdOutcome> DescribeSpaceRelationByDeviceIdOutcomeCallable;
                typedef std::function<void(const WeilingwithClient*, const Model::DescribeSpaceRelationByDeviceIdRequest&, DescribeSpaceRelationByDeviceIdOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeSpaceRelationByDeviceIdAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeSpaceTypeListResponse> DescribeSpaceTypeListOutcome;
                typedef std::future<DescribeSpaceTypeListOutcome> DescribeSpaceTypeListOutcomeCallable;
                typedef std::function<void(const WeilingwithClient*, const Model::DescribeSpaceTypeListRequest&, DescribeSpaceTypeListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeSpaceTypeListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeTenantBuildingCountAndAreaResponse> DescribeTenantBuildingCountAndAreaOutcome;
                typedef std::future<DescribeTenantBuildingCountAndAreaOutcome> DescribeTenantBuildingCountAndAreaOutcomeCallable;
                typedef std::function<void(const WeilingwithClient*, const Model::DescribeTenantBuildingCountAndAreaRequest&, DescribeTenantBuildingCountAndAreaOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeTenantBuildingCountAndAreaAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeTenantDepartmentListResponse> DescribeTenantDepartmentListOutcome;
                typedef std::future<DescribeTenantDepartmentListOutcome> DescribeTenantDepartmentListOutcomeCallable;
                typedef std::function<void(const WeilingwithClient*, const Model::DescribeTenantDepartmentListRequest&, DescribeTenantDepartmentListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeTenantDepartmentListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeTenantUserListResponse> DescribeTenantUserListOutcome;
                typedef std::future<DescribeTenantUserListOutcome> DescribeTenantUserListOutcomeCallable;
                typedef std::function<void(const WeilingwithClient*, const Model::DescribeTenantUserListRequest&, DescribeTenantUserListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeTenantUserListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeVideoCloudRecordResponse> DescribeVideoCloudRecordOutcome;
                typedef std::future<DescribeVideoCloudRecordOutcome> DescribeVideoCloudRecordOutcomeCallable;
                typedef std::function<void(const WeilingwithClient*, const Model::DescribeVideoCloudRecordRequest&, DescribeVideoCloudRecordOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeVideoCloudRecordAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeVideoLiveStreamResponse> DescribeVideoLiveStreamOutcome;
                typedef std::future<DescribeVideoLiveStreamOutcome> DescribeVideoLiveStreamOutcomeCallable;
                typedef std::function<void(const WeilingwithClient*, const Model::DescribeVideoLiveStreamRequest&, DescribeVideoLiveStreamOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeVideoLiveStreamAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeVideoRecordStreamResponse> DescribeVideoRecordStreamOutcome;
                typedef std::future<DescribeVideoRecordStreamOutcome> DescribeVideoRecordStreamOutcomeCallable;
                typedef std::function<void(const WeilingwithClient*, const Model::DescribeVideoRecordStreamRequest&, DescribeVideoRecordStreamOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeVideoRecordStreamAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeWorkSpaceBuildingCountAndAreaResponse> DescribeWorkSpaceBuildingCountAndAreaOutcome;
                typedef std::future<DescribeWorkSpaceBuildingCountAndAreaOutcome> DescribeWorkSpaceBuildingCountAndAreaOutcomeCallable;
                typedef std::function<void(const WeilingwithClient*, const Model::DescribeWorkSpaceBuildingCountAndAreaRequest&, DescribeWorkSpaceBuildingCountAndAreaOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeWorkSpaceBuildingCountAndAreaAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeWorkspaceListResponse> DescribeWorkspaceListOutcome;
                typedef std::future<DescribeWorkspaceListOutcome> DescribeWorkspaceListOutcomeCallable;
                typedef std::function<void(const WeilingwithClient*, const Model::DescribeWorkspaceListRequest&, DescribeWorkspaceListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeWorkspaceListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeWorkspaceUserListResponse> DescribeWorkspaceUserListOutcome;
                typedef std::future<DescribeWorkspaceUserListOutcome> DescribeWorkspaceUserListOutcomeCallable;
                typedef std::function<void(const WeilingwithClient*, const Model::DescribeWorkspaceUserListRequest&, DescribeWorkspaceUserListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeWorkspaceUserListAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyDeviceFieldResponse> ModifyDeviceFieldOutcome;
                typedef std::future<ModifyDeviceFieldOutcome> ModifyDeviceFieldOutcomeCallable;
                typedef std::function<void(const WeilingwithClient*, const Model::ModifyDeviceFieldRequest&, ModifyDeviceFieldOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyDeviceFieldAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyDeviceGroupResponse> ModifyDeviceGroupOutcome;
                typedef std::future<ModifyDeviceGroupOutcome> ModifyDeviceGroupOutcomeCallable;
                typedef std::function<void(const WeilingwithClient*, const Model::ModifyDeviceGroupRequest&, ModifyDeviceGroupOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyDeviceGroupAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyDeviceNameResponse> ModifyDeviceNameOutcome;
                typedef std::future<ModifyDeviceNameOutcome> ModifyDeviceNameOutcomeCallable;
                typedef std::function<void(const WeilingwithClient*, const Model::ModifyDeviceNameRequest&, ModifyDeviceNameOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyDeviceNameAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyDeviceTagResponse> ModifyDeviceTagOutcome;
                typedef std::future<ModifyDeviceTagOutcome> ModifyDeviceTagOutcomeCallable;
                typedef std::function<void(const WeilingwithClient*, const Model::ModifyDeviceTagRequest&, ModifyDeviceTagOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyDeviceTagAsyncHandler;
                typedef Outcome<Core::Error, Model::ReportAppMessageResponse> ReportAppMessageOutcome;
                typedef std::future<ReportAppMessageOutcome> ReportAppMessageOutcomeCallable;
                typedef std::function<void(const WeilingwithClient*, const Model::ReportAppMessageRequest&, ReportAppMessageOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ReportAppMessageAsyncHandler;
                typedef Outcome<Core::Error, Model::SaveDeviceGroupResponse> SaveDeviceGroupOutcome;
                typedef std::future<SaveDeviceGroupOutcome> SaveDeviceGroupOutcomeCallable;
                typedef std::function<void(const WeilingwithClient*, const Model::SaveDeviceGroupRequest&, SaveDeviceGroupOutcome, const std::shared_ptr<const AsyncCallerContext>&)> SaveDeviceGroupAsyncHandler;
                typedef Outcome<Core::Error, Model::StopVideoStreamingResponse> StopVideoStreamingOutcome;
                typedef std::future<StopVideoStreamingOutcome> StopVideoStreamingOutcomeCallable;
                typedef std::function<void(const WeilingwithClient*, const Model::StopVideoStreamingRequest&, StopVideoStreamingOutcome, const std::shared_ptr<const AsyncCallerContext>&)> StopVideoStreamingAsyncHandler;
                typedef Outcome<Core::Error, Model::UpdateWorkspaceParkAttributesResponse> UpdateWorkspaceParkAttributesOutcome;
                typedef std::future<UpdateWorkspaceParkAttributesOutcome> UpdateWorkspaceParkAttributesOutcomeCallable;
                typedef std::function<void(const WeilingwithClient*, const Model::UpdateWorkspaceParkAttributesRequest&, UpdateWorkspaceParkAttributesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> UpdateWorkspaceParkAttributesAsyncHandler;



                /**
                 *添加告警处理记录
                 * @param req AddAlarmProcessRecordRequest
                 * @return AddAlarmProcessRecordOutcome
                 */
                AddAlarmProcessRecordOutcome AddAlarmProcessRecord(const Model::AddAlarmProcessRecordRequest &request);
                void AddAlarmProcessRecordAsync(const Model::AddAlarmProcessRecordRequest& request, const AddAlarmProcessRecordAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                AddAlarmProcessRecordOutcomeCallable AddAlarmProcessRecordCallable(const Model::AddAlarmProcessRecordRequest& request);

                /**
                 *单个/批量新增设备
                 * @param req BatchCreateDeviceRequest
                 * @return BatchCreateDeviceOutcome
                 */
                BatchCreateDeviceOutcome BatchCreateDevice(const Model::BatchCreateDeviceRequest &request);
                void BatchCreateDeviceAsync(const Model::BatchCreateDeviceRequest& request, const BatchCreateDeviceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                BatchCreateDeviceOutcomeCallable BatchCreateDeviceCallable(const Model::BatchCreateDeviceRequest& request);

                /**
                 *批量删除设备
                 * @param req BatchDeleteDeviceRequest
                 * @return BatchDeleteDeviceOutcome
                 */
                BatchDeleteDeviceOutcome BatchDeleteDevice(const Model::BatchDeleteDeviceRequest &request);
                void BatchDeleteDeviceAsync(const Model::BatchDeleteDeviceRequest& request, const BatchDeleteDeviceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                BatchDeleteDeviceOutcomeCallable BatchDeleteDeviceCallable(const Model::BatchDeleteDeviceRequest& request);

                /**
                 *批量消警
                 * @param req BatchKillAlarmRequest
                 * @return BatchKillAlarmOutcome
                 */
                BatchKillAlarmOutcome BatchKillAlarm(const Model::BatchKillAlarmRequest &request);
                void BatchKillAlarmAsync(const Model::BatchKillAlarmRequest& request, const BatchKillAlarmAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                BatchKillAlarmOutcomeCallable BatchKillAlarmCallable(const Model::BatchKillAlarmRequest& request);

                /**
                 *批量上报应用消息
                 * @param req BatchReportAppMessageRequest
                 * @return BatchReportAppMessageOutcome
                 */
                BatchReportAppMessageOutcome BatchReportAppMessage(const Model::BatchReportAppMessageRequest &request);
                void BatchReportAppMessageAsync(const Model::BatchReportAppMessageRequest& request, const BatchReportAppMessageAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                BatchReportAppMessageOutcomeCallable BatchReportAppMessageCallable(const Model::BatchReportAppMessageRequest& request);

                /**
                 *变更告警状态
                 * @param req ChangeAlarmStatusRequest
                 * @return ChangeAlarmStatusOutcome
                 */
                ChangeAlarmStatusOutcome ChangeAlarmStatus(const Model::ChangeAlarmStatusRequest &request);
                void ChangeAlarmStatusAsync(const Model::ChangeAlarmStatusRequest& request, const ChangeAlarmStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ChangeAlarmStatusOutcomeCallable ChangeAlarmStatusCallable(const Model::ChangeAlarmStatusRequest& request);

                /**
                 *云台控制
                 * @param req ControlCameraPTZRequest
                 * @return ControlCameraPTZOutcome
                 */
                ControlCameraPTZOutcome ControlCameraPTZ(const Model::ControlCameraPTZRequest &request);
                void ControlCameraPTZAsync(const Model::ControlCameraPTZRequest& request, const ControlCameraPTZAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ControlCameraPTZOutcomeCallable ControlCameraPTZCallable(const Model::ControlCameraPTZRequest& request);

                /**
                 *设备控制（单个、批量控制）
                 * @param req ControlDeviceRequest
                 * @return ControlDeviceOutcome
                 */
                ControlDeviceOutcome ControlDevice(const Model::ControlDeviceRequest &request);
                void ControlDeviceAsync(const Model::ControlDeviceRequest& request, const ControlDeviceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ControlDeviceOutcomeCallable ControlDeviceCallable(const Model::ControlDeviceRequest& request);

                /**
                 *调用方应用，创建调用租户API的授权令牌。
                 * @param req CreateApplicationTokenRequest
                 * @return CreateApplicationTokenOutcome
                 */
                CreateApplicationTokenOutcome CreateApplicationToken(const Model::CreateApplicationTokenRequest &request);
                void CreateApplicationTokenAsync(const Model::CreateApplicationTokenRequest& request, const CreateApplicationTokenAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateApplicationTokenOutcomeCallable CreateApplicationTokenCallable(const Model::CreateApplicationTokenRequest& request);

                /**
                 *删除设备分组
                 * @param req DeleteDeviceGroupRequest
                 * @return DeleteDeviceGroupOutcome
                 */
                DeleteDeviceGroupOutcome DeleteDeviceGroup(const Model::DeleteDeviceGroupRequest &request);
                void DeleteDeviceGroupAsync(const Model::DeleteDeviceGroupRequest& request, const DeleteDeviceGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteDeviceGroupOutcomeCallable DeleteDeviceGroupCallable(const Model::DeleteDeviceGroupRequest& request);

                /**
                 *动作列表查询
                 * @param req DescribeActionListRequest
                 * @return DescribeActionListOutcome
                 */
                DescribeActionListOutcome DescribeActionList(const Model::DescribeActionListRequest &request);
                void DescribeActionListAsync(const Model::DescribeActionListRequest& request, const DescribeActionListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeActionListOutcomeCallable DescribeActionListCallable(const Model::DescribeActionListRequest& request);

                /**
                 *根据标签获取行政区划列表
                 * @param req DescribeAdministrationByTagRequest
                 * @return DescribeAdministrationByTagOutcome
                 */
                DescribeAdministrationByTagOutcome DescribeAdministrationByTag(const Model::DescribeAdministrationByTagRequest &request);
                void DescribeAdministrationByTagAsync(const Model::DescribeAdministrationByTagRequest& request, const DescribeAdministrationByTagAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeAdministrationByTagOutcomeCallable DescribeAdministrationByTagCallable(const Model::DescribeAdministrationByTagRequest& request);

                /**
                 *告警级别枚举获取
                 * @param req DescribeAlarmLevelListRequest
                 * @return DescribeAlarmLevelListOutcome
                 */
                DescribeAlarmLevelListOutcome DescribeAlarmLevelList(const Model::DescribeAlarmLevelListRequest &request);
                void DescribeAlarmLevelListAsync(const Model::DescribeAlarmLevelListRequest& request, const DescribeAlarmLevelListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeAlarmLevelListOutcomeCallable DescribeAlarmLevelListCallable(const Model::DescribeAlarmLevelListRequest& request);

                /**
                 *告警列表查询
                 * @param req DescribeAlarmListRequest
                 * @return DescribeAlarmListOutcome
                 */
                DescribeAlarmListOutcome DescribeAlarmList(const Model::DescribeAlarmListRequest &request);
                void DescribeAlarmListAsync(const Model::DescribeAlarmListRequest& request, const DescribeAlarmListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeAlarmListOutcomeCallable DescribeAlarmListCallable(const Model::DescribeAlarmListRequest& request);

                /**
                 *用来查询系统中的告警状态列表
                 * @param req DescribeAlarmStatusListRequest
                 * @return DescribeAlarmStatusListOutcome
                 */
                DescribeAlarmStatusListOutcome DescribeAlarmStatusList(const Model::DescribeAlarmStatusListRequest &request);
                void DescribeAlarmStatusListAsync(const Model::DescribeAlarmStatusListRequest& request, const DescribeAlarmStatusListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeAlarmStatusListOutcomeCallable DescribeAlarmStatusListCallable(const Model::DescribeAlarmStatusListRequest& request);

                /**
                 *告警类型获取
                 * @param req DescribeAlarmTypeListRequest
                 * @return DescribeAlarmTypeListOutcome
                 */
                DescribeAlarmTypeListOutcome DescribeAlarmTypeList(const Model::DescribeAlarmTypeListRequest &request);
                void DescribeAlarmTypeListAsync(const Model::DescribeAlarmTypeListRequest& request, const DescribeAlarmTypeListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeAlarmTypeListOutcomeCallable DescribeAlarmTypeListCallable(const Model::DescribeAlarmTypeListRequest& request);

                /**
                 *查询指定空间关联的应用列表
                 * @param req DescribeApplicationListRequest
                 * @return DescribeApplicationListOutcome
                 */
                DescribeApplicationListOutcome DescribeApplicationList(const Model::DescribeApplicationListRequest &request);
                void DescribeApplicationListAsync(const Model::DescribeApplicationListRequest& request, const DescribeApplicationListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeApplicationListOutcomeCallable DescribeApplicationListCallable(const Model::DescribeApplicationListRequest& request);

                /**
                 *查询建筑列表
                 * @param req DescribeBuildingListRequest
                 * @return DescribeBuildingListOutcome
                 */
                DescribeBuildingListOutcome DescribeBuildingList(const Model::DescribeBuildingListRequest &request);
                void DescribeBuildingListAsync(const Model::DescribeBuildingListRequest& request, const DescribeBuildingListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeBuildingListOutcomeCallable DescribeBuildingListCallable(const Model::DescribeBuildingListRequest& request);

                /**
                 *查询建筑三维模型
                 * @param req DescribeBuildingModelRequest
                 * @return DescribeBuildingModelOutcome
                 */
                DescribeBuildingModelOutcome DescribeBuildingModel(const Model::DescribeBuildingModelRequest &request);
                void DescribeBuildingModelAsync(const Model::DescribeBuildingModelRequest& request, const DescribeBuildingModelAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeBuildingModelOutcomeCallable DescribeBuildingModelCallable(const Model::DescribeBuildingModelRequest& request);

                /**
                 *查询建筑信息
                 * @param req DescribeBuildingProfileRequest
                 * @return DescribeBuildingProfileOutcome
                 */
                DescribeBuildingProfileOutcome DescribeBuildingProfile(const Model::DescribeBuildingProfileRequest &request);
                void DescribeBuildingProfileAsync(const Model::DescribeBuildingProfileRequest& request, const DescribeBuildingProfileAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeBuildingProfileOutcomeCallable DescribeBuildingProfileCallable(const Model::DescribeBuildingProfileRequest& request);

                /**
                 *获取视频扩展信息
                 * @param req DescribeCameraExtendInfoRequest
                 * @return DescribeCameraExtendInfoOutcome
                 */
                DescribeCameraExtendInfoOutcome DescribeCameraExtendInfo(const Model::DescribeCameraExtendInfoRequest &request);
                void DescribeCameraExtendInfoAsync(const Model::DescribeCameraExtendInfoRequest& request, const DescribeCameraExtendInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeCameraExtendInfoOutcomeCallable DescribeCameraExtendInfoCallable(const Model::DescribeCameraExtendInfoRequest& request);

                /**
                 *老微瓴后续不继续更新

通过城市id查询工作空间列表
                 * @param req DescribeCityWorkspaceListRequest
                 * @return DescribeCityWorkspaceListOutcome
                 */
                DescribeCityWorkspaceListOutcome DescribeCityWorkspaceList(const Model::DescribeCityWorkspaceListRequest &request);
                void DescribeCityWorkspaceListAsync(const Model::DescribeCityWorkspaceListRequest& request, const DescribeCityWorkspaceListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeCityWorkspaceListOutcomeCallable DescribeCityWorkspaceListCallable(const Model::DescribeCityWorkspaceListRequest& request);

                /**
                 *设备分组列表
                 * @param req DescribeDeviceGroupListRequest
                 * @return DescribeDeviceGroupListOutcome
                 */
                DescribeDeviceGroupListOutcome DescribeDeviceGroupList(const Model::DescribeDeviceGroupListRequest &request);
                void DescribeDeviceGroupListAsync(const Model::DescribeDeviceGroupListRequest& request, const DescribeDeviceGroupListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeDeviceGroupListOutcomeCallable DescribeDeviceGroupListCallable(const Model::DescribeDeviceGroupListRequest& request);

                /**
                 *设备列表查询/单个查询（支持通过筛选条件查询，设备类型、标签、PID、空间）
                 * @param req DescribeDeviceListRequest
                 * @return DescribeDeviceListOutcome
                 */
                DescribeDeviceListOutcome DescribeDeviceList(const Model::DescribeDeviceListRequest &request);
                void DescribeDeviceListAsync(const Model::DescribeDeviceListRequest& request, const DescribeDeviceListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeDeviceListOutcomeCallable DescribeDeviceListCallable(const Model::DescribeDeviceListRequest& request);

                /**
                 *获取设备影子数据
                 * @param req DescribeDeviceShadowListRequest
                 * @return DescribeDeviceShadowListOutcome
                 */
                DescribeDeviceShadowListOutcome DescribeDeviceShadowList(const Model::DescribeDeviceShadowListRequest &request);
                void DescribeDeviceShadowListAsync(const Model::DescribeDeviceShadowListRequest& request, const DescribeDeviceShadowListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeDeviceShadowListOutcomeCallable DescribeDeviceShadowListCallable(const Model::DescribeDeviceShadowListRequest& request);

                /**
                 *设备状态获取
                 * @param req DescribeDeviceStatusListRequest
                 * @return DescribeDeviceStatusListOutcome
                 */
                DescribeDeviceStatusListOutcome DescribeDeviceStatusList(const Model::DescribeDeviceStatusListRequest &request);
                void DescribeDeviceStatusListAsync(const Model::DescribeDeviceStatusListRequest& request, const DescribeDeviceStatusListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeDeviceStatusListOutcomeCallable DescribeDeviceStatusListCallable(const Model::DescribeDeviceStatusListRequest& request);

                /**
                 *设备状态统计
                 * @param req DescribeDeviceStatusStatRequest
                 * @return DescribeDeviceStatusStatOutcome
                 */
                DescribeDeviceStatusStatOutcome DescribeDeviceStatusStat(const Model::DescribeDeviceStatusStatRequest &request);
                void DescribeDeviceStatusStatAsync(const Model::DescribeDeviceStatusStatRequest& request, const DescribeDeviceStatusStatAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeDeviceStatusStatOutcomeCallable DescribeDeviceStatusStatCallable(const Model::DescribeDeviceStatusStatRequest& request);

                /**
                 *标签列表查询
                 * @param req DescribeDeviceTagListRequest
                 * @return DescribeDeviceTagListOutcome
                 */
                DescribeDeviceTagListOutcome DescribeDeviceTagList(const Model::DescribeDeviceTagListRequest &request);
                void DescribeDeviceTagListAsync(const Model::DescribeDeviceTagListRequest& request, const DescribeDeviceTagListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeDeviceTagListOutcomeCallable DescribeDeviceTagListCallable(const Model::DescribeDeviceTagListRequest& request);

                /**
                 *拉取设备的设备类型列表
                 * @param req DescribeDeviceTypeListRequest
                 * @return DescribeDeviceTypeListOutcome
                 */
                DescribeDeviceTypeListOutcome DescribeDeviceTypeList(const Model::DescribeDeviceTypeListRequest &request);
                void DescribeDeviceTypeListAsync(const Model::DescribeDeviceTypeListRequest& request, const DescribeDeviceTypeListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeDeviceTypeListOutcomeCallable DescribeDeviceTypeListCallable(const Model::DescribeDeviceTypeListRequest& request);

                /**
                 *查询边缘应用凭证
                 * @param req DescribeEdgeApplicationTokenRequest
                 * @return DescribeEdgeApplicationTokenOutcome
                 */
                DescribeEdgeApplicationTokenOutcome DescribeEdgeApplicationToken(const Model::DescribeEdgeApplicationTokenRequest &request);
                void DescribeEdgeApplicationTokenAsync(const Model::DescribeEdgeApplicationTokenRequest& request, const DescribeEdgeApplicationTokenAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeEdgeApplicationTokenOutcomeCallable DescribeEdgeApplicationTokenCallable(const Model::DescribeEdgeApplicationTokenRequest& request);

                /**
                 *查询分页构件信息
                 * @param req DescribeElementProfilePageRequest
                 * @return DescribeElementProfilePageOutcome
                 */
                DescribeElementProfilePageOutcome DescribeElementProfilePage(const Model::DescribeElementProfilePageRequest &request);
                void DescribeElementProfilePageAsync(const Model::DescribeElementProfilePageRequest& request, const DescribeElementProfilePageAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeElementProfilePageOutcomeCallable DescribeElementProfilePageCallable(const Model::DescribeElementProfilePageRequest& request);

                /**
                 *查询构件树
                 * @param req DescribeElementProfileTreeRequest
                 * @return DescribeElementProfileTreeOutcome
                 */
                DescribeElementProfileTreeOutcome DescribeElementProfileTree(const Model::DescribeElementProfileTreeRequest &request);
                void DescribeElementProfileTreeAsync(const Model::DescribeElementProfileTreeRequest& request, const DescribeElementProfileTreeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeElementProfileTreeOutcomeCallable DescribeElementProfileTreeCallable(const Model::DescribeElementProfileTreeRequest& request);

                /**
                 *事件列表查询
                 * @param req DescribeEventListRequest
                 * @return DescribeEventListOutcome
                 */
                DescribeEventListOutcome DescribeEventList(const Model::DescribeEventListRequest &request);
                void DescribeEventListAsync(const Model::DescribeEventListRequest& request, const DescribeEventListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeEventListOutcomeCallable DescribeEventListCallable(const Model::DescribeEventListRequest& request);

                /**
                 *获取文件下载URL
                 * @param req DescribeFileDownloadURLRequest
                 * @return DescribeFileDownloadURLOutcome
                 */
                DescribeFileDownloadURLOutcome DescribeFileDownloadURL(const Model::DescribeFileDownloadURLRequest &request);
                void DescribeFileDownloadURLAsync(const Model::DescribeFileDownloadURLRequest& request, const DescribeFileDownloadURLAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeFileDownloadURLOutcomeCallable DescribeFileDownloadURLCallable(const Model::DescribeFileDownloadURLRequest& request);

                /**
                 *文件上传接口
                 * @param req DescribeFileUploadURLRequest
                 * @return DescribeFileUploadURLOutcome
                 */
                DescribeFileUploadURLOutcome DescribeFileUploadURL(const Model::DescribeFileUploadURLRequest &request);
                void DescribeFileUploadURLAsync(const Model::DescribeFileUploadURLRequest& request, const DescribeFileUploadURLAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeFileUploadURLOutcomeCallable DescribeFileUploadURLCallable(const Model::DescribeFileUploadURLRequest& request);

                /**
                 *查询接口列表
                 * @param req DescribeInterfaceListRequest
                 * @return DescribeInterfaceListOutcome
                 */
                DescribeInterfaceListOutcome DescribeInterfaceList(const Model::DescribeInterfaceListRequest &request);
                void DescribeInterfaceListAsync(const Model::DescribeInterfaceListRequest& request, const DescribeInterfaceListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeInterfaceListOutcomeCallable DescribeInterfaceListCallable(const Model::DescribeInterfaceListRequest& request);

                /**
                 *联动规则列表查询
                 * @param req DescribeLinkRuleListRequest
                 * @return DescribeLinkRuleListOutcome
                 */
                DescribeLinkRuleListOutcome DescribeLinkRuleList(const Model::DescribeLinkRuleListRequest &request);
                void DescribeLinkRuleListAsync(const Model::DescribeLinkRuleListRequest& request, const DescribeLinkRuleListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeLinkRuleListOutcomeCallable DescribeLinkRuleListCallable(const Model::DescribeLinkRuleListRequest& request);

                /**
                 *模型列表查询/单个查询（产品模型/标准模型）
                 * @param req DescribeModelListRequest
                 * @return DescribeModelListOutcome
                 */
                DescribeModelListOutcome DescribeModelList(const Model::DescribeModelListRequest &request);
                void DescribeModelListAsync(const Model::DescribeModelListRequest& request, const DescribeModelListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeModelListOutcomeCallable DescribeModelListCallable(const Model::DescribeModelListRequest& request);

                /**
                 *产品列表查询
                 * @param req DescribeProductListRequest
                 * @return DescribeProductListOutcome
                 */
                DescribeProductListOutcome DescribeProductList(const Model::DescribeProductListRequest &request);
                void DescribeProductListAsync(const Model::DescribeProductListRequest& request, const DescribeProductListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeProductListOutcomeCallable DescribeProductListCallable(const Model::DescribeProductListRequest& request);

                /**
                 *查询构件属性（详情）
                 * @param req DescribePropertyListRequest
                 * @return DescribePropertyListOutcome
                 */
                DescribePropertyListOutcome DescribePropertyList(const Model::DescribePropertyListRequest &request);
                void DescribePropertyListAsync(const Model::DescribePropertyListRequest& request, const DescribePropertyListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribePropertyListOutcomeCallable DescribePropertyListCallable(const Model::DescribePropertyListRequest& request);

                /**
                 *联动规则详情查询
                 * @param req DescribeRuleDetailRequest
                 * @return DescribeRuleDetailOutcome
                 */
                DescribeRuleDetailOutcome DescribeRuleDetail(const Model::DescribeRuleDetailRequest &request);
                void DescribeRuleDetailAsync(const Model::DescribeRuleDetailRequest& request, const DescribeRuleDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeRuleDetailOutcomeCallable DescribeRuleDetailCallable(const Model::DescribeRuleDetailRequest& request);

                /**
                 *查询场景列表
                 * @param req DescribeSceneListRequest
                 * @return DescribeSceneListOutcome
                 */
                DescribeSceneListOutcome DescribeSceneList(const Model::DescribeSceneListRequest &request);
                void DescribeSceneListAsync(const Model::DescribeSceneListRequest& request, const DescribeSceneListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeSceneListOutcomeCallable DescribeSceneListCallable(const Model::DescribeSceneListRequest& request);

                /**
                 *查询指定空间设备编号列表
                 * @param req DescribeSpaceDeviceIdListRequest
                 * @return DescribeSpaceDeviceIdListOutcome
                 */
                DescribeSpaceDeviceIdListOutcome DescribeSpaceDeviceIdList(const Model::DescribeSpaceDeviceIdListRequest &request);
                void DescribeSpaceDeviceIdListAsync(const Model::DescribeSpaceDeviceIdListRequest& request, const DescribeSpaceDeviceIdListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeSpaceDeviceIdListOutcomeCallable DescribeSpaceDeviceIdListCallable(const Model::DescribeSpaceDeviceIdListRequest& request);

                /**
                 *查询指定空间下设备与构件绑定关系列表
                 * @param req DescribeSpaceDeviceRelationListRequest
                 * @return DescribeSpaceDeviceRelationListOutcome
                 */
                DescribeSpaceDeviceRelationListOutcome DescribeSpaceDeviceRelationList(const Model::DescribeSpaceDeviceRelationListRequest &request);
                void DescribeSpaceDeviceRelationListAsync(const Model::DescribeSpaceDeviceRelationListRequest& request, const DescribeSpaceDeviceRelationListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeSpaceDeviceRelationListOutcomeCallable DescribeSpaceDeviceRelationListCallable(const Model::DescribeSpaceDeviceRelationListRequest& request);

                /**
                 *查询设备绑定的空间信息
                 * @param req DescribeSpaceInfoByDeviceIdRequest
                 * @return DescribeSpaceInfoByDeviceIdOutcome
                 */
                DescribeSpaceInfoByDeviceIdOutcome DescribeSpaceInfoByDeviceId(const Model::DescribeSpaceInfoByDeviceIdRequest &request);
                void DescribeSpaceInfoByDeviceIdAsync(const Model::DescribeSpaceInfoByDeviceIdRequest& request, const DescribeSpaceInfoByDeviceIdAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeSpaceInfoByDeviceIdOutcomeCallable DescribeSpaceInfoByDeviceIdCallable(const Model::DescribeSpaceInfoByDeviceIdRequest& request);

                /**
                 *查询设备绑定的空间层级关系
                 * @param req DescribeSpaceRelationByDeviceIdRequest
                 * @return DescribeSpaceRelationByDeviceIdOutcome
                 */
                DescribeSpaceRelationByDeviceIdOutcome DescribeSpaceRelationByDeviceId(const Model::DescribeSpaceRelationByDeviceIdRequest &request);
                void DescribeSpaceRelationByDeviceIdAsync(const Model::DescribeSpaceRelationByDeviceIdRequest& request, const DescribeSpaceRelationByDeviceIdAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeSpaceRelationByDeviceIdOutcomeCallable DescribeSpaceRelationByDeviceIdCallable(const Model::DescribeSpaceRelationByDeviceIdRequest& request);

                /**
                 *查询空间分类
                 * @param req DescribeSpaceTypeListRequest
                 * @return DescribeSpaceTypeListOutcome
                 */
                DescribeSpaceTypeListOutcome DescribeSpaceTypeList(const Model::DescribeSpaceTypeListRequest &request);
                void DescribeSpaceTypeListAsync(const Model::DescribeSpaceTypeListRequest& request, const DescribeSpaceTypeListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeSpaceTypeListOutcomeCallable DescribeSpaceTypeListCallable(const Model::DescribeSpaceTypeListRequest& request);

                /**
                 *查询租户楼栋数量和楼栋建筑面积
                 * @param req DescribeTenantBuildingCountAndAreaRequest
                 * @return DescribeTenantBuildingCountAndAreaOutcome
                 */
                DescribeTenantBuildingCountAndAreaOutcome DescribeTenantBuildingCountAndArea(const Model::DescribeTenantBuildingCountAndAreaRequest &request);
                void DescribeTenantBuildingCountAndAreaAsync(const Model::DescribeTenantBuildingCountAndAreaRequest& request, const DescribeTenantBuildingCountAndAreaAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeTenantBuildingCountAndAreaOutcomeCallable DescribeTenantBuildingCountAndAreaCallable(const Model::DescribeTenantBuildingCountAndAreaRequest& request);

                /**
                 *查询租户组织部门列表
                 * @param req DescribeTenantDepartmentListRequest
                 * @return DescribeTenantDepartmentListOutcome
                 */
                DescribeTenantDepartmentListOutcome DescribeTenantDepartmentList(const Model::DescribeTenantDepartmentListRequest &request);
                void DescribeTenantDepartmentListAsync(const Model::DescribeTenantDepartmentListRequest& request, const DescribeTenantDepartmentListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeTenantDepartmentListOutcomeCallable DescribeTenantDepartmentListCallable(const Model::DescribeTenantDepartmentListRequest& request);

                /**
                 *查询租户人员列表
                 * @param req DescribeTenantUserListRequest
                 * @return DescribeTenantUserListOutcome
                 */
                DescribeTenantUserListOutcome DescribeTenantUserList(const Model::DescribeTenantUserListRequest &request);
                void DescribeTenantUserListAsync(const Model::DescribeTenantUserListRequest& request, const DescribeTenantUserListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeTenantUserListOutcomeCallable DescribeTenantUserListCallable(const Model::DescribeTenantUserListRequest& request);

                /**
                 *云录像接口
                 * @param req DescribeVideoCloudRecordRequest
                 * @return DescribeVideoCloudRecordOutcome
                 */
                DescribeVideoCloudRecordOutcome DescribeVideoCloudRecord(const Model::DescribeVideoCloudRecordRequest &request);
                void DescribeVideoCloudRecordAsync(const Model::DescribeVideoCloudRecordRequest& request, const DescribeVideoCloudRecordAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeVideoCloudRecordOutcomeCallable DescribeVideoCloudRecordCallable(const Model::DescribeVideoCloudRecordRequest& request);

                /**
                 *实时流接口
                 * @param req DescribeVideoLiveStreamRequest
                 * @return DescribeVideoLiveStreamOutcome
                 */
                DescribeVideoLiveStreamOutcome DescribeVideoLiveStream(const Model::DescribeVideoLiveStreamRequest &request);
                void DescribeVideoLiveStreamAsync(const Model::DescribeVideoLiveStreamRequest& request, const DescribeVideoLiveStreamAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeVideoLiveStreamOutcomeCallable DescribeVideoLiveStreamCallable(const Model::DescribeVideoLiveStreamRequest& request);

                /**
                 *历史流接口
                 * @param req DescribeVideoRecordStreamRequest
                 * @return DescribeVideoRecordStreamOutcome
                 */
                DescribeVideoRecordStreamOutcome DescribeVideoRecordStream(const Model::DescribeVideoRecordStreamRequest &request);
                void DescribeVideoRecordStreamAsync(const Model::DescribeVideoRecordStreamRequest& request, const DescribeVideoRecordStreamAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeVideoRecordStreamOutcomeCallable DescribeVideoRecordStreamCallable(const Model::DescribeVideoRecordStreamRequest& request);

                /**
                 *查询项目空间楼栋数量与建筑面积
                 * @param req DescribeWorkSpaceBuildingCountAndAreaRequest
                 * @return DescribeWorkSpaceBuildingCountAndAreaOutcome
                 */
                DescribeWorkSpaceBuildingCountAndAreaOutcome DescribeWorkSpaceBuildingCountAndArea(const Model::DescribeWorkSpaceBuildingCountAndAreaRequest &request);
                void DescribeWorkSpaceBuildingCountAndAreaAsync(const Model::DescribeWorkSpaceBuildingCountAndAreaRequest& request, const DescribeWorkSpaceBuildingCountAndAreaAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeWorkSpaceBuildingCountAndAreaOutcomeCallable DescribeWorkSpaceBuildingCountAndAreaCallable(const Model::DescribeWorkSpaceBuildingCountAndAreaRequest& request);

                /**
                 *获取租户下的空间列表
                 * @param req DescribeWorkspaceListRequest
                 * @return DescribeWorkspaceListOutcome
                 */
                DescribeWorkspaceListOutcome DescribeWorkspaceList(const Model::DescribeWorkspaceListRequest &request);
                void DescribeWorkspaceListAsync(const Model::DescribeWorkspaceListRequest& request, const DescribeWorkspaceListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeWorkspaceListOutcomeCallable DescribeWorkspaceListCallable(const Model::DescribeWorkspaceListRequest& request);

                /**
                 *查询项目空间人员列表
                 * @param req DescribeWorkspaceUserListRequest
                 * @return DescribeWorkspaceUserListOutcome
                 */
                DescribeWorkspaceUserListOutcome DescribeWorkspaceUserList(const Model::DescribeWorkspaceUserListRequest &request);
                void DescribeWorkspaceUserListAsync(const Model::DescribeWorkspaceUserListRequest& request, const DescribeWorkspaceUserListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeWorkspaceUserListOutcomeCallable DescribeWorkspaceUserListCallable(const Model::DescribeWorkspaceUserListRequest& request);

                /**
                 *批量修改设备自定义字段值
                 * @param req ModifyDeviceFieldRequest
                 * @return ModifyDeviceFieldOutcome
                 */
                ModifyDeviceFieldOutcome ModifyDeviceField(const Model::ModifyDeviceFieldRequest &request);
                void ModifyDeviceFieldAsync(const Model::ModifyDeviceFieldRequest& request, const ModifyDeviceFieldAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyDeviceFieldOutcomeCallable ModifyDeviceFieldCallable(const Model::ModifyDeviceFieldRequest& request);

                /**
                 *批量修改设备组
                 * @param req ModifyDeviceGroupRequest
                 * @return ModifyDeviceGroupOutcome
                 */
                ModifyDeviceGroupOutcome ModifyDeviceGroup(const Model::ModifyDeviceGroupRequest &request);
                void ModifyDeviceGroupAsync(const Model::ModifyDeviceGroupRequest& request, const ModifyDeviceGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyDeviceGroupOutcomeCallable ModifyDeviceGroupCallable(const Model::ModifyDeviceGroupRequest& request);

                /**
                 *批量修改设备名字
                 * @param req ModifyDeviceNameRequest
                 * @return ModifyDeviceNameOutcome
                 */
                ModifyDeviceNameOutcome ModifyDeviceName(const Model::ModifyDeviceNameRequest &request);
                void ModifyDeviceNameAsync(const Model::ModifyDeviceNameRequest& request, const ModifyDeviceNameAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyDeviceNameOutcomeCallable ModifyDeviceNameCallable(const Model::ModifyDeviceNameRequest& request);

                /**
                 *批量修改设备标签
                 * @param req ModifyDeviceTagRequest
                 * @return ModifyDeviceTagOutcome
                 */
                ModifyDeviceTagOutcome ModifyDeviceTag(const Model::ModifyDeviceTagRequest &request);
                void ModifyDeviceTagAsync(const Model::ModifyDeviceTagRequest& request, const ModifyDeviceTagAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyDeviceTagOutcomeCallable ModifyDeviceTagCallable(const Model::ModifyDeviceTagRequest& request);

                /**
                 *上报应用消息
                 * @param req ReportAppMessageRequest
                 * @return ReportAppMessageOutcome
                 */
                ReportAppMessageOutcome ReportAppMessage(const Model::ReportAppMessageRequest &request);
                void ReportAppMessageAsync(const Model::ReportAppMessageRequest& request, const ReportAppMessageAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ReportAppMessageOutcomeCallable ReportAppMessageCallable(const Model::ReportAppMessageRequest& request);

                /**
                 *设备分组新增/修改
                 * @param req SaveDeviceGroupRequest
                 * @return SaveDeviceGroupOutcome
                 */
                SaveDeviceGroupOutcome SaveDeviceGroup(const Model::SaveDeviceGroupRequest &request);
                void SaveDeviceGroupAsync(const Model::SaveDeviceGroupRequest& request, const SaveDeviceGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                SaveDeviceGroupOutcomeCallable SaveDeviceGroupCallable(const Model::SaveDeviceGroupRequest& request);

                /**
                 *断流接口
                 * @param req StopVideoStreamingRequest
                 * @return StopVideoStreamingOutcome
                 */
                StopVideoStreamingOutcome StopVideoStreaming(const Model::StopVideoStreamingRequest &request);
                void StopVideoStreamingAsync(const Model::StopVideoStreamingRequest& request, const StopVideoStreamingAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                StopVideoStreamingOutcomeCallable StopVideoStreamingCallable(const Model::StopVideoStreamingRequest& request);

                /**
                 *修改工作空间园区属性
                 * @param req UpdateWorkspaceParkAttributesRequest
                 * @return UpdateWorkspaceParkAttributesOutcome
                 */
                UpdateWorkspaceParkAttributesOutcome UpdateWorkspaceParkAttributes(const Model::UpdateWorkspaceParkAttributesRequest &request);
                void UpdateWorkspaceParkAttributesAsync(const Model::UpdateWorkspaceParkAttributesRequest& request, const UpdateWorkspaceParkAttributesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                UpdateWorkspaceParkAttributesOutcomeCallable UpdateWorkspaceParkAttributesCallable(const Model::UpdateWorkspaceParkAttributesRequest& request);

            };
        }
    }
}

#endif // !TENCENTCLOUD_WEILINGWITH_V20230427_WEILINGWITHCLIENT_H_
