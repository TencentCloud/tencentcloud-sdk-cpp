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

#ifndef TENCENTCLOUD_TIW_V20190919_TIWCLIENT_H_
#define TENCENTCLOUD_TIW_V20190919_TIWCLIENT_H_

#include <functional>
#include <future>
#include <tencentcloud/core/AbstractClient.h>
#include <tencentcloud/core/Credential.h>
#include <tencentcloud/core/profile/ClientProfile.h>
#include <tencentcloud/core/AsyncCallerContext.h>
#include <tencentcloud/tiw/v20190919/model/ApplyTiwTrialRequest.h>
#include <tencentcloud/tiw/v20190919/model/ApplyTiwTrialResponse.h>
#include <tencentcloud/tiw/v20190919/model/CreateApplicationRequest.h>
#include <tencentcloud/tiw/v20190919/model/CreateApplicationResponse.h>
#include <tencentcloud/tiw/v20190919/model/CreateOfflineRecordRequest.h>
#include <tencentcloud/tiw/v20190919/model/CreateOfflineRecordResponse.h>
#include <tencentcloud/tiw/v20190919/model/CreatePPTCheckTaskRequest.h>
#include <tencentcloud/tiw/v20190919/model/CreatePPTCheckTaskResponse.h>
#include <tencentcloud/tiw/v20190919/model/CreateSnapshotTaskRequest.h>
#include <tencentcloud/tiw/v20190919/model/CreateSnapshotTaskResponse.h>
#include <tencentcloud/tiw/v20190919/model/CreateTranscodeRequest.h>
#include <tencentcloud/tiw/v20190919/model/CreateTranscodeResponse.h>
#include <tencentcloud/tiw/v20190919/model/CreateVideoGenerationTaskRequest.h>
#include <tencentcloud/tiw/v20190919/model/CreateVideoGenerationTaskResponse.h>
#include <tencentcloud/tiw/v20190919/model/DescribeAPIServiceRequest.h>
#include <tencentcloud/tiw/v20190919/model/DescribeAPIServiceResponse.h>
#include <tencentcloud/tiw/v20190919/model/DescribeApplicationInfosRequest.h>
#include <tencentcloud/tiw/v20190919/model/DescribeApplicationInfosResponse.h>
#include <tencentcloud/tiw/v20190919/model/DescribeApplicationUsageRequest.h>
#include <tencentcloud/tiw/v20190919/model/DescribeApplicationUsageResponse.h>
#include <tencentcloud/tiw/v20190919/model/DescribeBoardSDKLogRequest.h>
#include <tencentcloud/tiw/v20190919/model/DescribeBoardSDKLogResponse.h>
#include <tencentcloud/tiw/v20190919/model/DescribeIMApplicationsRequest.h>
#include <tencentcloud/tiw/v20190919/model/DescribeIMApplicationsResponse.h>
#include <tencentcloud/tiw/v20190919/model/DescribeOfflineRecordRequest.h>
#include <tencentcloud/tiw/v20190919/model/DescribeOfflineRecordResponse.h>
#include <tencentcloud/tiw/v20190919/model/DescribeOfflineRecordCallbackRequest.h>
#include <tencentcloud/tiw/v20190919/model/DescribeOfflineRecordCallbackResponse.h>
#include <tencentcloud/tiw/v20190919/model/DescribeOnlineRecordRequest.h>
#include <tencentcloud/tiw/v20190919/model/DescribeOnlineRecordResponse.h>
#include <tencentcloud/tiw/v20190919/model/DescribeOnlineRecordCallbackRequest.h>
#include <tencentcloud/tiw/v20190919/model/DescribeOnlineRecordCallbackResponse.h>
#include <tencentcloud/tiw/v20190919/model/DescribePPTCheckRequest.h>
#include <tencentcloud/tiw/v20190919/model/DescribePPTCheckResponse.h>
#include <tencentcloud/tiw/v20190919/model/DescribePPTCheckCallbackRequest.h>
#include <tencentcloud/tiw/v20190919/model/DescribePPTCheckCallbackResponse.h>
#include <tencentcloud/tiw/v20190919/model/DescribePostpaidUsageRequest.h>
#include <tencentcloud/tiw/v20190919/model/DescribePostpaidUsageResponse.h>
#include <tencentcloud/tiw/v20190919/model/DescribeQualityMetricsRequest.h>
#include <tencentcloud/tiw/v20190919/model/DescribeQualityMetricsResponse.h>
#include <tencentcloud/tiw/v20190919/model/DescribeRecordSearchRequest.h>
#include <tencentcloud/tiw/v20190919/model/DescribeRecordSearchResponse.h>
#include <tencentcloud/tiw/v20190919/model/DescribeRoomListRequest.h>
#include <tencentcloud/tiw/v20190919/model/DescribeRoomListResponse.h>
#include <tencentcloud/tiw/v20190919/model/DescribeRunningTasksRequest.h>
#include <tencentcloud/tiw/v20190919/model/DescribeRunningTasksResponse.h>
#include <tencentcloud/tiw/v20190919/model/DescribeSnapshotTaskRequest.h>
#include <tencentcloud/tiw/v20190919/model/DescribeSnapshotTaskResponse.h>
#include <tencentcloud/tiw/v20190919/model/DescribeTIWDailyUsageRequest.h>
#include <tencentcloud/tiw/v20190919/model/DescribeTIWDailyUsageResponse.h>
#include <tencentcloud/tiw/v20190919/model/DescribeTIWRoomDailyUsageRequest.h>
#include <tencentcloud/tiw/v20190919/model/DescribeTIWRoomDailyUsageResponse.h>
#include <tencentcloud/tiw/v20190919/model/DescribeTranscodeRequest.h>
#include <tencentcloud/tiw/v20190919/model/DescribeTranscodeResponse.h>
#include <tencentcloud/tiw/v20190919/model/DescribeTranscodeCallbackRequest.h>
#include <tencentcloud/tiw/v20190919/model/DescribeTranscodeCallbackResponse.h>
#include <tencentcloud/tiw/v20190919/model/DescribeTranscodeSearchRequest.h>
#include <tencentcloud/tiw/v20190919/model/DescribeTranscodeSearchResponse.h>
#include <tencentcloud/tiw/v20190919/model/DescribeUsageSummaryRequest.h>
#include <tencentcloud/tiw/v20190919/model/DescribeUsageSummaryResponse.h>
#include <tencentcloud/tiw/v20190919/model/DescribeUserListRequest.h>
#include <tencentcloud/tiw/v20190919/model/DescribeUserListResponse.h>
#include <tencentcloud/tiw/v20190919/model/DescribeUserResourcesRequest.h>
#include <tencentcloud/tiw/v20190919/model/DescribeUserResourcesResponse.h>
#include <tencentcloud/tiw/v20190919/model/DescribeUserStatusRequest.h>
#include <tencentcloud/tiw/v20190919/model/DescribeUserStatusResponse.h>
#include <tencentcloud/tiw/v20190919/model/DescribeVideoGenerationTaskRequest.h>
#include <tencentcloud/tiw/v20190919/model/DescribeVideoGenerationTaskResponse.h>
#include <tencentcloud/tiw/v20190919/model/DescribeVideoGenerationTaskCallbackRequest.h>
#include <tencentcloud/tiw/v20190919/model/DescribeVideoGenerationTaskCallbackResponse.h>
#include <tencentcloud/tiw/v20190919/model/DescribeWarningCallbackRequest.h>
#include <tencentcloud/tiw/v20190919/model/DescribeWarningCallbackResponse.h>
#include <tencentcloud/tiw/v20190919/model/DescribeWhiteboardApplicationConfigRequest.h>
#include <tencentcloud/tiw/v20190919/model/DescribeWhiteboardApplicationConfigResponse.h>
#include <tencentcloud/tiw/v20190919/model/DescribeWhiteboardBucketConfigRequest.h>
#include <tencentcloud/tiw/v20190919/model/DescribeWhiteboardBucketConfigResponse.h>
#include <tencentcloud/tiw/v20190919/model/DescribeWhiteboardPushRequest.h>
#include <tencentcloud/tiw/v20190919/model/DescribeWhiteboardPushResponse.h>
#include <tencentcloud/tiw/v20190919/model/DescribeWhiteboardPushCallbackRequest.h>
#include <tencentcloud/tiw/v20190919/model/DescribeWhiteboardPushCallbackResponse.h>
#include <tencentcloud/tiw/v20190919/model/DescribeWhiteboardPushSearchRequest.h>
#include <tencentcloud/tiw/v20190919/model/DescribeWhiteboardPushSearchResponse.h>
#include <tencentcloud/tiw/v20190919/model/ModifyApplicationRequest.h>
#include <tencentcloud/tiw/v20190919/model/ModifyApplicationResponse.h>
#include <tencentcloud/tiw/v20190919/model/ModifyAutoRenewFlagRequest.h>
#include <tencentcloud/tiw/v20190919/model/ModifyAutoRenewFlagResponse.h>
#include <tencentcloud/tiw/v20190919/model/ModifyWhiteboardApplicationConfigRequest.h>
#include <tencentcloud/tiw/v20190919/model/ModifyWhiteboardApplicationConfigResponse.h>
#include <tencentcloud/tiw/v20190919/model/ModifyWhiteboardBucketConfigRequest.h>
#include <tencentcloud/tiw/v20190919/model/ModifyWhiteboardBucketConfigResponse.h>
#include <tencentcloud/tiw/v20190919/model/PauseOnlineRecordRequest.h>
#include <tencentcloud/tiw/v20190919/model/PauseOnlineRecordResponse.h>
#include <tencentcloud/tiw/v20190919/model/ResumeOnlineRecordRequest.h>
#include <tencentcloud/tiw/v20190919/model/ResumeOnlineRecordResponse.h>
#include <tencentcloud/tiw/v20190919/model/SetOfflineRecordCallbackRequest.h>
#include <tencentcloud/tiw/v20190919/model/SetOfflineRecordCallbackResponse.h>
#include <tencentcloud/tiw/v20190919/model/SetOnlineRecordCallbackRequest.h>
#include <tencentcloud/tiw/v20190919/model/SetOnlineRecordCallbackResponse.h>
#include <tencentcloud/tiw/v20190919/model/SetOnlineRecordCallbackKeyRequest.h>
#include <tencentcloud/tiw/v20190919/model/SetOnlineRecordCallbackKeyResponse.h>
#include <tencentcloud/tiw/v20190919/model/SetPPTCheckCallbackRequest.h>
#include <tencentcloud/tiw/v20190919/model/SetPPTCheckCallbackResponse.h>
#include <tencentcloud/tiw/v20190919/model/SetPPTCheckCallbackKeyRequest.h>
#include <tencentcloud/tiw/v20190919/model/SetPPTCheckCallbackKeyResponse.h>
#include <tencentcloud/tiw/v20190919/model/SetTranscodeCallbackRequest.h>
#include <tencentcloud/tiw/v20190919/model/SetTranscodeCallbackResponse.h>
#include <tencentcloud/tiw/v20190919/model/SetTranscodeCallbackKeyRequest.h>
#include <tencentcloud/tiw/v20190919/model/SetTranscodeCallbackKeyResponse.h>
#include <tencentcloud/tiw/v20190919/model/SetVideoGenerationTaskCallbackRequest.h>
#include <tencentcloud/tiw/v20190919/model/SetVideoGenerationTaskCallbackResponse.h>
#include <tencentcloud/tiw/v20190919/model/SetVideoGenerationTaskCallbackKeyRequest.h>
#include <tencentcloud/tiw/v20190919/model/SetVideoGenerationTaskCallbackKeyResponse.h>
#include <tencentcloud/tiw/v20190919/model/SetWarningCallbackRequest.h>
#include <tencentcloud/tiw/v20190919/model/SetWarningCallbackResponse.h>
#include <tencentcloud/tiw/v20190919/model/SetWhiteboardPushCallbackRequest.h>
#include <tencentcloud/tiw/v20190919/model/SetWhiteboardPushCallbackResponse.h>
#include <tencentcloud/tiw/v20190919/model/SetWhiteboardPushCallbackKeyRequest.h>
#include <tencentcloud/tiw/v20190919/model/SetWhiteboardPushCallbackKeyResponse.h>
#include <tencentcloud/tiw/v20190919/model/StartOnlineRecordRequest.h>
#include <tencentcloud/tiw/v20190919/model/StartOnlineRecordResponse.h>
#include <tencentcloud/tiw/v20190919/model/StartWhiteboardPushRequest.h>
#include <tencentcloud/tiw/v20190919/model/StartWhiteboardPushResponse.h>
#include <tencentcloud/tiw/v20190919/model/StopOnlineRecordRequest.h>
#include <tencentcloud/tiw/v20190919/model/StopOnlineRecordResponse.h>
#include <tencentcloud/tiw/v20190919/model/StopWhiteboardPushRequest.h>
#include <tencentcloud/tiw/v20190919/model/StopWhiteboardPushResponse.h>


namespace TencentCloud
{
    namespace Tiw
    {
        namespace V20190919
        {
            class TiwClient : public AbstractClient
            {
            public:
                TiwClient(const Credential &credential, const std::string &region);
                TiwClient(const Credential &credential, const std::string &region, const ClientProfile &profile);

                typedef Outcome<Core::Error, Model::ApplyTiwTrialResponse> ApplyTiwTrialOutcome;
                typedef std::future<ApplyTiwTrialOutcome> ApplyTiwTrialOutcomeCallable;
                typedef std::function<void(const TiwClient*, const Model::ApplyTiwTrialRequest&, ApplyTiwTrialOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ApplyTiwTrialAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateApplicationResponse> CreateApplicationOutcome;
                typedef std::future<CreateApplicationOutcome> CreateApplicationOutcomeCallable;
                typedef std::function<void(const TiwClient*, const Model::CreateApplicationRequest&, CreateApplicationOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateApplicationAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateOfflineRecordResponse> CreateOfflineRecordOutcome;
                typedef std::future<CreateOfflineRecordOutcome> CreateOfflineRecordOutcomeCallable;
                typedef std::function<void(const TiwClient*, const Model::CreateOfflineRecordRequest&, CreateOfflineRecordOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateOfflineRecordAsyncHandler;
                typedef Outcome<Core::Error, Model::CreatePPTCheckTaskResponse> CreatePPTCheckTaskOutcome;
                typedef std::future<CreatePPTCheckTaskOutcome> CreatePPTCheckTaskOutcomeCallable;
                typedef std::function<void(const TiwClient*, const Model::CreatePPTCheckTaskRequest&, CreatePPTCheckTaskOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreatePPTCheckTaskAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateSnapshotTaskResponse> CreateSnapshotTaskOutcome;
                typedef std::future<CreateSnapshotTaskOutcome> CreateSnapshotTaskOutcomeCallable;
                typedef std::function<void(const TiwClient*, const Model::CreateSnapshotTaskRequest&, CreateSnapshotTaskOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateSnapshotTaskAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateTranscodeResponse> CreateTranscodeOutcome;
                typedef std::future<CreateTranscodeOutcome> CreateTranscodeOutcomeCallable;
                typedef std::function<void(const TiwClient*, const Model::CreateTranscodeRequest&, CreateTranscodeOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateTranscodeAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateVideoGenerationTaskResponse> CreateVideoGenerationTaskOutcome;
                typedef std::future<CreateVideoGenerationTaskOutcome> CreateVideoGenerationTaskOutcomeCallable;
                typedef std::function<void(const TiwClient*, const Model::CreateVideoGenerationTaskRequest&, CreateVideoGenerationTaskOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateVideoGenerationTaskAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeAPIServiceResponse> DescribeAPIServiceOutcome;
                typedef std::future<DescribeAPIServiceOutcome> DescribeAPIServiceOutcomeCallable;
                typedef std::function<void(const TiwClient*, const Model::DescribeAPIServiceRequest&, DescribeAPIServiceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAPIServiceAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeApplicationInfosResponse> DescribeApplicationInfosOutcome;
                typedef std::future<DescribeApplicationInfosOutcome> DescribeApplicationInfosOutcomeCallable;
                typedef std::function<void(const TiwClient*, const Model::DescribeApplicationInfosRequest&, DescribeApplicationInfosOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeApplicationInfosAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeApplicationUsageResponse> DescribeApplicationUsageOutcome;
                typedef std::future<DescribeApplicationUsageOutcome> DescribeApplicationUsageOutcomeCallable;
                typedef std::function<void(const TiwClient*, const Model::DescribeApplicationUsageRequest&, DescribeApplicationUsageOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeApplicationUsageAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeBoardSDKLogResponse> DescribeBoardSDKLogOutcome;
                typedef std::future<DescribeBoardSDKLogOutcome> DescribeBoardSDKLogOutcomeCallable;
                typedef std::function<void(const TiwClient*, const Model::DescribeBoardSDKLogRequest&, DescribeBoardSDKLogOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeBoardSDKLogAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeIMApplicationsResponse> DescribeIMApplicationsOutcome;
                typedef std::future<DescribeIMApplicationsOutcome> DescribeIMApplicationsOutcomeCallable;
                typedef std::function<void(const TiwClient*, const Model::DescribeIMApplicationsRequest&, DescribeIMApplicationsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeIMApplicationsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeOfflineRecordResponse> DescribeOfflineRecordOutcome;
                typedef std::future<DescribeOfflineRecordOutcome> DescribeOfflineRecordOutcomeCallable;
                typedef std::function<void(const TiwClient*, const Model::DescribeOfflineRecordRequest&, DescribeOfflineRecordOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeOfflineRecordAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeOfflineRecordCallbackResponse> DescribeOfflineRecordCallbackOutcome;
                typedef std::future<DescribeOfflineRecordCallbackOutcome> DescribeOfflineRecordCallbackOutcomeCallable;
                typedef std::function<void(const TiwClient*, const Model::DescribeOfflineRecordCallbackRequest&, DescribeOfflineRecordCallbackOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeOfflineRecordCallbackAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeOnlineRecordResponse> DescribeOnlineRecordOutcome;
                typedef std::future<DescribeOnlineRecordOutcome> DescribeOnlineRecordOutcomeCallable;
                typedef std::function<void(const TiwClient*, const Model::DescribeOnlineRecordRequest&, DescribeOnlineRecordOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeOnlineRecordAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeOnlineRecordCallbackResponse> DescribeOnlineRecordCallbackOutcome;
                typedef std::future<DescribeOnlineRecordCallbackOutcome> DescribeOnlineRecordCallbackOutcomeCallable;
                typedef std::function<void(const TiwClient*, const Model::DescribeOnlineRecordCallbackRequest&, DescribeOnlineRecordCallbackOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeOnlineRecordCallbackAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribePPTCheckResponse> DescribePPTCheckOutcome;
                typedef std::future<DescribePPTCheckOutcome> DescribePPTCheckOutcomeCallable;
                typedef std::function<void(const TiwClient*, const Model::DescribePPTCheckRequest&, DescribePPTCheckOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribePPTCheckAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribePPTCheckCallbackResponse> DescribePPTCheckCallbackOutcome;
                typedef std::future<DescribePPTCheckCallbackOutcome> DescribePPTCheckCallbackOutcomeCallable;
                typedef std::function<void(const TiwClient*, const Model::DescribePPTCheckCallbackRequest&, DescribePPTCheckCallbackOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribePPTCheckCallbackAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribePostpaidUsageResponse> DescribePostpaidUsageOutcome;
                typedef std::future<DescribePostpaidUsageOutcome> DescribePostpaidUsageOutcomeCallable;
                typedef std::function<void(const TiwClient*, const Model::DescribePostpaidUsageRequest&, DescribePostpaidUsageOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribePostpaidUsageAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeQualityMetricsResponse> DescribeQualityMetricsOutcome;
                typedef std::future<DescribeQualityMetricsOutcome> DescribeQualityMetricsOutcomeCallable;
                typedef std::function<void(const TiwClient*, const Model::DescribeQualityMetricsRequest&, DescribeQualityMetricsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeQualityMetricsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeRecordSearchResponse> DescribeRecordSearchOutcome;
                typedef std::future<DescribeRecordSearchOutcome> DescribeRecordSearchOutcomeCallable;
                typedef std::function<void(const TiwClient*, const Model::DescribeRecordSearchRequest&, DescribeRecordSearchOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeRecordSearchAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeRoomListResponse> DescribeRoomListOutcome;
                typedef std::future<DescribeRoomListOutcome> DescribeRoomListOutcomeCallable;
                typedef std::function<void(const TiwClient*, const Model::DescribeRoomListRequest&, DescribeRoomListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeRoomListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeRunningTasksResponse> DescribeRunningTasksOutcome;
                typedef std::future<DescribeRunningTasksOutcome> DescribeRunningTasksOutcomeCallable;
                typedef std::function<void(const TiwClient*, const Model::DescribeRunningTasksRequest&, DescribeRunningTasksOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeRunningTasksAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeSnapshotTaskResponse> DescribeSnapshotTaskOutcome;
                typedef std::future<DescribeSnapshotTaskOutcome> DescribeSnapshotTaskOutcomeCallable;
                typedef std::function<void(const TiwClient*, const Model::DescribeSnapshotTaskRequest&, DescribeSnapshotTaskOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeSnapshotTaskAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeTIWDailyUsageResponse> DescribeTIWDailyUsageOutcome;
                typedef std::future<DescribeTIWDailyUsageOutcome> DescribeTIWDailyUsageOutcomeCallable;
                typedef std::function<void(const TiwClient*, const Model::DescribeTIWDailyUsageRequest&, DescribeTIWDailyUsageOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeTIWDailyUsageAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeTIWRoomDailyUsageResponse> DescribeTIWRoomDailyUsageOutcome;
                typedef std::future<DescribeTIWRoomDailyUsageOutcome> DescribeTIWRoomDailyUsageOutcomeCallable;
                typedef std::function<void(const TiwClient*, const Model::DescribeTIWRoomDailyUsageRequest&, DescribeTIWRoomDailyUsageOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeTIWRoomDailyUsageAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeTranscodeResponse> DescribeTranscodeOutcome;
                typedef std::future<DescribeTranscodeOutcome> DescribeTranscodeOutcomeCallable;
                typedef std::function<void(const TiwClient*, const Model::DescribeTranscodeRequest&, DescribeTranscodeOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeTranscodeAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeTranscodeCallbackResponse> DescribeTranscodeCallbackOutcome;
                typedef std::future<DescribeTranscodeCallbackOutcome> DescribeTranscodeCallbackOutcomeCallable;
                typedef std::function<void(const TiwClient*, const Model::DescribeTranscodeCallbackRequest&, DescribeTranscodeCallbackOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeTranscodeCallbackAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeTranscodeSearchResponse> DescribeTranscodeSearchOutcome;
                typedef std::future<DescribeTranscodeSearchOutcome> DescribeTranscodeSearchOutcomeCallable;
                typedef std::function<void(const TiwClient*, const Model::DescribeTranscodeSearchRequest&, DescribeTranscodeSearchOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeTranscodeSearchAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeUsageSummaryResponse> DescribeUsageSummaryOutcome;
                typedef std::future<DescribeUsageSummaryOutcome> DescribeUsageSummaryOutcomeCallable;
                typedef std::function<void(const TiwClient*, const Model::DescribeUsageSummaryRequest&, DescribeUsageSummaryOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeUsageSummaryAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeUserListResponse> DescribeUserListOutcome;
                typedef std::future<DescribeUserListOutcome> DescribeUserListOutcomeCallable;
                typedef std::function<void(const TiwClient*, const Model::DescribeUserListRequest&, DescribeUserListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeUserListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeUserResourcesResponse> DescribeUserResourcesOutcome;
                typedef std::future<DescribeUserResourcesOutcome> DescribeUserResourcesOutcomeCallable;
                typedef std::function<void(const TiwClient*, const Model::DescribeUserResourcesRequest&, DescribeUserResourcesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeUserResourcesAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeUserStatusResponse> DescribeUserStatusOutcome;
                typedef std::future<DescribeUserStatusOutcome> DescribeUserStatusOutcomeCallable;
                typedef std::function<void(const TiwClient*, const Model::DescribeUserStatusRequest&, DescribeUserStatusOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeUserStatusAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeVideoGenerationTaskResponse> DescribeVideoGenerationTaskOutcome;
                typedef std::future<DescribeVideoGenerationTaskOutcome> DescribeVideoGenerationTaskOutcomeCallable;
                typedef std::function<void(const TiwClient*, const Model::DescribeVideoGenerationTaskRequest&, DescribeVideoGenerationTaskOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeVideoGenerationTaskAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeVideoGenerationTaskCallbackResponse> DescribeVideoGenerationTaskCallbackOutcome;
                typedef std::future<DescribeVideoGenerationTaskCallbackOutcome> DescribeVideoGenerationTaskCallbackOutcomeCallable;
                typedef std::function<void(const TiwClient*, const Model::DescribeVideoGenerationTaskCallbackRequest&, DescribeVideoGenerationTaskCallbackOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeVideoGenerationTaskCallbackAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeWarningCallbackResponse> DescribeWarningCallbackOutcome;
                typedef std::future<DescribeWarningCallbackOutcome> DescribeWarningCallbackOutcomeCallable;
                typedef std::function<void(const TiwClient*, const Model::DescribeWarningCallbackRequest&, DescribeWarningCallbackOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeWarningCallbackAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeWhiteboardApplicationConfigResponse> DescribeWhiteboardApplicationConfigOutcome;
                typedef std::future<DescribeWhiteboardApplicationConfigOutcome> DescribeWhiteboardApplicationConfigOutcomeCallable;
                typedef std::function<void(const TiwClient*, const Model::DescribeWhiteboardApplicationConfigRequest&, DescribeWhiteboardApplicationConfigOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeWhiteboardApplicationConfigAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeWhiteboardBucketConfigResponse> DescribeWhiteboardBucketConfigOutcome;
                typedef std::future<DescribeWhiteboardBucketConfigOutcome> DescribeWhiteboardBucketConfigOutcomeCallable;
                typedef std::function<void(const TiwClient*, const Model::DescribeWhiteboardBucketConfigRequest&, DescribeWhiteboardBucketConfigOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeWhiteboardBucketConfigAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeWhiteboardPushResponse> DescribeWhiteboardPushOutcome;
                typedef std::future<DescribeWhiteboardPushOutcome> DescribeWhiteboardPushOutcomeCallable;
                typedef std::function<void(const TiwClient*, const Model::DescribeWhiteboardPushRequest&, DescribeWhiteboardPushOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeWhiteboardPushAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeWhiteboardPushCallbackResponse> DescribeWhiteboardPushCallbackOutcome;
                typedef std::future<DescribeWhiteboardPushCallbackOutcome> DescribeWhiteboardPushCallbackOutcomeCallable;
                typedef std::function<void(const TiwClient*, const Model::DescribeWhiteboardPushCallbackRequest&, DescribeWhiteboardPushCallbackOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeWhiteboardPushCallbackAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeWhiteboardPushSearchResponse> DescribeWhiteboardPushSearchOutcome;
                typedef std::future<DescribeWhiteboardPushSearchOutcome> DescribeWhiteboardPushSearchOutcomeCallable;
                typedef std::function<void(const TiwClient*, const Model::DescribeWhiteboardPushSearchRequest&, DescribeWhiteboardPushSearchOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeWhiteboardPushSearchAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyApplicationResponse> ModifyApplicationOutcome;
                typedef std::future<ModifyApplicationOutcome> ModifyApplicationOutcomeCallable;
                typedef std::function<void(const TiwClient*, const Model::ModifyApplicationRequest&, ModifyApplicationOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyApplicationAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyAutoRenewFlagResponse> ModifyAutoRenewFlagOutcome;
                typedef std::future<ModifyAutoRenewFlagOutcome> ModifyAutoRenewFlagOutcomeCallable;
                typedef std::function<void(const TiwClient*, const Model::ModifyAutoRenewFlagRequest&, ModifyAutoRenewFlagOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyAutoRenewFlagAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyWhiteboardApplicationConfigResponse> ModifyWhiteboardApplicationConfigOutcome;
                typedef std::future<ModifyWhiteboardApplicationConfigOutcome> ModifyWhiteboardApplicationConfigOutcomeCallable;
                typedef std::function<void(const TiwClient*, const Model::ModifyWhiteboardApplicationConfigRequest&, ModifyWhiteboardApplicationConfigOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyWhiteboardApplicationConfigAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyWhiteboardBucketConfigResponse> ModifyWhiteboardBucketConfigOutcome;
                typedef std::future<ModifyWhiteboardBucketConfigOutcome> ModifyWhiteboardBucketConfigOutcomeCallable;
                typedef std::function<void(const TiwClient*, const Model::ModifyWhiteboardBucketConfigRequest&, ModifyWhiteboardBucketConfigOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyWhiteboardBucketConfigAsyncHandler;
                typedef Outcome<Core::Error, Model::PauseOnlineRecordResponse> PauseOnlineRecordOutcome;
                typedef std::future<PauseOnlineRecordOutcome> PauseOnlineRecordOutcomeCallable;
                typedef std::function<void(const TiwClient*, const Model::PauseOnlineRecordRequest&, PauseOnlineRecordOutcome, const std::shared_ptr<const AsyncCallerContext>&)> PauseOnlineRecordAsyncHandler;
                typedef Outcome<Core::Error, Model::ResumeOnlineRecordResponse> ResumeOnlineRecordOutcome;
                typedef std::future<ResumeOnlineRecordOutcome> ResumeOnlineRecordOutcomeCallable;
                typedef std::function<void(const TiwClient*, const Model::ResumeOnlineRecordRequest&, ResumeOnlineRecordOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ResumeOnlineRecordAsyncHandler;
                typedef Outcome<Core::Error, Model::SetOfflineRecordCallbackResponse> SetOfflineRecordCallbackOutcome;
                typedef std::future<SetOfflineRecordCallbackOutcome> SetOfflineRecordCallbackOutcomeCallable;
                typedef std::function<void(const TiwClient*, const Model::SetOfflineRecordCallbackRequest&, SetOfflineRecordCallbackOutcome, const std::shared_ptr<const AsyncCallerContext>&)> SetOfflineRecordCallbackAsyncHandler;
                typedef Outcome<Core::Error, Model::SetOnlineRecordCallbackResponse> SetOnlineRecordCallbackOutcome;
                typedef std::future<SetOnlineRecordCallbackOutcome> SetOnlineRecordCallbackOutcomeCallable;
                typedef std::function<void(const TiwClient*, const Model::SetOnlineRecordCallbackRequest&, SetOnlineRecordCallbackOutcome, const std::shared_ptr<const AsyncCallerContext>&)> SetOnlineRecordCallbackAsyncHandler;
                typedef Outcome<Core::Error, Model::SetOnlineRecordCallbackKeyResponse> SetOnlineRecordCallbackKeyOutcome;
                typedef std::future<SetOnlineRecordCallbackKeyOutcome> SetOnlineRecordCallbackKeyOutcomeCallable;
                typedef std::function<void(const TiwClient*, const Model::SetOnlineRecordCallbackKeyRequest&, SetOnlineRecordCallbackKeyOutcome, const std::shared_ptr<const AsyncCallerContext>&)> SetOnlineRecordCallbackKeyAsyncHandler;
                typedef Outcome<Core::Error, Model::SetPPTCheckCallbackResponse> SetPPTCheckCallbackOutcome;
                typedef std::future<SetPPTCheckCallbackOutcome> SetPPTCheckCallbackOutcomeCallable;
                typedef std::function<void(const TiwClient*, const Model::SetPPTCheckCallbackRequest&, SetPPTCheckCallbackOutcome, const std::shared_ptr<const AsyncCallerContext>&)> SetPPTCheckCallbackAsyncHandler;
                typedef Outcome<Core::Error, Model::SetPPTCheckCallbackKeyResponse> SetPPTCheckCallbackKeyOutcome;
                typedef std::future<SetPPTCheckCallbackKeyOutcome> SetPPTCheckCallbackKeyOutcomeCallable;
                typedef std::function<void(const TiwClient*, const Model::SetPPTCheckCallbackKeyRequest&, SetPPTCheckCallbackKeyOutcome, const std::shared_ptr<const AsyncCallerContext>&)> SetPPTCheckCallbackKeyAsyncHandler;
                typedef Outcome<Core::Error, Model::SetTranscodeCallbackResponse> SetTranscodeCallbackOutcome;
                typedef std::future<SetTranscodeCallbackOutcome> SetTranscodeCallbackOutcomeCallable;
                typedef std::function<void(const TiwClient*, const Model::SetTranscodeCallbackRequest&, SetTranscodeCallbackOutcome, const std::shared_ptr<const AsyncCallerContext>&)> SetTranscodeCallbackAsyncHandler;
                typedef Outcome<Core::Error, Model::SetTranscodeCallbackKeyResponse> SetTranscodeCallbackKeyOutcome;
                typedef std::future<SetTranscodeCallbackKeyOutcome> SetTranscodeCallbackKeyOutcomeCallable;
                typedef std::function<void(const TiwClient*, const Model::SetTranscodeCallbackKeyRequest&, SetTranscodeCallbackKeyOutcome, const std::shared_ptr<const AsyncCallerContext>&)> SetTranscodeCallbackKeyAsyncHandler;
                typedef Outcome<Core::Error, Model::SetVideoGenerationTaskCallbackResponse> SetVideoGenerationTaskCallbackOutcome;
                typedef std::future<SetVideoGenerationTaskCallbackOutcome> SetVideoGenerationTaskCallbackOutcomeCallable;
                typedef std::function<void(const TiwClient*, const Model::SetVideoGenerationTaskCallbackRequest&, SetVideoGenerationTaskCallbackOutcome, const std::shared_ptr<const AsyncCallerContext>&)> SetVideoGenerationTaskCallbackAsyncHandler;
                typedef Outcome<Core::Error, Model::SetVideoGenerationTaskCallbackKeyResponse> SetVideoGenerationTaskCallbackKeyOutcome;
                typedef std::future<SetVideoGenerationTaskCallbackKeyOutcome> SetVideoGenerationTaskCallbackKeyOutcomeCallable;
                typedef std::function<void(const TiwClient*, const Model::SetVideoGenerationTaskCallbackKeyRequest&, SetVideoGenerationTaskCallbackKeyOutcome, const std::shared_ptr<const AsyncCallerContext>&)> SetVideoGenerationTaskCallbackKeyAsyncHandler;
                typedef Outcome<Core::Error, Model::SetWarningCallbackResponse> SetWarningCallbackOutcome;
                typedef std::future<SetWarningCallbackOutcome> SetWarningCallbackOutcomeCallable;
                typedef std::function<void(const TiwClient*, const Model::SetWarningCallbackRequest&, SetWarningCallbackOutcome, const std::shared_ptr<const AsyncCallerContext>&)> SetWarningCallbackAsyncHandler;
                typedef Outcome<Core::Error, Model::SetWhiteboardPushCallbackResponse> SetWhiteboardPushCallbackOutcome;
                typedef std::future<SetWhiteboardPushCallbackOutcome> SetWhiteboardPushCallbackOutcomeCallable;
                typedef std::function<void(const TiwClient*, const Model::SetWhiteboardPushCallbackRequest&, SetWhiteboardPushCallbackOutcome, const std::shared_ptr<const AsyncCallerContext>&)> SetWhiteboardPushCallbackAsyncHandler;
                typedef Outcome<Core::Error, Model::SetWhiteboardPushCallbackKeyResponse> SetWhiteboardPushCallbackKeyOutcome;
                typedef std::future<SetWhiteboardPushCallbackKeyOutcome> SetWhiteboardPushCallbackKeyOutcomeCallable;
                typedef std::function<void(const TiwClient*, const Model::SetWhiteboardPushCallbackKeyRequest&, SetWhiteboardPushCallbackKeyOutcome, const std::shared_ptr<const AsyncCallerContext>&)> SetWhiteboardPushCallbackKeyAsyncHandler;
                typedef Outcome<Core::Error, Model::StartOnlineRecordResponse> StartOnlineRecordOutcome;
                typedef std::future<StartOnlineRecordOutcome> StartOnlineRecordOutcomeCallable;
                typedef std::function<void(const TiwClient*, const Model::StartOnlineRecordRequest&, StartOnlineRecordOutcome, const std::shared_ptr<const AsyncCallerContext>&)> StartOnlineRecordAsyncHandler;
                typedef Outcome<Core::Error, Model::StartWhiteboardPushResponse> StartWhiteboardPushOutcome;
                typedef std::future<StartWhiteboardPushOutcome> StartWhiteboardPushOutcomeCallable;
                typedef std::function<void(const TiwClient*, const Model::StartWhiteboardPushRequest&, StartWhiteboardPushOutcome, const std::shared_ptr<const AsyncCallerContext>&)> StartWhiteboardPushAsyncHandler;
                typedef Outcome<Core::Error, Model::StopOnlineRecordResponse> StopOnlineRecordOutcome;
                typedef std::future<StopOnlineRecordOutcome> StopOnlineRecordOutcomeCallable;
                typedef std::function<void(const TiwClient*, const Model::StopOnlineRecordRequest&, StopOnlineRecordOutcome, const std::shared_ptr<const AsyncCallerContext>&)> StopOnlineRecordAsyncHandler;
                typedef Outcome<Core::Error, Model::StopWhiteboardPushResponse> StopWhiteboardPushOutcome;
                typedef std::future<StopWhiteboardPushOutcome> StopWhiteboardPushOutcomeCallable;
                typedef std::function<void(const TiwClient*, const Model::StopWhiteboardPushRequest&, StopWhiteboardPushOutcome, const std::shared_ptr<const AsyncCallerContext>&)> StopWhiteboardPushAsyncHandler;



                /**
                 *申请互动白板试用，默认15天
                 * @param req ApplyTiwTrialRequest
                 * @return ApplyTiwTrialOutcome
                 */
                ApplyTiwTrialOutcome ApplyTiwTrial(const Model::ApplyTiwTrialRequest &request);
                void ApplyTiwTrialAsync(const Model::ApplyTiwTrialRequest& request, const ApplyTiwTrialAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ApplyTiwTrialOutcomeCallable ApplyTiwTrialCallable(const Model::ApplyTiwTrialRequest& request);

                /**
                 *创建白板应用
                 * @param req CreateApplicationRequest
                 * @return CreateApplicationOutcome
                 */
                CreateApplicationOutcome CreateApplication(const Model::CreateApplicationRequest &request);
                void CreateApplicationAsync(const Model::CreateApplicationRequest& request, const CreateApplicationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateApplicationOutcomeCallable CreateApplicationCallable(const Model::CreateApplicationRequest& request);

                /**
                 *创建课后录制任务
                 * @param req CreateOfflineRecordRequest
                 * @return CreateOfflineRecordOutcome
                 */
                CreateOfflineRecordOutcome CreateOfflineRecord(const Model::CreateOfflineRecordRequest &request);
                void CreateOfflineRecordAsync(const Model::CreateOfflineRecordRequest& request, const CreateOfflineRecordAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateOfflineRecordOutcomeCallable CreateOfflineRecordCallable(const Model::CreateOfflineRecordRequest& request);

                /**
                 *检测PPT文件，识别PPT中包含的动态转码任务（Transcode）不支持的元素
                 * @param req CreatePPTCheckTaskRequest
                 * @return CreatePPTCheckTaskOutcome
                 */
                CreatePPTCheckTaskOutcome CreatePPTCheckTask(const Model::CreatePPTCheckTaskRequest &request);
                void CreatePPTCheckTaskAsync(const Model::CreatePPTCheckTaskRequest& request, const CreatePPTCheckTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreatePPTCheckTaskOutcomeCallable CreatePPTCheckTaskCallable(const Model::CreatePPTCheckTaskRequest& request);

                /**
                 *创建白板板书生成任务, 在任务结束后，如果提供了回调地址，将通过回调地址通知板书生成结果
                 * @param req CreateSnapshotTaskRequest
                 * @return CreateSnapshotTaskOutcome
                 */
                CreateSnapshotTaskOutcome CreateSnapshotTask(const Model::CreateSnapshotTaskRequest &request);
                void CreateSnapshotTaskAsync(const Model::CreateSnapshotTaskRequest& request, const CreateSnapshotTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateSnapshotTaskOutcomeCallable CreateSnapshotTaskCallable(const Model::CreateSnapshotTaskRequest& request);

                /**
                 *创建一个文档转码任务
                 * @param req CreateTranscodeRequest
                 * @return CreateTranscodeOutcome
                 */
                CreateTranscodeOutcome CreateTranscode(const Model::CreateTranscodeRequest &request);
                void CreateTranscodeAsync(const Model::CreateTranscodeRequest& request, const CreateTranscodeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateTranscodeOutcomeCallable CreateTranscodeCallable(const Model::CreateTranscodeRequest& request);

                /**
                 *创建视频生成任务
                 * @param req CreateVideoGenerationTaskRequest
                 * @return CreateVideoGenerationTaskOutcome
                 */
                CreateVideoGenerationTaskOutcome CreateVideoGenerationTask(const Model::CreateVideoGenerationTaskRequest &request);
                void CreateVideoGenerationTaskAsync(const Model::CreateVideoGenerationTaskRequest& request, const CreateVideoGenerationTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateVideoGenerationTaskOutcomeCallable CreateVideoGenerationTaskCallable(const Model::CreateVideoGenerationTaskRequest& request);

                /**
                 *通过服务角色调用其他云产品API接口获取信息
                 * @param req DescribeAPIServiceRequest
                 * @return DescribeAPIServiceOutcome
                 */
                DescribeAPIServiceOutcome DescribeAPIService(const Model::DescribeAPIServiceRequest &request);
                void DescribeAPIServiceAsync(const Model::DescribeAPIServiceRequest& request, const DescribeAPIServiceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeAPIServiceOutcomeCallable DescribeAPIServiceCallable(const Model::DescribeAPIServiceRequest& request);

                /**
                 *查询白板应用详情
                 * @param req DescribeApplicationInfosRequest
                 * @return DescribeApplicationInfosOutcome
                 */
                DescribeApplicationInfosOutcome DescribeApplicationInfos(const Model::DescribeApplicationInfosRequest &request);
                void DescribeApplicationInfosAsync(const Model::DescribeApplicationInfosRequest& request, const DescribeApplicationInfosAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeApplicationInfosOutcomeCallable DescribeApplicationInfosCallable(const Model::DescribeApplicationInfosRequest& request);

                /**
                 *查询互动白板各个子产品用量
                 * @param req DescribeApplicationUsageRequest
                 * @return DescribeApplicationUsageOutcome
                 */
                DescribeApplicationUsageOutcome DescribeApplicationUsage(const Model::DescribeApplicationUsageRequest &request);
                void DescribeApplicationUsageAsync(const Model::DescribeApplicationUsageRequest& request, const DescribeApplicationUsageAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeApplicationUsageOutcomeCallable DescribeApplicationUsageCallable(const Model::DescribeApplicationUsageRequest& request);

                /**
                 *查询客户端白板日志
                 * @param req DescribeBoardSDKLogRequest
                 * @return DescribeBoardSDKLogOutcome
                 */
                DescribeBoardSDKLogOutcome DescribeBoardSDKLog(const Model::DescribeBoardSDKLogRequest &request);
                void DescribeBoardSDKLogAsync(const Model::DescribeBoardSDKLogRequest& request, const DescribeBoardSDKLogAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeBoardSDKLogOutcomeCallable DescribeBoardSDKLogCallable(const Model::DescribeBoardSDKLogRequest& request);

                /**
                 *查询可用于创建白板应用的IM应用列表
                 * @param req DescribeIMApplicationsRequest
                 * @return DescribeIMApplicationsOutcome
                 */
                DescribeIMApplicationsOutcome DescribeIMApplications(const Model::DescribeIMApplicationsRequest &request);
                void DescribeIMApplicationsAsync(const Model::DescribeIMApplicationsRequest& request, const DescribeIMApplicationsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeIMApplicationsOutcomeCallable DescribeIMApplicationsCallable(const Model::DescribeIMApplicationsRequest& request);

                /**
                 *查询课后录制任务的进度与录制结果等相关信息
                 * @param req DescribeOfflineRecordRequest
                 * @return DescribeOfflineRecordOutcome
                 */
                DescribeOfflineRecordOutcome DescribeOfflineRecord(const Model::DescribeOfflineRecordRequest &request);
                void DescribeOfflineRecordAsync(const Model::DescribeOfflineRecordRequest& request, const DescribeOfflineRecordAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeOfflineRecordOutcomeCallable DescribeOfflineRecordCallable(const Model::DescribeOfflineRecordRequest& request);

                /**
                 *查询课后录制回调地址
                 * @param req DescribeOfflineRecordCallbackRequest
                 * @return DescribeOfflineRecordCallbackOutcome
                 */
                DescribeOfflineRecordCallbackOutcome DescribeOfflineRecordCallback(const Model::DescribeOfflineRecordCallbackRequest &request);
                void DescribeOfflineRecordCallbackAsync(const Model::DescribeOfflineRecordCallbackRequest& request, const DescribeOfflineRecordCallbackAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeOfflineRecordCallbackOutcomeCallable DescribeOfflineRecordCallbackCallable(const Model::DescribeOfflineRecordCallbackRequest& request);

                /**
                 *查询录制任务状态与结果
                 * @param req DescribeOnlineRecordRequest
                 * @return DescribeOnlineRecordOutcome
                 */
                DescribeOnlineRecordOutcome DescribeOnlineRecord(const Model::DescribeOnlineRecordRequest &request);
                void DescribeOnlineRecordAsync(const Model::DescribeOnlineRecordRequest& request, const DescribeOnlineRecordAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeOnlineRecordOutcomeCallable DescribeOnlineRecordCallable(const Model::DescribeOnlineRecordRequest& request);

                /**
                 *查询实时录制回调地址
                 * @param req DescribeOnlineRecordCallbackRequest
                 * @return DescribeOnlineRecordCallbackOutcome
                 */
                DescribeOnlineRecordCallbackOutcome DescribeOnlineRecordCallback(const Model::DescribeOnlineRecordCallbackRequest &request);
                void DescribeOnlineRecordCallbackAsync(const Model::DescribeOnlineRecordCallbackRequest& request, const DescribeOnlineRecordCallbackAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeOnlineRecordCallbackOutcomeCallable DescribeOnlineRecordCallbackCallable(const Model::DescribeOnlineRecordCallbackRequest& request);

                /**
                 *查询PPT检测任务的执行进度或结果
                 * @param req DescribePPTCheckRequest
                 * @return DescribePPTCheckOutcome
                 */
                DescribePPTCheckOutcome DescribePPTCheck(const Model::DescribePPTCheckRequest &request);
                void DescribePPTCheckAsync(const Model::DescribePPTCheckRequest& request, const DescribePPTCheckAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribePPTCheckOutcomeCallable DescribePPTCheckCallable(const Model::DescribePPTCheckRequest& request);

                /**
                 *查询PPT检测任务回调地址
                 * @param req DescribePPTCheckCallbackRequest
                 * @return DescribePPTCheckCallbackOutcome
                 */
                DescribePPTCheckCallbackOutcome DescribePPTCheckCallback(const Model::DescribePPTCheckCallbackRequest &request);
                void DescribePPTCheckCallbackAsync(const Model::DescribePPTCheckCallbackRequest& request, const DescribePPTCheckCallbackAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribePPTCheckCallbackOutcomeCallable DescribePPTCheckCallbackCallable(const Model::DescribePPTCheckCallbackRequest& request);

                /**
                 *查询用户后付费用量
                 * @param req DescribePostpaidUsageRequest
                 * @return DescribePostpaidUsageOutcome
                 */
                DescribePostpaidUsageOutcome DescribePostpaidUsage(const Model::DescribePostpaidUsageRequest &request);
                void DescribePostpaidUsageAsync(const Model::DescribePostpaidUsageRequest& request, const DescribePostpaidUsageAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribePostpaidUsageOutcomeCallable DescribePostpaidUsageCallable(const Model::DescribePostpaidUsageRequest& request);

                /**
                 *查询互动白板质量数据
                 * @param req DescribeQualityMetricsRequest
                 * @return DescribeQualityMetricsOutcome
                 */
                DescribeQualityMetricsOutcome DescribeQualityMetrics(const Model::DescribeQualityMetricsRequest &request);
                void DescribeQualityMetricsAsync(const Model::DescribeQualityMetricsRequest& request, const DescribeQualityMetricsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeQualityMetricsOutcomeCallable DescribeQualityMetricsCallable(const Model::DescribeQualityMetricsRequest& request);

                /**
                 *根据房间号搜索实时录制任务
                 * @param req DescribeRecordSearchRequest
                 * @return DescribeRecordSearchOutcome
                 */
                DescribeRecordSearchOutcome DescribeRecordSearch(const Model::DescribeRecordSearchRequest &request);
                void DescribeRecordSearchAsync(const Model::DescribeRecordSearchRequest& request, const DescribeRecordSearchAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeRecordSearchOutcomeCallable DescribeRecordSearchCallable(const Model::DescribeRecordSearchRequest& request);

                /**
                 *查询白板房间列表
                 * @param req DescribeRoomListRequest
                 * @return DescribeRoomListOutcome
                 */
                DescribeRoomListOutcome DescribeRoomList(const Model::DescribeRoomListRequest &request);
                void DescribeRoomListAsync(const Model::DescribeRoomListRequest& request, const DescribeRoomListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeRoomListOutcomeCallable DescribeRoomListCallable(const Model::DescribeRoomListRequest& request);

                /**
                 *根据指定的任务类型，获取当前正在执行中的任务列表。只能查询最近3天内创建的任务。
                 * @param req DescribeRunningTasksRequest
                 * @return DescribeRunningTasksOutcome
                 */
                DescribeRunningTasksOutcome DescribeRunningTasks(const Model::DescribeRunningTasksRequest &request);
                void DescribeRunningTasksAsync(const Model::DescribeRunningTasksRequest& request, const DescribeRunningTasksAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeRunningTasksOutcomeCallable DescribeRunningTasksCallable(const Model::DescribeRunningTasksRequest& request);

                /**
                 *获取指定白板板书生成任务信息
                 * @param req DescribeSnapshotTaskRequest
                 * @return DescribeSnapshotTaskOutcome
                 */
                DescribeSnapshotTaskOutcome DescribeSnapshotTask(const Model::DescribeSnapshotTaskRequest &request);
                void DescribeSnapshotTaskAsync(const Model::DescribeSnapshotTaskRequest& request, const DescribeSnapshotTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeSnapshotTaskOutcomeCallable DescribeSnapshotTaskCallable(const Model::DescribeSnapshotTaskRequest& request);

                /**
                 *查询互动白板天维度计费用量。
1. 单次查询统计区间最多不能超过31天。
2. 由于统计延迟等原因，暂时不支持查询当天数据，建议在次日上午7点以后再来查询前一天的用量，例如在10月27日上午7点后，再来查询到10月26日整天的用量

                 * @param req DescribeTIWDailyUsageRequest
                 * @return DescribeTIWDailyUsageOutcome
                 */
                DescribeTIWDailyUsageOutcome DescribeTIWDailyUsage(const Model::DescribeTIWDailyUsageRequest &request);
                void DescribeTIWDailyUsageAsync(const Model::DescribeTIWDailyUsageRequest& request, const DescribeTIWDailyUsageAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeTIWDailyUsageOutcomeCallable DescribeTIWDailyUsageCallable(const Model::DescribeTIWDailyUsageRequest& request);

                /**
                 *查询互动白板房间维度每天计费用量。
1. 单次查询统计区间最多不能超过31天。
2. 由于统计延迟等原因，暂时不支持查询当天数据，建议在次日上午7点以后再来查询前一天的用量，例如在10月27日上午7点后，再来查询到10月26日整天的用量

                 * @param req DescribeTIWRoomDailyUsageRequest
                 * @return DescribeTIWRoomDailyUsageOutcome
                 */
                DescribeTIWRoomDailyUsageOutcome DescribeTIWRoomDailyUsage(const Model::DescribeTIWRoomDailyUsageRequest &request);
                void DescribeTIWRoomDailyUsageAsync(const Model::DescribeTIWRoomDailyUsageRequest& request, const DescribeTIWRoomDailyUsageAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeTIWRoomDailyUsageOutcomeCallable DescribeTIWRoomDailyUsageCallable(const Model::DescribeTIWRoomDailyUsageRequest& request);

                /**
                 *查询文档转码任务的执行进度与转码结果
                 * @param req DescribeTranscodeRequest
                 * @return DescribeTranscodeOutcome
                 */
                DescribeTranscodeOutcome DescribeTranscode(const Model::DescribeTranscodeRequest &request);
                void DescribeTranscodeAsync(const Model::DescribeTranscodeRequest& request, const DescribeTranscodeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeTranscodeOutcomeCallable DescribeTranscodeCallable(const Model::DescribeTranscodeRequest& request);

                /**
                 *查询文档转码回调地址
                 * @param req DescribeTranscodeCallbackRequest
                 * @return DescribeTranscodeCallbackOutcome
                 */
                DescribeTranscodeCallbackOutcome DescribeTranscodeCallback(const Model::DescribeTranscodeCallbackRequest &request);
                void DescribeTranscodeCallbackAsync(const Model::DescribeTranscodeCallbackRequest& request, const DescribeTranscodeCallbackAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeTranscodeCallbackOutcomeCallable DescribeTranscodeCallbackCallable(const Model::DescribeTranscodeCallbackRequest& request);

                /**
                 *按文档名称搜索转码任务
                 * @param req DescribeTranscodeSearchRequest
                 * @return DescribeTranscodeSearchOutcome
                 */
                DescribeTranscodeSearchOutcome DescribeTranscodeSearch(const Model::DescribeTranscodeSearchRequest &request);
                void DescribeTranscodeSearchAsync(const Model::DescribeTranscodeSearchRequest& request, const DescribeTranscodeSearchAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeTranscodeSearchOutcomeCallable DescribeTranscodeSearchCallable(const Model::DescribeTranscodeSearchRequest& request);

                /**
                 *查询指定时间段内子产品的用量汇总
                 * @param req DescribeUsageSummaryRequest
                 * @return DescribeUsageSummaryOutcome
                 */
                DescribeUsageSummaryOutcome DescribeUsageSummary(const Model::DescribeUsageSummaryRequest &request);
                void DescribeUsageSummaryAsync(const Model::DescribeUsageSummaryRequest& request, const DescribeUsageSummaryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeUsageSummaryOutcomeCallable DescribeUsageSummaryCallable(const Model::DescribeUsageSummaryRequest& request);

                /**
                 *查询白板用户列表
                 * @param req DescribeUserListRequest
                 * @return DescribeUserListOutcome
                 */
                DescribeUserListOutcome DescribeUserList(const Model::DescribeUserListRequest &request);
                void DescribeUserListAsync(const Model::DescribeUserListRequest& request, const DescribeUserListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeUserListOutcomeCallable DescribeUserListCallable(const Model::DescribeUserListRequest& request);

                /**
                 *查询客户资源列表
                 * @param req DescribeUserResourcesRequest
                 * @return DescribeUserResourcesOutcome
                 */
                DescribeUserResourcesOutcome DescribeUserResources(const Model::DescribeUserResourcesRequest &request);
                void DescribeUserResourcesAsync(const Model::DescribeUserResourcesRequest& request, const DescribeUserResourcesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeUserResourcesOutcomeCallable DescribeUserResourcesCallable(const Model::DescribeUserResourcesRequest& request);

                /**
                 *查询互动白板用户详情，包括是否开通了互动白板，当前互动白板服务有效期等信息

                 * @param req DescribeUserStatusRequest
                 * @return DescribeUserStatusOutcome
                 */
                DescribeUserStatusOutcome DescribeUserStatus(const Model::DescribeUserStatusRequest &request);
                void DescribeUserStatusAsync(const Model::DescribeUserStatusRequest& request, const DescribeUserStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeUserStatusOutcomeCallable DescribeUserStatusCallable(const Model::DescribeUserStatusRequest& request);

                /**
                 *查询录制视频生成任务状态与结果
                 * @param req DescribeVideoGenerationTaskRequest
                 * @return DescribeVideoGenerationTaskOutcome
                 */
                DescribeVideoGenerationTaskOutcome DescribeVideoGenerationTask(const Model::DescribeVideoGenerationTaskRequest &request);
                void DescribeVideoGenerationTaskAsync(const Model::DescribeVideoGenerationTaskRequest& request, const DescribeVideoGenerationTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeVideoGenerationTaskOutcomeCallable DescribeVideoGenerationTaskCallable(const Model::DescribeVideoGenerationTaskRequest& request);

                /**
                 *查询录制视频生成回调地址
                 * @param req DescribeVideoGenerationTaskCallbackRequest
                 * @return DescribeVideoGenerationTaskCallbackOutcome
                 */
                DescribeVideoGenerationTaskCallbackOutcome DescribeVideoGenerationTaskCallback(const Model::DescribeVideoGenerationTaskCallbackRequest &request);
                void DescribeVideoGenerationTaskCallbackAsync(const Model::DescribeVideoGenerationTaskCallbackRequest& request, const DescribeVideoGenerationTaskCallbackAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeVideoGenerationTaskCallbackOutcomeCallable DescribeVideoGenerationTaskCallbackCallable(const Model::DescribeVideoGenerationTaskCallbackRequest& request);

                /**
                 *查询告警回调地址。此功能需要申请白名单使用。
                 * @param req DescribeWarningCallbackRequest
                 * @return DescribeWarningCallbackOutcome
                 */
                DescribeWarningCallbackOutcome DescribeWarningCallback(const Model::DescribeWarningCallbackRequest &request);
                void DescribeWarningCallbackAsync(const Model::DescribeWarningCallbackRequest& request, const DescribeWarningCallbackAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeWarningCallbackOutcomeCallable DescribeWarningCallbackCallable(const Model::DescribeWarningCallbackRequest& request);

                /**
                 *查询白板应用任务相关的配置，包括存储桶、回调等
                 * @param req DescribeWhiteboardApplicationConfigRequest
                 * @return DescribeWhiteboardApplicationConfigOutcome
                 */
                DescribeWhiteboardApplicationConfigOutcome DescribeWhiteboardApplicationConfig(const Model::DescribeWhiteboardApplicationConfigRequest &request);
                void DescribeWhiteboardApplicationConfigAsync(const Model::DescribeWhiteboardApplicationConfigRequest& request, const DescribeWhiteboardApplicationConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeWhiteboardApplicationConfigOutcomeCallable DescribeWhiteboardApplicationConfigCallable(const Model::DescribeWhiteboardApplicationConfigRequest& request);

                /**
                 *查询文档转码，实时录制存储桶的配置
                 * @param req DescribeWhiteboardBucketConfigRequest
                 * @return DescribeWhiteboardBucketConfigOutcome
                 */
                DescribeWhiteboardBucketConfigOutcome DescribeWhiteboardBucketConfig(const Model::DescribeWhiteboardBucketConfigRequest &request);
                void DescribeWhiteboardBucketConfigAsync(const Model::DescribeWhiteboardBucketConfigRequest& request, const DescribeWhiteboardBucketConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeWhiteboardBucketConfigOutcomeCallable DescribeWhiteboardBucketConfigCallable(const Model::DescribeWhiteboardBucketConfigRequest& request);

                /**
                 *查询推流任务状态与结果
                 * @param req DescribeWhiteboardPushRequest
                 * @return DescribeWhiteboardPushOutcome
                 */
                DescribeWhiteboardPushOutcome DescribeWhiteboardPush(const Model::DescribeWhiteboardPushRequest &request);
                void DescribeWhiteboardPushAsync(const Model::DescribeWhiteboardPushRequest& request, const DescribeWhiteboardPushAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeWhiteboardPushOutcomeCallable DescribeWhiteboardPushCallable(const Model::DescribeWhiteboardPushRequest& request);

                /**
                 *查询白板推流回调地址
                 * @param req DescribeWhiteboardPushCallbackRequest
                 * @return DescribeWhiteboardPushCallbackOutcome
                 */
                DescribeWhiteboardPushCallbackOutcome DescribeWhiteboardPushCallback(const Model::DescribeWhiteboardPushCallbackRequest &request);
                void DescribeWhiteboardPushCallbackAsync(const Model::DescribeWhiteboardPushCallbackRequest& request, const DescribeWhiteboardPushCallbackAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeWhiteboardPushCallbackOutcomeCallable DescribeWhiteboardPushCallbackCallable(const Model::DescribeWhiteboardPushCallbackRequest& request);

                /**
                 *根据房间号搜索白板推流任务
                 * @param req DescribeWhiteboardPushSearchRequest
                 * @return DescribeWhiteboardPushSearchOutcome
                 */
                DescribeWhiteboardPushSearchOutcome DescribeWhiteboardPushSearch(const Model::DescribeWhiteboardPushSearchRequest &request);
                void DescribeWhiteboardPushSearchAsync(const Model::DescribeWhiteboardPushSearchRequest& request, const DescribeWhiteboardPushSearchAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeWhiteboardPushSearchOutcomeCallable DescribeWhiteboardPushSearchCallable(const Model::DescribeWhiteboardPushSearchRequest& request);

                /**
                 *修改白板应用
                 * @param req ModifyApplicationRequest
                 * @return ModifyApplicationOutcome
                 */
                ModifyApplicationOutcome ModifyApplication(const Model::ModifyApplicationRequest &request);
                void ModifyApplicationAsync(const Model::ModifyApplicationRequest& request, const ModifyApplicationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyApplicationOutcomeCallable ModifyApplicationCallable(const Model::ModifyApplicationRequest& request);

                /**
                 *设置白板月功能费自动续费
                 * @param req ModifyAutoRenewFlagRequest
                 * @return ModifyAutoRenewFlagOutcome
                 */
                ModifyAutoRenewFlagOutcome ModifyAutoRenewFlag(const Model::ModifyAutoRenewFlagRequest &request);
                void ModifyAutoRenewFlagAsync(const Model::ModifyAutoRenewFlagRequest& request, const ModifyAutoRenewFlagAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyAutoRenewFlagOutcomeCallable ModifyAutoRenewFlagCallable(const Model::ModifyAutoRenewFlagRequest& request);

                /**
                 *修改白板应用任务相关的配置，包括存储桶、回调等
                 * @param req ModifyWhiteboardApplicationConfigRequest
                 * @return ModifyWhiteboardApplicationConfigOutcome
                 */
                ModifyWhiteboardApplicationConfigOutcome ModifyWhiteboardApplicationConfig(const Model::ModifyWhiteboardApplicationConfigRequest &request);
                void ModifyWhiteboardApplicationConfigAsync(const Model::ModifyWhiteboardApplicationConfigRequest& request, const ModifyWhiteboardApplicationConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyWhiteboardApplicationConfigOutcomeCallable ModifyWhiteboardApplicationConfigCallable(const Model::ModifyWhiteboardApplicationConfigRequest& request);

                /**
                 *设置文档转码，实时录制存储桶的配置
                 * @param req ModifyWhiteboardBucketConfigRequest
                 * @return ModifyWhiteboardBucketConfigOutcome
                 */
                ModifyWhiteboardBucketConfigOutcome ModifyWhiteboardBucketConfig(const Model::ModifyWhiteboardBucketConfigRequest &request);
                void ModifyWhiteboardBucketConfigAsync(const Model::ModifyWhiteboardBucketConfigRequest& request, const ModifyWhiteboardBucketConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyWhiteboardBucketConfigOutcomeCallable ModifyWhiteboardBucketConfigCallable(const Model::ModifyWhiteboardBucketConfigRequest& request);

                /**
                 *暂停实时录制
                 * @param req PauseOnlineRecordRequest
                 * @return PauseOnlineRecordOutcome
                 */
                PauseOnlineRecordOutcome PauseOnlineRecord(const Model::PauseOnlineRecordRequest &request);
                void PauseOnlineRecordAsync(const Model::PauseOnlineRecordRequest& request, const PauseOnlineRecordAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                PauseOnlineRecordOutcomeCallable PauseOnlineRecordCallable(const Model::PauseOnlineRecordRequest& request);

                /**
                 *恢复实时录制
                 * @param req ResumeOnlineRecordRequest
                 * @return ResumeOnlineRecordOutcome
                 */
                ResumeOnlineRecordOutcome ResumeOnlineRecord(const Model::ResumeOnlineRecordRequest &request);
                void ResumeOnlineRecordAsync(const Model::ResumeOnlineRecordRequest& request, const ResumeOnlineRecordAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ResumeOnlineRecordOutcomeCallable ResumeOnlineRecordCallable(const Model::ResumeOnlineRecordRequest& request);

                /**
                 *设置课后录制回调地址
                 * @param req SetOfflineRecordCallbackRequest
                 * @return SetOfflineRecordCallbackOutcome
                 */
                SetOfflineRecordCallbackOutcome SetOfflineRecordCallback(const Model::SetOfflineRecordCallbackRequest &request);
                void SetOfflineRecordCallbackAsync(const Model::SetOfflineRecordCallbackRequest& request, const SetOfflineRecordCallbackAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                SetOfflineRecordCallbackOutcomeCallable SetOfflineRecordCallbackCallable(const Model::SetOfflineRecordCallbackRequest& request);

                /**
                 *设置实时录制回调地址，回调数据格式请参考文档：https://cloud.tencent.com/document/product/1137/40258
                 * @param req SetOnlineRecordCallbackRequest
                 * @return SetOnlineRecordCallbackOutcome
                 */
                SetOnlineRecordCallbackOutcome SetOnlineRecordCallback(const Model::SetOnlineRecordCallbackRequest &request);
                void SetOnlineRecordCallbackAsync(const Model::SetOnlineRecordCallbackRequest& request, const SetOnlineRecordCallbackAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                SetOnlineRecordCallbackOutcomeCallable SetOnlineRecordCallbackCallable(const Model::SetOnlineRecordCallbackRequest& request);

                /**
                 *设置实时录制回调鉴权密钥，回调鉴权方式请参考文档：https://cloud.tencent.com/document/product/1137/40257
                 * @param req SetOnlineRecordCallbackKeyRequest
                 * @return SetOnlineRecordCallbackKeyOutcome
                 */
                SetOnlineRecordCallbackKeyOutcome SetOnlineRecordCallbackKey(const Model::SetOnlineRecordCallbackKeyRequest &request);
                void SetOnlineRecordCallbackKeyAsync(const Model::SetOnlineRecordCallbackKeyRequest& request, const SetOnlineRecordCallbackKeyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                SetOnlineRecordCallbackKeyOutcomeCallable SetOnlineRecordCallbackKeyCallable(const Model::SetOnlineRecordCallbackKeyRequest& request);

                /**
                 *设置PPT检测任务回调地址，回调数据格式请参考文档：https://cloud.tencent.com/document/product/1137/40260
                 * @param req SetPPTCheckCallbackRequest
                 * @return SetPPTCheckCallbackOutcome
                 */
                SetPPTCheckCallbackOutcome SetPPTCheckCallback(const Model::SetPPTCheckCallbackRequest &request);
                void SetPPTCheckCallbackAsync(const Model::SetPPTCheckCallbackRequest& request, const SetPPTCheckCallbackAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                SetPPTCheckCallbackOutcomeCallable SetPPTCheckCallbackCallable(const Model::SetPPTCheckCallbackRequest& request);

                /**
                 *设置PPT检测任务回调密钥，回调鉴权方式请参考文档：https://cloud.tencent.com/document/product/1137/40257
                 * @param req SetPPTCheckCallbackKeyRequest
                 * @return SetPPTCheckCallbackKeyOutcome
                 */
                SetPPTCheckCallbackKeyOutcome SetPPTCheckCallbackKey(const Model::SetPPTCheckCallbackKeyRequest &request);
                void SetPPTCheckCallbackKeyAsync(const Model::SetPPTCheckCallbackKeyRequest& request, const SetPPTCheckCallbackKeyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                SetPPTCheckCallbackKeyOutcomeCallable SetPPTCheckCallbackKeyCallable(const Model::SetPPTCheckCallbackKeyRequest& request);

                /**
                 *设置文档转码回调地址，回调数据格式请参考文档：https://cloud.tencent.com/document/product/1137/40260
                 * @param req SetTranscodeCallbackRequest
                 * @return SetTranscodeCallbackOutcome
                 */
                SetTranscodeCallbackOutcome SetTranscodeCallback(const Model::SetTranscodeCallbackRequest &request);
                void SetTranscodeCallbackAsync(const Model::SetTranscodeCallbackRequest& request, const SetTranscodeCallbackAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                SetTranscodeCallbackOutcomeCallable SetTranscodeCallbackCallable(const Model::SetTranscodeCallbackRequest& request);

                /**
                 *设置文档转码回调鉴权密钥，回调鉴权方式请参考文档：https://cloud.tencent.com/document/product/1137/40257
                 * @param req SetTranscodeCallbackKeyRequest
                 * @return SetTranscodeCallbackKeyOutcome
                 */
                SetTranscodeCallbackKeyOutcome SetTranscodeCallbackKey(const Model::SetTranscodeCallbackKeyRequest &request);
                void SetTranscodeCallbackKeyAsync(const Model::SetTranscodeCallbackKeyRequest& request, const SetTranscodeCallbackKeyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                SetTranscodeCallbackKeyOutcomeCallable SetTranscodeCallbackKeyCallable(const Model::SetTranscodeCallbackKeyRequest& request);

                /**
                 *设置录制视频生成回调地址
                 * @param req SetVideoGenerationTaskCallbackRequest
                 * @return SetVideoGenerationTaskCallbackOutcome
                 */
                SetVideoGenerationTaskCallbackOutcome SetVideoGenerationTaskCallback(const Model::SetVideoGenerationTaskCallbackRequest &request);
                void SetVideoGenerationTaskCallbackAsync(const Model::SetVideoGenerationTaskCallbackRequest& request, const SetVideoGenerationTaskCallbackAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                SetVideoGenerationTaskCallbackOutcomeCallable SetVideoGenerationTaskCallbackCallable(const Model::SetVideoGenerationTaskCallbackRequest& request);

                /**
                 *设置视频生成回调鉴权密钥
                 * @param req SetVideoGenerationTaskCallbackKeyRequest
                 * @return SetVideoGenerationTaskCallbackKeyOutcome
                 */
                SetVideoGenerationTaskCallbackKeyOutcome SetVideoGenerationTaskCallbackKey(const Model::SetVideoGenerationTaskCallbackKeyRequest &request);
                void SetVideoGenerationTaskCallbackKeyAsync(const Model::SetVideoGenerationTaskCallbackKeyRequest& request, const SetVideoGenerationTaskCallbackKeyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                SetVideoGenerationTaskCallbackKeyOutcomeCallable SetVideoGenerationTaskCallbackKeyCallable(const Model::SetVideoGenerationTaskCallbackKeyRequest& request);

                /**
                 *设置告警回调地址。此功能需要申请白名单使用。
                 * @param req SetWarningCallbackRequest
                 * @return SetWarningCallbackOutcome
                 */
                SetWarningCallbackOutcome SetWarningCallback(const Model::SetWarningCallbackRequest &request);
                void SetWarningCallbackAsync(const Model::SetWarningCallbackRequest& request, const SetWarningCallbackAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                SetWarningCallbackOutcomeCallable SetWarningCallbackCallable(const Model::SetWarningCallbackRequest& request);

                /**
                 *设置白板推流回调地址，回调数据格式请参考文档：https://cloud.tencent.com/document/product/1137/40257
                 * @param req SetWhiteboardPushCallbackRequest
                 * @return SetWhiteboardPushCallbackOutcome
                 */
                SetWhiteboardPushCallbackOutcome SetWhiteboardPushCallback(const Model::SetWhiteboardPushCallbackRequest &request);
                void SetWhiteboardPushCallbackAsync(const Model::SetWhiteboardPushCallbackRequest& request, const SetWhiteboardPushCallbackAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                SetWhiteboardPushCallbackOutcomeCallable SetWhiteboardPushCallbackCallable(const Model::SetWhiteboardPushCallbackRequest& request);

                /**
                 *设置白板推流回调鉴权密钥，回调鉴权方式请参考文档：https://cloud.tencent.com/document/product/1137/40257
                 * @param req SetWhiteboardPushCallbackKeyRequest
                 * @return SetWhiteboardPushCallbackKeyOutcome
                 */
                SetWhiteboardPushCallbackKeyOutcome SetWhiteboardPushCallbackKey(const Model::SetWhiteboardPushCallbackKeyRequest &request);
                void SetWhiteboardPushCallbackKeyAsync(const Model::SetWhiteboardPushCallbackKeyRequest& request, const SetWhiteboardPushCallbackKeyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                SetWhiteboardPushCallbackKeyOutcomeCallable SetWhiteboardPushCallbackKeyCallable(const Model::SetWhiteboardPushCallbackKeyRequest& request);

                /**
                 *发起一个实时录制任务
                 * @param req StartOnlineRecordRequest
                 * @return StartOnlineRecordOutcome
                 */
                StartOnlineRecordOutcome StartOnlineRecord(const Model::StartOnlineRecordRequest &request);
                void StartOnlineRecordAsync(const Model::StartOnlineRecordRequest& request, const StartOnlineRecordAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                StartOnlineRecordOutcomeCallable StartOnlineRecordCallable(const Model::StartOnlineRecordRequest& request);

                /**
                 *发起一个白板推流任务
                 * @param req StartWhiteboardPushRequest
                 * @return StartWhiteboardPushOutcome
                 */
                StartWhiteboardPushOutcome StartWhiteboardPush(const Model::StartWhiteboardPushRequest &request);
                void StartWhiteboardPushAsync(const Model::StartWhiteboardPushRequest& request, const StartWhiteboardPushAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                StartWhiteboardPushOutcomeCallable StartWhiteboardPushCallable(const Model::StartWhiteboardPushRequest& request);

                /**
                 *停止实时录制
                 * @param req StopOnlineRecordRequest
                 * @return StopOnlineRecordOutcome
                 */
                StopOnlineRecordOutcome StopOnlineRecord(const Model::StopOnlineRecordRequest &request);
                void StopOnlineRecordAsync(const Model::StopOnlineRecordRequest& request, const StopOnlineRecordAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                StopOnlineRecordOutcomeCallable StopOnlineRecordCallable(const Model::StopOnlineRecordRequest& request);

                /**
                 *停止白板推流任务
                 * @param req StopWhiteboardPushRequest
                 * @return StopWhiteboardPushOutcome
                 */
                StopWhiteboardPushOutcome StopWhiteboardPush(const Model::StopWhiteboardPushRequest &request);
                void StopWhiteboardPushAsync(const Model::StopWhiteboardPushRequest& request, const StopWhiteboardPushAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                StopWhiteboardPushOutcomeCallable StopWhiteboardPushCallable(const Model::StopWhiteboardPushRequest& request);

            };
        }
    }
}

#endif // !TENCENTCLOUD_TIW_V20190919_TIWCLIENT_H_
