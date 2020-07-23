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

#ifndef TENCENTCLOUD_LIVE_V20180801_LIVECLIENT_H_
#define TENCENTCLOUD_LIVE_V20180801_LIVECLIENT_H_

#include <functional>
#include <future>
#include <tencentcloud/core/AbstractClient.h>
#include <tencentcloud/core/Credential.h>
#include <tencentcloud/core/profile/ClientProfile.h>
#include <tencentcloud/core/AsyncCallerContext.h>
#include <tencentcloud/live/v20180801/model/AddDelayLiveStreamRequest.h>
#include <tencentcloud/live/v20180801/model/AddDelayLiveStreamResponse.h>
#include <tencentcloud/live/v20180801/model/AddLiveDomainRequest.h>
#include <tencentcloud/live/v20180801/model/AddLiveDomainResponse.h>
#include <tencentcloud/live/v20180801/model/AddLiveWatermarkRequest.h>
#include <tencentcloud/live/v20180801/model/AddLiveWatermarkResponse.h>
#include <tencentcloud/live/v20180801/model/BindLiveDomainCertRequest.h>
#include <tencentcloud/live/v20180801/model/BindLiveDomainCertResponse.h>
#include <tencentcloud/live/v20180801/model/CancelCommonMixStreamRequest.h>
#include <tencentcloud/live/v20180801/model/CancelCommonMixStreamResponse.h>
#include <tencentcloud/live/v20180801/model/CreateCommonMixStreamRequest.h>
#include <tencentcloud/live/v20180801/model/CreateCommonMixStreamResponse.h>
#include <tencentcloud/live/v20180801/model/CreateLiveCallbackRuleRequest.h>
#include <tencentcloud/live/v20180801/model/CreateLiveCallbackRuleResponse.h>
#include <tencentcloud/live/v20180801/model/CreateLiveCallbackTemplateRequest.h>
#include <tencentcloud/live/v20180801/model/CreateLiveCallbackTemplateResponse.h>
#include <tencentcloud/live/v20180801/model/CreateLiveCertRequest.h>
#include <tencentcloud/live/v20180801/model/CreateLiveCertResponse.h>
#include <tencentcloud/live/v20180801/model/CreateLiveRecordRequest.h>
#include <tencentcloud/live/v20180801/model/CreateLiveRecordResponse.h>
#include <tencentcloud/live/v20180801/model/CreateLiveRecordRuleRequest.h>
#include <tencentcloud/live/v20180801/model/CreateLiveRecordRuleResponse.h>
#include <tencentcloud/live/v20180801/model/CreateLiveRecordTemplateRequest.h>
#include <tencentcloud/live/v20180801/model/CreateLiveRecordTemplateResponse.h>
#include <tencentcloud/live/v20180801/model/CreateLiveSnapshotRuleRequest.h>
#include <tencentcloud/live/v20180801/model/CreateLiveSnapshotRuleResponse.h>
#include <tencentcloud/live/v20180801/model/CreateLiveSnapshotTemplateRequest.h>
#include <tencentcloud/live/v20180801/model/CreateLiveSnapshotTemplateResponse.h>
#include <tencentcloud/live/v20180801/model/CreateLiveTranscodeRuleRequest.h>
#include <tencentcloud/live/v20180801/model/CreateLiveTranscodeRuleResponse.h>
#include <tencentcloud/live/v20180801/model/CreateLiveTranscodeTemplateRequest.h>
#include <tencentcloud/live/v20180801/model/CreateLiveTranscodeTemplateResponse.h>
#include <tencentcloud/live/v20180801/model/CreateLiveWatermarkRuleRequest.h>
#include <tencentcloud/live/v20180801/model/CreateLiveWatermarkRuleResponse.h>
#include <tencentcloud/live/v20180801/model/CreatePullStreamConfigRequest.h>
#include <tencentcloud/live/v20180801/model/CreatePullStreamConfigResponse.h>
#include <tencentcloud/live/v20180801/model/CreateRecordTaskRequest.h>
#include <tencentcloud/live/v20180801/model/CreateRecordTaskResponse.h>
#include <tencentcloud/live/v20180801/model/DeleteLiveCallbackRuleRequest.h>
#include <tencentcloud/live/v20180801/model/DeleteLiveCallbackRuleResponse.h>
#include <tencentcloud/live/v20180801/model/DeleteLiveCallbackTemplateRequest.h>
#include <tencentcloud/live/v20180801/model/DeleteLiveCallbackTemplateResponse.h>
#include <tencentcloud/live/v20180801/model/DeleteLiveCertRequest.h>
#include <tencentcloud/live/v20180801/model/DeleteLiveCertResponse.h>
#include <tencentcloud/live/v20180801/model/DeleteLiveDomainRequest.h>
#include <tencentcloud/live/v20180801/model/DeleteLiveDomainResponse.h>
#include <tencentcloud/live/v20180801/model/DeleteLiveRecordRequest.h>
#include <tencentcloud/live/v20180801/model/DeleteLiveRecordResponse.h>
#include <tencentcloud/live/v20180801/model/DeleteLiveRecordRuleRequest.h>
#include <tencentcloud/live/v20180801/model/DeleteLiveRecordRuleResponse.h>
#include <tencentcloud/live/v20180801/model/DeleteLiveRecordTemplateRequest.h>
#include <tencentcloud/live/v20180801/model/DeleteLiveRecordTemplateResponse.h>
#include <tencentcloud/live/v20180801/model/DeleteLiveSnapshotRuleRequest.h>
#include <tencentcloud/live/v20180801/model/DeleteLiveSnapshotRuleResponse.h>
#include <tencentcloud/live/v20180801/model/DeleteLiveSnapshotTemplateRequest.h>
#include <tencentcloud/live/v20180801/model/DeleteLiveSnapshotTemplateResponse.h>
#include <tencentcloud/live/v20180801/model/DeleteLiveTranscodeRuleRequest.h>
#include <tencentcloud/live/v20180801/model/DeleteLiveTranscodeRuleResponse.h>
#include <tencentcloud/live/v20180801/model/DeleteLiveTranscodeTemplateRequest.h>
#include <tencentcloud/live/v20180801/model/DeleteLiveTranscodeTemplateResponse.h>
#include <tencentcloud/live/v20180801/model/DeleteLiveWatermarkRequest.h>
#include <tencentcloud/live/v20180801/model/DeleteLiveWatermarkResponse.h>
#include <tencentcloud/live/v20180801/model/DeleteLiveWatermarkRuleRequest.h>
#include <tencentcloud/live/v20180801/model/DeleteLiveWatermarkRuleResponse.h>
#include <tencentcloud/live/v20180801/model/DeletePullStreamConfigRequest.h>
#include <tencentcloud/live/v20180801/model/DeletePullStreamConfigResponse.h>
#include <tencentcloud/live/v20180801/model/DeleteRecordTaskRequest.h>
#include <tencentcloud/live/v20180801/model/DeleteRecordTaskResponse.h>
#include <tencentcloud/live/v20180801/model/DescribeAllStreamPlayInfoListRequest.h>
#include <tencentcloud/live/v20180801/model/DescribeAllStreamPlayInfoListResponse.h>
#include <tencentcloud/live/v20180801/model/DescribeBillBandwidthAndFluxListRequest.h>
#include <tencentcloud/live/v20180801/model/DescribeBillBandwidthAndFluxListResponse.h>
#include <tencentcloud/live/v20180801/model/DescribeConcurrentRecordStreamNumRequest.h>
#include <tencentcloud/live/v20180801/model/DescribeConcurrentRecordStreamNumResponse.h>
#include <tencentcloud/live/v20180801/model/DescribeDeliverBandwidthListRequest.h>
#include <tencentcloud/live/v20180801/model/DescribeDeliverBandwidthListResponse.h>
#include <tencentcloud/live/v20180801/model/DescribeGroupProIspPlayInfoListRequest.h>
#include <tencentcloud/live/v20180801/model/DescribeGroupProIspPlayInfoListResponse.h>
#include <tencentcloud/live/v20180801/model/DescribeHttpStatusInfoListRequest.h>
#include <tencentcloud/live/v20180801/model/DescribeHttpStatusInfoListResponse.h>
#include <tencentcloud/live/v20180801/model/DescribeLiveCallbackRulesRequest.h>
#include <tencentcloud/live/v20180801/model/DescribeLiveCallbackRulesResponse.h>
#include <tencentcloud/live/v20180801/model/DescribeLiveCallbackTemplateRequest.h>
#include <tencentcloud/live/v20180801/model/DescribeLiveCallbackTemplateResponse.h>
#include <tencentcloud/live/v20180801/model/DescribeLiveCallbackTemplatesRequest.h>
#include <tencentcloud/live/v20180801/model/DescribeLiveCallbackTemplatesResponse.h>
#include <tencentcloud/live/v20180801/model/DescribeLiveCertRequest.h>
#include <tencentcloud/live/v20180801/model/DescribeLiveCertResponse.h>
#include <tencentcloud/live/v20180801/model/DescribeLiveCertsRequest.h>
#include <tencentcloud/live/v20180801/model/DescribeLiveCertsResponse.h>
#include <tencentcloud/live/v20180801/model/DescribeLiveDelayInfoListRequest.h>
#include <tencentcloud/live/v20180801/model/DescribeLiveDelayInfoListResponse.h>
#include <tencentcloud/live/v20180801/model/DescribeLiveDomainRequest.h>
#include <tencentcloud/live/v20180801/model/DescribeLiveDomainResponse.h>
#include <tencentcloud/live/v20180801/model/DescribeLiveDomainCertRequest.h>
#include <tencentcloud/live/v20180801/model/DescribeLiveDomainCertResponse.h>
#include <tencentcloud/live/v20180801/model/DescribeLiveDomainPlayInfoListRequest.h>
#include <tencentcloud/live/v20180801/model/DescribeLiveDomainPlayInfoListResponse.h>
#include <tencentcloud/live/v20180801/model/DescribeLiveDomainsRequest.h>
#include <tencentcloud/live/v20180801/model/DescribeLiveDomainsResponse.h>
#include <tencentcloud/live/v20180801/model/DescribeLiveForbidStreamListRequest.h>
#include <tencentcloud/live/v20180801/model/DescribeLiveForbidStreamListResponse.h>
#include <tencentcloud/live/v20180801/model/DescribeLivePackageInfoRequest.h>
#include <tencentcloud/live/v20180801/model/DescribeLivePackageInfoResponse.h>
#include <tencentcloud/live/v20180801/model/DescribeLivePlayAuthKeyRequest.h>
#include <tencentcloud/live/v20180801/model/DescribeLivePlayAuthKeyResponse.h>
#include <tencentcloud/live/v20180801/model/DescribeLivePushAuthKeyRequest.h>
#include <tencentcloud/live/v20180801/model/DescribeLivePushAuthKeyResponse.h>
#include <tencentcloud/live/v20180801/model/DescribeLiveRecordRulesRequest.h>
#include <tencentcloud/live/v20180801/model/DescribeLiveRecordRulesResponse.h>
#include <tencentcloud/live/v20180801/model/DescribeLiveRecordTemplateRequest.h>
#include <tencentcloud/live/v20180801/model/DescribeLiveRecordTemplateResponse.h>
#include <tencentcloud/live/v20180801/model/DescribeLiveRecordTemplatesRequest.h>
#include <tencentcloud/live/v20180801/model/DescribeLiveRecordTemplatesResponse.h>
#include <tencentcloud/live/v20180801/model/DescribeLiveSnapshotRulesRequest.h>
#include <tencentcloud/live/v20180801/model/DescribeLiveSnapshotRulesResponse.h>
#include <tencentcloud/live/v20180801/model/DescribeLiveSnapshotTemplateRequest.h>
#include <tencentcloud/live/v20180801/model/DescribeLiveSnapshotTemplateResponse.h>
#include <tencentcloud/live/v20180801/model/DescribeLiveSnapshotTemplatesRequest.h>
#include <tencentcloud/live/v20180801/model/DescribeLiveSnapshotTemplatesResponse.h>
#include <tencentcloud/live/v20180801/model/DescribeLiveStreamEventListRequest.h>
#include <tencentcloud/live/v20180801/model/DescribeLiveStreamEventListResponse.h>
#include <tencentcloud/live/v20180801/model/DescribeLiveStreamOnlineListRequest.h>
#include <tencentcloud/live/v20180801/model/DescribeLiveStreamOnlineListResponse.h>
#include <tencentcloud/live/v20180801/model/DescribeLiveStreamPublishedListRequest.h>
#include <tencentcloud/live/v20180801/model/DescribeLiveStreamPublishedListResponse.h>
#include <tencentcloud/live/v20180801/model/DescribeLiveStreamPushInfoListRequest.h>
#include <tencentcloud/live/v20180801/model/DescribeLiveStreamPushInfoListResponse.h>
#include <tencentcloud/live/v20180801/model/DescribeLiveStreamStateRequest.h>
#include <tencentcloud/live/v20180801/model/DescribeLiveStreamStateResponse.h>
#include <tencentcloud/live/v20180801/model/DescribeLiveTranscodeDetailInfoRequest.h>
#include <tencentcloud/live/v20180801/model/DescribeLiveTranscodeDetailInfoResponse.h>
#include <tencentcloud/live/v20180801/model/DescribeLiveTranscodeRulesRequest.h>
#include <tencentcloud/live/v20180801/model/DescribeLiveTranscodeRulesResponse.h>
#include <tencentcloud/live/v20180801/model/DescribeLiveTranscodeTemplateRequest.h>
#include <tencentcloud/live/v20180801/model/DescribeLiveTranscodeTemplateResponse.h>
#include <tencentcloud/live/v20180801/model/DescribeLiveTranscodeTemplatesRequest.h>
#include <tencentcloud/live/v20180801/model/DescribeLiveTranscodeTemplatesResponse.h>
#include <tencentcloud/live/v20180801/model/DescribeLiveWatermarkRequest.h>
#include <tencentcloud/live/v20180801/model/DescribeLiveWatermarkResponse.h>
#include <tencentcloud/live/v20180801/model/DescribeLiveWatermarkRulesRequest.h>
#include <tencentcloud/live/v20180801/model/DescribeLiveWatermarkRulesResponse.h>
#include <tencentcloud/live/v20180801/model/DescribeLiveWatermarksRequest.h>
#include <tencentcloud/live/v20180801/model/DescribeLiveWatermarksResponse.h>
#include <tencentcloud/live/v20180801/model/DescribeLogDownloadListRequest.h>
#include <tencentcloud/live/v20180801/model/DescribeLogDownloadListResponse.h>
#include <tencentcloud/live/v20180801/model/DescribePlayErrorCodeDetailInfoListRequest.h>
#include <tencentcloud/live/v20180801/model/DescribePlayErrorCodeDetailInfoListResponse.h>
#include <tencentcloud/live/v20180801/model/DescribePlayErrorCodeSumInfoListRequest.h>
#include <tencentcloud/live/v20180801/model/DescribePlayErrorCodeSumInfoListResponse.h>
#include <tencentcloud/live/v20180801/model/DescribeProIspPlaySumInfoListRequest.h>
#include <tencentcloud/live/v20180801/model/DescribeProIspPlaySumInfoListResponse.h>
#include <tencentcloud/live/v20180801/model/DescribeProvinceIspPlayInfoListRequest.h>
#include <tencentcloud/live/v20180801/model/DescribeProvinceIspPlayInfoListResponse.h>
#include <tencentcloud/live/v20180801/model/DescribePullStreamConfigsRequest.h>
#include <tencentcloud/live/v20180801/model/DescribePullStreamConfigsResponse.h>
#include <tencentcloud/live/v20180801/model/DescribeScreenShotSheetNumListRequest.h>
#include <tencentcloud/live/v20180801/model/DescribeScreenShotSheetNumListResponse.h>
#include <tencentcloud/live/v20180801/model/DescribeStreamDayPlayInfoListRequest.h>
#include <tencentcloud/live/v20180801/model/DescribeStreamDayPlayInfoListResponse.h>
#include <tencentcloud/live/v20180801/model/DescribeStreamPlayInfoListRequest.h>
#include <tencentcloud/live/v20180801/model/DescribeStreamPlayInfoListResponse.h>
#include <tencentcloud/live/v20180801/model/DescribeStreamPushInfoListRequest.h>
#include <tencentcloud/live/v20180801/model/DescribeStreamPushInfoListResponse.h>
#include <tencentcloud/live/v20180801/model/DescribeTopClientIpSumInfoListRequest.h>
#include <tencentcloud/live/v20180801/model/DescribeTopClientIpSumInfoListResponse.h>
#include <tencentcloud/live/v20180801/model/DescribeVisitTopSumInfoListRequest.h>
#include <tencentcloud/live/v20180801/model/DescribeVisitTopSumInfoListResponse.h>
#include <tencentcloud/live/v20180801/model/DropLiveStreamRequest.h>
#include <tencentcloud/live/v20180801/model/DropLiveStreamResponse.h>
#include <tencentcloud/live/v20180801/model/EnableLiveDomainRequest.h>
#include <tencentcloud/live/v20180801/model/EnableLiveDomainResponse.h>
#include <tencentcloud/live/v20180801/model/ForbidLiveDomainRequest.h>
#include <tencentcloud/live/v20180801/model/ForbidLiveDomainResponse.h>
#include <tencentcloud/live/v20180801/model/ForbidLiveStreamRequest.h>
#include <tencentcloud/live/v20180801/model/ForbidLiveStreamResponse.h>
#include <tencentcloud/live/v20180801/model/ModifyLiveCallbackTemplateRequest.h>
#include <tencentcloud/live/v20180801/model/ModifyLiveCallbackTemplateResponse.h>
#include <tencentcloud/live/v20180801/model/ModifyLiveCertRequest.h>
#include <tencentcloud/live/v20180801/model/ModifyLiveCertResponse.h>
#include <tencentcloud/live/v20180801/model/ModifyLiveDomainCertRequest.h>
#include <tencentcloud/live/v20180801/model/ModifyLiveDomainCertResponse.h>
#include <tencentcloud/live/v20180801/model/ModifyLivePlayAuthKeyRequest.h>
#include <tencentcloud/live/v20180801/model/ModifyLivePlayAuthKeyResponse.h>
#include <tencentcloud/live/v20180801/model/ModifyLivePlayDomainRequest.h>
#include <tencentcloud/live/v20180801/model/ModifyLivePlayDomainResponse.h>
#include <tencentcloud/live/v20180801/model/ModifyLivePushAuthKeyRequest.h>
#include <tencentcloud/live/v20180801/model/ModifyLivePushAuthKeyResponse.h>
#include <tencentcloud/live/v20180801/model/ModifyLiveRecordTemplateRequest.h>
#include <tencentcloud/live/v20180801/model/ModifyLiveRecordTemplateResponse.h>
#include <tencentcloud/live/v20180801/model/ModifyLiveSnapshotTemplateRequest.h>
#include <tencentcloud/live/v20180801/model/ModifyLiveSnapshotTemplateResponse.h>
#include <tencentcloud/live/v20180801/model/ModifyLiveTranscodeTemplateRequest.h>
#include <tencentcloud/live/v20180801/model/ModifyLiveTranscodeTemplateResponse.h>
#include <tencentcloud/live/v20180801/model/ModifyPullStreamConfigRequest.h>
#include <tencentcloud/live/v20180801/model/ModifyPullStreamConfigResponse.h>
#include <tencentcloud/live/v20180801/model/ModifyPullStreamStatusRequest.h>
#include <tencentcloud/live/v20180801/model/ModifyPullStreamStatusResponse.h>
#include <tencentcloud/live/v20180801/model/ResumeDelayLiveStreamRequest.h>
#include <tencentcloud/live/v20180801/model/ResumeDelayLiveStreamResponse.h>
#include <tencentcloud/live/v20180801/model/ResumeLiveStreamRequest.h>
#include <tencentcloud/live/v20180801/model/ResumeLiveStreamResponse.h>
#include <tencentcloud/live/v20180801/model/StopLiveRecordRequest.h>
#include <tencentcloud/live/v20180801/model/StopLiveRecordResponse.h>
#include <tencentcloud/live/v20180801/model/StopRecordTaskRequest.h>
#include <tencentcloud/live/v20180801/model/StopRecordTaskResponse.h>
#include <tencentcloud/live/v20180801/model/UnBindLiveDomainCertRequest.h>
#include <tencentcloud/live/v20180801/model/UnBindLiveDomainCertResponse.h>
#include <tencentcloud/live/v20180801/model/UpdateLiveWatermarkRequest.h>
#include <tencentcloud/live/v20180801/model/UpdateLiveWatermarkResponse.h>


namespace TencentCloud
{
    namespace Live
    {
        namespace V20180801
        {
            class LiveClient : public AbstractClient
            {
            public:
                LiveClient(const Credential &credential, const std::string &region);
                LiveClient(const Credential &credential, const std::string &region, const ClientProfile &profile);

                typedef Outcome<Error, Model::AddDelayLiveStreamResponse> AddDelayLiveStreamOutcome;
                typedef std::future<AddDelayLiveStreamOutcome> AddDelayLiveStreamOutcomeCallable;
                typedef std::function<void(const LiveClient*, const Model::AddDelayLiveStreamRequest&, AddDelayLiveStreamOutcome, const std::shared_ptr<const AsyncCallerContext>&)> AddDelayLiveStreamAsyncHandler;
                typedef Outcome<Error, Model::AddLiveDomainResponse> AddLiveDomainOutcome;
                typedef std::future<AddLiveDomainOutcome> AddLiveDomainOutcomeCallable;
                typedef std::function<void(const LiveClient*, const Model::AddLiveDomainRequest&, AddLiveDomainOutcome, const std::shared_ptr<const AsyncCallerContext>&)> AddLiveDomainAsyncHandler;
                typedef Outcome<Error, Model::AddLiveWatermarkResponse> AddLiveWatermarkOutcome;
                typedef std::future<AddLiveWatermarkOutcome> AddLiveWatermarkOutcomeCallable;
                typedef std::function<void(const LiveClient*, const Model::AddLiveWatermarkRequest&, AddLiveWatermarkOutcome, const std::shared_ptr<const AsyncCallerContext>&)> AddLiveWatermarkAsyncHandler;
                typedef Outcome<Error, Model::BindLiveDomainCertResponse> BindLiveDomainCertOutcome;
                typedef std::future<BindLiveDomainCertOutcome> BindLiveDomainCertOutcomeCallable;
                typedef std::function<void(const LiveClient*, const Model::BindLiveDomainCertRequest&, BindLiveDomainCertOutcome, const std::shared_ptr<const AsyncCallerContext>&)> BindLiveDomainCertAsyncHandler;
                typedef Outcome<Error, Model::CancelCommonMixStreamResponse> CancelCommonMixStreamOutcome;
                typedef std::future<CancelCommonMixStreamOutcome> CancelCommonMixStreamOutcomeCallable;
                typedef std::function<void(const LiveClient*, const Model::CancelCommonMixStreamRequest&, CancelCommonMixStreamOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CancelCommonMixStreamAsyncHandler;
                typedef Outcome<Error, Model::CreateCommonMixStreamResponse> CreateCommonMixStreamOutcome;
                typedef std::future<CreateCommonMixStreamOutcome> CreateCommonMixStreamOutcomeCallable;
                typedef std::function<void(const LiveClient*, const Model::CreateCommonMixStreamRequest&, CreateCommonMixStreamOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateCommonMixStreamAsyncHandler;
                typedef Outcome<Error, Model::CreateLiveCallbackRuleResponse> CreateLiveCallbackRuleOutcome;
                typedef std::future<CreateLiveCallbackRuleOutcome> CreateLiveCallbackRuleOutcomeCallable;
                typedef std::function<void(const LiveClient*, const Model::CreateLiveCallbackRuleRequest&, CreateLiveCallbackRuleOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateLiveCallbackRuleAsyncHandler;
                typedef Outcome<Error, Model::CreateLiveCallbackTemplateResponse> CreateLiveCallbackTemplateOutcome;
                typedef std::future<CreateLiveCallbackTemplateOutcome> CreateLiveCallbackTemplateOutcomeCallable;
                typedef std::function<void(const LiveClient*, const Model::CreateLiveCallbackTemplateRequest&, CreateLiveCallbackTemplateOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateLiveCallbackTemplateAsyncHandler;
                typedef Outcome<Error, Model::CreateLiveCertResponse> CreateLiveCertOutcome;
                typedef std::future<CreateLiveCertOutcome> CreateLiveCertOutcomeCallable;
                typedef std::function<void(const LiveClient*, const Model::CreateLiveCertRequest&, CreateLiveCertOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateLiveCertAsyncHandler;
                typedef Outcome<Error, Model::CreateLiveRecordResponse> CreateLiveRecordOutcome;
                typedef std::future<CreateLiveRecordOutcome> CreateLiveRecordOutcomeCallable;
                typedef std::function<void(const LiveClient*, const Model::CreateLiveRecordRequest&, CreateLiveRecordOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateLiveRecordAsyncHandler;
                typedef Outcome<Error, Model::CreateLiveRecordRuleResponse> CreateLiveRecordRuleOutcome;
                typedef std::future<CreateLiveRecordRuleOutcome> CreateLiveRecordRuleOutcomeCallable;
                typedef std::function<void(const LiveClient*, const Model::CreateLiveRecordRuleRequest&, CreateLiveRecordRuleOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateLiveRecordRuleAsyncHandler;
                typedef Outcome<Error, Model::CreateLiveRecordTemplateResponse> CreateLiveRecordTemplateOutcome;
                typedef std::future<CreateLiveRecordTemplateOutcome> CreateLiveRecordTemplateOutcomeCallable;
                typedef std::function<void(const LiveClient*, const Model::CreateLiveRecordTemplateRequest&, CreateLiveRecordTemplateOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateLiveRecordTemplateAsyncHandler;
                typedef Outcome<Error, Model::CreateLiveSnapshotRuleResponse> CreateLiveSnapshotRuleOutcome;
                typedef std::future<CreateLiveSnapshotRuleOutcome> CreateLiveSnapshotRuleOutcomeCallable;
                typedef std::function<void(const LiveClient*, const Model::CreateLiveSnapshotRuleRequest&, CreateLiveSnapshotRuleOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateLiveSnapshotRuleAsyncHandler;
                typedef Outcome<Error, Model::CreateLiveSnapshotTemplateResponse> CreateLiveSnapshotTemplateOutcome;
                typedef std::future<CreateLiveSnapshotTemplateOutcome> CreateLiveSnapshotTemplateOutcomeCallable;
                typedef std::function<void(const LiveClient*, const Model::CreateLiveSnapshotTemplateRequest&, CreateLiveSnapshotTemplateOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateLiveSnapshotTemplateAsyncHandler;
                typedef Outcome<Error, Model::CreateLiveTranscodeRuleResponse> CreateLiveTranscodeRuleOutcome;
                typedef std::future<CreateLiveTranscodeRuleOutcome> CreateLiveTranscodeRuleOutcomeCallable;
                typedef std::function<void(const LiveClient*, const Model::CreateLiveTranscodeRuleRequest&, CreateLiveTranscodeRuleOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateLiveTranscodeRuleAsyncHandler;
                typedef Outcome<Error, Model::CreateLiveTranscodeTemplateResponse> CreateLiveTranscodeTemplateOutcome;
                typedef std::future<CreateLiveTranscodeTemplateOutcome> CreateLiveTranscodeTemplateOutcomeCallable;
                typedef std::function<void(const LiveClient*, const Model::CreateLiveTranscodeTemplateRequest&, CreateLiveTranscodeTemplateOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateLiveTranscodeTemplateAsyncHandler;
                typedef Outcome<Error, Model::CreateLiveWatermarkRuleResponse> CreateLiveWatermarkRuleOutcome;
                typedef std::future<CreateLiveWatermarkRuleOutcome> CreateLiveWatermarkRuleOutcomeCallable;
                typedef std::function<void(const LiveClient*, const Model::CreateLiveWatermarkRuleRequest&, CreateLiveWatermarkRuleOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateLiveWatermarkRuleAsyncHandler;
                typedef Outcome<Error, Model::CreatePullStreamConfigResponse> CreatePullStreamConfigOutcome;
                typedef std::future<CreatePullStreamConfigOutcome> CreatePullStreamConfigOutcomeCallable;
                typedef std::function<void(const LiveClient*, const Model::CreatePullStreamConfigRequest&, CreatePullStreamConfigOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreatePullStreamConfigAsyncHandler;
                typedef Outcome<Error, Model::CreateRecordTaskResponse> CreateRecordTaskOutcome;
                typedef std::future<CreateRecordTaskOutcome> CreateRecordTaskOutcomeCallable;
                typedef std::function<void(const LiveClient*, const Model::CreateRecordTaskRequest&, CreateRecordTaskOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateRecordTaskAsyncHandler;
                typedef Outcome<Error, Model::DeleteLiveCallbackRuleResponse> DeleteLiveCallbackRuleOutcome;
                typedef std::future<DeleteLiveCallbackRuleOutcome> DeleteLiveCallbackRuleOutcomeCallable;
                typedef std::function<void(const LiveClient*, const Model::DeleteLiveCallbackRuleRequest&, DeleteLiveCallbackRuleOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteLiveCallbackRuleAsyncHandler;
                typedef Outcome<Error, Model::DeleteLiveCallbackTemplateResponse> DeleteLiveCallbackTemplateOutcome;
                typedef std::future<DeleteLiveCallbackTemplateOutcome> DeleteLiveCallbackTemplateOutcomeCallable;
                typedef std::function<void(const LiveClient*, const Model::DeleteLiveCallbackTemplateRequest&, DeleteLiveCallbackTemplateOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteLiveCallbackTemplateAsyncHandler;
                typedef Outcome<Error, Model::DeleteLiveCertResponse> DeleteLiveCertOutcome;
                typedef std::future<DeleteLiveCertOutcome> DeleteLiveCertOutcomeCallable;
                typedef std::function<void(const LiveClient*, const Model::DeleteLiveCertRequest&, DeleteLiveCertOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteLiveCertAsyncHandler;
                typedef Outcome<Error, Model::DeleteLiveDomainResponse> DeleteLiveDomainOutcome;
                typedef std::future<DeleteLiveDomainOutcome> DeleteLiveDomainOutcomeCallable;
                typedef std::function<void(const LiveClient*, const Model::DeleteLiveDomainRequest&, DeleteLiveDomainOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteLiveDomainAsyncHandler;
                typedef Outcome<Error, Model::DeleteLiveRecordResponse> DeleteLiveRecordOutcome;
                typedef std::future<DeleteLiveRecordOutcome> DeleteLiveRecordOutcomeCallable;
                typedef std::function<void(const LiveClient*, const Model::DeleteLiveRecordRequest&, DeleteLiveRecordOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteLiveRecordAsyncHandler;
                typedef Outcome<Error, Model::DeleteLiveRecordRuleResponse> DeleteLiveRecordRuleOutcome;
                typedef std::future<DeleteLiveRecordRuleOutcome> DeleteLiveRecordRuleOutcomeCallable;
                typedef std::function<void(const LiveClient*, const Model::DeleteLiveRecordRuleRequest&, DeleteLiveRecordRuleOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteLiveRecordRuleAsyncHandler;
                typedef Outcome<Error, Model::DeleteLiveRecordTemplateResponse> DeleteLiveRecordTemplateOutcome;
                typedef std::future<DeleteLiveRecordTemplateOutcome> DeleteLiveRecordTemplateOutcomeCallable;
                typedef std::function<void(const LiveClient*, const Model::DeleteLiveRecordTemplateRequest&, DeleteLiveRecordTemplateOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteLiveRecordTemplateAsyncHandler;
                typedef Outcome<Error, Model::DeleteLiveSnapshotRuleResponse> DeleteLiveSnapshotRuleOutcome;
                typedef std::future<DeleteLiveSnapshotRuleOutcome> DeleteLiveSnapshotRuleOutcomeCallable;
                typedef std::function<void(const LiveClient*, const Model::DeleteLiveSnapshotRuleRequest&, DeleteLiveSnapshotRuleOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteLiveSnapshotRuleAsyncHandler;
                typedef Outcome<Error, Model::DeleteLiveSnapshotTemplateResponse> DeleteLiveSnapshotTemplateOutcome;
                typedef std::future<DeleteLiveSnapshotTemplateOutcome> DeleteLiveSnapshotTemplateOutcomeCallable;
                typedef std::function<void(const LiveClient*, const Model::DeleteLiveSnapshotTemplateRequest&, DeleteLiveSnapshotTemplateOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteLiveSnapshotTemplateAsyncHandler;
                typedef Outcome<Error, Model::DeleteLiveTranscodeRuleResponse> DeleteLiveTranscodeRuleOutcome;
                typedef std::future<DeleteLiveTranscodeRuleOutcome> DeleteLiveTranscodeRuleOutcomeCallable;
                typedef std::function<void(const LiveClient*, const Model::DeleteLiveTranscodeRuleRequest&, DeleteLiveTranscodeRuleOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteLiveTranscodeRuleAsyncHandler;
                typedef Outcome<Error, Model::DeleteLiveTranscodeTemplateResponse> DeleteLiveTranscodeTemplateOutcome;
                typedef std::future<DeleteLiveTranscodeTemplateOutcome> DeleteLiveTranscodeTemplateOutcomeCallable;
                typedef std::function<void(const LiveClient*, const Model::DeleteLiveTranscodeTemplateRequest&, DeleteLiveTranscodeTemplateOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteLiveTranscodeTemplateAsyncHandler;
                typedef Outcome<Error, Model::DeleteLiveWatermarkResponse> DeleteLiveWatermarkOutcome;
                typedef std::future<DeleteLiveWatermarkOutcome> DeleteLiveWatermarkOutcomeCallable;
                typedef std::function<void(const LiveClient*, const Model::DeleteLiveWatermarkRequest&, DeleteLiveWatermarkOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteLiveWatermarkAsyncHandler;
                typedef Outcome<Error, Model::DeleteLiveWatermarkRuleResponse> DeleteLiveWatermarkRuleOutcome;
                typedef std::future<DeleteLiveWatermarkRuleOutcome> DeleteLiveWatermarkRuleOutcomeCallable;
                typedef std::function<void(const LiveClient*, const Model::DeleteLiveWatermarkRuleRequest&, DeleteLiveWatermarkRuleOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteLiveWatermarkRuleAsyncHandler;
                typedef Outcome<Error, Model::DeletePullStreamConfigResponse> DeletePullStreamConfigOutcome;
                typedef std::future<DeletePullStreamConfigOutcome> DeletePullStreamConfigOutcomeCallable;
                typedef std::function<void(const LiveClient*, const Model::DeletePullStreamConfigRequest&, DeletePullStreamConfigOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeletePullStreamConfigAsyncHandler;
                typedef Outcome<Error, Model::DeleteRecordTaskResponse> DeleteRecordTaskOutcome;
                typedef std::future<DeleteRecordTaskOutcome> DeleteRecordTaskOutcomeCallable;
                typedef std::function<void(const LiveClient*, const Model::DeleteRecordTaskRequest&, DeleteRecordTaskOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteRecordTaskAsyncHandler;
                typedef Outcome<Error, Model::DescribeAllStreamPlayInfoListResponse> DescribeAllStreamPlayInfoListOutcome;
                typedef std::future<DescribeAllStreamPlayInfoListOutcome> DescribeAllStreamPlayInfoListOutcomeCallable;
                typedef std::function<void(const LiveClient*, const Model::DescribeAllStreamPlayInfoListRequest&, DescribeAllStreamPlayInfoListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAllStreamPlayInfoListAsyncHandler;
                typedef Outcome<Error, Model::DescribeBillBandwidthAndFluxListResponse> DescribeBillBandwidthAndFluxListOutcome;
                typedef std::future<DescribeBillBandwidthAndFluxListOutcome> DescribeBillBandwidthAndFluxListOutcomeCallable;
                typedef std::function<void(const LiveClient*, const Model::DescribeBillBandwidthAndFluxListRequest&, DescribeBillBandwidthAndFluxListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeBillBandwidthAndFluxListAsyncHandler;
                typedef Outcome<Error, Model::DescribeConcurrentRecordStreamNumResponse> DescribeConcurrentRecordStreamNumOutcome;
                typedef std::future<DescribeConcurrentRecordStreamNumOutcome> DescribeConcurrentRecordStreamNumOutcomeCallable;
                typedef std::function<void(const LiveClient*, const Model::DescribeConcurrentRecordStreamNumRequest&, DescribeConcurrentRecordStreamNumOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeConcurrentRecordStreamNumAsyncHandler;
                typedef Outcome<Error, Model::DescribeDeliverBandwidthListResponse> DescribeDeliverBandwidthListOutcome;
                typedef std::future<DescribeDeliverBandwidthListOutcome> DescribeDeliverBandwidthListOutcomeCallable;
                typedef std::function<void(const LiveClient*, const Model::DescribeDeliverBandwidthListRequest&, DescribeDeliverBandwidthListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDeliverBandwidthListAsyncHandler;
                typedef Outcome<Error, Model::DescribeGroupProIspPlayInfoListResponse> DescribeGroupProIspPlayInfoListOutcome;
                typedef std::future<DescribeGroupProIspPlayInfoListOutcome> DescribeGroupProIspPlayInfoListOutcomeCallable;
                typedef std::function<void(const LiveClient*, const Model::DescribeGroupProIspPlayInfoListRequest&, DescribeGroupProIspPlayInfoListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeGroupProIspPlayInfoListAsyncHandler;
                typedef Outcome<Error, Model::DescribeHttpStatusInfoListResponse> DescribeHttpStatusInfoListOutcome;
                typedef std::future<DescribeHttpStatusInfoListOutcome> DescribeHttpStatusInfoListOutcomeCallable;
                typedef std::function<void(const LiveClient*, const Model::DescribeHttpStatusInfoListRequest&, DescribeHttpStatusInfoListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeHttpStatusInfoListAsyncHandler;
                typedef Outcome<Error, Model::DescribeLiveCallbackRulesResponse> DescribeLiveCallbackRulesOutcome;
                typedef std::future<DescribeLiveCallbackRulesOutcome> DescribeLiveCallbackRulesOutcomeCallable;
                typedef std::function<void(const LiveClient*, const Model::DescribeLiveCallbackRulesRequest&, DescribeLiveCallbackRulesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeLiveCallbackRulesAsyncHandler;
                typedef Outcome<Error, Model::DescribeLiveCallbackTemplateResponse> DescribeLiveCallbackTemplateOutcome;
                typedef std::future<DescribeLiveCallbackTemplateOutcome> DescribeLiveCallbackTemplateOutcomeCallable;
                typedef std::function<void(const LiveClient*, const Model::DescribeLiveCallbackTemplateRequest&, DescribeLiveCallbackTemplateOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeLiveCallbackTemplateAsyncHandler;
                typedef Outcome<Error, Model::DescribeLiveCallbackTemplatesResponse> DescribeLiveCallbackTemplatesOutcome;
                typedef std::future<DescribeLiveCallbackTemplatesOutcome> DescribeLiveCallbackTemplatesOutcomeCallable;
                typedef std::function<void(const LiveClient*, const Model::DescribeLiveCallbackTemplatesRequest&, DescribeLiveCallbackTemplatesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeLiveCallbackTemplatesAsyncHandler;
                typedef Outcome<Error, Model::DescribeLiveCertResponse> DescribeLiveCertOutcome;
                typedef std::future<DescribeLiveCertOutcome> DescribeLiveCertOutcomeCallable;
                typedef std::function<void(const LiveClient*, const Model::DescribeLiveCertRequest&, DescribeLiveCertOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeLiveCertAsyncHandler;
                typedef Outcome<Error, Model::DescribeLiveCertsResponse> DescribeLiveCertsOutcome;
                typedef std::future<DescribeLiveCertsOutcome> DescribeLiveCertsOutcomeCallable;
                typedef std::function<void(const LiveClient*, const Model::DescribeLiveCertsRequest&, DescribeLiveCertsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeLiveCertsAsyncHandler;
                typedef Outcome<Error, Model::DescribeLiveDelayInfoListResponse> DescribeLiveDelayInfoListOutcome;
                typedef std::future<DescribeLiveDelayInfoListOutcome> DescribeLiveDelayInfoListOutcomeCallable;
                typedef std::function<void(const LiveClient*, const Model::DescribeLiveDelayInfoListRequest&, DescribeLiveDelayInfoListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeLiveDelayInfoListAsyncHandler;
                typedef Outcome<Error, Model::DescribeLiveDomainResponse> DescribeLiveDomainOutcome;
                typedef std::future<DescribeLiveDomainOutcome> DescribeLiveDomainOutcomeCallable;
                typedef std::function<void(const LiveClient*, const Model::DescribeLiveDomainRequest&, DescribeLiveDomainOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeLiveDomainAsyncHandler;
                typedef Outcome<Error, Model::DescribeLiveDomainCertResponse> DescribeLiveDomainCertOutcome;
                typedef std::future<DescribeLiveDomainCertOutcome> DescribeLiveDomainCertOutcomeCallable;
                typedef std::function<void(const LiveClient*, const Model::DescribeLiveDomainCertRequest&, DescribeLiveDomainCertOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeLiveDomainCertAsyncHandler;
                typedef Outcome<Error, Model::DescribeLiveDomainPlayInfoListResponse> DescribeLiveDomainPlayInfoListOutcome;
                typedef std::future<DescribeLiveDomainPlayInfoListOutcome> DescribeLiveDomainPlayInfoListOutcomeCallable;
                typedef std::function<void(const LiveClient*, const Model::DescribeLiveDomainPlayInfoListRequest&, DescribeLiveDomainPlayInfoListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeLiveDomainPlayInfoListAsyncHandler;
                typedef Outcome<Error, Model::DescribeLiveDomainsResponse> DescribeLiveDomainsOutcome;
                typedef std::future<DescribeLiveDomainsOutcome> DescribeLiveDomainsOutcomeCallable;
                typedef std::function<void(const LiveClient*, const Model::DescribeLiveDomainsRequest&, DescribeLiveDomainsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeLiveDomainsAsyncHandler;
                typedef Outcome<Error, Model::DescribeLiveForbidStreamListResponse> DescribeLiveForbidStreamListOutcome;
                typedef std::future<DescribeLiveForbidStreamListOutcome> DescribeLiveForbidStreamListOutcomeCallable;
                typedef std::function<void(const LiveClient*, const Model::DescribeLiveForbidStreamListRequest&, DescribeLiveForbidStreamListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeLiveForbidStreamListAsyncHandler;
                typedef Outcome<Error, Model::DescribeLivePackageInfoResponse> DescribeLivePackageInfoOutcome;
                typedef std::future<DescribeLivePackageInfoOutcome> DescribeLivePackageInfoOutcomeCallable;
                typedef std::function<void(const LiveClient*, const Model::DescribeLivePackageInfoRequest&, DescribeLivePackageInfoOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeLivePackageInfoAsyncHandler;
                typedef Outcome<Error, Model::DescribeLivePlayAuthKeyResponse> DescribeLivePlayAuthKeyOutcome;
                typedef std::future<DescribeLivePlayAuthKeyOutcome> DescribeLivePlayAuthKeyOutcomeCallable;
                typedef std::function<void(const LiveClient*, const Model::DescribeLivePlayAuthKeyRequest&, DescribeLivePlayAuthKeyOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeLivePlayAuthKeyAsyncHandler;
                typedef Outcome<Error, Model::DescribeLivePushAuthKeyResponse> DescribeLivePushAuthKeyOutcome;
                typedef std::future<DescribeLivePushAuthKeyOutcome> DescribeLivePushAuthKeyOutcomeCallable;
                typedef std::function<void(const LiveClient*, const Model::DescribeLivePushAuthKeyRequest&, DescribeLivePushAuthKeyOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeLivePushAuthKeyAsyncHandler;
                typedef Outcome<Error, Model::DescribeLiveRecordRulesResponse> DescribeLiveRecordRulesOutcome;
                typedef std::future<DescribeLiveRecordRulesOutcome> DescribeLiveRecordRulesOutcomeCallable;
                typedef std::function<void(const LiveClient*, const Model::DescribeLiveRecordRulesRequest&, DescribeLiveRecordRulesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeLiveRecordRulesAsyncHandler;
                typedef Outcome<Error, Model::DescribeLiveRecordTemplateResponse> DescribeLiveRecordTemplateOutcome;
                typedef std::future<DescribeLiveRecordTemplateOutcome> DescribeLiveRecordTemplateOutcomeCallable;
                typedef std::function<void(const LiveClient*, const Model::DescribeLiveRecordTemplateRequest&, DescribeLiveRecordTemplateOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeLiveRecordTemplateAsyncHandler;
                typedef Outcome<Error, Model::DescribeLiveRecordTemplatesResponse> DescribeLiveRecordTemplatesOutcome;
                typedef std::future<DescribeLiveRecordTemplatesOutcome> DescribeLiveRecordTemplatesOutcomeCallable;
                typedef std::function<void(const LiveClient*, const Model::DescribeLiveRecordTemplatesRequest&, DescribeLiveRecordTemplatesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeLiveRecordTemplatesAsyncHandler;
                typedef Outcome<Error, Model::DescribeLiveSnapshotRulesResponse> DescribeLiveSnapshotRulesOutcome;
                typedef std::future<DescribeLiveSnapshotRulesOutcome> DescribeLiveSnapshotRulesOutcomeCallable;
                typedef std::function<void(const LiveClient*, const Model::DescribeLiveSnapshotRulesRequest&, DescribeLiveSnapshotRulesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeLiveSnapshotRulesAsyncHandler;
                typedef Outcome<Error, Model::DescribeLiveSnapshotTemplateResponse> DescribeLiveSnapshotTemplateOutcome;
                typedef std::future<DescribeLiveSnapshotTemplateOutcome> DescribeLiveSnapshotTemplateOutcomeCallable;
                typedef std::function<void(const LiveClient*, const Model::DescribeLiveSnapshotTemplateRequest&, DescribeLiveSnapshotTemplateOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeLiveSnapshotTemplateAsyncHandler;
                typedef Outcome<Error, Model::DescribeLiveSnapshotTemplatesResponse> DescribeLiveSnapshotTemplatesOutcome;
                typedef std::future<DescribeLiveSnapshotTemplatesOutcome> DescribeLiveSnapshotTemplatesOutcomeCallable;
                typedef std::function<void(const LiveClient*, const Model::DescribeLiveSnapshotTemplatesRequest&, DescribeLiveSnapshotTemplatesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeLiveSnapshotTemplatesAsyncHandler;
                typedef Outcome<Error, Model::DescribeLiveStreamEventListResponse> DescribeLiveStreamEventListOutcome;
                typedef std::future<DescribeLiveStreamEventListOutcome> DescribeLiveStreamEventListOutcomeCallable;
                typedef std::function<void(const LiveClient*, const Model::DescribeLiveStreamEventListRequest&, DescribeLiveStreamEventListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeLiveStreamEventListAsyncHandler;
                typedef Outcome<Error, Model::DescribeLiveStreamOnlineListResponse> DescribeLiveStreamOnlineListOutcome;
                typedef std::future<DescribeLiveStreamOnlineListOutcome> DescribeLiveStreamOnlineListOutcomeCallable;
                typedef std::function<void(const LiveClient*, const Model::DescribeLiveStreamOnlineListRequest&, DescribeLiveStreamOnlineListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeLiveStreamOnlineListAsyncHandler;
                typedef Outcome<Error, Model::DescribeLiveStreamPublishedListResponse> DescribeLiveStreamPublishedListOutcome;
                typedef std::future<DescribeLiveStreamPublishedListOutcome> DescribeLiveStreamPublishedListOutcomeCallable;
                typedef std::function<void(const LiveClient*, const Model::DescribeLiveStreamPublishedListRequest&, DescribeLiveStreamPublishedListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeLiveStreamPublishedListAsyncHandler;
                typedef Outcome<Error, Model::DescribeLiveStreamPushInfoListResponse> DescribeLiveStreamPushInfoListOutcome;
                typedef std::future<DescribeLiveStreamPushInfoListOutcome> DescribeLiveStreamPushInfoListOutcomeCallable;
                typedef std::function<void(const LiveClient*, const Model::DescribeLiveStreamPushInfoListRequest&, DescribeLiveStreamPushInfoListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeLiveStreamPushInfoListAsyncHandler;
                typedef Outcome<Error, Model::DescribeLiveStreamStateResponse> DescribeLiveStreamStateOutcome;
                typedef std::future<DescribeLiveStreamStateOutcome> DescribeLiveStreamStateOutcomeCallable;
                typedef std::function<void(const LiveClient*, const Model::DescribeLiveStreamStateRequest&, DescribeLiveStreamStateOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeLiveStreamStateAsyncHandler;
                typedef Outcome<Error, Model::DescribeLiveTranscodeDetailInfoResponse> DescribeLiveTranscodeDetailInfoOutcome;
                typedef std::future<DescribeLiveTranscodeDetailInfoOutcome> DescribeLiveTranscodeDetailInfoOutcomeCallable;
                typedef std::function<void(const LiveClient*, const Model::DescribeLiveTranscodeDetailInfoRequest&, DescribeLiveTranscodeDetailInfoOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeLiveTranscodeDetailInfoAsyncHandler;
                typedef Outcome<Error, Model::DescribeLiveTranscodeRulesResponse> DescribeLiveTranscodeRulesOutcome;
                typedef std::future<DescribeLiveTranscodeRulesOutcome> DescribeLiveTranscodeRulesOutcomeCallable;
                typedef std::function<void(const LiveClient*, const Model::DescribeLiveTranscodeRulesRequest&, DescribeLiveTranscodeRulesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeLiveTranscodeRulesAsyncHandler;
                typedef Outcome<Error, Model::DescribeLiveTranscodeTemplateResponse> DescribeLiveTranscodeTemplateOutcome;
                typedef std::future<DescribeLiveTranscodeTemplateOutcome> DescribeLiveTranscodeTemplateOutcomeCallable;
                typedef std::function<void(const LiveClient*, const Model::DescribeLiveTranscodeTemplateRequest&, DescribeLiveTranscodeTemplateOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeLiveTranscodeTemplateAsyncHandler;
                typedef Outcome<Error, Model::DescribeLiveTranscodeTemplatesResponse> DescribeLiveTranscodeTemplatesOutcome;
                typedef std::future<DescribeLiveTranscodeTemplatesOutcome> DescribeLiveTranscodeTemplatesOutcomeCallable;
                typedef std::function<void(const LiveClient*, const Model::DescribeLiveTranscodeTemplatesRequest&, DescribeLiveTranscodeTemplatesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeLiveTranscodeTemplatesAsyncHandler;
                typedef Outcome<Error, Model::DescribeLiveWatermarkResponse> DescribeLiveWatermarkOutcome;
                typedef std::future<DescribeLiveWatermarkOutcome> DescribeLiveWatermarkOutcomeCallable;
                typedef std::function<void(const LiveClient*, const Model::DescribeLiveWatermarkRequest&, DescribeLiveWatermarkOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeLiveWatermarkAsyncHandler;
                typedef Outcome<Error, Model::DescribeLiveWatermarkRulesResponse> DescribeLiveWatermarkRulesOutcome;
                typedef std::future<DescribeLiveWatermarkRulesOutcome> DescribeLiveWatermarkRulesOutcomeCallable;
                typedef std::function<void(const LiveClient*, const Model::DescribeLiveWatermarkRulesRequest&, DescribeLiveWatermarkRulesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeLiveWatermarkRulesAsyncHandler;
                typedef Outcome<Error, Model::DescribeLiveWatermarksResponse> DescribeLiveWatermarksOutcome;
                typedef std::future<DescribeLiveWatermarksOutcome> DescribeLiveWatermarksOutcomeCallable;
                typedef std::function<void(const LiveClient*, const Model::DescribeLiveWatermarksRequest&, DescribeLiveWatermarksOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeLiveWatermarksAsyncHandler;
                typedef Outcome<Error, Model::DescribeLogDownloadListResponse> DescribeLogDownloadListOutcome;
                typedef std::future<DescribeLogDownloadListOutcome> DescribeLogDownloadListOutcomeCallable;
                typedef std::function<void(const LiveClient*, const Model::DescribeLogDownloadListRequest&, DescribeLogDownloadListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeLogDownloadListAsyncHandler;
                typedef Outcome<Error, Model::DescribePlayErrorCodeDetailInfoListResponse> DescribePlayErrorCodeDetailInfoListOutcome;
                typedef std::future<DescribePlayErrorCodeDetailInfoListOutcome> DescribePlayErrorCodeDetailInfoListOutcomeCallable;
                typedef std::function<void(const LiveClient*, const Model::DescribePlayErrorCodeDetailInfoListRequest&, DescribePlayErrorCodeDetailInfoListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribePlayErrorCodeDetailInfoListAsyncHandler;
                typedef Outcome<Error, Model::DescribePlayErrorCodeSumInfoListResponse> DescribePlayErrorCodeSumInfoListOutcome;
                typedef std::future<DescribePlayErrorCodeSumInfoListOutcome> DescribePlayErrorCodeSumInfoListOutcomeCallable;
                typedef std::function<void(const LiveClient*, const Model::DescribePlayErrorCodeSumInfoListRequest&, DescribePlayErrorCodeSumInfoListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribePlayErrorCodeSumInfoListAsyncHandler;
                typedef Outcome<Error, Model::DescribeProIspPlaySumInfoListResponse> DescribeProIspPlaySumInfoListOutcome;
                typedef std::future<DescribeProIspPlaySumInfoListOutcome> DescribeProIspPlaySumInfoListOutcomeCallable;
                typedef std::function<void(const LiveClient*, const Model::DescribeProIspPlaySumInfoListRequest&, DescribeProIspPlaySumInfoListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeProIspPlaySumInfoListAsyncHandler;
                typedef Outcome<Error, Model::DescribeProvinceIspPlayInfoListResponse> DescribeProvinceIspPlayInfoListOutcome;
                typedef std::future<DescribeProvinceIspPlayInfoListOutcome> DescribeProvinceIspPlayInfoListOutcomeCallable;
                typedef std::function<void(const LiveClient*, const Model::DescribeProvinceIspPlayInfoListRequest&, DescribeProvinceIspPlayInfoListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeProvinceIspPlayInfoListAsyncHandler;
                typedef Outcome<Error, Model::DescribePullStreamConfigsResponse> DescribePullStreamConfigsOutcome;
                typedef std::future<DescribePullStreamConfigsOutcome> DescribePullStreamConfigsOutcomeCallable;
                typedef std::function<void(const LiveClient*, const Model::DescribePullStreamConfigsRequest&, DescribePullStreamConfigsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribePullStreamConfigsAsyncHandler;
                typedef Outcome<Error, Model::DescribeScreenShotSheetNumListResponse> DescribeScreenShotSheetNumListOutcome;
                typedef std::future<DescribeScreenShotSheetNumListOutcome> DescribeScreenShotSheetNumListOutcomeCallable;
                typedef std::function<void(const LiveClient*, const Model::DescribeScreenShotSheetNumListRequest&, DescribeScreenShotSheetNumListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeScreenShotSheetNumListAsyncHandler;
                typedef Outcome<Error, Model::DescribeStreamDayPlayInfoListResponse> DescribeStreamDayPlayInfoListOutcome;
                typedef std::future<DescribeStreamDayPlayInfoListOutcome> DescribeStreamDayPlayInfoListOutcomeCallable;
                typedef std::function<void(const LiveClient*, const Model::DescribeStreamDayPlayInfoListRequest&, DescribeStreamDayPlayInfoListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeStreamDayPlayInfoListAsyncHandler;
                typedef Outcome<Error, Model::DescribeStreamPlayInfoListResponse> DescribeStreamPlayInfoListOutcome;
                typedef std::future<DescribeStreamPlayInfoListOutcome> DescribeStreamPlayInfoListOutcomeCallable;
                typedef std::function<void(const LiveClient*, const Model::DescribeStreamPlayInfoListRequest&, DescribeStreamPlayInfoListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeStreamPlayInfoListAsyncHandler;
                typedef Outcome<Error, Model::DescribeStreamPushInfoListResponse> DescribeStreamPushInfoListOutcome;
                typedef std::future<DescribeStreamPushInfoListOutcome> DescribeStreamPushInfoListOutcomeCallable;
                typedef std::function<void(const LiveClient*, const Model::DescribeStreamPushInfoListRequest&, DescribeStreamPushInfoListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeStreamPushInfoListAsyncHandler;
                typedef Outcome<Error, Model::DescribeTopClientIpSumInfoListResponse> DescribeTopClientIpSumInfoListOutcome;
                typedef std::future<DescribeTopClientIpSumInfoListOutcome> DescribeTopClientIpSumInfoListOutcomeCallable;
                typedef std::function<void(const LiveClient*, const Model::DescribeTopClientIpSumInfoListRequest&, DescribeTopClientIpSumInfoListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeTopClientIpSumInfoListAsyncHandler;
                typedef Outcome<Error, Model::DescribeVisitTopSumInfoListResponse> DescribeVisitTopSumInfoListOutcome;
                typedef std::future<DescribeVisitTopSumInfoListOutcome> DescribeVisitTopSumInfoListOutcomeCallable;
                typedef std::function<void(const LiveClient*, const Model::DescribeVisitTopSumInfoListRequest&, DescribeVisitTopSumInfoListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeVisitTopSumInfoListAsyncHandler;
                typedef Outcome<Error, Model::DropLiveStreamResponse> DropLiveStreamOutcome;
                typedef std::future<DropLiveStreamOutcome> DropLiveStreamOutcomeCallable;
                typedef std::function<void(const LiveClient*, const Model::DropLiveStreamRequest&, DropLiveStreamOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DropLiveStreamAsyncHandler;
                typedef Outcome<Error, Model::EnableLiveDomainResponse> EnableLiveDomainOutcome;
                typedef std::future<EnableLiveDomainOutcome> EnableLiveDomainOutcomeCallable;
                typedef std::function<void(const LiveClient*, const Model::EnableLiveDomainRequest&, EnableLiveDomainOutcome, const std::shared_ptr<const AsyncCallerContext>&)> EnableLiveDomainAsyncHandler;
                typedef Outcome<Error, Model::ForbidLiveDomainResponse> ForbidLiveDomainOutcome;
                typedef std::future<ForbidLiveDomainOutcome> ForbidLiveDomainOutcomeCallable;
                typedef std::function<void(const LiveClient*, const Model::ForbidLiveDomainRequest&, ForbidLiveDomainOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ForbidLiveDomainAsyncHandler;
                typedef Outcome<Error, Model::ForbidLiveStreamResponse> ForbidLiveStreamOutcome;
                typedef std::future<ForbidLiveStreamOutcome> ForbidLiveStreamOutcomeCallable;
                typedef std::function<void(const LiveClient*, const Model::ForbidLiveStreamRequest&, ForbidLiveStreamOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ForbidLiveStreamAsyncHandler;
                typedef Outcome<Error, Model::ModifyLiveCallbackTemplateResponse> ModifyLiveCallbackTemplateOutcome;
                typedef std::future<ModifyLiveCallbackTemplateOutcome> ModifyLiveCallbackTemplateOutcomeCallable;
                typedef std::function<void(const LiveClient*, const Model::ModifyLiveCallbackTemplateRequest&, ModifyLiveCallbackTemplateOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyLiveCallbackTemplateAsyncHandler;
                typedef Outcome<Error, Model::ModifyLiveCertResponse> ModifyLiveCertOutcome;
                typedef std::future<ModifyLiveCertOutcome> ModifyLiveCertOutcomeCallable;
                typedef std::function<void(const LiveClient*, const Model::ModifyLiveCertRequest&, ModifyLiveCertOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyLiveCertAsyncHandler;
                typedef Outcome<Error, Model::ModifyLiveDomainCertResponse> ModifyLiveDomainCertOutcome;
                typedef std::future<ModifyLiveDomainCertOutcome> ModifyLiveDomainCertOutcomeCallable;
                typedef std::function<void(const LiveClient*, const Model::ModifyLiveDomainCertRequest&, ModifyLiveDomainCertOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyLiveDomainCertAsyncHandler;
                typedef Outcome<Error, Model::ModifyLivePlayAuthKeyResponse> ModifyLivePlayAuthKeyOutcome;
                typedef std::future<ModifyLivePlayAuthKeyOutcome> ModifyLivePlayAuthKeyOutcomeCallable;
                typedef std::function<void(const LiveClient*, const Model::ModifyLivePlayAuthKeyRequest&, ModifyLivePlayAuthKeyOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyLivePlayAuthKeyAsyncHandler;
                typedef Outcome<Error, Model::ModifyLivePlayDomainResponse> ModifyLivePlayDomainOutcome;
                typedef std::future<ModifyLivePlayDomainOutcome> ModifyLivePlayDomainOutcomeCallable;
                typedef std::function<void(const LiveClient*, const Model::ModifyLivePlayDomainRequest&, ModifyLivePlayDomainOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyLivePlayDomainAsyncHandler;
                typedef Outcome<Error, Model::ModifyLivePushAuthKeyResponse> ModifyLivePushAuthKeyOutcome;
                typedef std::future<ModifyLivePushAuthKeyOutcome> ModifyLivePushAuthKeyOutcomeCallable;
                typedef std::function<void(const LiveClient*, const Model::ModifyLivePushAuthKeyRequest&, ModifyLivePushAuthKeyOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyLivePushAuthKeyAsyncHandler;
                typedef Outcome<Error, Model::ModifyLiveRecordTemplateResponse> ModifyLiveRecordTemplateOutcome;
                typedef std::future<ModifyLiveRecordTemplateOutcome> ModifyLiveRecordTemplateOutcomeCallable;
                typedef std::function<void(const LiveClient*, const Model::ModifyLiveRecordTemplateRequest&, ModifyLiveRecordTemplateOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyLiveRecordTemplateAsyncHandler;
                typedef Outcome<Error, Model::ModifyLiveSnapshotTemplateResponse> ModifyLiveSnapshotTemplateOutcome;
                typedef std::future<ModifyLiveSnapshotTemplateOutcome> ModifyLiveSnapshotTemplateOutcomeCallable;
                typedef std::function<void(const LiveClient*, const Model::ModifyLiveSnapshotTemplateRequest&, ModifyLiveSnapshotTemplateOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyLiveSnapshotTemplateAsyncHandler;
                typedef Outcome<Error, Model::ModifyLiveTranscodeTemplateResponse> ModifyLiveTranscodeTemplateOutcome;
                typedef std::future<ModifyLiveTranscodeTemplateOutcome> ModifyLiveTranscodeTemplateOutcomeCallable;
                typedef std::function<void(const LiveClient*, const Model::ModifyLiveTranscodeTemplateRequest&, ModifyLiveTranscodeTemplateOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyLiveTranscodeTemplateAsyncHandler;
                typedef Outcome<Error, Model::ModifyPullStreamConfigResponse> ModifyPullStreamConfigOutcome;
                typedef std::future<ModifyPullStreamConfigOutcome> ModifyPullStreamConfigOutcomeCallable;
                typedef std::function<void(const LiveClient*, const Model::ModifyPullStreamConfigRequest&, ModifyPullStreamConfigOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyPullStreamConfigAsyncHandler;
                typedef Outcome<Error, Model::ModifyPullStreamStatusResponse> ModifyPullStreamStatusOutcome;
                typedef std::future<ModifyPullStreamStatusOutcome> ModifyPullStreamStatusOutcomeCallable;
                typedef std::function<void(const LiveClient*, const Model::ModifyPullStreamStatusRequest&, ModifyPullStreamStatusOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyPullStreamStatusAsyncHandler;
                typedef Outcome<Error, Model::ResumeDelayLiveStreamResponse> ResumeDelayLiveStreamOutcome;
                typedef std::future<ResumeDelayLiveStreamOutcome> ResumeDelayLiveStreamOutcomeCallable;
                typedef std::function<void(const LiveClient*, const Model::ResumeDelayLiveStreamRequest&, ResumeDelayLiveStreamOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ResumeDelayLiveStreamAsyncHandler;
                typedef Outcome<Error, Model::ResumeLiveStreamResponse> ResumeLiveStreamOutcome;
                typedef std::future<ResumeLiveStreamOutcome> ResumeLiveStreamOutcomeCallable;
                typedef std::function<void(const LiveClient*, const Model::ResumeLiveStreamRequest&, ResumeLiveStreamOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ResumeLiveStreamAsyncHandler;
                typedef Outcome<Error, Model::StopLiveRecordResponse> StopLiveRecordOutcome;
                typedef std::future<StopLiveRecordOutcome> StopLiveRecordOutcomeCallable;
                typedef std::function<void(const LiveClient*, const Model::StopLiveRecordRequest&, StopLiveRecordOutcome, const std::shared_ptr<const AsyncCallerContext>&)> StopLiveRecordAsyncHandler;
                typedef Outcome<Error, Model::StopRecordTaskResponse> StopRecordTaskOutcome;
                typedef std::future<StopRecordTaskOutcome> StopRecordTaskOutcomeCallable;
                typedef std::function<void(const LiveClient*, const Model::StopRecordTaskRequest&, StopRecordTaskOutcome, const std::shared_ptr<const AsyncCallerContext>&)> StopRecordTaskAsyncHandler;
                typedef Outcome<Error, Model::UnBindLiveDomainCertResponse> UnBindLiveDomainCertOutcome;
                typedef std::future<UnBindLiveDomainCertOutcome> UnBindLiveDomainCertOutcomeCallable;
                typedef std::function<void(const LiveClient*, const Model::UnBindLiveDomainCertRequest&, UnBindLiveDomainCertOutcome, const std::shared_ptr<const AsyncCallerContext>&)> UnBindLiveDomainCertAsyncHandler;
                typedef Outcome<Error, Model::UpdateLiveWatermarkResponse> UpdateLiveWatermarkOutcome;
                typedef std::future<UpdateLiveWatermarkOutcome> UpdateLiveWatermarkOutcomeCallable;
                typedef std::function<void(const LiveClient*, const Model::UpdateLiveWatermarkRequest&, UpdateLiveWatermarkOutcome, const std::shared_ptr<const AsyncCallerContext>&)> UpdateLiveWatermarkAsyncHandler;



                /**
                 *对流设置延播时间
注意：如果在推流前设置延播，需要提前5分钟设置。
目前该接口只支持流粒度的，域名及应用粒度功能支持当前开发中。
使用场景：对重要直播，避免出现突发状况，可通过设置延迟播放，提前做好把控。

                 * @param req AddDelayLiveStreamRequest
                 * @return AddDelayLiveStreamOutcome
                 */
                AddDelayLiveStreamOutcome AddDelayLiveStream(const Model::AddDelayLiveStreamRequest &request);
                void AddDelayLiveStreamAsync(const Model::AddDelayLiveStreamRequest& request, const AddDelayLiveStreamAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                AddDelayLiveStreamOutcomeCallable AddDelayLiveStreamCallable(const Model::AddDelayLiveStreamRequest& request);

                /**
                 *添加域名，一次只能提交一个域名。域名必须已备案。
                 * @param req AddLiveDomainRequest
                 * @return AddLiveDomainOutcome
                 */
                AddLiveDomainOutcome AddLiveDomain(const Model::AddLiveDomainRequest &request);
                void AddLiveDomainAsync(const Model::AddLiveDomainRequest& request, const AddLiveDomainAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                AddLiveDomainOutcomeCallable AddLiveDomainCallable(const Model::AddLiveDomainRequest& request);

                /**
                 *添加水印，成功返回水印 ID 后，需要调用[CreateLiveWatermarkRule](/document/product/267/32629)接口将水印 ID 绑定到流使用。
                 * @param req AddLiveWatermarkRequest
                 * @return AddLiveWatermarkOutcome
                 */
                AddLiveWatermarkOutcome AddLiveWatermark(const Model::AddLiveWatermarkRequest &request);
                void AddLiveWatermarkAsync(const Model::AddLiveWatermarkRequest& request, const AddLiveWatermarkAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                AddLiveWatermarkOutcomeCallable AddLiveWatermarkCallable(const Model::AddLiveWatermarkRequest& request);

                /**
                 *域名绑定证书。
注意：需先调用添加证书接口进行证书添加。获取到证书Id后再调用该接口进行绑定。
                 * @param req BindLiveDomainCertRequest
                 * @return BindLiveDomainCertOutcome
                 */
                BindLiveDomainCertOutcome BindLiveDomainCert(const Model::BindLiveDomainCertRequest &request);
                void BindLiveDomainCertAsync(const Model::BindLiveDomainCertRequest& request, const BindLiveDomainCertAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                BindLiveDomainCertOutcomeCallable BindLiveDomainCertCallable(const Model::BindLiveDomainCertRequest& request);

                /**
                 *该接口用来取消混流。用法与 mix_streamv2.cancel_mix_stream 基本一致。
                 * @param req CancelCommonMixStreamRequest
                 * @return CancelCommonMixStreamOutcome
                 */
                CancelCommonMixStreamOutcome CancelCommonMixStream(const Model::CancelCommonMixStreamRequest &request);
                void CancelCommonMixStreamAsync(const Model::CancelCommonMixStreamRequest& request, const CancelCommonMixStreamAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CancelCommonMixStreamOutcomeCallable CancelCommonMixStreamCallable(const Model::CancelCommonMixStreamRequest& request);

                /**
                 *该接口用来创建通用混流。用法与旧接口 mix_streamv2.start_mix_stream_advanced 基本一致。
注意：当前最多支持16路混流。
最佳实践：https://cloud.tencent.com/document/product/267/45566
                 * @param req CreateCommonMixStreamRequest
                 * @return CreateCommonMixStreamOutcome
                 */
                CreateCommonMixStreamOutcome CreateCommonMixStream(const Model::CreateCommonMixStreamRequest &request);
                void CreateCommonMixStreamAsync(const Model::CreateCommonMixStreamRequest& request, const CreateCommonMixStreamAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateCommonMixStreamOutcomeCallable CreateCommonMixStreamCallable(const Model::CreateCommonMixStreamRequest& request);

                /**
                 *创建回调规则，需要先调用[CreateLiveCallbackTemplate](/document/product/267/32637)接口创建回调模板，将返回的模板id绑定到域名/路径进行使用。
<br>回调协议相关文档：[事件消息通知](/document/product/267/32744)。
                 * @param req CreateLiveCallbackRuleRequest
                 * @return CreateLiveCallbackRuleOutcome
                 */
                CreateLiveCallbackRuleOutcome CreateLiveCallbackRule(const Model::CreateLiveCallbackRuleRequest &request);
                void CreateLiveCallbackRuleAsync(const Model::CreateLiveCallbackRuleRequest& request, const CreateLiveCallbackRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateLiveCallbackRuleOutcomeCallable CreateLiveCallbackRuleCallable(const Model::CreateLiveCallbackRuleRequest& request);

                /**
                 *创建回调模板，成功返回模板id后，需要调用[CreateLiveCallbackRule](/document/product/267/32638)接口将模板 ID 绑定到域名/路径使用。
<br>回调协议相关文档：[事件消息通知](/document/product/267/32744)。
                 * @param req CreateLiveCallbackTemplateRequest
                 * @return CreateLiveCallbackTemplateOutcome
                 */
                CreateLiveCallbackTemplateOutcome CreateLiveCallbackTemplate(const Model::CreateLiveCallbackTemplateRequest &request);
                void CreateLiveCallbackTemplateAsync(const Model::CreateLiveCallbackTemplateRequest& request, const CreateLiveCallbackTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateLiveCallbackTemplateOutcomeCallable CreateLiveCallbackTemplateCallable(const Model::CreateLiveCallbackTemplateRequest& request);

                /**
                 *添加证书
                 * @param req CreateLiveCertRequest
                 * @return CreateLiveCertOutcome
                 */
                CreateLiveCertOutcome CreateLiveCert(const Model::CreateLiveCertRequest &request);
                void CreateLiveCertAsync(const Model::CreateLiveCertRequest& request, const CreateLiveCertAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateLiveCertOutcomeCallable CreateLiveCertCallable(const Model::CreateLiveCertRequest& request);

                /**
                 *- 使用前提
  1. 录制文件存放于点播平台，所以用户如需使用录制功能，需首先自行开通点播服务。
  2. 录制文件存放后相关费用（含存储以及下行播放流量）按照点播平台计费方式收取，具体请参考 [对应文档](https://cloud.tencent.com/document/product/266/2838)。

- 模式说明
  该接口支持两种录制模式：
  1. 定时录制模式【默认模式】。
    需要传入开始时间与结束时间，录制任务根据起止时间自动开始与结束。在所设置结束时间过期之前（且未调用StopLiveRecord提前终止任务），录制任务都是有效的，期间多次断流然后重推都会启动录制任务。
  2. 实时视频录制模式。
    忽略传入的开始时间，在录制任务创建后立即开始录制，录制时长支持最大为30分钟，如果传入的结束时间与当前时间差大于30分钟，则按30分钟计算，实时视频录制主要用于录制精彩视频场景，时长建议控制在5分钟以内。

- 注意事项
  1. 调用接口超时设置应大于3秒，小于3秒重试以及按不同起止时间调用都有可能产生重复录制任务，进而导致额外录制费用。
  2. 受限于音视频文件格式（FLV/MP4/HLS）对编码类型的支持，视频编码类型支持 H.264，音频编码类型支持 AAC。
  3. 为避免恶意或非主观的频繁 API 请求，对定时录制模式最大创建任务数做了限制：其中，当天可以创建的最大任务数不超过4000（不含已删除的任务）；当前时刻并发运行的任务数不超过400。有超出此限制的需要提工单申请。
  4. 此调用方式暂时不支持海外推流录制。
                 * @param req CreateLiveRecordRequest
                 * @return CreateLiveRecordOutcome
                 */
                CreateLiveRecordOutcome CreateLiveRecord(const Model::CreateLiveRecordRequest &request);
                void CreateLiveRecordAsync(const Model::CreateLiveRecordRequest& request, const CreateLiveRecordAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateLiveRecordOutcomeCallable CreateLiveRecordCallable(const Model::CreateLiveRecordRequest& request);

                /**
                 *创建录制规则，需要先调用[CreateLiveRecordTemplate](/document/product/267/32614)接口创建录制模板，将返回的模板id绑定到流使用。
<br>录制相关文档：[直播录制](/document/product/267/32739)。
                 * @param req CreateLiveRecordRuleRequest
                 * @return CreateLiveRecordRuleOutcome
                 */
                CreateLiveRecordRuleOutcome CreateLiveRecordRule(const Model::CreateLiveRecordRuleRequest &request);
                void CreateLiveRecordRuleAsync(const Model::CreateLiveRecordRuleRequest& request, const CreateLiveRecordRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateLiveRecordRuleOutcomeCallable CreateLiveRecordRuleCallable(const Model::CreateLiveRecordRuleRequest& request);

                /**
                 *创建录制模板，成功返回模板id后，需要调用[CreateLiveRecordRule](/document/product/267/32615)接口，将模板id绑定到流进行使用。
<br>录制相关文档：[直播录制](/document/product/267/32739)。
                 * @param req CreateLiveRecordTemplateRequest
                 * @return CreateLiveRecordTemplateOutcome
                 */
                CreateLiveRecordTemplateOutcome CreateLiveRecordTemplate(const Model::CreateLiveRecordTemplateRequest &request);
                void CreateLiveRecordTemplateAsync(const Model::CreateLiveRecordTemplateRequest& request, const CreateLiveRecordTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateLiveRecordTemplateOutcomeCallable CreateLiveRecordTemplateCallable(const Model::CreateLiveRecordTemplateRequest& request);

                /**
                 *创建截图规则，需要先调用[CreateLiveSnapshotTemplate](/document/product/267/32624)接口创建截图模板，然后将返回的模板 ID 绑定到流进行使用。
<br>截图相关文档：[直播截图](/document/product/267/32737)。
注意：单个域名仅支持关联一个截图模板。
                 * @param req CreateLiveSnapshotRuleRequest
                 * @return CreateLiveSnapshotRuleOutcome
                 */
                CreateLiveSnapshotRuleOutcome CreateLiveSnapshotRule(const Model::CreateLiveSnapshotRuleRequest &request);
                void CreateLiveSnapshotRuleAsync(const Model::CreateLiveSnapshotRuleRequest& request, const CreateLiveSnapshotRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateLiveSnapshotRuleOutcomeCallable CreateLiveSnapshotRuleCallable(const Model::CreateLiveSnapshotRuleRequest& request);

                /**
                 *创建截图模板，成功返回模板id后，需要调用[CreateLiveSnapshotRule](/document/product/267/32625)接口，将模板id绑定到流使用。
<br>截图相关文档：[直播截图](/document/product/267/32737)。
                 * @param req CreateLiveSnapshotTemplateRequest
                 * @return CreateLiveSnapshotTemplateOutcome
                 */
                CreateLiveSnapshotTemplateOutcome CreateLiveSnapshotTemplate(const Model::CreateLiveSnapshotTemplateRequest &request);
                void CreateLiveSnapshotTemplateAsync(const Model::CreateLiveSnapshotTemplateRequest& request, const CreateLiveSnapshotTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateLiveSnapshotTemplateOutcomeCallable CreateLiveSnapshotTemplateCallable(const Model::CreateLiveSnapshotTemplateRequest& request);

                /**
                 *创建转码规则，需要先调用[CreateLiveTranscodeTemplate](/document/product/267/32646)接口创建转码模板，将返回的模板id绑定到流使用。
<br>转码相关文档：[直播转封装及转码](/document/product/267/32736)。
                 * @param req CreateLiveTranscodeRuleRequest
                 * @return CreateLiveTranscodeRuleOutcome
                 */
                CreateLiveTranscodeRuleOutcome CreateLiveTranscodeRule(const Model::CreateLiveTranscodeRuleRequest &request);
                void CreateLiveTranscodeRuleAsync(const Model::CreateLiveTranscodeRuleRequest& request, const CreateLiveTranscodeRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateLiveTranscodeRuleOutcomeCallable CreateLiveTranscodeRuleCallable(const Model::CreateLiveTranscodeRuleRequest& request);

                /**
                 *创建转码模板，成功返回模板id后，需要调用[CreateLiveTranscodeRule](/document/product/267/32647)接口，将返回的模板id绑定到流使用。
<br>转码相关文档：[直播转封装及转码](/document/product/267/32736)。
                 * @param req CreateLiveTranscodeTemplateRequest
                 * @return CreateLiveTranscodeTemplateOutcome
                 */
                CreateLiveTranscodeTemplateOutcome CreateLiveTranscodeTemplate(const Model::CreateLiveTranscodeTemplateRequest &request);
                void CreateLiveTranscodeTemplateAsync(const Model::CreateLiveTranscodeTemplateRequest& request, const CreateLiveTranscodeTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateLiveTranscodeTemplateOutcomeCallable CreateLiveTranscodeTemplateCallable(const Model::CreateLiveTranscodeTemplateRequest& request);

                /**
                 *创建水印规则，需要先调用[AddLiveWatermark](/document/product/267/30154)接口添加水印，将返回的水印id绑定到流使用。
                 * @param req CreateLiveWatermarkRuleRequest
                 * @return CreateLiveWatermarkRuleOutcome
                 */
                CreateLiveWatermarkRuleOutcome CreateLiveWatermarkRule(const Model::CreateLiveWatermarkRuleRequest &request);
                void CreateLiveWatermarkRuleAsync(const Model::CreateLiveWatermarkRuleRequest& request, const CreateLiveWatermarkRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateLiveWatermarkRuleOutcomeCallable CreateLiveWatermarkRuleCallable(const Model::CreateLiveWatermarkRuleRequest& request);

                /**
                 *创建临时拉流转推任务，目前限制添加10条任务。

注意：该接口用于创建临时拉流转推任务，
拉流源地址即 FromUrl 可以是腾讯或非腾讯数据源，
但转推目标地址即 ToUrl 目前限制为已注册的腾讯直播域名。
                 * @param req CreatePullStreamConfigRequest
                 * @return CreatePullStreamConfigOutcome
                 */
                CreatePullStreamConfigOutcome CreatePullStreamConfig(const Model::CreatePullStreamConfigRequest &request);
                void CreatePullStreamConfigAsync(const Model::CreatePullStreamConfigRequest& request, const CreatePullStreamConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreatePullStreamConfigOutcomeCallable CreatePullStreamConfigCallable(const Model::CreatePullStreamConfigRequest& request);

                /**
                 *创建一个在指定时间启动、结束的录制任务，并使用指定录制模板ID对应的配置进行录制。
- 使用前提
1. 录制文件存放于点播平台，所以用户如需使用录制功能，需首先自行开通点播服务。
2. 录制文件存放后相关费用（含存储以及下行播放流量）按照点播平台计费方式收取，具体请参考 对应文档。
- 注意事项
1. 断流会结束当前录制并生成录制文件。在结束时间到达之前任务仍然有效，期间只要正常推流都会正常录制，与是否多次推、断流无关。
2. 使用上避免创建时间段相互重叠的录制任务。若同一条流当前存在多个时段重叠的任务，为避免重复录制系统将启动最多3个录制任务。
3. 创建的录制任务记录在平台侧只保留3个月。
4. 当前录制任务管理API（CreateRecordTask/StopRecordTask/DeleteRecordTask）与旧API（CreateLiveRecord/StopLiveRecord/DeleteLiveRecord）不兼容，两套接口不能混用。
                 * @param req CreateRecordTaskRequest
                 * @return CreateRecordTaskOutcome
                 */
                CreateRecordTaskOutcome CreateRecordTask(const Model::CreateRecordTaskRequest &request);
                void CreateRecordTaskAsync(const Model::CreateRecordTaskRequest& request, const CreateRecordTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateRecordTaskOutcomeCallable CreateRecordTaskCallable(const Model::CreateRecordTaskRequest& request);

                /**
                 *删除回调规则。
                 * @param req DeleteLiveCallbackRuleRequest
                 * @return DeleteLiveCallbackRuleOutcome
                 */
                DeleteLiveCallbackRuleOutcome DeleteLiveCallbackRule(const Model::DeleteLiveCallbackRuleRequest &request);
                void DeleteLiveCallbackRuleAsync(const Model::DeleteLiveCallbackRuleRequest& request, const DeleteLiveCallbackRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteLiveCallbackRuleOutcomeCallable DeleteLiveCallbackRuleCallable(const Model::DeleteLiveCallbackRuleRequest& request);

                /**
                 *删除回调模板。
                 * @param req DeleteLiveCallbackTemplateRequest
                 * @return DeleteLiveCallbackTemplateOutcome
                 */
                DeleteLiveCallbackTemplateOutcome DeleteLiveCallbackTemplate(const Model::DeleteLiveCallbackTemplateRequest &request);
                void DeleteLiveCallbackTemplateAsync(const Model::DeleteLiveCallbackTemplateRequest& request, const DeleteLiveCallbackTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteLiveCallbackTemplateOutcomeCallable DeleteLiveCallbackTemplateCallable(const Model::DeleteLiveCallbackTemplateRequest& request);

                /**
                 *删除域名对应的证书
                 * @param req DeleteLiveCertRequest
                 * @return DeleteLiveCertOutcome
                 */
                DeleteLiveCertOutcome DeleteLiveCert(const Model::DeleteLiveCertRequest &request);
                void DeleteLiveCertAsync(const Model::DeleteLiveCertRequest& request, const DeleteLiveCertAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteLiveCertOutcomeCallable DeleteLiveCertCallable(const Model::DeleteLiveCertRequest& request);

                /**
                 *删除已添加的直播域名
                 * @param req DeleteLiveDomainRequest
                 * @return DeleteLiveDomainOutcome
                 */
                DeleteLiveDomainOutcome DeleteLiveDomain(const Model::DeleteLiveDomainRequest &request);
                void DeleteLiveDomainAsync(const Model::DeleteLiveDomainRequest& request, const DeleteLiveDomainAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteLiveDomainOutcomeCallable DeleteLiveDomainCallable(const Model::DeleteLiveDomainRequest& request);

                /**
                 *注：DeleteLiveRecord 接口仅用于删除录制任务记录，不具备停止录制的功能，也不能删除正在进行中的录制。如果需要停止录制任务，请使用终止录制[StopLiveRecord](/document/product/267/30146) 接口。
                 * @param req DeleteLiveRecordRequest
                 * @return DeleteLiveRecordOutcome
                 */
                DeleteLiveRecordOutcome DeleteLiveRecord(const Model::DeleteLiveRecordRequest &request);
                void DeleteLiveRecordAsync(const Model::DeleteLiveRecordRequest& request, const DeleteLiveRecordAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteLiveRecordOutcomeCallable DeleteLiveRecordCallable(const Model::DeleteLiveRecordRequest& request);

                /**
                 *删除录制规则。
                 * @param req DeleteLiveRecordRuleRequest
                 * @return DeleteLiveRecordRuleOutcome
                 */
                DeleteLiveRecordRuleOutcome DeleteLiveRecordRule(const Model::DeleteLiveRecordRuleRequest &request);
                void DeleteLiveRecordRuleAsync(const Model::DeleteLiveRecordRuleRequest& request, const DeleteLiveRecordRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteLiveRecordRuleOutcomeCallable DeleteLiveRecordRuleCallable(const Model::DeleteLiveRecordRuleRequest& request);

                /**
                 *删除录制模板。
                 * @param req DeleteLiveRecordTemplateRequest
                 * @return DeleteLiveRecordTemplateOutcome
                 */
                DeleteLiveRecordTemplateOutcome DeleteLiveRecordTemplate(const Model::DeleteLiveRecordTemplateRequest &request);
                void DeleteLiveRecordTemplateAsync(const Model::DeleteLiveRecordTemplateRequest& request, const DeleteLiveRecordTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteLiveRecordTemplateOutcomeCallable DeleteLiveRecordTemplateCallable(const Model::DeleteLiveRecordTemplateRequest& request);

                /**
                 *删除截图规则。
                 * @param req DeleteLiveSnapshotRuleRequest
                 * @return DeleteLiveSnapshotRuleOutcome
                 */
                DeleteLiveSnapshotRuleOutcome DeleteLiveSnapshotRule(const Model::DeleteLiveSnapshotRuleRequest &request);
                void DeleteLiveSnapshotRuleAsync(const Model::DeleteLiveSnapshotRuleRequest& request, const DeleteLiveSnapshotRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteLiveSnapshotRuleOutcomeCallable DeleteLiveSnapshotRuleCallable(const Model::DeleteLiveSnapshotRuleRequest& request);

                /**
                 *删除截图模板
                 * @param req DeleteLiveSnapshotTemplateRequest
                 * @return DeleteLiveSnapshotTemplateOutcome
                 */
                DeleteLiveSnapshotTemplateOutcome DeleteLiveSnapshotTemplate(const Model::DeleteLiveSnapshotTemplateRequest &request);
                void DeleteLiveSnapshotTemplateAsync(const Model::DeleteLiveSnapshotTemplateRequest& request, const DeleteLiveSnapshotTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteLiveSnapshotTemplateOutcomeCallable DeleteLiveSnapshotTemplateCallable(const Model::DeleteLiveSnapshotTemplateRequest& request);

                /**
                 *删除转码规则。
DomainName+AppName+StreamName+TemplateId唯一标识单个转码规则，如需删除需要强匹配。其中TemplateId必填，其余参数为空时也需要传空字符串进行强匹配。
                 * @param req DeleteLiveTranscodeRuleRequest
                 * @return DeleteLiveTranscodeRuleOutcome
                 */
                DeleteLiveTranscodeRuleOutcome DeleteLiveTranscodeRule(const Model::DeleteLiveTranscodeRuleRequest &request);
                void DeleteLiveTranscodeRuleAsync(const Model::DeleteLiveTranscodeRuleRequest& request, const DeleteLiveTranscodeRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteLiveTranscodeRuleOutcomeCallable DeleteLiveTranscodeRuleCallable(const Model::DeleteLiveTranscodeRuleRequest& request);

                /**
                 *删除转码模板。
                 * @param req DeleteLiveTranscodeTemplateRequest
                 * @return DeleteLiveTranscodeTemplateOutcome
                 */
                DeleteLiveTranscodeTemplateOutcome DeleteLiveTranscodeTemplate(const Model::DeleteLiveTranscodeTemplateRequest &request);
                void DeleteLiveTranscodeTemplateAsync(const Model::DeleteLiveTranscodeTemplateRequest& request, const DeleteLiveTranscodeTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteLiveTranscodeTemplateOutcomeCallable DeleteLiveTranscodeTemplateCallable(const Model::DeleteLiveTranscodeTemplateRequest& request);

                /**
                 *删除水印。
                 * @param req DeleteLiveWatermarkRequest
                 * @return DeleteLiveWatermarkOutcome
                 */
                DeleteLiveWatermarkOutcome DeleteLiveWatermark(const Model::DeleteLiveWatermarkRequest &request);
                void DeleteLiveWatermarkAsync(const Model::DeleteLiveWatermarkRequest& request, const DeleteLiveWatermarkAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteLiveWatermarkOutcomeCallable DeleteLiveWatermarkCallable(const Model::DeleteLiveWatermarkRequest& request);

                /**
                 *删除水印规则
                 * @param req DeleteLiveWatermarkRuleRequest
                 * @return DeleteLiveWatermarkRuleOutcome
                 */
                DeleteLiveWatermarkRuleOutcome DeleteLiveWatermarkRule(const Model::DeleteLiveWatermarkRuleRequest &request);
                void DeleteLiveWatermarkRuleAsync(const Model::DeleteLiveWatermarkRuleRequest& request, const DeleteLiveWatermarkRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteLiveWatermarkRuleOutcomeCallable DeleteLiveWatermarkRuleCallable(const Model::DeleteLiveWatermarkRuleRequest& request);

                /**
                 *删除直播拉流配置。
                 * @param req DeletePullStreamConfigRequest
                 * @return DeletePullStreamConfigOutcome
                 */
                DeletePullStreamConfigOutcome DeletePullStreamConfig(const Model::DeletePullStreamConfigRequest &request);
                void DeletePullStreamConfigAsync(const Model::DeletePullStreamConfigRequest& request, const DeletePullStreamConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeletePullStreamConfigOutcomeCallable DeletePullStreamConfigCallable(const Model::DeletePullStreamConfigRequest& request);

                /**
                 *删除录制任务配置。删除操作不影响正在运行当中的任务，仅对删除之后新的推流有效。
                 * @param req DeleteRecordTaskRequest
                 * @return DeleteRecordTaskOutcome
                 */
                DeleteRecordTaskOutcome DeleteRecordTask(const Model::DeleteRecordTaskRequest &request);
                void DeleteRecordTaskAsync(const Model::DeleteRecordTaskRequest& request, const DeleteRecordTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteRecordTaskOutcomeCallable DeleteRecordTaskCallable(const Model::DeleteRecordTaskRequest& request);

                /**
                 *输入某个时间点（1分钟维度），查询该时间点所有流的下行信息。
                 * @param req DescribeAllStreamPlayInfoListRequest
                 * @return DescribeAllStreamPlayInfoListOutcome
                 */
                DescribeAllStreamPlayInfoListOutcome DescribeAllStreamPlayInfoList(const Model::DescribeAllStreamPlayInfoListRequest &request);
                void DescribeAllStreamPlayInfoListAsync(const Model::DescribeAllStreamPlayInfoListRequest& request, const DescribeAllStreamPlayInfoListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeAllStreamPlayInfoListOutcomeCallable DescribeAllStreamPlayInfoListCallable(const Model::DescribeAllStreamPlayInfoListRequest& request);

                /**
                 *直播计费带宽和流量数据查询。
                 * @param req DescribeBillBandwidthAndFluxListRequest
                 * @return DescribeBillBandwidthAndFluxListOutcome
                 */
                DescribeBillBandwidthAndFluxListOutcome DescribeBillBandwidthAndFluxList(const Model::DescribeBillBandwidthAndFluxListRequest &request);
                void DescribeBillBandwidthAndFluxListAsync(const Model::DescribeBillBandwidthAndFluxListRequest& request, const DescribeBillBandwidthAndFluxListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeBillBandwidthAndFluxListOutcomeCallable DescribeBillBandwidthAndFluxListCallable(const Model::DescribeBillBandwidthAndFluxListRequest& request);

                /**
                 *查询并发录制路数，对慢直播和普通直播适用。
                 * @param req DescribeConcurrentRecordStreamNumRequest
                 * @return DescribeConcurrentRecordStreamNumOutcome
                 */
                DescribeConcurrentRecordStreamNumOutcome DescribeConcurrentRecordStreamNum(const Model::DescribeConcurrentRecordStreamNumRequest &request);
                void DescribeConcurrentRecordStreamNumAsync(const Model::DescribeConcurrentRecordStreamNumRequest& request, const DescribeConcurrentRecordStreamNumAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeConcurrentRecordStreamNumOutcomeCallable DescribeConcurrentRecordStreamNumCallable(const Model::DescribeConcurrentRecordStreamNumRequest& request);

                /**
                 *查询直播转推计费带宽，查询时间范围最大支持3个月内的数据，时间跨度最长31天。
                 * @param req DescribeDeliverBandwidthListRequest
                 * @return DescribeDeliverBandwidthListOutcome
                 */
                DescribeDeliverBandwidthListOutcome DescribeDeliverBandwidthList(const Model::DescribeDeliverBandwidthListRequest &request);
                void DescribeDeliverBandwidthListAsync(const Model::DescribeDeliverBandwidthListRequest& request, const DescribeDeliverBandwidthListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeDeliverBandwidthListOutcomeCallable DescribeDeliverBandwidthListCallable(const Model::DescribeDeliverBandwidthListRequest& request);

                /**
                 *查询按省份和运营商分组的下行播放数据。
                 * @param req DescribeGroupProIspPlayInfoListRequest
                 * @return DescribeGroupProIspPlayInfoListOutcome
                 */
                DescribeGroupProIspPlayInfoListOutcome DescribeGroupProIspPlayInfoList(const Model::DescribeGroupProIspPlayInfoListRequest &request);
                void DescribeGroupProIspPlayInfoListAsync(const Model::DescribeGroupProIspPlayInfoListRequest& request, const DescribeGroupProIspPlayInfoListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeGroupProIspPlayInfoListOutcomeCallable DescribeGroupProIspPlayInfoListCallable(const Model::DescribeGroupProIspPlayInfoListRequest& request);

                /**
                 *查询某段时间内5分钟粒度的各播放http状态码的个数。
备注：数据延迟1小时，如10:00-10:59点的数据12点才能查到。
                 * @param req DescribeHttpStatusInfoListRequest
                 * @return DescribeHttpStatusInfoListOutcome
                 */
                DescribeHttpStatusInfoListOutcome DescribeHttpStatusInfoList(const Model::DescribeHttpStatusInfoListRequest &request);
                void DescribeHttpStatusInfoListAsync(const Model::DescribeHttpStatusInfoListRequest& request, const DescribeHttpStatusInfoListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeHttpStatusInfoListOutcomeCallable DescribeHttpStatusInfoListCallable(const Model::DescribeHttpStatusInfoListRequest& request);

                /**
                 *获取回调规则列表
                 * @param req DescribeLiveCallbackRulesRequest
                 * @return DescribeLiveCallbackRulesOutcome
                 */
                DescribeLiveCallbackRulesOutcome DescribeLiveCallbackRules(const Model::DescribeLiveCallbackRulesRequest &request);
                void DescribeLiveCallbackRulesAsync(const Model::DescribeLiveCallbackRulesRequest& request, const DescribeLiveCallbackRulesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeLiveCallbackRulesOutcomeCallable DescribeLiveCallbackRulesCallable(const Model::DescribeLiveCallbackRulesRequest& request);

                /**
                 *获取单个回调模板。
                 * @param req DescribeLiveCallbackTemplateRequest
                 * @return DescribeLiveCallbackTemplateOutcome
                 */
                DescribeLiveCallbackTemplateOutcome DescribeLiveCallbackTemplate(const Model::DescribeLiveCallbackTemplateRequest &request);
                void DescribeLiveCallbackTemplateAsync(const Model::DescribeLiveCallbackTemplateRequest& request, const DescribeLiveCallbackTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeLiveCallbackTemplateOutcomeCallable DescribeLiveCallbackTemplateCallable(const Model::DescribeLiveCallbackTemplateRequest& request);

                /**
                 *获取回调模板列表
                 * @param req DescribeLiveCallbackTemplatesRequest
                 * @return DescribeLiveCallbackTemplatesOutcome
                 */
                DescribeLiveCallbackTemplatesOutcome DescribeLiveCallbackTemplates(const Model::DescribeLiveCallbackTemplatesRequest &request);
                void DescribeLiveCallbackTemplatesAsync(const Model::DescribeLiveCallbackTemplatesRequest& request, const DescribeLiveCallbackTemplatesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeLiveCallbackTemplatesOutcomeCallable DescribeLiveCallbackTemplatesCallable(const Model::DescribeLiveCallbackTemplatesRequest& request);

                /**
                 *获取证书信息
                 * @param req DescribeLiveCertRequest
                 * @return DescribeLiveCertOutcome
                 */
                DescribeLiveCertOutcome DescribeLiveCert(const Model::DescribeLiveCertRequest &request);
                void DescribeLiveCertAsync(const Model::DescribeLiveCertRequest& request, const DescribeLiveCertAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeLiveCertOutcomeCallable DescribeLiveCertCallable(const Model::DescribeLiveCertRequest& request);

                /**
                 *获取证书信息列表
                 * @param req DescribeLiveCertsRequest
                 * @return DescribeLiveCertsOutcome
                 */
                DescribeLiveCertsOutcome DescribeLiveCerts(const Model::DescribeLiveCertsRequest &request);
                void DescribeLiveCertsAsync(const Model::DescribeLiveCertsRequest& request, const DescribeLiveCertsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeLiveCertsOutcomeCallable DescribeLiveCertsCallable(const Model::DescribeLiveCertsRequest& request);

                /**
                 *获取直播延播列表。
                 * @param req DescribeLiveDelayInfoListRequest
                 * @return DescribeLiveDelayInfoListOutcome
                 */
                DescribeLiveDelayInfoListOutcome DescribeLiveDelayInfoList(const Model::DescribeLiveDelayInfoListRequest &request);
                void DescribeLiveDelayInfoListAsync(const Model::DescribeLiveDelayInfoListRequest& request, const DescribeLiveDelayInfoListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeLiveDelayInfoListOutcomeCallable DescribeLiveDelayInfoListCallable(const Model::DescribeLiveDelayInfoListRequest& request);

                /**
                 *查询直播域名信息。
                 * @param req DescribeLiveDomainRequest
                 * @return DescribeLiveDomainOutcome
                 */
                DescribeLiveDomainOutcome DescribeLiveDomain(const Model::DescribeLiveDomainRequest &request);
                void DescribeLiveDomainAsync(const Model::DescribeLiveDomainRequest& request, const DescribeLiveDomainAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeLiveDomainOutcomeCallable DescribeLiveDomainCallable(const Model::DescribeLiveDomainRequest& request);

                /**
                 *获取域名证书信息。
                 * @param req DescribeLiveDomainCertRequest
                 * @return DescribeLiveDomainCertOutcome
                 */
                DescribeLiveDomainCertOutcome DescribeLiveDomainCert(const Model::DescribeLiveDomainCertRequest &request);
                void DescribeLiveDomainCertAsync(const Model::DescribeLiveDomainCertRequest& request, const DescribeLiveDomainCertAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeLiveDomainCertOutcomeCallable DescribeLiveDomainCertCallable(const Model::DescribeLiveDomainCertRequest& request);

                /**
                 *查询实时的域名维度下行播放数据，由于数据处理有耗时，接口默认查询4分钟前的准实时数据。
                 * @param req DescribeLiveDomainPlayInfoListRequest
                 * @return DescribeLiveDomainPlayInfoListOutcome
                 */
                DescribeLiveDomainPlayInfoListOutcome DescribeLiveDomainPlayInfoList(const Model::DescribeLiveDomainPlayInfoListRequest &request);
                void DescribeLiveDomainPlayInfoListAsync(const Model::DescribeLiveDomainPlayInfoListRequest& request, const DescribeLiveDomainPlayInfoListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeLiveDomainPlayInfoListOutcomeCallable DescribeLiveDomainPlayInfoListCallable(const Model::DescribeLiveDomainPlayInfoListRequest& request);

                /**
                 *根据域名状态、类型等信息查询用户的域名信息。
                 * @param req DescribeLiveDomainsRequest
                 * @return DescribeLiveDomainsOutcome
                 */
                DescribeLiveDomainsOutcome DescribeLiveDomains(const Model::DescribeLiveDomainsRequest &request);
                void DescribeLiveDomainsAsync(const Model::DescribeLiveDomainsRequest& request, const DescribeLiveDomainsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeLiveDomainsOutcomeCallable DescribeLiveDomainsCallable(const Model::DescribeLiveDomainsRequest& request);

                /**
                 *获取禁推流列表。
                 * @param req DescribeLiveForbidStreamListRequest
                 * @return DescribeLiveForbidStreamListOutcome
                 */
                DescribeLiveForbidStreamListOutcome DescribeLiveForbidStreamList(const Model::DescribeLiveForbidStreamListRequest &request);
                void DescribeLiveForbidStreamListAsync(const Model::DescribeLiveForbidStreamListRequest& request, const DescribeLiveForbidStreamListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeLiveForbidStreamListOutcomeCallable DescribeLiveForbidStreamListCallable(const Model::DescribeLiveForbidStreamListRequest& request);

                /**
                 *查询用户套餐包总量、使用量、剩余量、包状态、购买时间和过期时间等。
                 * @param req DescribeLivePackageInfoRequest
                 * @return DescribeLivePackageInfoOutcome
                 */
                DescribeLivePackageInfoOutcome DescribeLivePackageInfo(const Model::DescribeLivePackageInfoRequest &request);
                void DescribeLivePackageInfoAsync(const Model::DescribeLivePackageInfoRequest& request, const DescribeLivePackageInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeLivePackageInfoOutcomeCallable DescribeLivePackageInfoCallable(const Model::DescribeLivePackageInfoRequest& request);

                /**
                 *查询播放鉴权key。
                 * @param req DescribeLivePlayAuthKeyRequest
                 * @return DescribeLivePlayAuthKeyOutcome
                 */
                DescribeLivePlayAuthKeyOutcome DescribeLivePlayAuthKey(const Model::DescribeLivePlayAuthKeyRequest &request);
                void DescribeLivePlayAuthKeyAsync(const Model::DescribeLivePlayAuthKeyRequest& request, const DescribeLivePlayAuthKeyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeLivePlayAuthKeyOutcomeCallable DescribeLivePlayAuthKeyCallable(const Model::DescribeLivePlayAuthKeyRequest& request);

                /**
                 *查询直播推流鉴权key
                 * @param req DescribeLivePushAuthKeyRequest
                 * @return DescribeLivePushAuthKeyOutcome
                 */
                DescribeLivePushAuthKeyOutcome DescribeLivePushAuthKey(const Model::DescribeLivePushAuthKeyRequest &request);
                void DescribeLivePushAuthKeyAsync(const Model::DescribeLivePushAuthKeyRequest& request, const DescribeLivePushAuthKeyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeLivePushAuthKeyOutcomeCallable DescribeLivePushAuthKeyCallable(const Model::DescribeLivePushAuthKeyRequest& request);

                /**
                 *获取录制规则列表
                 * @param req DescribeLiveRecordRulesRequest
                 * @return DescribeLiveRecordRulesOutcome
                 */
                DescribeLiveRecordRulesOutcome DescribeLiveRecordRules(const Model::DescribeLiveRecordRulesRequest &request);
                void DescribeLiveRecordRulesAsync(const Model::DescribeLiveRecordRulesRequest& request, const DescribeLiveRecordRulesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeLiveRecordRulesOutcomeCallable DescribeLiveRecordRulesCallable(const Model::DescribeLiveRecordRulesRequest& request);

                /**
                 *获取单个录制模板。
                 * @param req DescribeLiveRecordTemplateRequest
                 * @return DescribeLiveRecordTemplateOutcome
                 */
                DescribeLiveRecordTemplateOutcome DescribeLiveRecordTemplate(const Model::DescribeLiveRecordTemplateRequest &request);
                void DescribeLiveRecordTemplateAsync(const Model::DescribeLiveRecordTemplateRequest& request, const DescribeLiveRecordTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeLiveRecordTemplateOutcomeCallable DescribeLiveRecordTemplateCallable(const Model::DescribeLiveRecordTemplateRequest& request);

                /**
                 *获取录制模板列表。
                 * @param req DescribeLiveRecordTemplatesRequest
                 * @return DescribeLiveRecordTemplatesOutcome
                 */
                DescribeLiveRecordTemplatesOutcome DescribeLiveRecordTemplates(const Model::DescribeLiveRecordTemplatesRequest &request);
                void DescribeLiveRecordTemplatesAsync(const Model::DescribeLiveRecordTemplatesRequest& request, const DescribeLiveRecordTemplatesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeLiveRecordTemplatesOutcomeCallable DescribeLiveRecordTemplatesCallable(const Model::DescribeLiveRecordTemplatesRequest& request);

                /**
                 *获取截图规则列表
                 * @param req DescribeLiveSnapshotRulesRequest
                 * @return DescribeLiveSnapshotRulesOutcome
                 */
                DescribeLiveSnapshotRulesOutcome DescribeLiveSnapshotRules(const Model::DescribeLiveSnapshotRulesRequest &request);
                void DescribeLiveSnapshotRulesAsync(const Model::DescribeLiveSnapshotRulesRequest& request, const DescribeLiveSnapshotRulesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeLiveSnapshotRulesOutcomeCallable DescribeLiveSnapshotRulesCallable(const Model::DescribeLiveSnapshotRulesRequest& request);

                /**
                 *获取单个截图模板。
                 * @param req DescribeLiveSnapshotTemplateRequest
                 * @return DescribeLiveSnapshotTemplateOutcome
                 */
                DescribeLiveSnapshotTemplateOutcome DescribeLiveSnapshotTemplate(const Model::DescribeLiveSnapshotTemplateRequest &request);
                void DescribeLiveSnapshotTemplateAsync(const Model::DescribeLiveSnapshotTemplateRequest& request, const DescribeLiveSnapshotTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeLiveSnapshotTemplateOutcomeCallable DescribeLiveSnapshotTemplateCallable(const Model::DescribeLiveSnapshotTemplateRequest& request);

                /**
                 *获取截图模板列表。
                 * @param req DescribeLiveSnapshotTemplatesRequest
                 * @return DescribeLiveSnapshotTemplatesOutcome
                 */
                DescribeLiveSnapshotTemplatesOutcome DescribeLiveSnapshotTemplates(const Model::DescribeLiveSnapshotTemplatesRequest &request);
                void DescribeLiveSnapshotTemplatesAsync(const Model::DescribeLiveSnapshotTemplatesRequest& request, const DescribeLiveSnapshotTemplatesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeLiveSnapshotTemplatesOutcomeCallable DescribeLiveSnapshotTemplatesCallable(const Model::DescribeLiveSnapshotTemplatesRequest& request);

                /**
                 *用于查询推断流事件。<br>

注意：该接口可通过使用IsFilter进行过滤，返回推流历史记录。
                 * @param req DescribeLiveStreamEventListRequest
                 * @return DescribeLiveStreamEventListOutcome
                 */
                DescribeLiveStreamEventListOutcome DescribeLiveStreamEventList(const Model::DescribeLiveStreamEventListRequest &request);
                void DescribeLiveStreamEventListAsync(const Model::DescribeLiveStreamEventListRequest& request, const DescribeLiveStreamEventListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeLiveStreamEventListOutcomeCallable DescribeLiveStreamEventListCallable(const Model::DescribeLiveStreamEventListRequest& request);

                /**
                 *返回正在直播中的流列表。适用于推流成功后查询在线流信息。
                 * @param req DescribeLiveStreamOnlineListRequest
                 * @return DescribeLiveStreamOnlineListOutcome
                 */
                DescribeLiveStreamOnlineListOutcome DescribeLiveStreamOnlineList(const Model::DescribeLiveStreamOnlineListRequest &request);
                void DescribeLiveStreamOnlineListAsync(const Model::DescribeLiveStreamOnlineListRequest& request, const DescribeLiveStreamOnlineListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeLiveStreamOnlineListOutcomeCallable DescribeLiveStreamOnlineListCallable(const Model::DescribeLiveStreamOnlineListRequest& request);

                /**
                 *返回已经推过流的流列表。<br>
注意：分页最多支持查询1万条记录，可通过调整查询时间范围来获取更多数据。
                 * @param req DescribeLiveStreamPublishedListRequest
                 * @return DescribeLiveStreamPublishedListOutcome
                 */
                DescribeLiveStreamPublishedListOutcome DescribeLiveStreamPublishedList(const Model::DescribeLiveStreamPublishedListRequest &request);
                void DescribeLiveStreamPublishedListAsync(const Model::DescribeLiveStreamPublishedListRequest& request, const DescribeLiveStreamPublishedListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeLiveStreamPublishedListOutcomeCallable DescribeLiveStreamPublishedListCallable(const Model::DescribeLiveStreamPublishedListRequest& request);

                /**
                 *查询所有实时流的推流信息，包括客户端IP，服务端IP，帧率，码率，域名，开始推流时间。
                 * @param req DescribeLiveStreamPushInfoListRequest
                 * @return DescribeLiveStreamPushInfoListOutcome
                 */
                DescribeLiveStreamPushInfoListOutcome DescribeLiveStreamPushInfoList(const Model::DescribeLiveStreamPushInfoListRequest &request);
                void DescribeLiveStreamPushInfoListAsync(const Model::DescribeLiveStreamPushInfoListRequest& request, const DescribeLiveStreamPushInfoListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeLiveStreamPushInfoListOutcomeCallable DescribeLiveStreamPushInfoListCallable(const Model::DescribeLiveStreamPushInfoListRequest& request);

                /**
                 *返回直播中、无推流或者禁播等状态
                 * @param req DescribeLiveStreamStateRequest
                 * @return DescribeLiveStreamStateOutcome
                 */
                DescribeLiveStreamStateOutcome DescribeLiveStreamState(const Model::DescribeLiveStreamStateRequest &request);
                void DescribeLiveStreamStateAsync(const Model::DescribeLiveStreamStateRequest& request, const DescribeLiveStreamStateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeLiveStreamStateOutcomeCallable DescribeLiveStreamStateCallable(const Model::DescribeLiveStreamStateRequest& request);

                /**
                 *支持查询某天或某段时间的转码详细信息。
                 * @param req DescribeLiveTranscodeDetailInfoRequest
                 * @return DescribeLiveTranscodeDetailInfoOutcome
                 */
                DescribeLiveTranscodeDetailInfoOutcome DescribeLiveTranscodeDetailInfo(const Model::DescribeLiveTranscodeDetailInfoRequest &request);
                void DescribeLiveTranscodeDetailInfoAsync(const Model::DescribeLiveTranscodeDetailInfoRequest& request, const DescribeLiveTranscodeDetailInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeLiveTranscodeDetailInfoOutcomeCallable DescribeLiveTranscodeDetailInfoCallable(const Model::DescribeLiveTranscodeDetailInfoRequest& request);

                /**
                 *获取转码规则列表
                 * @param req DescribeLiveTranscodeRulesRequest
                 * @return DescribeLiveTranscodeRulesOutcome
                 */
                DescribeLiveTranscodeRulesOutcome DescribeLiveTranscodeRules(const Model::DescribeLiveTranscodeRulesRequest &request);
                void DescribeLiveTranscodeRulesAsync(const Model::DescribeLiveTranscodeRulesRequest& request, const DescribeLiveTranscodeRulesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeLiveTranscodeRulesOutcomeCallable DescribeLiveTranscodeRulesCallable(const Model::DescribeLiveTranscodeRulesRequest& request);

                /**
                 *获取单个转码模板。
                 * @param req DescribeLiveTranscodeTemplateRequest
                 * @return DescribeLiveTranscodeTemplateOutcome
                 */
                DescribeLiveTranscodeTemplateOutcome DescribeLiveTranscodeTemplate(const Model::DescribeLiveTranscodeTemplateRequest &request);
                void DescribeLiveTranscodeTemplateAsync(const Model::DescribeLiveTranscodeTemplateRequest& request, const DescribeLiveTranscodeTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeLiveTranscodeTemplateOutcomeCallable DescribeLiveTranscodeTemplateCallable(const Model::DescribeLiveTranscodeTemplateRequest& request);

                /**
                 *获取转码模板列表。
                 * @param req DescribeLiveTranscodeTemplatesRequest
                 * @return DescribeLiveTranscodeTemplatesOutcome
                 */
                DescribeLiveTranscodeTemplatesOutcome DescribeLiveTranscodeTemplates(const Model::DescribeLiveTranscodeTemplatesRequest &request);
                void DescribeLiveTranscodeTemplatesAsync(const Model::DescribeLiveTranscodeTemplatesRequest& request, const DescribeLiveTranscodeTemplatesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeLiveTranscodeTemplatesOutcomeCallable DescribeLiveTranscodeTemplatesCallable(const Model::DescribeLiveTranscodeTemplatesRequest& request);

                /**
                 *获取单个水印信息。
                 * @param req DescribeLiveWatermarkRequest
                 * @return DescribeLiveWatermarkOutcome
                 */
                DescribeLiveWatermarkOutcome DescribeLiveWatermark(const Model::DescribeLiveWatermarkRequest &request);
                void DescribeLiveWatermarkAsync(const Model::DescribeLiveWatermarkRequest& request, const DescribeLiveWatermarkAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeLiveWatermarkOutcomeCallable DescribeLiveWatermarkCallable(const Model::DescribeLiveWatermarkRequest& request);

                /**
                 *获取水印规则列表。
                 * @param req DescribeLiveWatermarkRulesRequest
                 * @return DescribeLiveWatermarkRulesOutcome
                 */
                DescribeLiveWatermarkRulesOutcome DescribeLiveWatermarkRules(const Model::DescribeLiveWatermarkRulesRequest &request);
                void DescribeLiveWatermarkRulesAsync(const Model::DescribeLiveWatermarkRulesRequest& request, const DescribeLiveWatermarkRulesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeLiveWatermarkRulesOutcomeCallable DescribeLiveWatermarkRulesCallable(const Model::DescribeLiveWatermarkRulesRequest& request);

                /**
                 *查询水印列表。
                 * @param req DescribeLiveWatermarksRequest
                 * @return DescribeLiveWatermarksOutcome
                 */
                DescribeLiveWatermarksOutcome DescribeLiveWatermarks(const Model::DescribeLiveWatermarksRequest &request);
                void DescribeLiveWatermarksAsync(const Model::DescribeLiveWatermarksRequest& request, const DescribeLiveWatermarksAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeLiveWatermarksOutcomeCallable DescribeLiveWatermarksCallable(const Model::DescribeLiveWatermarksRequest& request);

                /**
                 *批量获取日志URL。
                 * @param req DescribeLogDownloadListRequest
                 * @return DescribeLogDownloadListOutcome
                 */
                DescribeLogDownloadListOutcome DescribeLogDownloadList(const Model::DescribeLogDownloadListRequest &request);
                void DescribeLogDownloadListAsync(const Model::DescribeLogDownloadListRequest& request, const DescribeLogDownloadListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeLogDownloadListOutcomeCallable DescribeLogDownloadListCallable(const Model::DescribeLogDownloadListRequest& request);

                /**
                 *查询下行播放错误码信息，某段时间内1分钟粒度的各http错误码出现的次数，包括4xx，5xx。


                 * @param req DescribePlayErrorCodeDetailInfoListRequest
                 * @return DescribePlayErrorCodeDetailInfoListOutcome
                 */
                DescribePlayErrorCodeDetailInfoListOutcome DescribePlayErrorCodeDetailInfoList(const Model::DescribePlayErrorCodeDetailInfoListRequest &request);
                void DescribePlayErrorCodeDetailInfoListAsync(const Model::DescribePlayErrorCodeDetailInfoListRequest& request, const DescribePlayErrorCodeDetailInfoListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribePlayErrorCodeDetailInfoListOutcomeCallable DescribePlayErrorCodeDetailInfoListCallable(const Model::DescribePlayErrorCodeDetailInfoListRequest& request);

                /**
                 *查询下行播放错误码信息。
                 * @param req DescribePlayErrorCodeSumInfoListRequest
                 * @return DescribePlayErrorCodeSumInfoListOutcome
                 */
                DescribePlayErrorCodeSumInfoListOutcome DescribePlayErrorCodeSumInfoList(const Model::DescribePlayErrorCodeSumInfoListRequest &request);
                void DescribePlayErrorCodeSumInfoListAsync(const Model::DescribePlayErrorCodeSumInfoListRequest& request, const DescribePlayErrorCodeSumInfoListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribePlayErrorCodeSumInfoListOutcomeCallable DescribePlayErrorCodeSumInfoListCallable(const Model::DescribePlayErrorCodeSumInfoListRequest& request);

                /**
                 *查询某段时间内每个国家地区每个省份每个运营商的平均每秒流量，总流量，总请求数信息。
                 * @param req DescribeProIspPlaySumInfoListRequest
                 * @return DescribeProIspPlaySumInfoListOutcome
                 */
                DescribeProIspPlaySumInfoListOutcome DescribeProIspPlaySumInfoList(const Model::DescribeProIspPlaySumInfoListRequest &request);
                void DescribeProIspPlaySumInfoListAsync(const Model::DescribeProIspPlaySumInfoListRequest& request, const DescribeProIspPlaySumInfoListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeProIspPlaySumInfoListOutcomeCallable DescribeProIspPlaySumInfoListCallable(const Model::DescribeProIspPlaySumInfoListRequest& request);

                /**
                 *查询某省份某运营商下行播放数据，包括带宽，流量，请求数，并发连接数信息。
                 * @param req DescribeProvinceIspPlayInfoListRequest
                 * @return DescribeProvinceIspPlayInfoListOutcome
                 */
                DescribeProvinceIspPlayInfoListOutcome DescribeProvinceIspPlayInfoList(const Model::DescribeProvinceIspPlayInfoListRequest &request);
                void DescribeProvinceIspPlayInfoListAsync(const Model::DescribeProvinceIspPlayInfoListRequest& request, const DescribeProvinceIspPlayInfoListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeProvinceIspPlayInfoListOutcomeCallable DescribeProvinceIspPlayInfoListCallable(const Model::DescribeProvinceIspPlayInfoListRequest& request);

                /**
                 *查询直播拉流配置。
                 * @param req DescribePullStreamConfigsRequest
                 * @return DescribePullStreamConfigsOutcome
                 */
                DescribePullStreamConfigsOutcome DescribePullStreamConfigs(const Model::DescribePullStreamConfigsRequest &request);
                void DescribePullStreamConfigsAsync(const Model::DescribePullStreamConfigsRequest& request, const DescribePullStreamConfigsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribePullStreamConfigsOutcomeCallable DescribePullStreamConfigsCallable(const Model::DescribePullStreamConfigsRequest& request);

                /**
                 *接口用来查询直播增值业务--截图的张数
                 * @param req DescribeScreenShotSheetNumListRequest
                 * @return DescribeScreenShotSheetNumListOutcome
                 */
                DescribeScreenShotSheetNumListOutcome DescribeScreenShotSheetNumList(const Model::DescribeScreenShotSheetNumListRequest &request);
                void DescribeScreenShotSheetNumListAsync(const Model::DescribeScreenShotSheetNumListRequest& request, const DescribeScreenShotSheetNumListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeScreenShotSheetNumListOutcomeCallable DescribeScreenShotSheetNumListCallable(const Model::DescribeScreenShotSheetNumListRequest& request);

                /**
                 *查询天维度每条流的播放数据，包括总流量等。
                 * @param req DescribeStreamDayPlayInfoListRequest
                 * @return DescribeStreamDayPlayInfoListOutcome
                 */
                DescribeStreamDayPlayInfoListOutcome DescribeStreamDayPlayInfoList(const Model::DescribeStreamDayPlayInfoListRequest &request);
                void DescribeStreamDayPlayInfoListAsync(const Model::DescribeStreamDayPlayInfoListRequest& request, const DescribeStreamDayPlayInfoListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeStreamDayPlayInfoListOutcomeCallable DescribeStreamDayPlayInfoListCallable(const Model::DescribeStreamDayPlayInfoListRequest& request);

                /**
                 *查询播放数据，支持按流名称查询详细播放数据，也可按播放域名查询详细总数据，数据延迟4分钟左右。
注意：按AppName查询，需要联系客服同学提单支持。
                 * @param req DescribeStreamPlayInfoListRequest
                 * @return DescribeStreamPlayInfoListOutcome
                 */
                DescribeStreamPlayInfoListOutcome DescribeStreamPlayInfoList(const Model::DescribeStreamPlayInfoListRequest &request);
                void DescribeStreamPlayInfoListAsync(const Model::DescribeStreamPlayInfoListRequest& request, const DescribeStreamPlayInfoListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeStreamPlayInfoListOutcomeCallable DescribeStreamPlayInfoListCallable(const Model::DescribeStreamPlayInfoListRequest& request);

                /**
                 *查询流id的上行推流质量数据，包括音视频的帧率，码率，流逝时间，编码格式等。
                 * @param req DescribeStreamPushInfoListRequest
                 * @return DescribeStreamPushInfoListOutcome
                 */
                DescribeStreamPushInfoListOutcome DescribeStreamPushInfoList(const Model::DescribeStreamPushInfoListRequest &request);
                void DescribeStreamPushInfoListAsync(const Model::DescribeStreamPushInfoListRequest& request, const DescribeStreamPushInfoListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeStreamPushInfoListOutcomeCallable DescribeStreamPushInfoListCallable(const Model::DescribeStreamPushInfoListRequest& request);

                /**
                 *查询某段时间top n客户端ip汇总信息（暂支持top 1000）
                 * @param req DescribeTopClientIpSumInfoListRequest
                 * @return DescribeTopClientIpSumInfoListOutcome
                 */
                DescribeTopClientIpSumInfoListOutcome DescribeTopClientIpSumInfoList(const Model::DescribeTopClientIpSumInfoListRequest &request);
                void DescribeTopClientIpSumInfoListAsync(const Model::DescribeTopClientIpSumInfoListRequest& request, const DescribeTopClientIpSumInfoListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeTopClientIpSumInfoListOutcomeCallable DescribeTopClientIpSumInfoListCallable(const Model::DescribeTopClientIpSumInfoListRequest& request);

                /**
                 *查询某时间段top n的域名或流id信息（暂支持top 1000）。
                 * @param req DescribeVisitTopSumInfoListRequest
                 * @return DescribeVisitTopSumInfoListOutcome
                 */
                DescribeVisitTopSumInfoListOutcome DescribeVisitTopSumInfoList(const Model::DescribeVisitTopSumInfoListRequest &request);
                void DescribeVisitTopSumInfoListAsync(const Model::DescribeVisitTopSumInfoListRequest& request, const DescribeVisitTopSumInfoListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeVisitTopSumInfoListOutcomeCallable DescribeVisitTopSumInfoListCallable(const Model::DescribeVisitTopSumInfoListRequest& request);

                /**
                 *断开推流连接，但可以重新推流。
                 * @param req DropLiveStreamRequest
                 * @return DropLiveStreamOutcome
                 */
                DropLiveStreamOutcome DropLiveStream(const Model::DropLiveStreamRequest &request);
                void DropLiveStreamAsync(const Model::DropLiveStreamRequest& request, const DropLiveStreamAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DropLiveStreamOutcomeCallable DropLiveStreamCallable(const Model::DropLiveStreamRequest& request);

                /**
                 *启用状态为停用的直播域名。
                 * @param req EnableLiveDomainRequest
                 * @return EnableLiveDomainOutcome
                 */
                EnableLiveDomainOutcome EnableLiveDomain(const Model::EnableLiveDomainRequest &request);
                void EnableLiveDomainAsync(const Model::EnableLiveDomainRequest& request, const EnableLiveDomainAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                EnableLiveDomainOutcomeCallable EnableLiveDomainCallable(const Model::EnableLiveDomainRequest& request);

                /**
                 *停止使用某个直播域名。
                 * @param req ForbidLiveDomainRequest
                 * @return ForbidLiveDomainOutcome
                 */
                ForbidLiveDomainOutcome ForbidLiveDomain(const Model::ForbidLiveDomainRequest &request);
                void ForbidLiveDomainAsync(const Model::ForbidLiveDomainRequest& request, const ForbidLiveDomainAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ForbidLiveDomainOutcomeCallable ForbidLiveDomainCallable(const Model::ForbidLiveDomainRequest& request);

                /**
                 *禁止某条流的推送，可以预设某个时刻将流恢复。
                 * @param req ForbidLiveStreamRequest
                 * @return ForbidLiveStreamOutcome
                 */
                ForbidLiveStreamOutcome ForbidLiveStream(const Model::ForbidLiveStreamRequest &request);
                void ForbidLiveStreamAsync(const Model::ForbidLiveStreamRequest& request, const ForbidLiveStreamAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ForbidLiveStreamOutcomeCallable ForbidLiveStreamCallable(const Model::ForbidLiveStreamRequest& request);

                /**
                 *修改回调模板。
                 * @param req ModifyLiveCallbackTemplateRequest
                 * @return ModifyLiveCallbackTemplateOutcome
                 */
                ModifyLiveCallbackTemplateOutcome ModifyLiveCallbackTemplate(const Model::ModifyLiveCallbackTemplateRequest &request);
                void ModifyLiveCallbackTemplateAsync(const Model::ModifyLiveCallbackTemplateRequest& request, const ModifyLiveCallbackTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyLiveCallbackTemplateOutcomeCallable ModifyLiveCallbackTemplateCallable(const Model::ModifyLiveCallbackTemplateRequest& request);

                /**
                 *修改证书
                 * @param req ModifyLiveCertRequest
                 * @return ModifyLiveCertOutcome
                 */
                ModifyLiveCertOutcome ModifyLiveCert(const Model::ModifyLiveCertRequest &request);
                void ModifyLiveCertAsync(const Model::ModifyLiveCertRequest& request, const ModifyLiveCertAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyLiveCertOutcomeCallable ModifyLiveCertCallable(const Model::ModifyLiveCertRequest& request);

                /**
                 *修改域名和证书绑定信息
                 * @param req ModifyLiveDomainCertRequest
                 * @return ModifyLiveDomainCertOutcome
                 */
                ModifyLiveDomainCertOutcome ModifyLiveDomainCert(const Model::ModifyLiveDomainCertRequest &request);
                void ModifyLiveDomainCertAsync(const Model::ModifyLiveDomainCertRequest& request, const ModifyLiveDomainCertAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyLiveDomainCertOutcomeCallable ModifyLiveDomainCertCallable(const Model::ModifyLiveDomainCertRequest& request);

                /**
                 *修改播放鉴权key
                 * @param req ModifyLivePlayAuthKeyRequest
                 * @return ModifyLivePlayAuthKeyOutcome
                 */
                ModifyLivePlayAuthKeyOutcome ModifyLivePlayAuthKey(const Model::ModifyLivePlayAuthKeyRequest &request);
                void ModifyLivePlayAuthKeyAsync(const Model::ModifyLivePlayAuthKeyRequest& request, const ModifyLivePlayAuthKeyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyLivePlayAuthKeyOutcomeCallable ModifyLivePlayAuthKeyCallable(const Model::ModifyLivePlayAuthKeyRequest& request);

                /**
                 *修改播放域名信息。
                 * @param req ModifyLivePlayDomainRequest
                 * @return ModifyLivePlayDomainOutcome
                 */
                ModifyLivePlayDomainOutcome ModifyLivePlayDomain(const Model::ModifyLivePlayDomainRequest &request);
                void ModifyLivePlayDomainAsync(const Model::ModifyLivePlayDomainRequest& request, const ModifyLivePlayDomainAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyLivePlayDomainOutcomeCallable ModifyLivePlayDomainCallable(const Model::ModifyLivePlayDomainRequest& request);

                /**
                 *修改直播推流鉴权key
                 * @param req ModifyLivePushAuthKeyRequest
                 * @return ModifyLivePushAuthKeyOutcome
                 */
                ModifyLivePushAuthKeyOutcome ModifyLivePushAuthKey(const Model::ModifyLivePushAuthKeyRequest &request);
                void ModifyLivePushAuthKeyAsync(const Model::ModifyLivePushAuthKeyRequest& request, const ModifyLivePushAuthKeyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyLivePushAuthKeyOutcomeCallable ModifyLivePushAuthKeyCallable(const Model::ModifyLivePushAuthKeyRequest& request);

                /**
                 *修改录制模板配置。
                 * @param req ModifyLiveRecordTemplateRequest
                 * @return ModifyLiveRecordTemplateOutcome
                 */
                ModifyLiveRecordTemplateOutcome ModifyLiveRecordTemplate(const Model::ModifyLiveRecordTemplateRequest &request);
                void ModifyLiveRecordTemplateAsync(const Model::ModifyLiveRecordTemplateRequest& request, const ModifyLiveRecordTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyLiveRecordTemplateOutcomeCallable ModifyLiveRecordTemplateCallable(const Model::ModifyLiveRecordTemplateRequest& request);

                /**
                 *修改截图模板配置。
                 * @param req ModifyLiveSnapshotTemplateRequest
                 * @return ModifyLiveSnapshotTemplateOutcome
                 */
                ModifyLiveSnapshotTemplateOutcome ModifyLiveSnapshotTemplate(const Model::ModifyLiveSnapshotTemplateRequest &request);
                void ModifyLiveSnapshotTemplateAsync(const Model::ModifyLiveSnapshotTemplateRequest& request, const ModifyLiveSnapshotTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyLiveSnapshotTemplateOutcomeCallable ModifyLiveSnapshotTemplateCallable(const Model::ModifyLiveSnapshotTemplateRequest& request);

                /**
                 *修改转码模板配置。
                 * @param req ModifyLiveTranscodeTemplateRequest
                 * @return ModifyLiveTranscodeTemplateOutcome
                 */
                ModifyLiveTranscodeTemplateOutcome ModifyLiveTranscodeTemplate(const Model::ModifyLiveTranscodeTemplateRequest &request);
                void ModifyLiveTranscodeTemplateAsync(const Model::ModifyLiveTranscodeTemplateRequest& request, const ModifyLiveTranscodeTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyLiveTranscodeTemplateOutcomeCallable ModifyLiveTranscodeTemplateCallable(const Model::ModifyLiveTranscodeTemplateRequest& request);

                /**
                 *更新拉流配置。
                 * @param req ModifyPullStreamConfigRequest
                 * @return ModifyPullStreamConfigOutcome
                 */
                ModifyPullStreamConfigOutcome ModifyPullStreamConfig(const Model::ModifyPullStreamConfigRequest &request);
                void ModifyPullStreamConfigAsync(const Model::ModifyPullStreamConfigRequest& request, const ModifyPullStreamConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyPullStreamConfigOutcomeCallable ModifyPullStreamConfigCallable(const Model::ModifyPullStreamConfigRequest& request);

                /**
                 *修改直播拉流配置的状态。
                 * @param req ModifyPullStreamStatusRequest
                 * @return ModifyPullStreamStatusOutcome
                 */
                ModifyPullStreamStatusOutcome ModifyPullStreamStatus(const Model::ModifyPullStreamStatusRequest &request);
                void ModifyPullStreamStatusAsync(const Model::ModifyPullStreamStatusRequest& request, const ModifyPullStreamStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyPullStreamStatusOutcomeCallable ModifyPullStreamStatusCallable(const Model::ModifyPullStreamStatusRequest& request);

                /**
                 *恢复延迟播放设置
                 * @param req ResumeDelayLiveStreamRequest
                 * @return ResumeDelayLiveStreamOutcome
                 */
                ResumeDelayLiveStreamOutcome ResumeDelayLiveStream(const Model::ResumeDelayLiveStreamRequest &request);
                void ResumeDelayLiveStreamAsync(const Model::ResumeDelayLiveStreamRequest& request, const ResumeDelayLiveStreamAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ResumeDelayLiveStreamOutcomeCallable ResumeDelayLiveStreamCallable(const Model::ResumeDelayLiveStreamRequest& request);

                /**
                 *恢复某条流的推流。
                 * @param req ResumeLiveStreamRequest
                 * @return ResumeLiveStreamOutcome
                 */
                ResumeLiveStreamOutcome ResumeLiveStream(const Model::ResumeLiveStreamRequest &request);
                void ResumeLiveStreamAsync(const Model::ResumeLiveStreamRequest& request, const ResumeLiveStreamAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ResumeLiveStreamOutcomeCallable ResumeLiveStreamCallable(const Model::ResumeLiveStreamRequest& request);

                /**
                 *说明：录制后的文件存放于点播平台。用户如需使用录制功能，需首先自行开通点播账号并确保账号可用。录制文件存放后，相关费用（含存储以及下行播放流量）按照点播平台计费方式收取，请参考对应文档。
                 * @param req StopLiveRecordRequest
                 * @return StopLiveRecordOutcome
                 */
                StopLiveRecordOutcome StopLiveRecord(const Model::StopLiveRecordRequest &request);
                void StopLiveRecordAsync(const Model::StopLiveRecordRequest& request, const StopLiveRecordAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                StopLiveRecordOutcomeCallable StopLiveRecordCallable(const Model::StopLiveRecordRequest& request);

                /**
                 *提前结束录制，并中止运行中的录制任务。任务被成功中止后将不再启动。
                 * @param req StopRecordTaskRequest
                 * @return StopRecordTaskOutcome
                 */
                StopRecordTaskOutcome StopRecordTask(const Model::StopRecordTaskRequest &request);
                void StopRecordTaskAsync(const Model::StopRecordTaskRequest& request, const StopRecordTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                StopRecordTaskOutcomeCallable StopRecordTaskCallable(const Model::StopRecordTaskRequest& request);

                /**
                 *解绑域名证书
                 * @param req UnBindLiveDomainCertRequest
                 * @return UnBindLiveDomainCertOutcome
                 */
                UnBindLiveDomainCertOutcome UnBindLiveDomainCert(const Model::UnBindLiveDomainCertRequest &request);
                void UnBindLiveDomainCertAsync(const Model::UnBindLiveDomainCertRequest& request, const UnBindLiveDomainCertAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                UnBindLiveDomainCertOutcomeCallable UnBindLiveDomainCertCallable(const Model::UnBindLiveDomainCertRequest& request);

                /**
                 *更新水印。
                 * @param req UpdateLiveWatermarkRequest
                 * @return UpdateLiveWatermarkOutcome
                 */
                UpdateLiveWatermarkOutcome UpdateLiveWatermark(const Model::UpdateLiveWatermarkRequest &request);
                void UpdateLiveWatermarkAsync(const Model::UpdateLiveWatermarkRequest& request, const UpdateLiveWatermarkAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                UpdateLiveWatermarkOutcomeCallable UpdateLiveWatermarkCallable(const Model::UpdateLiveWatermarkRequest& request);

            };
        }
    }
}

#endif // !TENCENTCLOUD_LIVE_V20180801_LIVECLIENT_H_
