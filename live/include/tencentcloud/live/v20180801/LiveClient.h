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

#ifndef TENCENTCLOUD_LIVE_V20180801_LIVECLIENT_H_
#define TENCENTCLOUD_LIVE_V20180801_LIVECLIENT_H_

#include <functional>
#include <future>
#include <tencentcloud/core/AbstractClient.h>
#include <tencentcloud/core/Credential.h>
#include <tencentcloud/core/profile/ClientProfile.h>
#include <tencentcloud/core/AsyncCallerContext.h>
#include <tencentcloud/live/v20180801/model/AddCasterInputInfoRequest.h>
#include <tencentcloud/live/v20180801/model/AddCasterInputInfoResponse.h>
#include <tencentcloud/live/v20180801/model/AddCasterLayoutInfoRequest.h>
#include <tencentcloud/live/v20180801/model/AddCasterLayoutInfoResponse.h>
#include <tencentcloud/live/v20180801/model/AddCasterMarkPicInfoRequest.h>
#include <tencentcloud/live/v20180801/model/AddCasterMarkPicInfoResponse.h>
#include <tencentcloud/live/v20180801/model/AddCasterMarkWordInfoRequest.h>
#include <tencentcloud/live/v20180801/model/AddCasterMarkWordInfoResponse.h>
#include <tencentcloud/live/v20180801/model/AddCasterOutputInfoRequest.h>
#include <tencentcloud/live/v20180801/model/AddCasterOutputInfoResponse.h>
#include <tencentcloud/live/v20180801/model/AddDelayLiveStreamRequest.h>
#include <tencentcloud/live/v20180801/model/AddDelayLiveStreamResponse.h>
#include <tencentcloud/live/v20180801/model/AddLiveDomainRequest.h>
#include <tencentcloud/live/v20180801/model/AddLiveDomainResponse.h>
#include <tencentcloud/live/v20180801/model/AddLiveWatermarkRequest.h>
#include <tencentcloud/live/v20180801/model/AddLiveWatermarkResponse.h>
#include <tencentcloud/live/v20180801/model/AuthenticateDomainOwnerRequest.h>
#include <tencentcloud/live/v20180801/model/AuthenticateDomainOwnerResponse.h>
#include <tencentcloud/live/v20180801/model/CancelCommonMixStreamRequest.h>
#include <tencentcloud/live/v20180801/model/CancelCommonMixStreamResponse.h>
#include <tencentcloud/live/v20180801/model/CloseSourceStreamRequest.h>
#include <tencentcloud/live/v20180801/model/CloseSourceStreamResponse.h>
#include <tencentcloud/live/v20180801/model/CopyCasterRequest.h>
#include <tencentcloud/live/v20180801/model/CopyCasterResponse.h>
#include <tencentcloud/live/v20180801/model/CopyLiveAvatarRoomRequest.h>
#include <tencentcloud/live/v20180801/model/CopyLiveAvatarRoomResponse.h>
#include <tencentcloud/live/v20180801/model/CreateAuditKeywordLibRequest.h>
#include <tencentcloud/live/v20180801/model/CreateAuditKeywordLibResponse.h>
#include <tencentcloud/live/v20180801/model/CreateAuditKeywordsRequest.h>
#include <tencentcloud/live/v20180801/model/CreateAuditKeywordsResponse.h>
#include <tencentcloud/live/v20180801/model/CreateCasterRequest.h>
#include <tencentcloud/live/v20180801/model/CreateCasterResponse.h>
#include <tencentcloud/live/v20180801/model/CreateCasterInputPushUrlRequest.h>
#include <tencentcloud/live/v20180801/model/CreateCasterInputPushUrlResponse.h>
#include <tencentcloud/live/v20180801/model/CreateCasterPgmRequest.h>
#include <tencentcloud/live/v20180801/model/CreateCasterPgmResponse.h>
#include <tencentcloud/live/v20180801/model/CreateCasterPgmFromPvwRequest.h>
#include <tencentcloud/live/v20180801/model/CreateCasterPgmFromPvwResponse.h>
#include <tencentcloud/live/v20180801/model/CreateCasterPvwRequest.h>
#include <tencentcloud/live/v20180801/model/CreateCasterPvwResponse.h>
#include <tencentcloud/live/v20180801/model/CreateCommonMixStreamRequest.h>
#include <tencentcloud/live/v20180801/model/CreateCommonMixStreamResponse.h>
#include <tencentcloud/live/v20180801/model/CreateLiveAvatarRoomRequest.h>
#include <tencentcloud/live/v20180801/model/CreateLiveAvatarRoomResponse.h>
#include <tencentcloud/live/v20180801/model/CreateLiveAvatarScriptRequest.h>
#include <tencentcloud/live/v20180801/model/CreateLiveAvatarScriptResponse.h>
#include <tencentcloud/live/v20180801/model/CreateLiveCallbackRuleRequest.h>
#include <tencentcloud/live/v20180801/model/CreateLiveCallbackRuleResponse.h>
#include <tencentcloud/live/v20180801/model/CreateLiveCallbackTemplateRequest.h>
#include <tencentcloud/live/v20180801/model/CreateLiveCallbackTemplateResponse.h>
#include <tencentcloud/live/v20180801/model/CreateLiveCloudEffectRequest.h>
#include <tencentcloud/live/v20180801/model/CreateLiveCloudEffectResponse.h>
#include <tencentcloud/live/v20180801/model/CreateLivePadRuleRequest.h>
#include <tencentcloud/live/v20180801/model/CreateLivePadRuleResponse.h>
#include <tencentcloud/live/v20180801/model/CreateLivePadTemplateRequest.h>
#include <tencentcloud/live/v20180801/model/CreateLivePadTemplateResponse.h>
#include <tencentcloud/live/v20180801/model/CreateLivePullStreamTaskRequest.h>
#include <tencentcloud/live/v20180801/model/CreateLivePullStreamTaskResponse.h>
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
#include <tencentcloud/live/v20180801/model/CreateLiveStreamMonitorRequest.h>
#include <tencentcloud/live/v20180801/model/CreateLiveStreamMonitorResponse.h>
#include <tencentcloud/live/v20180801/model/CreateLiveTimeShiftRuleRequest.h>
#include <tencentcloud/live/v20180801/model/CreateLiveTimeShiftRuleResponse.h>
#include <tencentcloud/live/v20180801/model/CreateLiveTimeShiftTemplateRequest.h>
#include <tencentcloud/live/v20180801/model/CreateLiveTimeShiftTemplateResponse.h>
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
#include <tencentcloud/live/v20180801/model/CreateScreenshotTaskRequest.h>
#include <tencentcloud/live/v20180801/model/CreateScreenshotTaskResponse.h>
#include <tencentcloud/live/v20180801/model/CreateVideoRedrawTaskRequest.h>
#include <tencentcloud/live/v20180801/model/CreateVideoRedrawTaskResponse.h>
#include <tencentcloud/live/v20180801/model/DeleteAuditKeywordsRequest.h>
#include <tencentcloud/live/v20180801/model/DeleteAuditKeywordsResponse.h>
#include <tencentcloud/live/v20180801/model/DeleteCasterRequest.h>
#include <tencentcloud/live/v20180801/model/DeleteCasterResponse.h>
#include <tencentcloud/live/v20180801/model/DeleteCasterInputInfoRequest.h>
#include <tencentcloud/live/v20180801/model/DeleteCasterInputInfoResponse.h>
#include <tencentcloud/live/v20180801/model/DeleteCasterLayoutInfoRequest.h>
#include <tencentcloud/live/v20180801/model/DeleteCasterLayoutInfoResponse.h>
#include <tencentcloud/live/v20180801/model/DeleteCasterMarkPicInfoRequest.h>
#include <tencentcloud/live/v20180801/model/DeleteCasterMarkPicInfoResponse.h>
#include <tencentcloud/live/v20180801/model/DeleteCasterMarkWordInfoRequest.h>
#include <tencentcloud/live/v20180801/model/DeleteCasterMarkWordInfoResponse.h>
#include <tencentcloud/live/v20180801/model/DeleteCasterOutputInfoRequest.h>
#include <tencentcloud/live/v20180801/model/DeleteCasterOutputInfoResponse.h>
#include <tencentcloud/live/v20180801/model/DeleteLiveAvatarRoomRequest.h>
#include <tencentcloud/live/v20180801/model/DeleteLiveAvatarRoomResponse.h>
#include <tencentcloud/live/v20180801/model/DeleteLiveAvatarScriptRequest.h>
#include <tencentcloud/live/v20180801/model/DeleteLiveAvatarScriptResponse.h>
#include <tencentcloud/live/v20180801/model/DeleteLiveCallbackRuleRequest.h>
#include <tencentcloud/live/v20180801/model/DeleteLiveCallbackRuleResponse.h>
#include <tencentcloud/live/v20180801/model/DeleteLiveCallbackTemplateRequest.h>
#include <tencentcloud/live/v20180801/model/DeleteLiveCallbackTemplateResponse.h>
#include <tencentcloud/live/v20180801/model/DeleteLiveDomainRequest.h>
#include <tencentcloud/live/v20180801/model/DeleteLiveDomainResponse.h>
#include <tencentcloud/live/v20180801/model/DeleteLivePadRuleRequest.h>
#include <tencentcloud/live/v20180801/model/DeleteLivePadRuleResponse.h>
#include <tencentcloud/live/v20180801/model/DeleteLivePadTemplateRequest.h>
#include <tencentcloud/live/v20180801/model/DeleteLivePadTemplateResponse.h>
#include <tencentcloud/live/v20180801/model/DeleteLivePullStreamTaskRequest.h>
#include <tencentcloud/live/v20180801/model/DeleteLivePullStreamTaskResponse.h>
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
#include <tencentcloud/live/v20180801/model/DeleteLiveStreamMonitorRequest.h>
#include <tencentcloud/live/v20180801/model/DeleteLiveStreamMonitorResponse.h>
#include <tencentcloud/live/v20180801/model/DeleteLiveTimeShiftRuleRequest.h>
#include <tencentcloud/live/v20180801/model/DeleteLiveTimeShiftRuleResponse.h>
#include <tencentcloud/live/v20180801/model/DeleteLiveTimeShiftTemplateRequest.h>
#include <tencentcloud/live/v20180801/model/DeleteLiveTimeShiftTemplateResponse.h>
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
#include <tencentcloud/live/v20180801/model/DeleteScreenshotTaskRequest.h>
#include <tencentcloud/live/v20180801/model/DeleteScreenshotTaskResponse.h>
#include <tencentcloud/live/v20180801/model/DescribeAIGCTaskStatusRequest.h>
#include <tencentcloud/live/v20180801/model/DescribeAIGCTaskStatusResponse.h>
#include <tencentcloud/live/v20180801/model/DescribeAllStreamPlayInfoListRequest.h>
#include <tencentcloud/live/v20180801/model/DescribeAllStreamPlayInfoListResponse.h>
#include <tencentcloud/live/v20180801/model/DescribeAreaBillBandwidthAndFluxListRequest.h>
#include <tencentcloud/live/v20180801/model/DescribeAreaBillBandwidthAndFluxListResponse.h>
#include <tencentcloud/live/v20180801/model/DescribeAuditKeywordsRequest.h>
#include <tencentcloud/live/v20180801/model/DescribeAuditKeywordsResponse.h>
#include <tencentcloud/live/v20180801/model/DescribeBackupStreamListRequest.h>
#include <tencentcloud/live/v20180801/model/DescribeBackupStreamListResponse.h>
#include <tencentcloud/live/v20180801/model/DescribeBillBandwidthAndFluxListRequest.h>
#include <tencentcloud/live/v20180801/model/DescribeBillBandwidthAndFluxListResponse.h>
#include <tencentcloud/live/v20180801/model/DescribeCallbackRecordsListRequest.h>
#include <tencentcloud/live/v20180801/model/DescribeCallbackRecordsListResponse.h>
#include <tencentcloud/live/v20180801/model/DescribeCasterRequest.h>
#include <tencentcloud/live/v20180801/model/DescribeCasterResponse.h>
#include <tencentcloud/live/v20180801/model/DescribeCasterDisplayInfoRequest.h>
#include <tencentcloud/live/v20180801/model/DescribeCasterDisplayInfoResponse.h>
#include <tencentcloud/live/v20180801/model/DescribeCasterEmergencyStatusRequest.h>
#include <tencentcloud/live/v20180801/model/DescribeCasterEmergencyStatusResponse.h>
#include <tencentcloud/live/v20180801/model/DescribeCasterInputInfosRequest.h>
#include <tencentcloud/live/v20180801/model/DescribeCasterInputInfosResponse.h>
#include <tencentcloud/live/v20180801/model/DescribeCasterLayoutInfosRequest.h>
#include <tencentcloud/live/v20180801/model/DescribeCasterLayoutInfosResponse.h>
#include <tencentcloud/live/v20180801/model/DescribeCasterListRequest.h>
#include <tencentcloud/live/v20180801/model/DescribeCasterListResponse.h>
#include <tencentcloud/live/v20180801/model/DescribeCasterMarkPicInfosRequest.h>
#include <tencentcloud/live/v20180801/model/DescribeCasterMarkPicInfosResponse.h>
#include <tencentcloud/live/v20180801/model/DescribeCasterMarkWordInfosRequest.h>
#include <tencentcloud/live/v20180801/model/DescribeCasterMarkWordInfosResponse.h>
#include <tencentcloud/live/v20180801/model/DescribeCasterOutputInfosRequest.h>
#include <tencentcloud/live/v20180801/model/DescribeCasterOutputInfosResponse.h>
#include <tencentcloud/live/v20180801/model/DescribeCasterPlayUrlRequest.h>
#include <tencentcloud/live/v20180801/model/DescribeCasterPlayUrlResponse.h>
#include <tencentcloud/live/v20180801/model/DescribeCasterTransitionTypesRequest.h>
#include <tencentcloud/live/v20180801/model/DescribeCasterTransitionTypesResponse.h>
#include <tencentcloud/live/v20180801/model/DescribeCasterUserStatusRequest.h>
#include <tencentcloud/live/v20180801/model/DescribeCasterUserStatusResponse.h>
#include <tencentcloud/live/v20180801/model/DescribeConcurrentRecordStreamNumRequest.h>
#include <tencentcloud/live/v20180801/model/DescribeConcurrentRecordStreamNumResponse.h>
#include <tencentcloud/live/v20180801/model/DescribeDeliverBandwidthListRequest.h>
#include <tencentcloud/live/v20180801/model/DescribeDeliverBandwidthListResponse.h>
#include <tencentcloud/live/v20180801/model/DescribeDeliverLogDownListRequest.h>
#include <tencentcloud/live/v20180801/model/DescribeDeliverLogDownListResponse.h>
#include <tencentcloud/live/v20180801/model/DescribeGroupProIspPlayInfoListRequest.h>
#include <tencentcloud/live/v20180801/model/DescribeGroupProIspPlayInfoListResponse.h>
#include <tencentcloud/live/v20180801/model/DescribeHttpStatusInfoListRequest.h>
#include <tencentcloud/live/v20180801/model/DescribeHttpStatusInfoListResponse.h>
#include <tencentcloud/live/v20180801/model/DescribeLiveAvatarBackgroundListRequest.h>
#include <tencentcloud/live/v20180801/model/DescribeLiveAvatarBackgroundListResponse.h>
#include <tencentcloud/live/v20180801/model/DescribeLiveAvatarImageListRequest.h>
#include <tencentcloud/live/v20180801/model/DescribeLiveAvatarImageListResponse.h>
#include <tencentcloud/live/v20180801/model/DescribeLiveAvatarRoomsRequest.h>
#include <tencentcloud/live/v20180801/model/DescribeLiveAvatarRoomsResponse.h>
#include <tencentcloud/live/v20180801/model/DescribeLiveAvatarScriptsRequest.h>
#include <tencentcloud/live/v20180801/model/DescribeLiveAvatarScriptsResponse.h>
#include <tencentcloud/live/v20180801/model/DescribeLiveAvatarTemporaryScriptListRequest.h>
#include <tencentcloud/live/v20180801/model/DescribeLiveAvatarTemporaryScriptListResponse.h>
#include <tencentcloud/live/v20180801/model/DescribeLiveAvatarTimbreListRequest.h>
#include <tencentcloud/live/v20180801/model/DescribeLiveAvatarTimbreListResponse.h>
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
#include <tencentcloud/live/v20180801/model/DescribeLiveCloudEffectConfigRequest.h>
#include <tencentcloud/live/v20180801/model/DescribeLiveCloudEffectConfigResponse.h>
#include <tencentcloud/live/v20180801/model/DescribeLiveCloudEffectListRequest.h>
#include <tencentcloud/live/v20180801/model/DescribeLiveCloudEffectListResponse.h>
#include <tencentcloud/live/v20180801/model/DescribeLiveDelayInfoListRequest.h>
#include <tencentcloud/live/v20180801/model/DescribeLiveDelayInfoListResponse.h>
#include <tencentcloud/live/v20180801/model/DescribeLiveDomainRequest.h>
#include <tencentcloud/live/v20180801/model/DescribeLiveDomainResponse.h>
#include <tencentcloud/live/v20180801/model/DescribeLiveDomainCertRequest.h>
#include <tencentcloud/live/v20180801/model/DescribeLiveDomainCertResponse.h>
#include <tencentcloud/live/v20180801/model/DescribeLiveDomainCertBindingsRequest.h>
#include <tencentcloud/live/v20180801/model/DescribeLiveDomainCertBindingsResponse.h>
#include <tencentcloud/live/v20180801/model/DescribeLiveDomainPlayInfoListRequest.h>
#include <tencentcloud/live/v20180801/model/DescribeLiveDomainPlayInfoListResponse.h>
#include <tencentcloud/live/v20180801/model/DescribeLiveDomainRefererRequest.h>
#include <tencentcloud/live/v20180801/model/DescribeLiveDomainRefererResponse.h>
#include <tencentcloud/live/v20180801/model/DescribeLiveDomainsRequest.h>
#include <tencentcloud/live/v20180801/model/DescribeLiveDomainsResponse.h>
#include <tencentcloud/live/v20180801/model/DescribeLiveEnhanceInfoListRequest.h>
#include <tencentcloud/live/v20180801/model/DescribeLiveEnhanceInfoListResponse.h>
#include <tencentcloud/live/v20180801/model/DescribeLivePackageInfoRequest.h>
#include <tencentcloud/live/v20180801/model/DescribeLivePackageInfoResponse.h>
#include <tencentcloud/live/v20180801/model/DescribeLivePadRulesRequest.h>
#include <tencentcloud/live/v20180801/model/DescribeLivePadRulesResponse.h>
#include <tencentcloud/live/v20180801/model/DescribeLivePadStreamListRequest.h>
#include <tencentcloud/live/v20180801/model/DescribeLivePadStreamListResponse.h>
#include <tencentcloud/live/v20180801/model/DescribeLivePadTemplateRequest.h>
#include <tencentcloud/live/v20180801/model/DescribeLivePadTemplateResponse.h>
#include <tencentcloud/live/v20180801/model/DescribeLivePadTemplatesRequest.h>
#include <tencentcloud/live/v20180801/model/DescribeLivePadTemplatesResponse.h>
#include <tencentcloud/live/v20180801/model/DescribeLivePlayAuthKeyRequest.h>
#include <tencentcloud/live/v20180801/model/DescribeLivePlayAuthKeyResponse.h>
#include <tencentcloud/live/v20180801/model/DescribeLivePullStreamTaskStatusRequest.h>
#include <tencentcloud/live/v20180801/model/DescribeLivePullStreamTaskStatusResponse.h>
#include <tencentcloud/live/v20180801/model/DescribeLivePullStreamTasksRequest.h>
#include <tencentcloud/live/v20180801/model/DescribeLivePullStreamTasksResponse.h>
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
#include <tencentcloud/live/v20180801/model/DescribeLiveStreamMonitorRequest.h>
#include <tencentcloud/live/v20180801/model/DescribeLiveStreamMonitorResponse.h>
#include <tencentcloud/live/v20180801/model/DescribeLiveStreamMonitorListRequest.h>
#include <tencentcloud/live/v20180801/model/DescribeLiveStreamMonitorListResponse.h>
#include <tencentcloud/live/v20180801/model/DescribeLiveStreamOnlineListRequest.h>
#include <tencentcloud/live/v20180801/model/DescribeLiveStreamOnlineListResponse.h>
#include <tencentcloud/live/v20180801/model/DescribeLiveStreamPublishedListRequest.h>
#include <tencentcloud/live/v20180801/model/DescribeLiveStreamPublishedListResponse.h>
#include <tencentcloud/live/v20180801/model/DescribeLiveStreamPushInfoListRequest.h>
#include <tencentcloud/live/v20180801/model/DescribeLiveStreamPushInfoListResponse.h>
#include <tencentcloud/live/v20180801/model/DescribeLiveStreamStateRequest.h>
#include <tencentcloud/live/v20180801/model/DescribeLiveStreamStateResponse.h>
#include <tencentcloud/live/v20180801/model/DescribeLiveTimeShiftBillInfoListRequest.h>
#include <tencentcloud/live/v20180801/model/DescribeLiveTimeShiftBillInfoListResponse.h>
#include <tencentcloud/live/v20180801/model/DescribeLiveTimeShiftRulesRequest.h>
#include <tencentcloud/live/v20180801/model/DescribeLiveTimeShiftRulesResponse.h>
#include <tencentcloud/live/v20180801/model/DescribeLiveTimeShiftTemplatesRequest.h>
#include <tencentcloud/live/v20180801/model/DescribeLiveTimeShiftTemplatesResponse.h>
#include <tencentcloud/live/v20180801/model/DescribeLiveTimeShiftWriteSizeInfoListRequest.h>
#include <tencentcloud/live/v20180801/model/DescribeLiveTimeShiftWriteSizeInfoListResponse.h>
#include <tencentcloud/live/v20180801/model/DescribeLiveTranscodeDetailInfoRequest.h>
#include <tencentcloud/live/v20180801/model/DescribeLiveTranscodeDetailInfoResponse.h>
#include <tencentcloud/live/v20180801/model/DescribeLiveTranscodeRulesRequest.h>
#include <tencentcloud/live/v20180801/model/DescribeLiveTranscodeRulesResponse.h>
#include <tencentcloud/live/v20180801/model/DescribeLiveTranscodeTemplateRequest.h>
#include <tencentcloud/live/v20180801/model/DescribeLiveTranscodeTemplateResponse.h>
#include <tencentcloud/live/v20180801/model/DescribeLiveTranscodeTemplatesRequest.h>
#include <tencentcloud/live/v20180801/model/DescribeLiveTranscodeTemplatesResponse.h>
#include <tencentcloud/live/v20180801/model/DescribeLiveTranscodeTotalInfoRequest.h>
#include <tencentcloud/live/v20180801/model/DescribeLiveTranscodeTotalInfoResponse.h>
#include <tencentcloud/live/v20180801/model/DescribeLiveWatermarkRequest.h>
#include <tencentcloud/live/v20180801/model/DescribeLiveWatermarkResponse.h>
#include <tencentcloud/live/v20180801/model/DescribeLiveWatermarkRulesRequest.h>
#include <tencentcloud/live/v20180801/model/DescribeLiveWatermarkRulesResponse.h>
#include <tencentcloud/live/v20180801/model/DescribeLiveWatermarksRequest.h>
#include <tencentcloud/live/v20180801/model/DescribeLiveWatermarksResponse.h>
#include <tencentcloud/live/v20180801/model/DescribeLiveXP2PDetailInfoListRequest.h>
#include <tencentcloud/live/v20180801/model/DescribeLiveXP2PDetailInfoListResponse.h>
#include <tencentcloud/live/v20180801/model/DescribeLogDownloadListRequest.h>
#include <tencentcloud/live/v20180801/model/DescribeLogDownloadListResponse.h>
#include <tencentcloud/live/v20180801/model/DescribeMonitorReportRequest.h>
#include <tencentcloud/live/v20180801/model/DescribeMonitorReportResponse.h>
#include <tencentcloud/live/v20180801/model/DescribeOriginStreamInfoRequest.h>
#include <tencentcloud/live/v20180801/model/DescribeOriginStreamInfoResponse.h>
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
#include <tencentcloud/live/v20180801/model/DescribePullTransformPushInfoRequest.h>
#include <tencentcloud/live/v20180801/model/DescribePullTransformPushInfoResponse.h>
#include <tencentcloud/live/v20180801/model/DescribePullTransformPushInfoListRequest.h>
#include <tencentcloud/live/v20180801/model/DescribePullTransformPushInfoListResponse.h>
#include <tencentcloud/live/v20180801/model/DescribePushBandwidthAndFluxListRequest.h>
#include <tencentcloud/live/v20180801/model/DescribePushBandwidthAndFluxListResponse.h>
#include <tencentcloud/live/v20180801/model/DescribeRecordTaskRequest.h>
#include <tencentcloud/live/v20180801/model/DescribeRecordTaskResponse.h>
#include <tencentcloud/live/v20180801/model/DescribeScreenShotSheetNumListRequest.h>
#include <tencentcloud/live/v20180801/model/DescribeScreenShotSheetNumListResponse.h>
#include <tencentcloud/live/v20180801/model/DescribeScreenshotTaskRequest.h>
#include <tencentcloud/live/v20180801/model/DescribeScreenshotTaskResponse.h>
#include <tencentcloud/live/v20180801/model/DescribeStreamDayPlayInfoListRequest.h>
#include <tencentcloud/live/v20180801/model/DescribeStreamDayPlayInfoListResponse.h>
#include <tencentcloud/live/v20180801/model/DescribeStreamPlayInfoListRequest.h>
#include <tencentcloud/live/v20180801/model/DescribeStreamPlayInfoListResponse.h>
#include <tencentcloud/live/v20180801/model/DescribeStreamPushInfoListRequest.h>
#include <tencentcloud/live/v20180801/model/DescribeStreamPushInfoListResponse.h>
#include <tencentcloud/live/v20180801/model/DescribeTimeShiftRecordDetailRequest.h>
#include <tencentcloud/live/v20180801/model/DescribeTimeShiftRecordDetailResponse.h>
#include <tencentcloud/live/v20180801/model/DescribeTimeShiftStreamListRequest.h>
#include <tencentcloud/live/v20180801/model/DescribeTimeShiftStreamListResponse.h>
#include <tencentcloud/live/v20180801/model/DescribeTopClientIpSumInfoListRequest.h>
#include <tencentcloud/live/v20180801/model/DescribeTopClientIpSumInfoListResponse.h>
#include <tencentcloud/live/v20180801/model/DescribeTranscodeTaskNumRequest.h>
#include <tencentcloud/live/v20180801/model/DescribeTranscodeTaskNumResponse.h>
#include <tencentcloud/live/v20180801/model/DescribeUploadStreamNumsRequest.h>
#include <tencentcloud/live/v20180801/model/DescribeUploadStreamNumsResponse.h>
#include <tencentcloud/live/v20180801/model/DescribeVisitTopSumInfoListRequest.h>
#include <tencentcloud/live/v20180801/model/DescribeVisitTopSumInfoListResponse.h>
#include <tencentcloud/live/v20180801/model/DropLiveStreamRequest.h>
#include <tencentcloud/live/v20180801/model/DropLiveStreamResponse.h>
#include <tencentcloud/live/v20180801/model/EnableLiveDomainRequest.h>
#include <tencentcloud/live/v20180801/model/EnableLiveDomainResponse.h>
#include <tencentcloud/live/v20180801/model/EnableOptimalSwitchingRequest.h>
#include <tencentcloud/live/v20180801/model/EnableOptimalSwitchingResponse.h>
#include <tencentcloud/live/v20180801/model/ForbidLiveDomainRequest.h>
#include <tencentcloud/live/v20180801/model/ForbidLiveDomainResponse.h>
#include <tencentcloud/live/v20180801/model/ForbidLiveStreamRequest.h>
#include <tencentcloud/live/v20180801/model/ForbidLiveStreamResponse.h>
#include <tencentcloud/live/v20180801/model/GenerateLiveAvatarScriptBroadcastRequest.h>
#include <tencentcloud/live/v20180801/model/GenerateLiveAvatarScriptBroadcastResponse.h>
#include <tencentcloud/live/v20180801/model/InsertTaskTemporaryFilesRequest.h>
#include <tencentcloud/live/v20180801/model/InsertTaskTemporaryFilesResponse.h>
#include <tencentcloud/live/v20180801/model/ModifyCasterRequest.h>
#include <tencentcloud/live/v20180801/model/ModifyCasterResponse.h>
#include <tencentcloud/live/v20180801/model/ModifyCasterInputInfoRequest.h>
#include <tencentcloud/live/v20180801/model/ModifyCasterInputInfoResponse.h>
#include <tencentcloud/live/v20180801/model/ModifyCasterLayoutInfoRequest.h>
#include <tencentcloud/live/v20180801/model/ModifyCasterLayoutInfoResponse.h>
#include <tencentcloud/live/v20180801/model/ModifyCasterMarkPicInfoRequest.h>
#include <tencentcloud/live/v20180801/model/ModifyCasterMarkPicInfoResponse.h>
#include <tencentcloud/live/v20180801/model/ModifyCasterMarkWordInfoRequest.h>
#include <tencentcloud/live/v20180801/model/ModifyCasterMarkWordInfoResponse.h>
#include <tencentcloud/live/v20180801/model/ModifyCasterOutputInfoRequest.h>
#include <tencentcloud/live/v20180801/model/ModifyCasterOutputInfoResponse.h>
#include <tencentcloud/live/v20180801/model/ModifyLiveAvatarRoomRequest.h>
#include <tencentcloud/live/v20180801/model/ModifyLiveAvatarRoomResponse.h>
#include <tencentcloud/live/v20180801/model/ModifyLiveAvatarScriptRequest.h>
#include <tencentcloud/live/v20180801/model/ModifyLiveAvatarScriptResponse.h>
#include <tencentcloud/live/v20180801/model/ModifyLiveCallbackTemplateRequest.h>
#include <tencentcloud/live/v20180801/model/ModifyLiveCallbackTemplateResponse.h>
#include <tencentcloud/live/v20180801/model/ModifyLiveDomainCertBindingsRequest.h>
#include <tencentcloud/live/v20180801/model/ModifyLiveDomainCertBindingsResponse.h>
#include <tencentcloud/live/v20180801/model/ModifyLiveDomainRefererRequest.h>
#include <tencentcloud/live/v20180801/model/ModifyLiveDomainRefererResponse.h>
#include <tencentcloud/live/v20180801/model/ModifyLivePadTemplateRequest.h>
#include <tencentcloud/live/v20180801/model/ModifyLivePadTemplateResponse.h>
#include <tencentcloud/live/v20180801/model/ModifyLivePlayAuthKeyRequest.h>
#include <tencentcloud/live/v20180801/model/ModifyLivePlayAuthKeyResponse.h>
#include <tencentcloud/live/v20180801/model/ModifyLivePlayDomainRequest.h>
#include <tencentcloud/live/v20180801/model/ModifyLivePlayDomainResponse.h>
#include <tencentcloud/live/v20180801/model/ModifyLivePullStreamTaskRequest.h>
#include <tencentcloud/live/v20180801/model/ModifyLivePullStreamTaskResponse.h>
#include <tencentcloud/live/v20180801/model/ModifyLivePushAuthKeyRequest.h>
#include <tencentcloud/live/v20180801/model/ModifyLivePushAuthKeyResponse.h>
#include <tencentcloud/live/v20180801/model/ModifyLiveRecordTemplateRequest.h>
#include <tencentcloud/live/v20180801/model/ModifyLiveRecordTemplateResponse.h>
#include <tencentcloud/live/v20180801/model/ModifyLiveSnapshotTemplateRequest.h>
#include <tencentcloud/live/v20180801/model/ModifyLiveSnapshotTemplateResponse.h>
#include <tencentcloud/live/v20180801/model/ModifyLiveStreamMonitorRequest.h>
#include <tencentcloud/live/v20180801/model/ModifyLiveStreamMonitorResponse.h>
#include <tencentcloud/live/v20180801/model/ModifyLiveTimeShiftTemplateRequest.h>
#include <tencentcloud/live/v20180801/model/ModifyLiveTimeShiftTemplateResponse.h>
#include <tencentcloud/live/v20180801/model/ModifyLiveTranscodeTemplateRequest.h>
#include <tencentcloud/live/v20180801/model/ModifyLiveTranscodeTemplateResponse.h>
#include <tencentcloud/live/v20180801/model/ModifyOriginStreamInfoRequest.h>
#include <tencentcloud/live/v20180801/model/ModifyOriginStreamInfoResponse.h>
#include <tencentcloud/live/v20180801/model/ModifyPullStreamConfigRequest.h>
#include <tencentcloud/live/v20180801/model/ModifyPullStreamConfigResponse.h>
#include <tencentcloud/live/v20180801/model/ModifyPullStreamStatusRequest.h>
#include <tencentcloud/live/v20180801/model/ModifyPullStreamStatusResponse.h>
#include <tencentcloud/live/v20180801/model/ReleaseCasterRequest.h>
#include <tencentcloud/live/v20180801/model/ReleaseCasterResponse.h>
#include <tencentcloud/live/v20180801/model/RestartLivePullStreamTaskRequest.h>
#include <tencentcloud/live/v20180801/model/RestartLivePullStreamTaskResponse.h>
#include <tencentcloud/live/v20180801/model/ResumeDelayLiveStreamRequest.h>
#include <tencentcloud/live/v20180801/model/ResumeDelayLiveStreamResponse.h>
#include <tencentcloud/live/v20180801/model/ResumeLiveStreamRequest.h>
#include <tencentcloud/live/v20180801/model/ResumeLiveStreamResponse.h>
#include <tencentcloud/live/v20180801/model/SendLiveCloudEffectRequest.h>
#include <tencentcloud/live/v20180801/model/SendLiveCloudEffectResponse.h>
#include <tencentcloud/live/v20180801/model/SendTemporaryScriptToAvatarRoomRequest.h>
#include <tencentcloud/live/v20180801/model/SendTemporaryScriptToAvatarRoomResponse.h>
#include <tencentcloud/live/v20180801/model/StartLiveAvatarRoomRequest.h>
#include <tencentcloud/live/v20180801/model/StartLiveAvatarRoomResponse.h>
#include <tencentcloud/live/v20180801/model/StartLivePadStreamRequest.h>
#include <tencentcloud/live/v20180801/model/StartLivePadStreamResponse.h>
#include <tencentcloud/live/v20180801/model/StartLiveStreamMonitorRequest.h>
#include <tencentcloud/live/v20180801/model/StartLiveStreamMonitorResponse.h>
#include <tencentcloud/live/v20180801/model/StopCasterPgmRequest.h>
#include <tencentcloud/live/v20180801/model/StopCasterPgmResponse.h>
#include <tencentcloud/live/v20180801/model/StopCasterPvwRequest.h>
#include <tencentcloud/live/v20180801/model/StopCasterPvwResponse.h>
#include <tencentcloud/live/v20180801/model/StopLiveAvatarRoomRequest.h>
#include <tencentcloud/live/v20180801/model/StopLiveAvatarRoomResponse.h>
#include <tencentcloud/live/v20180801/model/StopLivePadStreamRequest.h>
#include <tencentcloud/live/v20180801/model/StopLivePadStreamResponse.h>
#include <tencentcloud/live/v20180801/model/StopLiveRecordRequest.h>
#include <tencentcloud/live/v20180801/model/StopLiveRecordResponse.h>
#include <tencentcloud/live/v20180801/model/StopLiveStreamMonitorRequest.h>
#include <tencentcloud/live/v20180801/model/StopLiveStreamMonitorResponse.h>
#include <tencentcloud/live/v20180801/model/StopRecordTaskRequest.h>
#include <tencentcloud/live/v20180801/model/StopRecordTaskResponse.h>
#include <tencentcloud/live/v20180801/model/StopScreenshotTaskRequest.h>
#include <tencentcloud/live/v20180801/model/StopScreenshotTaskResponse.h>
#include <tencentcloud/live/v20180801/model/SwitchBackupStreamRequest.h>
#include <tencentcloud/live/v20180801/model/SwitchBackupStreamResponse.h>
#include <tencentcloud/live/v20180801/model/SwitchCasterToEmergencyRequest.h>
#include <tencentcloud/live/v20180801/model/SwitchCasterToEmergencyResponse.h>
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

                typedef Outcome<Core::Error, Model::AddCasterInputInfoResponse> AddCasterInputInfoOutcome;
                typedef std::future<AddCasterInputInfoOutcome> AddCasterInputInfoOutcomeCallable;
                typedef std::function<void(const LiveClient*, const Model::AddCasterInputInfoRequest&, AddCasterInputInfoOutcome, const std::shared_ptr<const AsyncCallerContext>&)> AddCasterInputInfoAsyncHandler;
                typedef Outcome<Core::Error, Model::AddCasterLayoutInfoResponse> AddCasterLayoutInfoOutcome;
                typedef std::future<AddCasterLayoutInfoOutcome> AddCasterLayoutInfoOutcomeCallable;
                typedef std::function<void(const LiveClient*, const Model::AddCasterLayoutInfoRequest&, AddCasterLayoutInfoOutcome, const std::shared_ptr<const AsyncCallerContext>&)> AddCasterLayoutInfoAsyncHandler;
                typedef Outcome<Core::Error, Model::AddCasterMarkPicInfoResponse> AddCasterMarkPicInfoOutcome;
                typedef std::future<AddCasterMarkPicInfoOutcome> AddCasterMarkPicInfoOutcomeCallable;
                typedef std::function<void(const LiveClient*, const Model::AddCasterMarkPicInfoRequest&, AddCasterMarkPicInfoOutcome, const std::shared_ptr<const AsyncCallerContext>&)> AddCasterMarkPicInfoAsyncHandler;
                typedef Outcome<Core::Error, Model::AddCasterMarkWordInfoResponse> AddCasterMarkWordInfoOutcome;
                typedef std::future<AddCasterMarkWordInfoOutcome> AddCasterMarkWordInfoOutcomeCallable;
                typedef std::function<void(const LiveClient*, const Model::AddCasterMarkWordInfoRequest&, AddCasterMarkWordInfoOutcome, const std::shared_ptr<const AsyncCallerContext>&)> AddCasterMarkWordInfoAsyncHandler;
                typedef Outcome<Core::Error, Model::AddCasterOutputInfoResponse> AddCasterOutputInfoOutcome;
                typedef std::future<AddCasterOutputInfoOutcome> AddCasterOutputInfoOutcomeCallable;
                typedef std::function<void(const LiveClient*, const Model::AddCasterOutputInfoRequest&, AddCasterOutputInfoOutcome, const std::shared_ptr<const AsyncCallerContext>&)> AddCasterOutputInfoAsyncHandler;
                typedef Outcome<Core::Error, Model::AddDelayLiveStreamResponse> AddDelayLiveStreamOutcome;
                typedef std::future<AddDelayLiveStreamOutcome> AddDelayLiveStreamOutcomeCallable;
                typedef std::function<void(const LiveClient*, const Model::AddDelayLiveStreamRequest&, AddDelayLiveStreamOutcome, const std::shared_ptr<const AsyncCallerContext>&)> AddDelayLiveStreamAsyncHandler;
                typedef Outcome<Core::Error, Model::AddLiveDomainResponse> AddLiveDomainOutcome;
                typedef std::future<AddLiveDomainOutcome> AddLiveDomainOutcomeCallable;
                typedef std::function<void(const LiveClient*, const Model::AddLiveDomainRequest&, AddLiveDomainOutcome, const std::shared_ptr<const AsyncCallerContext>&)> AddLiveDomainAsyncHandler;
                typedef Outcome<Core::Error, Model::AddLiveWatermarkResponse> AddLiveWatermarkOutcome;
                typedef std::future<AddLiveWatermarkOutcome> AddLiveWatermarkOutcomeCallable;
                typedef std::function<void(const LiveClient*, const Model::AddLiveWatermarkRequest&, AddLiveWatermarkOutcome, const std::shared_ptr<const AsyncCallerContext>&)> AddLiveWatermarkAsyncHandler;
                typedef Outcome<Core::Error, Model::AuthenticateDomainOwnerResponse> AuthenticateDomainOwnerOutcome;
                typedef std::future<AuthenticateDomainOwnerOutcome> AuthenticateDomainOwnerOutcomeCallable;
                typedef std::function<void(const LiveClient*, const Model::AuthenticateDomainOwnerRequest&, AuthenticateDomainOwnerOutcome, const std::shared_ptr<const AsyncCallerContext>&)> AuthenticateDomainOwnerAsyncHandler;
                typedef Outcome<Core::Error, Model::CancelCommonMixStreamResponse> CancelCommonMixStreamOutcome;
                typedef std::future<CancelCommonMixStreamOutcome> CancelCommonMixStreamOutcomeCallable;
                typedef std::function<void(const LiveClient*, const Model::CancelCommonMixStreamRequest&, CancelCommonMixStreamOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CancelCommonMixStreamAsyncHandler;
                typedef Outcome<Core::Error, Model::CloseSourceStreamResponse> CloseSourceStreamOutcome;
                typedef std::future<CloseSourceStreamOutcome> CloseSourceStreamOutcomeCallable;
                typedef std::function<void(const LiveClient*, const Model::CloseSourceStreamRequest&, CloseSourceStreamOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CloseSourceStreamAsyncHandler;
                typedef Outcome<Core::Error, Model::CopyCasterResponse> CopyCasterOutcome;
                typedef std::future<CopyCasterOutcome> CopyCasterOutcomeCallable;
                typedef std::function<void(const LiveClient*, const Model::CopyCasterRequest&, CopyCasterOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CopyCasterAsyncHandler;
                typedef Outcome<Core::Error, Model::CopyLiveAvatarRoomResponse> CopyLiveAvatarRoomOutcome;
                typedef std::future<CopyLiveAvatarRoomOutcome> CopyLiveAvatarRoomOutcomeCallable;
                typedef std::function<void(const LiveClient*, const Model::CopyLiveAvatarRoomRequest&, CopyLiveAvatarRoomOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CopyLiveAvatarRoomAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateAuditKeywordLibResponse> CreateAuditKeywordLibOutcome;
                typedef std::future<CreateAuditKeywordLibOutcome> CreateAuditKeywordLibOutcomeCallable;
                typedef std::function<void(const LiveClient*, const Model::CreateAuditKeywordLibRequest&, CreateAuditKeywordLibOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateAuditKeywordLibAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateAuditKeywordsResponse> CreateAuditKeywordsOutcome;
                typedef std::future<CreateAuditKeywordsOutcome> CreateAuditKeywordsOutcomeCallable;
                typedef std::function<void(const LiveClient*, const Model::CreateAuditKeywordsRequest&, CreateAuditKeywordsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateAuditKeywordsAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateCasterResponse> CreateCasterOutcome;
                typedef std::future<CreateCasterOutcome> CreateCasterOutcomeCallable;
                typedef std::function<void(const LiveClient*, const Model::CreateCasterRequest&, CreateCasterOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateCasterAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateCasterInputPushUrlResponse> CreateCasterInputPushUrlOutcome;
                typedef std::future<CreateCasterInputPushUrlOutcome> CreateCasterInputPushUrlOutcomeCallable;
                typedef std::function<void(const LiveClient*, const Model::CreateCasterInputPushUrlRequest&, CreateCasterInputPushUrlOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateCasterInputPushUrlAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateCasterPgmResponse> CreateCasterPgmOutcome;
                typedef std::future<CreateCasterPgmOutcome> CreateCasterPgmOutcomeCallable;
                typedef std::function<void(const LiveClient*, const Model::CreateCasterPgmRequest&, CreateCasterPgmOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateCasterPgmAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateCasterPgmFromPvwResponse> CreateCasterPgmFromPvwOutcome;
                typedef std::future<CreateCasterPgmFromPvwOutcome> CreateCasterPgmFromPvwOutcomeCallable;
                typedef std::function<void(const LiveClient*, const Model::CreateCasterPgmFromPvwRequest&, CreateCasterPgmFromPvwOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateCasterPgmFromPvwAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateCasterPvwResponse> CreateCasterPvwOutcome;
                typedef std::future<CreateCasterPvwOutcome> CreateCasterPvwOutcomeCallable;
                typedef std::function<void(const LiveClient*, const Model::CreateCasterPvwRequest&, CreateCasterPvwOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateCasterPvwAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateCommonMixStreamResponse> CreateCommonMixStreamOutcome;
                typedef std::future<CreateCommonMixStreamOutcome> CreateCommonMixStreamOutcomeCallable;
                typedef std::function<void(const LiveClient*, const Model::CreateCommonMixStreamRequest&, CreateCommonMixStreamOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateCommonMixStreamAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateLiveAvatarRoomResponse> CreateLiveAvatarRoomOutcome;
                typedef std::future<CreateLiveAvatarRoomOutcome> CreateLiveAvatarRoomOutcomeCallable;
                typedef std::function<void(const LiveClient*, const Model::CreateLiveAvatarRoomRequest&, CreateLiveAvatarRoomOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateLiveAvatarRoomAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateLiveAvatarScriptResponse> CreateLiveAvatarScriptOutcome;
                typedef std::future<CreateLiveAvatarScriptOutcome> CreateLiveAvatarScriptOutcomeCallable;
                typedef std::function<void(const LiveClient*, const Model::CreateLiveAvatarScriptRequest&, CreateLiveAvatarScriptOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateLiveAvatarScriptAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateLiveCallbackRuleResponse> CreateLiveCallbackRuleOutcome;
                typedef std::future<CreateLiveCallbackRuleOutcome> CreateLiveCallbackRuleOutcomeCallable;
                typedef std::function<void(const LiveClient*, const Model::CreateLiveCallbackRuleRequest&, CreateLiveCallbackRuleOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateLiveCallbackRuleAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateLiveCallbackTemplateResponse> CreateLiveCallbackTemplateOutcome;
                typedef std::future<CreateLiveCallbackTemplateOutcome> CreateLiveCallbackTemplateOutcomeCallable;
                typedef std::function<void(const LiveClient*, const Model::CreateLiveCallbackTemplateRequest&, CreateLiveCallbackTemplateOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateLiveCallbackTemplateAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateLiveCloudEffectResponse> CreateLiveCloudEffectOutcome;
                typedef std::future<CreateLiveCloudEffectOutcome> CreateLiveCloudEffectOutcomeCallable;
                typedef std::function<void(const LiveClient*, const Model::CreateLiveCloudEffectRequest&, CreateLiveCloudEffectOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateLiveCloudEffectAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateLivePadRuleResponse> CreateLivePadRuleOutcome;
                typedef std::future<CreateLivePadRuleOutcome> CreateLivePadRuleOutcomeCallable;
                typedef std::function<void(const LiveClient*, const Model::CreateLivePadRuleRequest&, CreateLivePadRuleOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateLivePadRuleAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateLivePadTemplateResponse> CreateLivePadTemplateOutcome;
                typedef std::future<CreateLivePadTemplateOutcome> CreateLivePadTemplateOutcomeCallable;
                typedef std::function<void(const LiveClient*, const Model::CreateLivePadTemplateRequest&, CreateLivePadTemplateOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateLivePadTemplateAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateLivePullStreamTaskResponse> CreateLivePullStreamTaskOutcome;
                typedef std::future<CreateLivePullStreamTaskOutcome> CreateLivePullStreamTaskOutcomeCallable;
                typedef std::function<void(const LiveClient*, const Model::CreateLivePullStreamTaskRequest&, CreateLivePullStreamTaskOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateLivePullStreamTaskAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateLiveRecordResponse> CreateLiveRecordOutcome;
                typedef std::future<CreateLiveRecordOutcome> CreateLiveRecordOutcomeCallable;
                typedef std::function<void(const LiveClient*, const Model::CreateLiveRecordRequest&, CreateLiveRecordOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateLiveRecordAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateLiveRecordRuleResponse> CreateLiveRecordRuleOutcome;
                typedef std::future<CreateLiveRecordRuleOutcome> CreateLiveRecordRuleOutcomeCallable;
                typedef std::function<void(const LiveClient*, const Model::CreateLiveRecordRuleRequest&, CreateLiveRecordRuleOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateLiveRecordRuleAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateLiveRecordTemplateResponse> CreateLiveRecordTemplateOutcome;
                typedef std::future<CreateLiveRecordTemplateOutcome> CreateLiveRecordTemplateOutcomeCallable;
                typedef std::function<void(const LiveClient*, const Model::CreateLiveRecordTemplateRequest&, CreateLiveRecordTemplateOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateLiveRecordTemplateAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateLiveSnapshotRuleResponse> CreateLiveSnapshotRuleOutcome;
                typedef std::future<CreateLiveSnapshotRuleOutcome> CreateLiveSnapshotRuleOutcomeCallable;
                typedef std::function<void(const LiveClient*, const Model::CreateLiveSnapshotRuleRequest&, CreateLiveSnapshotRuleOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateLiveSnapshotRuleAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateLiveSnapshotTemplateResponse> CreateLiveSnapshotTemplateOutcome;
                typedef std::future<CreateLiveSnapshotTemplateOutcome> CreateLiveSnapshotTemplateOutcomeCallable;
                typedef std::function<void(const LiveClient*, const Model::CreateLiveSnapshotTemplateRequest&, CreateLiveSnapshotTemplateOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateLiveSnapshotTemplateAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateLiveStreamMonitorResponse> CreateLiveStreamMonitorOutcome;
                typedef std::future<CreateLiveStreamMonitorOutcome> CreateLiveStreamMonitorOutcomeCallable;
                typedef std::function<void(const LiveClient*, const Model::CreateLiveStreamMonitorRequest&, CreateLiveStreamMonitorOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateLiveStreamMonitorAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateLiveTimeShiftRuleResponse> CreateLiveTimeShiftRuleOutcome;
                typedef std::future<CreateLiveTimeShiftRuleOutcome> CreateLiveTimeShiftRuleOutcomeCallable;
                typedef std::function<void(const LiveClient*, const Model::CreateLiveTimeShiftRuleRequest&, CreateLiveTimeShiftRuleOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateLiveTimeShiftRuleAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateLiveTimeShiftTemplateResponse> CreateLiveTimeShiftTemplateOutcome;
                typedef std::future<CreateLiveTimeShiftTemplateOutcome> CreateLiveTimeShiftTemplateOutcomeCallable;
                typedef std::function<void(const LiveClient*, const Model::CreateLiveTimeShiftTemplateRequest&, CreateLiveTimeShiftTemplateOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateLiveTimeShiftTemplateAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateLiveTranscodeRuleResponse> CreateLiveTranscodeRuleOutcome;
                typedef std::future<CreateLiveTranscodeRuleOutcome> CreateLiveTranscodeRuleOutcomeCallable;
                typedef std::function<void(const LiveClient*, const Model::CreateLiveTranscodeRuleRequest&, CreateLiveTranscodeRuleOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateLiveTranscodeRuleAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateLiveTranscodeTemplateResponse> CreateLiveTranscodeTemplateOutcome;
                typedef std::future<CreateLiveTranscodeTemplateOutcome> CreateLiveTranscodeTemplateOutcomeCallable;
                typedef std::function<void(const LiveClient*, const Model::CreateLiveTranscodeTemplateRequest&, CreateLiveTranscodeTemplateOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateLiveTranscodeTemplateAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateLiveWatermarkRuleResponse> CreateLiveWatermarkRuleOutcome;
                typedef std::future<CreateLiveWatermarkRuleOutcome> CreateLiveWatermarkRuleOutcomeCallable;
                typedef std::function<void(const LiveClient*, const Model::CreateLiveWatermarkRuleRequest&, CreateLiveWatermarkRuleOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateLiveWatermarkRuleAsyncHandler;
                typedef Outcome<Core::Error, Model::CreatePullStreamConfigResponse> CreatePullStreamConfigOutcome;
                typedef std::future<CreatePullStreamConfigOutcome> CreatePullStreamConfigOutcomeCallable;
                typedef std::function<void(const LiveClient*, const Model::CreatePullStreamConfigRequest&, CreatePullStreamConfigOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreatePullStreamConfigAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateRecordTaskResponse> CreateRecordTaskOutcome;
                typedef std::future<CreateRecordTaskOutcome> CreateRecordTaskOutcomeCallable;
                typedef std::function<void(const LiveClient*, const Model::CreateRecordTaskRequest&, CreateRecordTaskOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateRecordTaskAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateScreenshotTaskResponse> CreateScreenshotTaskOutcome;
                typedef std::future<CreateScreenshotTaskOutcome> CreateScreenshotTaskOutcomeCallable;
                typedef std::function<void(const LiveClient*, const Model::CreateScreenshotTaskRequest&, CreateScreenshotTaskOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateScreenshotTaskAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateVideoRedrawTaskResponse> CreateVideoRedrawTaskOutcome;
                typedef std::future<CreateVideoRedrawTaskOutcome> CreateVideoRedrawTaskOutcomeCallable;
                typedef std::function<void(const LiveClient*, const Model::CreateVideoRedrawTaskRequest&, CreateVideoRedrawTaskOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateVideoRedrawTaskAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteAuditKeywordsResponse> DeleteAuditKeywordsOutcome;
                typedef std::future<DeleteAuditKeywordsOutcome> DeleteAuditKeywordsOutcomeCallable;
                typedef std::function<void(const LiveClient*, const Model::DeleteAuditKeywordsRequest&, DeleteAuditKeywordsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteAuditKeywordsAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteCasterResponse> DeleteCasterOutcome;
                typedef std::future<DeleteCasterOutcome> DeleteCasterOutcomeCallable;
                typedef std::function<void(const LiveClient*, const Model::DeleteCasterRequest&, DeleteCasterOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteCasterAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteCasterInputInfoResponse> DeleteCasterInputInfoOutcome;
                typedef std::future<DeleteCasterInputInfoOutcome> DeleteCasterInputInfoOutcomeCallable;
                typedef std::function<void(const LiveClient*, const Model::DeleteCasterInputInfoRequest&, DeleteCasterInputInfoOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteCasterInputInfoAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteCasterLayoutInfoResponse> DeleteCasterLayoutInfoOutcome;
                typedef std::future<DeleteCasterLayoutInfoOutcome> DeleteCasterLayoutInfoOutcomeCallable;
                typedef std::function<void(const LiveClient*, const Model::DeleteCasterLayoutInfoRequest&, DeleteCasterLayoutInfoOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteCasterLayoutInfoAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteCasterMarkPicInfoResponse> DeleteCasterMarkPicInfoOutcome;
                typedef std::future<DeleteCasterMarkPicInfoOutcome> DeleteCasterMarkPicInfoOutcomeCallable;
                typedef std::function<void(const LiveClient*, const Model::DeleteCasterMarkPicInfoRequest&, DeleteCasterMarkPicInfoOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteCasterMarkPicInfoAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteCasterMarkWordInfoResponse> DeleteCasterMarkWordInfoOutcome;
                typedef std::future<DeleteCasterMarkWordInfoOutcome> DeleteCasterMarkWordInfoOutcomeCallable;
                typedef std::function<void(const LiveClient*, const Model::DeleteCasterMarkWordInfoRequest&, DeleteCasterMarkWordInfoOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteCasterMarkWordInfoAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteCasterOutputInfoResponse> DeleteCasterOutputInfoOutcome;
                typedef std::future<DeleteCasterOutputInfoOutcome> DeleteCasterOutputInfoOutcomeCallable;
                typedef std::function<void(const LiveClient*, const Model::DeleteCasterOutputInfoRequest&, DeleteCasterOutputInfoOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteCasterOutputInfoAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteLiveAvatarRoomResponse> DeleteLiveAvatarRoomOutcome;
                typedef std::future<DeleteLiveAvatarRoomOutcome> DeleteLiveAvatarRoomOutcomeCallable;
                typedef std::function<void(const LiveClient*, const Model::DeleteLiveAvatarRoomRequest&, DeleteLiveAvatarRoomOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteLiveAvatarRoomAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteLiveAvatarScriptResponse> DeleteLiveAvatarScriptOutcome;
                typedef std::future<DeleteLiveAvatarScriptOutcome> DeleteLiveAvatarScriptOutcomeCallable;
                typedef std::function<void(const LiveClient*, const Model::DeleteLiveAvatarScriptRequest&, DeleteLiveAvatarScriptOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteLiveAvatarScriptAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteLiveCallbackRuleResponse> DeleteLiveCallbackRuleOutcome;
                typedef std::future<DeleteLiveCallbackRuleOutcome> DeleteLiveCallbackRuleOutcomeCallable;
                typedef std::function<void(const LiveClient*, const Model::DeleteLiveCallbackRuleRequest&, DeleteLiveCallbackRuleOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteLiveCallbackRuleAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteLiveCallbackTemplateResponse> DeleteLiveCallbackTemplateOutcome;
                typedef std::future<DeleteLiveCallbackTemplateOutcome> DeleteLiveCallbackTemplateOutcomeCallable;
                typedef std::function<void(const LiveClient*, const Model::DeleteLiveCallbackTemplateRequest&, DeleteLiveCallbackTemplateOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteLiveCallbackTemplateAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteLiveDomainResponse> DeleteLiveDomainOutcome;
                typedef std::future<DeleteLiveDomainOutcome> DeleteLiveDomainOutcomeCallable;
                typedef std::function<void(const LiveClient*, const Model::DeleteLiveDomainRequest&, DeleteLiveDomainOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteLiveDomainAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteLivePadRuleResponse> DeleteLivePadRuleOutcome;
                typedef std::future<DeleteLivePadRuleOutcome> DeleteLivePadRuleOutcomeCallable;
                typedef std::function<void(const LiveClient*, const Model::DeleteLivePadRuleRequest&, DeleteLivePadRuleOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteLivePadRuleAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteLivePadTemplateResponse> DeleteLivePadTemplateOutcome;
                typedef std::future<DeleteLivePadTemplateOutcome> DeleteLivePadTemplateOutcomeCallable;
                typedef std::function<void(const LiveClient*, const Model::DeleteLivePadTemplateRequest&, DeleteLivePadTemplateOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteLivePadTemplateAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteLivePullStreamTaskResponse> DeleteLivePullStreamTaskOutcome;
                typedef std::future<DeleteLivePullStreamTaskOutcome> DeleteLivePullStreamTaskOutcomeCallable;
                typedef std::function<void(const LiveClient*, const Model::DeleteLivePullStreamTaskRequest&, DeleteLivePullStreamTaskOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteLivePullStreamTaskAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteLiveRecordResponse> DeleteLiveRecordOutcome;
                typedef std::future<DeleteLiveRecordOutcome> DeleteLiveRecordOutcomeCallable;
                typedef std::function<void(const LiveClient*, const Model::DeleteLiveRecordRequest&, DeleteLiveRecordOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteLiveRecordAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteLiveRecordRuleResponse> DeleteLiveRecordRuleOutcome;
                typedef std::future<DeleteLiveRecordRuleOutcome> DeleteLiveRecordRuleOutcomeCallable;
                typedef std::function<void(const LiveClient*, const Model::DeleteLiveRecordRuleRequest&, DeleteLiveRecordRuleOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteLiveRecordRuleAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteLiveRecordTemplateResponse> DeleteLiveRecordTemplateOutcome;
                typedef std::future<DeleteLiveRecordTemplateOutcome> DeleteLiveRecordTemplateOutcomeCallable;
                typedef std::function<void(const LiveClient*, const Model::DeleteLiveRecordTemplateRequest&, DeleteLiveRecordTemplateOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteLiveRecordTemplateAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteLiveSnapshotRuleResponse> DeleteLiveSnapshotRuleOutcome;
                typedef std::future<DeleteLiveSnapshotRuleOutcome> DeleteLiveSnapshotRuleOutcomeCallable;
                typedef std::function<void(const LiveClient*, const Model::DeleteLiveSnapshotRuleRequest&, DeleteLiveSnapshotRuleOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteLiveSnapshotRuleAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteLiveSnapshotTemplateResponse> DeleteLiveSnapshotTemplateOutcome;
                typedef std::future<DeleteLiveSnapshotTemplateOutcome> DeleteLiveSnapshotTemplateOutcomeCallable;
                typedef std::function<void(const LiveClient*, const Model::DeleteLiveSnapshotTemplateRequest&, DeleteLiveSnapshotTemplateOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteLiveSnapshotTemplateAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteLiveStreamMonitorResponse> DeleteLiveStreamMonitorOutcome;
                typedef std::future<DeleteLiveStreamMonitorOutcome> DeleteLiveStreamMonitorOutcomeCallable;
                typedef std::function<void(const LiveClient*, const Model::DeleteLiveStreamMonitorRequest&, DeleteLiveStreamMonitorOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteLiveStreamMonitorAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteLiveTimeShiftRuleResponse> DeleteLiveTimeShiftRuleOutcome;
                typedef std::future<DeleteLiveTimeShiftRuleOutcome> DeleteLiveTimeShiftRuleOutcomeCallable;
                typedef std::function<void(const LiveClient*, const Model::DeleteLiveTimeShiftRuleRequest&, DeleteLiveTimeShiftRuleOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteLiveTimeShiftRuleAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteLiveTimeShiftTemplateResponse> DeleteLiveTimeShiftTemplateOutcome;
                typedef std::future<DeleteLiveTimeShiftTemplateOutcome> DeleteLiveTimeShiftTemplateOutcomeCallable;
                typedef std::function<void(const LiveClient*, const Model::DeleteLiveTimeShiftTemplateRequest&, DeleteLiveTimeShiftTemplateOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteLiveTimeShiftTemplateAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteLiveTranscodeRuleResponse> DeleteLiveTranscodeRuleOutcome;
                typedef std::future<DeleteLiveTranscodeRuleOutcome> DeleteLiveTranscodeRuleOutcomeCallable;
                typedef std::function<void(const LiveClient*, const Model::DeleteLiveTranscodeRuleRequest&, DeleteLiveTranscodeRuleOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteLiveTranscodeRuleAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteLiveTranscodeTemplateResponse> DeleteLiveTranscodeTemplateOutcome;
                typedef std::future<DeleteLiveTranscodeTemplateOutcome> DeleteLiveTranscodeTemplateOutcomeCallable;
                typedef std::function<void(const LiveClient*, const Model::DeleteLiveTranscodeTemplateRequest&, DeleteLiveTranscodeTemplateOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteLiveTranscodeTemplateAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteLiveWatermarkResponse> DeleteLiveWatermarkOutcome;
                typedef std::future<DeleteLiveWatermarkOutcome> DeleteLiveWatermarkOutcomeCallable;
                typedef std::function<void(const LiveClient*, const Model::DeleteLiveWatermarkRequest&, DeleteLiveWatermarkOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteLiveWatermarkAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteLiveWatermarkRuleResponse> DeleteLiveWatermarkRuleOutcome;
                typedef std::future<DeleteLiveWatermarkRuleOutcome> DeleteLiveWatermarkRuleOutcomeCallable;
                typedef std::function<void(const LiveClient*, const Model::DeleteLiveWatermarkRuleRequest&, DeleteLiveWatermarkRuleOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteLiveWatermarkRuleAsyncHandler;
                typedef Outcome<Core::Error, Model::DeletePullStreamConfigResponse> DeletePullStreamConfigOutcome;
                typedef std::future<DeletePullStreamConfigOutcome> DeletePullStreamConfigOutcomeCallable;
                typedef std::function<void(const LiveClient*, const Model::DeletePullStreamConfigRequest&, DeletePullStreamConfigOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeletePullStreamConfigAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteRecordTaskResponse> DeleteRecordTaskOutcome;
                typedef std::future<DeleteRecordTaskOutcome> DeleteRecordTaskOutcomeCallable;
                typedef std::function<void(const LiveClient*, const Model::DeleteRecordTaskRequest&, DeleteRecordTaskOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteRecordTaskAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteScreenshotTaskResponse> DeleteScreenshotTaskOutcome;
                typedef std::future<DeleteScreenshotTaskOutcome> DeleteScreenshotTaskOutcomeCallable;
                typedef std::function<void(const LiveClient*, const Model::DeleteScreenshotTaskRequest&, DeleteScreenshotTaskOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteScreenshotTaskAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeAIGCTaskStatusResponse> DescribeAIGCTaskStatusOutcome;
                typedef std::future<DescribeAIGCTaskStatusOutcome> DescribeAIGCTaskStatusOutcomeCallable;
                typedef std::function<void(const LiveClient*, const Model::DescribeAIGCTaskStatusRequest&, DescribeAIGCTaskStatusOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAIGCTaskStatusAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeAllStreamPlayInfoListResponse> DescribeAllStreamPlayInfoListOutcome;
                typedef std::future<DescribeAllStreamPlayInfoListOutcome> DescribeAllStreamPlayInfoListOutcomeCallable;
                typedef std::function<void(const LiveClient*, const Model::DescribeAllStreamPlayInfoListRequest&, DescribeAllStreamPlayInfoListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAllStreamPlayInfoListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeAreaBillBandwidthAndFluxListResponse> DescribeAreaBillBandwidthAndFluxListOutcome;
                typedef std::future<DescribeAreaBillBandwidthAndFluxListOutcome> DescribeAreaBillBandwidthAndFluxListOutcomeCallable;
                typedef std::function<void(const LiveClient*, const Model::DescribeAreaBillBandwidthAndFluxListRequest&, DescribeAreaBillBandwidthAndFluxListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAreaBillBandwidthAndFluxListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeAuditKeywordsResponse> DescribeAuditKeywordsOutcome;
                typedef std::future<DescribeAuditKeywordsOutcome> DescribeAuditKeywordsOutcomeCallable;
                typedef std::function<void(const LiveClient*, const Model::DescribeAuditKeywordsRequest&, DescribeAuditKeywordsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAuditKeywordsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeBackupStreamListResponse> DescribeBackupStreamListOutcome;
                typedef std::future<DescribeBackupStreamListOutcome> DescribeBackupStreamListOutcomeCallable;
                typedef std::function<void(const LiveClient*, const Model::DescribeBackupStreamListRequest&, DescribeBackupStreamListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeBackupStreamListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeBillBandwidthAndFluxListResponse> DescribeBillBandwidthAndFluxListOutcome;
                typedef std::future<DescribeBillBandwidthAndFluxListOutcome> DescribeBillBandwidthAndFluxListOutcomeCallable;
                typedef std::function<void(const LiveClient*, const Model::DescribeBillBandwidthAndFluxListRequest&, DescribeBillBandwidthAndFluxListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeBillBandwidthAndFluxListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeCallbackRecordsListResponse> DescribeCallbackRecordsListOutcome;
                typedef std::future<DescribeCallbackRecordsListOutcome> DescribeCallbackRecordsListOutcomeCallable;
                typedef std::function<void(const LiveClient*, const Model::DescribeCallbackRecordsListRequest&, DescribeCallbackRecordsListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeCallbackRecordsListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeCasterResponse> DescribeCasterOutcome;
                typedef std::future<DescribeCasterOutcome> DescribeCasterOutcomeCallable;
                typedef std::function<void(const LiveClient*, const Model::DescribeCasterRequest&, DescribeCasterOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeCasterAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeCasterDisplayInfoResponse> DescribeCasterDisplayInfoOutcome;
                typedef std::future<DescribeCasterDisplayInfoOutcome> DescribeCasterDisplayInfoOutcomeCallable;
                typedef std::function<void(const LiveClient*, const Model::DescribeCasterDisplayInfoRequest&, DescribeCasterDisplayInfoOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeCasterDisplayInfoAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeCasterEmergencyStatusResponse> DescribeCasterEmergencyStatusOutcome;
                typedef std::future<DescribeCasterEmergencyStatusOutcome> DescribeCasterEmergencyStatusOutcomeCallable;
                typedef std::function<void(const LiveClient*, const Model::DescribeCasterEmergencyStatusRequest&, DescribeCasterEmergencyStatusOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeCasterEmergencyStatusAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeCasterInputInfosResponse> DescribeCasterInputInfosOutcome;
                typedef std::future<DescribeCasterInputInfosOutcome> DescribeCasterInputInfosOutcomeCallable;
                typedef std::function<void(const LiveClient*, const Model::DescribeCasterInputInfosRequest&, DescribeCasterInputInfosOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeCasterInputInfosAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeCasterLayoutInfosResponse> DescribeCasterLayoutInfosOutcome;
                typedef std::future<DescribeCasterLayoutInfosOutcome> DescribeCasterLayoutInfosOutcomeCallable;
                typedef std::function<void(const LiveClient*, const Model::DescribeCasterLayoutInfosRequest&, DescribeCasterLayoutInfosOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeCasterLayoutInfosAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeCasterListResponse> DescribeCasterListOutcome;
                typedef std::future<DescribeCasterListOutcome> DescribeCasterListOutcomeCallable;
                typedef std::function<void(const LiveClient*, const Model::DescribeCasterListRequest&, DescribeCasterListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeCasterListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeCasterMarkPicInfosResponse> DescribeCasterMarkPicInfosOutcome;
                typedef std::future<DescribeCasterMarkPicInfosOutcome> DescribeCasterMarkPicInfosOutcomeCallable;
                typedef std::function<void(const LiveClient*, const Model::DescribeCasterMarkPicInfosRequest&, DescribeCasterMarkPicInfosOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeCasterMarkPicInfosAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeCasterMarkWordInfosResponse> DescribeCasterMarkWordInfosOutcome;
                typedef std::future<DescribeCasterMarkWordInfosOutcome> DescribeCasterMarkWordInfosOutcomeCallable;
                typedef std::function<void(const LiveClient*, const Model::DescribeCasterMarkWordInfosRequest&, DescribeCasterMarkWordInfosOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeCasterMarkWordInfosAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeCasterOutputInfosResponse> DescribeCasterOutputInfosOutcome;
                typedef std::future<DescribeCasterOutputInfosOutcome> DescribeCasterOutputInfosOutcomeCallable;
                typedef std::function<void(const LiveClient*, const Model::DescribeCasterOutputInfosRequest&, DescribeCasterOutputInfosOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeCasterOutputInfosAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeCasterPlayUrlResponse> DescribeCasterPlayUrlOutcome;
                typedef std::future<DescribeCasterPlayUrlOutcome> DescribeCasterPlayUrlOutcomeCallable;
                typedef std::function<void(const LiveClient*, const Model::DescribeCasterPlayUrlRequest&, DescribeCasterPlayUrlOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeCasterPlayUrlAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeCasterTransitionTypesResponse> DescribeCasterTransitionTypesOutcome;
                typedef std::future<DescribeCasterTransitionTypesOutcome> DescribeCasterTransitionTypesOutcomeCallable;
                typedef std::function<void(const LiveClient*, const Model::DescribeCasterTransitionTypesRequest&, DescribeCasterTransitionTypesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeCasterTransitionTypesAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeCasterUserStatusResponse> DescribeCasterUserStatusOutcome;
                typedef std::future<DescribeCasterUserStatusOutcome> DescribeCasterUserStatusOutcomeCallable;
                typedef std::function<void(const LiveClient*, const Model::DescribeCasterUserStatusRequest&, DescribeCasterUserStatusOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeCasterUserStatusAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeConcurrentRecordStreamNumResponse> DescribeConcurrentRecordStreamNumOutcome;
                typedef std::future<DescribeConcurrentRecordStreamNumOutcome> DescribeConcurrentRecordStreamNumOutcomeCallable;
                typedef std::function<void(const LiveClient*, const Model::DescribeConcurrentRecordStreamNumRequest&, DescribeConcurrentRecordStreamNumOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeConcurrentRecordStreamNumAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeDeliverBandwidthListResponse> DescribeDeliverBandwidthListOutcome;
                typedef std::future<DescribeDeliverBandwidthListOutcome> DescribeDeliverBandwidthListOutcomeCallable;
                typedef std::function<void(const LiveClient*, const Model::DescribeDeliverBandwidthListRequest&, DescribeDeliverBandwidthListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDeliverBandwidthListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeDeliverLogDownListResponse> DescribeDeliverLogDownListOutcome;
                typedef std::future<DescribeDeliverLogDownListOutcome> DescribeDeliverLogDownListOutcomeCallable;
                typedef std::function<void(const LiveClient*, const Model::DescribeDeliverLogDownListRequest&, DescribeDeliverLogDownListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDeliverLogDownListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeGroupProIspPlayInfoListResponse> DescribeGroupProIspPlayInfoListOutcome;
                typedef std::future<DescribeGroupProIspPlayInfoListOutcome> DescribeGroupProIspPlayInfoListOutcomeCallable;
                typedef std::function<void(const LiveClient*, const Model::DescribeGroupProIspPlayInfoListRequest&, DescribeGroupProIspPlayInfoListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeGroupProIspPlayInfoListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeHttpStatusInfoListResponse> DescribeHttpStatusInfoListOutcome;
                typedef std::future<DescribeHttpStatusInfoListOutcome> DescribeHttpStatusInfoListOutcomeCallable;
                typedef std::function<void(const LiveClient*, const Model::DescribeHttpStatusInfoListRequest&, DescribeHttpStatusInfoListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeHttpStatusInfoListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeLiveAvatarBackgroundListResponse> DescribeLiveAvatarBackgroundListOutcome;
                typedef std::future<DescribeLiveAvatarBackgroundListOutcome> DescribeLiveAvatarBackgroundListOutcomeCallable;
                typedef std::function<void(const LiveClient*, const Model::DescribeLiveAvatarBackgroundListRequest&, DescribeLiveAvatarBackgroundListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeLiveAvatarBackgroundListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeLiveAvatarImageListResponse> DescribeLiveAvatarImageListOutcome;
                typedef std::future<DescribeLiveAvatarImageListOutcome> DescribeLiveAvatarImageListOutcomeCallable;
                typedef std::function<void(const LiveClient*, const Model::DescribeLiveAvatarImageListRequest&, DescribeLiveAvatarImageListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeLiveAvatarImageListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeLiveAvatarRoomsResponse> DescribeLiveAvatarRoomsOutcome;
                typedef std::future<DescribeLiveAvatarRoomsOutcome> DescribeLiveAvatarRoomsOutcomeCallable;
                typedef std::function<void(const LiveClient*, const Model::DescribeLiveAvatarRoomsRequest&, DescribeLiveAvatarRoomsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeLiveAvatarRoomsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeLiveAvatarScriptsResponse> DescribeLiveAvatarScriptsOutcome;
                typedef std::future<DescribeLiveAvatarScriptsOutcome> DescribeLiveAvatarScriptsOutcomeCallable;
                typedef std::function<void(const LiveClient*, const Model::DescribeLiveAvatarScriptsRequest&, DescribeLiveAvatarScriptsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeLiveAvatarScriptsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeLiveAvatarTemporaryScriptListResponse> DescribeLiveAvatarTemporaryScriptListOutcome;
                typedef std::future<DescribeLiveAvatarTemporaryScriptListOutcome> DescribeLiveAvatarTemporaryScriptListOutcomeCallable;
                typedef std::function<void(const LiveClient*, const Model::DescribeLiveAvatarTemporaryScriptListRequest&, DescribeLiveAvatarTemporaryScriptListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeLiveAvatarTemporaryScriptListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeLiveAvatarTimbreListResponse> DescribeLiveAvatarTimbreListOutcome;
                typedef std::future<DescribeLiveAvatarTimbreListOutcome> DescribeLiveAvatarTimbreListOutcomeCallable;
                typedef std::function<void(const LiveClient*, const Model::DescribeLiveAvatarTimbreListRequest&, DescribeLiveAvatarTimbreListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeLiveAvatarTimbreListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeLiveCallbackRulesResponse> DescribeLiveCallbackRulesOutcome;
                typedef std::future<DescribeLiveCallbackRulesOutcome> DescribeLiveCallbackRulesOutcomeCallable;
                typedef std::function<void(const LiveClient*, const Model::DescribeLiveCallbackRulesRequest&, DescribeLiveCallbackRulesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeLiveCallbackRulesAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeLiveCallbackTemplateResponse> DescribeLiveCallbackTemplateOutcome;
                typedef std::future<DescribeLiveCallbackTemplateOutcome> DescribeLiveCallbackTemplateOutcomeCallable;
                typedef std::function<void(const LiveClient*, const Model::DescribeLiveCallbackTemplateRequest&, DescribeLiveCallbackTemplateOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeLiveCallbackTemplateAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeLiveCallbackTemplatesResponse> DescribeLiveCallbackTemplatesOutcome;
                typedef std::future<DescribeLiveCallbackTemplatesOutcome> DescribeLiveCallbackTemplatesOutcomeCallable;
                typedef std::function<void(const LiveClient*, const Model::DescribeLiveCallbackTemplatesRequest&, DescribeLiveCallbackTemplatesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeLiveCallbackTemplatesAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeLiveCertResponse> DescribeLiveCertOutcome;
                typedef std::future<DescribeLiveCertOutcome> DescribeLiveCertOutcomeCallable;
                typedef std::function<void(const LiveClient*, const Model::DescribeLiveCertRequest&, DescribeLiveCertOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeLiveCertAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeLiveCertsResponse> DescribeLiveCertsOutcome;
                typedef std::future<DescribeLiveCertsOutcome> DescribeLiveCertsOutcomeCallable;
                typedef std::function<void(const LiveClient*, const Model::DescribeLiveCertsRequest&, DescribeLiveCertsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeLiveCertsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeLiveCloudEffectConfigResponse> DescribeLiveCloudEffectConfigOutcome;
                typedef std::future<DescribeLiveCloudEffectConfigOutcome> DescribeLiveCloudEffectConfigOutcomeCallable;
                typedef std::function<void(const LiveClient*, const Model::DescribeLiveCloudEffectConfigRequest&, DescribeLiveCloudEffectConfigOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeLiveCloudEffectConfigAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeLiveCloudEffectListResponse> DescribeLiveCloudEffectListOutcome;
                typedef std::future<DescribeLiveCloudEffectListOutcome> DescribeLiveCloudEffectListOutcomeCallable;
                typedef std::function<void(const LiveClient*, const Model::DescribeLiveCloudEffectListRequest&, DescribeLiveCloudEffectListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeLiveCloudEffectListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeLiveDelayInfoListResponse> DescribeLiveDelayInfoListOutcome;
                typedef std::future<DescribeLiveDelayInfoListOutcome> DescribeLiveDelayInfoListOutcomeCallable;
                typedef std::function<void(const LiveClient*, const Model::DescribeLiveDelayInfoListRequest&, DescribeLiveDelayInfoListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeLiveDelayInfoListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeLiveDomainResponse> DescribeLiveDomainOutcome;
                typedef std::future<DescribeLiveDomainOutcome> DescribeLiveDomainOutcomeCallable;
                typedef std::function<void(const LiveClient*, const Model::DescribeLiveDomainRequest&, DescribeLiveDomainOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeLiveDomainAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeLiveDomainCertResponse> DescribeLiveDomainCertOutcome;
                typedef std::future<DescribeLiveDomainCertOutcome> DescribeLiveDomainCertOutcomeCallable;
                typedef std::function<void(const LiveClient*, const Model::DescribeLiveDomainCertRequest&, DescribeLiveDomainCertOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeLiveDomainCertAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeLiveDomainCertBindingsResponse> DescribeLiveDomainCertBindingsOutcome;
                typedef std::future<DescribeLiveDomainCertBindingsOutcome> DescribeLiveDomainCertBindingsOutcomeCallable;
                typedef std::function<void(const LiveClient*, const Model::DescribeLiveDomainCertBindingsRequest&, DescribeLiveDomainCertBindingsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeLiveDomainCertBindingsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeLiveDomainPlayInfoListResponse> DescribeLiveDomainPlayInfoListOutcome;
                typedef std::future<DescribeLiveDomainPlayInfoListOutcome> DescribeLiveDomainPlayInfoListOutcomeCallable;
                typedef std::function<void(const LiveClient*, const Model::DescribeLiveDomainPlayInfoListRequest&, DescribeLiveDomainPlayInfoListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeLiveDomainPlayInfoListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeLiveDomainRefererResponse> DescribeLiveDomainRefererOutcome;
                typedef std::future<DescribeLiveDomainRefererOutcome> DescribeLiveDomainRefererOutcomeCallable;
                typedef std::function<void(const LiveClient*, const Model::DescribeLiveDomainRefererRequest&, DescribeLiveDomainRefererOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeLiveDomainRefererAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeLiveDomainsResponse> DescribeLiveDomainsOutcome;
                typedef std::future<DescribeLiveDomainsOutcome> DescribeLiveDomainsOutcomeCallable;
                typedef std::function<void(const LiveClient*, const Model::DescribeLiveDomainsRequest&, DescribeLiveDomainsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeLiveDomainsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeLiveEnhanceInfoListResponse> DescribeLiveEnhanceInfoListOutcome;
                typedef std::future<DescribeLiveEnhanceInfoListOutcome> DescribeLiveEnhanceInfoListOutcomeCallable;
                typedef std::function<void(const LiveClient*, const Model::DescribeLiveEnhanceInfoListRequest&, DescribeLiveEnhanceInfoListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeLiveEnhanceInfoListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeLivePackageInfoResponse> DescribeLivePackageInfoOutcome;
                typedef std::future<DescribeLivePackageInfoOutcome> DescribeLivePackageInfoOutcomeCallable;
                typedef std::function<void(const LiveClient*, const Model::DescribeLivePackageInfoRequest&, DescribeLivePackageInfoOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeLivePackageInfoAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeLivePadRulesResponse> DescribeLivePadRulesOutcome;
                typedef std::future<DescribeLivePadRulesOutcome> DescribeLivePadRulesOutcomeCallable;
                typedef std::function<void(const LiveClient*, const Model::DescribeLivePadRulesRequest&, DescribeLivePadRulesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeLivePadRulesAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeLivePadStreamListResponse> DescribeLivePadStreamListOutcome;
                typedef std::future<DescribeLivePadStreamListOutcome> DescribeLivePadStreamListOutcomeCallable;
                typedef std::function<void(const LiveClient*, const Model::DescribeLivePadStreamListRequest&, DescribeLivePadStreamListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeLivePadStreamListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeLivePadTemplateResponse> DescribeLivePadTemplateOutcome;
                typedef std::future<DescribeLivePadTemplateOutcome> DescribeLivePadTemplateOutcomeCallable;
                typedef std::function<void(const LiveClient*, const Model::DescribeLivePadTemplateRequest&, DescribeLivePadTemplateOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeLivePadTemplateAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeLivePadTemplatesResponse> DescribeLivePadTemplatesOutcome;
                typedef std::future<DescribeLivePadTemplatesOutcome> DescribeLivePadTemplatesOutcomeCallable;
                typedef std::function<void(const LiveClient*, const Model::DescribeLivePadTemplatesRequest&, DescribeLivePadTemplatesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeLivePadTemplatesAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeLivePlayAuthKeyResponse> DescribeLivePlayAuthKeyOutcome;
                typedef std::future<DescribeLivePlayAuthKeyOutcome> DescribeLivePlayAuthKeyOutcomeCallable;
                typedef std::function<void(const LiveClient*, const Model::DescribeLivePlayAuthKeyRequest&, DescribeLivePlayAuthKeyOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeLivePlayAuthKeyAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeLivePullStreamTaskStatusResponse> DescribeLivePullStreamTaskStatusOutcome;
                typedef std::future<DescribeLivePullStreamTaskStatusOutcome> DescribeLivePullStreamTaskStatusOutcomeCallable;
                typedef std::function<void(const LiveClient*, const Model::DescribeLivePullStreamTaskStatusRequest&, DescribeLivePullStreamTaskStatusOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeLivePullStreamTaskStatusAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeLivePullStreamTasksResponse> DescribeLivePullStreamTasksOutcome;
                typedef std::future<DescribeLivePullStreamTasksOutcome> DescribeLivePullStreamTasksOutcomeCallable;
                typedef std::function<void(const LiveClient*, const Model::DescribeLivePullStreamTasksRequest&, DescribeLivePullStreamTasksOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeLivePullStreamTasksAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeLivePushAuthKeyResponse> DescribeLivePushAuthKeyOutcome;
                typedef std::future<DescribeLivePushAuthKeyOutcome> DescribeLivePushAuthKeyOutcomeCallable;
                typedef std::function<void(const LiveClient*, const Model::DescribeLivePushAuthKeyRequest&, DescribeLivePushAuthKeyOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeLivePushAuthKeyAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeLiveRecordRulesResponse> DescribeLiveRecordRulesOutcome;
                typedef std::future<DescribeLiveRecordRulesOutcome> DescribeLiveRecordRulesOutcomeCallable;
                typedef std::function<void(const LiveClient*, const Model::DescribeLiveRecordRulesRequest&, DescribeLiveRecordRulesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeLiveRecordRulesAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeLiveRecordTemplateResponse> DescribeLiveRecordTemplateOutcome;
                typedef std::future<DescribeLiveRecordTemplateOutcome> DescribeLiveRecordTemplateOutcomeCallable;
                typedef std::function<void(const LiveClient*, const Model::DescribeLiveRecordTemplateRequest&, DescribeLiveRecordTemplateOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeLiveRecordTemplateAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeLiveRecordTemplatesResponse> DescribeLiveRecordTemplatesOutcome;
                typedef std::future<DescribeLiveRecordTemplatesOutcome> DescribeLiveRecordTemplatesOutcomeCallable;
                typedef std::function<void(const LiveClient*, const Model::DescribeLiveRecordTemplatesRequest&, DescribeLiveRecordTemplatesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeLiveRecordTemplatesAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeLiveSnapshotRulesResponse> DescribeLiveSnapshotRulesOutcome;
                typedef std::future<DescribeLiveSnapshotRulesOutcome> DescribeLiveSnapshotRulesOutcomeCallable;
                typedef std::function<void(const LiveClient*, const Model::DescribeLiveSnapshotRulesRequest&, DescribeLiveSnapshotRulesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeLiveSnapshotRulesAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeLiveSnapshotTemplateResponse> DescribeLiveSnapshotTemplateOutcome;
                typedef std::future<DescribeLiveSnapshotTemplateOutcome> DescribeLiveSnapshotTemplateOutcomeCallable;
                typedef std::function<void(const LiveClient*, const Model::DescribeLiveSnapshotTemplateRequest&, DescribeLiveSnapshotTemplateOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeLiveSnapshotTemplateAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeLiveSnapshotTemplatesResponse> DescribeLiveSnapshotTemplatesOutcome;
                typedef std::future<DescribeLiveSnapshotTemplatesOutcome> DescribeLiveSnapshotTemplatesOutcomeCallable;
                typedef std::function<void(const LiveClient*, const Model::DescribeLiveSnapshotTemplatesRequest&, DescribeLiveSnapshotTemplatesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeLiveSnapshotTemplatesAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeLiveStreamEventListResponse> DescribeLiveStreamEventListOutcome;
                typedef std::future<DescribeLiveStreamEventListOutcome> DescribeLiveStreamEventListOutcomeCallable;
                typedef std::function<void(const LiveClient*, const Model::DescribeLiveStreamEventListRequest&, DescribeLiveStreamEventListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeLiveStreamEventListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeLiveStreamMonitorResponse> DescribeLiveStreamMonitorOutcome;
                typedef std::future<DescribeLiveStreamMonitorOutcome> DescribeLiveStreamMonitorOutcomeCallable;
                typedef std::function<void(const LiveClient*, const Model::DescribeLiveStreamMonitorRequest&, DescribeLiveStreamMonitorOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeLiveStreamMonitorAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeLiveStreamMonitorListResponse> DescribeLiveStreamMonitorListOutcome;
                typedef std::future<DescribeLiveStreamMonitorListOutcome> DescribeLiveStreamMonitorListOutcomeCallable;
                typedef std::function<void(const LiveClient*, const Model::DescribeLiveStreamMonitorListRequest&, DescribeLiveStreamMonitorListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeLiveStreamMonitorListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeLiveStreamOnlineListResponse> DescribeLiveStreamOnlineListOutcome;
                typedef std::future<DescribeLiveStreamOnlineListOutcome> DescribeLiveStreamOnlineListOutcomeCallable;
                typedef std::function<void(const LiveClient*, const Model::DescribeLiveStreamOnlineListRequest&, DescribeLiveStreamOnlineListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeLiveStreamOnlineListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeLiveStreamPublishedListResponse> DescribeLiveStreamPublishedListOutcome;
                typedef std::future<DescribeLiveStreamPublishedListOutcome> DescribeLiveStreamPublishedListOutcomeCallable;
                typedef std::function<void(const LiveClient*, const Model::DescribeLiveStreamPublishedListRequest&, DescribeLiveStreamPublishedListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeLiveStreamPublishedListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeLiveStreamPushInfoListResponse> DescribeLiveStreamPushInfoListOutcome;
                typedef std::future<DescribeLiveStreamPushInfoListOutcome> DescribeLiveStreamPushInfoListOutcomeCallable;
                typedef std::function<void(const LiveClient*, const Model::DescribeLiveStreamPushInfoListRequest&, DescribeLiveStreamPushInfoListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeLiveStreamPushInfoListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeLiveStreamStateResponse> DescribeLiveStreamStateOutcome;
                typedef std::future<DescribeLiveStreamStateOutcome> DescribeLiveStreamStateOutcomeCallable;
                typedef std::function<void(const LiveClient*, const Model::DescribeLiveStreamStateRequest&, DescribeLiveStreamStateOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeLiveStreamStateAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeLiveTimeShiftBillInfoListResponse> DescribeLiveTimeShiftBillInfoListOutcome;
                typedef std::future<DescribeLiveTimeShiftBillInfoListOutcome> DescribeLiveTimeShiftBillInfoListOutcomeCallable;
                typedef std::function<void(const LiveClient*, const Model::DescribeLiveTimeShiftBillInfoListRequest&, DescribeLiveTimeShiftBillInfoListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeLiveTimeShiftBillInfoListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeLiveTimeShiftRulesResponse> DescribeLiveTimeShiftRulesOutcome;
                typedef std::future<DescribeLiveTimeShiftRulesOutcome> DescribeLiveTimeShiftRulesOutcomeCallable;
                typedef std::function<void(const LiveClient*, const Model::DescribeLiveTimeShiftRulesRequest&, DescribeLiveTimeShiftRulesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeLiveTimeShiftRulesAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeLiveTimeShiftTemplatesResponse> DescribeLiveTimeShiftTemplatesOutcome;
                typedef std::future<DescribeLiveTimeShiftTemplatesOutcome> DescribeLiveTimeShiftTemplatesOutcomeCallable;
                typedef std::function<void(const LiveClient*, const Model::DescribeLiveTimeShiftTemplatesRequest&, DescribeLiveTimeShiftTemplatesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeLiveTimeShiftTemplatesAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeLiveTimeShiftWriteSizeInfoListResponse> DescribeLiveTimeShiftWriteSizeInfoListOutcome;
                typedef std::future<DescribeLiveTimeShiftWriteSizeInfoListOutcome> DescribeLiveTimeShiftWriteSizeInfoListOutcomeCallable;
                typedef std::function<void(const LiveClient*, const Model::DescribeLiveTimeShiftWriteSizeInfoListRequest&, DescribeLiveTimeShiftWriteSizeInfoListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeLiveTimeShiftWriteSizeInfoListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeLiveTranscodeDetailInfoResponse> DescribeLiveTranscodeDetailInfoOutcome;
                typedef std::future<DescribeLiveTranscodeDetailInfoOutcome> DescribeLiveTranscodeDetailInfoOutcomeCallable;
                typedef std::function<void(const LiveClient*, const Model::DescribeLiveTranscodeDetailInfoRequest&, DescribeLiveTranscodeDetailInfoOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeLiveTranscodeDetailInfoAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeLiveTranscodeRulesResponse> DescribeLiveTranscodeRulesOutcome;
                typedef std::future<DescribeLiveTranscodeRulesOutcome> DescribeLiveTranscodeRulesOutcomeCallable;
                typedef std::function<void(const LiveClient*, const Model::DescribeLiveTranscodeRulesRequest&, DescribeLiveTranscodeRulesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeLiveTranscodeRulesAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeLiveTranscodeTemplateResponse> DescribeLiveTranscodeTemplateOutcome;
                typedef std::future<DescribeLiveTranscodeTemplateOutcome> DescribeLiveTranscodeTemplateOutcomeCallable;
                typedef std::function<void(const LiveClient*, const Model::DescribeLiveTranscodeTemplateRequest&, DescribeLiveTranscodeTemplateOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeLiveTranscodeTemplateAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeLiveTranscodeTemplatesResponse> DescribeLiveTranscodeTemplatesOutcome;
                typedef std::future<DescribeLiveTranscodeTemplatesOutcome> DescribeLiveTranscodeTemplatesOutcomeCallable;
                typedef std::function<void(const LiveClient*, const Model::DescribeLiveTranscodeTemplatesRequest&, DescribeLiveTranscodeTemplatesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeLiveTranscodeTemplatesAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeLiveTranscodeTotalInfoResponse> DescribeLiveTranscodeTotalInfoOutcome;
                typedef std::future<DescribeLiveTranscodeTotalInfoOutcome> DescribeLiveTranscodeTotalInfoOutcomeCallable;
                typedef std::function<void(const LiveClient*, const Model::DescribeLiveTranscodeTotalInfoRequest&, DescribeLiveTranscodeTotalInfoOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeLiveTranscodeTotalInfoAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeLiveWatermarkResponse> DescribeLiveWatermarkOutcome;
                typedef std::future<DescribeLiveWatermarkOutcome> DescribeLiveWatermarkOutcomeCallable;
                typedef std::function<void(const LiveClient*, const Model::DescribeLiveWatermarkRequest&, DescribeLiveWatermarkOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeLiveWatermarkAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeLiveWatermarkRulesResponse> DescribeLiveWatermarkRulesOutcome;
                typedef std::future<DescribeLiveWatermarkRulesOutcome> DescribeLiveWatermarkRulesOutcomeCallable;
                typedef std::function<void(const LiveClient*, const Model::DescribeLiveWatermarkRulesRequest&, DescribeLiveWatermarkRulesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeLiveWatermarkRulesAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeLiveWatermarksResponse> DescribeLiveWatermarksOutcome;
                typedef std::future<DescribeLiveWatermarksOutcome> DescribeLiveWatermarksOutcomeCallable;
                typedef std::function<void(const LiveClient*, const Model::DescribeLiveWatermarksRequest&, DescribeLiveWatermarksOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeLiveWatermarksAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeLiveXP2PDetailInfoListResponse> DescribeLiveXP2PDetailInfoListOutcome;
                typedef std::future<DescribeLiveXP2PDetailInfoListOutcome> DescribeLiveXP2PDetailInfoListOutcomeCallable;
                typedef std::function<void(const LiveClient*, const Model::DescribeLiveXP2PDetailInfoListRequest&, DescribeLiveXP2PDetailInfoListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeLiveXP2PDetailInfoListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeLogDownloadListResponse> DescribeLogDownloadListOutcome;
                typedef std::future<DescribeLogDownloadListOutcome> DescribeLogDownloadListOutcomeCallable;
                typedef std::function<void(const LiveClient*, const Model::DescribeLogDownloadListRequest&, DescribeLogDownloadListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeLogDownloadListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeMonitorReportResponse> DescribeMonitorReportOutcome;
                typedef std::future<DescribeMonitorReportOutcome> DescribeMonitorReportOutcomeCallable;
                typedef std::function<void(const LiveClient*, const Model::DescribeMonitorReportRequest&, DescribeMonitorReportOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeMonitorReportAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeOriginStreamInfoResponse> DescribeOriginStreamInfoOutcome;
                typedef std::future<DescribeOriginStreamInfoOutcome> DescribeOriginStreamInfoOutcomeCallable;
                typedef std::function<void(const LiveClient*, const Model::DescribeOriginStreamInfoRequest&, DescribeOriginStreamInfoOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeOriginStreamInfoAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribePlayErrorCodeDetailInfoListResponse> DescribePlayErrorCodeDetailInfoListOutcome;
                typedef std::future<DescribePlayErrorCodeDetailInfoListOutcome> DescribePlayErrorCodeDetailInfoListOutcomeCallable;
                typedef std::function<void(const LiveClient*, const Model::DescribePlayErrorCodeDetailInfoListRequest&, DescribePlayErrorCodeDetailInfoListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribePlayErrorCodeDetailInfoListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribePlayErrorCodeSumInfoListResponse> DescribePlayErrorCodeSumInfoListOutcome;
                typedef std::future<DescribePlayErrorCodeSumInfoListOutcome> DescribePlayErrorCodeSumInfoListOutcomeCallable;
                typedef std::function<void(const LiveClient*, const Model::DescribePlayErrorCodeSumInfoListRequest&, DescribePlayErrorCodeSumInfoListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribePlayErrorCodeSumInfoListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeProIspPlaySumInfoListResponse> DescribeProIspPlaySumInfoListOutcome;
                typedef std::future<DescribeProIspPlaySumInfoListOutcome> DescribeProIspPlaySumInfoListOutcomeCallable;
                typedef std::function<void(const LiveClient*, const Model::DescribeProIspPlaySumInfoListRequest&, DescribeProIspPlaySumInfoListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeProIspPlaySumInfoListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeProvinceIspPlayInfoListResponse> DescribeProvinceIspPlayInfoListOutcome;
                typedef std::future<DescribeProvinceIspPlayInfoListOutcome> DescribeProvinceIspPlayInfoListOutcomeCallable;
                typedef std::function<void(const LiveClient*, const Model::DescribeProvinceIspPlayInfoListRequest&, DescribeProvinceIspPlayInfoListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeProvinceIspPlayInfoListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribePullStreamConfigsResponse> DescribePullStreamConfigsOutcome;
                typedef std::future<DescribePullStreamConfigsOutcome> DescribePullStreamConfigsOutcomeCallable;
                typedef std::function<void(const LiveClient*, const Model::DescribePullStreamConfigsRequest&, DescribePullStreamConfigsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribePullStreamConfigsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribePullTransformPushInfoResponse> DescribePullTransformPushInfoOutcome;
                typedef std::future<DescribePullTransformPushInfoOutcome> DescribePullTransformPushInfoOutcomeCallable;
                typedef std::function<void(const LiveClient*, const Model::DescribePullTransformPushInfoRequest&, DescribePullTransformPushInfoOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribePullTransformPushInfoAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribePullTransformPushInfoListResponse> DescribePullTransformPushInfoListOutcome;
                typedef std::future<DescribePullTransformPushInfoListOutcome> DescribePullTransformPushInfoListOutcomeCallable;
                typedef std::function<void(const LiveClient*, const Model::DescribePullTransformPushInfoListRequest&, DescribePullTransformPushInfoListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribePullTransformPushInfoListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribePushBandwidthAndFluxListResponse> DescribePushBandwidthAndFluxListOutcome;
                typedef std::future<DescribePushBandwidthAndFluxListOutcome> DescribePushBandwidthAndFluxListOutcomeCallable;
                typedef std::function<void(const LiveClient*, const Model::DescribePushBandwidthAndFluxListRequest&, DescribePushBandwidthAndFluxListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribePushBandwidthAndFluxListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeRecordTaskResponse> DescribeRecordTaskOutcome;
                typedef std::future<DescribeRecordTaskOutcome> DescribeRecordTaskOutcomeCallable;
                typedef std::function<void(const LiveClient*, const Model::DescribeRecordTaskRequest&, DescribeRecordTaskOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeRecordTaskAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeScreenShotSheetNumListResponse> DescribeScreenShotSheetNumListOutcome;
                typedef std::future<DescribeScreenShotSheetNumListOutcome> DescribeScreenShotSheetNumListOutcomeCallable;
                typedef std::function<void(const LiveClient*, const Model::DescribeScreenShotSheetNumListRequest&, DescribeScreenShotSheetNumListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeScreenShotSheetNumListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeScreenshotTaskResponse> DescribeScreenshotTaskOutcome;
                typedef std::future<DescribeScreenshotTaskOutcome> DescribeScreenshotTaskOutcomeCallable;
                typedef std::function<void(const LiveClient*, const Model::DescribeScreenshotTaskRequest&, DescribeScreenshotTaskOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeScreenshotTaskAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeStreamDayPlayInfoListResponse> DescribeStreamDayPlayInfoListOutcome;
                typedef std::future<DescribeStreamDayPlayInfoListOutcome> DescribeStreamDayPlayInfoListOutcomeCallable;
                typedef std::function<void(const LiveClient*, const Model::DescribeStreamDayPlayInfoListRequest&, DescribeStreamDayPlayInfoListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeStreamDayPlayInfoListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeStreamPlayInfoListResponse> DescribeStreamPlayInfoListOutcome;
                typedef std::future<DescribeStreamPlayInfoListOutcome> DescribeStreamPlayInfoListOutcomeCallable;
                typedef std::function<void(const LiveClient*, const Model::DescribeStreamPlayInfoListRequest&, DescribeStreamPlayInfoListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeStreamPlayInfoListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeStreamPushInfoListResponse> DescribeStreamPushInfoListOutcome;
                typedef std::future<DescribeStreamPushInfoListOutcome> DescribeStreamPushInfoListOutcomeCallable;
                typedef std::function<void(const LiveClient*, const Model::DescribeStreamPushInfoListRequest&, DescribeStreamPushInfoListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeStreamPushInfoListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeTimeShiftRecordDetailResponse> DescribeTimeShiftRecordDetailOutcome;
                typedef std::future<DescribeTimeShiftRecordDetailOutcome> DescribeTimeShiftRecordDetailOutcomeCallable;
                typedef std::function<void(const LiveClient*, const Model::DescribeTimeShiftRecordDetailRequest&, DescribeTimeShiftRecordDetailOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeTimeShiftRecordDetailAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeTimeShiftStreamListResponse> DescribeTimeShiftStreamListOutcome;
                typedef std::future<DescribeTimeShiftStreamListOutcome> DescribeTimeShiftStreamListOutcomeCallable;
                typedef std::function<void(const LiveClient*, const Model::DescribeTimeShiftStreamListRequest&, DescribeTimeShiftStreamListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeTimeShiftStreamListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeTopClientIpSumInfoListResponse> DescribeTopClientIpSumInfoListOutcome;
                typedef std::future<DescribeTopClientIpSumInfoListOutcome> DescribeTopClientIpSumInfoListOutcomeCallable;
                typedef std::function<void(const LiveClient*, const Model::DescribeTopClientIpSumInfoListRequest&, DescribeTopClientIpSumInfoListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeTopClientIpSumInfoListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeTranscodeTaskNumResponse> DescribeTranscodeTaskNumOutcome;
                typedef std::future<DescribeTranscodeTaskNumOutcome> DescribeTranscodeTaskNumOutcomeCallable;
                typedef std::function<void(const LiveClient*, const Model::DescribeTranscodeTaskNumRequest&, DescribeTranscodeTaskNumOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeTranscodeTaskNumAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeUploadStreamNumsResponse> DescribeUploadStreamNumsOutcome;
                typedef std::future<DescribeUploadStreamNumsOutcome> DescribeUploadStreamNumsOutcomeCallable;
                typedef std::function<void(const LiveClient*, const Model::DescribeUploadStreamNumsRequest&, DescribeUploadStreamNumsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeUploadStreamNumsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeVisitTopSumInfoListResponse> DescribeVisitTopSumInfoListOutcome;
                typedef std::future<DescribeVisitTopSumInfoListOutcome> DescribeVisitTopSumInfoListOutcomeCallable;
                typedef std::function<void(const LiveClient*, const Model::DescribeVisitTopSumInfoListRequest&, DescribeVisitTopSumInfoListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeVisitTopSumInfoListAsyncHandler;
                typedef Outcome<Core::Error, Model::DropLiveStreamResponse> DropLiveStreamOutcome;
                typedef std::future<DropLiveStreamOutcome> DropLiveStreamOutcomeCallable;
                typedef std::function<void(const LiveClient*, const Model::DropLiveStreamRequest&, DropLiveStreamOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DropLiveStreamAsyncHandler;
                typedef Outcome<Core::Error, Model::EnableLiveDomainResponse> EnableLiveDomainOutcome;
                typedef std::future<EnableLiveDomainOutcome> EnableLiveDomainOutcomeCallable;
                typedef std::function<void(const LiveClient*, const Model::EnableLiveDomainRequest&, EnableLiveDomainOutcome, const std::shared_ptr<const AsyncCallerContext>&)> EnableLiveDomainAsyncHandler;
                typedef Outcome<Core::Error, Model::EnableOptimalSwitchingResponse> EnableOptimalSwitchingOutcome;
                typedef std::future<EnableOptimalSwitchingOutcome> EnableOptimalSwitchingOutcomeCallable;
                typedef std::function<void(const LiveClient*, const Model::EnableOptimalSwitchingRequest&, EnableOptimalSwitchingOutcome, const std::shared_ptr<const AsyncCallerContext>&)> EnableOptimalSwitchingAsyncHandler;
                typedef Outcome<Core::Error, Model::ForbidLiveDomainResponse> ForbidLiveDomainOutcome;
                typedef std::future<ForbidLiveDomainOutcome> ForbidLiveDomainOutcomeCallable;
                typedef std::function<void(const LiveClient*, const Model::ForbidLiveDomainRequest&, ForbidLiveDomainOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ForbidLiveDomainAsyncHandler;
                typedef Outcome<Core::Error, Model::ForbidLiveStreamResponse> ForbidLiveStreamOutcome;
                typedef std::future<ForbidLiveStreamOutcome> ForbidLiveStreamOutcomeCallable;
                typedef std::function<void(const LiveClient*, const Model::ForbidLiveStreamRequest&, ForbidLiveStreamOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ForbidLiveStreamAsyncHandler;
                typedef Outcome<Core::Error, Model::GenerateLiveAvatarScriptBroadcastResponse> GenerateLiveAvatarScriptBroadcastOutcome;
                typedef std::future<GenerateLiveAvatarScriptBroadcastOutcome> GenerateLiveAvatarScriptBroadcastOutcomeCallable;
                typedef std::function<void(const LiveClient*, const Model::GenerateLiveAvatarScriptBroadcastRequest&, GenerateLiveAvatarScriptBroadcastOutcome, const std::shared_ptr<const AsyncCallerContext>&)> GenerateLiveAvatarScriptBroadcastAsyncHandler;
                typedef Outcome<Core::Error, Model::InsertTaskTemporaryFilesResponse> InsertTaskTemporaryFilesOutcome;
                typedef std::future<InsertTaskTemporaryFilesOutcome> InsertTaskTemporaryFilesOutcomeCallable;
                typedef std::function<void(const LiveClient*, const Model::InsertTaskTemporaryFilesRequest&, InsertTaskTemporaryFilesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> InsertTaskTemporaryFilesAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyCasterResponse> ModifyCasterOutcome;
                typedef std::future<ModifyCasterOutcome> ModifyCasterOutcomeCallable;
                typedef std::function<void(const LiveClient*, const Model::ModifyCasterRequest&, ModifyCasterOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyCasterAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyCasterInputInfoResponse> ModifyCasterInputInfoOutcome;
                typedef std::future<ModifyCasterInputInfoOutcome> ModifyCasterInputInfoOutcomeCallable;
                typedef std::function<void(const LiveClient*, const Model::ModifyCasterInputInfoRequest&, ModifyCasterInputInfoOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyCasterInputInfoAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyCasterLayoutInfoResponse> ModifyCasterLayoutInfoOutcome;
                typedef std::future<ModifyCasterLayoutInfoOutcome> ModifyCasterLayoutInfoOutcomeCallable;
                typedef std::function<void(const LiveClient*, const Model::ModifyCasterLayoutInfoRequest&, ModifyCasterLayoutInfoOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyCasterLayoutInfoAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyCasterMarkPicInfoResponse> ModifyCasterMarkPicInfoOutcome;
                typedef std::future<ModifyCasterMarkPicInfoOutcome> ModifyCasterMarkPicInfoOutcomeCallable;
                typedef std::function<void(const LiveClient*, const Model::ModifyCasterMarkPicInfoRequest&, ModifyCasterMarkPicInfoOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyCasterMarkPicInfoAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyCasterMarkWordInfoResponse> ModifyCasterMarkWordInfoOutcome;
                typedef std::future<ModifyCasterMarkWordInfoOutcome> ModifyCasterMarkWordInfoOutcomeCallable;
                typedef std::function<void(const LiveClient*, const Model::ModifyCasterMarkWordInfoRequest&, ModifyCasterMarkWordInfoOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyCasterMarkWordInfoAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyCasterOutputInfoResponse> ModifyCasterOutputInfoOutcome;
                typedef std::future<ModifyCasterOutputInfoOutcome> ModifyCasterOutputInfoOutcomeCallable;
                typedef std::function<void(const LiveClient*, const Model::ModifyCasterOutputInfoRequest&, ModifyCasterOutputInfoOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyCasterOutputInfoAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyLiveAvatarRoomResponse> ModifyLiveAvatarRoomOutcome;
                typedef std::future<ModifyLiveAvatarRoomOutcome> ModifyLiveAvatarRoomOutcomeCallable;
                typedef std::function<void(const LiveClient*, const Model::ModifyLiveAvatarRoomRequest&, ModifyLiveAvatarRoomOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyLiveAvatarRoomAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyLiveAvatarScriptResponse> ModifyLiveAvatarScriptOutcome;
                typedef std::future<ModifyLiveAvatarScriptOutcome> ModifyLiveAvatarScriptOutcomeCallable;
                typedef std::function<void(const LiveClient*, const Model::ModifyLiveAvatarScriptRequest&, ModifyLiveAvatarScriptOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyLiveAvatarScriptAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyLiveCallbackTemplateResponse> ModifyLiveCallbackTemplateOutcome;
                typedef std::future<ModifyLiveCallbackTemplateOutcome> ModifyLiveCallbackTemplateOutcomeCallable;
                typedef std::function<void(const LiveClient*, const Model::ModifyLiveCallbackTemplateRequest&, ModifyLiveCallbackTemplateOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyLiveCallbackTemplateAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyLiveDomainCertBindingsResponse> ModifyLiveDomainCertBindingsOutcome;
                typedef std::future<ModifyLiveDomainCertBindingsOutcome> ModifyLiveDomainCertBindingsOutcomeCallable;
                typedef std::function<void(const LiveClient*, const Model::ModifyLiveDomainCertBindingsRequest&, ModifyLiveDomainCertBindingsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyLiveDomainCertBindingsAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyLiveDomainRefererResponse> ModifyLiveDomainRefererOutcome;
                typedef std::future<ModifyLiveDomainRefererOutcome> ModifyLiveDomainRefererOutcomeCallable;
                typedef std::function<void(const LiveClient*, const Model::ModifyLiveDomainRefererRequest&, ModifyLiveDomainRefererOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyLiveDomainRefererAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyLivePadTemplateResponse> ModifyLivePadTemplateOutcome;
                typedef std::future<ModifyLivePadTemplateOutcome> ModifyLivePadTemplateOutcomeCallable;
                typedef std::function<void(const LiveClient*, const Model::ModifyLivePadTemplateRequest&, ModifyLivePadTemplateOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyLivePadTemplateAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyLivePlayAuthKeyResponse> ModifyLivePlayAuthKeyOutcome;
                typedef std::future<ModifyLivePlayAuthKeyOutcome> ModifyLivePlayAuthKeyOutcomeCallable;
                typedef std::function<void(const LiveClient*, const Model::ModifyLivePlayAuthKeyRequest&, ModifyLivePlayAuthKeyOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyLivePlayAuthKeyAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyLivePlayDomainResponse> ModifyLivePlayDomainOutcome;
                typedef std::future<ModifyLivePlayDomainOutcome> ModifyLivePlayDomainOutcomeCallable;
                typedef std::function<void(const LiveClient*, const Model::ModifyLivePlayDomainRequest&, ModifyLivePlayDomainOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyLivePlayDomainAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyLivePullStreamTaskResponse> ModifyLivePullStreamTaskOutcome;
                typedef std::future<ModifyLivePullStreamTaskOutcome> ModifyLivePullStreamTaskOutcomeCallable;
                typedef std::function<void(const LiveClient*, const Model::ModifyLivePullStreamTaskRequest&, ModifyLivePullStreamTaskOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyLivePullStreamTaskAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyLivePushAuthKeyResponse> ModifyLivePushAuthKeyOutcome;
                typedef std::future<ModifyLivePushAuthKeyOutcome> ModifyLivePushAuthKeyOutcomeCallable;
                typedef std::function<void(const LiveClient*, const Model::ModifyLivePushAuthKeyRequest&, ModifyLivePushAuthKeyOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyLivePushAuthKeyAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyLiveRecordTemplateResponse> ModifyLiveRecordTemplateOutcome;
                typedef std::future<ModifyLiveRecordTemplateOutcome> ModifyLiveRecordTemplateOutcomeCallable;
                typedef std::function<void(const LiveClient*, const Model::ModifyLiveRecordTemplateRequest&, ModifyLiveRecordTemplateOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyLiveRecordTemplateAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyLiveSnapshotTemplateResponse> ModifyLiveSnapshotTemplateOutcome;
                typedef std::future<ModifyLiveSnapshotTemplateOutcome> ModifyLiveSnapshotTemplateOutcomeCallable;
                typedef std::function<void(const LiveClient*, const Model::ModifyLiveSnapshotTemplateRequest&, ModifyLiveSnapshotTemplateOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyLiveSnapshotTemplateAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyLiveStreamMonitorResponse> ModifyLiveStreamMonitorOutcome;
                typedef std::future<ModifyLiveStreamMonitorOutcome> ModifyLiveStreamMonitorOutcomeCallable;
                typedef std::function<void(const LiveClient*, const Model::ModifyLiveStreamMonitorRequest&, ModifyLiveStreamMonitorOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyLiveStreamMonitorAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyLiveTimeShiftTemplateResponse> ModifyLiveTimeShiftTemplateOutcome;
                typedef std::future<ModifyLiveTimeShiftTemplateOutcome> ModifyLiveTimeShiftTemplateOutcomeCallable;
                typedef std::function<void(const LiveClient*, const Model::ModifyLiveTimeShiftTemplateRequest&, ModifyLiveTimeShiftTemplateOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyLiveTimeShiftTemplateAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyLiveTranscodeTemplateResponse> ModifyLiveTranscodeTemplateOutcome;
                typedef std::future<ModifyLiveTranscodeTemplateOutcome> ModifyLiveTranscodeTemplateOutcomeCallable;
                typedef std::function<void(const LiveClient*, const Model::ModifyLiveTranscodeTemplateRequest&, ModifyLiveTranscodeTemplateOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyLiveTranscodeTemplateAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyOriginStreamInfoResponse> ModifyOriginStreamInfoOutcome;
                typedef std::future<ModifyOriginStreamInfoOutcome> ModifyOriginStreamInfoOutcomeCallable;
                typedef std::function<void(const LiveClient*, const Model::ModifyOriginStreamInfoRequest&, ModifyOriginStreamInfoOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyOriginStreamInfoAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyPullStreamConfigResponse> ModifyPullStreamConfigOutcome;
                typedef std::future<ModifyPullStreamConfigOutcome> ModifyPullStreamConfigOutcomeCallable;
                typedef std::function<void(const LiveClient*, const Model::ModifyPullStreamConfigRequest&, ModifyPullStreamConfigOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyPullStreamConfigAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyPullStreamStatusResponse> ModifyPullStreamStatusOutcome;
                typedef std::future<ModifyPullStreamStatusOutcome> ModifyPullStreamStatusOutcomeCallable;
                typedef std::function<void(const LiveClient*, const Model::ModifyPullStreamStatusRequest&, ModifyPullStreamStatusOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyPullStreamStatusAsyncHandler;
                typedef Outcome<Core::Error, Model::ReleaseCasterResponse> ReleaseCasterOutcome;
                typedef std::future<ReleaseCasterOutcome> ReleaseCasterOutcomeCallable;
                typedef std::function<void(const LiveClient*, const Model::ReleaseCasterRequest&, ReleaseCasterOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ReleaseCasterAsyncHandler;
                typedef Outcome<Core::Error, Model::RestartLivePullStreamTaskResponse> RestartLivePullStreamTaskOutcome;
                typedef std::future<RestartLivePullStreamTaskOutcome> RestartLivePullStreamTaskOutcomeCallable;
                typedef std::function<void(const LiveClient*, const Model::RestartLivePullStreamTaskRequest&, RestartLivePullStreamTaskOutcome, const std::shared_ptr<const AsyncCallerContext>&)> RestartLivePullStreamTaskAsyncHandler;
                typedef Outcome<Core::Error, Model::ResumeDelayLiveStreamResponse> ResumeDelayLiveStreamOutcome;
                typedef std::future<ResumeDelayLiveStreamOutcome> ResumeDelayLiveStreamOutcomeCallable;
                typedef std::function<void(const LiveClient*, const Model::ResumeDelayLiveStreamRequest&, ResumeDelayLiveStreamOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ResumeDelayLiveStreamAsyncHandler;
                typedef Outcome<Core::Error, Model::ResumeLiveStreamResponse> ResumeLiveStreamOutcome;
                typedef std::future<ResumeLiveStreamOutcome> ResumeLiveStreamOutcomeCallable;
                typedef std::function<void(const LiveClient*, const Model::ResumeLiveStreamRequest&, ResumeLiveStreamOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ResumeLiveStreamAsyncHandler;
                typedef Outcome<Core::Error, Model::SendLiveCloudEffectResponse> SendLiveCloudEffectOutcome;
                typedef std::future<SendLiveCloudEffectOutcome> SendLiveCloudEffectOutcomeCallable;
                typedef std::function<void(const LiveClient*, const Model::SendLiveCloudEffectRequest&, SendLiveCloudEffectOutcome, const std::shared_ptr<const AsyncCallerContext>&)> SendLiveCloudEffectAsyncHandler;
                typedef Outcome<Core::Error, Model::SendTemporaryScriptToAvatarRoomResponse> SendTemporaryScriptToAvatarRoomOutcome;
                typedef std::future<SendTemporaryScriptToAvatarRoomOutcome> SendTemporaryScriptToAvatarRoomOutcomeCallable;
                typedef std::function<void(const LiveClient*, const Model::SendTemporaryScriptToAvatarRoomRequest&, SendTemporaryScriptToAvatarRoomOutcome, const std::shared_ptr<const AsyncCallerContext>&)> SendTemporaryScriptToAvatarRoomAsyncHandler;
                typedef Outcome<Core::Error, Model::StartLiveAvatarRoomResponse> StartLiveAvatarRoomOutcome;
                typedef std::future<StartLiveAvatarRoomOutcome> StartLiveAvatarRoomOutcomeCallable;
                typedef std::function<void(const LiveClient*, const Model::StartLiveAvatarRoomRequest&, StartLiveAvatarRoomOutcome, const std::shared_ptr<const AsyncCallerContext>&)> StartLiveAvatarRoomAsyncHandler;
                typedef Outcome<Core::Error, Model::StartLivePadStreamResponse> StartLivePadStreamOutcome;
                typedef std::future<StartLivePadStreamOutcome> StartLivePadStreamOutcomeCallable;
                typedef std::function<void(const LiveClient*, const Model::StartLivePadStreamRequest&, StartLivePadStreamOutcome, const std::shared_ptr<const AsyncCallerContext>&)> StartLivePadStreamAsyncHandler;
                typedef Outcome<Core::Error, Model::StartLiveStreamMonitorResponse> StartLiveStreamMonitorOutcome;
                typedef std::future<StartLiveStreamMonitorOutcome> StartLiveStreamMonitorOutcomeCallable;
                typedef std::function<void(const LiveClient*, const Model::StartLiveStreamMonitorRequest&, StartLiveStreamMonitorOutcome, const std::shared_ptr<const AsyncCallerContext>&)> StartLiveStreamMonitorAsyncHandler;
                typedef Outcome<Core::Error, Model::StopCasterPgmResponse> StopCasterPgmOutcome;
                typedef std::future<StopCasterPgmOutcome> StopCasterPgmOutcomeCallable;
                typedef std::function<void(const LiveClient*, const Model::StopCasterPgmRequest&, StopCasterPgmOutcome, const std::shared_ptr<const AsyncCallerContext>&)> StopCasterPgmAsyncHandler;
                typedef Outcome<Core::Error, Model::StopCasterPvwResponse> StopCasterPvwOutcome;
                typedef std::future<StopCasterPvwOutcome> StopCasterPvwOutcomeCallable;
                typedef std::function<void(const LiveClient*, const Model::StopCasterPvwRequest&, StopCasterPvwOutcome, const std::shared_ptr<const AsyncCallerContext>&)> StopCasterPvwAsyncHandler;
                typedef Outcome<Core::Error, Model::StopLiveAvatarRoomResponse> StopLiveAvatarRoomOutcome;
                typedef std::future<StopLiveAvatarRoomOutcome> StopLiveAvatarRoomOutcomeCallable;
                typedef std::function<void(const LiveClient*, const Model::StopLiveAvatarRoomRequest&, StopLiveAvatarRoomOutcome, const std::shared_ptr<const AsyncCallerContext>&)> StopLiveAvatarRoomAsyncHandler;
                typedef Outcome<Core::Error, Model::StopLivePadStreamResponse> StopLivePadStreamOutcome;
                typedef std::future<StopLivePadStreamOutcome> StopLivePadStreamOutcomeCallable;
                typedef std::function<void(const LiveClient*, const Model::StopLivePadStreamRequest&, StopLivePadStreamOutcome, const std::shared_ptr<const AsyncCallerContext>&)> StopLivePadStreamAsyncHandler;
                typedef Outcome<Core::Error, Model::StopLiveRecordResponse> StopLiveRecordOutcome;
                typedef std::future<StopLiveRecordOutcome> StopLiveRecordOutcomeCallable;
                typedef std::function<void(const LiveClient*, const Model::StopLiveRecordRequest&, StopLiveRecordOutcome, const std::shared_ptr<const AsyncCallerContext>&)> StopLiveRecordAsyncHandler;
                typedef Outcome<Core::Error, Model::StopLiveStreamMonitorResponse> StopLiveStreamMonitorOutcome;
                typedef std::future<StopLiveStreamMonitorOutcome> StopLiveStreamMonitorOutcomeCallable;
                typedef std::function<void(const LiveClient*, const Model::StopLiveStreamMonitorRequest&, StopLiveStreamMonitorOutcome, const std::shared_ptr<const AsyncCallerContext>&)> StopLiveStreamMonitorAsyncHandler;
                typedef Outcome<Core::Error, Model::StopRecordTaskResponse> StopRecordTaskOutcome;
                typedef std::future<StopRecordTaskOutcome> StopRecordTaskOutcomeCallable;
                typedef std::function<void(const LiveClient*, const Model::StopRecordTaskRequest&, StopRecordTaskOutcome, const std::shared_ptr<const AsyncCallerContext>&)> StopRecordTaskAsyncHandler;
                typedef Outcome<Core::Error, Model::StopScreenshotTaskResponse> StopScreenshotTaskOutcome;
                typedef std::future<StopScreenshotTaskOutcome> StopScreenshotTaskOutcomeCallable;
                typedef std::function<void(const LiveClient*, const Model::StopScreenshotTaskRequest&, StopScreenshotTaskOutcome, const std::shared_ptr<const AsyncCallerContext>&)> StopScreenshotTaskAsyncHandler;
                typedef Outcome<Core::Error, Model::SwitchBackupStreamResponse> SwitchBackupStreamOutcome;
                typedef std::future<SwitchBackupStreamOutcome> SwitchBackupStreamOutcomeCallable;
                typedef std::function<void(const LiveClient*, const Model::SwitchBackupStreamRequest&, SwitchBackupStreamOutcome, const std::shared_ptr<const AsyncCallerContext>&)> SwitchBackupStreamAsyncHandler;
                typedef Outcome<Core::Error, Model::SwitchCasterToEmergencyResponse> SwitchCasterToEmergencyOutcome;
                typedef std::future<SwitchCasterToEmergencyOutcome> SwitchCasterToEmergencyOutcomeCallable;
                typedef std::function<void(const LiveClient*, const Model::SwitchCasterToEmergencyRequest&, SwitchCasterToEmergencyOutcome, const std::shared_ptr<const AsyncCallerContext>&)> SwitchCasterToEmergencyAsyncHandler;
                typedef Outcome<Core::Error, Model::UnBindLiveDomainCertResponse> UnBindLiveDomainCertOutcome;
                typedef std::future<UnBindLiveDomainCertOutcome> UnBindLiveDomainCertOutcomeCallable;
                typedef std::function<void(const LiveClient*, const Model::UnBindLiveDomainCertRequest&, UnBindLiveDomainCertOutcome, const std::shared_ptr<const AsyncCallerContext>&)> UnBindLiveDomainCertAsyncHandler;
                typedef Outcome<Core::Error, Model::UpdateLiveWatermarkResponse> UpdateLiveWatermarkOutcome;
                typedef std::future<UpdateLiveWatermarkOutcome> UpdateLiveWatermarkOutcomeCallable;
                typedef std::function<void(const LiveClient*, const Model::UpdateLiveWatermarkRequest&, UpdateLiveWatermarkOutcome, const std::shared_ptr<const AsyncCallerContext>&)> UpdateLiveWatermarkAsyncHandler;



                /**
                 *该接口用来向导播台中添加一个输入源，该输入源可以是拉流地址、或是一个文件链接
                 * @param req AddCasterInputInfoRequest
                 * @return AddCasterInputInfoOutcome
                 */
                AddCasterInputInfoOutcome AddCasterInputInfo(const Model::AddCasterInputInfoRequest &request);
                void AddCasterInputInfoAsync(const Model::AddCasterInputInfoRequest& request, const AddCasterInputInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                AddCasterInputInfoOutcomeCallable AddCasterInputInfoCallable(const Model::AddCasterInputInfoRequest& request);

                /**
                 *该接口用来增加导播台的布局参数。
                 * @param req AddCasterLayoutInfoRequest
                 * @return AddCasterLayoutInfoOutcome
                 */
                AddCasterLayoutInfoOutcome AddCasterLayoutInfo(const Model::AddCasterLayoutInfoRequest &request);
                void AddCasterLayoutInfoAsync(const Model::AddCasterLayoutInfoRequest& request, const AddCasterLayoutInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                AddCasterLayoutInfoOutcomeCallable AddCasterLayoutInfoCallable(const Model::AddCasterLayoutInfoRequest& request);

                /**
                 *该接口用来新增图片水印。
                 * @param req AddCasterMarkPicInfoRequest
                 * @return AddCasterMarkPicInfoOutcome
                 */
                AddCasterMarkPicInfoOutcome AddCasterMarkPicInfo(const Model::AddCasterMarkPicInfoRequest &request);
                void AddCasterMarkPicInfoAsync(const Model::AddCasterMarkPicInfoRequest& request, const AddCasterMarkPicInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                AddCasterMarkPicInfoOutcomeCallable AddCasterMarkPicInfoCallable(const Model::AddCasterMarkPicInfoRequest& request);

                /**
                 *为导播台添加文本配置。
                 * @param req AddCasterMarkWordInfoRequest
                 * @return AddCasterMarkWordInfoOutcome
                 */
                AddCasterMarkWordInfoOutcome AddCasterMarkWordInfo(const Model::AddCasterMarkWordInfoRequest &request);
                void AddCasterMarkWordInfoAsync(const Model::AddCasterMarkWordInfoRequest& request, const AddCasterMarkWordInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                AddCasterMarkWordInfoOutcomeCallable AddCasterMarkWordInfoCallable(const Model::AddCasterMarkWordInfoRequest& request);

                /**
                 *该接口用来新增导播台推流信息。导播台主监启动后，将会将主监画面推向该接口设置的地址。
                 * @param req AddCasterOutputInfoRequest
                 * @return AddCasterOutputInfoOutcome
                 */
                AddCasterOutputInfoOutcome AddCasterOutputInfo(const Model::AddCasterOutputInfoRequest &request);
                void AddCasterOutputInfoAsync(const Model::AddCasterOutputInfoRequest& request, const AddCasterOutputInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                AddCasterOutputInfoOutcomeCallable AddCasterOutputInfoCallable(const Model::AddCasterOutputInfoRequest& request);

                /**
                 *针对大型活动直播，通过对直播流设置延时来控制现场与观众播放画面的时间间隔，避免突发状况造成影响。

注意：如果在推流前设置延播，需要提前5分钟设置，目前该接口只支持流粒度。
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
                 *添加水印，成功返回水印 ID 后，需要调用[CreateLiveWatermarkRule](/document/product/267/32629)接口将水印 ID 绑定到流使用。 水印数量上限 100，超过后需要先删除，再添加。
                 * @param req AddLiveWatermarkRequest
                 * @return AddLiveWatermarkOutcome
                 */
                AddLiveWatermarkOutcome AddLiveWatermark(const Model::AddLiveWatermarkRequest &request);
                void AddLiveWatermarkAsync(const Model::AddLiveWatermarkRequest& request, const AddLiveWatermarkAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                AddLiveWatermarkOutcomeCallable AddLiveWatermarkCallable(const Model::AddLiveWatermarkRequest& request);

                /**
                 *验证用户是否拥有特定直播域名。
                 * @param req AuthenticateDomainOwnerRequest
                 * @return AuthenticateDomainOwnerOutcome
                 */
                AuthenticateDomainOwnerOutcome AuthenticateDomainOwner(const Model::AuthenticateDomainOwnerRequest &request);
                void AuthenticateDomainOwnerAsync(const Model::AuthenticateDomainOwnerRequest& request, const AuthenticateDomainOwnerAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                AuthenticateDomainOwnerOutcomeCallable AuthenticateDomainOwnerCallable(const Model::AuthenticateDomainOwnerRequest& request);

                /**
                 *该接口用来取消混流。用法与 mix_streamv2.cancel_mix_stream 基本一致。
                 * @param req CancelCommonMixStreamRequest
                 * @return CancelCommonMixStreamOutcome
                 */
                CancelCommonMixStreamOutcome CancelCommonMixStream(const Model::CancelCommonMixStreamRequest &request);
                void CancelCommonMixStreamAsync(const Model::CancelCommonMixStreamRequest& request, const CancelCommonMixStreamAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CancelCommonMixStreamOutcomeCallable CancelCommonMixStreamCallable(const Model::CancelCommonMixStreamRequest& request);

                /**
                 *用于关闭回源客户源站功能
                 * @param req CloseSourceStreamRequest
                 * @return CloseSourceStreamOutcome
                 */
                CloseSourceStreamOutcome CloseSourceStream(const Model::CloseSourceStreamRequest &request);
                void CloseSourceStreamAsync(const Model::CloseSourceStreamRequest& request, const CloseSourceStreamAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CloseSourceStreamOutcomeCallable CloseSourceStreamCallable(const Model::CloseSourceStreamRequest& request);

                /**
                 *该接口用来复制导播台配置
                 * @param req CopyCasterRequest
                 * @return CopyCasterOutcome
                 */
                CopyCasterOutcome CopyCaster(const Model::CopyCasterRequest &request);
                void CopyCasterAsync(const Model::CopyCasterRequest& request, const CopyCasterAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CopyCasterOutcomeCallable CopyCasterCallable(const Model::CopyCasterRequest& request);

                /**
                 *调用该接口，用于复制数字人直播间。
                 * @param req CopyLiveAvatarRoomRequest
                 * @return CopyLiveAvatarRoomOutcome
                 */
                CopyLiveAvatarRoomOutcome CopyLiveAvatarRoom(const Model::CopyLiveAvatarRoomRequest &request);
                void CopyLiveAvatarRoomAsync(const Model::CopyLiveAvatarRoomRequest& request, const CopyLiveAvatarRoomAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CopyLiveAvatarRoomOutcomeCallable CopyLiveAvatarRoomCallable(const Model::CopyLiveAvatarRoomRequest& request);

                /**
                 *创建关键词库，直播审核功能使用。
                 * @param req CreateAuditKeywordLibRequest
                 * @return CreateAuditKeywordLibOutcome
                 */
                CreateAuditKeywordLibOutcome CreateAuditKeywordLib(const Model::CreateAuditKeywordLibRequest &request);
                void CreateAuditKeywordLibAsync(const Model::CreateAuditKeywordLibRequest& request, const CreateAuditKeywordLibAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateAuditKeywordLibOutcomeCallable CreateAuditKeywordLibCallable(const Model::CreateAuditKeywordLibRequest& request);

                /**
                 *创建关键词，并关联到关键词库。
                 * @param req CreateAuditKeywordsRequest
                 * @return CreateAuditKeywordsOutcome
                 */
                CreateAuditKeywordsOutcome CreateAuditKeywords(const Model::CreateAuditKeywordsRequest &request);
                void CreateAuditKeywordsAsync(const Model::CreateAuditKeywordsRequest& request, const CreateAuditKeywordsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateAuditKeywordsOutcomeCallable CreateAuditKeywordsCallable(const Model::CreateAuditKeywordsRequest& request);

                /**
                 *该接口用来创建新的导播台
                 * @param req CreateCasterRequest
                 * @return CreateCasterOutcome
                 */
                CreateCasterOutcome CreateCaster(const Model::CreateCasterRequest &request);
                void CreateCasterAsync(const Model::CreateCasterRequest& request, const CreateCasterAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateCasterOutcomeCallable CreateCasterCallable(const Model::CreateCasterRequest& request);

                /**
                 *该接口用来生成导播台推流地址
                 * @param req CreateCasterInputPushUrlRequest
                 * @return CreateCasterInputPushUrlOutcome
                 */
                CreateCasterInputPushUrlOutcome CreateCasterInputPushUrl(const Model::CreateCasterInputPushUrlRequest &request);
                void CreateCasterInputPushUrlAsync(const Model::CreateCasterInputPushUrlRequest& request, const CreateCasterInputPushUrlAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateCasterInputPushUrlOutcomeCallable CreateCasterInputPushUrlCallable(const Model::CreateCasterInputPushUrlRequest& request);

                /**
                 *该接口用来启动主监任务，并将获取主监画面的播放地址。
                 * @param req CreateCasterPgmRequest
                 * @return CreateCasterPgmOutcome
                 */
                CreateCasterPgmOutcome CreateCasterPgm(const Model::CreateCasterPgmRequest &request);
                void CreateCasterPgmAsync(const Model::CreateCasterPgmRequest& request, const CreateCasterPgmAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateCasterPgmOutcomeCallable CreateCasterPgmCallable(const Model::CreateCasterPgmRequest& request);

                /**
                 *该接口用来将预监画面的布局、水印、字幕等配置，复制到主监画面中。
该接口使用时，预监任务需处于运行状态。
                 * @param req CreateCasterPgmFromPvwRequest
                 * @return CreateCasterPgmFromPvwOutcome
                 */
                CreateCasterPgmFromPvwOutcome CreateCasterPgmFromPvw(const Model::CreateCasterPgmFromPvwRequest &request);
                void CreateCasterPgmFromPvwAsync(const Model::CreateCasterPgmFromPvwRequest& request, const CreateCasterPgmFromPvwAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateCasterPgmFromPvwOutcomeCallable CreateCasterPgmFromPvwCallable(const Model::CreateCasterPgmFromPvwRequest& request);

                /**
                 *该接口用来启动预监任务，并将获取预监画面的播放地址。
                 * @param req CreateCasterPvwRequest
                 * @return CreateCasterPvwOutcome
                 */
                CreateCasterPvwOutcome CreateCasterPvw(const Model::CreateCasterPvwRequest &request);
                void CreateCasterPvwAsync(const Model::CreateCasterPvwRequest& request, const CreateCasterPvwAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateCasterPvwOutcomeCallable CreateCasterPvwCallable(const Model::CreateCasterPvwRequest& request);

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
                 *调用该接口，用于创建数字人直播间。
                 * @param req CreateLiveAvatarRoomRequest
                 * @return CreateLiveAvatarRoomOutcome
                 */
                CreateLiveAvatarRoomOutcome CreateLiveAvatarRoom(const Model::CreateLiveAvatarRoomRequest &request);
                void CreateLiveAvatarRoomAsync(const Model::CreateLiveAvatarRoomRequest& request, const CreateLiveAvatarRoomAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateLiveAvatarRoomOutcomeCallable CreateLiveAvatarRoomCallable(const Model::CreateLiveAvatarRoomRequest& request);

                /**
                 *调用该接口，用于创建数字人直播间/AIGC直播间话术。
                 * @param req CreateLiveAvatarScriptRequest
                 * @return CreateLiveAvatarScriptOutcome
                 */
                CreateLiveAvatarScriptOutcome CreateLiveAvatarScript(const Model::CreateLiveAvatarScriptRequest &request);
                void CreateLiveAvatarScriptAsync(const Model::CreateLiveAvatarScriptRequest& request, const CreateLiveAvatarScriptAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateLiveAvatarScriptOutcomeCallable CreateLiveAvatarScriptCallable(const Model::CreateLiveAvatarScriptRequest& request);

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
                 *创建回调模板，数量上限：50，成功返回模板id后，需要调用[CreateLiveCallbackRule](/document/product/267/32638)接口将模板 ID 绑定到域名/路径使用。
<br>回调协议相关文档：[事件消息通知](/document/product/267/32744)。
注意：至少填写一个回调 URL。
                 * @param req CreateLiveCallbackTemplateRequest
                 * @return CreateLiveCallbackTemplateOutcome
                 */
                CreateLiveCallbackTemplateOutcome CreateLiveCallbackTemplate(const Model::CreateLiveCallbackTemplateRequest &request);
                void CreateLiveCallbackTemplateAsync(const Model::CreateLiveCallbackTemplateRequest& request, const CreateLiveCallbackTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateLiveCallbackTemplateOutcomeCallable CreateLiveCallbackTemplateCallable(const Model::CreateLiveCallbackTemplateRequest& request);

                /**
                 *使用该接口生成云端特效。特效可用于叠加到直播流上，供播放端观看。
注意：云端特效生成需要一定时间，调用生成接口后，可通过查询接口，获取是否特效已生成。
                 * @param req CreateLiveCloudEffectRequest
                 * @return CreateLiveCloudEffectOutcome
                 */
                CreateLiveCloudEffectOutcome CreateLiveCloudEffect(const Model::CreateLiveCloudEffectRequest &request);
                void CreateLiveCloudEffectAsync(const Model::CreateLiveCloudEffectRequest& request, const CreateLiveCloudEffectAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateLiveCloudEffectOutcomeCallable CreateLiveCloudEffectCallable(const Model::CreateLiveCloudEffectRequest& request);

                /**
                 *创建直播垫片规则。
                 * @param req CreateLivePadRuleRequest
                 * @return CreateLivePadRuleOutcome
                 */
                CreateLivePadRuleOutcome CreateLivePadRule(const Model::CreateLivePadRuleRequest &request);
                void CreateLivePadRuleAsync(const Model::CreateLivePadRuleRequest& request, const CreateLivePadRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateLivePadRuleOutcomeCallable CreateLivePadRuleCallable(const Model::CreateLivePadRuleRequest& request);

                /**
                 *创建直播垫片模板。
                 * @param req CreateLivePadTemplateRequest
                 * @return CreateLivePadTemplateOutcome
                 */
                CreateLivePadTemplateOutcome CreateLivePadTemplate(const Model::CreateLivePadTemplateRequest &request);
                void CreateLivePadTemplateAsync(const Model::CreateLivePadTemplateRequest& request, const CreateLivePadTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateLivePadTemplateOutcomeCallable CreateLivePadTemplateCallable(const Model::CreateLivePadTemplateRequest& request);

                /**
                 *创建直播拉流任务。支持将外部已有的点播文件，或者直播源拉取过来转推到指定的目标地址。
注意：
1. 默认支持任务数上限200个，如有特殊需求，可通过提单到售后进行评估增加上限。
2. 源流视频编码目前只支持: H264, H265。其他编码格式建议先进行转码处理。
3. 源流音频编码目前只支持: AAC。其他编码格式建议先进行转码处理。
4. 可在控制台开启过期自动清理，避免过期任务占用任务数额度。
5. 拉流转推功能为计费增值服务，计费规则详情可参见[计费文档](https://cloud.tencent.com/document/product/267/53308)。
6. 拉流转推功能仅提供内容拉取与推送服务，请确保内容已获得授权并符合内容传播相关的法律法规。若内容有侵权或违规相关问题，云直播会停止相关的功能服务并保留追究法律责任的权利。
                 * @param req CreateLivePullStreamTaskRequest
                 * @return CreateLivePullStreamTaskOutcome
                 */
                CreateLivePullStreamTaskOutcome CreateLivePullStreamTask(const Model::CreateLivePullStreamTaskRequest &request);
                void CreateLivePullStreamTaskAsync(const Model::CreateLivePullStreamTaskRequest& request, const CreateLivePullStreamTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateLivePullStreamTaskOutcomeCallable CreateLivePullStreamTaskCallable(const Model::CreateLivePullStreamTaskRequest& request);

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
                 *创建录制模板，数量上限：50，成功返回模板id后，需要调用[CreateLiveRecordRule](/document/product/267/32615)接口，将模板id绑定到流进行使用。
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
                 *创建截图模板，数量上限：50，成功返回模板id后，需要调用[CreateLiveSnapshotRule](/document/product/267/32625)接口，将模板id绑定到流使用。
<br>截图相关文档：[直播截图](/document/product/267/32737)。
                 * @param req CreateLiveSnapshotTemplateRequest
                 * @return CreateLiveSnapshotTemplateOutcome
                 */
                CreateLiveSnapshotTemplateOutcome CreateLiveSnapshotTemplate(const Model::CreateLiveSnapshotTemplateRequest &request);
                void CreateLiveSnapshotTemplateAsync(const Model::CreateLiveSnapshotTemplateRequest& request, const CreateLiveSnapshotTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateLiveSnapshotTemplateOutcomeCallable CreateLiveSnapshotTemplateCallable(const Model::CreateLiveSnapshotTemplateRequest& request);

                /**
                 *该接口用来创建直播流监播任务。
                 * @param req CreateLiveStreamMonitorRequest
                 * @return CreateLiveStreamMonitorOutcome
                 */
                CreateLiveStreamMonitorOutcome CreateLiveStreamMonitor(const Model::CreateLiveStreamMonitorRequest &request);
                void CreateLiveStreamMonitorAsync(const Model::CreateLiveStreamMonitorRequest& request, const CreateLiveStreamMonitorAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateLiveStreamMonitorOutcomeCallable CreateLiveStreamMonitorCallable(const Model::CreateLiveStreamMonitorRequest& request);

                /**
                 *创建直播时移规则，需要先调用[CreateLiveTimeShiftTemplate](/document/product/267/86169)接口创建直播时移模板，将返回的模板id绑定到流使用。
<br>直播时移相关文档：[直播时移](/document/product/267/86134)。
                 * @param req CreateLiveTimeShiftRuleRequest
                 * @return CreateLiveTimeShiftRuleOutcome
                 */
                CreateLiveTimeShiftRuleOutcome CreateLiveTimeShiftRule(const Model::CreateLiveTimeShiftRuleRequest &request);
                void CreateLiveTimeShiftRuleAsync(const Model::CreateLiveTimeShiftRuleRequest& request, const CreateLiveTimeShiftRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateLiveTimeShiftRuleOutcomeCallable CreateLiveTimeShiftRuleCallable(const Model::CreateLiveTimeShiftRuleRequest& request);

                /**
                 *创建直播时移模板。
                 * @param req CreateLiveTimeShiftTemplateRequest
                 * @return CreateLiveTimeShiftTemplateOutcome
                 */
                CreateLiveTimeShiftTemplateOutcome CreateLiveTimeShiftTemplate(const Model::CreateLiveTimeShiftTemplateRequest &request);
                void CreateLiveTimeShiftTemplateAsync(const Model::CreateLiveTimeShiftTemplateRequest& request, const CreateLiveTimeShiftTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateLiveTimeShiftTemplateOutcomeCallable CreateLiveTimeShiftTemplateCallable(const Model::CreateLiveTimeShiftTemplateRequest& request);

                /**
                 *创建转码规则，数量上限：50，需要先调用[CreateLiveTranscodeTemplate](/document/product/267/32646)接口创建转码模板，将返回的模板id绑定到流使用。
<br>转码相关文档：[直播转封装及转码](/document/product/267/32736)。
                 * @param req CreateLiveTranscodeRuleRequest
                 * @return CreateLiveTranscodeRuleOutcome
                 */
                CreateLiveTranscodeRuleOutcome CreateLiveTranscodeRule(const Model::CreateLiveTranscodeRuleRequest &request);
                void CreateLiveTranscodeRuleAsync(const Model::CreateLiveTranscodeRuleRequest& request, const CreateLiveTranscodeRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateLiveTranscodeRuleOutcomeCallable CreateLiveTranscodeRuleCallable(const Model::CreateLiveTranscodeRuleRequest& request);

                /**
                 *创建转码模板，数量上限：50，成功返回模板id后，需要调用[CreateLiveTranscodeRule](/document/product/267/32647)接口，将返回的模板id绑定到流使用。
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
该接口已下线,请使用新接口 CreateLivePullStreamTask。

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
1. 录制文件存放于点播平台或对象存储内，所以用户如需使用录制功能，需首先自行开通点播服务或对象存储服务。
2. 录制文件存放后相关费用（含存储以及下行播放流量）按照点播平台计费方式收取，具体请参考[对应文档](https://cloud.tencent.com/document/product/266/2837)。
- 注意事项
1. 断流会结束当前录制并生成录制文件。在结束时间到达之前任务仍然有效，期间只要正常推流都会正常录制，与是否多次推、断流无关。
2. 使用上避免创建时间段相互重叠的录制任务。若同一条流当前存在多个时段重叠的任务，为避免重复录制系统将启动最多3个录制任务。
3. 创建的录制任务记录在平台侧只保留3个月。
4. 当前录制任务管理API（[CreateRecordTask](https://cloud.tencent.com/document/product/267/45983)/[StopRecordTask](https://cloud.tencent.com/document/product/267/45981)/[DeleteRecordTask](https://cloud.tencent.com/document/product/267/45982)）与旧API（CreateLiveRecord/StopLiveRecord/DeleteLiveRecord）不兼容，两套接口不能混用。
5. 避免 创建录制任务 与 推流 操作同时进行，可能导致因录制任务未生效而引起任务延迟启动问题，两者操作间隔建议大于3秒。
                 * @param req CreateRecordTaskRequest
                 * @return CreateRecordTaskOutcome
                 */
                CreateRecordTaskOutcome CreateRecordTask(const Model::CreateRecordTaskRequest &request);
                void CreateRecordTaskAsync(const Model::CreateRecordTaskRequest& request, const CreateRecordTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateRecordTaskOutcomeCallable CreateRecordTaskCallable(const Model::CreateRecordTaskRequest& request);

                /**
                 *创建一个在指定时间启动、结束的截图任务，并使用指定截图模板ID对应的配置进行截图。
- 注意事项
1. 断流会结束当前截图。在结束时间到达之前任务仍然有效，期间只要正常推流都会正常截图，与是否多次推、断流无关。
2. 使用上避免创建时间段相互重叠的截图任务。若同一条流当前存在多个时段重叠的任务，为避免重复系统将启动最多3个截图任务。
3. 创建的截图任务记录在平台侧只保留3个月。
4. 当前截图任务管理API（CreateScreenshotTask/StopScreenshotTask/DeleteScreenshotTask）与旧API（CreateLiveInstantSnapshot/StopLiveInstantSnapshot）不兼容，两套接口不能混用。
5. 避免 创建截图任务 与 推流 操作同时进行，可能导致因截图任务未生效而引起任务延迟启动问题，两者操作间隔建议大于3秒。
                 * @param req CreateScreenshotTaskRequest
                 * @return CreateScreenshotTaskOutcome
                 */
                CreateScreenshotTaskOutcome CreateScreenshotTask(const Model::CreateScreenshotTaskRequest &request);
                void CreateScreenshotTaskAsync(const Model::CreateScreenshotTaskRequest& request, const CreateScreenshotTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateScreenshotTaskOutcomeCallable CreateScreenshotTaskCallable(const Model::CreateScreenshotTaskRequest& request);

                /**
                 *创建AI转绘任务
                 * @param req CreateVideoRedrawTaskRequest
                 * @return CreateVideoRedrawTaskOutcome
                 */
                CreateVideoRedrawTaskOutcome CreateVideoRedrawTask(const Model::CreateVideoRedrawTaskRequest &request);
                void CreateVideoRedrawTaskAsync(const Model::CreateVideoRedrawTaskRequest& request, const CreateVideoRedrawTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateVideoRedrawTaskOutcomeCallable CreateVideoRedrawTaskCallable(const Model::CreateVideoRedrawTaskRequest& request);

                /**
                 *删除关键词信息。
                 * @param req DeleteAuditKeywordsRequest
                 * @return DeleteAuditKeywordsOutcome
                 */
                DeleteAuditKeywordsOutcome DeleteAuditKeywords(const Model::DeleteAuditKeywordsRequest &request);
                void DeleteAuditKeywordsAsync(const Model::DeleteAuditKeywordsRequest& request, const DeleteAuditKeywordsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteAuditKeywordsOutcomeCallable DeleteAuditKeywordsCallable(const Model::DeleteAuditKeywordsRequest& request);

                /**
                 *该接口用来删除一个导播台的所有信息。
注意，调用该接口后，所有的导播台信息将被清除，包括正在直播的内容也将直接中断。
                 * @param req DeleteCasterRequest
                 * @return DeleteCasterOutcome
                 */
                DeleteCasterOutcome DeleteCaster(const Model::DeleteCasterRequest &request);
                void DeleteCasterAsync(const Model::DeleteCasterRequest& request, const DeleteCasterAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteCasterOutcomeCallable DeleteCasterCallable(const Model::DeleteCasterRequest& request);

                /**
                 *该接口用来删除导播台中的输入源信息。
                 * @param req DeleteCasterInputInfoRequest
                 * @return DeleteCasterInputInfoOutcome
                 */
                DeleteCasterInputInfoOutcome DeleteCasterInputInfo(const Model::DeleteCasterInputInfoRequest &request);
                void DeleteCasterInputInfoAsync(const Model::DeleteCasterInputInfoRequest& request, const DeleteCasterInputInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteCasterInputInfoOutcomeCallable DeleteCasterInputInfoCallable(const Model::DeleteCasterInputInfoRequest& request);

                /**
                 *该接口用来将布局信息从导播台中删除
                 * @param req DeleteCasterLayoutInfoRequest
                 * @return DeleteCasterLayoutInfoOutcome
                 */
                DeleteCasterLayoutInfoOutcome DeleteCasterLayoutInfo(const Model::DeleteCasterLayoutInfoRequest &request);
                void DeleteCasterLayoutInfoAsync(const Model::DeleteCasterLayoutInfoRequest& request, const DeleteCasterLayoutInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteCasterLayoutInfoOutcomeCallable DeleteCasterLayoutInfoCallable(const Model::DeleteCasterLayoutInfoRequest& request);

                /**
                 *该接口用来删除导播台某个Index对应的水印。
                 * @param req DeleteCasterMarkPicInfoRequest
                 * @return DeleteCasterMarkPicInfoOutcome
                 */
                DeleteCasterMarkPicInfoOutcome DeleteCasterMarkPicInfo(const Model::DeleteCasterMarkPicInfoRequest &request);
                void DeleteCasterMarkPicInfoAsync(const Model::DeleteCasterMarkPicInfoRequest& request, const DeleteCasterMarkPicInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteCasterMarkPicInfoOutcomeCallable DeleteCasterMarkPicInfoCallable(const Model::DeleteCasterMarkPicInfoRequest& request);

                /**
                 *该接口用来删除导播台的文本配置。
                 * @param req DeleteCasterMarkWordInfoRequest
                 * @return DeleteCasterMarkWordInfoOutcome
                 */
                DeleteCasterMarkWordInfoOutcome DeleteCasterMarkWordInfo(const Model::DeleteCasterMarkWordInfoRequest &request);
                void DeleteCasterMarkWordInfoAsync(const Model::DeleteCasterMarkWordInfoRequest& request, const DeleteCasterMarkWordInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteCasterMarkWordInfoOutcomeCallable DeleteCasterMarkWordInfoCallable(const Model::DeleteCasterMarkWordInfoRequest& request);

                /**
                 *该接口用来删除导播台的推流信息。
注：若删除推流到腾讯云直播源站配置，即OutputIndex为0，OutputType为1的推流配置，在重新启动主监后，系统会自动重新生成一个推流到腾讯云直播源站配置。
                 * @param req DeleteCasterOutputInfoRequest
                 * @return DeleteCasterOutputInfoOutcome
                 */
                DeleteCasterOutputInfoOutcome DeleteCasterOutputInfo(const Model::DeleteCasterOutputInfoRequest &request);
                void DeleteCasterOutputInfoAsync(const Model::DeleteCasterOutputInfoRequest& request, const DeleteCasterOutputInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteCasterOutputInfoOutcomeCallable DeleteCasterOutputInfoCallable(const Model::DeleteCasterOutputInfoRequest& request);

                /**
                 *调用该接口，用于删除已有的数字人直播间。
                 * @param req DeleteLiveAvatarRoomRequest
                 * @return DeleteLiveAvatarRoomOutcome
                 */
                DeleteLiveAvatarRoomOutcome DeleteLiveAvatarRoom(const Model::DeleteLiveAvatarRoomRequest &request);
                void DeleteLiveAvatarRoomAsync(const Model::DeleteLiveAvatarRoomRequest& request, const DeleteLiveAvatarRoomAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteLiveAvatarRoomOutcomeCallable DeleteLiveAvatarRoomCallable(const Model::DeleteLiveAvatarRoomRequest& request);

                /**
                 *调用该接口，用于删除已有的数字人直播间里面的话术。
                 * @param req DeleteLiveAvatarScriptRequest
                 * @return DeleteLiveAvatarScriptOutcome
                 */
                DeleteLiveAvatarScriptOutcome DeleteLiveAvatarScript(const Model::DeleteLiveAvatarScriptRequest &request);
                void DeleteLiveAvatarScriptAsync(const Model::DeleteLiveAvatarScriptRequest& request, const DeleteLiveAvatarScriptAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteLiveAvatarScriptOutcomeCallable DeleteLiveAvatarScriptCallable(const Model::DeleteLiveAvatarScriptRequest& request);

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
                 *删除已添加的直播域名
                 * @param req DeleteLiveDomainRequest
                 * @return DeleteLiveDomainOutcome
                 */
                DeleteLiveDomainOutcome DeleteLiveDomain(const Model::DeleteLiveDomainRequest &request);
                void DeleteLiveDomainAsync(const Model::DeleteLiveDomainRequest& request, const DeleteLiveDomainAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteLiveDomainOutcomeCallable DeleteLiveDomainCallable(const Model::DeleteLiveDomainRequest& request);

                /**
                 *删除直播垫片规则。
                 * @param req DeleteLivePadRuleRequest
                 * @return DeleteLivePadRuleOutcome
                 */
                DeleteLivePadRuleOutcome DeleteLivePadRule(const Model::DeleteLivePadRuleRequest &request);
                void DeleteLivePadRuleAsync(const Model::DeleteLivePadRuleRequest& request, const DeleteLivePadRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteLivePadRuleOutcomeCallable DeleteLivePadRuleCallable(const Model::DeleteLivePadRuleRequest& request);

                /**
                 *删除直播垫片模板。
                 * @param req DeleteLivePadTemplateRequest
                 * @return DeleteLivePadTemplateOutcome
                 */
                DeleteLivePadTemplateOutcome DeleteLivePadTemplate(const Model::DeleteLivePadTemplateRequest &request);
                void DeleteLivePadTemplateAsync(const Model::DeleteLivePadTemplateRequest& request, const DeleteLivePadTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteLivePadTemplateOutcomeCallable DeleteLivePadTemplateCallable(const Model::DeleteLivePadTemplateRequest& request);

                /**
                 *删除接口 CreateLivePullStreamTask 创建的拉流任务。
注意：
1. 入参中的 TaskId 为 CreateLivePullStreamTask 接口创建时返回的TaskId。
2. 也可通过 DescribeLivePullStreamTasks 进行查询创建的任务。
                 * @param req DeleteLivePullStreamTaskRequest
                 * @return DeleteLivePullStreamTaskOutcome
                 */
                DeleteLivePullStreamTaskOutcome DeleteLivePullStreamTask(const Model::DeleteLivePullStreamTaskRequest &request);
                void DeleteLivePullStreamTaskAsync(const Model::DeleteLivePullStreamTaskRequest& request, const DeleteLivePullStreamTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteLivePullStreamTaskOutcomeCallable DeleteLivePullStreamTaskCallable(const Model::DeleteLivePullStreamTaskRequest& request);

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
                 *该接口用来删除直播流监播任务。
                 * @param req DeleteLiveStreamMonitorRequest
                 * @return DeleteLiveStreamMonitorOutcome
                 */
                DeleteLiveStreamMonitorOutcome DeleteLiveStreamMonitor(const Model::DeleteLiveStreamMonitorRequest &request);
                void DeleteLiveStreamMonitorAsync(const Model::DeleteLiveStreamMonitorRequest& request, const DeleteLiveStreamMonitorAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteLiveStreamMonitorOutcomeCallable DeleteLiveStreamMonitorCallable(const Model::DeleteLiveStreamMonitorRequest& request);

                /**
                 *删除直播时移规则。
                 * @param req DeleteLiveTimeShiftRuleRequest
                 * @return DeleteLiveTimeShiftRuleOutcome
                 */
                DeleteLiveTimeShiftRuleOutcome DeleteLiveTimeShiftRule(const Model::DeleteLiveTimeShiftRuleRequest &request);
                void DeleteLiveTimeShiftRuleAsync(const Model::DeleteLiveTimeShiftRuleRequest& request, const DeleteLiveTimeShiftRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteLiveTimeShiftRuleOutcomeCallable DeleteLiveTimeShiftRuleCallable(const Model::DeleteLiveTimeShiftRuleRequest& request);

                /**
                 *删除直播时移模板。
                 * @param req DeleteLiveTimeShiftTemplateRequest
                 * @return DeleteLiveTimeShiftTemplateOutcome
                 */
                DeleteLiveTimeShiftTemplateOutcome DeleteLiveTimeShiftTemplate(const Model::DeleteLiveTimeShiftTemplateRequest &request);
                void DeleteLiveTimeShiftTemplateAsync(const Model::DeleteLiveTimeShiftTemplateRequest& request, const DeleteLiveTimeShiftTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteLiveTimeShiftTemplateOutcomeCallable DeleteLiveTimeShiftTemplateCallable(const Model::DeleteLiveTimeShiftTemplateRequest& request);

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
                 *删除直播拉流配置。该接口已下线,请使用新接口 DeleteLivePullStreamTask。
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
                 *删除截图任务配置。删除操作不影响正在运行当中的任务，仅对删除之后新的推流有效。
                 * @param req DeleteScreenshotTaskRequest
                 * @return DeleteScreenshotTaskOutcome
                 */
                DeleteScreenshotTaskOutcome DeleteScreenshotTask(const Model::DeleteScreenshotTaskRequest &request);
                void DeleteScreenshotTaskAsync(const Model::DeleteScreenshotTaskRequest& request, const DeleteScreenshotTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteScreenshotTaskOutcomeCallable DeleteScreenshotTaskCallable(const Model::DeleteScreenshotTaskRequest& request);

                /**
                 *查询视频转绘任务
                 * @param req DescribeAIGCTaskStatusRequest
                 * @return DescribeAIGCTaskStatusOutcome
                 */
                DescribeAIGCTaskStatusOutcome DescribeAIGCTaskStatus(const Model::DescribeAIGCTaskStatusRequest &request);
                void DescribeAIGCTaskStatusAsync(const Model::DescribeAIGCTaskStatusRequest& request, const DescribeAIGCTaskStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeAIGCTaskStatusOutcomeCallable DescribeAIGCTaskStatusCallable(const Model::DescribeAIGCTaskStatusRequest& request);

                /**
                 *该接口为监控数据接口，数据采集及统计方式与计费数据不同，仅供运营分析使用，不能用于计费对账参考。
输入某个时间点（1分钟维度），查询该时间点所有流的下行信息。
                 * @param req DescribeAllStreamPlayInfoListRequest
                 * @return DescribeAllStreamPlayInfoListOutcome
                 */
                DescribeAllStreamPlayInfoListOutcome DescribeAllStreamPlayInfoList(const Model::DescribeAllStreamPlayInfoListRequest &request);
                void DescribeAllStreamPlayInfoListAsync(const Model::DescribeAllStreamPlayInfoListRequest& request, const DescribeAllStreamPlayInfoListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeAllStreamPlayInfoListOutcomeCallable DescribeAllStreamPlayInfoListCallable(const Model::DescribeAllStreamPlayInfoListRequest& request);

                /**
                 *海外分区直播播放带宽和流量数据查询。
                 * @param req DescribeAreaBillBandwidthAndFluxListRequest
                 * @return DescribeAreaBillBandwidthAndFluxListOutcome
                 */
                DescribeAreaBillBandwidthAndFluxListOutcome DescribeAreaBillBandwidthAndFluxList(const Model::DescribeAreaBillBandwidthAndFluxListRequest &request);
                void DescribeAreaBillBandwidthAndFluxListAsync(const Model::DescribeAreaBillBandwidthAndFluxListRequest& request, const DescribeAreaBillBandwidthAndFluxListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeAreaBillBandwidthAndFluxListOutcomeCallable DescribeAreaBillBandwidthAndFluxListCallable(const Model::DescribeAreaBillBandwidthAndFluxListRequest& request);

                /**
                 *获取关键词信息。
                 * @param req DescribeAuditKeywordsRequest
                 * @return DescribeAuditKeywordsOutcome
                 */
                DescribeAuditKeywordsOutcome DescribeAuditKeywords(const Model::DescribeAuditKeywordsRequest &request);
                void DescribeAuditKeywordsAsync(const Model::DescribeAuditKeywordsRequest& request, const DescribeAuditKeywordsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeAuditKeywordsOutcomeCallable DescribeAuditKeywordsCallable(const Model::DescribeAuditKeywordsRequest& request);

                /**
                 *返回正在直播中的流列表。适用于推流成功后查询在线流信息。

注意：
1. 该接口仅提供辅助查询在线流列表功能，业务重要场景不可强依赖该接口。
2. 该接口仅适用于流数少于2万路的情况，对于流数较大用户请联系售后。
                 * @param req DescribeBackupStreamListRequest
                 * @return DescribeBackupStreamListOutcome
                 */
                DescribeBackupStreamListOutcome DescribeBackupStreamList(const Model::DescribeBackupStreamListRequest &request);
                void DescribeBackupStreamListAsync(const Model::DescribeBackupStreamListRequest& request, const DescribeBackupStreamListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeBackupStreamListOutcomeCallable DescribeBackupStreamListCallable(const Model::DescribeBackupStreamListRequest& request);

                /**
                 *直播播放带宽和流量数据查询。
                 * @param req DescribeBillBandwidthAndFluxListRequest
                 * @return DescribeBillBandwidthAndFluxListOutcome
                 */
                DescribeBillBandwidthAndFluxListOutcome DescribeBillBandwidthAndFluxList(const Model::DescribeBillBandwidthAndFluxListRequest &request);
                void DescribeBillBandwidthAndFluxListAsync(const Model::DescribeBillBandwidthAndFluxListRequest& request, const DescribeBillBandwidthAndFluxListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeBillBandwidthAndFluxListOutcomeCallable DescribeBillBandwidthAndFluxListCallable(const Model::DescribeBillBandwidthAndFluxListRequest& request);

                /**
                 *该接口为监控数据接口，数据采集及统计方式与计费数据不同，仅供运营分析使用，不能用于计费对账参考。
用于查询回调事件。
                 * @param req DescribeCallbackRecordsListRequest
                 * @return DescribeCallbackRecordsListOutcome
                 */
                DescribeCallbackRecordsListOutcome DescribeCallbackRecordsList(const Model::DescribeCallbackRecordsListRequest &request);
                void DescribeCallbackRecordsListAsync(const Model::DescribeCallbackRecordsListRequest& request, const DescribeCallbackRecordsListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeCallbackRecordsListOutcomeCallable DescribeCallbackRecordsListCallable(const Model::DescribeCallbackRecordsListRequest& request);

                /**
                 *查询导播台信息接口，用来查询导播台状态、描述、输出长、宽等信息
                 * @param req DescribeCasterRequest
                 * @return DescribeCasterOutcome
                 */
                DescribeCasterOutcome DescribeCaster(const Model::DescribeCasterRequest &request);
                void DescribeCasterAsync(const Model::DescribeCasterRequest& request, const DescribeCasterAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeCasterOutcomeCallable DescribeCasterCallable(const Model::DescribeCasterRequest& request);

                /**
                 *查询导播台PVW任务和PGM任务的展示信息，包括使用的布局、水印、字幕等信息。
                 * @param req DescribeCasterDisplayInfoRequest
                 * @return DescribeCasterDisplayInfoOutcome
                 */
                DescribeCasterDisplayInfoOutcome DescribeCasterDisplayInfo(const Model::DescribeCasterDisplayInfoRequest &request);
                void DescribeCasterDisplayInfoAsync(const Model::DescribeCasterDisplayInfoRequest& request, const DescribeCasterDisplayInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeCasterDisplayInfoOutcomeCallable DescribeCasterDisplayInfoCallable(const Model::DescribeCasterDisplayInfoRequest& request);

                /**
                 *该接口用查询导播台的备播状态
                 * @param req DescribeCasterEmergencyStatusRequest
                 * @return DescribeCasterEmergencyStatusOutcome
                 */
                DescribeCasterEmergencyStatusOutcome DescribeCasterEmergencyStatus(const Model::DescribeCasterEmergencyStatusRequest &request);
                void DescribeCasterEmergencyStatusAsync(const Model::DescribeCasterEmergencyStatusRequest& request, const DescribeCasterEmergencyStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeCasterEmergencyStatusOutcomeCallable DescribeCasterEmergencyStatusCallable(const Model::DescribeCasterEmergencyStatusRequest& request);

                /**
                 *该接口用来查询导播台的输入源信息列表。
                 * @param req DescribeCasterInputInfosRequest
                 * @return DescribeCasterInputInfosOutcome
                 */
                DescribeCasterInputInfosOutcome DescribeCasterInputInfos(const Model::DescribeCasterInputInfosRequest &request);
                void DescribeCasterInputInfosAsync(const Model::DescribeCasterInputInfosRequest& request, const DescribeCasterInputInfosAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeCasterInputInfosOutcomeCallable DescribeCasterInputInfosCallable(const Model::DescribeCasterInputInfosRequest& request);

                /**
                 *该接口用来查询某个导播台的布局列表
                 * @param req DescribeCasterLayoutInfosRequest
                 * @return DescribeCasterLayoutInfosOutcome
                 */
                DescribeCasterLayoutInfosOutcome DescribeCasterLayoutInfos(const Model::DescribeCasterLayoutInfosRequest &request);
                void DescribeCasterLayoutInfosAsync(const Model::DescribeCasterLayoutInfosRequest& request, const DescribeCasterLayoutInfosAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeCasterLayoutInfosOutcomeCallable DescribeCasterLayoutInfosCallable(const Model::DescribeCasterLayoutInfosRequest& request);

                /**
                 *该接口用来查询账号下所有的导播台列表
                 * @param req DescribeCasterListRequest
                 * @return DescribeCasterListOutcome
                 */
                DescribeCasterListOutcome DescribeCasterList(const Model::DescribeCasterListRequest &request);
                void DescribeCasterListAsync(const Model::DescribeCasterListRequest& request, const DescribeCasterListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeCasterListOutcomeCallable DescribeCasterListCallable(const Model::DescribeCasterListRequest& request);

                /**
                 *该接口用来查询某个导播台的水印列表。
                 * @param req DescribeCasterMarkPicInfosRequest
                 * @return DescribeCasterMarkPicInfosOutcome
                 */
                DescribeCasterMarkPicInfosOutcome DescribeCasterMarkPicInfos(const Model::DescribeCasterMarkPicInfosRequest &request);
                void DescribeCasterMarkPicInfosAsync(const Model::DescribeCasterMarkPicInfosRequest& request, const DescribeCasterMarkPicInfosAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeCasterMarkPicInfosOutcomeCallable DescribeCasterMarkPicInfosCallable(const Model::DescribeCasterMarkPicInfosRequest& request);

                /**
                 *该接口用来查询某个导播台的文本列表。
                 * @param req DescribeCasterMarkWordInfosRequest
                 * @return DescribeCasterMarkWordInfosOutcome
                 */
                DescribeCasterMarkWordInfosOutcome DescribeCasterMarkWordInfos(const Model::DescribeCasterMarkWordInfosRequest &request);
                void DescribeCasterMarkWordInfosAsync(const Model::DescribeCasterMarkWordInfosRequest& request, const DescribeCasterMarkWordInfosAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeCasterMarkWordInfosOutcomeCallable DescribeCasterMarkWordInfosCallable(const Model::DescribeCasterMarkWordInfosRequest& request);

                /**
                 *该接口用来查询某个导播台的推流信息列表。
                 * @param req DescribeCasterOutputInfosRequest
                 * @return DescribeCasterOutputInfosOutcome
                 */
                DescribeCasterOutputInfosOutcome DescribeCasterOutputInfos(const Model::DescribeCasterOutputInfosRequest &request);
                void DescribeCasterOutputInfosAsync(const Model::DescribeCasterOutputInfosRequest& request, const DescribeCasterOutputInfosAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeCasterOutputInfosOutcomeCallable DescribeCasterOutputInfosCallable(const Model::DescribeCasterOutputInfosRequest& request);

                /**
                 *该接口用来获取导播台视频流的播放url，用来在页面上拉流展示。
                 * @param req DescribeCasterPlayUrlRequest
                 * @return DescribeCasterPlayUrlOutcome
                 */
                DescribeCasterPlayUrlOutcome DescribeCasterPlayUrl(const Model::DescribeCasterPlayUrlRequest &request);
                void DescribeCasterPlayUrlAsync(const Model::DescribeCasterPlayUrlRequest& request, const DescribeCasterPlayUrlAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeCasterPlayUrlOutcomeCallable DescribeCasterPlayUrlCallable(const Model::DescribeCasterPlayUrlRequest& request);

                /**
                 *该接口用来获取所有的转场名称及其对应的素材url。
                 * @param req DescribeCasterTransitionTypesRequest
                 * @return DescribeCasterTransitionTypesOutcome
                 */
                DescribeCasterTransitionTypesOutcome DescribeCasterTransitionTypes(const Model::DescribeCasterTransitionTypesRequest &request);
                void DescribeCasterTransitionTypesAsync(const Model::DescribeCasterTransitionTypesRequest& request, const DescribeCasterTransitionTypesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeCasterTransitionTypesOutcomeCallable DescribeCasterTransitionTypesCallable(const Model::DescribeCasterTransitionTypesRequest& request);

                /**
                 *本接口用来查询当前APPID导播台业务状态
                 * @param req DescribeCasterUserStatusRequest
                 * @return DescribeCasterUserStatusOutcome
                 */
                DescribeCasterUserStatusOutcome DescribeCasterUserStatus(const Model::DescribeCasterUserStatusRequest &request);
                void DescribeCasterUserStatusAsync(const Model::DescribeCasterUserStatusRequest& request, const DescribeCasterUserStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeCasterUserStatusOutcomeCallable DescribeCasterUserStatusCallable(const Model::DescribeCasterUserStatusRequest& request);

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
                 *批量获取转推日志的URL。
                 * @param req DescribeDeliverLogDownListRequest
                 * @return DescribeDeliverLogDownListOutcome
                 */
                DescribeDeliverLogDownListOutcome DescribeDeliverLogDownList(const Model::DescribeDeliverLogDownListRequest &request);
                void DescribeDeliverLogDownListAsync(const Model::DescribeDeliverLogDownListRequest& request, const DescribeDeliverLogDownListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeDeliverLogDownListOutcomeCallable DescribeDeliverLogDownListCallable(const Model::DescribeDeliverLogDownListRequest& request);

                /**
                 *该接口为监控数据接口，数据采集及统计方式与计费数据不同，仅供运营分析使用，不能用于计费对账参考。
查询按省份和运营商分组的下行播放数据。
                 * @param req DescribeGroupProIspPlayInfoListRequest
                 * @return DescribeGroupProIspPlayInfoListOutcome
                 */
                DescribeGroupProIspPlayInfoListOutcome DescribeGroupProIspPlayInfoList(const Model::DescribeGroupProIspPlayInfoListRequest &request);
                void DescribeGroupProIspPlayInfoListAsync(const Model::DescribeGroupProIspPlayInfoListRequest& request, const DescribeGroupProIspPlayInfoListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeGroupProIspPlayInfoListOutcomeCallable DescribeGroupProIspPlayInfoListCallable(const Model::DescribeGroupProIspPlayInfoListRequest& request);

                /**
                 *该接口为监控数据接口，数据采集及统计方式与计费数据不同，仅供运营分析使用，不能用于计费对账参考。
查询某段时间内5分钟粒度的各播放http状态码的个数。
备注：数据延迟1小时，如10:00-10:59点的数据12点才能查到。
                 * @param req DescribeHttpStatusInfoListRequest
                 * @return DescribeHttpStatusInfoListOutcome
                 */
                DescribeHttpStatusInfoListOutcome DescribeHttpStatusInfoList(const Model::DescribeHttpStatusInfoListRequest &request);
                void DescribeHttpStatusInfoListAsync(const Model::DescribeHttpStatusInfoListRequest& request, const DescribeHttpStatusInfoListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeHttpStatusInfoListOutcomeCallable DescribeHttpStatusInfoListCallable(const Model::DescribeHttpStatusInfoListRequest& request);

                /**
                 *调用该接口，获取可用的数字人背景列表信息列表。根据入参，可返回官方预设背景，以及用户上传背景。
                 * @param req DescribeLiveAvatarBackgroundListRequest
                 * @return DescribeLiveAvatarBackgroundListOutcome
                 */
                DescribeLiveAvatarBackgroundListOutcome DescribeLiveAvatarBackgroundList(const Model::DescribeLiveAvatarBackgroundListRequest &request);
                void DescribeLiveAvatarBackgroundListAsync(const Model::DescribeLiveAvatarBackgroundListRequest& request, const DescribeLiveAvatarBackgroundListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeLiveAvatarBackgroundListOutcomeCallable DescribeLiveAvatarBackgroundListCallable(const Model::DescribeLiveAvatarBackgroundListRequest& request);

                /**
                 *调用该接口，获取可用的数字人形象信息列表。包括官方预制形象，以及个人定制形象。
                 * @param req DescribeLiveAvatarImageListRequest
                 * @return DescribeLiveAvatarImageListOutcome
                 */
                DescribeLiveAvatarImageListOutcome DescribeLiveAvatarImageList(const Model::DescribeLiveAvatarImageListRequest &request);
                void DescribeLiveAvatarImageListAsync(const Model::DescribeLiveAvatarImageListRequest& request, const DescribeLiveAvatarImageListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeLiveAvatarImageListOutcomeCallable DescribeLiveAvatarImageListCallable(const Model::DescribeLiveAvatarImageListRequest& request);

                /**
                 *调用该接口，查询数字人直播间信息列表。
                 * @param req DescribeLiveAvatarRoomsRequest
                 * @return DescribeLiveAvatarRoomsOutcome
                 */
                DescribeLiveAvatarRoomsOutcome DescribeLiveAvatarRooms(const Model::DescribeLiveAvatarRoomsRequest &request);
                void DescribeLiveAvatarRoomsAsync(const Model::DescribeLiveAvatarRoomsRequest& request, const DescribeLiveAvatarRoomsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeLiveAvatarRoomsOutcomeCallable DescribeLiveAvatarRoomsCallable(const Model::DescribeLiveAvatarRoomsRequest& request);

                /**
                 *调用该接口，查询数字人直播间话术信息列表。新增产品ID参数
                 * @param req DescribeLiveAvatarScriptsRequest
                 * @return DescribeLiveAvatarScriptsOutcome
                 */
                DescribeLiveAvatarScriptsOutcome DescribeLiveAvatarScripts(const Model::DescribeLiveAvatarScriptsRequest &request);
                void DescribeLiveAvatarScriptsAsync(const Model::DescribeLiveAvatarScriptsRequest& request, const DescribeLiveAvatarScriptsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeLiveAvatarScriptsOutcomeCallable DescribeLiveAvatarScriptsCallable(const Model::DescribeLiveAvatarScriptsRequest& request);

                /**
                 *调用该接口，用于查询临时驱动数字人播报话术列表。
                 * @param req DescribeLiveAvatarTemporaryScriptListRequest
                 * @return DescribeLiveAvatarTemporaryScriptListOutcome
                 */
                DescribeLiveAvatarTemporaryScriptListOutcome DescribeLiveAvatarTemporaryScriptList(const Model::DescribeLiveAvatarTemporaryScriptListRequest &request);
                void DescribeLiveAvatarTemporaryScriptListAsync(const Model::DescribeLiveAvatarTemporaryScriptListRequest& request, const DescribeLiveAvatarTemporaryScriptListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeLiveAvatarTemporaryScriptListOutcomeCallable DescribeLiveAvatarTemporaryScriptListCallable(const Model::DescribeLiveAvatarTemporaryScriptListRequest& request);

                /**
                 *调用该接口，获取可用的数字人声音信息列表。包括官方预制音色，以及个人复刻音色。
                 * @param req DescribeLiveAvatarTimbreListRequest
                 * @return DescribeLiveAvatarTimbreListOutcome
                 */
                DescribeLiveAvatarTimbreListOutcome DescribeLiveAvatarTimbreList(const Model::DescribeLiveAvatarTimbreListRequest &request);
                void DescribeLiveAvatarTimbreListAsync(const Model::DescribeLiveAvatarTimbreListRequest& request, const DescribeLiveAvatarTimbreListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeLiveAvatarTimbreListOutcomeCallable DescribeLiveAvatarTimbreListCallable(const Model::DescribeLiveAvatarTimbreListRequest& request);

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
                 *使用该接口查询云端特效配置信息。
                 * @param req DescribeLiveCloudEffectConfigRequest
                 * @return DescribeLiveCloudEffectConfigOutcome
                 */
                DescribeLiveCloudEffectConfigOutcome DescribeLiveCloudEffectConfig(const Model::DescribeLiveCloudEffectConfigRequest &request);
                void DescribeLiveCloudEffectConfigAsync(const Model::DescribeLiveCloudEffectConfigRequest& request, const DescribeLiveCloudEffectConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeLiveCloudEffectConfigOutcomeCallable DescribeLiveCloudEffectConfigCallable(const Model::DescribeLiveCloudEffectConfigRequest& request);

                /**
                 *使用该接口查询云端特效列表，特效列表中包含一部分官方精品特效，同时包含用户自定义生成的特效。
                 * @param req DescribeLiveCloudEffectListRequest
                 * @return DescribeLiveCloudEffectListOutcome
                 */
                DescribeLiveCloudEffectListOutcome DescribeLiveCloudEffectList(const Model::DescribeLiveCloudEffectListRequest &request);
                void DescribeLiveCloudEffectListAsync(const Model::DescribeLiveCloudEffectListRequest& request, const DescribeLiveCloudEffectListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeLiveCloudEffectListOutcomeCallable DescribeLiveCloudEffectListCallable(const Model::DescribeLiveCloudEffectListRequest& request);

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
                 *查询绑定证书的域名列表。
                 * @param req DescribeLiveDomainCertBindingsRequest
                 * @return DescribeLiveDomainCertBindingsOutcome
                 */
                DescribeLiveDomainCertBindingsOutcome DescribeLiveDomainCertBindings(const Model::DescribeLiveDomainCertBindingsRequest &request);
                void DescribeLiveDomainCertBindingsAsync(const Model::DescribeLiveDomainCertBindingsRequest& request, const DescribeLiveDomainCertBindingsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeLiveDomainCertBindingsOutcomeCallable DescribeLiveDomainCertBindingsCallable(const Model::DescribeLiveDomainCertBindingsRequest& request);

                /**
                 *该接口为监控数据接口，数据采集及统计方式与计费数据不同，仅供运营分析使用，不能用于计费对账参考。
查询实时的域名维度下行播放数据，由于数据处理有耗时，接口默认查询4分钟前的准实时数据。
                 * @param req DescribeLiveDomainPlayInfoListRequest
                 * @return DescribeLiveDomainPlayInfoListOutcome
                 */
                DescribeLiveDomainPlayInfoListOutcome DescribeLiveDomainPlayInfoList(const Model::DescribeLiveDomainPlayInfoListRequest &request);
                void DescribeLiveDomainPlayInfoListAsync(const Model::DescribeLiveDomainPlayInfoListRequest& request, const DescribeLiveDomainPlayInfoListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeLiveDomainPlayInfoListOutcomeCallable DescribeLiveDomainPlayInfoListCallable(const Model::DescribeLiveDomainPlayInfoListRequest& request);

                /**
                 *查询直播域名 Referer 黑白名单配置。
由于 Referer 信息包含在 http 协议中，在开启配置后，播放协议为 rtmp 或 WebRTC 不会校验 Referer 配置，仍可正常播放。如需配置 Referer 鉴权建议使用 http-flv 或 http-hls 协议播放。
                 * @param req DescribeLiveDomainRefererRequest
                 * @return DescribeLiveDomainRefererOutcome
                 */
                DescribeLiveDomainRefererOutcome DescribeLiveDomainReferer(const Model::DescribeLiveDomainRefererRequest &request);
                void DescribeLiveDomainRefererAsync(const Model::DescribeLiveDomainRefererRequest& request, const DescribeLiveDomainRefererAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeLiveDomainRefererOutcomeCallable DescribeLiveDomainRefererCallable(const Model::DescribeLiveDomainRefererRequest& request);

                /**
                 *根据域名状态、类型等信息查询用户的域名信息。
                 * @param req DescribeLiveDomainsRequest
                 * @return DescribeLiveDomainsOutcome
                 */
                DescribeLiveDomainsOutcome DescribeLiveDomains(const Model::DescribeLiveDomainsRequest &request);
                void DescribeLiveDomainsAsync(const Model::DescribeLiveDomainsRequest& request, const DescribeLiveDomainsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeLiveDomainsOutcomeCallable DescribeLiveDomainsCallable(const Model::DescribeLiveDomainsRequest& request);

                /**
                 *查询直播增强用量明细信息。
                 * @param req DescribeLiveEnhanceInfoListRequest
                 * @return DescribeLiveEnhanceInfoListOutcome
                 */
                DescribeLiveEnhanceInfoListOutcome DescribeLiveEnhanceInfoList(const Model::DescribeLiveEnhanceInfoListRequest &request);
                void DescribeLiveEnhanceInfoListAsync(const Model::DescribeLiveEnhanceInfoListRequest& request, const DescribeLiveEnhanceInfoListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeLiveEnhanceInfoListOutcomeCallable DescribeLiveEnhanceInfoListCallable(const Model::DescribeLiveEnhanceInfoListRequest& request);

                /**
                 *查询用户套餐包总量、使用量、剩余量、包状态、购买时间和过期时间等。
                 * @param req DescribeLivePackageInfoRequest
                 * @return DescribeLivePackageInfoOutcome
                 */
                DescribeLivePackageInfoOutcome DescribeLivePackageInfo(const Model::DescribeLivePackageInfoRequest &request);
                void DescribeLivePackageInfoAsync(const Model::DescribeLivePackageInfoRequest& request, const DescribeLivePackageInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeLivePackageInfoOutcomeCallable DescribeLivePackageInfoCallable(const Model::DescribeLivePackageInfoRequest& request);

                /**
                 *获取直播垫片规则列表。
                 * @param req DescribeLivePadRulesRequest
                 * @return DescribeLivePadRulesOutcome
                 */
                DescribeLivePadRulesOutcome DescribeLivePadRules(const Model::DescribeLivePadRulesRequest &request);
                void DescribeLivePadRulesAsync(const Model::DescribeLivePadRulesRequest& request, const DescribeLivePadRulesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeLivePadRulesOutcomeCallable DescribeLivePadRulesCallable(const Model::DescribeLivePadRulesRequest& request);

                /**
                 *使用该接口查询垫片流列表。垫片流状态更新存在一定延迟，可间隔30秒以上查询，避免频繁查询该接口。
                 * @param req DescribeLivePadStreamListRequest
                 * @return DescribeLivePadStreamListOutcome
                 */
                DescribeLivePadStreamListOutcome DescribeLivePadStreamList(const Model::DescribeLivePadStreamListRequest &request);
                void DescribeLivePadStreamListAsync(const Model::DescribeLivePadStreamListRequest& request, const DescribeLivePadStreamListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeLivePadStreamListOutcomeCallable DescribeLivePadStreamListCallable(const Model::DescribeLivePadStreamListRequest& request);

                /**
                 *获取单个直播垫片模板
                 * @param req DescribeLivePadTemplateRequest
                 * @return DescribeLivePadTemplateOutcome
                 */
                DescribeLivePadTemplateOutcome DescribeLivePadTemplate(const Model::DescribeLivePadTemplateRequest &request);
                void DescribeLivePadTemplateAsync(const Model::DescribeLivePadTemplateRequest& request, const DescribeLivePadTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeLivePadTemplateOutcomeCallable DescribeLivePadTemplateCallable(const Model::DescribeLivePadTemplateRequest& request);

                /**
                 *获取直播垫片模板。
                 * @param req DescribeLivePadTemplatesRequest
                 * @return DescribeLivePadTemplatesOutcome
                 */
                DescribeLivePadTemplatesOutcome DescribeLivePadTemplates(const Model::DescribeLivePadTemplatesRequest &request);
                void DescribeLivePadTemplatesAsync(const Model::DescribeLivePadTemplatesRequest& request, const DescribeLivePadTemplatesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeLivePadTemplatesOutcomeCallable DescribeLivePadTemplatesCallable(const Model::DescribeLivePadTemplatesRequest& request);

                /**
                 *查询播放鉴权key。
                 * @param req DescribeLivePlayAuthKeyRequest
                 * @return DescribeLivePlayAuthKeyOutcome
                 */
                DescribeLivePlayAuthKeyOutcome DescribeLivePlayAuthKey(const Model::DescribeLivePlayAuthKeyRequest &request);
                void DescribeLivePlayAuthKeyAsync(const Model::DescribeLivePlayAuthKeyRequest& request, const DescribeLivePlayAuthKeyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeLivePlayAuthKeyOutcomeCallable DescribeLivePlayAuthKeyCallable(const Model::DescribeLivePlayAuthKeyRequest& request);

                /**
                 *查询直播拉流任务状态信息。
                 * @param req DescribeLivePullStreamTaskStatusRequest
                 * @return DescribeLivePullStreamTaskStatusOutcome
                 */
                DescribeLivePullStreamTaskStatusOutcome DescribeLivePullStreamTaskStatus(const Model::DescribeLivePullStreamTaskStatusRequest &request);
                void DescribeLivePullStreamTaskStatusAsync(const Model::DescribeLivePullStreamTaskStatusRequest& request, const DescribeLivePullStreamTaskStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeLivePullStreamTaskStatusOutcomeCallable DescribeLivePullStreamTaskStatusCallable(const Model::DescribeLivePullStreamTaskStatusRequest& request);

                /**
                 *查询使用 CreateLivePullStreamTask 接口创建的直播拉流任务。
排序方式：默认按更新时间 倒序排列。
                 * @param req DescribeLivePullStreamTasksRequest
                 * @return DescribeLivePullStreamTasksOutcome
                 */
                DescribeLivePullStreamTasksOutcome DescribeLivePullStreamTasks(const Model::DescribeLivePullStreamTasksRequest &request);
                void DescribeLivePullStreamTasksAsync(const Model::DescribeLivePullStreamTasksRequest& request, const DescribeLivePullStreamTasksAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeLivePullStreamTasksOutcomeCallable DescribeLivePullStreamTasksCallable(const Model::DescribeLivePullStreamTasksRequest& request);

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

注意：
1. 该接口提供离线推断流记录查询功能，不可作为重要业务场景强依赖接口。
2. 该接口可通过使用IsFilter进行过滤，返回推流历史记录。
                 * @param req DescribeLiveStreamEventListRequest
                 * @return DescribeLiveStreamEventListOutcome
                 */
                DescribeLiveStreamEventListOutcome DescribeLiveStreamEventList(const Model::DescribeLiveStreamEventListRequest &request);
                void DescribeLiveStreamEventListAsync(const Model::DescribeLiveStreamEventListRequest& request, const DescribeLiveStreamEventListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeLiveStreamEventListOutcomeCallable DescribeLiveStreamEventListCallable(const Model::DescribeLiveStreamEventListRequest& request);

                /**
                 *该接口用来查询某个特定监播任务的配置。
                 * @param req DescribeLiveStreamMonitorRequest
                 * @return DescribeLiveStreamMonitorOutcome
                 */
                DescribeLiveStreamMonitorOutcome DescribeLiveStreamMonitor(const Model::DescribeLiveStreamMonitorRequest &request);
                void DescribeLiveStreamMonitorAsync(const Model::DescribeLiveStreamMonitorRequest& request, const DescribeLiveStreamMonitorAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeLiveStreamMonitorOutcomeCallable DescribeLiveStreamMonitorCallable(const Model::DescribeLiveStreamMonitorRequest& request);

                /**
                 *该接口用来查询直播流监播任务配置的列表信息。
                 * @param req DescribeLiveStreamMonitorListRequest
                 * @return DescribeLiveStreamMonitorListOutcome
                 */
                DescribeLiveStreamMonitorListOutcome DescribeLiveStreamMonitorList(const Model::DescribeLiveStreamMonitorListRequest &request);
                void DescribeLiveStreamMonitorListAsync(const Model::DescribeLiveStreamMonitorListRequest& request, const DescribeLiveStreamMonitorListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeLiveStreamMonitorListOutcomeCallable DescribeLiveStreamMonitorListCallable(const Model::DescribeLiveStreamMonitorListRequest& request);

                /**
                 *返回正在直播中的流列表。适用于推流成功后查询在线流信息。

注意：
1. 该接口仅提供辅助查询在线流列表功能，业务重要场景不可强依赖该接口。
2. 该接口仅适用于流数少于2万路的情况，对于流数较大用户请联系售后。
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
                 *该接口为监控数据接口，数据采集及统计方式与计费数据不同，仅供运营分析使用，不能用于计费对账参考。
查询所有实时流的推流信息，包括客户端IP，服务端IP，帧率，码率，域名，开始推流时间。
                 * @param req DescribeLiveStreamPushInfoListRequest
                 * @return DescribeLiveStreamPushInfoListOutcome
                 */
                DescribeLiveStreamPushInfoListOutcome DescribeLiveStreamPushInfoList(const Model::DescribeLiveStreamPushInfoListRequest &request);
                void DescribeLiveStreamPushInfoListAsync(const Model::DescribeLiveStreamPushInfoListRequest& request, const DescribeLiveStreamPushInfoListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeLiveStreamPushInfoListOutcomeCallable DescribeLiveStreamPushInfoListCallable(const Model::DescribeLiveStreamPushInfoListRequest& request);

                /**
                 *返回直播中、无推流或者禁播等状态。

使用建议：
该接口提供实时流状态查询功能，鉴于网络抖动等一些不可抗因素，使用该接口作为判断主播是否开播等重要业务场景时，请参考以下使用建议。
1. 优先使用业务自身的房间开关播逻辑，判断主播是否在线，譬如客户端开播信令和主播在线心跳等。
2. 对于没有房间管理的直播场景，可以结合以下方案综合判断。
2.1 根据[推断流事件通知](/document/product/267/20388) 判断主播在线状态。
2.2 通过定时（间隔>1min）查询[直播中的流接口](/document/api/267/20472)，判断主播是否在线。
2.3 通过 本接口 查询直播流状态，判断主播是否在线。
2.4 以上任一方式判断为在线，都认为主播开播中，并且接口查询超时或解析异常时，也默认为在线，减少对业务的影响。
                 * @param req DescribeLiveStreamStateRequest
                 * @return DescribeLiveStreamStateOutcome
                 */
                DescribeLiveStreamStateOutcome DescribeLiveStreamState(const Model::DescribeLiveStreamStateRequest &request);
                void DescribeLiveStreamStateAsync(const Model::DescribeLiveStreamStateRequest& request, const DescribeLiveStreamStateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeLiveStreamStateOutcomeCallable DescribeLiveStreamStateCallable(const Model::DescribeLiveStreamStateRequest& request);

                /**
                 *提供给客户对账，按天统计，维度：推流域名、时移文件时长（累加）、配置天数（不累加）、时移总时长（累加）。
                 * @param req DescribeLiveTimeShiftBillInfoListRequest
                 * @return DescribeLiveTimeShiftBillInfoListOutcome
                 */
                DescribeLiveTimeShiftBillInfoListOutcome DescribeLiveTimeShiftBillInfoList(const Model::DescribeLiveTimeShiftBillInfoListRequest &request);
                void DescribeLiveTimeShiftBillInfoListAsync(const Model::DescribeLiveTimeShiftBillInfoListRequest& request, const DescribeLiveTimeShiftBillInfoListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeLiveTimeShiftBillInfoListOutcomeCallable DescribeLiveTimeShiftBillInfoListCallable(const Model::DescribeLiveTimeShiftBillInfoListRequest& request);

                /**
                 *获取直播时移规则列表。
                 * @param req DescribeLiveTimeShiftRulesRequest
                 * @return DescribeLiveTimeShiftRulesOutcome
                 */
                DescribeLiveTimeShiftRulesOutcome DescribeLiveTimeShiftRules(const Model::DescribeLiveTimeShiftRulesRequest &request);
                void DescribeLiveTimeShiftRulesAsync(const Model::DescribeLiveTimeShiftRulesRequest& request, const DescribeLiveTimeShiftRulesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeLiveTimeShiftRulesOutcomeCallable DescribeLiveTimeShiftRulesCallable(const Model::DescribeLiveTimeShiftRulesRequest& request);

                /**
                 *获取直播时移模板。
                 * @param req DescribeLiveTimeShiftTemplatesRequest
                 * @return DescribeLiveTimeShiftTemplatesOutcome
                 */
                DescribeLiveTimeShiftTemplatesOutcome DescribeLiveTimeShiftTemplates(const Model::DescribeLiveTimeShiftTemplatesRequest &request);
                void DescribeLiveTimeShiftTemplatesAsync(const Model::DescribeLiveTimeShiftTemplatesRequest& request, const DescribeLiveTimeShiftTemplatesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeLiveTimeShiftTemplatesOutcomeCallable DescribeLiveTimeShiftTemplatesCallable(const Model::DescribeLiveTimeShiftTemplatesRequest& request);

                /**
                 *支持直播时移写入量数据查询。
                 * @param req DescribeLiveTimeShiftWriteSizeInfoListRequest
                 * @return DescribeLiveTimeShiftWriteSizeInfoListOutcome
                 */
                DescribeLiveTimeShiftWriteSizeInfoListOutcome DescribeLiveTimeShiftWriteSizeInfoList(const Model::DescribeLiveTimeShiftWriteSizeInfoListRequest &request);
                void DescribeLiveTimeShiftWriteSizeInfoListAsync(const Model::DescribeLiveTimeShiftWriteSizeInfoListRequest& request, const DescribeLiveTimeShiftWriteSizeInfoListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeLiveTimeShiftWriteSizeInfoListOutcomeCallable DescribeLiveTimeShiftWriteSizeInfoListCallable(const Model::DescribeLiveTimeShiftWriteSizeInfoListRequest& request);

                /**
                 *该接口为监控数据接口，数据采集及统计方式与计费数据不同，仅供运营分析使用，不能用于计费对账参考。
支持查询某天或某段时间的转码详细信息。由于转码数据量较大，如果查询时间跨度太长可能会拉不到数据，可以尝试将查询时间范围缩小些再重试。
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
                 *查询转码总量数据，可查询近三个月内的数据。
注意：
如果是查询某一天内，则返回5分钟粒度数据；
如果是查询跨天或指定域名， 则返回1小时粒度数据。
                 * @param req DescribeLiveTranscodeTotalInfoRequest
                 * @return DescribeLiveTranscodeTotalInfoOutcome
                 */
                DescribeLiveTranscodeTotalInfoOutcome DescribeLiveTranscodeTotalInfo(const Model::DescribeLiveTranscodeTotalInfoRequest &request);
                void DescribeLiveTranscodeTotalInfoAsync(const Model::DescribeLiveTranscodeTotalInfoRequest& request, const DescribeLiveTranscodeTotalInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeLiveTranscodeTotalInfoOutcomeCallable DescribeLiveTranscodeTotalInfoCallable(const Model::DescribeLiveTranscodeTotalInfoRequest& request);

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
                 *P2P流数据查询接口，用来获取流量、卡播和起播信息。
                 * @param req DescribeLiveXP2PDetailInfoListRequest
                 * @return DescribeLiveXP2PDetailInfoListOutcome
                 */
                DescribeLiveXP2PDetailInfoListOutcome DescribeLiveXP2PDetailInfoList(const Model::DescribeLiveXP2PDetailInfoListRequest &request);
                void DescribeLiveXP2PDetailInfoListAsync(const Model::DescribeLiveXP2PDetailInfoListRequest& request, const DescribeLiveXP2PDetailInfoListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeLiveXP2PDetailInfoListOutcomeCallable DescribeLiveXP2PDetailInfoListCallable(const Model::DescribeLiveXP2PDetailInfoListRequest& request);

                /**
                 *批量获取日志URL。
日志数据打包存在一定延迟，24小时候数据包趋于完整。
                 * @param req DescribeLogDownloadListRequest
                 * @return DescribeLogDownloadListOutcome
                 */
                DescribeLogDownloadListOutcome DescribeLogDownloadList(const Model::DescribeLogDownloadListRequest &request);
                void DescribeLogDownloadListAsync(const Model::DescribeLogDownloadListRequest& request, const DescribeLogDownloadListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeLogDownloadListOutcomeCallable DescribeLogDownloadListCallable(const Model::DescribeLogDownloadListRequest& request);

                /**
                 *用来查询监播场次7天内的智能识别、断流、低帧率等信息的汇总报告。
                 * @param req DescribeMonitorReportRequest
                 * @return DescribeMonitorReportOutcome
                 */
                DescribeMonitorReportOutcome DescribeMonitorReport(const Model::DescribeMonitorReportRequest &request);
                void DescribeMonitorReportAsync(const Model::DescribeMonitorReportRequest& request, const DescribeMonitorReportAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeMonitorReportOutcomeCallable DescribeMonitorReportCallable(const Model::DescribeMonitorReportRequest& request);

                /**
                 *获取直播源站配置信息，支持直播原站格式。
                 * @param req DescribeOriginStreamInfoRequest
                 * @return DescribeOriginStreamInfoOutcome
                 */
                DescribeOriginStreamInfoOutcome DescribeOriginStreamInfo(const Model::DescribeOriginStreamInfoRequest &request);
                void DescribeOriginStreamInfoAsync(const Model::DescribeOriginStreamInfoRequest& request, const DescribeOriginStreamInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeOriginStreamInfoOutcomeCallable DescribeOriginStreamInfoCallable(const Model::DescribeOriginStreamInfoRequest& request);

                /**
                 *该接口为监控数据接口，数据采集及统计方式与计费数据不同，仅供运营分析使用，不能用于计费对账参考。
查询下行播放错误码信息，某段时间内1分钟粒度的各http错误码出现的次数，包括4xx，5xx。
                 * @param req DescribePlayErrorCodeDetailInfoListRequest
                 * @return DescribePlayErrorCodeDetailInfoListOutcome
                 */
                DescribePlayErrorCodeDetailInfoListOutcome DescribePlayErrorCodeDetailInfoList(const Model::DescribePlayErrorCodeDetailInfoListRequest &request);
                void DescribePlayErrorCodeDetailInfoListAsync(const Model::DescribePlayErrorCodeDetailInfoListRequest& request, const DescribePlayErrorCodeDetailInfoListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribePlayErrorCodeDetailInfoListOutcomeCallable DescribePlayErrorCodeDetailInfoListCallable(const Model::DescribePlayErrorCodeDetailInfoListRequest& request);

                /**
                 *该接口为监控数据接口，数据采集及统计方式与计费数据不同，仅供运营分析使用，不能用于计费对账参考。
查询下行播放错误码信息。
                 * @param req DescribePlayErrorCodeSumInfoListRequest
                 * @return DescribePlayErrorCodeSumInfoListOutcome
                 */
                DescribePlayErrorCodeSumInfoListOutcome DescribePlayErrorCodeSumInfoList(const Model::DescribePlayErrorCodeSumInfoListRequest &request);
                void DescribePlayErrorCodeSumInfoListAsync(const Model::DescribePlayErrorCodeSumInfoListRequest& request, const DescribePlayErrorCodeSumInfoListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribePlayErrorCodeSumInfoListOutcomeCallable DescribePlayErrorCodeSumInfoListCallable(const Model::DescribePlayErrorCodeSumInfoListRequest& request);

                /**
                 *该接口为监控数据接口，数据采集及统计方式与计费数据不同，仅供运营分析使用，不能用于计费对账参考。
查询某段时间内每个国家地区每个省份每个运营商的平均每秒流量，总流量，总请求数信息。
                 * @param req DescribeProIspPlaySumInfoListRequest
                 * @return DescribeProIspPlaySumInfoListOutcome
                 */
                DescribeProIspPlaySumInfoListOutcome DescribeProIspPlaySumInfoList(const Model::DescribeProIspPlaySumInfoListRequest &request);
                void DescribeProIspPlaySumInfoListAsync(const Model::DescribeProIspPlaySumInfoListRequest& request, const DescribeProIspPlaySumInfoListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeProIspPlaySumInfoListOutcomeCallable DescribeProIspPlaySumInfoListCallable(const Model::DescribeProIspPlaySumInfoListRequest& request);

                /**
                 *该接口为监控数据接口，数据采集及统计方式与计费数据不同，仅供运营分析使用，不能用于计费对账参考。
查询某省份某运营商下行播放数据，包括带宽，流量，请求数，并发连接数信息。
                 * @param req DescribeProvinceIspPlayInfoListRequest
                 * @return DescribeProvinceIspPlayInfoListOutcome
                 */
                DescribeProvinceIspPlayInfoListOutcome DescribeProvinceIspPlayInfoList(const Model::DescribeProvinceIspPlayInfoListRequest &request);
                void DescribeProvinceIspPlayInfoListAsync(const Model::DescribeProvinceIspPlayInfoListRequest& request, const DescribeProvinceIspPlayInfoListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeProvinceIspPlayInfoListOutcomeCallable DescribeProvinceIspPlayInfoListCallable(const Model::DescribeProvinceIspPlayInfoListRequest& request);

                /**
                 *查询直播拉流配置。该接口已下线,请使用新接口 DescribeLivePullStreamTasks。
                 * @param req DescribePullStreamConfigsRequest
                 * @return DescribePullStreamConfigsOutcome
                 */
                DescribePullStreamConfigsOutcome DescribePullStreamConfigs(const Model::DescribePullStreamConfigsRequest &request);
                void DescribePullStreamConfigsAsync(const Model::DescribePullStreamConfigsRequest& request, const DescribePullStreamConfigsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribePullStreamConfigsOutcomeCallable DescribePullStreamConfigsCallable(const Model::DescribePullStreamConfigsRequest& request);

                /**
                 *查询拉流转推任务的时长信息。
                 * @param req DescribePullTransformPushInfoRequest
                 * @return DescribePullTransformPushInfoOutcome
                 */
                DescribePullTransformPushInfoOutcome DescribePullTransformPushInfo(const Model::DescribePullTransformPushInfoRequest &request);
                void DescribePullTransformPushInfoAsync(const Model::DescribePullTransformPushInfoRequest& request, const DescribePullTransformPushInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribePullTransformPushInfoOutcomeCallable DescribePullTransformPushInfoCallable(const Model::DescribePullTransformPushInfoRequest& request);

                /**
                 *查询拉流转推任务流数据统计信息。
                 * @param req DescribePullTransformPushInfoListRequest
                 * @return DescribePullTransformPushInfoListOutcome
                 */
                DescribePullTransformPushInfoListOutcome DescribePullTransformPushInfoList(const Model::DescribePullTransformPushInfoListRequest &request);
                void DescribePullTransformPushInfoListAsync(const Model::DescribePullTransformPushInfoListRequest& request, const DescribePullTransformPushInfoListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribePullTransformPushInfoListOutcomeCallable DescribePullTransformPushInfoListCallable(const Model::DescribePullTransformPushInfoListRequest& request);

                /**
                 *直播推流带宽和流量数据查询。
推流计费会先取全球推流用量和全球播放用量进行比较，满足计费条件后再按各地区用量出账。详情参见[计费文档](https://cloud.tencent.com/document/product/267/34175)。
                 * @param req DescribePushBandwidthAndFluxListRequest
                 * @return DescribePushBandwidthAndFluxListOutcome
                 */
                DescribePushBandwidthAndFluxListOutcome DescribePushBandwidthAndFluxList(const Model::DescribePushBandwidthAndFluxListRequest &request);
                void DescribePushBandwidthAndFluxListAsync(const Model::DescribePushBandwidthAndFluxListRequest& request, const DescribePushBandwidthAndFluxListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribePushBandwidthAndFluxListOutcomeCallable DescribePushBandwidthAndFluxListCallable(const Model::DescribePushBandwidthAndFluxListRequest& request);

                /**
                 *查询指定时间段范围内启动和结束的录制任务列表。
- 使用前提
1. 仅用于查询由 CreateRecordTask 接口创建的录制任务。
2. 不能查询被 DeleteRecordTask 接口删除以及已过期（平台侧保留3个月）的录制任务。
                 * @param req DescribeRecordTaskRequest
                 * @return DescribeRecordTaskOutcome
                 */
                DescribeRecordTaskOutcome DescribeRecordTask(const Model::DescribeRecordTaskRequest &request);
                void DescribeRecordTaskAsync(const Model::DescribeRecordTaskRequest& request, const DescribeRecordTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeRecordTaskOutcomeCallable DescribeRecordTaskCallable(const Model::DescribeRecordTaskRequest& request);

                /**
                 *接口用来查询直播增值业务--截图的张数
                 * @param req DescribeScreenShotSheetNumListRequest
                 * @return DescribeScreenShotSheetNumListOutcome
                 */
                DescribeScreenShotSheetNumListOutcome DescribeScreenShotSheetNumList(const Model::DescribeScreenShotSheetNumListRequest &request);
                void DescribeScreenShotSheetNumListAsync(const Model::DescribeScreenShotSheetNumListRequest& request, const DescribeScreenShotSheetNumListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeScreenShotSheetNumListOutcomeCallable DescribeScreenShotSheetNumListCallable(const Model::DescribeScreenShotSheetNumListRequest& request);

                /**
                 *查询指定时间段范围内启动和结束的截图任务列表。
- 使用前提
1. 仅用于查询由 CreateScreenshotTask接口创建的截图任务。
2. 不能查询被 DeleteScreenshotTask接口删除以及已过期（平台侧保留3个月）的截图任务。
                 * @param req DescribeScreenshotTaskRequest
                 * @return DescribeScreenshotTaskOutcome
                 */
                DescribeScreenshotTaskOutcome DescribeScreenshotTask(const Model::DescribeScreenshotTaskRequest &request);
                void DescribeScreenshotTaskAsync(const Model::DescribeScreenshotTaskRequest& request, const DescribeScreenshotTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeScreenshotTaskOutcomeCallable DescribeScreenshotTaskCallable(const Model::DescribeScreenshotTaskRequest& request);

                /**
                 *该接口为监控数据接口，数据采集及统计方式与计费数据不同，仅供运营分析使用，不能用于计费对账参考。
查询天维度每条流的播放数据，包括总流量等。
                 * @param req DescribeStreamDayPlayInfoListRequest
                 * @return DescribeStreamDayPlayInfoListOutcome
                 */
                DescribeStreamDayPlayInfoListOutcome DescribeStreamDayPlayInfoList(const Model::DescribeStreamDayPlayInfoListRequest &request);
                void DescribeStreamDayPlayInfoListAsync(const Model::DescribeStreamDayPlayInfoListRequest& request, const DescribeStreamDayPlayInfoListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeStreamDayPlayInfoListOutcomeCallable DescribeStreamDayPlayInfoListCallable(const Model::DescribeStreamDayPlayInfoListRequest& request);

                /**
                 *该接口为监控数据接口，数据采集及统计方式与计费数据不同，仅供运营分析使用，不能用于计费对账参考。
查询播放数据，支持按流名称查询详细播放数据，也可按播放域名查询详细总数据，数据延迟4分钟左右。
                 * @param req DescribeStreamPlayInfoListRequest
                 * @return DescribeStreamPlayInfoListOutcome
                 */
                DescribeStreamPlayInfoListOutcome DescribeStreamPlayInfoList(const Model::DescribeStreamPlayInfoListRequest &request);
                void DescribeStreamPlayInfoListAsync(const Model::DescribeStreamPlayInfoListRequest& request, const DescribeStreamPlayInfoListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeStreamPlayInfoListOutcomeCallable DescribeStreamPlayInfoListCallable(const Model::DescribeStreamPlayInfoListRequest& request);

                /**
                 *该接口为监控数据接口，数据采集及统计方式与计费数据不同，仅供运营分析使用，不能用于计费对账参考。
查询流id的上行推流质量数据，包括音视频的帧率，码率，流逝时间，编码格式等。
                 * @param req DescribeStreamPushInfoListRequest
                 * @return DescribeStreamPushInfoListOutcome
                 */
                DescribeStreamPushInfoListOutcome DescribeStreamPushInfoList(const Model::DescribeStreamPushInfoListRequest &request);
                void DescribeStreamPushInfoListAsync(const Model::DescribeStreamPushInfoListRequest& request, const DescribeStreamPushInfoListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeStreamPushInfoListOutcomeCallable DescribeStreamPushInfoListCallable(const Model::DescribeStreamPushInfoListRequest& request);

                /**
                 *前提调用 DescribeTimeShiftStreamList 获得请求必要参数。查询指定范围内的时移流录制详情，最大支持24小时范围查询。
                 * @param req DescribeTimeShiftRecordDetailRequest
                 * @return DescribeTimeShiftRecordDetailOutcome
                 */
                DescribeTimeShiftRecordDetailOutcome DescribeTimeShiftRecordDetail(const Model::DescribeTimeShiftRecordDetailRequest &request);
                void DescribeTimeShiftRecordDetailAsync(const Model::DescribeTimeShiftRecordDetailRequest& request, const DescribeTimeShiftRecordDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeTimeShiftRecordDetailOutcomeCallable DescribeTimeShiftRecordDetailCallable(const Model::DescribeTimeShiftRecordDetailRequest& request);

                /**
                 *查询某个时间范围内所有时移流列表。最大支持查询24小时内的数据。
                 * @param req DescribeTimeShiftStreamListRequest
                 * @return DescribeTimeShiftStreamListOutcome
                 */
                DescribeTimeShiftStreamListOutcome DescribeTimeShiftStreamList(const Model::DescribeTimeShiftStreamListRequest &request);
                void DescribeTimeShiftStreamListAsync(const Model::DescribeTimeShiftStreamListRequest& request, const DescribeTimeShiftStreamListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeTimeShiftStreamListOutcomeCallable DescribeTimeShiftStreamListCallable(const Model::DescribeTimeShiftStreamListRequest& request);

                /**
                 *该接口为监控数据接口，数据采集及统计方式与计费数据不同，仅供运营分析使用，不能用于计费对账参考。
查询某段时间top n客户端ip汇总信息（暂支持top 1000）
                 * @param req DescribeTopClientIpSumInfoListRequest
                 * @return DescribeTopClientIpSumInfoListOutcome
                 */
                DescribeTopClientIpSumInfoListOutcome DescribeTopClientIpSumInfoList(const Model::DescribeTopClientIpSumInfoListRequest &request);
                void DescribeTopClientIpSumInfoListAsync(const Model::DescribeTopClientIpSumInfoListRequest& request, const DescribeTopClientIpSumInfoListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeTopClientIpSumInfoListOutcomeCallable DescribeTopClientIpSumInfoListCallable(const Model::DescribeTopClientIpSumInfoListRequest& request);

                /**
                 *查询转码任务数。
                 * @param req DescribeTranscodeTaskNumRequest
                 * @return DescribeTranscodeTaskNumOutcome
                 */
                DescribeTranscodeTaskNumOutcome DescribeTranscodeTaskNum(const Model::DescribeTranscodeTaskNumRequest &request);
                void DescribeTranscodeTaskNumAsync(const Model::DescribeTranscodeTaskNumRequest& request, const DescribeTranscodeTaskNumAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeTranscodeTaskNumOutcomeCallable DescribeTranscodeTaskNumCallable(const Model::DescribeTranscodeTaskNumRequest& request);

                /**
                 *直播上行路数查询。
                 * @param req DescribeUploadStreamNumsRequest
                 * @return DescribeUploadStreamNumsOutcome
                 */
                DescribeUploadStreamNumsOutcome DescribeUploadStreamNums(const Model::DescribeUploadStreamNumsRequest &request);
                void DescribeUploadStreamNumsAsync(const Model::DescribeUploadStreamNumsRequest& request, const DescribeUploadStreamNumsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeUploadStreamNumsOutcomeCallable DescribeUploadStreamNumsCallable(const Model::DescribeUploadStreamNumsRequest& request);

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
注：对已经不活跃的流，调用该断流接口时，接口返回成功。
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
                 *启用择优调度。
注意：流维度的择优调度，当主备流结束后自动失效。
                 * @param req EnableOptimalSwitchingRequest
                 * @return EnableOptimalSwitchingOutcome
                 */
                EnableOptimalSwitchingOutcome EnableOptimalSwitching(const Model::EnableOptimalSwitchingRequest &request);
                void EnableOptimalSwitchingAsync(const Model::EnableOptimalSwitchingRequest& request, const EnableOptimalSwitchingAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                EnableOptimalSwitchingOutcomeCallable EnableOptimalSwitchingCallable(const Model::EnableOptimalSwitchingRequest& request);

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
注意：
1. 默认只要流名称正确，禁推就会生效。
2. 如需要推流域名+推流路径+流名称 强匹配生效禁推，需提单联系售后开启配置。
3. 如果配置了域名分组，需填写准确推流域名，才可断掉当前推流。
                 * @param req ForbidLiveStreamRequest
                 * @return ForbidLiveStreamOutcome
                 */
                ForbidLiveStreamOutcome ForbidLiveStream(const Model::ForbidLiveStreamRequest &request);
                void ForbidLiveStreamAsync(const Model::ForbidLiveStreamRequest& request, const ForbidLiveStreamAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ForbidLiveStreamOutcomeCallable ForbidLiveStreamCallable(const Model::ForbidLiveStreamRequest& request);

                /**
                 *调用该接口，用于触发话术播报生成，并返回音频播报URL。
                 * @param req GenerateLiveAvatarScriptBroadcastRequest
                 * @return GenerateLiveAvatarScriptBroadcastOutcome
                 */
                GenerateLiveAvatarScriptBroadcastOutcome GenerateLiveAvatarScriptBroadcast(const Model::GenerateLiveAvatarScriptBroadcastRequest &request);
                void GenerateLiveAvatarScriptBroadcastAsync(const Model::GenerateLiveAvatarScriptBroadcastRequest& request, const GenerateLiveAvatarScriptBroadcastAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                GenerateLiveAvatarScriptBroadcastOutcomeCallable GenerateLiveAvatarScriptBroadcastCallable(const Model::GenerateLiveAvatarScriptBroadcastRequest& request);

                /**
                 *可通过调用该接口，对点播源的直播拉流任务进行插播操作。
注意：
1. 仅支持对有效且运行中的点播源任务进行插播操作。
2. 拉转推插播文件时，事件及回调中的索引均保持为插播前的值。
                 * @param req InsertTaskTemporaryFilesRequest
                 * @return InsertTaskTemporaryFilesOutcome
                 */
                InsertTaskTemporaryFilesOutcome InsertTaskTemporaryFiles(const Model::InsertTaskTemporaryFilesRequest &request);
                void InsertTaskTemporaryFilesAsync(const Model::InsertTaskTemporaryFilesRequest& request, const InsertTaskTemporaryFilesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                InsertTaskTemporaryFilesOutcomeCallable InsertTaskTemporaryFilesCallable(const Model::InsertTaskTemporaryFilesRequest& request);

                /**
                 *该接口用来设置导播台的描述、名称、录制模板id等参数。
                 * @param req ModifyCasterRequest
                 * @return ModifyCasterOutcome
                 */
                ModifyCasterOutcome ModifyCaster(const Model::ModifyCasterRequest &request);
                void ModifyCasterAsync(const Model::ModifyCasterRequest& request, const ModifyCasterAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyCasterOutcomeCallable ModifyCasterCallable(const Model::ModifyCasterRequest& request);

                /**
                 *该接口用来修改已经设置过的输入源信息，如源地址，源类型等。
设置前，需保证待修改的输入源已经存在。若不存在，需使用AddCasterInputInfo接口。
                 * @param req ModifyCasterInputInfoRequest
                 * @return ModifyCasterInputInfoOutcome
                 */
                ModifyCasterInputInfoOutcome ModifyCasterInputInfo(const Model::ModifyCasterInputInfoRequest &request);
                void ModifyCasterInputInfoAsync(const Model::ModifyCasterInputInfoRequest& request, const ModifyCasterInputInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyCasterInputInfoOutcomeCallable ModifyCasterInputInfoCallable(const Model::ModifyCasterInputInfoRequest& request);

                /**
                 *该接口用来修改布局参数
                 * @param req ModifyCasterLayoutInfoRequest
                 * @return ModifyCasterLayoutInfoOutcome
                 */
                ModifyCasterLayoutInfoOutcome ModifyCasterLayoutInfo(const Model::ModifyCasterLayoutInfoRequest &request);
                void ModifyCasterLayoutInfoAsync(const Model::ModifyCasterLayoutInfoRequest& request, const ModifyCasterLayoutInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyCasterLayoutInfoOutcomeCallable ModifyCasterLayoutInfoCallable(const Model::ModifyCasterLayoutInfoRequest& request);

                /**
                 *该接口用来修改导播台水印信息。
注意，修改的Index对应的水印需已存在
                 * @param req ModifyCasterMarkPicInfoRequest
                 * @return ModifyCasterMarkPicInfoOutcome
                 */
                ModifyCasterMarkPicInfoOutcome ModifyCasterMarkPicInfo(const Model::ModifyCasterMarkPicInfoRequest &request);
                void ModifyCasterMarkPicInfoAsync(const Model::ModifyCasterMarkPicInfoRequest& request, const ModifyCasterMarkPicInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyCasterMarkPicInfoOutcomeCallable ModifyCasterMarkPicInfoCallable(const Model::ModifyCasterMarkPicInfoRequest& request);

                /**
                 *该接口用来修改导播台文本配置。
                 * @param req ModifyCasterMarkWordInfoRequest
                 * @return ModifyCasterMarkWordInfoOutcome
                 */
                ModifyCasterMarkWordInfoOutcome ModifyCasterMarkWordInfo(const Model::ModifyCasterMarkWordInfoRequest &request);
                void ModifyCasterMarkWordInfoAsync(const Model::ModifyCasterMarkWordInfoRequest& request, const ModifyCasterMarkWordInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyCasterMarkWordInfoOutcomeCallable ModifyCasterMarkWordInfoCallable(const Model::ModifyCasterMarkWordInfoRequest& request);

                /**
                 *该接口用来修改导播台的推流信息。
注：只有在主监启动前设置才生效，主监启动后设置，下次推流生效。
                 * @param req ModifyCasterOutputInfoRequest
                 * @return ModifyCasterOutputInfoOutcome
                 */
                ModifyCasterOutputInfoOutcome ModifyCasterOutputInfo(const Model::ModifyCasterOutputInfoRequest &request);
                void ModifyCasterOutputInfoAsync(const Model::ModifyCasterOutputInfoRequest& request, const ModifyCasterOutputInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyCasterOutputInfoOutcomeCallable ModifyCasterOutputInfoCallable(const Model::ModifyCasterOutputInfoRequest& request);

                /**
                 *调用该接口，用于修改数字人(包括AIGC数字人)直播间。
                 * @param req ModifyLiveAvatarRoomRequest
                 * @return ModifyLiveAvatarRoomOutcome
                 */
                ModifyLiveAvatarRoomOutcome ModifyLiveAvatarRoom(const Model::ModifyLiveAvatarRoomRequest &request);
                void ModifyLiveAvatarRoomAsync(const Model::ModifyLiveAvatarRoomRequest& request, const ModifyLiveAvatarRoomAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyLiveAvatarRoomOutcomeCallable ModifyLiveAvatarRoomCallable(const Model::ModifyLiveAvatarRoomRequest& request);

                /**
                 *调用该接口，用于修改数字人直播间话术。
                 * @param req ModifyLiveAvatarScriptRequest
                 * @return ModifyLiveAvatarScriptOutcome
                 */
                ModifyLiveAvatarScriptOutcome ModifyLiveAvatarScript(const Model::ModifyLiveAvatarScriptRequest &request);
                void ModifyLiveAvatarScriptAsync(const Model::ModifyLiveAvatarScriptRequest& request, const ModifyLiveAvatarScriptAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyLiveAvatarScriptOutcomeCallable ModifyLiveAvatarScriptCallable(const Model::ModifyLiveAvatarScriptRequest& request);

                /**
                 *修改回调模板。
                 * @param req ModifyLiveCallbackTemplateRequest
                 * @return ModifyLiveCallbackTemplateOutcome
                 */
                ModifyLiveCallbackTemplateOutcome ModifyLiveCallbackTemplate(const Model::ModifyLiveCallbackTemplateRequest &request);
                void ModifyLiveCallbackTemplateAsync(const Model::ModifyLiveCallbackTemplateRequest& request, const ModifyLiveCallbackTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyLiveCallbackTemplateOutcomeCallable ModifyLiveCallbackTemplateCallable(const Model::ModifyLiveCallbackTemplateRequest& request);

                /**
                 *批量绑定证书对应的播放域名，并更新启用状态。
新建自有证书将自动上传至腾讯云ssl。
                 * @param req ModifyLiveDomainCertBindingsRequest
                 * @return ModifyLiveDomainCertBindingsOutcome
                 */
                ModifyLiveDomainCertBindingsOutcome ModifyLiveDomainCertBindings(const Model::ModifyLiveDomainCertBindingsRequest &request);
                void ModifyLiveDomainCertBindingsAsync(const Model::ModifyLiveDomainCertBindingsRequest& request, const ModifyLiveDomainCertBindingsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyLiveDomainCertBindingsOutcomeCallable ModifyLiveDomainCertBindingsCallable(const Model::ModifyLiveDomainCertBindingsRequest& request);

                /**
                 *设置直播域名 Referer 黑白名单。
由于 Referer 信息包含在 http 协议中，在开启配置后，播放协议为 rtmp 或 WebRTC 不会校验 Referer 配置，仍可正常播放。如需配置 Referer 鉴权建议使用 http-flv 或 http-hls 协议播放。
                 * @param req ModifyLiveDomainRefererRequest
                 * @return ModifyLiveDomainRefererOutcome
                 */
                ModifyLiveDomainRefererOutcome ModifyLiveDomainReferer(const Model::ModifyLiveDomainRefererRequest &request);
                void ModifyLiveDomainRefererAsync(const Model::ModifyLiveDomainRefererRequest& request, const ModifyLiveDomainRefererAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyLiveDomainRefererOutcomeCallable ModifyLiveDomainRefererCallable(const Model::ModifyLiveDomainRefererRequest& request);

                /**
                 *修改直播垫片模板。
                 * @param req ModifyLivePadTemplateRequest
                 * @return ModifyLivePadTemplateOutcome
                 */
                ModifyLivePadTemplateOutcome ModifyLivePadTemplate(const Model::ModifyLivePadTemplateRequest &request);
                void ModifyLivePadTemplateAsync(const Model::ModifyLivePadTemplateRequest& request, const ModifyLivePadTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyLivePadTemplateOutcomeCallable ModifyLivePadTemplateCallable(const Model::ModifyLivePadTemplateRequest& request);

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
                 *更新直播拉流任务。 
1. 不支持修改拉流源类型，如需更换，请创建新任务。
                 * @param req ModifyLivePullStreamTaskRequest
                 * @return ModifyLivePullStreamTaskOutcome
                 */
                ModifyLivePullStreamTaskOutcome ModifyLivePullStreamTask(const Model::ModifyLivePullStreamTaskRequest &request);
                void ModifyLivePullStreamTaskAsync(const Model::ModifyLivePullStreamTaskRequest& request, const ModifyLivePullStreamTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyLivePullStreamTaskOutcomeCallable ModifyLivePullStreamTaskCallable(const Model::ModifyLivePullStreamTaskRequest& request);

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
                 *该接口用来修改直播流监播任务的配置。
                 * @param req ModifyLiveStreamMonitorRequest
                 * @return ModifyLiveStreamMonitorOutcome
                 */
                ModifyLiveStreamMonitorOutcome ModifyLiveStreamMonitor(const Model::ModifyLiveStreamMonitorRequest &request);
                void ModifyLiveStreamMonitorAsync(const Model::ModifyLiveStreamMonitorRequest& request, const ModifyLiveStreamMonitorAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyLiveStreamMonitorOutcomeCallable ModifyLiveStreamMonitorCallable(const Model::ModifyLiveStreamMonitorRequest& request);

                /**
                 *修改直播时移模板。
                 * @param req ModifyLiveTimeShiftTemplateRequest
                 * @return ModifyLiveTimeShiftTemplateOutcome
                 */
                ModifyLiveTimeShiftTemplateOutcome ModifyLiveTimeShiftTemplate(const Model::ModifyLiveTimeShiftTemplateRequest &request);
                void ModifyLiveTimeShiftTemplateAsync(const Model::ModifyLiveTimeShiftTemplateRequest& request, const ModifyLiveTimeShiftTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyLiveTimeShiftTemplateOutcomeCallable ModifyLiveTimeShiftTemplateCallable(const Model::ModifyLiveTimeShiftTemplateRequest& request);

                /**
                 *修改转码模板配置。
                 * @param req ModifyLiveTranscodeTemplateRequest
                 * @return ModifyLiveTranscodeTemplateOutcome
                 */
                ModifyLiveTranscodeTemplateOutcome ModifyLiveTranscodeTemplate(const Model::ModifyLiveTranscodeTemplateRequest &request);
                void ModifyLiveTranscodeTemplateAsync(const Model::ModifyLiveTranscodeTemplateRequest& request, const ModifyLiveTranscodeTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyLiveTranscodeTemplateOutcomeCallable ModifyLiveTranscodeTemplateCallable(const Model::ModifyLiveTranscodeTemplateRequest& request);

                /**
                 *变更直播源站配置，支持直播原站格式。
                 * @param req ModifyOriginStreamInfoRequest
                 * @return ModifyOriginStreamInfoOutcome
                 */
                ModifyOriginStreamInfoOutcome ModifyOriginStreamInfo(const Model::ModifyOriginStreamInfoRequest &request);
                void ModifyOriginStreamInfoAsync(const Model::ModifyOriginStreamInfoRequest& request, const ModifyOriginStreamInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyOriginStreamInfoOutcomeCallable ModifyOriginStreamInfoCallable(const Model::ModifyOriginStreamInfoRequest& request);

                /**
                 *更新拉流配置。该接口为已下线接口，请使用新接口 ModifyLivePullStreamTask。
                 * @param req ModifyPullStreamConfigRequest
                 * @return ModifyPullStreamConfigOutcome
                 */
                ModifyPullStreamConfigOutcome ModifyPullStreamConfig(const Model::ModifyPullStreamConfigRequest &request);
                void ModifyPullStreamConfigAsync(const Model::ModifyPullStreamConfigRequest& request, const ModifyPullStreamConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyPullStreamConfigOutcomeCallable ModifyPullStreamConfigCallable(const Model::ModifyPullStreamConfigRequest& request);

                /**
                 *修改直播拉流配置的状态。该接口已下线,请使用新接口 ModifyLivePullStreamTask。
                 * @param req ModifyPullStreamStatusRequest
                 * @return ModifyPullStreamStatusOutcome
                 */
                ModifyPullStreamStatusOutcome ModifyPullStreamStatus(const Model::ModifyPullStreamStatusRequest &request);
                void ModifyPullStreamStatusAsync(const Model::ModifyPullStreamStatusRequest& request, const ModifyPullStreamStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyPullStreamStatusOutcomeCallable ModifyPullStreamStatusCallable(const Model::ModifyPullStreamStatusRequest& request);

                /**
                 *调用该接口，释放导播台实例，但保留所有的配置。
执行该接口，预监与主监画面停止，第三方推流停止。
点播文件与直播地址将停止展示，客户自行推到导播台的流需要手动停止。
                 * @param req ReleaseCasterRequest
                 * @return ReleaseCasterOutcome
                 */
                ReleaseCasterOutcome ReleaseCaster(const Model::ReleaseCasterRequest &request);
                void ReleaseCasterAsync(const Model::ReleaseCasterRequest& request, const ReleaseCasterAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ReleaseCasterOutcomeCallable ReleaseCasterCallable(const Model::ReleaseCasterRequest& request);

                /**
                 *将正在运行的拉流转推任务进行重启。
注意：
1. 重启任务会造成推流中断。
2. 点播源任务的重启，会根据VodRefreshType决定是续播还是从头开始播。
                 * @param req RestartLivePullStreamTaskRequest
                 * @return RestartLivePullStreamTaskOutcome
                 */
                RestartLivePullStreamTaskOutcome RestartLivePullStreamTask(const Model::RestartLivePullStreamTaskRequest &request);
                void RestartLivePullStreamTaskAsync(const Model::RestartLivePullStreamTaskRequest& request, const RestartLivePullStreamTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                RestartLivePullStreamTaskOutcomeCallable RestartLivePullStreamTaskCallable(const Model::RestartLivePullStreamTaskRequest& request);

                /**
                 *取消直播流设置的延时配置，恢复实时直播画面。
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
                 *使用该接口发送云端特效到线上正活跃的直播流，观众可在播放端看到特效从直播流画面中展示。
                 * @param req SendLiveCloudEffectRequest
                 * @return SendLiveCloudEffectOutcome
                 */
                SendLiveCloudEffectOutcome SendLiveCloudEffect(const Model::SendLiveCloudEffectRequest &request);
                void SendLiveCloudEffectAsync(const Model::SendLiveCloudEffectRequest& request, const SendLiveCloudEffectAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                SendLiveCloudEffectOutcomeCallable SendLiveCloudEffectCallable(const Model::SendLiveCloudEffectRequest& request);

                /**
                 *调用该接口，用于临时驱动数字人播报。
                 * @param req SendTemporaryScriptToAvatarRoomRequest
                 * @return SendTemporaryScriptToAvatarRoomOutcome
                 */
                SendTemporaryScriptToAvatarRoomOutcome SendTemporaryScriptToAvatarRoom(const Model::SendTemporaryScriptToAvatarRoomRequest &request);
                void SendTemporaryScriptToAvatarRoomAsync(const Model::SendTemporaryScriptToAvatarRoomRequest& request, const SendTemporaryScriptToAvatarRoomAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                SendTemporaryScriptToAvatarRoomOutcomeCallable SendTemporaryScriptToAvatarRoomCallable(const Model::SendTemporaryScriptToAvatarRoomRequest& request);

                /**
                 *调用该接口，用于启动数字人（包括AIGC数字人）直播间。
                 * @param req StartLiveAvatarRoomRequest
                 * @return StartLiveAvatarRoomOutcome
                 */
                StartLiveAvatarRoomOutcome StartLiveAvatarRoom(const Model::StartLiveAvatarRoomRequest &request);
                void StartLiveAvatarRoomAsync(const Model::StartLiveAvatarRoomRequest& request, const StartLiveAvatarRoomAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                StartLiveAvatarRoomOutcomeCallable StartLiveAvatarRoomCallable(const Model::StartLiveAvatarRoomRequest& request);

                /**
                 *使用该接口将直播流开始切入垫片。
                 * @param req StartLivePadStreamRequest
                 * @return StartLivePadStreamOutcome
                 */
                StartLivePadStreamOutcome StartLivePadStream(const Model::StartLivePadStreamRequest &request);
                void StartLivePadStreamAsync(const Model::StartLivePadStreamRequest& request, const StartLivePadStreamAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                StartLivePadStreamOutcomeCallable StartLivePadStreamCallable(const Model::StartLivePadStreamRequest& request);

                /**
                 *该接口用来启动直播流监播任务。
                 * @param req StartLiveStreamMonitorRequest
                 * @return StartLiveStreamMonitorOutcome
                 */
                StartLiveStreamMonitorOutcome StartLiveStreamMonitor(const Model::StartLiveStreamMonitorRequest &request);
                void StartLiveStreamMonitorAsync(const Model::StartLiveStreamMonitorRequest& request, const StartLiveStreamMonitorAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                StartLiveStreamMonitorOutcomeCallable StartLiveStreamMonitorCallable(const Model::StartLiveStreamMonitorRequest& request);

                /**
                 *该接口用来停止导播台的主监输出。
停止主监后，对应的推流到腾讯云直播源站和推流到其他第三方平台均将会停止。
                 * @param req StopCasterPgmRequest
                 * @return StopCasterPgmOutcome
                 */
                StopCasterPgmOutcome StopCasterPgm(const Model::StopCasterPgmRequest &request);
                void StopCasterPgmAsync(const Model::StopCasterPgmRequest& request, const StopCasterPgmAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                StopCasterPgmOutcomeCallable StopCasterPgmCallable(const Model::StopCasterPgmRequest& request);

                /**
                 *该接口用来停止导播台的预监任务。
                 * @param req StopCasterPvwRequest
                 * @return StopCasterPvwOutcome
                 */
                StopCasterPvwOutcome StopCasterPvw(const Model::StopCasterPvwRequest &request);
                void StopCasterPvwAsync(const Model::StopCasterPvwRequest& request, const StopCasterPvwAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                StopCasterPvwOutcomeCallable StopCasterPvwCallable(const Model::StopCasterPvwRequest& request);

                /**
                 *调用该接口，用于停止数字人直播间。
                 * @param req StopLiveAvatarRoomRequest
                 * @return StopLiveAvatarRoomOutcome
                 */
                StopLiveAvatarRoomOutcome StopLiveAvatarRoom(const Model::StopLiveAvatarRoomRequest &request);
                void StopLiveAvatarRoomAsync(const Model::StopLiveAvatarRoomRequest& request, const StopLiveAvatarRoomAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                StopLiveAvatarRoomOutcomeCallable StopLiveAvatarRoomCallable(const Model::StopLiveAvatarRoomRequest& request);

                /**
                 *使用该接口将直播流停止切入垫片。
                 * @param req StopLivePadStreamRequest
                 * @return StopLivePadStreamOutcome
                 */
                StopLivePadStreamOutcome StopLivePadStream(const Model::StopLivePadStreamRequest &request);
                void StopLivePadStreamAsync(const Model::StopLivePadStreamRequest& request, const StopLivePadStreamAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                StopLivePadStreamOutcomeCallable StopLivePadStreamCallable(const Model::StopLivePadStreamRequest& request);

                /**
                 *说明：录制后的文件存放于点播平台。用户如需使用录制功能，需首先自行开通点播账号并确保账号可用。录制文件存放后，相关费用（含存储以及下行播放流量）按照点播平台计费方式收取，请参考对应文档。
                 * @param req StopLiveRecordRequest
                 * @return StopLiveRecordOutcome
                 */
                StopLiveRecordOutcome StopLiveRecord(const Model::StopLiveRecordRequest &request);
                void StopLiveRecordAsync(const Model::StopLiveRecordRequest& request, const StopLiveRecordAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                StopLiveRecordOutcomeCallable StopLiveRecordCallable(const Model::StopLiveRecordRequest& request);

                /**
                 *该接口用来停止直播流监播任务。
                 * @param req StopLiveStreamMonitorRequest
                 * @return StopLiveStreamMonitorOutcome
                 */
                StopLiveStreamMonitorOutcome StopLiveStreamMonitor(const Model::StopLiveStreamMonitorRequest &request);
                void StopLiveStreamMonitorAsync(const Model::StopLiveStreamMonitorRequest& request, const StopLiveStreamMonitorAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                StopLiveStreamMonitorOutcomeCallable StopLiveStreamMonitorCallable(const Model::StopLiveStreamMonitorRequest& request);

                /**
                 *提前结束录制，中止运行中的录制任务并生成录制文件。任务被成功终止后，本次任务将不再启动。
                 * @param req StopRecordTaskRequest
                 * @return StopRecordTaskOutcome
                 */
                StopRecordTaskOutcome StopRecordTask(const Model::StopRecordTaskRequest &request);
                void StopRecordTaskAsync(const Model::StopRecordTaskRequest& request, const StopRecordTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                StopRecordTaskOutcomeCallable StopRecordTaskCallable(const Model::StopRecordTaskRequest& request);

                /**
                 *提前结束截图，中止运行中的截图任务。任务被成功终止后，本次任务将不再启动。
                 * @param req StopScreenshotTaskRequest
                 * @return StopScreenshotTaskOutcome
                 */
                StopScreenshotTaskOutcome StopScreenshotTask(const Model::StopScreenshotTaskRequest &request);
                void StopScreenshotTaskAsync(const Model::StopScreenshotTaskRequest& request, const StopScreenshotTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                StopScreenshotTaskOutcomeCallable StopScreenshotTaskCallable(const Model::StopScreenshotTaskRequest& request);

                /**
                 *调用该接口实现切换当前播放所使用的主备流。
                 * @param req SwitchBackupStreamRequest
                 * @return SwitchBackupStreamOutcome
                 */
                SwitchBackupStreamOutcome SwitchBackupStream(const Model::SwitchBackupStreamRequest &request);
                void SwitchBackupStreamAsync(const Model::SwitchBackupStreamRequest& request, const SwitchBackupStreamAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                SwitchBackupStreamOutcomeCallable SwitchBackupStreamCallable(const Model::SwitchBackupStreamRequest& request);

                /**
                 *该接口用来将导播台切换到备播状态。
该接口使用时，主监任务需处于运行状态。
                 * @param req SwitchCasterToEmergencyRequest
                 * @return SwitchCasterToEmergencyOutcome
                 */
                SwitchCasterToEmergencyOutcome SwitchCasterToEmergency(const Model::SwitchCasterToEmergencyRequest &request);
                void SwitchCasterToEmergencyAsync(const Model::SwitchCasterToEmergencyRequest& request, const SwitchCasterToEmergencyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                SwitchCasterToEmergencyOutcomeCallable SwitchCasterToEmergencyCallable(const Model::SwitchCasterToEmergencyRequest& request);

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
