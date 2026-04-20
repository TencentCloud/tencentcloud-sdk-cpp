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

#ifndef TENCENTCLOUD_VOD_V20180717_VODCLIENT_H_
#define TENCENTCLOUD_VOD_V20180717_VODCLIENT_H_

#include <functional>
#include <future>
#include <tencentcloud/core/AbstractClient.h>
#include <tencentcloud/core/Credential.h>
#include <tencentcloud/core/profile/ClientProfile.h>
#include <tencentcloud/core/AsyncCallerContext.h>
#include <tencentcloud/vod/v20180717/model/ApplyUploadRequest.h>
#include <tencentcloud/vod/v20180717/model/ApplyUploadResponse.h>
#include <tencentcloud/vod/v20180717/model/AttachMediaSubtitlesRequest.h>
#include <tencentcloud/vod/v20180717/model/AttachMediaSubtitlesResponse.h>
#include <tencentcloud/vod/v20180717/model/CommitUploadRequest.h>
#include <tencentcloud/vod/v20180717/model/CommitUploadResponse.h>
#include <tencentcloud/vod/v20180717/model/ComposeMediaRequest.h>
#include <tencentcloud/vod/v20180717/model/ComposeMediaResponse.h>
#include <tencentcloud/vod/v20180717/model/ConfirmEventsRequest.h>
#include <tencentcloud/vod/v20180717/model/ConfirmEventsResponse.h>
#include <tencentcloud/vod/v20180717/model/CreateAIAnalysisTemplateRequest.h>
#include <tencentcloud/vod/v20180717/model/CreateAIAnalysisTemplateResponse.h>
#include <tencentcloud/vod/v20180717/model/CreateAIRecognitionTemplateRequest.h>
#include <tencentcloud/vod/v20180717/model/CreateAIRecognitionTemplateResponse.h>
#include <tencentcloud/vod/v20180717/model/CreateAdaptiveDynamicStreamingTemplateRequest.h>
#include <tencentcloud/vod/v20180717/model/CreateAdaptiveDynamicStreamingTemplateResponse.h>
#include <tencentcloud/vod/v20180717/model/CreateAigcAdvancedCustomElementRequest.h>
#include <tencentcloud/vod/v20180717/model/CreateAigcAdvancedCustomElementResponse.h>
#include <tencentcloud/vod/v20180717/model/CreateAigcApiTokenRequest.h>
#include <tencentcloud/vod/v20180717/model/CreateAigcApiTokenResponse.h>
#include <tencentcloud/vod/v20180717/model/CreateAigcCustomElementRequest.h>
#include <tencentcloud/vod/v20180717/model/CreateAigcCustomElementResponse.h>
#include <tencentcloud/vod/v20180717/model/CreateAigcCustomVoiceRequest.h>
#include <tencentcloud/vod/v20180717/model/CreateAigcCustomVoiceResponse.h>
#include <tencentcloud/vod/v20180717/model/CreateAigcImageTaskRequest.h>
#include <tencentcloud/vod/v20180717/model/CreateAigcImageTaskResponse.h>
#include <tencentcloud/vod/v20180717/model/CreateAigcSubjectRequest.h>
#include <tencentcloud/vod/v20180717/model/CreateAigcSubjectResponse.h>
#include <tencentcloud/vod/v20180717/model/CreateAigcVideoRedrawTaskRequest.h>
#include <tencentcloud/vod/v20180717/model/CreateAigcVideoRedrawTaskResponse.h>
#include <tencentcloud/vod/v20180717/model/CreateAigcVideoTaskRequest.h>
#include <tencentcloud/vod/v20180717/model/CreateAigcVideoTaskResponse.h>
#include <tencentcloud/vod/v20180717/model/CreateAnimatedGraphicsTemplateRequest.h>
#include <tencentcloud/vod/v20180717/model/CreateAnimatedGraphicsTemplateResponse.h>
#include <tencentcloud/vod/v20180717/model/CreateBlindWatermarkTemplateRequest.h>
#include <tencentcloud/vod/v20180717/model/CreateBlindWatermarkTemplateResponse.h>
#include <tencentcloud/vod/v20180717/model/CreateCLSLogsetRequest.h>
#include <tencentcloud/vod/v20180717/model/CreateCLSLogsetResponse.h>
#include <tencentcloud/vod/v20180717/model/CreateCLSTopicRequest.h>
#include <tencentcloud/vod/v20180717/model/CreateCLSTopicResponse.h>
#include <tencentcloud/vod/v20180717/model/CreateClassRequest.h>
#include <tencentcloud/vod/v20180717/model/CreateClassResponse.h>
#include <tencentcloud/vod/v20180717/model/CreateComplexAdaptiveDynamicStreamingTaskRequest.h>
#include <tencentcloud/vod/v20180717/model/CreateComplexAdaptiveDynamicStreamingTaskResponse.h>
#include <tencentcloud/vod/v20180717/model/CreateContentReviewTemplateRequest.h>
#include <tencentcloud/vod/v20180717/model/CreateContentReviewTemplateResponse.h>
#include <tencentcloud/vod/v20180717/model/CreateDomainVerifyRecordRequest.h>
#include <tencentcloud/vod/v20180717/model/CreateDomainVerifyRecordResponse.h>
#include <tencentcloud/vod/v20180717/model/CreateEnhanceMediaTemplateRequest.h>
#include <tencentcloud/vod/v20180717/model/CreateEnhanceMediaTemplateResponse.h>
#include <tencentcloud/vod/v20180717/model/CreateHeadTailTemplateRequest.h>
#include <tencentcloud/vod/v20180717/model/CreateHeadTailTemplateResponse.h>
#include <tencentcloud/vod/v20180717/model/CreateImageProcessingTemplateRequest.h>
#include <tencentcloud/vod/v20180717/model/CreateImageProcessingTemplateResponse.h>
#include <tencentcloud/vod/v20180717/model/CreateImageSpriteTemplateRequest.h>
#include <tencentcloud/vod/v20180717/model/CreateImageSpriteTemplateResponse.h>
#include <tencentcloud/vod/v20180717/model/CreateJustInTimeTranscodeTemplateRequest.h>
#include <tencentcloud/vod/v20180717/model/CreateJustInTimeTranscodeTemplateResponse.h>
#include <tencentcloud/vod/v20180717/model/CreateLLMComprehendTemplateRequest.h>
#include <tencentcloud/vod/v20180717/model/CreateLLMComprehendTemplateResponse.h>
#include <tencentcloud/vod/v20180717/model/CreateMPSTemplateRequest.h>
#include <tencentcloud/vod/v20180717/model/CreateMPSTemplateResponse.h>
#include <tencentcloud/vod/v20180717/model/CreatePersonSampleRequest.h>
#include <tencentcloud/vod/v20180717/model/CreatePersonSampleResponse.h>
#include <tencentcloud/vod/v20180717/model/CreateProcedureTemplateRequest.h>
#include <tencentcloud/vod/v20180717/model/CreateProcedureTemplateResponse.h>
#include <tencentcloud/vod/v20180717/model/CreateProcessImageAsyncTemplateRequest.h>
#include <tencentcloud/vod/v20180717/model/CreateProcessImageAsyncTemplateResponse.h>
#include <tencentcloud/vod/v20180717/model/CreateQualityInspectTemplateRequest.h>
#include <tencentcloud/vod/v20180717/model/CreateQualityInspectTemplateResponse.h>
#include <tencentcloud/vod/v20180717/model/CreateRebuildMediaTemplateRequest.h>
#include <tencentcloud/vod/v20180717/model/CreateRebuildMediaTemplateResponse.h>
#include <tencentcloud/vod/v20180717/model/CreateReviewTemplateRequest.h>
#include <tencentcloud/vod/v20180717/model/CreateReviewTemplateResponse.h>
#include <tencentcloud/vod/v20180717/model/CreateRoundPlayRequest.h>
#include <tencentcloud/vod/v20180717/model/CreateRoundPlayResponse.h>
#include <tencentcloud/vod/v20180717/model/CreateSampleSnapshotTemplateRequest.h>
#include <tencentcloud/vod/v20180717/model/CreateSampleSnapshotTemplateResponse.h>
#include <tencentcloud/vod/v20180717/model/CreateSceneAigcImageTaskRequest.h>
#include <tencentcloud/vod/v20180717/model/CreateSceneAigcImageTaskResponse.h>
#include <tencentcloud/vod/v20180717/model/CreateSceneAigcVideoTaskRequest.h>
#include <tencentcloud/vod/v20180717/model/CreateSceneAigcVideoTaskResponse.h>
#include <tencentcloud/vod/v20180717/model/CreateSnapshotByTimeOffsetTemplateRequest.h>
#include <tencentcloud/vod/v20180717/model/CreateSnapshotByTimeOffsetTemplateResponse.h>
#include <tencentcloud/vod/v20180717/model/CreateStorageRegionRequest.h>
#include <tencentcloud/vod/v20180717/model/CreateStorageRegionResponse.h>
#include <tencentcloud/vod/v20180717/model/CreateSubAppIdRequest.h>
#include <tencentcloud/vod/v20180717/model/CreateSubAppIdResponse.h>
#include <tencentcloud/vod/v20180717/model/CreateSuperPlayerConfigRequest.h>
#include <tencentcloud/vod/v20180717/model/CreateSuperPlayerConfigResponse.h>
#include <tencentcloud/vod/v20180717/model/CreateTranscodeTemplateRequest.h>
#include <tencentcloud/vod/v20180717/model/CreateTranscodeTemplateResponse.h>
#include <tencentcloud/vod/v20180717/model/CreateVodDomainRequest.h>
#include <tencentcloud/vod/v20180717/model/CreateVodDomainResponse.h>
#include <tencentcloud/vod/v20180717/model/CreateWatermarkTemplateRequest.h>
#include <tencentcloud/vod/v20180717/model/CreateWatermarkTemplateResponse.h>
#include <tencentcloud/vod/v20180717/model/CreateWordSamplesRequest.h>
#include <tencentcloud/vod/v20180717/model/CreateWordSamplesResponse.h>
#include <tencentcloud/vod/v20180717/model/DeleteAIAnalysisTemplateRequest.h>
#include <tencentcloud/vod/v20180717/model/DeleteAIAnalysisTemplateResponse.h>
#include <tencentcloud/vod/v20180717/model/DeleteAIRecognitionTemplateRequest.h>
#include <tencentcloud/vod/v20180717/model/DeleteAIRecognitionTemplateResponse.h>
#include <tencentcloud/vod/v20180717/model/DeleteAdaptiveDynamicStreamingTemplateRequest.h>
#include <tencentcloud/vod/v20180717/model/DeleteAdaptiveDynamicStreamingTemplateResponse.h>
#include <tencentcloud/vod/v20180717/model/DeleteAigcApiTokenRequest.h>
#include <tencentcloud/vod/v20180717/model/DeleteAigcApiTokenResponse.h>
#include <tencentcloud/vod/v20180717/model/DeleteAnimatedGraphicsTemplateRequest.h>
#include <tencentcloud/vod/v20180717/model/DeleteAnimatedGraphicsTemplateResponse.h>
#include <tencentcloud/vod/v20180717/model/DeleteBlindWatermarkTemplateRequest.h>
#include <tencentcloud/vod/v20180717/model/DeleteBlindWatermarkTemplateResponse.h>
#include <tencentcloud/vod/v20180717/model/DeleteCLSTopicRequest.h>
#include <tencentcloud/vod/v20180717/model/DeleteCLSTopicResponse.h>
#include <tencentcloud/vod/v20180717/model/DeleteClassRequest.h>
#include <tencentcloud/vod/v20180717/model/DeleteClassResponse.h>
#include <tencentcloud/vod/v20180717/model/DeleteContentReviewTemplateRequest.h>
#include <tencentcloud/vod/v20180717/model/DeleteContentReviewTemplateResponse.h>
#include <tencentcloud/vod/v20180717/model/DeleteEnhanceMediaTemplateRequest.h>
#include <tencentcloud/vod/v20180717/model/DeleteEnhanceMediaTemplateResponse.h>
#include <tencentcloud/vod/v20180717/model/DeleteHeadTailTemplateRequest.h>
#include <tencentcloud/vod/v20180717/model/DeleteHeadTailTemplateResponse.h>
#include <tencentcloud/vod/v20180717/model/DeleteImageProcessingTemplateRequest.h>
#include <tencentcloud/vod/v20180717/model/DeleteImageProcessingTemplateResponse.h>
#include <tencentcloud/vod/v20180717/model/DeleteImageSpriteTemplateRequest.h>
#include <tencentcloud/vod/v20180717/model/DeleteImageSpriteTemplateResponse.h>
#include <tencentcloud/vod/v20180717/model/DeleteJustInTimeTranscodeTemplateRequest.h>
#include <tencentcloud/vod/v20180717/model/DeleteJustInTimeTranscodeTemplateResponse.h>
#include <tencentcloud/vod/v20180717/model/DeleteLLMComprehendTemplateRequest.h>
#include <tencentcloud/vod/v20180717/model/DeleteLLMComprehendTemplateResponse.h>
#include <tencentcloud/vod/v20180717/model/DeleteMPSTemplateRequest.h>
#include <tencentcloud/vod/v20180717/model/DeleteMPSTemplateResponse.h>
#include <tencentcloud/vod/v20180717/model/DeleteMediaRequest.h>
#include <tencentcloud/vod/v20180717/model/DeleteMediaResponse.h>
#include <tencentcloud/vod/v20180717/model/DeletePersonSampleRequest.h>
#include <tencentcloud/vod/v20180717/model/DeletePersonSampleResponse.h>
#include <tencentcloud/vod/v20180717/model/DeleteProcedureTemplateRequest.h>
#include <tencentcloud/vod/v20180717/model/DeleteProcedureTemplateResponse.h>
#include <tencentcloud/vod/v20180717/model/DeleteProcessImageAsyncTemplateRequest.h>
#include <tencentcloud/vod/v20180717/model/DeleteProcessImageAsyncTemplateResponse.h>
#include <tencentcloud/vod/v20180717/model/DeleteQualityInspectTemplateRequest.h>
#include <tencentcloud/vod/v20180717/model/DeleteQualityInspectTemplateResponse.h>
#include <tencentcloud/vod/v20180717/model/DeleteRebuildMediaTemplateRequest.h>
#include <tencentcloud/vod/v20180717/model/DeleteRebuildMediaTemplateResponse.h>
#include <tencentcloud/vod/v20180717/model/DeleteReviewTemplateRequest.h>
#include <tencentcloud/vod/v20180717/model/DeleteReviewTemplateResponse.h>
#include <tencentcloud/vod/v20180717/model/DeleteRoundPlayRequest.h>
#include <tencentcloud/vod/v20180717/model/DeleteRoundPlayResponse.h>
#include <tencentcloud/vod/v20180717/model/DeleteSampleSnapshotTemplateRequest.h>
#include <tencentcloud/vod/v20180717/model/DeleteSampleSnapshotTemplateResponse.h>
#include <tencentcloud/vod/v20180717/model/DeleteSnapshotByTimeOffsetTemplateRequest.h>
#include <tencentcloud/vod/v20180717/model/DeleteSnapshotByTimeOffsetTemplateResponse.h>
#include <tencentcloud/vod/v20180717/model/DeleteSuperPlayerConfigRequest.h>
#include <tencentcloud/vod/v20180717/model/DeleteSuperPlayerConfigResponse.h>
#include <tencentcloud/vod/v20180717/model/DeleteTranscodeTemplateRequest.h>
#include <tencentcloud/vod/v20180717/model/DeleteTranscodeTemplateResponse.h>
#include <tencentcloud/vod/v20180717/model/DeleteVodDomainRequest.h>
#include <tencentcloud/vod/v20180717/model/DeleteVodDomainResponse.h>
#include <tencentcloud/vod/v20180717/model/DeleteWatermarkTemplateRequest.h>
#include <tencentcloud/vod/v20180717/model/DeleteWatermarkTemplateResponse.h>
#include <tencentcloud/vod/v20180717/model/DeleteWordSamplesRequest.h>
#include <tencentcloud/vod/v20180717/model/DeleteWordSamplesResponse.h>
#include <tencentcloud/vod/v20180717/model/DescribeAIAnalysisTemplatesRequest.h>
#include <tencentcloud/vod/v20180717/model/DescribeAIAnalysisTemplatesResponse.h>
#include <tencentcloud/vod/v20180717/model/DescribeAIRecognitionTemplatesRequest.h>
#include <tencentcloud/vod/v20180717/model/DescribeAIRecognitionTemplatesResponse.h>
#include <tencentcloud/vod/v20180717/model/DescribeAdaptiveDynamicStreamingTemplatesRequest.h>
#include <tencentcloud/vod/v20180717/model/DescribeAdaptiveDynamicStreamingTemplatesResponse.h>
#include <tencentcloud/vod/v20180717/model/DescribeAigcApiTokensRequest.h>
#include <tencentcloud/vod/v20180717/model/DescribeAigcApiTokensResponse.h>
#include <tencentcloud/vod/v20180717/model/DescribeAigcFaceInfoRequest.h>
#include <tencentcloud/vod/v20180717/model/DescribeAigcFaceInfoResponse.h>
#include <tencentcloud/vod/v20180717/model/DescribeAigcUsageDataRequest.h>
#include <tencentcloud/vod/v20180717/model/DescribeAigcUsageDataResponse.h>
#include <tencentcloud/vod/v20180717/model/DescribeAllClassRequest.h>
#include <tencentcloud/vod/v20180717/model/DescribeAllClassResponse.h>
#include <tencentcloud/vod/v20180717/model/DescribeAnimatedGraphicsTemplatesRequest.h>
#include <tencentcloud/vod/v20180717/model/DescribeAnimatedGraphicsTemplatesResponse.h>
#include <tencentcloud/vod/v20180717/model/DescribeBlindWatermarkTemplatesRequest.h>
#include <tencentcloud/vod/v20180717/model/DescribeBlindWatermarkTemplatesResponse.h>
#include <tencentcloud/vod/v20180717/model/DescribeCDNStatDetailsRequest.h>
#include <tencentcloud/vod/v20180717/model/DescribeCDNStatDetailsResponse.h>
#include <tencentcloud/vod/v20180717/model/DescribeCDNUsageDataRequest.h>
#include <tencentcloud/vod/v20180717/model/DescribeCDNUsageDataResponse.h>
#include <tencentcloud/vod/v20180717/model/DescribeCLSLogsetsRequest.h>
#include <tencentcloud/vod/v20180717/model/DescribeCLSLogsetsResponse.h>
#include <tencentcloud/vod/v20180717/model/DescribeCLSPushTargetsRequest.h>
#include <tencentcloud/vod/v20180717/model/DescribeCLSPushTargetsResponse.h>
#include <tencentcloud/vod/v20180717/model/DescribeCLSTopicsRequest.h>
#include <tencentcloud/vod/v20180717/model/DescribeCLSTopicsResponse.h>
#include <tencentcloud/vod/v20180717/model/DescribeCdnLogsRequest.h>
#include <tencentcloud/vod/v20180717/model/DescribeCdnLogsResponse.h>
#include <tencentcloud/vod/v20180717/model/DescribeClientUploadAccelerationUsageDataRequest.h>
#include <tencentcloud/vod/v20180717/model/DescribeClientUploadAccelerationUsageDataResponse.h>
#include <tencentcloud/vod/v20180717/model/DescribeContentReviewTemplatesRequest.h>
#include <tencentcloud/vod/v20180717/model/DescribeContentReviewTemplatesResponse.h>
#include <tencentcloud/vod/v20180717/model/DescribeCurrentPlaylistRequest.h>
#include <tencentcloud/vod/v20180717/model/DescribeCurrentPlaylistResponse.h>
#include <tencentcloud/vod/v20180717/model/DescribeDailyMediaPlayStatRequest.h>
#include <tencentcloud/vod/v20180717/model/DescribeDailyMediaPlayStatResponse.h>
#include <tencentcloud/vod/v20180717/model/DescribeDailyMostPlayedStatRequest.h>
#include <tencentcloud/vod/v20180717/model/DescribeDailyMostPlayedStatResponse.h>
#include <tencentcloud/vod/v20180717/model/DescribeDailyPlayStatFileListRequest.h>
#include <tencentcloud/vod/v20180717/model/DescribeDailyPlayStatFileListResponse.h>
#include <tencentcloud/vod/v20180717/model/DescribeDefaultDistributionConfigRequest.h>
#include <tencentcloud/vod/v20180717/model/DescribeDefaultDistributionConfigResponse.h>
#include <tencentcloud/vod/v20180717/model/DescribeDrmDataKeyRequest.h>
#include <tencentcloud/vod/v20180717/model/DescribeDrmDataKeyResponse.h>
#include <tencentcloud/vod/v20180717/model/DescribeDrmKeyProviderInfoRequest.h>
#include <tencentcloud/vod/v20180717/model/DescribeDrmKeyProviderInfoResponse.h>
#include <tencentcloud/vod/v20180717/model/DescribeEnhanceMediaTemplatesRequest.h>
#include <tencentcloud/vod/v20180717/model/DescribeEnhanceMediaTemplatesResponse.h>
#include <tencentcloud/vod/v20180717/model/DescribeEventConfigRequest.h>
#include <tencentcloud/vod/v20180717/model/DescribeEventConfigResponse.h>
#include <tencentcloud/vod/v20180717/model/DescribeEventsStateRequest.h>
#include <tencentcloud/vod/v20180717/model/DescribeEventsStateResponse.h>
#include <tencentcloud/vod/v20180717/model/DescribeFileAttributesRequest.h>
#include <tencentcloud/vod/v20180717/model/DescribeFileAttributesResponse.h>
#include <tencentcloud/vod/v20180717/model/DescribeHeadTailTemplatesRequest.h>
#include <tencentcloud/vod/v20180717/model/DescribeHeadTailTemplatesResponse.h>
#include <tencentcloud/vod/v20180717/model/DescribeImageProcessingTemplatesRequest.h>
#include <tencentcloud/vod/v20180717/model/DescribeImageProcessingTemplatesResponse.h>
#include <tencentcloud/vod/v20180717/model/DescribeImageReviewUsageDataRequest.h>
#include <tencentcloud/vod/v20180717/model/DescribeImageReviewUsageDataResponse.h>
#include <tencentcloud/vod/v20180717/model/DescribeImageSpriteTemplatesRequest.h>
#include <tencentcloud/vod/v20180717/model/DescribeImageSpriteTemplatesResponse.h>
#include <tencentcloud/vod/v20180717/model/DescribeJustInTimeTranscodeTemplatesRequest.h>
#include <tencentcloud/vod/v20180717/model/DescribeJustInTimeTranscodeTemplatesResponse.h>
#include <tencentcloud/vod/v20180717/model/DescribeLLMComprehendTemplatesRequest.h>
#include <tencentcloud/vod/v20180717/model/DescribeLLMComprehendTemplatesResponse.h>
#include <tencentcloud/vod/v20180717/model/DescribeLicenseUsageDataRequest.h>
#include <tencentcloud/vod/v20180717/model/DescribeLicenseUsageDataResponse.h>
#include <tencentcloud/vod/v20180717/model/DescribeMPSTemplatesRequest.h>
#include <tencentcloud/vod/v20180717/model/DescribeMPSTemplatesResponse.h>
#include <tencentcloud/vod/v20180717/model/DescribeMediaInfosRequest.h>
#include <tencentcloud/vod/v20180717/model/DescribeMediaInfosResponse.h>
#include <tencentcloud/vod/v20180717/model/DescribeMediaPlayStatDetailsRequest.h>
#include <tencentcloud/vod/v20180717/model/DescribeMediaPlayStatDetailsResponse.h>
#include <tencentcloud/vod/v20180717/model/DescribeMediaProcessUsageDataRequest.h>
#include <tencentcloud/vod/v20180717/model/DescribeMediaProcessUsageDataResponse.h>
#include <tencentcloud/vod/v20180717/model/DescribePersonSamplesRequest.h>
#include <tencentcloud/vod/v20180717/model/DescribePersonSamplesResponse.h>
#include <tencentcloud/vod/v20180717/model/DescribePrepaidProductsRequest.h>
#include <tencentcloud/vod/v20180717/model/DescribePrepaidProductsResponse.h>
#include <tencentcloud/vod/v20180717/model/DescribeProcedureTemplatesRequest.h>
#include <tencentcloud/vod/v20180717/model/DescribeProcedureTemplatesResponse.h>
#include <tencentcloud/vod/v20180717/model/DescribeProcessImageAsyncTemplatesRequest.h>
#include <tencentcloud/vod/v20180717/model/DescribeProcessImageAsyncTemplatesResponse.h>
#include <tencentcloud/vod/v20180717/model/DescribeQualityInspectTemplatesRequest.h>
#include <tencentcloud/vod/v20180717/model/DescribeQualityInspectTemplatesResponse.h>
#include <tencentcloud/vod/v20180717/model/DescribeRebuildMediaTemplatesRequest.h>
#include <tencentcloud/vod/v20180717/model/DescribeRebuildMediaTemplatesResponse.h>
#include <tencentcloud/vod/v20180717/model/DescribeReviewDetailsRequest.h>
#include <tencentcloud/vod/v20180717/model/DescribeReviewDetailsResponse.h>
#include <tencentcloud/vod/v20180717/model/DescribeReviewTemplatesRequest.h>
#include <tencentcloud/vod/v20180717/model/DescribeReviewTemplatesResponse.h>
#include <tencentcloud/vod/v20180717/model/DescribeRoundPlaysRequest.h>
#include <tencentcloud/vod/v20180717/model/DescribeRoundPlaysResponse.h>
#include <tencentcloud/vod/v20180717/model/DescribeSampleSnapshotTemplatesRequest.h>
#include <tencentcloud/vod/v20180717/model/DescribeSampleSnapshotTemplatesResponse.h>
#include <tencentcloud/vod/v20180717/model/DescribeSnapshotByTimeOffsetTemplatesRequest.h>
#include <tencentcloud/vod/v20180717/model/DescribeSnapshotByTimeOffsetTemplatesResponse.h>
#include <tencentcloud/vod/v20180717/model/DescribeStorageDataRequest.h>
#include <tencentcloud/vod/v20180717/model/DescribeStorageDataResponse.h>
#include <tencentcloud/vod/v20180717/model/DescribeStorageDetailsRequest.h>
#include <tencentcloud/vod/v20180717/model/DescribeStorageDetailsResponse.h>
#include <tencentcloud/vod/v20180717/model/DescribeStorageRegionsRequest.h>
#include <tencentcloud/vod/v20180717/model/DescribeStorageRegionsResponse.h>
#include <tencentcloud/vod/v20180717/model/DescribeSubAppIdsRequest.h>
#include <tencentcloud/vod/v20180717/model/DescribeSubAppIdsResponse.h>
#include <tencentcloud/vod/v20180717/model/DescribeSuperPlayerConfigsRequest.h>
#include <tencentcloud/vod/v20180717/model/DescribeSuperPlayerConfigsResponse.h>
#include <tencentcloud/vod/v20180717/model/DescribeTaskDetailRequest.h>
#include <tencentcloud/vod/v20180717/model/DescribeTaskDetailResponse.h>
#include <tencentcloud/vod/v20180717/model/DescribeTasksRequest.h>
#include <tencentcloud/vod/v20180717/model/DescribeTasksResponse.h>
#include <tencentcloud/vod/v20180717/model/DescribeTranscodeTemplatesRequest.h>
#include <tencentcloud/vod/v20180717/model/DescribeTranscodeTemplatesResponse.h>
#include <tencentcloud/vod/v20180717/model/DescribeVodDomainsRequest.h>
#include <tencentcloud/vod/v20180717/model/DescribeVodDomainsResponse.h>
#include <tencentcloud/vod/v20180717/model/DescribeWatermarkTemplatesRequest.h>
#include <tencentcloud/vod/v20180717/model/DescribeWatermarkTemplatesResponse.h>
#include <tencentcloud/vod/v20180717/model/DescribeWordSamplesRequest.h>
#include <tencentcloud/vod/v20180717/model/DescribeWordSamplesResponse.h>
#include <tencentcloud/vod/v20180717/model/EditMediaRequest.h>
#include <tencentcloud/vod/v20180717/model/EditMediaResponse.h>
#include <tencentcloud/vod/v20180717/model/EnhanceMediaByTemplateRequest.h>
#include <tencentcloud/vod/v20180717/model/EnhanceMediaByTemplateResponse.h>
#include <tencentcloud/vod/v20180717/model/EnhanceMediaQualityRequest.h>
#include <tencentcloud/vod/v20180717/model/EnhanceMediaQualityResponse.h>
#include <tencentcloud/vod/v20180717/model/ExecuteFunctionRequest.h>
#include <tencentcloud/vod/v20180717/model/ExecuteFunctionResponse.h>
#include <tencentcloud/vod/v20180717/model/ExtractBlindWatermarkRequest.h>
#include <tencentcloud/vod/v20180717/model/ExtractBlindWatermarkResponse.h>
#include <tencentcloud/vod/v20180717/model/ExtractCopyRightWatermarkRequest.h>
#include <tencentcloud/vod/v20180717/model/ExtractCopyRightWatermarkResponse.h>
#include <tencentcloud/vod/v20180717/model/ExtractTraceWatermarkRequest.h>
#include <tencentcloud/vod/v20180717/model/ExtractTraceWatermarkResponse.h>
#include <tencentcloud/vod/v20180717/model/FastEditMediaRequest.h>
#include <tencentcloud/vod/v20180717/model/FastEditMediaResponse.h>
#include <tencentcloud/vod/v20180717/model/ForbidMediaDistributionRequest.h>
#include <tencentcloud/vod/v20180717/model/ForbidMediaDistributionResponse.h>
#include <tencentcloud/vod/v20180717/model/HandleCurrentPlaylistRequest.h>
#include <tencentcloud/vod/v20180717/model/HandleCurrentPlaylistResponse.h>
#include <tencentcloud/vod/v20180717/model/ImportMediaKnowledgeRequest.h>
#include <tencentcloud/vod/v20180717/model/ImportMediaKnowledgeResponse.h>
#include <tencentcloud/vod/v20180717/model/InspectMediaQualityRequest.h>
#include <tencentcloud/vod/v20180717/model/InspectMediaQualityResponse.h>
#include <tencentcloud/vod/v20180717/model/ListFilesRequest.h>
#include <tencentcloud/vod/v20180717/model/ListFilesResponse.h>
#include <tencentcloud/vod/v20180717/model/LiveRealTimeClipRequest.h>
#include <tencentcloud/vod/v20180717/model/LiveRealTimeClipResponse.h>
#include <tencentcloud/vod/v20180717/model/ManageTaskRequest.h>
#include <tencentcloud/vod/v20180717/model/ManageTaskResponse.h>
#include <tencentcloud/vod/v20180717/model/ModifyAIAnalysisTemplateRequest.h>
#include <tencentcloud/vod/v20180717/model/ModifyAIAnalysisTemplateResponse.h>
#include <tencentcloud/vod/v20180717/model/ModifyAIRecognitionTemplateRequest.h>
#include <tencentcloud/vod/v20180717/model/ModifyAIRecognitionTemplateResponse.h>
#include <tencentcloud/vod/v20180717/model/ModifyAdaptiveDynamicStreamingTemplateRequest.h>
#include <tencentcloud/vod/v20180717/model/ModifyAdaptiveDynamicStreamingTemplateResponse.h>
#include <tencentcloud/vod/v20180717/model/ModifyAnimatedGraphicsTemplateRequest.h>
#include <tencentcloud/vod/v20180717/model/ModifyAnimatedGraphicsTemplateResponse.h>
#include <tencentcloud/vod/v20180717/model/ModifyBlindWatermarkTemplateRequest.h>
#include <tencentcloud/vod/v20180717/model/ModifyBlindWatermarkTemplateResponse.h>
#include <tencentcloud/vod/v20180717/model/ModifyClassRequest.h>
#include <tencentcloud/vod/v20180717/model/ModifyClassResponse.h>
#include <tencentcloud/vod/v20180717/model/ModifyContentReviewTemplateRequest.h>
#include <tencentcloud/vod/v20180717/model/ModifyContentReviewTemplateResponse.h>
#include <tencentcloud/vod/v20180717/model/ModifyDefaultDistributionConfigRequest.h>
#include <tencentcloud/vod/v20180717/model/ModifyDefaultDistributionConfigResponse.h>
#include <tencentcloud/vod/v20180717/model/ModifyDefaultStorageRegionRequest.h>
#include <tencentcloud/vod/v20180717/model/ModifyDefaultStorageRegionResponse.h>
#include <tencentcloud/vod/v20180717/model/ModifyEnhanceMediaTemplateRequest.h>
#include <tencentcloud/vod/v20180717/model/ModifyEnhanceMediaTemplateResponse.h>
#include <tencentcloud/vod/v20180717/model/ModifyEventConfigRequest.h>
#include <tencentcloud/vod/v20180717/model/ModifyEventConfigResponse.h>
#include <tencentcloud/vod/v20180717/model/ModifyHeadTailTemplateRequest.h>
#include <tencentcloud/vod/v20180717/model/ModifyHeadTailTemplateResponse.h>
#include <tencentcloud/vod/v20180717/model/ModifyImageSpriteTemplateRequest.h>
#include <tencentcloud/vod/v20180717/model/ModifyImageSpriteTemplateResponse.h>
#include <tencentcloud/vod/v20180717/model/ModifyJustInTimeTranscodeTemplateRequest.h>
#include <tencentcloud/vod/v20180717/model/ModifyJustInTimeTranscodeTemplateResponse.h>
#include <tencentcloud/vod/v20180717/model/ModifyLLMComprehendTemplateRequest.h>
#include <tencentcloud/vod/v20180717/model/ModifyLLMComprehendTemplateResponse.h>
#include <tencentcloud/vod/v20180717/model/ModifyMPSTemplateRequest.h>
#include <tencentcloud/vod/v20180717/model/ModifyMPSTemplateResponse.h>
#include <tencentcloud/vod/v20180717/model/ModifyMediaInfoRequest.h>
#include <tencentcloud/vod/v20180717/model/ModifyMediaInfoResponse.h>
#include <tencentcloud/vod/v20180717/model/ModifyMediaStorageClassRequest.h>
#include <tencentcloud/vod/v20180717/model/ModifyMediaStorageClassResponse.h>
#include <tencentcloud/vod/v20180717/model/ModifyPersonSampleRequest.h>
#include <tencentcloud/vod/v20180717/model/ModifyPersonSampleResponse.h>
#include <tencentcloud/vod/v20180717/model/ModifyProcessImageAsyncTemplateRequest.h>
#include <tencentcloud/vod/v20180717/model/ModifyProcessImageAsyncTemplateResponse.h>
#include <tencentcloud/vod/v20180717/model/ModifyQualityInspectTemplateRequest.h>
#include <tencentcloud/vod/v20180717/model/ModifyQualityInspectTemplateResponse.h>
#include <tencentcloud/vod/v20180717/model/ModifyRebuildMediaTemplateRequest.h>
#include <tencentcloud/vod/v20180717/model/ModifyRebuildMediaTemplateResponse.h>
#include <tencentcloud/vod/v20180717/model/ModifyReviewTemplateRequest.h>
#include <tencentcloud/vod/v20180717/model/ModifyReviewTemplateResponse.h>
#include <tencentcloud/vod/v20180717/model/ModifyRoundPlayRequest.h>
#include <tencentcloud/vod/v20180717/model/ModifyRoundPlayResponse.h>
#include <tencentcloud/vod/v20180717/model/ModifySampleSnapshotTemplateRequest.h>
#include <tencentcloud/vod/v20180717/model/ModifySampleSnapshotTemplateResponse.h>
#include <tencentcloud/vod/v20180717/model/ModifySnapshotByTimeOffsetTemplateRequest.h>
#include <tencentcloud/vod/v20180717/model/ModifySnapshotByTimeOffsetTemplateResponse.h>
#include <tencentcloud/vod/v20180717/model/ModifySubAppIdInfoRequest.h>
#include <tencentcloud/vod/v20180717/model/ModifySubAppIdInfoResponse.h>
#include <tencentcloud/vod/v20180717/model/ModifySubAppIdStatusRequest.h>
#include <tencentcloud/vod/v20180717/model/ModifySubAppIdStatusResponse.h>
#include <tencentcloud/vod/v20180717/model/ModifySuperPlayerConfigRequest.h>
#include <tencentcloud/vod/v20180717/model/ModifySuperPlayerConfigResponse.h>
#include <tencentcloud/vod/v20180717/model/ModifyTranscodeTemplateRequest.h>
#include <tencentcloud/vod/v20180717/model/ModifyTranscodeTemplateResponse.h>
#include <tencentcloud/vod/v20180717/model/ModifyVodDomainAccelerateConfigRequest.h>
#include <tencentcloud/vod/v20180717/model/ModifyVodDomainAccelerateConfigResponse.h>
#include <tencentcloud/vod/v20180717/model/ModifyVodDomainConfigRequest.h>
#include <tencentcloud/vod/v20180717/model/ModifyVodDomainConfigResponse.h>
#include <tencentcloud/vod/v20180717/model/ModifyWatermarkTemplateRequest.h>
#include <tencentcloud/vod/v20180717/model/ModifyWatermarkTemplateResponse.h>
#include <tencentcloud/vod/v20180717/model/ModifyWordSampleRequest.h>
#include <tencentcloud/vod/v20180717/model/ModifyWordSampleResponse.h>
#include <tencentcloud/vod/v20180717/model/ParseStreamingManifestRequest.h>
#include <tencentcloud/vod/v20180717/model/ParseStreamingManifestResponse.h>
#include <tencentcloud/vod/v20180717/model/ProcessImageRequest.h>
#include <tencentcloud/vod/v20180717/model/ProcessImageResponse.h>
#include <tencentcloud/vod/v20180717/model/ProcessImageAsyncRequest.h>
#include <tencentcloud/vod/v20180717/model/ProcessImageAsyncResponse.h>
#include <tencentcloud/vod/v20180717/model/ProcessMediaRequest.h>
#include <tencentcloud/vod/v20180717/model/ProcessMediaResponse.h>
#include <tencentcloud/vod/v20180717/model/ProcessMediaByMPSRequest.h>
#include <tencentcloud/vod/v20180717/model/ProcessMediaByMPSResponse.h>
#include <tencentcloud/vod/v20180717/model/ProcessMediaByProcedureRequest.h>
#include <tencentcloud/vod/v20180717/model/ProcessMediaByProcedureResponse.h>
#include <tencentcloud/vod/v20180717/model/ProcessMediaByUrlRequest.h>
#include <tencentcloud/vod/v20180717/model/ProcessMediaByUrlResponse.h>
#include <tencentcloud/vod/v20180717/model/PullEventsRequest.h>
#include <tencentcloud/vod/v20180717/model/PullEventsResponse.h>
#include <tencentcloud/vod/v20180717/model/PullUploadRequest.h>
#include <tencentcloud/vod/v20180717/model/PullUploadResponse.h>
#include <tencentcloud/vod/v20180717/model/PushUrlCacheRequest.h>
#include <tencentcloud/vod/v20180717/model/PushUrlCacheResponse.h>
#include <tencentcloud/vod/v20180717/model/RebuildMediaRequest.h>
#include <tencentcloud/vod/v20180717/model/RebuildMediaResponse.h>
#include <tencentcloud/vod/v20180717/model/RebuildMediaByTemplateRequest.h>
#include <tencentcloud/vod/v20180717/model/RebuildMediaByTemplateResponse.h>
#include <tencentcloud/vod/v20180717/model/RefreshUrlCacheRequest.h>
#include <tencentcloud/vod/v20180717/model/RefreshUrlCacheResponse.h>
#include <tencentcloud/vod/v20180717/model/RemoveWatermarkRequest.h>
#include <tencentcloud/vod/v20180717/model/RemoveWatermarkResponse.h>
#include <tencentcloud/vod/v20180717/model/ResetProcedureTemplateRequest.h>
#include <tencentcloud/vod/v20180717/model/ResetProcedureTemplateResponse.h>
#include <tencentcloud/vod/v20180717/model/RestoreMediaRequest.h>
#include <tencentcloud/vod/v20180717/model/RestoreMediaResponse.h>
#include <tencentcloud/vod/v20180717/model/ReviewAudioVideoRequest.h>
#include <tencentcloud/vod/v20180717/model/ReviewAudioVideoResponse.h>
#include <tencentcloud/vod/v20180717/model/ReviewImageRequest.h>
#include <tencentcloud/vod/v20180717/model/ReviewImageResponse.h>
#include <tencentcloud/vod/v20180717/model/SearchMediaRequest.h>
#include <tencentcloud/vod/v20180717/model/SearchMediaResponse.h>
#include <tencentcloud/vod/v20180717/model/SearchMediaBySemanticsRequest.h>
#include <tencentcloud/vod/v20180717/model/SearchMediaBySemanticsResponse.h>
#include <tencentcloud/vod/v20180717/model/SetCLSPushTargetRequest.h>
#include <tencentcloud/vod/v20180717/model/SetCLSPushTargetResponse.h>
#include <tencentcloud/vod/v20180717/model/SetDrmKeyProviderInfoRequest.h>
#include <tencentcloud/vod/v20180717/model/SetDrmKeyProviderInfoResponse.h>
#include <tencentcloud/vod/v20180717/model/SetVodDomainCertificateRequest.h>
#include <tencentcloud/vod/v20180717/model/SetVodDomainCertificateResponse.h>
#include <tencentcloud/vod/v20180717/model/SimpleHlsClipRequest.h>
#include <tencentcloud/vod/v20180717/model/SimpleHlsClipResponse.h>
#include <tencentcloud/vod/v20180717/model/SplitMediaRequest.h>
#include <tencentcloud/vod/v20180717/model/SplitMediaResponse.h>
#include <tencentcloud/vod/v20180717/model/VerifyDomainRecordRequest.h>
#include <tencentcloud/vod/v20180717/model/VerifyDomainRecordResponse.h>
#include <tencentcloud/vod/v20180717/model/WeChatMiniProgramPublishRequest.h>
#include <tencentcloud/vod/v20180717/model/WeChatMiniProgramPublishResponse.h>


namespace TencentCloud
{
    namespace Vod
    {
        namespace V20180717
        {
            class VodClient : public AbstractClient
            {
            public:
                VodClient(const Credential &credential, const std::string &region);
                VodClient(const Credential &credential, const std::string &region, const ClientProfile &profile);

                typedef Outcome<Core::Error, Model::ApplyUploadResponse> ApplyUploadOutcome;
                typedef std::future<ApplyUploadOutcome> ApplyUploadOutcomeCallable;
                typedef std::function<void(const VodClient*, const Model::ApplyUploadRequest&, ApplyUploadOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ApplyUploadAsyncHandler;
                typedef Outcome<Core::Error, Model::AttachMediaSubtitlesResponse> AttachMediaSubtitlesOutcome;
                typedef std::future<AttachMediaSubtitlesOutcome> AttachMediaSubtitlesOutcomeCallable;
                typedef std::function<void(const VodClient*, const Model::AttachMediaSubtitlesRequest&, AttachMediaSubtitlesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> AttachMediaSubtitlesAsyncHandler;
                typedef Outcome<Core::Error, Model::CommitUploadResponse> CommitUploadOutcome;
                typedef std::future<CommitUploadOutcome> CommitUploadOutcomeCallable;
                typedef std::function<void(const VodClient*, const Model::CommitUploadRequest&, CommitUploadOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CommitUploadAsyncHandler;
                typedef Outcome<Core::Error, Model::ComposeMediaResponse> ComposeMediaOutcome;
                typedef std::future<ComposeMediaOutcome> ComposeMediaOutcomeCallable;
                typedef std::function<void(const VodClient*, const Model::ComposeMediaRequest&, ComposeMediaOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ComposeMediaAsyncHandler;
                typedef Outcome<Core::Error, Model::ConfirmEventsResponse> ConfirmEventsOutcome;
                typedef std::future<ConfirmEventsOutcome> ConfirmEventsOutcomeCallable;
                typedef std::function<void(const VodClient*, const Model::ConfirmEventsRequest&, ConfirmEventsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ConfirmEventsAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateAIAnalysisTemplateResponse> CreateAIAnalysisTemplateOutcome;
                typedef std::future<CreateAIAnalysisTemplateOutcome> CreateAIAnalysisTemplateOutcomeCallable;
                typedef std::function<void(const VodClient*, const Model::CreateAIAnalysisTemplateRequest&, CreateAIAnalysisTemplateOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateAIAnalysisTemplateAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateAIRecognitionTemplateResponse> CreateAIRecognitionTemplateOutcome;
                typedef std::future<CreateAIRecognitionTemplateOutcome> CreateAIRecognitionTemplateOutcomeCallable;
                typedef std::function<void(const VodClient*, const Model::CreateAIRecognitionTemplateRequest&, CreateAIRecognitionTemplateOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateAIRecognitionTemplateAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateAdaptiveDynamicStreamingTemplateResponse> CreateAdaptiveDynamicStreamingTemplateOutcome;
                typedef std::future<CreateAdaptiveDynamicStreamingTemplateOutcome> CreateAdaptiveDynamicStreamingTemplateOutcomeCallable;
                typedef std::function<void(const VodClient*, const Model::CreateAdaptiveDynamicStreamingTemplateRequest&, CreateAdaptiveDynamicStreamingTemplateOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateAdaptiveDynamicStreamingTemplateAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateAigcAdvancedCustomElementResponse> CreateAigcAdvancedCustomElementOutcome;
                typedef std::future<CreateAigcAdvancedCustomElementOutcome> CreateAigcAdvancedCustomElementOutcomeCallable;
                typedef std::function<void(const VodClient*, const Model::CreateAigcAdvancedCustomElementRequest&, CreateAigcAdvancedCustomElementOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateAigcAdvancedCustomElementAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateAigcApiTokenResponse> CreateAigcApiTokenOutcome;
                typedef std::future<CreateAigcApiTokenOutcome> CreateAigcApiTokenOutcomeCallable;
                typedef std::function<void(const VodClient*, const Model::CreateAigcApiTokenRequest&, CreateAigcApiTokenOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateAigcApiTokenAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateAigcCustomElementResponse> CreateAigcCustomElementOutcome;
                typedef std::future<CreateAigcCustomElementOutcome> CreateAigcCustomElementOutcomeCallable;
                typedef std::function<void(const VodClient*, const Model::CreateAigcCustomElementRequest&, CreateAigcCustomElementOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateAigcCustomElementAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateAigcCustomVoiceResponse> CreateAigcCustomVoiceOutcome;
                typedef std::future<CreateAigcCustomVoiceOutcome> CreateAigcCustomVoiceOutcomeCallable;
                typedef std::function<void(const VodClient*, const Model::CreateAigcCustomVoiceRequest&, CreateAigcCustomVoiceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateAigcCustomVoiceAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateAigcImageTaskResponse> CreateAigcImageTaskOutcome;
                typedef std::future<CreateAigcImageTaskOutcome> CreateAigcImageTaskOutcomeCallable;
                typedef std::function<void(const VodClient*, const Model::CreateAigcImageTaskRequest&, CreateAigcImageTaskOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateAigcImageTaskAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateAigcSubjectResponse> CreateAigcSubjectOutcome;
                typedef std::future<CreateAigcSubjectOutcome> CreateAigcSubjectOutcomeCallable;
                typedef std::function<void(const VodClient*, const Model::CreateAigcSubjectRequest&, CreateAigcSubjectOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateAigcSubjectAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateAigcVideoRedrawTaskResponse> CreateAigcVideoRedrawTaskOutcome;
                typedef std::future<CreateAigcVideoRedrawTaskOutcome> CreateAigcVideoRedrawTaskOutcomeCallable;
                typedef std::function<void(const VodClient*, const Model::CreateAigcVideoRedrawTaskRequest&, CreateAigcVideoRedrawTaskOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateAigcVideoRedrawTaskAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateAigcVideoTaskResponse> CreateAigcVideoTaskOutcome;
                typedef std::future<CreateAigcVideoTaskOutcome> CreateAigcVideoTaskOutcomeCallable;
                typedef std::function<void(const VodClient*, const Model::CreateAigcVideoTaskRequest&, CreateAigcVideoTaskOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateAigcVideoTaskAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateAnimatedGraphicsTemplateResponse> CreateAnimatedGraphicsTemplateOutcome;
                typedef std::future<CreateAnimatedGraphicsTemplateOutcome> CreateAnimatedGraphicsTemplateOutcomeCallable;
                typedef std::function<void(const VodClient*, const Model::CreateAnimatedGraphicsTemplateRequest&, CreateAnimatedGraphicsTemplateOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateAnimatedGraphicsTemplateAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateBlindWatermarkTemplateResponse> CreateBlindWatermarkTemplateOutcome;
                typedef std::future<CreateBlindWatermarkTemplateOutcome> CreateBlindWatermarkTemplateOutcomeCallable;
                typedef std::function<void(const VodClient*, const Model::CreateBlindWatermarkTemplateRequest&, CreateBlindWatermarkTemplateOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateBlindWatermarkTemplateAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateCLSLogsetResponse> CreateCLSLogsetOutcome;
                typedef std::future<CreateCLSLogsetOutcome> CreateCLSLogsetOutcomeCallable;
                typedef std::function<void(const VodClient*, const Model::CreateCLSLogsetRequest&, CreateCLSLogsetOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateCLSLogsetAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateCLSTopicResponse> CreateCLSTopicOutcome;
                typedef std::future<CreateCLSTopicOutcome> CreateCLSTopicOutcomeCallable;
                typedef std::function<void(const VodClient*, const Model::CreateCLSTopicRequest&, CreateCLSTopicOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateCLSTopicAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateClassResponse> CreateClassOutcome;
                typedef std::future<CreateClassOutcome> CreateClassOutcomeCallable;
                typedef std::function<void(const VodClient*, const Model::CreateClassRequest&, CreateClassOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateClassAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateComplexAdaptiveDynamicStreamingTaskResponse> CreateComplexAdaptiveDynamicStreamingTaskOutcome;
                typedef std::future<CreateComplexAdaptiveDynamicStreamingTaskOutcome> CreateComplexAdaptiveDynamicStreamingTaskOutcomeCallable;
                typedef std::function<void(const VodClient*, const Model::CreateComplexAdaptiveDynamicStreamingTaskRequest&, CreateComplexAdaptiveDynamicStreamingTaskOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateComplexAdaptiveDynamicStreamingTaskAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateContentReviewTemplateResponse> CreateContentReviewTemplateOutcome;
                typedef std::future<CreateContentReviewTemplateOutcome> CreateContentReviewTemplateOutcomeCallable;
                typedef std::function<void(const VodClient*, const Model::CreateContentReviewTemplateRequest&, CreateContentReviewTemplateOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateContentReviewTemplateAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateDomainVerifyRecordResponse> CreateDomainVerifyRecordOutcome;
                typedef std::future<CreateDomainVerifyRecordOutcome> CreateDomainVerifyRecordOutcomeCallable;
                typedef std::function<void(const VodClient*, const Model::CreateDomainVerifyRecordRequest&, CreateDomainVerifyRecordOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateDomainVerifyRecordAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateEnhanceMediaTemplateResponse> CreateEnhanceMediaTemplateOutcome;
                typedef std::future<CreateEnhanceMediaTemplateOutcome> CreateEnhanceMediaTemplateOutcomeCallable;
                typedef std::function<void(const VodClient*, const Model::CreateEnhanceMediaTemplateRequest&, CreateEnhanceMediaTemplateOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateEnhanceMediaTemplateAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateHeadTailTemplateResponse> CreateHeadTailTemplateOutcome;
                typedef std::future<CreateHeadTailTemplateOutcome> CreateHeadTailTemplateOutcomeCallable;
                typedef std::function<void(const VodClient*, const Model::CreateHeadTailTemplateRequest&, CreateHeadTailTemplateOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateHeadTailTemplateAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateImageProcessingTemplateResponse> CreateImageProcessingTemplateOutcome;
                typedef std::future<CreateImageProcessingTemplateOutcome> CreateImageProcessingTemplateOutcomeCallable;
                typedef std::function<void(const VodClient*, const Model::CreateImageProcessingTemplateRequest&, CreateImageProcessingTemplateOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateImageProcessingTemplateAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateImageSpriteTemplateResponse> CreateImageSpriteTemplateOutcome;
                typedef std::future<CreateImageSpriteTemplateOutcome> CreateImageSpriteTemplateOutcomeCallable;
                typedef std::function<void(const VodClient*, const Model::CreateImageSpriteTemplateRequest&, CreateImageSpriteTemplateOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateImageSpriteTemplateAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateJustInTimeTranscodeTemplateResponse> CreateJustInTimeTranscodeTemplateOutcome;
                typedef std::future<CreateJustInTimeTranscodeTemplateOutcome> CreateJustInTimeTranscodeTemplateOutcomeCallable;
                typedef std::function<void(const VodClient*, const Model::CreateJustInTimeTranscodeTemplateRequest&, CreateJustInTimeTranscodeTemplateOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateJustInTimeTranscodeTemplateAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateLLMComprehendTemplateResponse> CreateLLMComprehendTemplateOutcome;
                typedef std::future<CreateLLMComprehendTemplateOutcome> CreateLLMComprehendTemplateOutcomeCallable;
                typedef std::function<void(const VodClient*, const Model::CreateLLMComprehendTemplateRequest&, CreateLLMComprehendTemplateOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateLLMComprehendTemplateAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateMPSTemplateResponse> CreateMPSTemplateOutcome;
                typedef std::future<CreateMPSTemplateOutcome> CreateMPSTemplateOutcomeCallable;
                typedef std::function<void(const VodClient*, const Model::CreateMPSTemplateRequest&, CreateMPSTemplateOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateMPSTemplateAsyncHandler;
                typedef Outcome<Core::Error, Model::CreatePersonSampleResponse> CreatePersonSampleOutcome;
                typedef std::future<CreatePersonSampleOutcome> CreatePersonSampleOutcomeCallable;
                typedef std::function<void(const VodClient*, const Model::CreatePersonSampleRequest&, CreatePersonSampleOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreatePersonSampleAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateProcedureTemplateResponse> CreateProcedureTemplateOutcome;
                typedef std::future<CreateProcedureTemplateOutcome> CreateProcedureTemplateOutcomeCallable;
                typedef std::function<void(const VodClient*, const Model::CreateProcedureTemplateRequest&, CreateProcedureTemplateOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateProcedureTemplateAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateProcessImageAsyncTemplateResponse> CreateProcessImageAsyncTemplateOutcome;
                typedef std::future<CreateProcessImageAsyncTemplateOutcome> CreateProcessImageAsyncTemplateOutcomeCallable;
                typedef std::function<void(const VodClient*, const Model::CreateProcessImageAsyncTemplateRequest&, CreateProcessImageAsyncTemplateOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateProcessImageAsyncTemplateAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateQualityInspectTemplateResponse> CreateQualityInspectTemplateOutcome;
                typedef std::future<CreateQualityInspectTemplateOutcome> CreateQualityInspectTemplateOutcomeCallable;
                typedef std::function<void(const VodClient*, const Model::CreateQualityInspectTemplateRequest&, CreateQualityInspectTemplateOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateQualityInspectTemplateAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateRebuildMediaTemplateResponse> CreateRebuildMediaTemplateOutcome;
                typedef std::future<CreateRebuildMediaTemplateOutcome> CreateRebuildMediaTemplateOutcomeCallable;
                typedef std::function<void(const VodClient*, const Model::CreateRebuildMediaTemplateRequest&, CreateRebuildMediaTemplateOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateRebuildMediaTemplateAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateReviewTemplateResponse> CreateReviewTemplateOutcome;
                typedef std::future<CreateReviewTemplateOutcome> CreateReviewTemplateOutcomeCallable;
                typedef std::function<void(const VodClient*, const Model::CreateReviewTemplateRequest&, CreateReviewTemplateOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateReviewTemplateAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateRoundPlayResponse> CreateRoundPlayOutcome;
                typedef std::future<CreateRoundPlayOutcome> CreateRoundPlayOutcomeCallable;
                typedef std::function<void(const VodClient*, const Model::CreateRoundPlayRequest&, CreateRoundPlayOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateRoundPlayAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateSampleSnapshotTemplateResponse> CreateSampleSnapshotTemplateOutcome;
                typedef std::future<CreateSampleSnapshotTemplateOutcome> CreateSampleSnapshotTemplateOutcomeCallable;
                typedef std::function<void(const VodClient*, const Model::CreateSampleSnapshotTemplateRequest&, CreateSampleSnapshotTemplateOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateSampleSnapshotTemplateAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateSceneAigcImageTaskResponse> CreateSceneAigcImageTaskOutcome;
                typedef std::future<CreateSceneAigcImageTaskOutcome> CreateSceneAigcImageTaskOutcomeCallable;
                typedef std::function<void(const VodClient*, const Model::CreateSceneAigcImageTaskRequest&, CreateSceneAigcImageTaskOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateSceneAigcImageTaskAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateSceneAigcVideoTaskResponse> CreateSceneAigcVideoTaskOutcome;
                typedef std::future<CreateSceneAigcVideoTaskOutcome> CreateSceneAigcVideoTaskOutcomeCallable;
                typedef std::function<void(const VodClient*, const Model::CreateSceneAigcVideoTaskRequest&, CreateSceneAigcVideoTaskOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateSceneAigcVideoTaskAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateSnapshotByTimeOffsetTemplateResponse> CreateSnapshotByTimeOffsetTemplateOutcome;
                typedef std::future<CreateSnapshotByTimeOffsetTemplateOutcome> CreateSnapshotByTimeOffsetTemplateOutcomeCallable;
                typedef std::function<void(const VodClient*, const Model::CreateSnapshotByTimeOffsetTemplateRequest&, CreateSnapshotByTimeOffsetTemplateOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateSnapshotByTimeOffsetTemplateAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateStorageRegionResponse> CreateStorageRegionOutcome;
                typedef std::future<CreateStorageRegionOutcome> CreateStorageRegionOutcomeCallable;
                typedef std::function<void(const VodClient*, const Model::CreateStorageRegionRequest&, CreateStorageRegionOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateStorageRegionAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateSubAppIdResponse> CreateSubAppIdOutcome;
                typedef std::future<CreateSubAppIdOutcome> CreateSubAppIdOutcomeCallable;
                typedef std::function<void(const VodClient*, const Model::CreateSubAppIdRequest&, CreateSubAppIdOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateSubAppIdAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateSuperPlayerConfigResponse> CreateSuperPlayerConfigOutcome;
                typedef std::future<CreateSuperPlayerConfigOutcome> CreateSuperPlayerConfigOutcomeCallable;
                typedef std::function<void(const VodClient*, const Model::CreateSuperPlayerConfigRequest&, CreateSuperPlayerConfigOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateSuperPlayerConfigAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateTranscodeTemplateResponse> CreateTranscodeTemplateOutcome;
                typedef std::future<CreateTranscodeTemplateOutcome> CreateTranscodeTemplateOutcomeCallable;
                typedef std::function<void(const VodClient*, const Model::CreateTranscodeTemplateRequest&, CreateTranscodeTemplateOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateTranscodeTemplateAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateVodDomainResponse> CreateVodDomainOutcome;
                typedef std::future<CreateVodDomainOutcome> CreateVodDomainOutcomeCallable;
                typedef std::function<void(const VodClient*, const Model::CreateVodDomainRequest&, CreateVodDomainOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateVodDomainAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateWatermarkTemplateResponse> CreateWatermarkTemplateOutcome;
                typedef std::future<CreateWatermarkTemplateOutcome> CreateWatermarkTemplateOutcomeCallable;
                typedef std::function<void(const VodClient*, const Model::CreateWatermarkTemplateRequest&, CreateWatermarkTemplateOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateWatermarkTemplateAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateWordSamplesResponse> CreateWordSamplesOutcome;
                typedef std::future<CreateWordSamplesOutcome> CreateWordSamplesOutcomeCallable;
                typedef std::function<void(const VodClient*, const Model::CreateWordSamplesRequest&, CreateWordSamplesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateWordSamplesAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteAIAnalysisTemplateResponse> DeleteAIAnalysisTemplateOutcome;
                typedef std::future<DeleteAIAnalysisTemplateOutcome> DeleteAIAnalysisTemplateOutcomeCallable;
                typedef std::function<void(const VodClient*, const Model::DeleteAIAnalysisTemplateRequest&, DeleteAIAnalysisTemplateOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteAIAnalysisTemplateAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteAIRecognitionTemplateResponse> DeleteAIRecognitionTemplateOutcome;
                typedef std::future<DeleteAIRecognitionTemplateOutcome> DeleteAIRecognitionTemplateOutcomeCallable;
                typedef std::function<void(const VodClient*, const Model::DeleteAIRecognitionTemplateRequest&, DeleteAIRecognitionTemplateOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteAIRecognitionTemplateAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteAdaptiveDynamicStreamingTemplateResponse> DeleteAdaptiveDynamicStreamingTemplateOutcome;
                typedef std::future<DeleteAdaptiveDynamicStreamingTemplateOutcome> DeleteAdaptiveDynamicStreamingTemplateOutcomeCallable;
                typedef std::function<void(const VodClient*, const Model::DeleteAdaptiveDynamicStreamingTemplateRequest&, DeleteAdaptiveDynamicStreamingTemplateOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteAdaptiveDynamicStreamingTemplateAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteAigcApiTokenResponse> DeleteAigcApiTokenOutcome;
                typedef std::future<DeleteAigcApiTokenOutcome> DeleteAigcApiTokenOutcomeCallable;
                typedef std::function<void(const VodClient*, const Model::DeleteAigcApiTokenRequest&, DeleteAigcApiTokenOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteAigcApiTokenAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteAnimatedGraphicsTemplateResponse> DeleteAnimatedGraphicsTemplateOutcome;
                typedef std::future<DeleteAnimatedGraphicsTemplateOutcome> DeleteAnimatedGraphicsTemplateOutcomeCallable;
                typedef std::function<void(const VodClient*, const Model::DeleteAnimatedGraphicsTemplateRequest&, DeleteAnimatedGraphicsTemplateOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteAnimatedGraphicsTemplateAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteBlindWatermarkTemplateResponse> DeleteBlindWatermarkTemplateOutcome;
                typedef std::future<DeleteBlindWatermarkTemplateOutcome> DeleteBlindWatermarkTemplateOutcomeCallable;
                typedef std::function<void(const VodClient*, const Model::DeleteBlindWatermarkTemplateRequest&, DeleteBlindWatermarkTemplateOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteBlindWatermarkTemplateAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteCLSTopicResponse> DeleteCLSTopicOutcome;
                typedef std::future<DeleteCLSTopicOutcome> DeleteCLSTopicOutcomeCallable;
                typedef std::function<void(const VodClient*, const Model::DeleteCLSTopicRequest&, DeleteCLSTopicOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteCLSTopicAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteClassResponse> DeleteClassOutcome;
                typedef std::future<DeleteClassOutcome> DeleteClassOutcomeCallable;
                typedef std::function<void(const VodClient*, const Model::DeleteClassRequest&, DeleteClassOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteClassAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteContentReviewTemplateResponse> DeleteContentReviewTemplateOutcome;
                typedef std::future<DeleteContentReviewTemplateOutcome> DeleteContentReviewTemplateOutcomeCallable;
                typedef std::function<void(const VodClient*, const Model::DeleteContentReviewTemplateRequest&, DeleteContentReviewTemplateOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteContentReviewTemplateAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteEnhanceMediaTemplateResponse> DeleteEnhanceMediaTemplateOutcome;
                typedef std::future<DeleteEnhanceMediaTemplateOutcome> DeleteEnhanceMediaTemplateOutcomeCallable;
                typedef std::function<void(const VodClient*, const Model::DeleteEnhanceMediaTemplateRequest&, DeleteEnhanceMediaTemplateOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteEnhanceMediaTemplateAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteHeadTailTemplateResponse> DeleteHeadTailTemplateOutcome;
                typedef std::future<DeleteHeadTailTemplateOutcome> DeleteHeadTailTemplateOutcomeCallable;
                typedef std::function<void(const VodClient*, const Model::DeleteHeadTailTemplateRequest&, DeleteHeadTailTemplateOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteHeadTailTemplateAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteImageProcessingTemplateResponse> DeleteImageProcessingTemplateOutcome;
                typedef std::future<DeleteImageProcessingTemplateOutcome> DeleteImageProcessingTemplateOutcomeCallable;
                typedef std::function<void(const VodClient*, const Model::DeleteImageProcessingTemplateRequest&, DeleteImageProcessingTemplateOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteImageProcessingTemplateAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteImageSpriteTemplateResponse> DeleteImageSpriteTemplateOutcome;
                typedef std::future<DeleteImageSpriteTemplateOutcome> DeleteImageSpriteTemplateOutcomeCallable;
                typedef std::function<void(const VodClient*, const Model::DeleteImageSpriteTemplateRequest&, DeleteImageSpriteTemplateOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteImageSpriteTemplateAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteJustInTimeTranscodeTemplateResponse> DeleteJustInTimeTranscodeTemplateOutcome;
                typedef std::future<DeleteJustInTimeTranscodeTemplateOutcome> DeleteJustInTimeTranscodeTemplateOutcomeCallable;
                typedef std::function<void(const VodClient*, const Model::DeleteJustInTimeTranscodeTemplateRequest&, DeleteJustInTimeTranscodeTemplateOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteJustInTimeTranscodeTemplateAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteLLMComprehendTemplateResponse> DeleteLLMComprehendTemplateOutcome;
                typedef std::future<DeleteLLMComprehendTemplateOutcome> DeleteLLMComprehendTemplateOutcomeCallable;
                typedef std::function<void(const VodClient*, const Model::DeleteLLMComprehendTemplateRequest&, DeleteLLMComprehendTemplateOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteLLMComprehendTemplateAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteMPSTemplateResponse> DeleteMPSTemplateOutcome;
                typedef std::future<DeleteMPSTemplateOutcome> DeleteMPSTemplateOutcomeCallable;
                typedef std::function<void(const VodClient*, const Model::DeleteMPSTemplateRequest&, DeleteMPSTemplateOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteMPSTemplateAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteMediaResponse> DeleteMediaOutcome;
                typedef std::future<DeleteMediaOutcome> DeleteMediaOutcomeCallable;
                typedef std::function<void(const VodClient*, const Model::DeleteMediaRequest&, DeleteMediaOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteMediaAsyncHandler;
                typedef Outcome<Core::Error, Model::DeletePersonSampleResponse> DeletePersonSampleOutcome;
                typedef std::future<DeletePersonSampleOutcome> DeletePersonSampleOutcomeCallable;
                typedef std::function<void(const VodClient*, const Model::DeletePersonSampleRequest&, DeletePersonSampleOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeletePersonSampleAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteProcedureTemplateResponse> DeleteProcedureTemplateOutcome;
                typedef std::future<DeleteProcedureTemplateOutcome> DeleteProcedureTemplateOutcomeCallable;
                typedef std::function<void(const VodClient*, const Model::DeleteProcedureTemplateRequest&, DeleteProcedureTemplateOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteProcedureTemplateAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteProcessImageAsyncTemplateResponse> DeleteProcessImageAsyncTemplateOutcome;
                typedef std::future<DeleteProcessImageAsyncTemplateOutcome> DeleteProcessImageAsyncTemplateOutcomeCallable;
                typedef std::function<void(const VodClient*, const Model::DeleteProcessImageAsyncTemplateRequest&, DeleteProcessImageAsyncTemplateOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteProcessImageAsyncTemplateAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteQualityInspectTemplateResponse> DeleteQualityInspectTemplateOutcome;
                typedef std::future<DeleteQualityInspectTemplateOutcome> DeleteQualityInspectTemplateOutcomeCallable;
                typedef std::function<void(const VodClient*, const Model::DeleteQualityInspectTemplateRequest&, DeleteQualityInspectTemplateOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteQualityInspectTemplateAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteRebuildMediaTemplateResponse> DeleteRebuildMediaTemplateOutcome;
                typedef std::future<DeleteRebuildMediaTemplateOutcome> DeleteRebuildMediaTemplateOutcomeCallable;
                typedef std::function<void(const VodClient*, const Model::DeleteRebuildMediaTemplateRequest&, DeleteRebuildMediaTemplateOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteRebuildMediaTemplateAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteReviewTemplateResponse> DeleteReviewTemplateOutcome;
                typedef std::future<DeleteReviewTemplateOutcome> DeleteReviewTemplateOutcomeCallable;
                typedef std::function<void(const VodClient*, const Model::DeleteReviewTemplateRequest&, DeleteReviewTemplateOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteReviewTemplateAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteRoundPlayResponse> DeleteRoundPlayOutcome;
                typedef std::future<DeleteRoundPlayOutcome> DeleteRoundPlayOutcomeCallable;
                typedef std::function<void(const VodClient*, const Model::DeleteRoundPlayRequest&, DeleteRoundPlayOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteRoundPlayAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteSampleSnapshotTemplateResponse> DeleteSampleSnapshotTemplateOutcome;
                typedef std::future<DeleteSampleSnapshotTemplateOutcome> DeleteSampleSnapshotTemplateOutcomeCallable;
                typedef std::function<void(const VodClient*, const Model::DeleteSampleSnapshotTemplateRequest&, DeleteSampleSnapshotTemplateOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteSampleSnapshotTemplateAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteSnapshotByTimeOffsetTemplateResponse> DeleteSnapshotByTimeOffsetTemplateOutcome;
                typedef std::future<DeleteSnapshotByTimeOffsetTemplateOutcome> DeleteSnapshotByTimeOffsetTemplateOutcomeCallable;
                typedef std::function<void(const VodClient*, const Model::DeleteSnapshotByTimeOffsetTemplateRequest&, DeleteSnapshotByTimeOffsetTemplateOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteSnapshotByTimeOffsetTemplateAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteSuperPlayerConfigResponse> DeleteSuperPlayerConfigOutcome;
                typedef std::future<DeleteSuperPlayerConfigOutcome> DeleteSuperPlayerConfigOutcomeCallable;
                typedef std::function<void(const VodClient*, const Model::DeleteSuperPlayerConfigRequest&, DeleteSuperPlayerConfigOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteSuperPlayerConfigAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteTranscodeTemplateResponse> DeleteTranscodeTemplateOutcome;
                typedef std::future<DeleteTranscodeTemplateOutcome> DeleteTranscodeTemplateOutcomeCallable;
                typedef std::function<void(const VodClient*, const Model::DeleteTranscodeTemplateRequest&, DeleteTranscodeTemplateOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteTranscodeTemplateAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteVodDomainResponse> DeleteVodDomainOutcome;
                typedef std::future<DeleteVodDomainOutcome> DeleteVodDomainOutcomeCallable;
                typedef std::function<void(const VodClient*, const Model::DeleteVodDomainRequest&, DeleteVodDomainOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteVodDomainAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteWatermarkTemplateResponse> DeleteWatermarkTemplateOutcome;
                typedef std::future<DeleteWatermarkTemplateOutcome> DeleteWatermarkTemplateOutcomeCallable;
                typedef std::function<void(const VodClient*, const Model::DeleteWatermarkTemplateRequest&, DeleteWatermarkTemplateOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteWatermarkTemplateAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteWordSamplesResponse> DeleteWordSamplesOutcome;
                typedef std::future<DeleteWordSamplesOutcome> DeleteWordSamplesOutcomeCallable;
                typedef std::function<void(const VodClient*, const Model::DeleteWordSamplesRequest&, DeleteWordSamplesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteWordSamplesAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeAIAnalysisTemplatesResponse> DescribeAIAnalysisTemplatesOutcome;
                typedef std::future<DescribeAIAnalysisTemplatesOutcome> DescribeAIAnalysisTemplatesOutcomeCallable;
                typedef std::function<void(const VodClient*, const Model::DescribeAIAnalysisTemplatesRequest&, DescribeAIAnalysisTemplatesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAIAnalysisTemplatesAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeAIRecognitionTemplatesResponse> DescribeAIRecognitionTemplatesOutcome;
                typedef std::future<DescribeAIRecognitionTemplatesOutcome> DescribeAIRecognitionTemplatesOutcomeCallable;
                typedef std::function<void(const VodClient*, const Model::DescribeAIRecognitionTemplatesRequest&, DescribeAIRecognitionTemplatesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAIRecognitionTemplatesAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeAdaptiveDynamicStreamingTemplatesResponse> DescribeAdaptiveDynamicStreamingTemplatesOutcome;
                typedef std::future<DescribeAdaptiveDynamicStreamingTemplatesOutcome> DescribeAdaptiveDynamicStreamingTemplatesOutcomeCallable;
                typedef std::function<void(const VodClient*, const Model::DescribeAdaptiveDynamicStreamingTemplatesRequest&, DescribeAdaptiveDynamicStreamingTemplatesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAdaptiveDynamicStreamingTemplatesAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeAigcApiTokensResponse> DescribeAigcApiTokensOutcome;
                typedef std::future<DescribeAigcApiTokensOutcome> DescribeAigcApiTokensOutcomeCallable;
                typedef std::function<void(const VodClient*, const Model::DescribeAigcApiTokensRequest&, DescribeAigcApiTokensOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAigcApiTokensAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeAigcFaceInfoResponse> DescribeAigcFaceInfoOutcome;
                typedef std::future<DescribeAigcFaceInfoOutcome> DescribeAigcFaceInfoOutcomeCallable;
                typedef std::function<void(const VodClient*, const Model::DescribeAigcFaceInfoRequest&, DescribeAigcFaceInfoOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAigcFaceInfoAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeAigcUsageDataResponse> DescribeAigcUsageDataOutcome;
                typedef std::future<DescribeAigcUsageDataOutcome> DescribeAigcUsageDataOutcomeCallable;
                typedef std::function<void(const VodClient*, const Model::DescribeAigcUsageDataRequest&, DescribeAigcUsageDataOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAigcUsageDataAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeAllClassResponse> DescribeAllClassOutcome;
                typedef std::future<DescribeAllClassOutcome> DescribeAllClassOutcomeCallable;
                typedef std::function<void(const VodClient*, const Model::DescribeAllClassRequest&, DescribeAllClassOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAllClassAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeAnimatedGraphicsTemplatesResponse> DescribeAnimatedGraphicsTemplatesOutcome;
                typedef std::future<DescribeAnimatedGraphicsTemplatesOutcome> DescribeAnimatedGraphicsTemplatesOutcomeCallable;
                typedef std::function<void(const VodClient*, const Model::DescribeAnimatedGraphicsTemplatesRequest&, DescribeAnimatedGraphicsTemplatesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAnimatedGraphicsTemplatesAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeBlindWatermarkTemplatesResponse> DescribeBlindWatermarkTemplatesOutcome;
                typedef std::future<DescribeBlindWatermarkTemplatesOutcome> DescribeBlindWatermarkTemplatesOutcomeCallable;
                typedef std::function<void(const VodClient*, const Model::DescribeBlindWatermarkTemplatesRequest&, DescribeBlindWatermarkTemplatesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeBlindWatermarkTemplatesAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeCDNStatDetailsResponse> DescribeCDNStatDetailsOutcome;
                typedef std::future<DescribeCDNStatDetailsOutcome> DescribeCDNStatDetailsOutcomeCallable;
                typedef std::function<void(const VodClient*, const Model::DescribeCDNStatDetailsRequest&, DescribeCDNStatDetailsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeCDNStatDetailsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeCDNUsageDataResponse> DescribeCDNUsageDataOutcome;
                typedef std::future<DescribeCDNUsageDataOutcome> DescribeCDNUsageDataOutcomeCallable;
                typedef std::function<void(const VodClient*, const Model::DescribeCDNUsageDataRequest&, DescribeCDNUsageDataOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeCDNUsageDataAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeCLSLogsetsResponse> DescribeCLSLogsetsOutcome;
                typedef std::future<DescribeCLSLogsetsOutcome> DescribeCLSLogsetsOutcomeCallable;
                typedef std::function<void(const VodClient*, const Model::DescribeCLSLogsetsRequest&, DescribeCLSLogsetsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeCLSLogsetsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeCLSPushTargetsResponse> DescribeCLSPushTargetsOutcome;
                typedef std::future<DescribeCLSPushTargetsOutcome> DescribeCLSPushTargetsOutcomeCallable;
                typedef std::function<void(const VodClient*, const Model::DescribeCLSPushTargetsRequest&, DescribeCLSPushTargetsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeCLSPushTargetsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeCLSTopicsResponse> DescribeCLSTopicsOutcome;
                typedef std::future<DescribeCLSTopicsOutcome> DescribeCLSTopicsOutcomeCallable;
                typedef std::function<void(const VodClient*, const Model::DescribeCLSTopicsRequest&, DescribeCLSTopicsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeCLSTopicsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeCdnLogsResponse> DescribeCdnLogsOutcome;
                typedef std::future<DescribeCdnLogsOutcome> DescribeCdnLogsOutcomeCallable;
                typedef std::function<void(const VodClient*, const Model::DescribeCdnLogsRequest&, DescribeCdnLogsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeCdnLogsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeClientUploadAccelerationUsageDataResponse> DescribeClientUploadAccelerationUsageDataOutcome;
                typedef std::future<DescribeClientUploadAccelerationUsageDataOutcome> DescribeClientUploadAccelerationUsageDataOutcomeCallable;
                typedef std::function<void(const VodClient*, const Model::DescribeClientUploadAccelerationUsageDataRequest&, DescribeClientUploadAccelerationUsageDataOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeClientUploadAccelerationUsageDataAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeContentReviewTemplatesResponse> DescribeContentReviewTemplatesOutcome;
                typedef std::future<DescribeContentReviewTemplatesOutcome> DescribeContentReviewTemplatesOutcomeCallable;
                typedef std::function<void(const VodClient*, const Model::DescribeContentReviewTemplatesRequest&, DescribeContentReviewTemplatesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeContentReviewTemplatesAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeCurrentPlaylistResponse> DescribeCurrentPlaylistOutcome;
                typedef std::future<DescribeCurrentPlaylistOutcome> DescribeCurrentPlaylistOutcomeCallable;
                typedef std::function<void(const VodClient*, const Model::DescribeCurrentPlaylistRequest&, DescribeCurrentPlaylistOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeCurrentPlaylistAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeDailyMediaPlayStatResponse> DescribeDailyMediaPlayStatOutcome;
                typedef std::future<DescribeDailyMediaPlayStatOutcome> DescribeDailyMediaPlayStatOutcomeCallable;
                typedef std::function<void(const VodClient*, const Model::DescribeDailyMediaPlayStatRequest&, DescribeDailyMediaPlayStatOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDailyMediaPlayStatAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeDailyMostPlayedStatResponse> DescribeDailyMostPlayedStatOutcome;
                typedef std::future<DescribeDailyMostPlayedStatOutcome> DescribeDailyMostPlayedStatOutcomeCallable;
                typedef std::function<void(const VodClient*, const Model::DescribeDailyMostPlayedStatRequest&, DescribeDailyMostPlayedStatOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDailyMostPlayedStatAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeDailyPlayStatFileListResponse> DescribeDailyPlayStatFileListOutcome;
                typedef std::future<DescribeDailyPlayStatFileListOutcome> DescribeDailyPlayStatFileListOutcomeCallable;
                typedef std::function<void(const VodClient*, const Model::DescribeDailyPlayStatFileListRequest&, DescribeDailyPlayStatFileListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDailyPlayStatFileListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeDefaultDistributionConfigResponse> DescribeDefaultDistributionConfigOutcome;
                typedef std::future<DescribeDefaultDistributionConfigOutcome> DescribeDefaultDistributionConfigOutcomeCallable;
                typedef std::function<void(const VodClient*, const Model::DescribeDefaultDistributionConfigRequest&, DescribeDefaultDistributionConfigOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDefaultDistributionConfigAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeDrmDataKeyResponse> DescribeDrmDataKeyOutcome;
                typedef std::future<DescribeDrmDataKeyOutcome> DescribeDrmDataKeyOutcomeCallable;
                typedef std::function<void(const VodClient*, const Model::DescribeDrmDataKeyRequest&, DescribeDrmDataKeyOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDrmDataKeyAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeDrmKeyProviderInfoResponse> DescribeDrmKeyProviderInfoOutcome;
                typedef std::future<DescribeDrmKeyProviderInfoOutcome> DescribeDrmKeyProviderInfoOutcomeCallable;
                typedef std::function<void(const VodClient*, const Model::DescribeDrmKeyProviderInfoRequest&, DescribeDrmKeyProviderInfoOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDrmKeyProviderInfoAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeEnhanceMediaTemplatesResponse> DescribeEnhanceMediaTemplatesOutcome;
                typedef std::future<DescribeEnhanceMediaTemplatesOutcome> DescribeEnhanceMediaTemplatesOutcomeCallable;
                typedef std::function<void(const VodClient*, const Model::DescribeEnhanceMediaTemplatesRequest&, DescribeEnhanceMediaTemplatesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeEnhanceMediaTemplatesAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeEventConfigResponse> DescribeEventConfigOutcome;
                typedef std::future<DescribeEventConfigOutcome> DescribeEventConfigOutcomeCallable;
                typedef std::function<void(const VodClient*, const Model::DescribeEventConfigRequest&, DescribeEventConfigOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeEventConfigAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeEventsStateResponse> DescribeEventsStateOutcome;
                typedef std::future<DescribeEventsStateOutcome> DescribeEventsStateOutcomeCallable;
                typedef std::function<void(const VodClient*, const Model::DescribeEventsStateRequest&, DescribeEventsStateOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeEventsStateAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeFileAttributesResponse> DescribeFileAttributesOutcome;
                typedef std::future<DescribeFileAttributesOutcome> DescribeFileAttributesOutcomeCallable;
                typedef std::function<void(const VodClient*, const Model::DescribeFileAttributesRequest&, DescribeFileAttributesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeFileAttributesAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeHeadTailTemplatesResponse> DescribeHeadTailTemplatesOutcome;
                typedef std::future<DescribeHeadTailTemplatesOutcome> DescribeHeadTailTemplatesOutcomeCallable;
                typedef std::function<void(const VodClient*, const Model::DescribeHeadTailTemplatesRequest&, DescribeHeadTailTemplatesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeHeadTailTemplatesAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeImageProcessingTemplatesResponse> DescribeImageProcessingTemplatesOutcome;
                typedef std::future<DescribeImageProcessingTemplatesOutcome> DescribeImageProcessingTemplatesOutcomeCallable;
                typedef std::function<void(const VodClient*, const Model::DescribeImageProcessingTemplatesRequest&, DescribeImageProcessingTemplatesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeImageProcessingTemplatesAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeImageReviewUsageDataResponse> DescribeImageReviewUsageDataOutcome;
                typedef std::future<DescribeImageReviewUsageDataOutcome> DescribeImageReviewUsageDataOutcomeCallable;
                typedef std::function<void(const VodClient*, const Model::DescribeImageReviewUsageDataRequest&, DescribeImageReviewUsageDataOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeImageReviewUsageDataAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeImageSpriteTemplatesResponse> DescribeImageSpriteTemplatesOutcome;
                typedef std::future<DescribeImageSpriteTemplatesOutcome> DescribeImageSpriteTemplatesOutcomeCallable;
                typedef std::function<void(const VodClient*, const Model::DescribeImageSpriteTemplatesRequest&, DescribeImageSpriteTemplatesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeImageSpriteTemplatesAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeJustInTimeTranscodeTemplatesResponse> DescribeJustInTimeTranscodeTemplatesOutcome;
                typedef std::future<DescribeJustInTimeTranscodeTemplatesOutcome> DescribeJustInTimeTranscodeTemplatesOutcomeCallable;
                typedef std::function<void(const VodClient*, const Model::DescribeJustInTimeTranscodeTemplatesRequest&, DescribeJustInTimeTranscodeTemplatesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeJustInTimeTranscodeTemplatesAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeLLMComprehendTemplatesResponse> DescribeLLMComprehendTemplatesOutcome;
                typedef std::future<DescribeLLMComprehendTemplatesOutcome> DescribeLLMComprehendTemplatesOutcomeCallable;
                typedef std::function<void(const VodClient*, const Model::DescribeLLMComprehendTemplatesRequest&, DescribeLLMComprehendTemplatesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeLLMComprehendTemplatesAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeLicenseUsageDataResponse> DescribeLicenseUsageDataOutcome;
                typedef std::future<DescribeLicenseUsageDataOutcome> DescribeLicenseUsageDataOutcomeCallable;
                typedef std::function<void(const VodClient*, const Model::DescribeLicenseUsageDataRequest&, DescribeLicenseUsageDataOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeLicenseUsageDataAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeMPSTemplatesResponse> DescribeMPSTemplatesOutcome;
                typedef std::future<DescribeMPSTemplatesOutcome> DescribeMPSTemplatesOutcomeCallable;
                typedef std::function<void(const VodClient*, const Model::DescribeMPSTemplatesRequest&, DescribeMPSTemplatesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeMPSTemplatesAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeMediaInfosResponse> DescribeMediaInfosOutcome;
                typedef std::future<DescribeMediaInfosOutcome> DescribeMediaInfosOutcomeCallable;
                typedef std::function<void(const VodClient*, const Model::DescribeMediaInfosRequest&, DescribeMediaInfosOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeMediaInfosAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeMediaPlayStatDetailsResponse> DescribeMediaPlayStatDetailsOutcome;
                typedef std::future<DescribeMediaPlayStatDetailsOutcome> DescribeMediaPlayStatDetailsOutcomeCallable;
                typedef std::function<void(const VodClient*, const Model::DescribeMediaPlayStatDetailsRequest&, DescribeMediaPlayStatDetailsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeMediaPlayStatDetailsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeMediaProcessUsageDataResponse> DescribeMediaProcessUsageDataOutcome;
                typedef std::future<DescribeMediaProcessUsageDataOutcome> DescribeMediaProcessUsageDataOutcomeCallable;
                typedef std::function<void(const VodClient*, const Model::DescribeMediaProcessUsageDataRequest&, DescribeMediaProcessUsageDataOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeMediaProcessUsageDataAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribePersonSamplesResponse> DescribePersonSamplesOutcome;
                typedef std::future<DescribePersonSamplesOutcome> DescribePersonSamplesOutcomeCallable;
                typedef std::function<void(const VodClient*, const Model::DescribePersonSamplesRequest&, DescribePersonSamplesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribePersonSamplesAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribePrepaidProductsResponse> DescribePrepaidProductsOutcome;
                typedef std::future<DescribePrepaidProductsOutcome> DescribePrepaidProductsOutcomeCallable;
                typedef std::function<void(const VodClient*, const Model::DescribePrepaidProductsRequest&, DescribePrepaidProductsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribePrepaidProductsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeProcedureTemplatesResponse> DescribeProcedureTemplatesOutcome;
                typedef std::future<DescribeProcedureTemplatesOutcome> DescribeProcedureTemplatesOutcomeCallable;
                typedef std::function<void(const VodClient*, const Model::DescribeProcedureTemplatesRequest&, DescribeProcedureTemplatesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeProcedureTemplatesAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeProcessImageAsyncTemplatesResponse> DescribeProcessImageAsyncTemplatesOutcome;
                typedef std::future<DescribeProcessImageAsyncTemplatesOutcome> DescribeProcessImageAsyncTemplatesOutcomeCallable;
                typedef std::function<void(const VodClient*, const Model::DescribeProcessImageAsyncTemplatesRequest&, DescribeProcessImageAsyncTemplatesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeProcessImageAsyncTemplatesAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeQualityInspectTemplatesResponse> DescribeQualityInspectTemplatesOutcome;
                typedef std::future<DescribeQualityInspectTemplatesOutcome> DescribeQualityInspectTemplatesOutcomeCallable;
                typedef std::function<void(const VodClient*, const Model::DescribeQualityInspectTemplatesRequest&, DescribeQualityInspectTemplatesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeQualityInspectTemplatesAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeRebuildMediaTemplatesResponse> DescribeRebuildMediaTemplatesOutcome;
                typedef std::future<DescribeRebuildMediaTemplatesOutcome> DescribeRebuildMediaTemplatesOutcomeCallable;
                typedef std::function<void(const VodClient*, const Model::DescribeRebuildMediaTemplatesRequest&, DescribeRebuildMediaTemplatesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeRebuildMediaTemplatesAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeReviewDetailsResponse> DescribeReviewDetailsOutcome;
                typedef std::future<DescribeReviewDetailsOutcome> DescribeReviewDetailsOutcomeCallable;
                typedef std::function<void(const VodClient*, const Model::DescribeReviewDetailsRequest&, DescribeReviewDetailsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeReviewDetailsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeReviewTemplatesResponse> DescribeReviewTemplatesOutcome;
                typedef std::future<DescribeReviewTemplatesOutcome> DescribeReviewTemplatesOutcomeCallable;
                typedef std::function<void(const VodClient*, const Model::DescribeReviewTemplatesRequest&, DescribeReviewTemplatesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeReviewTemplatesAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeRoundPlaysResponse> DescribeRoundPlaysOutcome;
                typedef std::future<DescribeRoundPlaysOutcome> DescribeRoundPlaysOutcomeCallable;
                typedef std::function<void(const VodClient*, const Model::DescribeRoundPlaysRequest&, DescribeRoundPlaysOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeRoundPlaysAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeSampleSnapshotTemplatesResponse> DescribeSampleSnapshotTemplatesOutcome;
                typedef std::future<DescribeSampleSnapshotTemplatesOutcome> DescribeSampleSnapshotTemplatesOutcomeCallable;
                typedef std::function<void(const VodClient*, const Model::DescribeSampleSnapshotTemplatesRequest&, DescribeSampleSnapshotTemplatesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeSampleSnapshotTemplatesAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeSnapshotByTimeOffsetTemplatesResponse> DescribeSnapshotByTimeOffsetTemplatesOutcome;
                typedef std::future<DescribeSnapshotByTimeOffsetTemplatesOutcome> DescribeSnapshotByTimeOffsetTemplatesOutcomeCallable;
                typedef std::function<void(const VodClient*, const Model::DescribeSnapshotByTimeOffsetTemplatesRequest&, DescribeSnapshotByTimeOffsetTemplatesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeSnapshotByTimeOffsetTemplatesAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeStorageDataResponse> DescribeStorageDataOutcome;
                typedef std::future<DescribeStorageDataOutcome> DescribeStorageDataOutcomeCallable;
                typedef std::function<void(const VodClient*, const Model::DescribeStorageDataRequest&, DescribeStorageDataOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeStorageDataAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeStorageDetailsResponse> DescribeStorageDetailsOutcome;
                typedef std::future<DescribeStorageDetailsOutcome> DescribeStorageDetailsOutcomeCallable;
                typedef std::function<void(const VodClient*, const Model::DescribeStorageDetailsRequest&, DescribeStorageDetailsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeStorageDetailsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeStorageRegionsResponse> DescribeStorageRegionsOutcome;
                typedef std::future<DescribeStorageRegionsOutcome> DescribeStorageRegionsOutcomeCallable;
                typedef std::function<void(const VodClient*, const Model::DescribeStorageRegionsRequest&, DescribeStorageRegionsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeStorageRegionsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeSubAppIdsResponse> DescribeSubAppIdsOutcome;
                typedef std::future<DescribeSubAppIdsOutcome> DescribeSubAppIdsOutcomeCallable;
                typedef std::function<void(const VodClient*, const Model::DescribeSubAppIdsRequest&, DescribeSubAppIdsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeSubAppIdsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeSuperPlayerConfigsResponse> DescribeSuperPlayerConfigsOutcome;
                typedef std::future<DescribeSuperPlayerConfigsOutcome> DescribeSuperPlayerConfigsOutcomeCallable;
                typedef std::function<void(const VodClient*, const Model::DescribeSuperPlayerConfigsRequest&, DescribeSuperPlayerConfigsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeSuperPlayerConfigsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeTaskDetailResponse> DescribeTaskDetailOutcome;
                typedef std::future<DescribeTaskDetailOutcome> DescribeTaskDetailOutcomeCallable;
                typedef std::function<void(const VodClient*, const Model::DescribeTaskDetailRequest&, DescribeTaskDetailOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeTaskDetailAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeTasksResponse> DescribeTasksOutcome;
                typedef std::future<DescribeTasksOutcome> DescribeTasksOutcomeCallable;
                typedef std::function<void(const VodClient*, const Model::DescribeTasksRequest&, DescribeTasksOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeTasksAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeTranscodeTemplatesResponse> DescribeTranscodeTemplatesOutcome;
                typedef std::future<DescribeTranscodeTemplatesOutcome> DescribeTranscodeTemplatesOutcomeCallable;
                typedef std::function<void(const VodClient*, const Model::DescribeTranscodeTemplatesRequest&, DescribeTranscodeTemplatesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeTranscodeTemplatesAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeVodDomainsResponse> DescribeVodDomainsOutcome;
                typedef std::future<DescribeVodDomainsOutcome> DescribeVodDomainsOutcomeCallable;
                typedef std::function<void(const VodClient*, const Model::DescribeVodDomainsRequest&, DescribeVodDomainsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeVodDomainsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeWatermarkTemplatesResponse> DescribeWatermarkTemplatesOutcome;
                typedef std::future<DescribeWatermarkTemplatesOutcome> DescribeWatermarkTemplatesOutcomeCallable;
                typedef std::function<void(const VodClient*, const Model::DescribeWatermarkTemplatesRequest&, DescribeWatermarkTemplatesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeWatermarkTemplatesAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeWordSamplesResponse> DescribeWordSamplesOutcome;
                typedef std::future<DescribeWordSamplesOutcome> DescribeWordSamplesOutcomeCallable;
                typedef std::function<void(const VodClient*, const Model::DescribeWordSamplesRequest&, DescribeWordSamplesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeWordSamplesAsyncHandler;
                typedef Outcome<Core::Error, Model::EditMediaResponse> EditMediaOutcome;
                typedef std::future<EditMediaOutcome> EditMediaOutcomeCallable;
                typedef std::function<void(const VodClient*, const Model::EditMediaRequest&, EditMediaOutcome, const std::shared_ptr<const AsyncCallerContext>&)> EditMediaAsyncHandler;
                typedef Outcome<Core::Error, Model::EnhanceMediaByTemplateResponse> EnhanceMediaByTemplateOutcome;
                typedef std::future<EnhanceMediaByTemplateOutcome> EnhanceMediaByTemplateOutcomeCallable;
                typedef std::function<void(const VodClient*, const Model::EnhanceMediaByTemplateRequest&, EnhanceMediaByTemplateOutcome, const std::shared_ptr<const AsyncCallerContext>&)> EnhanceMediaByTemplateAsyncHandler;
                typedef Outcome<Core::Error, Model::EnhanceMediaQualityResponse> EnhanceMediaQualityOutcome;
                typedef std::future<EnhanceMediaQualityOutcome> EnhanceMediaQualityOutcomeCallable;
                typedef std::function<void(const VodClient*, const Model::EnhanceMediaQualityRequest&, EnhanceMediaQualityOutcome, const std::shared_ptr<const AsyncCallerContext>&)> EnhanceMediaQualityAsyncHandler;
                typedef Outcome<Core::Error, Model::ExecuteFunctionResponse> ExecuteFunctionOutcome;
                typedef std::future<ExecuteFunctionOutcome> ExecuteFunctionOutcomeCallable;
                typedef std::function<void(const VodClient*, const Model::ExecuteFunctionRequest&, ExecuteFunctionOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ExecuteFunctionAsyncHandler;
                typedef Outcome<Core::Error, Model::ExtractBlindWatermarkResponse> ExtractBlindWatermarkOutcome;
                typedef std::future<ExtractBlindWatermarkOutcome> ExtractBlindWatermarkOutcomeCallable;
                typedef std::function<void(const VodClient*, const Model::ExtractBlindWatermarkRequest&, ExtractBlindWatermarkOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ExtractBlindWatermarkAsyncHandler;
                typedef Outcome<Core::Error, Model::ExtractCopyRightWatermarkResponse> ExtractCopyRightWatermarkOutcome;
                typedef std::future<ExtractCopyRightWatermarkOutcome> ExtractCopyRightWatermarkOutcomeCallable;
                typedef std::function<void(const VodClient*, const Model::ExtractCopyRightWatermarkRequest&, ExtractCopyRightWatermarkOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ExtractCopyRightWatermarkAsyncHandler;
                typedef Outcome<Core::Error, Model::ExtractTraceWatermarkResponse> ExtractTraceWatermarkOutcome;
                typedef std::future<ExtractTraceWatermarkOutcome> ExtractTraceWatermarkOutcomeCallable;
                typedef std::function<void(const VodClient*, const Model::ExtractTraceWatermarkRequest&, ExtractTraceWatermarkOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ExtractTraceWatermarkAsyncHandler;
                typedef Outcome<Core::Error, Model::FastEditMediaResponse> FastEditMediaOutcome;
                typedef std::future<FastEditMediaOutcome> FastEditMediaOutcomeCallable;
                typedef std::function<void(const VodClient*, const Model::FastEditMediaRequest&, FastEditMediaOutcome, const std::shared_ptr<const AsyncCallerContext>&)> FastEditMediaAsyncHandler;
                typedef Outcome<Core::Error, Model::ForbidMediaDistributionResponse> ForbidMediaDistributionOutcome;
                typedef std::future<ForbidMediaDistributionOutcome> ForbidMediaDistributionOutcomeCallable;
                typedef std::function<void(const VodClient*, const Model::ForbidMediaDistributionRequest&, ForbidMediaDistributionOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ForbidMediaDistributionAsyncHandler;
                typedef Outcome<Core::Error, Model::HandleCurrentPlaylistResponse> HandleCurrentPlaylistOutcome;
                typedef std::future<HandleCurrentPlaylistOutcome> HandleCurrentPlaylistOutcomeCallable;
                typedef std::function<void(const VodClient*, const Model::HandleCurrentPlaylistRequest&, HandleCurrentPlaylistOutcome, const std::shared_ptr<const AsyncCallerContext>&)> HandleCurrentPlaylistAsyncHandler;
                typedef Outcome<Core::Error, Model::ImportMediaKnowledgeResponse> ImportMediaKnowledgeOutcome;
                typedef std::future<ImportMediaKnowledgeOutcome> ImportMediaKnowledgeOutcomeCallable;
                typedef std::function<void(const VodClient*, const Model::ImportMediaKnowledgeRequest&, ImportMediaKnowledgeOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ImportMediaKnowledgeAsyncHandler;
                typedef Outcome<Core::Error, Model::InspectMediaQualityResponse> InspectMediaQualityOutcome;
                typedef std::future<InspectMediaQualityOutcome> InspectMediaQualityOutcomeCallable;
                typedef std::function<void(const VodClient*, const Model::InspectMediaQualityRequest&, InspectMediaQualityOutcome, const std::shared_ptr<const AsyncCallerContext>&)> InspectMediaQualityAsyncHandler;
                typedef Outcome<Core::Error, Model::ListFilesResponse> ListFilesOutcome;
                typedef std::future<ListFilesOutcome> ListFilesOutcomeCallable;
                typedef std::function<void(const VodClient*, const Model::ListFilesRequest&, ListFilesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ListFilesAsyncHandler;
                typedef Outcome<Core::Error, Model::LiveRealTimeClipResponse> LiveRealTimeClipOutcome;
                typedef std::future<LiveRealTimeClipOutcome> LiveRealTimeClipOutcomeCallable;
                typedef std::function<void(const VodClient*, const Model::LiveRealTimeClipRequest&, LiveRealTimeClipOutcome, const std::shared_ptr<const AsyncCallerContext>&)> LiveRealTimeClipAsyncHandler;
                typedef Outcome<Core::Error, Model::ManageTaskResponse> ManageTaskOutcome;
                typedef std::future<ManageTaskOutcome> ManageTaskOutcomeCallable;
                typedef std::function<void(const VodClient*, const Model::ManageTaskRequest&, ManageTaskOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ManageTaskAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyAIAnalysisTemplateResponse> ModifyAIAnalysisTemplateOutcome;
                typedef std::future<ModifyAIAnalysisTemplateOutcome> ModifyAIAnalysisTemplateOutcomeCallable;
                typedef std::function<void(const VodClient*, const Model::ModifyAIAnalysisTemplateRequest&, ModifyAIAnalysisTemplateOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyAIAnalysisTemplateAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyAIRecognitionTemplateResponse> ModifyAIRecognitionTemplateOutcome;
                typedef std::future<ModifyAIRecognitionTemplateOutcome> ModifyAIRecognitionTemplateOutcomeCallable;
                typedef std::function<void(const VodClient*, const Model::ModifyAIRecognitionTemplateRequest&, ModifyAIRecognitionTemplateOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyAIRecognitionTemplateAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyAdaptiveDynamicStreamingTemplateResponse> ModifyAdaptiveDynamicStreamingTemplateOutcome;
                typedef std::future<ModifyAdaptiveDynamicStreamingTemplateOutcome> ModifyAdaptiveDynamicStreamingTemplateOutcomeCallable;
                typedef std::function<void(const VodClient*, const Model::ModifyAdaptiveDynamicStreamingTemplateRequest&, ModifyAdaptiveDynamicStreamingTemplateOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyAdaptiveDynamicStreamingTemplateAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyAnimatedGraphicsTemplateResponse> ModifyAnimatedGraphicsTemplateOutcome;
                typedef std::future<ModifyAnimatedGraphicsTemplateOutcome> ModifyAnimatedGraphicsTemplateOutcomeCallable;
                typedef std::function<void(const VodClient*, const Model::ModifyAnimatedGraphicsTemplateRequest&, ModifyAnimatedGraphicsTemplateOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyAnimatedGraphicsTemplateAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyBlindWatermarkTemplateResponse> ModifyBlindWatermarkTemplateOutcome;
                typedef std::future<ModifyBlindWatermarkTemplateOutcome> ModifyBlindWatermarkTemplateOutcomeCallable;
                typedef std::function<void(const VodClient*, const Model::ModifyBlindWatermarkTemplateRequest&, ModifyBlindWatermarkTemplateOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyBlindWatermarkTemplateAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyClassResponse> ModifyClassOutcome;
                typedef std::future<ModifyClassOutcome> ModifyClassOutcomeCallable;
                typedef std::function<void(const VodClient*, const Model::ModifyClassRequest&, ModifyClassOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyClassAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyContentReviewTemplateResponse> ModifyContentReviewTemplateOutcome;
                typedef std::future<ModifyContentReviewTemplateOutcome> ModifyContentReviewTemplateOutcomeCallable;
                typedef std::function<void(const VodClient*, const Model::ModifyContentReviewTemplateRequest&, ModifyContentReviewTemplateOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyContentReviewTemplateAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyDefaultDistributionConfigResponse> ModifyDefaultDistributionConfigOutcome;
                typedef std::future<ModifyDefaultDistributionConfigOutcome> ModifyDefaultDistributionConfigOutcomeCallable;
                typedef std::function<void(const VodClient*, const Model::ModifyDefaultDistributionConfigRequest&, ModifyDefaultDistributionConfigOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyDefaultDistributionConfigAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyDefaultStorageRegionResponse> ModifyDefaultStorageRegionOutcome;
                typedef std::future<ModifyDefaultStorageRegionOutcome> ModifyDefaultStorageRegionOutcomeCallable;
                typedef std::function<void(const VodClient*, const Model::ModifyDefaultStorageRegionRequest&, ModifyDefaultStorageRegionOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyDefaultStorageRegionAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyEnhanceMediaTemplateResponse> ModifyEnhanceMediaTemplateOutcome;
                typedef std::future<ModifyEnhanceMediaTemplateOutcome> ModifyEnhanceMediaTemplateOutcomeCallable;
                typedef std::function<void(const VodClient*, const Model::ModifyEnhanceMediaTemplateRequest&, ModifyEnhanceMediaTemplateOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyEnhanceMediaTemplateAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyEventConfigResponse> ModifyEventConfigOutcome;
                typedef std::future<ModifyEventConfigOutcome> ModifyEventConfigOutcomeCallable;
                typedef std::function<void(const VodClient*, const Model::ModifyEventConfigRequest&, ModifyEventConfigOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyEventConfigAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyHeadTailTemplateResponse> ModifyHeadTailTemplateOutcome;
                typedef std::future<ModifyHeadTailTemplateOutcome> ModifyHeadTailTemplateOutcomeCallable;
                typedef std::function<void(const VodClient*, const Model::ModifyHeadTailTemplateRequest&, ModifyHeadTailTemplateOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyHeadTailTemplateAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyImageSpriteTemplateResponse> ModifyImageSpriteTemplateOutcome;
                typedef std::future<ModifyImageSpriteTemplateOutcome> ModifyImageSpriteTemplateOutcomeCallable;
                typedef std::function<void(const VodClient*, const Model::ModifyImageSpriteTemplateRequest&, ModifyImageSpriteTemplateOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyImageSpriteTemplateAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyJustInTimeTranscodeTemplateResponse> ModifyJustInTimeTranscodeTemplateOutcome;
                typedef std::future<ModifyJustInTimeTranscodeTemplateOutcome> ModifyJustInTimeTranscodeTemplateOutcomeCallable;
                typedef std::function<void(const VodClient*, const Model::ModifyJustInTimeTranscodeTemplateRequest&, ModifyJustInTimeTranscodeTemplateOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyJustInTimeTranscodeTemplateAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyLLMComprehendTemplateResponse> ModifyLLMComprehendTemplateOutcome;
                typedef std::future<ModifyLLMComprehendTemplateOutcome> ModifyLLMComprehendTemplateOutcomeCallable;
                typedef std::function<void(const VodClient*, const Model::ModifyLLMComprehendTemplateRequest&, ModifyLLMComprehendTemplateOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyLLMComprehendTemplateAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyMPSTemplateResponse> ModifyMPSTemplateOutcome;
                typedef std::future<ModifyMPSTemplateOutcome> ModifyMPSTemplateOutcomeCallable;
                typedef std::function<void(const VodClient*, const Model::ModifyMPSTemplateRequest&, ModifyMPSTemplateOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyMPSTemplateAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyMediaInfoResponse> ModifyMediaInfoOutcome;
                typedef std::future<ModifyMediaInfoOutcome> ModifyMediaInfoOutcomeCallable;
                typedef std::function<void(const VodClient*, const Model::ModifyMediaInfoRequest&, ModifyMediaInfoOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyMediaInfoAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyMediaStorageClassResponse> ModifyMediaStorageClassOutcome;
                typedef std::future<ModifyMediaStorageClassOutcome> ModifyMediaStorageClassOutcomeCallable;
                typedef std::function<void(const VodClient*, const Model::ModifyMediaStorageClassRequest&, ModifyMediaStorageClassOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyMediaStorageClassAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyPersonSampleResponse> ModifyPersonSampleOutcome;
                typedef std::future<ModifyPersonSampleOutcome> ModifyPersonSampleOutcomeCallable;
                typedef std::function<void(const VodClient*, const Model::ModifyPersonSampleRequest&, ModifyPersonSampleOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyPersonSampleAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyProcessImageAsyncTemplateResponse> ModifyProcessImageAsyncTemplateOutcome;
                typedef std::future<ModifyProcessImageAsyncTemplateOutcome> ModifyProcessImageAsyncTemplateOutcomeCallable;
                typedef std::function<void(const VodClient*, const Model::ModifyProcessImageAsyncTemplateRequest&, ModifyProcessImageAsyncTemplateOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyProcessImageAsyncTemplateAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyQualityInspectTemplateResponse> ModifyQualityInspectTemplateOutcome;
                typedef std::future<ModifyQualityInspectTemplateOutcome> ModifyQualityInspectTemplateOutcomeCallable;
                typedef std::function<void(const VodClient*, const Model::ModifyQualityInspectTemplateRequest&, ModifyQualityInspectTemplateOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyQualityInspectTemplateAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyRebuildMediaTemplateResponse> ModifyRebuildMediaTemplateOutcome;
                typedef std::future<ModifyRebuildMediaTemplateOutcome> ModifyRebuildMediaTemplateOutcomeCallable;
                typedef std::function<void(const VodClient*, const Model::ModifyRebuildMediaTemplateRequest&, ModifyRebuildMediaTemplateOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyRebuildMediaTemplateAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyReviewTemplateResponse> ModifyReviewTemplateOutcome;
                typedef std::future<ModifyReviewTemplateOutcome> ModifyReviewTemplateOutcomeCallable;
                typedef std::function<void(const VodClient*, const Model::ModifyReviewTemplateRequest&, ModifyReviewTemplateOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyReviewTemplateAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyRoundPlayResponse> ModifyRoundPlayOutcome;
                typedef std::future<ModifyRoundPlayOutcome> ModifyRoundPlayOutcomeCallable;
                typedef std::function<void(const VodClient*, const Model::ModifyRoundPlayRequest&, ModifyRoundPlayOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyRoundPlayAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifySampleSnapshotTemplateResponse> ModifySampleSnapshotTemplateOutcome;
                typedef std::future<ModifySampleSnapshotTemplateOutcome> ModifySampleSnapshotTemplateOutcomeCallable;
                typedef std::function<void(const VodClient*, const Model::ModifySampleSnapshotTemplateRequest&, ModifySampleSnapshotTemplateOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifySampleSnapshotTemplateAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifySnapshotByTimeOffsetTemplateResponse> ModifySnapshotByTimeOffsetTemplateOutcome;
                typedef std::future<ModifySnapshotByTimeOffsetTemplateOutcome> ModifySnapshotByTimeOffsetTemplateOutcomeCallable;
                typedef std::function<void(const VodClient*, const Model::ModifySnapshotByTimeOffsetTemplateRequest&, ModifySnapshotByTimeOffsetTemplateOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifySnapshotByTimeOffsetTemplateAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifySubAppIdInfoResponse> ModifySubAppIdInfoOutcome;
                typedef std::future<ModifySubAppIdInfoOutcome> ModifySubAppIdInfoOutcomeCallable;
                typedef std::function<void(const VodClient*, const Model::ModifySubAppIdInfoRequest&, ModifySubAppIdInfoOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifySubAppIdInfoAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifySubAppIdStatusResponse> ModifySubAppIdStatusOutcome;
                typedef std::future<ModifySubAppIdStatusOutcome> ModifySubAppIdStatusOutcomeCallable;
                typedef std::function<void(const VodClient*, const Model::ModifySubAppIdStatusRequest&, ModifySubAppIdStatusOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifySubAppIdStatusAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifySuperPlayerConfigResponse> ModifySuperPlayerConfigOutcome;
                typedef std::future<ModifySuperPlayerConfigOutcome> ModifySuperPlayerConfigOutcomeCallable;
                typedef std::function<void(const VodClient*, const Model::ModifySuperPlayerConfigRequest&, ModifySuperPlayerConfigOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifySuperPlayerConfigAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyTranscodeTemplateResponse> ModifyTranscodeTemplateOutcome;
                typedef std::future<ModifyTranscodeTemplateOutcome> ModifyTranscodeTemplateOutcomeCallable;
                typedef std::function<void(const VodClient*, const Model::ModifyTranscodeTemplateRequest&, ModifyTranscodeTemplateOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyTranscodeTemplateAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyVodDomainAccelerateConfigResponse> ModifyVodDomainAccelerateConfigOutcome;
                typedef std::future<ModifyVodDomainAccelerateConfigOutcome> ModifyVodDomainAccelerateConfigOutcomeCallable;
                typedef std::function<void(const VodClient*, const Model::ModifyVodDomainAccelerateConfigRequest&, ModifyVodDomainAccelerateConfigOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyVodDomainAccelerateConfigAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyVodDomainConfigResponse> ModifyVodDomainConfigOutcome;
                typedef std::future<ModifyVodDomainConfigOutcome> ModifyVodDomainConfigOutcomeCallable;
                typedef std::function<void(const VodClient*, const Model::ModifyVodDomainConfigRequest&, ModifyVodDomainConfigOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyVodDomainConfigAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyWatermarkTemplateResponse> ModifyWatermarkTemplateOutcome;
                typedef std::future<ModifyWatermarkTemplateOutcome> ModifyWatermarkTemplateOutcomeCallable;
                typedef std::function<void(const VodClient*, const Model::ModifyWatermarkTemplateRequest&, ModifyWatermarkTemplateOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyWatermarkTemplateAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyWordSampleResponse> ModifyWordSampleOutcome;
                typedef std::future<ModifyWordSampleOutcome> ModifyWordSampleOutcomeCallable;
                typedef std::function<void(const VodClient*, const Model::ModifyWordSampleRequest&, ModifyWordSampleOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyWordSampleAsyncHandler;
                typedef Outcome<Core::Error, Model::ParseStreamingManifestResponse> ParseStreamingManifestOutcome;
                typedef std::future<ParseStreamingManifestOutcome> ParseStreamingManifestOutcomeCallable;
                typedef std::function<void(const VodClient*, const Model::ParseStreamingManifestRequest&, ParseStreamingManifestOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ParseStreamingManifestAsyncHandler;
                typedef Outcome<Core::Error, Model::ProcessImageResponse> ProcessImageOutcome;
                typedef std::future<ProcessImageOutcome> ProcessImageOutcomeCallable;
                typedef std::function<void(const VodClient*, const Model::ProcessImageRequest&, ProcessImageOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ProcessImageAsyncHandler;
                typedef Outcome<Core::Error, Model::ProcessImageAsyncResponse> ProcessImageAsyncOutcome;
                typedef std::future<ProcessImageAsyncOutcome> ProcessImageAsyncOutcomeCallable;
                typedef std::function<void(const VodClient*, const Model::ProcessImageAsyncRequest&, ProcessImageAsyncOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ProcessImageAsyncAsyncHandler;
                typedef Outcome<Core::Error, Model::ProcessMediaResponse> ProcessMediaOutcome;
                typedef std::future<ProcessMediaOutcome> ProcessMediaOutcomeCallable;
                typedef std::function<void(const VodClient*, const Model::ProcessMediaRequest&, ProcessMediaOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ProcessMediaAsyncHandler;
                typedef Outcome<Core::Error, Model::ProcessMediaByMPSResponse> ProcessMediaByMPSOutcome;
                typedef std::future<ProcessMediaByMPSOutcome> ProcessMediaByMPSOutcomeCallable;
                typedef std::function<void(const VodClient*, const Model::ProcessMediaByMPSRequest&, ProcessMediaByMPSOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ProcessMediaByMPSAsyncHandler;
                typedef Outcome<Core::Error, Model::ProcessMediaByProcedureResponse> ProcessMediaByProcedureOutcome;
                typedef std::future<ProcessMediaByProcedureOutcome> ProcessMediaByProcedureOutcomeCallable;
                typedef std::function<void(const VodClient*, const Model::ProcessMediaByProcedureRequest&, ProcessMediaByProcedureOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ProcessMediaByProcedureAsyncHandler;
                typedef Outcome<Core::Error, Model::ProcessMediaByUrlResponse> ProcessMediaByUrlOutcome;
                typedef std::future<ProcessMediaByUrlOutcome> ProcessMediaByUrlOutcomeCallable;
                typedef std::function<void(const VodClient*, const Model::ProcessMediaByUrlRequest&, ProcessMediaByUrlOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ProcessMediaByUrlAsyncHandler;
                typedef Outcome<Core::Error, Model::PullEventsResponse> PullEventsOutcome;
                typedef std::future<PullEventsOutcome> PullEventsOutcomeCallable;
                typedef std::function<void(const VodClient*, const Model::PullEventsRequest&, PullEventsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> PullEventsAsyncHandler;
                typedef Outcome<Core::Error, Model::PullUploadResponse> PullUploadOutcome;
                typedef std::future<PullUploadOutcome> PullUploadOutcomeCallable;
                typedef std::function<void(const VodClient*, const Model::PullUploadRequest&, PullUploadOutcome, const std::shared_ptr<const AsyncCallerContext>&)> PullUploadAsyncHandler;
                typedef Outcome<Core::Error, Model::PushUrlCacheResponse> PushUrlCacheOutcome;
                typedef std::future<PushUrlCacheOutcome> PushUrlCacheOutcomeCallable;
                typedef std::function<void(const VodClient*, const Model::PushUrlCacheRequest&, PushUrlCacheOutcome, const std::shared_ptr<const AsyncCallerContext>&)> PushUrlCacheAsyncHandler;
                typedef Outcome<Core::Error, Model::RebuildMediaResponse> RebuildMediaOutcome;
                typedef std::future<RebuildMediaOutcome> RebuildMediaOutcomeCallable;
                typedef std::function<void(const VodClient*, const Model::RebuildMediaRequest&, RebuildMediaOutcome, const std::shared_ptr<const AsyncCallerContext>&)> RebuildMediaAsyncHandler;
                typedef Outcome<Core::Error, Model::RebuildMediaByTemplateResponse> RebuildMediaByTemplateOutcome;
                typedef std::future<RebuildMediaByTemplateOutcome> RebuildMediaByTemplateOutcomeCallable;
                typedef std::function<void(const VodClient*, const Model::RebuildMediaByTemplateRequest&, RebuildMediaByTemplateOutcome, const std::shared_ptr<const AsyncCallerContext>&)> RebuildMediaByTemplateAsyncHandler;
                typedef Outcome<Core::Error, Model::RefreshUrlCacheResponse> RefreshUrlCacheOutcome;
                typedef std::future<RefreshUrlCacheOutcome> RefreshUrlCacheOutcomeCallable;
                typedef std::function<void(const VodClient*, const Model::RefreshUrlCacheRequest&, RefreshUrlCacheOutcome, const std::shared_ptr<const AsyncCallerContext>&)> RefreshUrlCacheAsyncHandler;
                typedef Outcome<Core::Error, Model::RemoveWatermarkResponse> RemoveWatermarkOutcome;
                typedef std::future<RemoveWatermarkOutcome> RemoveWatermarkOutcomeCallable;
                typedef std::function<void(const VodClient*, const Model::RemoveWatermarkRequest&, RemoveWatermarkOutcome, const std::shared_ptr<const AsyncCallerContext>&)> RemoveWatermarkAsyncHandler;
                typedef Outcome<Core::Error, Model::ResetProcedureTemplateResponse> ResetProcedureTemplateOutcome;
                typedef std::future<ResetProcedureTemplateOutcome> ResetProcedureTemplateOutcomeCallable;
                typedef std::function<void(const VodClient*, const Model::ResetProcedureTemplateRequest&, ResetProcedureTemplateOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ResetProcedureTemplateAsyncHandler;
                typedef Outcome<Core::Error, Model::RestoreMediaResponse> RestoreMediaOutcome;
                typedef std::future<RestoreMediaOutcome> RestoreMediaOutcomeCallable;
                typedef std::function<void(const VodClient*, const Model::RestoreMediaRequest&, RestoreMediaOutcome, const std::shared_ptr<const AsyncCallerContext>&)> RestoreMediaAsyncHandler;
                typedef Outcome<Core::Error, Model::ReviewAudioVideoResponse> ReviewAudioVideoOutcome;
                typedef std::future<ReviewAudioVideoOutcome> ReviewAudioVideoOutcomeCallable;
                typedef std::function<void(const VodClient*, const Model::ReviewAudioVideoRequest&, ReviewAudioVideoOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ReviewAudioVideoAsyncHandler;
                typedef Outcome<Core::Error, Model::ReviewImageResponse> ReviewImageOutcome;
                typedef std::future<ReviewImageOutcome> ReviewImageOutcomeCallable;
                typedef std::function<void(const VodClient*, const Model::ReviewImageRequest&, ReviewImageOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ReviewImageAsyncHandler;
                typedef Outcome<Core::Error, Model::SearchMediaResponse> SearchMediaOutcome;
                typedef std::future<SearchMediaOutcome> SearchMediaOutcomeCallable;
                typedef std::function<void(const VodClient*, const Model::SearchMediaRequest&, SearchMediaOutcome, const std::shared_ptr<const AsyncCallerContext>&)> SearchMediaAsyncHandler;
                typedef Outcome<Core::Error, Model::SearchMediaBySemanticsResponse> SearchMediaBySemanticsOutcome;
                typedef std::future<SearchMediaBySemanticsOutcome> SearchMediaBySemanticsOutcomeCallable;
                typedef std::function<void(const VodClient*, const Model::SearchMediaBySemanticsRequest&, SearchMediaBySemanticsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> SearchMediaBySemanticsAsyncHandler;
                typedef Outcome<Core::Error, Model::SetCLSPushTargetResponse> SetCLSPushTargetOutcome;
                typedef std::future<SetCLSPushTargetOutcome> SetCLSPushTargetOutcomeCallable;
                typedef std::function<void(const VodClient*, const Model::SetCLSPushTargetRequest&, SetCLSPushTargetOutcome, const std::shared_ptr<const AsyncCallerContext>&)> SetCLSPushTargetAsyncHandler;
                typedef Outcome<Core::Error, Model::SetDrmKeyProviderInfoResponse> SetDrmKeyProviderInfoOutcome;
                typedef std::future<SetDrmKeyProviderInfoOutcome> SetDrmKeyProviderInfoOutcomeCallable;
                typedef std::function<void(const VodClient*, const Model::SetDrmKeyProviderInfoRequest&, SetDrmKeyProviderInfoOutcome, const std::shared_ptr<const AsyncCallerContext>&)> SetDrmKeyProviderInfoAsyncHandler;
                typedef Outcome<Core::Error, Model::SetVodDomainCertificateResponse> SetVodDomainCertificateOutcome;
                typedef std::future<SetVodDomainCertificateOutcome> SetVodDomainCertificateOutcomeCallable;
                typedef std::function<void(const VodClient*, const Model::SetVodDomainCertificateRequest&, SetVodDomainCertificateOutcome, const std::shared_ptr<const AsyncCallerContext>&)> SetVodDomainCertificateAsyncHandler;
                typedef Outcome<Core::Error, Model::SimpleHlsClipResponse> SimpleHlsClipOutcome;
                typedef std::future<SimpleHlsClipOutcome> SimpleHlsClipOutcomeCallable;
                typedef std::function<void(const VodClient*, const Model::SimpleHlsClipRequest&, SimpleHlsClipOutcome, const std::shared_ptr<const AsyncCallerContext>&)> SimpleHlsClipAsyncHandler;
                typedef Outcome<Core::Error, Model::SplitMediaResponse> SplitMediaOutcome;
                typedef std::future<SplitMediaOutcome> SplitMediaOutcomeCallable;
                typedef std::function<void(const VodClient*, const Model::SplitMediaRequest&, SplitMediaOutcome, const std::shared_ptr<const AsyncCallerContext>&)> SplitMediaAsyncHandler;
                typedef Outcome<Core::Error, Model::VerifyDomainRecordResponse> VerifyDomainRecordOutcome;
                typedef std::future<VerifyDomainRecordOutcome> VerifyDomainRecordOutcomeCallable;
                typedef std::function<void(const VodClient*, const Model::VerifyDomainRecordRequest&, VerifyDomainRecordOutcome, const std::shared_ptr<const AsyncCallerContext>&)> VerifyDomainRecordAsyncHandler;
                typedef Outcome<Core::Error, Model::WeChatMiniProgramPublishResponse> WeChatMiniProgramPublishOutcome;
                typedef std::future<WeChatMiniProgramPublishOutcome> WeChatMiniProgramPublishOutcomeCallable;
                typedef std::function<void(const VodClient*, const Model::WeChatMiniProgramPublishRequest&, WeChatMiniProgramPublishOutcome, const std::shared_ptr<const AsyncCallerContext>&)> WeChatMiniProgramPublishAsyncHandler;



                /**
                 ** 我们强烈建议您使用云点播提供的 [服务端上传 SDK](/document/product/266/9759#1.-.E5.8F.91.E8.B5.B7.E4.B8.8A.E4.BC.A0) 来上传文件。直接调用 API 进行上传的难度和工作量都显著大于使用 SDK。
* 该接口用于申请媒体文件（和封面文件）的上传，获取文件上传到云点播的元信息（包括上传路径、上传签名等），用于后续上传接口。
* 上传流程请参考 [服务端上传综述](/document/product/266/9759)。
                 * @param req ApplyUploadRequest
                 * @return ApplyUploadOutcome
                 */
                ApplyUploadOutcome ApplyUpload(const Model::ApplyUploadRequest &request);
                void ApplyUploadAsync(const Model::ApplyUploadRequest& request, const ApplyUploadAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ApplyUploadOutcomeCallable ApplyUploadCallable(const Model::ApplyUploadRequest& request);

                /**
                 *关联媒资字幕，将指定的字幕关联到转自适应码流模板号对应的媒体输出文件中（或解除关联）。
                 * @param req AttachMediaSubtitlesRequest
                 * @return AttachMediaSubtitlesOutcome
                 */
                AttachMediaSubtitlesOutcome AttachMediaSubtitles(const Model::AttachMediaSubtitlesRequest &request);
                void AttachMediaSubtitlesAsync(const Model::AttachMediaSubtitlesRequest& request, const AttachMediaSubtitlesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                AttachMediaSubtitlesOutcomeCallable AttachMediaSubtitlesCallable(const Model::AttachMediaSubtitlesRequest& request);

                /**
                 *该接口用于确认媒体文件（和封面文件）上传到腾讯云点播的结果，并存储媒体信息，返回文件的播放地址和文件 ID。
                 * @param req CommitUploadRequest
                 * @return CommitUploadOutcome
                 */
                CommitUploadOutcome CommitUpload(const Model::CommitUploadRequest &request);
                void CommitUploadAsync(const Model::CommitUploadRequest& request, const CommitUploadAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CommitUploadOutcomeCallable CommitUploadCallable(const Model::CommitUploadRequest& request);

                /**
                 *该接口用于合成媒体文件，可以达到以下效果：

1. **画面旋转**：对视频、图片的画面旋转一定角度，或按照某个方向翻转。
2. **声音控制**：升高降低视频、音频中声音的音量，或者对视频静音。
3. **画面叠加**：将视频、图片中的画面依序叠加在一起，如实现“画中画”的效果。
4. **声音混合**：将视频、音频中的声音混合在一起（混音）。
5. **声音提取**：将视频中的音频提取出来（不保留画面）。
6. **裁剪**：对视频、音频裁剪出指定时间段。
7. **拼接**：对视频、音频、图片按时间顺序前后拼接。
8. **转场**：将多段视频或图片拼接时，可以在段落之间添加转场效果。

合成后的媒体封装格式可以是 MP4（视频）或 MP3（音频）。如使用事件通知，事件通知的类型为 [视频合成完成](https://cloud.tencent.com/document/product/266/43000)。
                 * @param req ComposeMediaRequest
                 * @return ComposeMediaOutcome
                 */
                ComposeMediaOutcome ComposeMedia(const Model::ComposeMediaRequest &request);
                void ComposeMediaAsync(const Model::ComposeMediaRequest& request, const ComposeMediaAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ComposeMediaOutcomeCallable ComposeMediaCallable(const Model::ComposeMediaRequest& request);

                /**
                 ** 开发者调用拉取事件通知，获取到事件后，必须调用该接口来确认消息已经收到；
* 开发者获取到事件句柄后，等待确认的有效时间为 30 秒，超出 30 秒会报参数错误（4000）；
* 更多参考事件通知的[可靠回调](https://cloud.tencent.com/document/product/266/33779#.E5.8F.AF.E9.9D.A0.E5.9B.9E.E8.B0.83)。
                 * @param req ConfirmEventsRequest
                 * @return ConfirmEventsOutcome
                 */
                ConfirmEventsOutcome ConfirmEvents(const Model::ConfirmEventsRequest &request);
                void ConfirmEventsAsync(const Model::ConfirmEventsRequest& request, const ConfirmEventsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ConfirmEventsOutcomeCallable ConfirmEventsCallable(const Model::ConfirmEventsRequest& request);

                /**
                 *创建用户自定义音视频内容分析模板，数量上限：50。暂时不支持 HLS 格式。
                 * @param req CreateAIAnalysisTemplateRequest
                 * @return CreateAIAnalysisTemplateOutcome
                 */
                CreateAIAnalysisTemplateOutcome CreateAIAnalysisTemplate(const Model::CreateAIAnalysisTemplateRequest &request);
                void CreateAIAnalysisTemplateAsync(const Model::CreateAIAnalysisTemplateRequest& request, const CreateAIAnalysisTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateAIAnalysisTemplateOutcomeCallable CreateAIAnalysisTemplateCallable(const Model::CreateAIAnalysisTemplateRequest& request);

                /**
                 *创建用户自定义音视频内容识别模板，数量上限：50。
                 * @param req CreateAIRecognitionTemplateRequest
                 * @return CreateAIRecognitionTemplateOutcome
                 */
                CreateAIRecognitionTemplateOutcome CreateAIRecognitionTemplate(const Model::CreateAIRecognitionTemplateRequest &request);
                void CreateAIRecognitionTemplateAsync(const Model::CreateAIRecognitionTemplateRequest& request, const CreateAIRecognitionTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateAIRecognitionTemplateOutcomeCallable CreateAIRecognitionTemplateCallable(const Model::CreateAIRecognitionTemplateRequest& request);

                /**
                 *创建转自适应码流模板，数量上限：100。
                 * @param req CreateAdaptiveDynamicStreamingTemplateRequest
                 * @return CreateAdaptiveDynamicStreamingTemplateOutcome
                 */
                CreateAdaptiveDynamicStreamingTemplateOutcome CreateAdaptiveDynamicStreamingTemplate(const Model::CreateAdaptiveDynamicStreamingTemplateRequest &request);
                void CreateAdaptiveDynamicStreamingTemplateAsync(const Model::CreateAdaptiveDynamicStreamingTemplateRequest& request, const CreateAdaptiveDynamicStreamingTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateAdaptiveDynamicStreamingTemplateOutcomeCallable CreateAdaptiveDynamicStreamingTemplateCallable(const Model::CreateAdaptiveDynamicStreamingTemplateRequest& request);

                /**
                 *该接口用于创建 AIGC 高级自定义主体。
                 * @param req CreateAigcAdvancedCustomElementRequest
                 * @return CreateAigcAdvancedCustomElementOutcome
                 */
                CreateAigcAdvancedCustomElementOutcome CreateAigcAdvancedCustomElement(const Model::CreateAigcAdvancedCustomElementRequest &request);
                void CreateAigcAdvancedCustomElementAsync(const Model::CreateAigcAdvancedCustomElementRequest& request, const CreateAigcAdvancedCustomElementAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateAigcAdvancedCustomElementOutcomeCallable CreateAigcAdvancedCustomElementCallable(const Model::CreateAigcAdvancedCustomElementRequest& request);

                /**
                 *创建AIGC调用API的Token。创建后数据同步有延时，约30秒后可查询或删除。
                 * @param req CreateAigcApiTokenRequest
                 * @return CreateAigcApiTokenOutcome
                 */
                CreateAigcApiTokenOutcome CreateAigcApiToken(const Model::CreateAigcApiTokenRequest &request);
                void CreateAigcApiTokenAsync(const Model::CreateAigcApiTokenRequest& request, const CreateAigcApiTokenAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateAigcApiTokenOutcomeCallable CreateAigcApiTokenCallable(const Model::CreateAigcApiTokenRequest& request);

                /**
                 *调用该接口，针对指定模型进行主体创建。
                 * @param req CreateAigcCustomElementRequest
                 * @return CreateAigcCustomElementOutcome
                 */
                CreateAigcCustomElementOutcome CreateAigcCustomElement(const Model::CreateAigcCustomElementRequest &request);
                void CreateAigcCustomElementAsync(const Model::CreateAigcCustomElementRequest& request, const CreateAigcCustomElementAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateAigcCustomElementOutcomeCallable CreateAigcCustomElementCallable(const Model::CreateAigcCustomElementRequest& request);

                /**
                 *该接口用于创建 AIGC 自定义音色。
                 * @param req CreateAigcCustomVoiceRequest
                 * @return CreateAigcCustomVoiceOutcome
                 */
                CreateAigcCustomVoiceOutcome CreateAigcCustomVoice(const Model::CreateAigcCustomVoiceRequest &request);
                void CreateAigcCustomVoiceAsync(const Model::CreateAigcCustomVoiceRequest& request, const CreateAigcCustomVoiceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateAigcCustomVoiceOutcomeCallable CreateAigcCustomVoiceCallable(const Model::CreateAigcCustomVoiceRequest& request);

                /**
                 *该接口用于[生成 AIGC 图片](https://cloud.tencent.com/document/product/266/124473)。<b>接口处于内测阶段，如需使用请[联系我们](https://cloud.tencent.com/online-service?from=sales_sales&source=PRESALE)，接口调用会产生实际费用，</b>请参考点播 [AIGC 生图片计费文档](https://cloud.tencent.com/document/product/266/95125#9c4dc6ff-4b3f-4b25-bf2d-393889dfb9ac)。该功能结算模式为[后付费](https://cloud.tencent.com/document/product/266/2838)，日结客户当天使用将在第二天出账，月结客户将在次月1日统一出上月使用费用。
                 * @param req CreateAigcImageTaskRequest
                 * @return CreateAigcImageTaskOutcome
                 */
                CreateAigcImageTaskOutcome CreateAigcImageTask(const Model::CreateAigcImageTaskRequest &request);
                void CreateAigcImageTaskAsync(const Model::CreateAigcImageTaskRequest& request, const CreateAigcImageTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateAigcImageTaskOutcomeCallable CreateAigcImageTaskCallable(const Model::CreateAigcImageTaskRequest& request);

                /**
                 *该接口用于创建 AIGC 自定义主体（Vidu）。注意，调用本接口会产生费用，请参考[计费文档](https://cloud.tencent.com/document/product/266/95125#96b3b59a-f9e1-49e9-966a-bedb70a4bf12)。
                 * @param req CreateAigcSubjectRequest
                 * @return CreateAigcSubjectOutcome
                 */
                CreateAigcSubjectOutcome CreateAigcSubject(const Model::CreateAigcSubjectRequest &request);
                void CreateAigcSubjectAsync(const Model::CreateAigcSubjectRequest& request, const CreateAigcSubjectAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateAigcSubjectOutcomeCallable CreateAigcSubjectCallable(const Model::CreateAigcSubjectRequest& request);

                /**
                 *该接口用于[生成 AIGC 视频](https://cloud.tencent.com/document/product/266/124474)。<b>接口处于内测阶段，如需使用请[联系我们](https://cloud.tencent.com/online-service?from=sales_sales&source=PRESALE)，接口调用会产生实际费用</b>，请参考点播 [AIGC 生视频计费文档](https://cloud.tencent.com/document/product/266/95125#96b3b59a-f9e1-49e9-966a-bedb70a4bf12)。该功能结算模式为[后付费](https://cloud.tencent.com/document/product/266/2838)，日结客户当天使用将在第二天出账，月结客户将在次月1日统一出上月使用费用。
                 * @param req CreateAigcVideoRedrawTaskRequest
                 * @return CreateAigcVideoRedrawTaskOutcome
                 */
                CreateAigcVideoRedrawTaskOutcome CreateAigcVideoRedrawTask(const Model::CreateAigcVideoRedrawTaskRequest &request);
                void CreateAigcVideoRedrawTaskAsync(const Model::CreateAigcVideoRedrawTaskRequest& request, const CreateAigcVideoRedrawTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateAigcVideoRedrawTaskOutcomeCallable CreateAigcVideoRedrawTaskCallable(const Model::CreateAigcVideoRedrawTaskRequest& request);

                /**
                 *该接口用于[生成 AIGC 视频](https://cloud.tencent.com/document/product/266/124474)。<b>接口处于内测阶段，如需使用请[联系我们](https://cloud.tencent.com/online-service?from=sales_sales&source=PRESALE)，接口调用会产生实际费用</b>，请参考点播 [AIGC 生视频计费文档](https://cloud.tencent.com/document/product/266/95125#96b3b59a-f9e1-49e9-966a-bedb70a4bf12)。该功能结算模式为[后付费](https://cloud.tencent.com/document/product/266/2838)，日结客户当天使用将在第二天出账，月结客户将在次月1日统一出上月使用费用。
                 * @param req CreateAigcVideoTaskRequest
                 * @return CreateAigcVideoTaskOutcome
                 */
                CreateAigcVideoTaskOutcome CreateAigcVideoTask(const Model::CreateAigcVideoTaskRequest &request);
                void CreateAigcVideoTaskAsync(const Model::CreateAigcVideoTaskRequest& request, const CreateAigcVideoTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateAigcVideoTaskOutcomeCallable CreateAigcVideoTaskCallable(const Model::CreateAigcVideoTaskRequest& request);

                /**
                 *创建用户自定义转动图模板，数量上限：16。
                 * @param req CreateAnimatedGraphicsTemplateRequest
                 * @return CreateAnimatedGraphicsTemplateOutcome
                 */
                CreateAnimatedGraphicsTemplateOutcome CreateAnimatedGraphicsTemplate(const Model::CreateAnimatedGraphicsTemplateRequest &request);
                void CreateAnimatedGraphicsTemplateAsync(const Model::CreateAnimatedGraphicsTemplateRequest& request, const CreateAnimatedGraphicsTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateAnimatedGraphicsTemplateOutcomeCallable CreateAnimatedGraphicsTemplateCallable(const Model::CreateAnimatedGraphicsTemplateRequest& request);

                /**
                 *创建用户自定义数字水印模板。
                 * @param req CreateBlindWatermarkTemplateRequest
                 * @return CreateBlindWatermarkTemplateOutcome
                 */
                CreateBlindWatermarkTemplateOutcome CreateBlindWatermarkTemplate(const Model::CreateBlindWatermarkTemplateRequest &request);
                void CreateBlindWatermarkTemplateAsync(const Model::CreateBlindWatermarkTemplateRequest& request, const CreateBlindWatermarkTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateBlindWatermarkTemplateOutcomeCallable CreateBlindWatermarkTemplateCallable(const Model::CreateBlindWatermarkTemplateRequest& request);

                /**
                 *由 VOD 创建新的日志集。
                 * @param req CreateCLSLogsetRequest
                 * @return CreateCLSLogsetOutcome
                 */
                CreateCLSLogsetOutcome CreateCLSLogset(const Model::CreateCLSLogsetRequest &request);
                void CreateCLSLogsetAsync(const Model::CreateCLSLogsetRequest& request, const CreateCLSLogsetAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateCLSLogsetOutcomeCallable CreateCLSLogsetCallable(const Model::CreateCLSLogsetRequest& request);

                /**
                 *创建 VOD 下新的 CLS 日志主题
                 * @param req CreateCLSTopicRequest
                 * @return CreateCLSTopicOutcome
                 */
                CreateCLSTopicOutcome CreateCLSTopic(const Model::CreateCLSTopicRequest &request);
                void CreateCLSTopicAsync(const Model::CreateCLSTopicRequest& request, const CreateCLSTopicAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateCLSTopicOutcomeCallable CreateCLSTopicCallable(const Model::CreateCLSTopicRequest& request);

                /**
                 ** 用于对媒体进行分类管理；
* 该接口不影响既有媒体的分类，如需修改媒体分类，请调用[修改媒体文件属性](/document/product/266/31762)接口。
* 分类层次不可超过 4 层。
* 每个分类的子类数量不可超过 500 个。
                 * @param req CreateClassRequest
                 * @return CreateClassOutcome
                 */
                CreateClassOutcome CreateClass(const Model::CreateClassRequest &request);
                void CreateClassAsync(const Model::CreateClassRequest& request, const CreateClassAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateClassOutcomeCallable CreateClassCallable(const Model::CreateClassRequest& request);

                /**
                 *发起复杂自适应码流处理任务，功能包括：
1. 按指定的自适应码流模板输出 HLS、DASH 自适应码流；
2. 自适应码流的内容保护方案可选择无加密、Widevine 或 FairPlay；
3. 支持添加片头片尾；
4. 输出的自适应码流可包含多语言音频流，每种语言分别来自不同的媒体文件；
5. 输出的自适应码流可包含多语言字幕流。

注意事项：
1. 当使用片头时，片头媒体中的视频流需要和音频流对齐，否则将导致输出的内容音画不同步；
2. 如果输出的自适应码流需要包含主媒体的音频，那么需要在 AudioSet 参数中指定主媒体的 FileId；
3. 使用字幕时，需要先将字幕添加到主媒体，可通过 ModifyMediaInfo 接口或控制台的音视频详情页进行添加；
4. 暂不支持极速高清、水印。
                 * @param req CreateComplexAdaptiveDynamicStreamingTaskRequest
                 * @return CreateComplexAdaptiveDynamicStreamingTaskOutcome
                 */
                CreateComplexAdaptiveDynamicStreamingTaskOutcome CreateComplexAdaptiveDynamicStreamingTask(const Model::CreateComplexAdaptiveDynamicStreamingTaskRequest &request);
                void CreateComplexAdaptiveDynamicStreamingTaskAsync(const Model::CreateComplexAdaptiveDynamicStreamingTaskRequest& request, const CreateComplexAdaptiveDynamicStreamingTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateComplexAdaptiveDynamicStreamingTaskOutcomeCallable CreateComplexAdaptiveDynamicStreamingTaskCallable(const Model::CreateComplexAdaptiveDynamicStreamingTaskRequest& request);

                /**
                 *该 API 已经<font color=red>不再维护</font>，新版审核模板支持音视频审核和图片审核，详细请参考 [创建审核模板](https://cloud.tencent.com/document/api/266/84391)。
创建用户自定义音视频内容审核模板，数量上限：50。
                 * @param req CreateContentReviewTemplateRequest
                 * @return CreateContentReviewTemplateOutcome
                 */
                CreateContentReviewTemplateOutcome CreateContentReviewTemplate(const Model::CreateContentReviewTemplateRequest &request);
                void CreateContentReviewTemplateAsync(const Model::CreateContentReviewTemplateRequest& request, const CreateContentReviewTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateContentReviewTemplateOutcomeCallable CreateContentReviewTemplateCallable(const Model::CreateContentReviewTemplateRequest& request);

                /**
                 *该接口用于生成一条子域名解析，提示客户添加到域名解析上，用于泛域名及域名取回校验归属权。
                 * @param req CreateDomainVerifyRecordRequest
                 * @return CreateDomainVerifyRecordOutcome
                 */
                CreateDomainVerifyRecordOutcome CreateDomainVerifyRecord(const Model::CreateDomainVerifyRecordRequest &request);
                void CreateDomainVerifyRecordAsync(const Model::CreateDomainVerifyRecordRequest& request, const CreateDomainVerifyRecordAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateDomainVerifyRecordOutcomeCallable CreateDomainVerifyRecordCallable(const Model::CreateDomainVerifyRecordRequest& request);

                /**
                 *该 API 已经<font color=red>不再维护</font>，新版 [音画质重生](https://cloud.tencent.com/document/product/266/102571) 接口使用预置模板，详情请参见 [音画质重生模板](https://cloud.tencent.com/document/product/266/102586#50604b3f-0286-4a10-a3f7-18218116aff7)。
创建音画质重生模板。
                 * @param req CreateEnhanceMediaTemplateRequest
                 * @return CreateEnhanceMediaTemplateOutcome
                 */
                CreateEnhanceMediaTemplateOutcome CreateEnhanceMediaTemplate(const Model::CreateEnhanceMediaTemplateRequest &request);
                void CreateEnhanceMediaTemplateAsync(const Model::CreateEnhanceMediaTemplateRequest& request, const CreateEnhanceMediaTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateEnhanceMediaTemplateOutcomeCallable CreateEnhanceMediaTemplateCallable(const Model::CreateEnhanceMediaTemplateRequest& request);

                /**
                 *创建片头片尾模板。
- 最大支持模板数量为 100 个。
                 * @param req CreateHeadTailTemplateRequest
                 * @return CreateHeadTailTemplateOutcome
                 */
                CreateHeadTailTemplateOutcome CreateHeadTailTemplate(const Model::CreateHeadTailTemplateRequest &request);
                void CreateHeadTailTemplateAsync(const Model::CreateHeadTailTemplateRequest& request, const CreateHeadTailTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateHeadTailTemplateOutcomeCallable CreateHeadTailTemplateCallable(const Model::CreateHeadTailTemplateRequest& request);

                /**
                 *创建一个用户自定义的图片处理模板，数量上限：16。最多支持十次操作，例如：裁剪-缩略-裁剪-模糊-缩略-裁剪-缩略-裁剪-模糊-缩略。
                 * @param req CreateImageProcessingTemplateRequest
                 * @return CreateImageProcessingTemplateOutcome
                 */
                CreateImageProcessingTemplateOutcome CreateImageProcessingTemplate(const Model::CreateImageProcessingTemplateRequest &request);
                void CreateImageProcessingTemplateAsync(const Model::CreateImageProcessingTemplateRequest& request, const CreateImageProcessingTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateImageProcessingTemplateOutcomeCallable CreateImageProcessingTemplateCallable(const Model::CreateImageProcessingTemplateRequest& request);

                /**
                 *创建用户自定义雪碧图模板，数量上限：16。
                 * @param req CreateImageSpriteTemplateRequest
                 * @return CreateImageSpriteTemplateOutcome
                 */
                CreateImageSpriteTemplateOutcome CreateImageSpriteTemplate(const Model::CreateImageSpriteTemplateRequest &request);
                void CreateImageSpriteTemplateAsync(const Model::CreateImageSpriteTemplateRequest& request, const CreateImageSpriteTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateImageSpriteTemplateOutcomeCallable CreateImageSpriteTemplateCallable(const Model::CreateImageSpriteTemplateRequest& request);

                /**
                 *创建即时转码模板。
                 * @param req CreateJustInTimeTranscodeTemplateRequest
                 * @return CreateJustInTimeTranscodeTemplateOutcome
                 */
                CreateJustInTimeTranscodeTemplateOutcome CreateJustInTimeTranscodeTemplate(const Model::CreateJustInTimeTranscodeTemplateRequest &request);
                void CreateJustInTimeTranscodeTemplateAsync(const Model::CreateJustInTimeTranscodeTemplateRequest& request, const CreateJustInTimeTranscodeTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateJustInTimeTranscodeTemplateOutcomeCallable CreateJustInTimeTranscodeTemplateCallable(const Model::CreateJustInTimeTranscodeTemplateRequest& request);

                /**
                 *创建大模型解析模板
                 * @param req CreateLLMComprehendTemplateRequest
                 * @return CreateLLMComprehendTemplateOutcome
                 */
                CreateLLMComprehendTemplateOutcome CreateLLMComprehendTemplate(const Model::CreateLLMComprehendTemplateRequest &request);
                void CreateLLMComprehendTemplateAsync(const Model::CreateLLMComprehendTemplateRequest& request, const CreateLLMComprehendTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateLLMComprehendTemplateOutcomeCallable CreateLLMComprehendTemplateCallable(const Model::CreateLLMComprehendTemplateRequest& request);

                /**
                 *该接口用于创建自定义模板，模板用于 ProcessMediaByMPS 接口的部分功能。
创建模板时，需要将 MPS 相关参数以 JSON 格式填入 MPSCreateTemplateParams 参数中。关于具体的任务参数配置方法，请参考 MPS 任务模板相关文档说明。
当前支持创建自定义模板的 MPS 功能：
1. [音视频增强](https://cloud.tencent.com/document/product/862/118703)。
2. [媒体AI](https://cloud.tencent.com/document/product/862/113756)

> 以该种方式创建的任务模板：
> 1. 模板的管理仍在点播平台中完成。
> 2. 该功能目前仍在内测中，如需测试体验，您可以联系我们获得支持。
                 * @param req CreateMPSTemplateRequest
                 * @return CreateMPSTemplateOutcome
                 */
                CreateMPSTemplateOutcome CreateMPSTemplate(const Model::CreateMPSTemplateRequest &request);
                void CreateMPSTemplateAsync(const Model::CreateMPSTemplateRequest& request, const CreateMPSTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateMPSTemplateOutcomeCallable CreateMPSTemplateCallable(const Model::CreateMPSTemplateRequest& request);

                /**
                 *该接口用于创建素材样本，用于通过五官定位等技术，进行内容识别、不适宜视频识别等视频处理。
                 * @param req CreatePersonSampleRequest
                 * @return CreatePersonSampleOutcome
                 */
                CreatePersonSampleOutcome CreatePersonSample(const Model::CreatePersonSampleRequest &request);
                void CreatePersonSampleAsync(const Model::CreatePersonSampleRequest& request, const CreatePersonSampleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreatePersonSampleOutcomeCallable CreatePersonSampleCallable(const Model::CreatePersonSampleRequest& request);

                /**
                 *创建用户自定义的任务流模板，模板上限：50。
                 * @param req CreateProcedureTemplateRequest
                 * @return CreateProcedureTemplateOutcome
                 */
                CreateProcedureTemplateOutcome CreateProcedureTemplate(const Model::CreateProcedureTemplateRequest &request);
                void CreateProcedureTemplateAsync(const Model::CreateProcedureTemplateRequest& request, const CreateProcedureTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateProcedureTemplateOutcomeCallable CreateProcedureTemplateCallable(const Model::CreateProcedureTemplateRequest& request);

                /**
                 *创建用户自定义图像异步处理模板，数量上限：50。暂时不支持 HLS 格式。
                 * @param req CreateProcessImageAsyncTemplateRequest
                 * @return CreateProcessImageAsyncTemplateOutcome
                 */
                CreateProcessImageAsyncTemplateOutcome CreateProcessImageAsyncTemplate(const Model::CreateProcessImageAsyncTemplateRequest &request);
                void CreateProcessImageAsyncTemplateAsync(const Model::CreateProcessImageAsyncTemplateRequest& request, const CreateProcessImageAsyncTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateProcessImageAsyncTemplateOutcomeCallable CreateProcessImageAsyncTemplateCallable(const Model::CreateProcessImageAsyncTemplateRequest& request);

                /**
                 *创建音画质检测模板。
                 * @param req CreateQualityInspectTemplateRequest
                 * @return CreateQualityInspectTemplateOutcome
                 */
                CreateQualityInspectTemplateOutcome CreateQualityInspectTemplate(const Model::CreateQualityInspectTemplateRequest &request);
                void CreateQualityInspectTemplateAsync(const Model::CreateQualityInspectTemplateRequest& request, const CreateQualityInspectTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateQualityInspectTemplateOutcomeCallable CreateQualityInspectTemplateCallable(const Model::CreateQualityInspectTemplateRequest& request);

                /**
                 *该 API 已经<font color=red>不再维护</font>，新版 [音画质重生](https://cloud.tencent.com/document/product/266/102571) 接口使用预置模板，详情请参见 [音画质重生模板](https://cloud.tencent.com/document/product/266/102586#50604b3f-0286-4a10-a3f7-18218116aff7)。
创建视频重生模板。
                 * @param req CreateRebuildMediaTemplateRequest
                 * @return CreateRebuildMediaTemplateOutcome
                 */
                CreateRebuildMediaTemplateOutcome CreateRebuildMediaTemplate(const Model::CreateRebuildMediaTemplateRequest &request);
                void CreateRebuildMediaTemplateAsync(const Model::CreateRebuildMediaTemplateRequest& request, const CreateRebuildMediaTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateRebuildMediaTemplateOutcomeCallable CreateRebuildMediaTemplateCallable(const Model::CreateRebuildMediaTemplateRequest& request);

                /**
                 *创建用户自定义审核模板，数量上限：50。
>模板仅适用于 [音视频审核(ReviewAudioVideo)](https://cloud.tencent.com/document/api/266/80283) 和 [图片审核(ReviewImage)](https://cloud.tencent.com/document/api/266/73217) 接口。
                 * @param req CreateReviewTemplateRequest
                 * @return CreateReviewTemplateOutcome
                 */
                CreateReviewTemplateOutcome CreateReviewTemplate(const Model::CreateReviewTemplateRequest &request);
                void CreateReviewTemplateAsync(const Model::CreateReviewTemplateRequest& request, const CreateReviewTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateReviewTemplateOutcomeCallable CreateReviewTemplateCallable(const Model::CreateReviewTemplateRequest& request);

                /**
                 *该接口用于创建轮播播单，数量上限：100。
轮播播单的每个文件可以指定源文件，也可以指定某个转码文件。
指定的文件必须是hls格式，所有的播单文件最好保持相同的码率和分辨率。
                 * @param req CreateRoundPlayRequest
                 * @return CreateRoundPlayOutcome
                 */
                CreateRoundPlayOutcome CreateRoundPlay(const Model::CreateRoundPlayRequest &request);
                void CreateRoundPlayAsync(const Model::CreateRoundPlayRequest& request, const CreateRoundPlayAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateRoundPlayOutcomeCallable CreateRoundPlayCallable(const Model::CreateRoundPlayRequest& request);

                /**
                 *创建用户自定义采样截图模板，数量上限：16。
                 * @param req CreateSampleSnapshotTemplateRequest
                 * @return CreateSampleSnapshotTemplateOutcome
                 */
                CreateSampleSnapshotTemplateOutcome CreateSampleSnapshotTemplate(const Model::CreateSampleSnapshotTemplateRequest &request);
                void CreateSampleSnapshotTemplateAsync(const Model::CreateSampleSnapshotTemplateRequest& request, const CreateSampleSnapshotTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateSampleSnapshotTemplateOutcomeCallable CreateSampleSnapshotTemplateCallable(const Model::CreateSampleSnapshotTemplateRequest& request);

                /**
                 *该接口用于生成场景化 AIGC 图片。<b>接口处于内测阶段，如需使用请[联系我们](https://cloud.tencent.com/online-service?from=sales_sales&source=PRESALE)，接口调用会产生实际费用。</b>
                 * @param req CreateSceneAigcImageTaskRequest
                 * @return CreateSceneAigcImageTaskOutcome
                 */
                CreateSceneAigcImageTaskOutcome CreateSceneAigcImageTask(const Model::CreateSceneAigcImageTaskRequest &request);
                void CreateSceneAigcImageTaskAsync(const Model::CreateSceneAigcImageTaskRequest& request, const CreateSceneAigcImageTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateSceneAigcImageTaskOutcomeCallable CreateSceneAigcImageTaskCallable(const Model::CreateSceneAigcImageTaskRequest& request);

                /**
                 *该接口用于生成场景化 AIGC 图片。<b>接口处于内测阶段，如需使用请[联系我们](https://cloud.tencent.com/online-service?from=sales_sales&source=PRESALE)，接口调用会产生实际费用。</b>
                 * @param req CreateSceneAigcVideoTaskRequest
                 * @return CreateSceneAigcVideoTaskOutcome
                 */
                CreateSceneAigcVideoTaskOutcome CreateSceneAigcVideoTask(const Model::CreateSceneAigcVideoTaskRequest &request);
                void CreateSceneAigcVideoTaskAsync(const Model::CreateSceneAigcVideoTaskRequest& request, const CreateSceneAigcVideoTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateSceneAigcVideoTaskOutcomeCallable CreateSceneAigcVideoTaskCallable(const Model::CreateSceneAigcVideoTaskRequest& request);

                /**
                 *创建用户自定义指定时间点截图模板，数量上限：16。
                 * @param req CreateSnapshotByTimeOffsetTemplateRequest
                 * @return CreateSnapshotByTimeOffsetTemplateOutcome
                 */
                CreateSnapshotByTimeOffsetTemplateOutcome CreateSnapshotByTimeOffsetTemplate(const Model::CreateSnapshotByTimeOffsetTemplateRequest &request);
                void CreateSnapshotByTimeOffsetTemplateAsync(const Model::CreateSnapshotByTimeOffsetTemplateRequest& request, const CreateSnapshotByTimeOffsetTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateSnapshotByTimeOffsetTemplateOutcomeCallable CreateSnapshotByTimeOffsetTemplateCallable(const Model::CreateSnapshotByTimeOffsetTemplateRequest& request);

                /**
                 *该接口用于开通某地域的存储。
  1. 用户开通点播业务时，系统默认为用户开通了部分地域的存储，用户如果需要开通其它地域的存储，可以通过该接口进行开通。
  2. 通过 DescribeStorageRegions 接口可以查询到所有存储地域及已经开通的地域。
                 * @param req CreateStorageRegionRequest
                 * @return CreateStorageRegionOutcome
                 */
                CreateStorageRegionOutcome CreateStorageRegion(const Model::CreateStorageRegionRequest &request);
                void CreateStorageRegionAsync(const Model::CreateStorageRegionRequest& request, const CreateStorageRegionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateStorageRegionOutcomeCallable CreateStorageRegionCallable(const Model::CreateStorageRegionRequest& request);

                /**
                 *该接口用于创建点播应用。
                 * @param req CreateSubAppIdRequest
                 * @return CreateSubAppIdOutcome
                 */
                CreateSubAppIdOutcome CreateSubAppId(const Model::CreateSubAppIdRequest &request);
                void CreateSubAppIdAsync(const Model::CreateSubAppIdRequest& request, const CreateSubAppIdAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateSubAppIdOutcomeCallable CreateSubAppIdCallable(const Model::CreateSubAppIdRequest& request);

                /**
                 *该 API 已经<font color='red'>不再维护</font>，新版播放器签名不再使用播放器配置模板，详细请参考 [播放器签名](https://cloud.tencent.com/document/product/266/45554)。
创建播放器配置，数量上限：100。
                 * @param req CreateSuperPlayerConfigRequest
                 * @return CreateSuperPlayerConfigOutcome
                 */
                CreateSuperPlayerConfigOutcome CreateSuperPlayerConfig(const Model::CreateSuperPlayerConfigRequest &request);
                void CreateSuperPlayerConfigAsync(const Model::CreateSuperPlayerConfigRequest& request, const CreateSuperPlayerConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateSuperPlayerConfigOutcomeCallable CreateSuperPlayerConfigCallable(const Model::CreateSuperPlayerConfigRequest& request);

                /**
                 *创建用户自定义转码模板，数量上限：100。
                 * @param req CreateTranscodeTemplateRequest
                 * @return CreateTranscodeTemplateOutcome
                 */
                CreateTranscodeTemplateOutcome CreateTranscodeTemplate(const Model::CreateTranscodeTemplateRequest &request);
                void CreateTranscodeTemplateAsync(const Model::CreateTranscodeTemplateRequest& request, const CreateTranscodeTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateTranscodeTemplateOutcomeCallable CreateTranscodeTemplateCallable(const Model::CreateTranscodeTemplateRequest& request);

                /**
                 *该接口用于将加速域名添加到点播，一个用户最多添加20个加速域名。
1.域名添加成功后点播会进行域名的部署，域名由部署状态变为在线状态大概需要2分钟的时间。
                 * @param req CreateVodDomainRequest
                 * @return CreateVodDomainOutcome
                 */
                CreateVodDomainOutcome CreateVodDomain(const Model::CreateVodDomainRequest &request);
                void CreateVodDomainAsync(const Model::CreateVodDomainRequest& request, const CreateVodDomainAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateVodDomainOutcomeCallable CreateVodDomainCallable(const Model::CreateVodDomainRequest& request);

                /**
                 *创建用户自定义水印模板，数量上限：1000。
                 * @param req CreateWatermarkTemplateRequest
                 * @return CreateWatermarkTemplateOutcome
                 */
                CreateWatermarkTemplateOutcome CreateWatermarkTemplate(const Model::CreateWatermarkTemplateRequest &request);
                void CreateWatermarkTemplateAsync(const Model::CreateWatermarkTemplateRequest& request, const CreateWatermarkTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateWatermarkTemplateOutcomeCallable CreateWatermarkTemplateCallable(const Model::CreateWatermarkTemplateRequest& request);

                /**
                 *该接口用于批量创建关键词样本，样本用于通过OCR、ASR技术，进行不适宜内容识别、内容识别等视频处理。
                 * @param req CreateWordSamplesRequest
                 * @return CreateWordSamplesOutcome
                 */
                CreateWordSamplesOutcome CreateWordSamples(const Model::CreateWordSamplesRequest &request);
                void CreateWordSamplesAsync(const Model::CreateWordSamplesRequest& request, const CreateWordSamplesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateWordSamplesOutcomeCallable CreateWordSamplesCallable(const Model::CreateWordSamplesRequest& request);

                /**
                 *删除用户自定义音视频内容分析模板。

注意：模板 ID 为 10000 以下的为系统预置模板，不允许删除。
                 * @param req DeleteAIAnalysisTemplateRequest
                 * @return DeleteAIAnalysisTemplateOutcome
                 */
                DeleteAIAnalysisTemplateOutcome DeleteAIAnalysisTemplate(const Model::DeleteAIAnalysisTemplateRequest &request);
                void DeleteAIAnalysisTemplateAsync(const Model::DeleteAIAnalysisTemplateRequest& request, const DeleteAIAnalysisTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteAIAnalysisTemplateOutcomeCallable DeleteAIAnalysisTemplateCallable(const Model::DeleteAIAnalysisTemplateRequest& request);

                /**
                 *删除用户自定义音视频内容识别模板。
                 * @param req DeleteAIRecognitionTemplateRequest
                 * @return DeleteAIRecognitionTemplateOutcome
                 */
                DeleteAIRecognitionTemplateOutcome DeleteAIRecognitionTemplate(const Model::DeleteAIRecognitionTemplateRequest &request);
                void DeleteAIRecognitionTemplateAsync(const Model::DeleteAIRecognitionTemplateRequest& request, const DeleteAIRecognitionTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteAIRecognitionTemplateOutcomeCallable DeleteAIRecognitionTemplateCallable(const Model::DeleteAIRecognitionTemplateRequest& request);

                /**
                 *删除转自适应码流模板
                 * @param req DeleteAdaptiveDynamicStreamingTemplateRequest
                 * @return DeleteAdaptiveDynamicStreamingTemplateOutcome
                 */
                DeleteAdaptiveDynamicStreamingTemplateOutcome DeleteAdaptiveDynamicStreamingTemplate(const Model::DeleteAdaptiveDynamicStreamingTemplateRequest &request);
                void DeleteAdaptiveDynamicStreamingTemplateAsync(const Model::DeleteAdaptiveDynamicStreamingTemplateRequest& request, const DeleteAdaptiveDynamicStreamingTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteAdaptiveDynamicStreamingTemplateOutcomeCallable DeleteAdaptiveDynamicStreamingTemplateCallable(const Model::DeleteAdaptiveDynamicStreamingTemplateRequest& request);

                /**
                 *删除 AIGC API Token
                 * @param req DeleteAigcApiTokenRequest
                 * @return DeleteAigcApiTokenOutcome
                 */
                DeleteAigcApiTokenOutcome DeleteAigcApiToken(const Model::DeleteAigcApiTokenRequest &request);
                void DeleteAigcApiTokenAsync(const Model::DeleteAigcApiTokenRequest& request, const DeleteAigcApiTokenAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteAigcApiTokenOutcomeCallable DeleteAigcApiTokenCallable(const Model::DeleteAigcApiTokenRequest& request);

                /**
                 *删除用户自定义转动图模板。
                 * @param req DeleteAnimatedGraphicsTemplateRequest
                 * @return DeleteAnimatedGraphicsTemplateOutcome
                 */
                DeleteAnimatedGraphicsTemplateOutcome DeleteAnimatedGraphicsTemplate(const Model::DeleteAnimatedGraphicsTemplateRequest &request);
                void DeleteAnimatedGraphicsTemplateAsync(const Model::DeleteAnimatedGraphicsTemplateRequest& request, const DeleteAnimatedGraphicsTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteAnimatedGraphicsTemplateOutcomeCallable DeleteAnimatedGraphicsTemplateCallable(const Model::DeleteAnimatedGraphicsTemplateRequest& request);

                /**
                 *删除用户自定义数字水印模板。
                 * @param req DeleteBlindWatermarkTemplateRequest
                 * @return DeleteBlindWatermarkTemplateOutcome
                 */
                DeleteBlindWatermarkTemplateOutcome DeleteBlindWatermarkTemplate(const Model::DeleteBlindWatermarkTemplateRequest &request);
                void DeleteBlindWatermarkTemplateAsync(const Model::DeleteBlindWatermarkTemplateRequest& request, const DeleteBlindWatermarkTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteBlindWatermarkTemplateOutcomeCallable DeleteBlindWatermarkTemplateCallable(const Model::DeleteBlindWatermarkTemplateRequest& request);

                /**
                 *删除点播开通的日志主题。
                 * @param req DeleteCLSTopicRequest
                 * @return DeleteCLSTopicOutcome
                 */
                DeleteCLSTopicOutcome DeleteCLSTopic(const Model::DeleteCLSTopicRequest &request);
                void DeleteCLSTopicAsync(const Model::DeleteCLSTopicRequest& request, const DeleteCLSTopicAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteCLSTopicOutcomeCallable DeleteCLSTopicCallable(const Model::DeleteCLSTopicRequest& request);

                /**
                 ** 仅当待删分类无子分类且无媒体关联情况下，可删除分类；
* 否则，请先执行[删除媒体](/document/product/266/31764)及子分类，再删除该分类；
                 * @param req DeleteClassRequest
                 * @return DeleteClassOutcome
                 */
                DeleteClassOutcome DeleteClass(const Model::DeleteClassRequest &request);
                void DeleteClassAsync(const Model::DeleteClassRequest& request, const DeleteClassAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteClassOutcomeCallable DeleteClassCallable(const Model::DeleteClassRequest& request);

                /**
                 *该 API 已经<font color=red>不再维护</font>，新版审核模板支持音视频审核和图片审核，详细请参考 [删除审核模板](https://cloud.tencent.com/document/api/266/84390)。
删除用户自定义音视频内容审核模板。
                 * @param req DeleteContentReviewTemplateRequest
                 * @return DeleteContentReviewTemplateOutcome
                 */
                DeleteContentReviewTemplateOutcome DeleteContentReviewTemplate(const Model::DeleteContentReviewTemplateRequest &request);
                void DeleteContentReviewTemplateAsync(const Model::DeleteContentReviewTemplateRequest& request, const DeleteContentReviewTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteContentReviewTemplateOutcomeCallable DeleteContentReviewTemplateCallable(const Model::DeleteContentReviewTemplateRequest& request);

                /**
                 *该 API 已经<font color=red>不再维护</font>，新版 [音画质重生](https://cloud.tencent.com/document/product/266/102571) 接口使用预置模板，详情请参见 [音画质重生模板](https://cloud.tencent.com/document/product/266/102586#50604b3f-0286-4a10-a3f7-18218116aff7)。
删除音画质重生模板。
                 * @param req DeleteEnhanceMediaTemplateRequest
                 * @return DeleteEnhanceMediaTemplateOutcome
                 */
                DeleteEnhanceMediaTemplateOutcome DeleteEnhanceMediaTemplate(const Model::DeleteEnhanceMediaTemplateRequest &request);
                void DeleteEnhanceMediaTemplateAsync(const Model::DeleteEnhanceMediaTemplateRequest& request, const DeleteEnhanceMediaTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteEnhanceMediaTemplateOutcomeCallable DeleteEnhanceMediaTemplateCallable(const Model::DeleteEnhanceMediaTemplateRequest& request);

                /**
                 *删除片头片尾模板。
                 * @param req DeleteHeadTailTemplateRequest
                 * @return DeleteHeadTailTemplateOutcome
                 */
                DeleteHeadTailTemplateOutcome DeleteHeadTailTemplate(const Model::DeleteHeadTailTemplateRequest &request);
                void DeleteHeadTailTemplateAsync(const Model::DeleteHeadTailTemplateRequest& request, const DeleteHeadTailTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteHeadTailTemplateOutcomeCallable DeleteHeadTailTemplateCallable(const Model::DeleteHeadTailTemplateRequest& request);

                /**
                 *删除用户自定义图片处理模板。
                 * @param req DeleteImageProcessingTemplateRequest
                 * @return DeleteImageProcessingTemplateOutcome
                 */
                DeleteImageProcessingTemplateOutcome DeleteImageProcessingTemplate(const Model::DeleteImageProcessingTemplateRequest &request);
                void DeleteImageProcessingTemplateAsync(const Model::DeleteImageProcessingTemplateRequest& request, const DeleteImageProcessingTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteImageProcessingTemplateOutcomeCallable DeleteImageProcessingTemplateCallable(const Model::DeleteImageProcessingTemplateRequest& request);

                /**
                 *删除雪碧图模板。
                 * @param req DeleteImageSpriteTemplateRequest
                 * @return DeleteImageSpriteTemplateOutcome
                 */
                DeleteImageSpriteTemplateOutcome DeleteImageSpriteTemplate(const Model::DeleteImageSpriteTemplateRequest &request);
                void DeleteImageSpriteTemplateAsync(const Model::DeleteImageSpriteTemplateRequest& request, const DeleteImageSpriteTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteImageSpriteTemplateOutcomeCallable DeleteImageSpriteTemplateCallable(const Model::DeleteImageSpriteTemplateRequest& request);

                /**
                 *删除即时转码模板。
                 * @param req DeleteJustInTimeTranscodeTemplateRequest
                 * @return DeleteJustInTimeTranscodeTemplateOutcome
                 */
                DeleteJustInTimeTranscodeTemplateOutcome DeleteJustInTimeTranscodeTemplate(const Model::DeleteJustInTimeTranscodeTemplateRequest &request);
                void DeleteJustInTimeTranscodeTemplateAsync(const Model::DeleteJustInTimeTranscodeTemplateRequest& request, const DeleteJustInTimeTranscodeTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteJustInTimeTranscodeTemplateOutcomeCallable DeleteJustInTimeTranscodeTemplateCallable(const Model::DeleteJustInTimeTranscodeTemplateRequest& request);

                /**
                 *删除用户自定义大模型解析模板。

注意：模板 ID 为 10000 以下的为系统预置模板，不允许删除。
                 * @param req DeleteLLMComprehendTemplateRequest
                 * @return DeleteLLMComprehendTemplateOutcome
                 */
                DeleteLLMComprehendTemplateOutcome DeleteLLMComprehendTemplate(const Model::DeleteLLMComprehendTemplateRequest &request);
                void DeleteLLMComprehendTemplateAsync(const Model::DeleteLLMComprehendTemplateRequest& request, const DeleteLLMComprehendTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteLLMComprehendTemplateOutcomeCallable DeleteLLMComprehendTemplateCallable(const Model::DeleteLLMComprehendTemplateRequest& request);

                /**
                 *删除用户自定义 MPS 任务模板。
                 * @param req DeleteMPSTemplateRequest
                 * @return DeleteMPSTemplateOutcome
                 */
                DeleteMPSTemplateOutcome DeleteMPSTemplate(const Model::DeleteMPSTemplateRequest &request);
                void DeleteMPSTemplateAsync(const Model::DeleteMPSTemplateRequest& request, const DeleteMPSTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteMPSTemplateOutcomeCallable DeleteMPSTemplateCallable(const Model::DeleteMPSTemplateRequest& request);

                /**
                 ** 删除媒体及其对应的视频处理文件（原始文件、如转码视频、雪碧图、截图、微信发布视频等）；
* 可单独删除指定 ID 的视频文件下的原文件、转码视频、微信发布视频等；
* 注意：原文件删除后，无法发起转码、微信发布等任何视频处理操作。
                 * @param req DeleteMediaRequest
                 * @return DeleteMediaOutcome
                 */
                DeleteMediaOutcome DeleteMedia(const Model::DeleteMediaRequest &request);
                void DeleteMediaAsync(const Model::DeleteMediaRequest& request, const DeleteMediaAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteMediaOutcomeCallable DeleteMediaCallable(const Model::DeleteMediaRequest& request);

                /**
                 *该接口用于根据人物 ID，删除素材样本。
                 * @param req DeletePersonSampleRequest
                 * @return DeletePersonSampleOutcome
                 */
                DeletePersonSampleOutcome DeletePersonSample(const Model::DeletePersonSampleRequest &request);
                void DeletePersonSampleAsync(const Model::DeletePersonSampleRequest& request, const DeletePersonSampleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeletePersonSampleOutcomeCallable DeletePersonSampleCallable(const Model::DeletePersonSampleRequest& request);

                /**
                 *删除用户自定义的任务流模板。
                 * @param req DeleteProcedureTemplateRequest
                 * @return DeleteProcedureTemplateOutcome
                 */
                DeleteProcedureTemplateOutcome DeleteProcedureTemplate(const Model::DeleteProcedureTemplateRequest &request);
                void DeleteProcedureTemplateAsync(const Model::DeleteProcedureTemplateRequest& request, const DeleteProcedureTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteProcedureTemplateOutcomeCallable DeleteProcedureTemplateCallable(const Model::DeleteProcedureTemplateRequest& request);

                /**
                 *删除用户自定义图像异步处理模板。

注意：模板 ID 为 10000 以下的为系统预置模板，不允许删除。
                 * @param req DeleteProcessImageAsyncTemplateRequest
                 * @return DeleteProcessImageAsyncTemplateOutcome
                 */
                DeleteProcessImageAsyncTemplateOutcome DeleteProcessImageAsyncTemplate(const Model::DeleteProcessImageAsyncTemplateRequest &request);
                void DeleteProcessImageAsyncTemplateAsync(const Model::DeleteProcessImageAsyncTemplateRequest& request, const DeleteProcessImageAsyncTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteProcessImageAsyncTemplateOutcomeCallable DeleteProcessImageAsyncTemplateCallable(const Model::DeleteProcessImageAsyncTemplateRequest& request);

                /**
                 *删除音画质检测模板。
                 * @param req DeleteQualityInspectTemplateRequest
                 * @return DeleteQualityInspectTemplateOutcome
                 */
                DeleteQualityInspectTemplateOutcome DeleteQualityInspectTemplate(const Model::DeleteQualityInspectTemplateRequest &request);
                void DeleteQualityInspectTemplateAsync(const Model::DeleteQualityInspectTemplateRequest& request, const DeleteQualityInspectTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteQualityInspectTemplateOutcomeCallable DeleteQualityInspectTemplateCallable(const Model::DeleteQualityInspectTemplateRequest& request);

                /**
                 *该 API 已经<font color=red>不再维护</font>，新版 [音画质重生](https://cloud.tencent.com/document/product/266/102571) 接口使用预置模板，详情请参见 [音画质重生模板](https://cloud.tencent.com/document/product/266/102586#50604b3f-0286-4a10-a3f7-18218116aff7)。
删除视频重生模板。
                 * @param req DeleteRebuildMediaTemplateRequest
                 * @return DeleteRebuildMediaTemplateOutcome
                 */
                DeleteRebuildMediaTemplateOutcome DeleteRebuildMediaTemplate(const Model::DeleteRebuildMediaTemplateRequest &request);
                void DeleteRebuildMediaTemplateAsync(const Model::DeleteRebuildMediaTemplateRequest& request, const DeleteRebuildMediaTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteRebuildMediaTemplateOutcomeCallable DeleteRebuildMediaTemplateCallable(const Model::DeleteRebuildMediaTemplateRequest& request);

                /**
                 *删除用户自定义审核模板。
>模板仅适用于 [音视频审核(ReviewAudioVideo)](https://cloud.tencent.com/document/api/266/80283) 和 [图片审核(ReviewImage)](https://cloud.tencent.com/document/api/266/73217) 接口。
                 * @param req DeleteReviewTemplateRequest
                 * @return DeleteReviewTemplateOutcome
                 */
                DeleteReviewTemplateOutcome DeleteReviewTemplate(const Model::DeleteReviewTemplateRequest &request);
                void DeleteReviewTemplateAsync(const Model::DeleteReviewTemplateRequest& request, const DeleteReviewTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteReviewTemplateOutcomeCallable DeleteReviewTemplateCallable(const Model::DeleteReviewTemplateRequest& request);

                /**
                 *该接口用于删除轮播播单。
                 * @param req DeleteRoundPlayRequest
                 * @return DeleteRoundPlayOutcome
                 */
                DeleteRoundPlayOutcome DeleteRoundPlay(const Model::DeleteRoundPlayRequest &request);
                void DeleteRoundPlayAsync(const Model::DeleteRoundPlayRequest& request, const DeleteRoundPlayAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteRoundPlayOutcomeCallable DeleteRoundPlayCallable(const Model::DeleteRoundPlayRequest& request);

                /**
                 *删除用户自定义采样截图模板。
                 * @param req DeleteSampleSnapshotTemplateRequest
                 * @return DeleteSampleSnapshotTemplateOutcome
                 */
                DeleteSampleSnapshotTemplateOutcome DeleteSampleSnapshotTemplate(const Model::DeleteSampleSnapshotTemplateRequest &request);
                void DeleteSampleSnapshotTemplateAsync(const Model::DeleteSampleSnapshotTemplateRequest& request, const DeleteSampleSnapshotTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteSampleSnapshotTemplateOutcomeCallable DeleteSampleSnapshotTemplateCallable(const Model::DeleteSampleSnapshotTemplateRequest& request);

                /**
                 *删除用户自定义指定时间点截图模板。
                 * @param req DeleteSnapshotByTimeOffsetTemplateRequest
                 * @return DeleteSnapshotByTimeOffsetTemplateOutcome
                 */
                DeleteSnapshotByTimeOffsetTemplateOutcome DeleteSnapshotByTimeOffsetTemplate(const Model::DeleteSnapshotByTimeOffsetTemplateRequest &request);
                void DeleteSnapshotByTimeOffsetTemplateAsync(const Model::DeleteSnapshotByTimeOffsetTemplateRequest& request, const DeleteSnapshotByTimeOffsetTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteSnapshotByTimeOffsetTemplateOutcomeCallable DeleteSnapshotByTimeOffsetTemplateCallable(const Model::DeleteSnapshotByTimeOffsetTemplateRequest& request);

                /**
                 *该 API 已经<font color='red'>不再维护</font>，新版播放器签名不再使用播放器配置模板，详细请参考 [播放器签名](https://cloud.tencent.com/document/product/266/45554)。
删除播放器配置。  
*注：系统预置播放器配置不允许删除。*
                 * @param req DeleteSuperPlayerConfigRequest
                 * @return DeleteSuperPlayerConfigOutcome
                 */
                DeleteSuperPlayerConfigOutcome DeleteSuperPlayerConfig(const Model::DeleteSuperPlayerConfigRequest &request);
                void DeleteSuperPlayerConfigAsync(const Model::DeleteSuperPlayerConfigRequest& request, const DeleteSuperPlayerConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteSuperPlayerConfigOutcomeCallable DeleteSuperPlayerConfigCallable(const Model::DeleteSuperPlayerConfigRequest& request);

                /**
                 *删除用户自定义转码模板。
                 * @param req DeleteTranscodeTemplateRequest
                 * @return DeleteTranscodeTemplateOutcome
                 */
                DeleteTranscodeTemplateOutcome DeleteTranscodeTemplate(const Model::DeleteTranscodeTemplateRequest &request);
                void DeleteTranscodeTemplateAsync(const Model::DeleteTranscodeTemplateRequest& request, const DeleteTranscodeTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteTranscodeTemplateOutcomeCallable DeleteTranscodeTemplateCallable(const Model::DeleteTranscodeTemplateRequest& request);

                /**
                 *该接口用于删除点播加速域名。
1、域名删除前需要先关闭所有区域的加速。
                 * @param req DeleteVodDomainRequest
                 * @return DeleteVodDomainOutcome
                 */
                DeleteVodDomainOutcome DeleteVodDomain(const Model::DeleteVodDomainRequest &request);
                void DeleteVodDomainAsync(const Model::DeleteVodDomainRequest& request, const DeleteVodDomainAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteVodDomainOutcomeCallable DeleteVodDomainCallable(const Model::DeleteVodDomainRequest& request);

                /**
                 *删除用户自定义水印模板。
                 * @param req DeleteWatermarkTemplateRequest
                 * @return DeleteWatermarkTemplateOutcome
                 */
                DeleteWatermarkTemplateOutcome DeleteWatermarkTemplate(const Model::DeleteWatermarkTemplateRequest &request);
                void DeleteWatermarkTemplateAsync(const Model::DeleteWatermarkTemplateRequest& request, const DeleteWatermarkTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteWatermarkTemplateOutcomeCallable DeleteWatermarkTemplateCallable(const Model::DeleteWatermarkTemplateRequest& request);

                /**
                 *该接口用于批量删除关键词样本。
                 * @param req DeleteWordSamplesRequest
                 * @return DeleteWordSamplesOutcome
                 */
                DeleteWordSamplesOutcome DeleteWordSamples(const Model::DeleteWordSamplesRequest &request);
                void DeleteWordSamplesAsync(const Model::DeleteWordSamplesRequest& request, const DeleteWordSamplesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteWordSamplesOutcomeCallable DeleteWordSamplesCallable(const Model::DeleteWordSamplesRequest& request);

                /**
                 *根据音视频内容分析模板唯一标识，获取音视频内容分析模板详情列表。返回结果包含符合条件的所有用户自定义音视频内容分析模板及[系统预置音视频内容分析模板](https://cloud.tencent.com/document/product/266/33476#.E9.A2.84.E7.BD.AE.E8.A7.86.E9.A2.91.E5.86.85.E5.AE.B9.E5.88.86.E6.9E.90.E6.A8.A1.E6.9D.BF)。
                 * @param req DescribeAIAnalysisTemplatesRequest
                 * @return DescribeAIAnalysisTemplatesOutcome
                 */
                DescribeAIAnalysisTemplatesOutcome DescribeAIAnalysisTemplates(const Model::DescribeAIAnalysisTemplatesRequest &request);
                void DescribeAIAnalysisTemplatesAsync(const Model::DescribeAIAnalysisTemplatesRequest& request, const DescribeAIAnalysisTemplatesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeAIAnalysisTemplatesOutcomeCallable DescribeAIAnalysisTemplatesCallable(const Model::DescribeAIAnalysisTemplatesRequest& request);

                /**
                 *根据音视频内容识别模板唯一标识，获取音视频内容识别模板详情列表。返回结果包含符合条件的所有用户自定义音视频内容识别模板及[系统预置音视频内容识别模板](https://cloud.tencent.com/document/product/266/33476#.E9.A2.84.E7.BD.AE.E8.A7.86.E9.A2.91.E5.86.85.E5.AE.B9.E8.AF.86.E5.88.AB.E6.A8.A1.E6.9D.BF)。
                 * @param req DescribeAIRecognitionTemplatesRequest
                 * @return DescribeAIRecognitionTemplatesOutcome
                 */
                DescribeAIRecognitionTemplatesOutcome DescribeAIRecognitionTemplates(const Model::DescribeAIRecognitionTemplatesRequest &request);
                void DescribeAIRecognitionTemplatesAsync(const Model::DescribeAIRecognitionTemplatesRequest& request, const DescribeAIRecognitionTemplatesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeAIRecognitionTemplatesOutcomeCallable DescribeAIRecognitionTemplatesCallable(const Model::DescribeAIRecognitionTemplatesRequest& request);

                /**
                 *查询转自适应码流模板，支持根据条件，分页查询。
                 * @param req DescribeAdaptiveDynamicStreamingTemplatesRequest
                 * @return DescribeAdaptiveDynamicStreamingTemplatesOutcome
                 */
                DescribeAdaptiveDynamicStreamingTemplatesOutcome DescribeAdaptiveDynamicStreamingTemplates(const Model::DescribeAdaptiveDynamicStreamingTemplatesRequest &request);
                void DescribeAdaptiveDynamicStreamingTemplatesAsync(const Model::DescribeAdaptiveDynamicStreamingTemplatesRequest& request, const DescribeAdaptiveDynamicStreamingTemplatesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeAdaptiveDynamicStreamingTemplatesOutcomeCallable DescribeAdaptiveDynamicStreamingTemplatesCallable(const Model::DescribeAdaptiveDynamicStreamingTemplatesRequest& request);

                /**
                 *查询 AIGC API Token 列表。创建或删除后数据同步有延时，约30秒后可查询最新数据。
                 * @param req DescribeAigcApiTokensRequest
                 * @return DescribeAigcApiTokensOutcome
                 */
                DescribeAigcApiTokensOutcome DescribeAigcApiTokens(const Model::DescribeAigcApiTokensRequest &request);
                void DescribeAigcApiTokensAsync(const Model::DescribeAigcApiTokensRequest& request, const DescribeAigcApiTokensAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeAigcApiTokensOutcomeCallable DescribeAigcApiTokensCallable(const Model::DescribeAigcApiTokensRequest& request);

                /**
                 *该接口用于获取 AIGC 人脸信息。注意，调用本接口会产生人脸识别费用，请参考[计费文档](https://cloud.tencent.com/document/product/266/95125#96b3b59a-f9e1-49e9-966a-bedb70a4bf12)。
                 * @param req DescribeAigcFaceInfoRequest
                 * @return DescribeAigcFaceInfoOutcome
                 */
                DescribeAigcFaceInfoOutcome DescribeAigcFaceInfo(const Model::DescribeAigcFaceInfoRequest &request);
                void DescribeAigcFaceInfoAsync(const Model::DescribeAigcFaceInfoRequest& request, const DescribeAigcFaceInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeAigcFaceInfoOutcomeCallable DescribeAigcFaceInfoCallable(const Model::DescribeAigcFaceInfoRequest& request);

                /**
                 *该接口返回查询时间范围内AIGC的统计信息。
   1. 可以查询最近365天内的AIGC统计数据。
   2. 查询时间跨度不超过90天。
   3. 查询时间跨度超过1天的，返回以天为粒度的数据，否则，返回以5分钟为粒度的数据。
                 * @param req DescribeAigcUsageDataRequest
                 * @return DescribeAigcUsageDataOutcome
                 */
                DescribeAigcUsageDataOutcome DescribeAigcUsageData(const Model::DescribeAigcUsageDataRequest &request);
                void DescribeAigcUsageDataAsync(const Model::DescribeAigcUsageDataRequest& request, const DescribeAigcUsageDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeAigcUsageDataOutcomeCallable DescribeAigcUsageDataCallable(const Model::DescribeAigcUsageDataRequest& request);

                /**
                 ** 获得用户的所有分类信息。
                 * @param req DescribeAllClassRequest
                 * @return DescribeAllClassOutcome
                 */
                DescribeAllClassOutcome DescribeAllClass(const Model::DescribeAllClassRequest &request);
                void DescribeAllClassAsync(const Model::DescribeAllClassRequest& request, const DescribeAllClassAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeAllClassOutcomeCallable DescribeAllClassCallable(const Model::DescribeAllClassRequest& request);

                /**
                 *查询转动图模板列表，支持根据条件，分页查询。
                 * @param req DescribeAnimatedGraphicsTemplatesRequest
                 * @return DescribeAnimatedGraphicsTemplatesOutcome
                 */
                DescribeAnimatedGraphicsTemplatesOutcome DescribeAnimatedGraphicsTemplates(const Model::DescribeAnimatedGraphicsTemplatesRequest &request);
                void DescribeAnimatedGraphicsTemplatesAsync(const Model::DescribeAnimatedGraphicsTemplatesRequest& request, const DescribeAnimatedGraphicsTemplatesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeAnimatedGraphicsTemplatesOutcomeCallable DescribeAnimatedGraphicsTemplatesCallable(const Model::DescribeAnimatedGraphicsTemplatesRequest& request);

                /**
                 *查询用户自定义数字水印模板。
                 * @param req DescribeBlindWatermarkTemplatesRequest
                 * @return DescribeBlindWatermarkTemplatesOutcome
                 */
                DescribeBlindWatermarkTemplatesOutcome DescribeBlindWatermarkTemplates(const Model::DescribeBlindWatermarkTemplatesRequest &request);
                void DescribeBlindWatermarkTemplatesAsync(const Model::DescribeBlindWatermarkTemplatesRequest& request, const DescribeBlindWatermarkTemplatesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeBlindWatermarkTemplatesOutcomeCallable DescribeBlindWatermarkTemplatesCallable(const Model::DescribeBlindWatermarkTemplatesRequest& request);

                /**
                 *该接口用于查询点播域名的 CDN 带宽、流量等统计数据。
* 查询的起始时间和结束时间跨度不超过90天。
* 可以查询不同服务区域的数据。
* 中国境内的数据支持查询指定地区、运营商的统计数据。
* 播放统计仅针对 VOD 域名（即 EdgeOne 域名的分发不计入播放统计）。
                 * @param req DescribeCDNStatDetailsRequest
                 * @return DescribeCDNStatDetailsOutcome
                 */
                DescribeCDNStatDetailsOutcome DescribeCDNStatDetails(const Model::DescribeCDNStatDetailsRequest &request);
                void DescribeCDNStatDetailsAsync(const Model::DescribeCDNStatDetailsRequest& request, const DescribeCDNStatDetailsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeCDNStatDetailsOutcomeCallable DescribeCDNStatDetailsCallable(const Model::DescribeCDNStatDetailsRequest& request);

                /**
                 *该接口用于查询点播 CDN 的流量、带宽等统计数据。
   1. CDN 用量数据系统侧保留 13 个月，您通过接口仅可查询最近 365 天内的用量数据。如需调取超出 365 天的历史用量数据，请联系我们。
   2. 查询时间跨度不超过90天。
   3. 可以指定用量数据的时间粒度，支持5分钟、1小时、1天的时间粒度。
   4. 流量为查询时间粒度内的总流量，带宽为查询时间粒度内的峰值带宽。
   5. 播放统计仅针对 VOD 域名（即 EdgeOne 域名的分发不计入播放统计）。
                 * @param req DescribeCDNUsageDataRequest
                 * @return DescribeCDNUsageDataOutcome
                 */
                DescribeCDNUsageDataOutcome DescribeCDNUsageData(const Model::DescribeCDNUsageDataRequest &request);
                void DescribeCDNUsageDataAsync(const Model::DescribeCDNUsageDataRequest& request, const DescribeCDNUsageDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeCDNUsageDataOutcomeCallable DescribeCDNUsageDataCallable(const Model::DescribeCDNUsageDataRequest& request);

                /**
                 *查询 VOD 创建的 CLS 日志集。
                 * @param req DescribeCLSLogsetsRequest
                 * @return DescribeCLSLogsetsOutcome
                 */
                DescribeCLSLogsetsOutcome DescribeCLSLogsets(const Model::DescribeCLSLogsetsRequest &request);
                void DescribeCLSLogsetsAsync(const Model::DescribeCLSLogsetsRequest& request, const DescribeCLSLogsetsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeCLSLogsetsOutcomeCallable DescribeCLSLogsetsCallable(const Model::DescribeCLSLogsetsRequest& request);

                /**
                 *查询点播域名下日志投递的目标主题。
                 * @param req DescribeCLSPushTargetsRequest
                 * @return DescribeCLSPushTargetsOutcome
                 */
                DescribeCLSPushTargetsOutcome DescribeCLSPushTargets(const Model::DescribeCLSPushTargetsRequest &request);
                void DescribeCLSPushTargetsAsync(const Model::DescribeCLSPushTargetsRequest& request, const DescribeCLSPushTargetsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeCLSPushTargetsOutcomeCallable DescribeCLSPushTargetsCallable(const Model::DescribeCLSPushTargetsRequest& request);

                /**
                 *查询 VOD 创建的 CLS 日志主题列表。
                 * @param req DescribeCLSTopicsRequest
                 * @return DescribeCLSTopicsOutcome
                 */
                DescribeCLSTopicsOutcome DescribeCLSTopics(const Model::DescribeCLSTopicsRequest &request);
                void DescribeCLSTopicsAsync(const Model::DescribeCLSTopicsRequest& request, const DescribeCLSTopicsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeCLSTopicsOutcomeCallable DescribeCLSTopicsCallable(const Model::DescribeCLSTopicsRequest& request);

                /**
                 *查询点播域名的 CDN （不含 EdgeOne 回源到 VOD 域名）访问日志的下载链接。
    1. 可以查询最近30天内的 CDN 日志下载链接。
    2. 默认情况下 CDN 每小时生成一个日志文件，如果某一个小时没有 CDN 访问，不会生成日志文件。    
    3. CDN 日志下载链接的有效期为24小时。
                 * @param req DescribeCdnLogsRequest
                 * @return DescribeCdnLogsOutcome
                 */
                DescribeCdnLogsOutcome DescribeCdnLogs(const Model::DescribeCdnLogsRequest &request);
                void DescribeCdnLogsAsync(const Model::DescribeCdnLogsRequest& request, const DescribeCdnLogsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeCdnLogsOutcomeCallable DescribeCdnLogsCallable(const Model::DescribeCdnLogsRequest& request);

                /**
                 *该接口返回查询时间范围内客户端上传加速统计信息。
   1. 可以查询最近365天内的客户端上传加速统计数据。
   2. 查询时间跨度不超过90天。
   3. 查询时间跨度超过1天的，返回以天为粒度的数据，否则，返回以5分钟为粒度的数据。
                 * @param req DescribeClientUploadAccelerationUsageDataRequest
                 * @return DescribeClientUploadAccelerationUsageDataOutcome
                 */
                DescribeClientUploadAccelerationUsageDataOutcome DescribeClientUploadAccelerationUsageData(const Model::DescribeClientUploadAccelerationUsageDataRequest &request);
                void DescribeClientUploadAccelerationUsageDataAsync(const Model::DescribeClientUploadAccelerationUsageDataRequest& request, const DescribeClientUploadAccelerationUsageDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeClientUploadAccelerationUsageDataOutcomeCallable DescribeClientUploadAccelerationUsageDataCallable(const Model::DescribeClientUploadAccelerationUsageDataRequest& request);

                /**
                 *该 API 已经<font color=red>不再维护</font>，新版审核模板支持音视频审核和图片审核，详细请参考 [获取审核模板列表](https://cloud.tencent.com/document/api/266/84389)。
根据音视频内容审核模板唯一标识，获取音视频内容审核模板详情列表。返回结果包含符合条件的所有用户自定义模板及[系统预置内容审核模板](https://cloud.tencent.com/document/product/266/33476#.E9.A2.84.E7.BD.AE.E8.A7.86.E9.A2.91.E5.86.85.E5.AE.B9.E5.AE.A1.E6.A0.B8.E6.A8.A1.E6.9D.BF)。
                 * @param req DescribeContentReviewTemplatesRequest
                 * @return DescribeContentReviewTemplatesOutcome
                 */
                DescribeContentReviewTemplatesOutcome DescribeContentReviewTemplates(const Model::DescribeContentReviewTemplatesRequest &request);
                void DescribeContentReviewTemplatesAsync(const Model::DescribeContentReviewTemplatesRequest& request, const DescribeContentReviewTemplatesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeContentReviewTemplatesOutcomeCallable DescribeContentReviewTemplatesCallable(const Model::DescribeContentReviewTemplatesRequest& request);

                /**
                 *查询轮播当前播放列表。
                 * @param req DescribeCurrentPlaylistRequest
                 * @return DescribeCurrentPlaylistOutcome
                 */
                DescribeCurrentPlaylistOutcome DescribeCurrentPlaylist(const Model::DescribeCurrentPlaylistRequest &request);
                void DescribeCurrentPlaylistAsync(const Model::DescribeCurrentPlaylistRequest& request, const DescribeCurrentPlaylistAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeCurrentPlaylistOutcomeCallable DescribeCurrentPlaylistCallable(const Model::DescribeCurrentPlaylistRequest& request);

                /**
                 *该接口用于查询指定日期范围内每天的播放统计数据。
* 可以查询最近一年的播放统计数据。
* 结束日期和起始日期的时间跨度最大为90天。
* 播放统计仅针对 VOD 域名（即 EdgeOne 域名的分发不计入播放统计）。
                 * @param req DescribeDailyMediaPlayStatRequest
                 * @return DescribeDailyMediaPlayStatOutcome
                 */
                DescribeDailyMediaPlayStatOutcome DescribeDailyMediaPlayStat(const Model::DescribeDailyMediaPlayStatRequest &request);
                void DescribeDailyMediaPlayStatAsync(const Model::DescribeDailyMediaPlayStatRequest& request, const DescribeDailyMediaPlayStatAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeDailyMediaPlayStatOutcomeCallable DescribeDailyMediaPlayStatCallable(const Model::DescribeDailyMediaPlayStatRequest& request);

                /**
                 *该接口用于查询每日播放Top100 的媒体文件的播放统计数据。
* 可以查询最近一年的播放统计数据。
* 可以按播放次数或者播放流量查询。
* 播放次数统计说明：
    1. HLS 文件：访问 M3U8 文件时统计播放次数；访问 TS 文件不统计播放次数。
    2. 其它文件（如 MP4 文件）：播放请求带有 range 参数且 range 的 start 参数不等于0时不统计播放次数，其它情况统计播放次数。
* 播放统计仅针对 VOD 域名（即 EdgeOne 域名的分发不计入播放统计）。
                 * @param req DescribeDailyMostPlayedStatRequest
                 * @return DescribeDailyMostPlayedStatOutcome
                 */
                DescribeDailyMostPlayedStatOutcome DescribeDailyMostPlayedStat(const Model::DescribeDailyMostPlayedStatRequest &request);
                void DescribeDailyMostPlayedStatAsync(const Model::DescribeDailyMostPlayedStatRequest& request, const DescribeDailyMostPlayedStatAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeDailyMostPlayedStatOutcomeCallable DescribeDailyMostPlayedStatCallable(const Model::DescribeDailyMostPlayedStatRequest& request);

                /**
                 *该接口用于查询播放统计文件的下载地址。
* 可以查询最近一年的播放统计文件下载地址，查询的起始日期和结束日期的时间跨度不超过90天。
* 云点播每天对前一天的 CDN 请求日志进行分析处理，生成播放统计文件。
* 播放统计文件内容包含媒体文件的播放次数、播放流量等统计信息。
* 播放次数统计说明：
    1. HLS 文件：访问M3U8 文件时统计播放次数；访问TS 文件不统计播放次数。
    2. 其它文件（如 MP4 文件）：播放请求带有 range 参数且 range 的 start 参数不等于0时不统计播放次数，其它情况统计播放次数。
* 播放设备的统计：播放请求带了 UserAgent 参数，并且 UserAgent 包含 Android 或者 iPhone 等标识，会统计为移动端播放次数，否则统计为 PC 端播放次数。
* 播放统计仅针对 VOD 域名（即 EdgeOne 域名的分发不计入播放统计）。
                 * @param req DescribeDailyPlayStatFileListRequest
                 * @return DescribeDailyPlayStatFileListOutcome
                 */
                DescribeDailyPlayStatFileListOutcome DescribeDailyPlayStatFileList(const Model::DescribeDailyPlayStatFileListRequest &request);
                void DescribeDailyPlayStatFileListAsync(const Model::DescribeDailyPlayStatFileListRequest& request, const DescribeDailyPlayStatFileListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeDailyPlayStatFileListOutcomeCallable DescribeDailyPlayStatFileListCallable(const Model::DescribeDailyPlayStatFileListRequest& request);

                /**
                 *该接口用于查询默认分发配置。
* 分发域名和分发协议，即媒体文件分发 URL 中的域名和协议。媒体文件按默认分发配置进行分发。
* 播放密钥，用于计算播放器签名。
                 * @param req DescribeDefaultDistributionConfigRequest
                 * @return DescribeDefaultDistributionConfigOutcome
                 */
                DescribeDefaultDistributionConfigOutcome DescribeDefaultDistributionConfig(const Model::DescribeDefaultDistributionConfigRequest &request);
                void DescribeDefaultDistributionConfigAsync(const Model::DescribeDefaultDistributionConfigRequest& request, const DescribeDefaultDistributionConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeDefaultDistributionConfigOutcomeCallable DescribeDefaultDistributionConfigCallable(const Model::DescribeDefaultDistributionConfigRequest& request);

                /**
                 *本 API 是 [旧版本加密](https://cloud.tencent.com/document/product/266/9638) 中 [DescribeDrmDataKey 的 API 2017 接口](https://cloud.tencent.com/document/product/266/9643) 的升级版本。

如果您是新接入点播加密的用户，不要使用该 API，请参考 [视频加密综述](https://cloud.tencent.com/document/product/266/45552) 使用推荐的加密方式。
                 * @param req DescribeDrmDataKeyRequest
                 * @return DescribeDrmDataKeyOutcome
                 */
                DescribeDrmDataKeyOutcome DescribeDrmDataKey(const Model::DescribeDrmDataKeyRequest &request);
                void DescribeDrmDataKeyAsync(const Model::DescribeDrmDataKeyRequest& request, const DescribeDrmDataKeyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeDrmDataKeyOutcomeCallable DescribeDrmDataKeyCallable(const Model::DescribeDrmDataKeyRequest& request);

                /**
                 *查询 DRM 密钥提供商信息。
                 * @param req DescribeDrmKeyProviderInfoRequest
                 * @return DescribeDrmKeyProviderInfoOutcome
                 */
                DescribeDrmKeyProviderInfoOutcome DescribeDrmKeyProviderInfo(const Model::DescribeDrmKeyProviderInfoRequest &request);
                void DescribeDrmKeyProviderInfoAsync(const Model::DescribeDrmKeyProviderInfoRequest& request, const DescribeDrmKeyProviderInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeDrmKeyProviderInfoOutcomeCallable DescribeDrmKeyProviderInfoCallable(const Model::DescribeDrmKeyProviderInfoRequest& request);

                /**
                 *该 API 已经<font color=red>不再维护</font>，新版 [音画质重生](https://cloud.tencent.com/document/product/266/102571) 接口使用预置模板，详情请参见 [音画质重生模板](https://cloud.tencent.com/document/product/266/102586#50604b3f-0286-4a10-a3f7-18218116aff7)。
获取音画质重生模板列表。
                 * @param req DescribeEnhanceMediaTemplatesRequest
                 * @return DescribeEnhanceMediaTemplatesOutcome
                 */
                DescribeEnhanceMediaTemplatesOutcome DescribeEnhanceMediaTemplates(const Model::DescribeEnhanceMediaTemplatesRequest &request);
                void DescribeEnhanceMediaTemplatesAsync(const Model::DescribeEnhanceMediaTemplatesRequest& request, const DescribeEnhanceMediaTemplatesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeEnhanceMediaTemplatesOutcomeCallable DescribeEnhanceMediaTemplatesCallable(const Model::DescribeEnhanceMediaTemplatesRequest& request);

                /**
                 *腾讯云点播为客户提供了媒体上传、媒体管理、媒体处理等等服务，在这些服务执行过程或执行结束时，腾讯云点播也提供各种对应的事件通知，方便开发者感知服务处理状态，并做下一步的业务操作。

开发者可以通过本接口来查询当前配置事件通知的接收方式、接收地址以及哪些事件开启了接收回调通知。

默认接口请求频率限制：100次/秒。
                 * @param req DescribeEventConfigRequest
                 * @return DescribeEventConfigOutcome
                 */
                DescribeEventConfigOutcome DescribeEventConfig(const Model::DescribeEventConfigRequest &request);
                void DescribeEventConfigAsync(const Model::DescribeEventConfigRequest& request, const DescribeEventConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeEventConfigOutcomeCallable DescribeEventConfigCallable(const Model::DescribeEventConfigRequest& request);

                /**
                 ** 该接口用于业务服务器获取 [可靠回调](https://cloud.tencent.com/document/product/266/33779#.E5.8F.AF.E9.9D.A0.E5.9B.9E.E8.B0.83) 事件通知的状态。
                 * @param req DescribeEventsStateRequest
                 * @return DescribeEventsStateOutcome
                 */
                DescribeEventsStateOutcome DescribeEventsState(const Model::DescribeEventsStateRequest &request);
                void DescribeEventsStateAsync(const Model::DescribeEventsStateRequest& request, const DescribeEventsStateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeEventsStateOutcomeCallable DescribeEventsStateCallable(const Model::DescribeEventsStateRequest& request);

                /**
                 *用于异步获取文件属性。
- 当前仅支持获取源文件的 Md5、Sha1。
- 对输入文件为 HLS 或 DASH 的情况，仅获取索引文件的属性。
                 * @param req DescribeFileAttributesRequest
                 * @return DescribeFileAttributesOutcome
                 */
                DescribeFileAttributesOutcome DescribeFileAttributes(const Model::DescribeFileAttributesRequest &request);
                void DescribeFileAttributesAsync(const Model::DescribeFileAttributesRequest& request, const DescribeFileAttributesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeFileAttributesOutcomeCallable DescribeFileAttributesCallable(const Model::DescribeFileAttributesRequest& request);

                /**
                 *获取片头片尾模板列表。
                 * @param req DescribeHeadTailTemplatesRequest
                 * @return DescribeHeadTailTemplatesOutcome
                 */
                DescribeHeadTailTemplatesOutcome DescribeHeadTailTemplates(const Model::DescribeHeadTailTemplatesRequest &request);
                void DescribeHeadTailTemplatesAsync(const Model::DescribeHeadTailTemplatesRequest& request, const DescribeHeadTailTemplatesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeHeadTailTemplatesOutcomeCallable DescribeHeadTailTemplatesCallable(const Model::DescribeHeadTailTemplatesRequest& request);

                /**
                 *获取图片处理模板列表，支持根据条件，分页查询。
                 * @param req DescribeImageProcessingTemplatesRequest
                 * @return DescribeImageProcessingTemplatesOutcome
                 */
                DescribeImageProcessingTemplatesOutcome DescribeImageProcessingTemplates(const Model::DescribeImageProcessingTemplatesRequest &request);
                void DescribeImageProcessingTemplatesAsync(const Model::DescribeImageProcessingTemplatesRequest& request, const DescribeImageProcessingTemplatesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeImageProcessingTemplatesOutcomeCallable DescribeImageProcessingTemplatesCallable(const Model::DescribeImageProcessingTemplatesRequest& request);

                /**
                 *该接口返回查询时间范围内每天使用的图片审核用量信息。
   1. 可以查询最近365天内的图片审核统计数据。
   2. 查询时间跨度不超过90天。
   3. 查询时间跨度超过1天的，返回以天为粒度的数据，否则，返回以5分钟为粒度的数据。
                 * @param req DescribeImageReviewUsageDataRequest
                 * @return DescribeImageReviewUsageDataOutcome
                 */
                DescribeImageReviewUsageDataOutcome DescribeImageReviewUsageData(const Model::DescribeImageReviewUsageDataRequest &request);
                void DescribeImageReviewUsageDataAsync(const Model::DescribeImageReviewUsageDataRequest& request, const DescribeImageReviewUsageDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeImageReviewUsageDataOutcomeCallable DescribeImageReviewUsageDataCallable(const Model::DescribeImageReviewUsageDataRequest& request);

                /**
                 *查询雪碧图模板，支持根据条件，分页查询。
                 * @param req DescribeImageSpriteTemplatesRequest
                 * @return DescribeImageSpriteTemplatesOutcome
                 */
                DescribeImageSpriteTemplatesOutcome DescribeImageSpriteTemplates(const Model::DescribeImageSpriteTemplatesRequest &request);
                void DescribeImageSpriteTemplatesAsync(const Model::DescribeImageSpriteTemplatesRequest& request, const DescribeImageSpriteTemplatesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeImageSpriteTemplatesOutcomeCallable DescribeImageSpriteTemplatesCallable(const Model::DescribeImageSpriteTemplatesRequest& request);

                /**
                 *获取即时转码模板列表。
                 * @param req DescribeJustInTimeTranscodeTemplatesRequest
                 * @return DescribeJustInTimeTranscodeTemplatesOutcome
                 */
                DescribeJustInTimeTranscodeTemplatesOutcome DescribeJustInTimeTranscodeTemplates(const Model::DescribeJustInTimeTranscodeTemplatesRequest &request);
                void DescribeJustInTimeTranscodeTemplatesAsync(const Model::DescribeJustInTimeTranscodeTemplatesRequest& request, const DescribeJustInTimeTranscodeTemplatesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeJustInTimeTranscodeTemplatesOutcomeCallable DescribeJustInTimeTranscodeTemplatesCallable(const Model::DescribeJustInTimeTranscodeTemplatesRequest& request);

                /**
                 *根据大模型解析模板唯一标识，获取大模型解析模板详情列表。返回结果包含符合条件的所有用户自定义大模型解析模板。
                 * @param req DescribeLLMComprehendTemplatesRequest
                 * @return DescribeLLMComprehendTemplatesOutcome
                 */
                DescribeLLMComprehendTemplatesOutcome DescribeLLMComprehendTemplates(const Model::DescribeLLMComprehendTemplatesRequest &request);
                void DescribeLLMComprehendTemplatesAsync(const Model::DescribeLLMComprehendTemplatesRequest& request, const DescribeLLMComprehendTemplatesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeLLMComprehendTemplatesOutcomeCallable DescribeLLMComprehendTemplatesCallable(const Model::DescribeLLMComprehendTemplatesRequest& request);

                /**
                 *该接口返回查询时间范围内每天 License 请求次数信息。
   1. 可以查询最近365天内的 License 请求次数统计数据。
   2. 查询时间跨度不超过90天。
   3. 查询时间跨度超过1天的，返回以天为粒度的数据，否则，返回以5分钟为粒度的数据。
                 * @param req DescribeLicenseUsageDataRequest
                 * @return DescribeLicenseUsageDataOutcome
                 */
                DescribeLicenseUsageDataOutcome DescribeLicenseUsageData(const Model::DescribeLicenseUsageDataRequest &request);
                void DescribeLicenseUsageDataAsync(const Model::DescribeLicenseUsageDataRequest& request, const DescribeLicenseUsageDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeLicenseUsageDataOutcomeCallable DescribeLicenseUsageDataCallable(const Model::DescribeLicenseUsageDataRequest& request);

                /**
                 *获取用户自定义媒体处理服务（MPS）任务模板。
查询模板列表时，需要将 MPS 相关参数以 JSON 格式填入 MPSDescribeTemplateParams 参数中。关于具体的任务参数配置方法，请参考 MPS 任务模板相关文档说明。
                 * @param req DescribeMPSTemplatesRequest
                 * @return DescribeMPSTemplatesOutcome
                 */
                DescribeMPSTemplatesOutcome DescribeMPSTemplates(const Model::DescribeMPSTemplatesRequest &request);
                void DescribeMPSTemplatesAsync(const Model::DescribeMPSTemplatesRequest& request, const DescribeMPSTemplatesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeMPSTemplatesOutcomeCallable DescribeMPSTemplatesCallable(const Model::DescribeMPSTemplatesRequest& request);

                /**
                 *1. 该接口可以获取多个媒体文件的多种信息，包括：
    1. 基础信息（basicInfo）：包括媒体名称、分类、播放地址、封面图片等。
    2. 元信息（metaData）：包括大小、时长、视频流信息、音频流信息等。
    3. 转码结果信息（transcodeInfo）：包括该媒体转码生成的各种规格的媒体地址、视频流参数、音频流参数等。
    4. 转动图结果信息（animatedGraphicsInfo）：对视频转动图（如 gif）后的动图信息。
    5. 采样截图信息（sampleSnapshotInfo）：对视频采样截图后的截图信息。
    6. 雪碧图信息（imageSpriteInfo）：对视频截取雪碧图后的雪碧图信息。
    7. 指定时间点截图信息（snapshotByTimeOffsetInfo）：对视频依照指定时间点截图后，的截图信息。
    8. 视频打点信息（keyFrameDescInfo）：对视频设置的打点信息。
    9. 转自适应码流信息（adaptiveDynamicStreamingInfo）：包括规格、加密类型、打包格式等相关信息。
    10. 审核信息（reviewInfo）：包括媒体审核及媒体封面审核信息。
2. 可以指定回包只返回部分信息。
                 * @param req DescribeMediaInfosRequest
                 * @return DescribeMediaInfosOutcome
                 */
                DescribeMediaInfosOutcome DescribeMediaInfos(const Model::DescribeMediaInfosRequest &request);
                void DescribeMediaInfosAsync(const Model::DescribeMediaInfosRequest& request, const DescribeMediaInfosAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeMediaInfosOutcomeCallable DescribeMediaInfosCallable(const Model::DescribeMediaInfosRequest& request);

                /**
                 *该接口用于查询媒体文件按指定时间粒度统计的播放数据
* 可以查询最近一年的播放统计数据。
* 时间粒度为小时，结束时间和起始时间的跨度最大为7天。
* 时间粒度为天，结束时间和起始时间的跨度最大为90天。
* 播放统计仅针对 VOD 域名（即 EdgeOne 域名的分发不计入播放统计）。
                 * @param req DescribeMediaPlayStatDetailsRequest
                 * @return DescribeMediaPlayStatDetailsOutcome
                 */
                DescribeMediaPlayStatDetailsOutcome DescribeMediaPlayStatDetails(const Model::DescribeMediaPlayStatDetailsRequest &request);
                void DescribeMediaPlayStatDetailsAsync(const Model::DescribeMediaPlayStatDetailsRequest& request, const DescribeMediaPlayStatDetailsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeMediaPlayStatDetailsOutcomeCallable DescribeMediaPlayStatDetailsCallable(const Model::DescribeMediaPlayStatDetailsRequest& request);

                /**
                 *该接口返回查询时间范围内每天使用的视频处理用量信息。
   1. 视频处理用量数据系统侧保留 13 个月，您通过接口仅可查询最近 365 天内的用量数据。如需调取超出 365 天的历史用量数据，请联系我们。
   2. 查询时间跨度不超过90天。
                 * @param req DescribeMediaProcessUsageDataRequest
                 * @return DescribeMediaProcessUsageDataOutcome
                 */
                DescribeMediaProcessUsageDataOutcome DescribeMediaProcessUsageData(const Model::DescribeMediaProcessUsageDataRequest &request);
                void DescribeMediaProcessUsageDataAsync(const Model::DescribeMediaProcessUsageDataRequest& request, const DescribeMediaProcessUsageDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeMediaProcessUsageDataOutcomeCallable DescribeMediaProcessUsageDataCallable(const Model::DescribeMediaProcessUsageDataRequest& request);

                /**
                 *该接口用于查询素材样本信息，支持根据素材 ID、名称、标签，分页查询。
                 * @param req DescribePersonSamplesRequest
                 * @return DescribePersonSamplesOutcome
                 */
                DescribePersonSamplesOutcome DescribePersonSamples(const Model::DescribePersonSamplesRequest &request);
                void DescribePersonSamplesAsync(const Model::DescribePersonSamplesRequest& request, const DescribePersonSamplesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribePersonSamplesOutcomeCallable DescribePersonSamplesCallable(const Model::DescribePersonSamplesRequest& request);

                /**
                 *该接口可以查询用户已经购买的预付费商品的信息，包括：
    1. 商品的类型、生效和失效日期。
    2. 商品中每种资源的额度和剩余额度。
                 * @param req DescribePrepaidProductsRequest
                 * @return DescribePrepaidProductsOutcome
                 */
                DescribePrepaidProductsOutcome DescribePrepaidProducts(const Model::DescribePrepaidProductsRequest &request);
                void DescribePrepaidProductsAsync(const Model::DescribePrepaidProductsRequest& request, const DescribePrepaidProductsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribePrepaidProductsOutcomeCallable DescribePrepaidProductsCallable(const Model::DescribePrepaidProductsRequest& request);

                /**
                 *根据任务流模板名字，获取任务流模板详情列表。
                 * @param req DescribeProcedureTemplatesRequest
                 * @return DescribeProcedureTemplatesOutcome
                 */
                DescribeProcedureTemplatesOutcome DescribeProcedureTemplates(const Model::DescribeProcedureTemplatesRequest &request);
                void DescribeProcedureTemplatesAsync(const Model::DescribeProcedureTemplatesRequest& request, const DescribeProcedureTemplatesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeProcedureTemplatesOutcomeCallable DescribeProcedureTemplatesCallable(const Model::DescribeProcedureTemplatesRequest& request);

                /**
                 *根据图像异步处理模板唯一标识，获取图像异步处理模板详情列表。返回结果包含符合条件的所有用户自定义图像异步处理模板。
                 * @param req DescribeProcessImageAsyncTemplatesRequest
                 * @return DescribeProcessImageAsyncTemplatesOutcome
                 */
                DescribeProcessImageAsyncTemplatesOutcome DescribeProcessImageAsyncTemplates(const Model::DescribeProcessImageAsyncTemplatesRequest &request);
                void DescribeProcessImageAsyncTemplatesAsync(const Model::DescribeProcessImageAsyncTemplatesRequest& request, const DescribeProcessImageAsyncTemplatesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeProcessImageAsyncTemplatesOutcomeCallable DescribeProcessImageAsyncTemplatesCallable(const Model::DescribeProcessImageAsyncTemplatesRequest& request);

                /**
                 *获取音画质检测模板列表。
                 * @param req DescribeQualityInspectTemplatesRequest
                 * @return DescribeQualityInspectTemplatesOutcome
                 */
                DescribeQualityInspectTemplatesOutcome DescribeQualityInspectTemplates(const Model::DescribeQualityInspectTemplatesRequest &request);
                void DescribeQualityInspectTemplatesAsync(const Model::DescribeQualityInspectTemplatesRequest& request, const DescribeQualityInspectTemplatesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeQualityInspectTemplatesOutcomeCallable DescribeQualityInspectTemplatesCallable(const Model::DescribeQualityInspectTemplatesRequest& request);

                /**
                 *该 API 已经<font color=red>不再维护</font>，新版 [音画质重生](https://cloud.tencent.com/document/product/266/102571) 接口使用预置模板，详情请参见 [音画质重生模板](https://cloud.tencent.com/document/product/266/102586#50604b3f-0286-4a10-a3f7-18218116aff7)。
获取视频重生模板列表。
                 * @param req DescribeRebuildMediaTemplatesRequest
                 * @return DescribeRebuildMediaTemplatesOutcome
                 */
                DescribeRebuildMediaTemplatesOutcome DescribeRebuildMediaTemplates(const Model::DescribeRebuildMediaTemplatesRequest &request);
                void DescribeRebuildMediaTemplatesAsync(const Model::DescribeRebuildMediaTemplatesRequest& request, const DescribeRebuildMediaTemplatesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeRebuildMediaTemplatesOutcomeCallable DescribeRebuildMediaTemplatesCallable(const Model::DescribeRebuildMediaTemplatesRequest& request);

                /**
                 *<b>本接口已不推荐使用，用 [DescribeMediaProcessUsageData](/document/product/266/41464) 替代</b>

该接口返回查询时间范围内每天使用的视频内容智能识别时长数据，单位： 秒。

1. 可以查询最近365天内的视频内容智能识别时长统计数据。
2. 查询时间跨度不超过90天。
                 * @param req DescribeReviewDetailsRequest
                 * @return DescribeReviewDetailsOutcome
                 */
                DescribeReviewDetailsOutcome DescribeReviewDetails(const Model::DescribeReviewDetailsRequest &request);
                void DescribeReviewDetailsAsync(const Model::DescribeReviewDetailsRequest& request, const DescribeReviewDetailsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeReviewDetailsOutcomeCallable DescribeReviewDetailsCallable(const Model::DescribeReviewDetailsRequest& request);

                /**
                 *获取审核模板列表。
>模板仅适用于 [音视频审核(ReviewAudioVideo)](https://cloud.tencent.com/document/api/266/80283) 和 [图片审核(ReviewImage)](https://cloud.tencent.com/document/api/266/73217) 接口。
                 * @param req DescribeReviewTemplatesRequest
                 * @return DescribeReviewTemplatesOutcome
                 */
                DescribeReviewTemplatesOutcome DescribeReviewTemplates(const Model::DescribeReviewTemplatesRequest &request);
                void DescribeReviewTemplatesAsync(const Model::DescribeReviewTemplatesRequest& request, const DescribeReviewTemplatesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeReviewTemplatesOutcomeCallable DescribeReviewTemplatesCallable(const Model::DescribeReviewTemplatesRequest& request);

                /**
                 *该接口用于获取轮播播单列表。
                 * @param req DescribeRoundPlaysRequest
                 * @return DescribeRoundPlaysOutcome
                 */
                DescribeRoundPlaysOutcome DescribeRoundPlays(const Model::DescribeRoundPlaysRequest &request);
                void DescribeRoundPlaysAsync(const Model::DescribeRoundPlaysRequest& request, const DescribeRoundPlaysAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeRoundPlaysOutcomeCallable DescribeRoundPlaysCallable(const Model::DescribeRoundPlaysRequest& request);

                /**
                 *查询采样截图模板，支持根据条件，分页查询。
                 * @param req DescribeSampleSnapshotTemplatesRequest
                 * @return DescribeSampleSnapshotTemplatesOutcome
                 */
                DescribeSampleSnapshotTemplatesOutcome DescribeSampleSnapshotTemplates(const Model::DescribeSampleSnapshotTemplatesRequest &request);
                void DescribeSampleSnapshotTemplatesAsync(const Model::DescribeSampleSnapshotTemplatesRequest& request, const DescribeSampleSnapshotTemplatesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeSampleSnapshotTemplatesOutcomeCallable DescribeSampleSnapshotTemplatesCallable(const Model::DescribeSampleSnapshotTemplatesRequest& request);

                /**
                 *查询指定时间点截图模板，支持根据条件，分页查询。
                 * @param req DescribeSnapshotByTimeOffsetTemplatesRequest
                 * @return DescribeSnapshotByTimeOffsetTemplatesOutcome
                 */
                DescribeSnapshotByTimeOffsetTemplatesOutcome DescribeSnapshotByTimeOffsetTemplates(const Model::DescribeSnapshotByTimeOffsetTemplatesRequest &request);
                void DescribeSnapshotByTimeOffsetTemplatesAsync(const Model::DescribeSnapshotByTimeOffsetTemplatesRequest& request, const DescribeSnapshotByTimeOffsetTemplatesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeSnapshotByTimeOffsetTemplatesOutcomeCallable DescribeSnapshotByTimeOffsetTemplatesCallable(const Model::DescribeSnapshotByTimeOffsetTemplatesRequest& request);

                /**
                 *查询存储空间使用情况和文件数量。
                 * @param req DescribeStorageDataRequest
                 * @return DescribeStorageDataOutcome
                 */
                DescribeStorageDataOutcome DescribeStorageData(const Model::DescribeStorageDataRequest &request);
                void DescribeStorageDataAsync(const Model::DescribeStorageDataRequest& request, const DescribeStorageDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeStorageDataOutcomeCallable DescribeStorageDataCallable(const Model::DescribeStorageDataRequest& request);

                /**
                 *该接口返回查询时间范围内使用的点播存储空间，单位：字节。
    1. 存储用量数据系统侧保留 13 个月，您通过接口仅可查询最近 365 天内的用量数据。如需调取超出 365 天的历史用量数据，请联系我们；
    2. 查询时间跨度不超过90天；
    3. 分钟粒度查询跨度不超过7天；
                 * @param req DescribeStorageDetailsRequest
                 * @return DescribeStorageDetailsOutcome
                 */
                DescribeStorageDetailsOutcome DescribeStorageDetails(const Model::DescribeStorageDetailsRequest &request);
                void DescribeStorageDetailsAsync(const Model::DescribeStorageDetailsRequest& request, const DescribeStorageDetailsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeStorageDetailsOutcomeCallable DescribeStorageDetailsCallable(const Model::DescribeStorageDetailsRequest& request);

                /**
                 *该接口用于：
  1. 查询点播可开通的所有存储园区列表。
  2. 查询已经开通的园区列表。
  3. 查询默认使用的存储园区。
                 * @param req DescribeStorageRegionsRequest
                 * @return DescribeStorageRegionsOutcome
                 */
                DescribeStorageRegionsOutcome DescribeStorageRegions(const Model::DescribeStorageRegionsRequest &request);
                void DescribeStorageRegionsAsync(const Model::DescribeStorageRegionsRequest& request, const DescribeStorageRegionsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeStorageRegionsOutcomeCallable DescribeStorageRegionsCallable(const Model::DescribeStorageRegionsRequest& request);

                /**
                 *该接口用于获取当前账号的应用列表。
                 * @param req DescribeSubAppIdsRequest
                 * @return DescribeSubAppIdsOutcome
                 */
                DescribeSubAppIdsOutcome DescribeSubAppIds(const Model::DescribeSubAppIdsRequest &request);
                void DescribeSubAppIdsAsync(const Model::DescribeSubAppIdsRequest& request, const DescribeSubAppIdsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeSubAppIdsOutcomeCallable DescribeSubAppIdsCallable(const Model::DescribeSubAppIdsRequest& request);

                /**
                 *该 API 已经<font color='red'>不再维护</font>，新版播放器签名不再使用播放器配置模板，详细请参考 [播放器签名](https://cloud.tencent.com/document/product/266/45554)。
查询播放器配置，支持根据条件，分页查询。
                 * @param req DescribeSuperPlayerConfigsRequest
                 * @return DescribeSuperPlayerConfigsOutcome
                 */
                DescribeSuperPlayerConfigsOutcome DescribeSuperPlayerConfigs(const Model::DescribeSuperPlayerConfigsRequest &request);
                void DescribeSuperPlayerConfigsAsync(const Model::DescribeSuperPlayerConfigsRequest& request, const DescribeSuperPlayerConfigsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeSuperPlayerConfigsOutcomeCallable DescribeSuperPlayerConfigsCallable(const Model::DescribeSuperPlayerConfigsRequest& request);

                /**
                 *通过任务 ID 查询任务的执行状态和结果的详细信息（最多可以查询3天之内提交的任务）。
                 * @param req DescribeTaskDetailRequest
                 * @return DescribeTaskDetailOutcome
                 */
                DescribeTaskDetailOutcome DescribeTaskDetail(const Model::DescribeTaskDetailRequest &request);
                void DescribeTaskDetailAsync(const Model::DescribeTaskDetailRequest& request, const DescribeTaskDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeTaskDetailOutcomeCallable DescribeTaskDetailCallable(const Model::DescribeTaskDetailRequest& request);

                /**
                 ** 该接口用于查询任务列表；
* 当列表数据比较多时，单次接口调用无法拉取整个列表，可通过 ScrollToken 参数，分批拉取；
* 只能查询到最近三天（72 小时）内的任务。
                 * @param req DescribeTasksRequest
                 * @return DescribeTasksOutcome
                 */
                DescribeTasksOutcome DescribeTasks(const Model::DescribeTasksRequest &request);
                void DescribeTasksAsync(const Model::DescribeTasksRequest& request, const DescribeTasksAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeTasksOutcomeCallable DescribeTasksCallable(const Model::DescribeTasksRequest& request);

                /**
                 *根据转码模板唯一标识，获取转码模板详情列表。返回结果包含符合条件的所有用户自定义模板及[系统预置转码模板](https://cloud.tencent.com/document/product/266/33476#.E9.A2.84.E7.BD.AE.E8.BD.AC.E7.A0.81.E6.A8.A1.E6.9D.BF)。
                 * @param req DescribeTranscodeTemplatesRequest
                 * @return DescribeTranscodeTemplatesOutcome
                 */
                DescribeTranscodeTemplatesOutcome DescribeTranscodeTemplates(const Model::DescribeTranscodeTemplatesRequest &request);
                void DescribeTranscodeTemplatesAsync(const Model::DescribeTranscodeTemplatesRequest& request, const DescribeTranscodeTemplatesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeTranscodeTemplatesOutcomeCallable DescribeTranscodeTemplatesCallable(const Model::DescribeTranscodeTemplatesRequest& request);

                /**
                 *该接口用于查询点播域名信息列表。
                 * @param req DescribeVodDomainsRequest
                 * @return DescribeVodDomainsOutcome
                 */
                DescribeVodDomainsOutcome DescribeVodDomains(const Model::DescribeVodDomainsRequest &request);
                void DescribeVodDomainsAsync(const Model::DescribeVodDomainsRequest& request, const DescribeVodDomainsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeVodDomainsOutcomeCallable DescribeVodDomainsCallable(const Model::DescribeVodDomainsRequest& request);

                /**
                 *查询用户自定义水印模板，支持根据条件，分页查询。
                 * @param req DescribeWatermarkTemplatesRequest
                 * @return DescribeWatermarkTemplatesOutcome
                 */
                DescribeWatermarkTemplatesOutcome DescribeWatermarkTemplates(const Model::DescribeWatermarkTemplatesRequest &request);
                void DescribeWatermarkTemplatesAsync(const Model::DescribeWatermarkTemplatesRequest& request, const DescribeWatermarkTemplatesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeWatermarkTemplatesOutcomeCallable DescribeWatermarkTemplatesCallable(const Model::DescribeWatermarkTemplatesRequest& request);

                /**
                 *该接口用于根据应用场景、关键词、标签，分页查询关键词样本信息。
                 * @param req DescribeWordSamplesRequest
                 * @return DescribeWordSamplesOutcome
                 */
                DescribeWordSamplesOutcome DescribeWordSamples(const Model::DescribeWordSamplesRequest &request);
                void DescribeWordSamplesAsync(const Model::DescribeWordSamplesRequest& request, const DescribeWordSamplesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeWordSamplesOutcomeCallable DescribeWordSamplesCallable(const Model::DescribeWordSamplesRequest& request);

                /**
                 *对视频进行编辑（剪辑、拼接等），生成一个新的点播视频。编辑的功能包括：

1. 对点播中的一个文件进行剪辑，生成一个新的视频；
2. 对点播中的多个文件进行拼接，生成一个新的视频；
3. 对点播中的多个文件进行剪辑，然后再拼接，生成一个新的视频；
4. 对点播中的一个流，直接生成一个新的视频；
5. 对点播中的一个流进行剪辑，生成一个新的视频；
6. 对点播中的多个流进行拼接，生成一个新的视频；
7. 对点播中的多个流进行剪辑，然后拼接，生成一个新的视频。

对于生成的新视频，还可以指定生成后的视频是否要执行任务流。

>当对直播流做剪辑、拼接等操作时，请确保流结束后再操作。否则生成的视频可能不完整。

如使用事件通知，事件通知的类型为 [视频编辑完成](https://cloud.tencent.com/document/product/266/33794)。
                 * @param req EditMediaRequest
                 * @return EditMediaOutcome
                 */
                EditMediaOutcome EditMedia(const Model::EditMediaRequest &request);
                void EditMediaAsync(const Model::EditMediaRequest& request, const EditMediaAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                EditMediaOutcomeCallable EditMediaCallable(const Model::EditMediaRequest& request);

                /**
                 *该 API 已经<font color=red>不再维护</font>，请使用新版接口 [音画质重生](https://cloud.tencent.com/document/api/266/102571)。
使用模板发起音画质重生。
                 * @param req EnhanceMediaByTemplateRequest
                 * @return EnhanceMediaByTemplateOutcome
                 */
                EnhanceMediaByTemplateOutcome EnhanceMediaByTemplate(const Model::EnhanceMediaByTemplateRequest &request);
                void EnhanceMediaByTemplateAsync(const Model::EnhanceMediaByTemplateRequest& request, const EnhanceMediaByTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                EnhanceMediaByTemplateOutcomeCallable EnhanceMediaByTemplateCallable(const Model::EnhanceMediaByTemplateRequest& request);

                /**
                 *对点播中的音视频媒体发起音画质重生任务。
                 * @param req EnhanceMediaQualityRequest
                 * @return EnhanceMediaQualityOutcome
                 */
                EnhanceMediaQualityOutcome EnhanceMediaQuality(const Model::EnhanceMediaQualityRequest &request);
                void EnhanceMediaQualityAsync(const Model::EnhanceMediaQualityRequest& request, const EnhanceMediaQualityAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                EnhanceMediaQualityOutcomeCallable EnhanceMediaQualityCallable(const Model::EnhanceMediaQualityRequest& request);

                /**
                 *本接口仅用于定制开发的特殊场景，除非云点播客服人员主动告知您需要使用本接口，其它情况请勿调用。
                 * @param req ExecuteFunctionRequest
                 * @return ExecuteFunctionOutcome
                 */
                ExecuteFunctionOutcome ExecuteFunction(const Model::ExecuteFunctionRequest &request);
                void ExecuteFunctionAsync(const Model::ExecuteFunctionRequest& request, const ExecuteFunctionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ExecuteFunctionOutcomeCallable ExecuteFunctionCallable(const Model::ExecuteFunctionRequest& request);

                /**
                 *用于发起提取视频数字水印任务，提取结果可以通过DescribeTaskDetail查询。
                 * @param req ExtractBlindWatermarkRequest
                 * @return ExtractBlindWatermarkOutcome
                 */
                ExtractBlindWatermarkOutcome ExtractBlindWatermark(const Model::ExtractBlindWatermarkRequest &request);
                void ExtractBlindWatermarkAsync(const Model::ExtractBlindWatermarkRequest& request, const ExtractBlindWatermarkAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ExtractBlindWatermarkOutcomeCallable ExtractBlindWatermarkCallable(const Model::ExtractBlindWatermarkRequest& request);

                /**
                 *如果有盗录溯源需求，请参考 [幽灵水印](https://cloud.tencent.com/document/product/266/94228)。
                 * @param req ExtractCopyRightWatermarkRequest
                 * @return ExtractCopyRightWatermarkOutcome
                 */
                ExtractCopyRightWatermarkOutcome ExtractCopyRightWatermark(const Model::ExtractCopyRightWatermarkRequest &request);
                void ExtractCopyRightWatermarkAsync(const Model::ExtractCopyRightWatermarkRequest& request, const ExtractCopyRightWatermarkAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ExtractCopyRightWatermarkOutcomeCallable ExtractCopyRightWatermarkCallable(const Model::ExtractCopyRightWatermarkRequest& request);

                /**
                 *如果有盗录溯源需求，推荐使用 [幽灵水印](https://cloud.tencent.com/document/product/266/94228)。
                 * @param req ExtractTraceWatermarkRequest
                 * @return ExtractTraceWatermarkOutcome
                 */
                ExtractTraceWatermarkOutcome ExtractTraceWatermark(const Model::ExtractTraceWatermarkRequest &request);
                void ExtractTraceWatermarkAsync(const Model::ExtractTraceWatermarkRequest& request, const ExtractTraceWatermarkAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ExtractTraceWatermarkOutcomeCallable ExtractTraceWatermarkCallable(const Model::ExtractTraceWatermarkRequest& request);

                /**
                 *对云点播的 HLS 视频实现快速拼接和快速剪辑，生成新的 HLS 格式的媒体。

快速拼接或剪辑生成的视频，将产生新的 FileId 并进行固化，固化成功后新视频的文件独立于原始输入视频存在，不受原始视频删除等影响。

<font color='red'>注意：</font>通过 ModifyEventConfig 接口启用接收剪辑固化事件通知，固化成功后将会收到一个 PersistenceComplete 类型的事件通知。在收到这个事件通知之前，不应该对原始输入的视频进行删除、降冷等操作，否则拼接剪辑生成的视频播放可能出现异常。
                 * @param req FastEditMediaRequest
                 * @return FastEditMediaOutcome
                 */
                FastEditMediaOutcome FastEditMedia(const Model::FastEditMediaRequest &request);
                void FastEditMediaAsync(const Model::FastEditMediaRequest& request, const FastEditMediaAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                FastEditMediaOutcomeCallable FastEditMediaCallable(const Model::FastEditMediaRequest& request);

                /**
                 ** 对媒体禁播后，除了点播控制台预览，其他场景访问视频各种资源的 URL（原始文件、转码输出文件、截图等）均会返回 403。
  禁播/解禁操作全网生效时间约 5~10 分钟。
* 注意：禁播媒体仅能操作标准存储和低频存储的媒体。低频存储媒体，必须存储至少 30 天，提前删除或变更存储类型，仍旧按照 30 天计费；如果禁播低频存储媒体，该媒体低频存储的时长不足 30 天，会产生提前删除计费；同时，禁播后该媒体的低频存储时长会从当前时间重新开始计算，如果不满 30 天继续对该媒体进行删除或变更存储类型，也将产生提前删除计费。例：媒体 001 已经低频存储了 10 天，此时对 001 进行禁播，低频存储的计费仍旧按 30 天计算（提前删除计费时长为 30 - 10 = 20 天）；禁播后 001 的低频存储时长重新开始计算，如果禁播后第 5 天删除了 001，低频存储计费也会按 30 天计算（提前删除计费时长为 30 - 5 = 25 天）；001 实际的低频存储时长为 10 + 5 = 15 天，低频存储计费时长为 10 + 20(提前删除计费)+ 5 + 25(提前删除计费) = 60 天。
                 * @param req ForbidMediaDistributionRequest
                 * @return ForbidMediaDistributionOutcome
                 */
                ForbidMediaDistributionOutcome ForbidMediaDistribution(const Model::ForbidMediaDistributionRequest &request);
                void ForbidMediaDistributionAsync(const Model::ForbidMediaDistributionRequest& request, const ForbidMediaDistributionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ForbidMediaDistributionOutcomeCallable ForbidMediaDistributionCallable(const Model::ForbidMediaDistributionRequest& request);

                /**
                 *操作轮播当前播放列表。支持的操作有：<li> Insert：向当前播列表插入播放节目。</li><li> Delete：删除播列表中的播放节目。</li>
                 * @param req HandleCurrentPlaylistRequest
                 * @return HandleCurrentPlaylistOutcome
                 */
                HandleCurrentPlaylistOutcome HandleCurrentPlaylist(const Model::HandleCurrentPlaylistRequest &request);
                void HandleCurrentPlaylistAsync(const Model::HandleCurrentPlaylistRequest& request, const HandleCurrentPlaylistAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                HandleCurrentPlaylistOutcomeCallable HandleCurrentPlaylistCallable(const Model::HandleCurrentPlaylistRequest& request);

                /**
                 *用于将智能分析的结果导入到知识库中。
                 * @param req ImportMediaKnowledgeRequest
                 * @return ImportMediaKnowledgeOutcome
                 */
                ImportMediaKnowledgeOutcome ImportMediaKnowledge(const Model::ImportMediaKnowledgeRequest &request);
                void ImportMediaKnowledgeAsync(const Model::ImportMediaKnowledgeRequest& request, const ImportMediaKnowledgeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ImportMediaKnowledgeOutcomeCallable ImportMediaKnowledgeCallable(const Model::ImportMediaKnowledgeRequest& request);

                /**
                 *对点播中的音视频媒体发起音画质检测任务。
                 * @param req InspectMediaQualityRequest
                 * @return InspectMediaQualityOutcome
                 */
                InspectMediaQualityOutcome InspectMediaQuality(const Model::InspectMediaQualityRequest &request);
                void InspectMediaQualityAsync(const Model::InspectMediaQualityRequest& request, const InspectMediaQualityAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                InspectMediaQualityOutcomeCallable InspectMediaQualityCallable(const Model::InspectMediaQualityRequest& request);

                /**
                 *用于列出子应用下存储的文件条目。

**此API只在“FileID+Path模式”下可用**
                 * @param req ListFilesRequest
                 * @return ListFilesOutcome
                 */
                ListFilesOutcome ListFiles(const Model::ListFilesRequest &request);
                void ListFilesAsync(const Model::ListFilesRequest& request, const ListFilesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ListFilesOutcomeCallable ListFilesCallable(const Model::ListFilesRequest& request);

                /**
                 *直播即时剪辑，是指在直播过程中（即直播尚未结束时），客户可以在过往直播内容中选择一段，实时生成一个新的视频（HLS 格式），开发者可以将其立即分享出去，或者长久保存起来。

腾讯云点播支持两种即时剪辑模式：
- 剪辑固化：将剪辑出来的视频保存成独立的视频，拥有独立 FileId；适用于将精彩片段**长久保存**的场景；
- 剪辑不固化：剪辑得到的视频附属于直播录制文件，没有独立 FileId；适用于将精彩片段**临时分享**的场景。

注意：
- 使用直播即时剪辑功能的前提是：目标直播流开启了[时移回看](https://cloud.tencent.com/document/product/267/32742)功能。
- 直播即时剪辑是基于直播录制生成的 m3u8 文件进行的，故而其最小剪辑精度为一个 ts 切片，无法实现秒级或者更为精确的剪辑精度。
- 由于直播过程中可能存在断流的情况，所以有可能导致剪辑生成的实际视频时长与期望不一致。例如剪辑某个直播流的时间区间为 2018-09-20T10:30:00Z 到 2018-09-20T10:40:00Z ，如果在该时间区间中发生过断流，那么返回的媒资文件的时长将少于 10 分钟，在这种情况下，可以通过输出参数 <a href="#p_segmentset">SegmentSet</a> 感知到。

### 剪辑固化
所谓剪辑固化，是指将剪辑出来的视频是保存成一个独立的视频（拥有独立的 FileId）。其生命周期不受原始直播录制视频影响（即使原始录制视频被删除，剪辑结果也不会受到任何影响）；也可以对其进行转码、微信发布等二次处理。

举例如下：一场完整的足球比赛，直播录制出来的原始视频可能长达 2 个小时，客户出于节省成本的目的可以对这个视频存储 2 个月，但对于直播即时剪辑的「精彩时刻」视频却可以指定存储更长时间，同时可以单独对「精彩时刻」视频进行转码、微信发布等额外的点播操作，这时候可以选择直播即时剪辑并且固化的方案。

剪辑固化的优势在于其生命周期与原始录制视频相互独立，可以独立管理、长久保存。

<font color='red'>注意：</font>如果剪辑时指定进行固化，通过 ModifyEventConfig 接口启用接收剪辑固化事件通知，固化成功后将会收到一个 PersistenceComplete 类型的事件通知。在收到这个事件通知之前，不应该对直播录制视频进行删除、降冷等操作，否则剪辑生成的视频播放可能出现异常。

### 剪辑不固化
所谓剪辑不固化，是指剪辑所得到的结果（m3u8 文件）与直播录制视频共享相同的 ts 分片，新生成的视频不是一个独立完整的视频（没有独立 FileId，只有播放 URL），其有效期与直播录制的完整视频有效期是一致的。一旦直播录制出来的视频被删除，也会导致该片段无法播放。

剪辑不固化，由于其剪辑结果不是一个独立的视频，因而也不会纳入点播媒资视频管理（例如控制台的视频总数不会统计这一片段）中，也无法单独针对这个片段做转码、微信发布等任何视频处理操作。

剪辑不固化的优势在于其剪辑操作十分“轻量化”，不会产生额外的存储开销。但其不足之处在于生命周期与原始录制视频相同，且无法进一步进行转码等视频处理。
                 * @param req LiveRealTimeClipRequest
                 * @return LiveRealTimeClipOutcome
                 */
                LiveRealTimeClipOutcome LiveRealTimeClip(const Model::LiveRealTimeClipRequest &request);
                void LiveRealTimeClipAsync(const Model::LiveRealTimeClipRequest& request, const LiveRealTimeClipAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                LiveRealTimeClipOutcomeCallable LiveRealTimeClipCallable(const Model::LiveRealTimeClipRequest& request);

                /**
                 *对已发起的任务进行管理。
                 * @param req ManageTaskRequest
                 * @return ManageTaskOutcome
                 */
                ManageTaskOutcome ManageTask(const Model::ManageTaskRequest &request);
                void ManageTaskAsync(const Model::ManageTaskRequest& request, const ManageTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ManageTaskOutcomeCallable ManageTaskCallable(const Model::ManageTaskRequest& request);

                /**
                 *修改用户自定义音视频内容分析模板。

注意：模板 ID 10000 以下的为系统预置模板，不允许修改。
                 * @param req ModifyAIAnalysisTemplateRequest
                 * @return ModifyAIAnalysisTemplateOutcome
                 */
                ModifyAIAnalysisTemplateOutcome ModifyAIAnalysisTemplate(const Model::ModifyAIAnalysisTemplateRequest &request);
                void ModifyAIAnalysisTemplateAsync(const Model::ModifyAIAnalysisTemplateRequest& request, const ModifyAIAnalysisTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyAIAnalysisTemplateOutcomeCallable ModifyAIAnalysisTemplateCallable(const Model::ModifyAIAnalysisTemplateRequest& request);

                /**
                 *修改用户自定义音视频内容识别模板。
                 * @param req ModifyAIRecognitionTemplateRequest
                 * @return ModifyAIRecognitionTemplateOutcome
                 */
                ModifyAIRecognitionTemplateOutcome ModifyAIRecognitionTemplate(const Model::ModifyAIRecognitionTemplateRequest &request);
                void ModifyAIRecognitionTemplateAsync(const Model::ModifyAIRecognitionTemplateRequest& request, const ModifyAIRecognitionTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyAIRecognitionTemplateOutcomeCallable ModifyAIRecognitionTemplateCallable(const Model::ModifyAIRecognitionTemplateRequest& request);

                /**
                 *修改转自适应码流模板
                 * @param req ModifyAdaptiveDynamicStreamingTemplateRequest
                 * @return ModifyAdaptiveDynamicStreamingTemplateOutcome
                 */
                ModifyAdaptiveDynamicStreamingTemplateOutcome ModifyAdaptiveDynamicStreamingTemplate(const Model::ModifyAdaptiveDynamicStreamingTemplateRequest &request);
                void ModifyAdaptiveDynamicStreamingTemplateAsync(const Model::ModifyAdaptiveDynamicStreamingTemplateRequest& request, const ModifyAdaptiveDynamicStreamingTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyAdaptiveDynamicStreamingTemplateOutcomeCallable ModifyAdaptiveDynamicStreamingTemplateCallable(const Model::ModifyAdaptiveDynamicStreamingTemplateRequest& request);

                /**
                 *修改用户自定义转动图模板。
                 * @param req ModifyAnimatedGraphicsTemplateRequest
                 * @return ModifyAnimatedGraphicsTemplateOutcome
                 */
                ModifyAnimatedGraphicsTemplateOutcome ModifyAnimatedGraphicsTemplate(const Model::ModifyAnimatedGraphicsTemplateRequest &request);
                void ModifyAnimatedGraphicsTemplateAsync(const Model::ModifyAnimatedGraphicsTemplateRequest& request, const ModifyAnimatedGraphicsTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyAnimatedGraphicsTemplateOutcomeCallable ModifyAnimatedGraphicsTemplateCallable(const Model::ModifyAnimatedGraphicsTemplateRequest& request);

                /**
                 *修改用户自定义数字水印模板，数字水印类型不允许修改。
                 * @param req ModifyBlindWatermarkTemplateRequest
                 * @return ModifyBlindWatermarkTemplateOutcome
                 */
                ModifyBlindWatermarkTemplateOutcome ModifyBlindWatermarkTemplate(const Model::ModifyBlindWatermarkTemplateRequest &request);
                void ModifyBlindWatermarkTemplateAsync(const Model::ModifyBlindWatermarkTemplateRequest& request, const ModifyBlindWatermarkTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyBlindWatermarkTemplateOutcomeCallable ModifyBlindWatermarkTemplateCallable(const Model::ModifyBlindWatermarkTemplateRequest& request);

                /**
                 *修改媒体分类属性。
                 * @param req ModifyClassRequest
                 * @return ModifyClassOutcome
                 */
                ModifyClassOutcome ModifyClass(const Model::ModifyClassRequest &request);
                void ModifyClassAsync(const Model::ModifyClassRequest& request, const ModifyClassAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyClassOutcomeCallable ModifyClassCallable(const Model::ModifyClassRequest& request);

                /**
                 *该 API 已经<font color=red>不再维护</font>，新版审核模板支持音视频审核和图片审核，详细请参考 [修改审核模板](https://cloud.tencent.com/document/api/266/84388)。
修改用户自定义音视频内容审核模板。
                 * @param req ModifyContentReviewTemplateRequest
                 * @return ModifyContentReviewTemplateOutcome
                 */
                ModifyContentReviewTemplateOutcome ModifyContentReviewTemplate(const Model::ModifyContentReviewTemplateRequest &request);
                void ModifyContentReviewTemplateAsync(const Model::ModifyContentReviewTemplateRequest& request, const ModifyContentReviewTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyContentReviewTemplateOutcomeCallable ModifyContentReviewTemplateCallable(const Model::ModifyContentReviewTemplateRequest& request);

                /**
                 *该接口用于修改默认分发配置。
* 分发域名和分发协议，即媒体文件分发 URL 中的域名和协议。媒体文件按默认分发配置进行分发。
* 播放密钥，用于计算播放器签名。
                 * @param req ModifyDefaultDistributionConfigRequest
                 * @return ModifyDefaultDistributionConfigOutcome
                 */
                ModifyDefaultDistributionConfigOutcome ModifyDefaultDistributionConfig(const Model::ModifyDefaultDistributionConfigRequest &request);
                void ModifyDefaultDistributionConfigAsync(const Model::ModifyDefaultDistributionConfigRequest& request, const ModifyDefaultDistributionConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyDefaultDistributionConfigOutcomeCallable ModifyDefaultDistributionConfigCallable(const Model::ModifyDefaultDistributionConfigRequest& request);

                /**
                 *该接口用于设置默认的存储地域。上传文件时如果没有指定地域，将上传到默认地域。
                 * @param req ModifyDefaultStorageRegionRequest
                 * @return ModifyDefaultStorageRegionOutcome
                 */
                ModifyDefaultStorageRegionOutcome ModifyDefaultStorageRegion(const Model::ModifyDefaultStorageRegionRequest &request);
                void ModifyDefaultStorageRegionAsync(const Model::ModifyDefaultStorageRegionRequest& request, const ModifyDefaultStorageRegionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyDefaultStorageRegionOutcomeCallable ModifyDefaultStorageRegionCallable(const Model::ModifyDefaultStorageRegionRequest& request);

                /**
                 *该 API 已经<font color=red>不再维护</font>，新版 [音画质重生](https://cloud.tencent.com/document/product/266/102571) 接口使用预置模板，详情请参见 [音画质重生模板](https://cloud.tencent.com/document/product/266/102586#50604b3f-0286-4a10-a3f7-18218116aff7)。
修改音画质重生模板。
                 * @param req ModifyEnhanceMediaTemplateRequest
                 * @return ModifyEnhanceMediaTemplateOutcome
                 */
                ModifyEnhanceMediaTemplateOutcome ModifyEnhanceMediaTemplate(const Model::ModifyEnhanceMediaTemplateRequest &request);
                void ModifyEnhanceMediaTemplateAsync(const Model::ModifyEnhanceMediaTemplateRequest& request, const ModifyEnhanceMediaTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyEnhanceMediaTemplateOutcomeCallable ModifyEnhanceMediaTemplateCallable(const Model::ModifyEnhanceMediaTemplateRequest& request);

                /**
                 *腾讯云点播为客户提供了媒体上传、媒体管理、媒体处理等等服务，在这些服务执行过程或执行结束时，腾讯云点播也提供各种对应的事件通知，方便开发者感知服务处理状态，并做下一步的业务操作。

开发者可以通过调用本接口来实现：
- 设置接收回调通知的类型，目前有[ HTTP 回调通知](https://cloud.tencent.com/document/product/266/33779) 和 [基于消息队列的可靠通知](https://cloud.tencent.com/document/product/266/33779) 两种类型。
- 对于[ HTTP 回调通知](https://cloud.tencent.com/document/product/266/33779)，可设置 3.0 格式回调的地址。3.0 格式回调的说明参见 [历史格式回调](https://cloud.tencent.com/document/product/266/33796)。
- 对具体事件服务的通知事件选择设置接收或者忽略。
                 * @param req ModifyEventConfigRequest
                 * @return ModifyEventConfigOutcome
                 */
                ModifyEventConfigOutcome ModifyEventConfig(const Model::ModifyEventConfigRequest &request);
                void ModifyEventConfigAsync(const Model::ModifyEventConfigRequest& request, const ModifyEventConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyEventConfigOutcomeCallable ModifyEventConfigCallable(const Model::ModifyEventConfigRequest& request);

                /**
                 *修改片头片尾模板。
                 * @param req ModifyHeadTailTemplateRequest
                 * @return ModifyHeadTailTemplateOutcome
                 */
                ModifyHeadTailTemplateOutcome ModifyHeadTailTemplate(const Model::ModifyHeadTailTemplateRequest &request);
                void ModifyHeadTailTemplateAsync(const Model::ModifyHeadTailTemplateRequest& request, const ModifyHeadTailTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyHeadTailTemplateOutcomeCallable ModifyHeadTailTemplateCallable(const Model::ModifyHeadTailTemplateRequest& request);

                /**
                 *修改用户自定义雪碧图模板。
                 * @param req ModifyImageSpriteTemplateRequest
                 * @return ModifyImageSpriteTemplateOutcome
                 */
                ModifyImageSpriteTemplateOutcome ModifyImageSpriteTemplate(const Model::ModifyImageSpriteTemplateRequest &request);
                void ModifyImageSpriteTemplateAsync(const Model::ModifyImageSpriteTemplateRequest& request, const ModifyImageSpriteTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyImageSpriteTemplateOutcomeCallable ModifyImageSpriteTemplateCallable(const Model::ModifyImageSpriteTemplateRequest& request);

                /**
                 *修改即时转码模板。
- 注意：即时转码模板创建后，不推荐修改，如需修改参数，推荐使用新增模板。
                 * @param req ModifyJustInTimeTranscodeTemplateRequest
                 * @return ModifyJustInTimeTranscodeTemplateOutcome
                 */
                ModifyJustInTimeTranscodeTemplateOutcome ModifyJustInTimeTranscodeTemplate(const Model::ModifyJustInTimeTranscodeTemplateRequest &request);
                void ModifyJustInTimeTranscodeTemplateAsync(const Model::ModifyJustInTimeTranscodeTemplateRequest& request, const ModifyJustInTimeTranscodeTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyJustInTimeTranscodeTemplateOutcomeCallable ModifyJustInTimeTranscodeTemplateCallable(const Model::ModifyJustInTimeTranscodeTemplateRequest& request);

                /**
                 *修改大模型解析模板
                 * @param req ModifyLLMComprehendTemplateRequest
                 * @return ModifyLLMComprehendTemplateOutcome
                 */
                ModifyLLMComprehendTemplateOutcome ModifyLLMComprehendTemplate(const Model::ModifyLLMComprehendTemplateRequest &request);
                void ModifyLLMComprehendTemplateAsync(const Model::ModifyLLMComprehendTemplateRequest& request, const ModifyLLMComprehendTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyLLMComprehendTemplateOutcomeCallable ModifyLLMComprehendTemplateCallable(const Model::ModifyLLMComprehendTemplateRequest& request);

                /**
                 *修改用户自定义 MPS 任务模板。
修改模板时，需要将 MPS 相关参数以 JSON 格式填入 MPSModifyTemplateParams 参数中。关于具体的任务参数配置方法，请参考 MPS 任务模板相关文档说明。
                 * @param req ModifyMPSTemplateRequest
                 * @return ModifyMPSTemplateOutcome
                 */
                ModifyMPSTemplateOutcome ModifyMPSTemplate(const Model::ModifyMPSTemplateRequest &request);
                void ModifyMPSTemplateAsync(const Model::ModifyMPSTemplateRequest& request, const ModifyMPSTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyMPSTemplateOutcomeCallable ModifyMPSTemplateCallable(const Model::ModifyMPSTemplateRequest& request);

                /**
                 *修改媒体文件的属性，包括分类、名称、描述、标签、过期时间、打点信息、视频封面、字幕信息等。
                 * @param req ModifyMediaInfoRequest
                 * @return ModifyMediaInfoOutcome
                 */
                ModifyMediaInfoOutcome ModifyMediaInfo(const Model::ModifyMediaInfoRequest &request);
                void ModifyMediaInfoAsync(const Model::ModifyMediaInfoRequest& request, const ModifyMediaInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyMediaInfoOutcomeCallable ModifyMediaInfoCallable(const Model::ModifyMediaInfoRequest& request);

                /**
                 *修改媒体文件的存储类型。
当媒体文件的存储类型为标准存储时，可以修改为以下类型：
<li>低频存储</li>
<li>归档存储</li>
<li>深度归档存储</li>
当媒体文件的当前存储类型为低频存储时，可以修改为以下类型：
<li>标准存储</li>
<li>归档存储</li>
<li>深度归档存储</li>
当媒体文件的当前存储类型为归档存储时，可以修改为以下类型：
<li>标准存储</li>
当媒体文件的当前存储类型为深度归档存储时，可以修改为以下类型：
<li>标准存储</li>
                 * @param req ModifyMediaStorageClassRequest
                 * @return ModifyMediaStorageClassOutcome
                 */
                ModifyMediaStorageClassOutcome ModifyMediaStorageClass(const Model::ModifyMediaStorageClassRequest &request);
                void ModifyMediaStorageClassAsync(const Model::ModifyMediaStorageClassRequest& request, const ModifyMediaStorageClassAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyMediaStorageClassOutcomeCallable ModifyMediaStorageClassCallable(const Model::ModifyMediaStorageClassRequest& request);

                /**
                 *该接口用于根据素材 ID，修改素材样本信息，包括名称、描述的修改，以及五官、标签的添加、删除、重置操作。五官删除操作需保证至少剩余 1 张图片，否则，请使用重置操作。
                 * @param req ModifyPersonSampleRequest
                 * @return ModifyPersonSampleOutcome
                 */
                ModifyPersonSampleOutcome ModifyPersonSample(const Model::ModifyPersonSampleRequest &request);
                void ModifyPersonSampleAsync(const Model::ModifyPersonSampleRequest& request, const ModifyPersonSampleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyPersonSampleOutcomeCallable ModifyPersonSampleCallable(const Model::ModifyPersonSampleRequest& request);

                /**
                 *修改用户自定义图像异步处理模板。

注意：模板 ID 10000 以下的为系统预置模板，不允许修改。
                 * @param req ModifyProcessImageAsyncTemplateRequest
                 * @return ModifyProcessImageAsyncTemplateOutcome
                 */
                ModifyProcessImageAsyncTemplateOutcome ModifyProcessImageAsyncTemplate(const Model::ModifyProcessImageAsyncTemplateRequest &request);
                void ModifyProcessImageAsyncTemplateAsync(const Model::ModifyProcessImageAsyncTemplateRequest& request, const ModifyProcessImageAsyncTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyProcessImageAsyncTemplateOutcomeCallable ModifyProcessImageAsyncTemplateCallable(const Model::ModifyProcessImageAsyncTemplateRequest& request);

                /**
                 *修改音画质检测模板。
                 * @param req ModifyQualityInspectTemplateRequest
                 * @return ModifyQualityInspectTemplateOutcome
                 */
                ModifyQualityInspectTemplateOutcome ModifyQualityInspectTemplate(const Model::ModifyQualityInspectTemplateRequest &request);
                void ModifyQualityInspectTemplateAsync(const Model::ModifyQualityInspectTemplateRequest& request, const ModifyQualityInspectTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyQualityInspectTemplateOutcomeCallable ModifyQualityInspectTemplateCallable(const Model::ModifyQualityInspectTemplateRequest& request);

                /**
                 *该 API 已经<font color=red>不再维护</font>，新版 [音画质重生](https://cloud.tencent.com/document/product/266/102571) 接口使用预置模板，详情请参见 [音画质重生模板](https://cloud.tencent.com/document/product/266/102586#50604b3f-0286-4a10-a3f7-18218116aff7)。
修改视频重生模板。
                 * @param req ModifyRebuildMediaTemplateRequest
                 * @return ModifyRebuildMediaTemplateOutcome
                 */
                ModifyRebuildMediaTemplateOutcome ModifyRebuildMediaTemplate(const Model::ModifyRebuildMediaTemplateRequest &request);
                void ModifyRebuildMediaTemplateAsync(const Model::ModifyRebuildMediaTemplateRequest& request, const ModifyRebuildMediaTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyRebuildMediaTemplateOutcomeCallable ModifyRebuildMediaTemplateCallable(const Model::ModifyRebuildMediaTemplateRequest& request);

                /**
                 *修改用户自定义审核模板。
>模板仅适用于 [音视频审核(ReviewAudioVideo)](https://cloud.tencent.com/document/api/266/80283) 和 [图片审核(ReviewImage)](https://cloud.tencent.com/document/api/266/73217) 接口。
                 * @param req ModifyReviewTemplateRequest
                 * @return ModifyReviewTemplateOutcome
                 */
                ModifyReviewTemplateOutcome ModifyReviewTemplate(const Model::ModifyReviewTemplateRequest &request);
                void ModifyReviewTemplateAsync(const Model::ModifyReviewTemplateRequest& request, const ModifyReviewTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyReviewTemplateOutcomeCallable ModifyReviewTemplateCallable(const Model::ModifyReviewTemplateRequest& request);

                /**
                 *该接口用于修改轮播播单。
修改后只有新的播放请求会生效，已经在播放中的用户在七天之内还可以播放修改前的播单。
                 * @param req ModifyRoundPlayRequest
                 * @return ModifyRoundPlayOutcome
                 */
                ModifyRoundPlayOutcome ModifyRoundPlay(const Model::ModifyRoundPlayRequest &request);
                void ModifyRoundPlayAsync(const Model::ModifyRoundPlayRequest& request, const ModifyRoundPlayAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyRoundPlayOutcomeCallable ModifyRoundPlayCallable(const Model::ModifyRoundPlayRequest& request);

                /**
                 *修改用户自定义采样截图模板。
                 * @param req ModifySampleSnapshotTemplateRequest
                 * @return ModifySampleSnapshotTemplateOutcome
                 */
                ModifySampleSnapshotTemplateOutcome ModifySampleSnapshotTemplate(const Model::ModifySampleSnapshotTemplateRequest &request);
                void ModifySampleSnapshotTemplateAsync(const Model::ModifySampleSnapshotTemplateRequest& request, const ModifySampleSnapshotTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifySampleSnapshotTemplateOutcomeCallable ModifySampleSnapshotTemplateCallable(const Model::ModifySampleSnapshotTemplateRequest& request);

                /**
                 *修改用户自定义指定时间点截图模板。
                 * @param req ModifySnapshotByTimeOffsetTemplateRequest
                 * @return ModifySnapshotByTimeOffsetTemplateOutcome
                 */
                ModifySnapshotByTimeOffsetTemplateOutcome ModifySnapshotByTimeOffsetTemplate(const Model::ModifySnapshotByTimeOffsetTemplateRequest &request);
                void ModifySnapshotByTimeOffsetTemplateAsync(const Model::ModifySnapshotByTimeOffsetTemplateRequest& request, const ModifySnapshotByTimeOffsetTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifySnapshotByTimeOffsetTemplateOutcomeCallable ModifySnapshotByTimeOffsetTemplateCallable(const Model::ModifySnapshotByTimeOffsetTemplateRequest& request);

                /**
                 *该接口用于修改应用信息，但不允许修改默认应用信息。
                 * @param req ModifySubAppIdInfoRequest
                 * @return ModifySubAppIdInfoOutcome
                 */
                ModifySubAppIdInfoOutcome ModifySubAppIdInfo(const Model::ModifySubAppIdInfoRequest &request);
                void ModifySubAppIdInfoAsync(const Model::ModifySubAppIdInfoRequest& request, const ModifySubAppIdInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifySubAppIdInfoOutcomeCallable ModifySubAppIdInfoCallable(const Model::ModifySubAppIdInfoRequest& request);

                /**
                 *该接口用于启用、停用应用。被停用的应用将封停对应域名，并限制控制台访问。
                 * @param req ModifySubAppIdStatusRequest
                 * @return ModifySubAppIdStatusOutcome
                 */
                ModifySubAppIdStatusOutcome ModifySubAppIdStatus(const Model::ModifySubAppIdStatusRequest &request);
                void ModifySubAppIdStatusAsync(const Model::ModifySubAppIdStatusRequest& request, const ModifySubAppIdStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifySubAppIdStatusOutcomeCallable ModifySubAppIdStatusCallable(const Model::ModifySubAppIdStatusRequest& request);

                /**
                 *该 API 已经<font color='red'>不再维护</font>，新版播放器签名不再使用播放器配置模板，详细请参考 [播放器签名](https://cloud.tencent.com/document/product/266/45554)。
修改播放器配置。
                 * @param req ModifySuperPlayerConfigRequest
                 * @return ModifySuperPlayerConfigOutcome
                 */
                ModifySuperPlayerConfigOutcome ModifySuperPlayerConfig(const Model::ModifySuperPlayerConfigRequest &request);
                void ModifySuperPlayerConfigAsync(const Model::ModifySuperPlayerConfigRequest& request, const ModifySuperPlayerConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifySuperPlayerConfigOutcomeCallable ModifySuperPlayerConfigCallable(const Model::ModifySuperPlayerConfigRequest& request);

                /**
                 *修改用户自定义转码模板信息。
                 * @param req ModifyTranscodeTemplateRequest
                 * @return ModifyTranscodeTemplateOutcome
                 */
                ModifyTranscodeTemplateOutcome ModifyTranscodeTemplate(const Model::ModifyTranscodeTemplateRequest &request);
                void ModifyTranscodeTemplateAsync(const Model::ModifyTranscodeTemplateRequest& request, const ModifyTranscodeTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyTranscodeTemplateOutcomeCallable ModifyTranscodeTemplateCallable(const Model::ModifyTranscodeTemplateRequest& request);

                /**
                 *该接口用于修改点播域名的加速区域。
1、域名部署状态为 Online 状态时才允许修改加速区域。
                 * @param req ModifyVodDomainAccelerateConfigRequest
                 * @return ModifyVodDomainAccelerateConfigOutcome
                 */
                ModifyVodDomainAccelerateConfigOutcome ModifyVodDomainAccelerateConfig(const Model::ModifyVodDomainAccelerateConfigRequest &request);
                void ModifyVodDomainAccelerateConfigAsync(const Model::ModifyVodDomainAccelerateConfigRequest& request, const ModifyVodDomainAccelerateConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyVodDomainAccelerateConfigOutcomeCallable ModifyVodDomainAccelerateConfigCallable(const Model::ModifyVodDomainAccelerateConfigRequest& request);

                /**
                 *该接口用于修改域名配置，可以修改域名的防盗链配置。
1、域名部署状态为 Online 状态时才允许修改域名的配置。
                 * @param req ModifyVodDomainConfigRequest
                 * @return ModifyVodDomainConfigOutcome
                 */
                ModifyVodDomainConfigOutcome ModifyVodDomainConfig(const Model::ModifyVodDomainConfigRequest &request);
                void ModifyVodDomainConfigAsync(const Model::ModifyVodDomainConfigRequest& request, const ModifyVodDomainConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyVodDomainConfigOutcomeCallable ModifyVodDomainConfigCallable(const Model::ModifyVodDomainConfigRequest& request);

                /**
                 *修改用户自定义水印模板，水印类型不允许修改。
                 * @param req ModifyWatermarkTemplateRequest
                 * @return ModifyWatermarkTemplateOutcome
                 */
                ModifyWatermarkTemplateOutcome ModifyWatermarkTemplate(const Model::ModifyWatermarkTemplateRequest &request);
                void ModifyWatermarkTemplateAsync(const Model::ModifyWatermarkTemplateRequest& request, const ModifyWatermarkTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyWatermarkTemplateOutcomeCallable ModifyWatermarkTemplateCallable(const Model::ModifyWatermarkTemplateRequest& request);

                /**
                 *该接口用于修改关键词的应用场景、标签，关键词本身不可修改，如需修改，可删除重建。
                 * @param req ModifyWordSampleRequest
                 * @return ModifyWordSampleOutcome
                 */
                ModifyWordSampleOutcome ModifyWordSample(const Model::ModifyWordSampleRequest &request);
                void ModifyWordSampleAsync(const Model::ModifyWordSampleRequest& request, const ModifyWordSampleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyWordSampleOutcomeCallable ModifyWordSampleCallable(const Model::ModifyWordSampleRequest& request);

                /**
                 *上传 HLS 视频时，解析索引文件内容，返回待上传的分片文件列表。分片文件路径必须是当前目录或子目录的相对路径，不能是 URL，不能是绝对路径。
                 * @param req ParseStreamingManifestRequest
                 * @return ParseStreamingManifestOutcome
                 */
                ParseStreamingManifestOutcome ParseStreamingManifest(const Model::ParseStreamingManifestRequest &request);
                void ParseStreamingManifestAsync(const Model::ParseStreamingManifestRequest& request, const ParseStreamingManifestAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ParseStreamingManifestOutcomeCallable ParseStreamingManifestCallable(const Model::ParseStreamingManifestRequest& request);

                /**
                 *该 API 已经<font color='red'>不再维护</font>，智能识别任务请使用图片智能识别 [ReviewImage](https://cloud.tencent.com/document/api/266/73217) 接口。

对点播中的图片文件发起处理任务，功能包括：

1. 智能识别（令人反感的信息、不安全的信息、不适宜的信息）;

><li>图片文件大小支持：文件 < 5M；</li>
><li>图片文件分辨率支持：建议分辨率大于256x256，否则可能会影响识别效果；</li>
><li>图片文件支持格式：PNG、JPG、JPEG、BMP、GIF、WEBP格式。</li>
                 * @param req ProcessImageRequest
                 * @return ProcessImageOutcome
                 */
                ProcessImageOutcome ProcessImage(const Model::ProcessImageRequest &request);
                void ProcessImageAsync(const Model::ProcessImageRequest& request, const ProcessImageAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ProcessImageOutcomeCallable ProcessImageCallable(const Model::ProcessImageRequest& request);

                /**
                 *该接口用于图片处理任务
                 * @param req ProcessImageAsyncRequest
                 * @return ProcessImageAsyncOutcome
                 */
                ProcessImageAsyncOutcome ProcessImageAsync(const Model::ProcessImageAsyncRequest &request);
                void ProcessImageAsyncAsync(const Model::ProcessImageAsyncRequest& request, const ProcessImageAsyncAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ProcessImageAsyncOutcomeCallable ProcessImageAsyncCallable(const Model::ProcessImageAsyncRequest& request);

                /**
                 *对点播中的音视频媒体发起处理任务，功能包括：
1. 视频转码（带水印）；
2. 视频转动图；
3. 对视频按指定时间点截图；
4. 对视频采样截图；
5. 对视频截取雪碧图；
6. 对视频截取一张图做封面；
7. 对视频转自适应码流（并加密）；
8. 内容审核（令人反感的信息、不安全的信息、不适宜的信息），<font color=red>不建议</font> 使用该接口发起，推荐使用 [音视频审核(ReviewAudioVideo)](https://cloud.tencent.com/document/api/266/80283) 或 [图片审核(ReviewImage)](https://cloud.tencent.com/document/api/266/73217)；
9. 内容分析（标签、分类、封面、按帧标签），暂时不支持 HLS 格式；
10. 内容识别（视频片头片尾、人脸、文本全文、文本关键词、语音全文、语音关键词、物体）。

如使用事件通知，事件通知的类型为 [任务流状态变更](https://cloud.tencent.com/document/product/266/9636)。
                 * @param req ProcessMediaRequest
                 * @return ProcessMediaOutcome
                 */
                ProcessMediaOutcome ProcessMedia(const Model::ProcessMediaRequest &request);
                void ProcessMediaAsync(const Model::ProcessMediaRequest& request, const ProcessMediaAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ProcessMediaOutcomeCallable ProcessMediaCallable(const Model::ProcessMediaRequest& request);

                /**
                 *使用媒体处理服务（MPS）的媒体处理能力，对点播中的视频发起媒体处理，任务发起时需将 MPS 相关参数以 JSON 格式填入 MPSProcessMediaParams 参数中。具体任务参数配置请参考[媒体处理 ProcessMedia 接口](https://cloud.tencent.com/document/api/862/37578)。 
当前支持的 MPS 功能：
1. [智能擦除](https://cloud.tencent.com/document/product/862/101530)：能够对视频画面中的 Logo、字幕、人脸和车牌等元素进行模糊、马赛克或无痕化处理，从而便于内容的传播和分享。该任务产生的新视频将生成新的 FileId 存储在点播平台的子应用中。
2. [音视频增强](https://cloud.tencent.com/document/product/862/118703)：该功能支持分布式实时画质增强，包含视频去毛刺、降噪、色彩增强、细节增强、人脸增强、SDR2HDR、大模型增强等功能，可大幅提升音视频质量，广泛应用于 OTT、电商、赛事等场景，有效实现 QoE 与 QoS 双维度提升，创造显著业务价值。
3. [智能字幕](https://cloud.tencent.com/document/product/862/89091)：该功能支持处理离线音频文件、视频文件及直播流，可通过 ASR 语音识别或 OCR 文本识别提取视频源语言字幕，并实现多语言翻译。
4. [智能分析](https://cloud.tencent.com/document/product/862/113756)：该功能支持智能封面、智能高光、智能摘要、视频理解等功能。


> 以该种方式发起的视频处理任务：
> 1. 任务状态及结果的查询仍在点播平台中完成，使用 [DescribeTaskDetail](https://cloud.tencent.com/document/product/266/33431) 或 [DescribeTasks](https://cloud.tencent.com/document/product/266/33430) 查询任务。
> 2. 相关功能的用量及账单将在 MPS 平台给出，因此在使用该功能前，首先需要开通 MPS 服务。
> 3. 该功能目前仍在内测中，如需测试体验，您可以联系我们获得支持。
                 * @param req ProcessMediaByMPSRequest
                 * @return ProcessMediaByMPSOutcome
                 */
                ProcessMediaByMPSOutcome ProcessMediaByMPS(const Model::ProcessMediaByMPSRequest &request);
                void ProcessMediaByMPSAsync(const Model::ProcessMediaByMPSRequest& request, const ProcessMediaByMPSAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ProcessMediaByMPSOutcomeCallable ProcessMediaByMPSCallable(const Model::ProcessMediaByMPSRequest& request);

                /**
                 *使用任务流模板，对点播中的视频发起处理任务。
有两种方式创建任务流模板：
1. 在控制台上创建和修改任务流模板；
2. 通过任务流模板接口创建任务流模板。

如使用事件通知，除音视频审核任务外的事件通知的类型为 [任务流状态变更](https://cloud.tencent.com/document/product/266/9636)；音视频审核任务事件通知的类型为 [音视频审核完成](https://cloud.tencent.com/document/product/266/81258)。
                 * @param req ProcessMediaByProcedureRequest
                 * @return ProcessMediaByProcedureOutcome
                 */
                ProcessMediaByProcedureOutcome ProcessMediaByProcedure(const Model::ProcessMediaByProcedureRequest &request);
                void ProcessMediaByProcedureAsync(const Model::ProcessMediaByProcedureRequest& request, const ProcessMediaByProcedureAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ProcessMediaByProcedureOutcomeCallable ProcessMediaByProcedureCallable(const Model::ProcessMediaByProcedureRequest& request);

                /**
                 *该 API 已经<font color='red'>不再维护</font>，请使用 MPS 产品的 [ProcessMedia](https://cloud.tencent.com/document/product/862/37578) 接口，在入参 InputInfo.UrlInputInfo.Url 中指定视频 URL。
                 * @param req ProcessMediaByUrlRequest
                 * @return ProcessMediaByUrlOutcome
                 */
                ProcessMediaByUrlOutcome ProcessMediaByUrl(const Model::ProcessMediaByUrlRequest &request);
                void ProcessMediaByUrlAsync(const Model::ProcessMediaByUrlRequest& request, const ProcessMediaByUrlAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ProcessMediaByUrlOutcomeCallable ProcessMediaByUrlCallable(const Model::ProcessMediaByUrlRequest& request);

                /**
                 ** 该接口用于业务服务器以 [可靠回调](https://cloud.tencent.com/document/product/266/33779#.E5.8F.AF.E9.9D.A0.E5.9B.9E.E8.B0.83) 的方式获取事件通知；
* 接口为长轮询模式，即：如果服务端存在未消费事件，则立即返回给请求方；如果服务端没有未消费事件，则后台会将请求挂起，直到有新的事件产生为止；
* 请求最多挂起5秒，建议请求方将超时时间设置为10秒；
* 未被拉取的事件通知最多保留4天，超过该时限的事件通知可能会被清除；
* 若该接口有事件返回，调用方必须在<font color="red">30秒</font>内调用 [确认事件通知](https://cloud.tencent.com/document/product/266/33434) 接口，确认事件通知已经处理，否则该事件通知在<font color="red">30秒</font>后会再次被拉取到。
* 当前，API 每次最多可以获取16个事件通知。
                 * @param req PullEventsRequest
                 * @return PullEventsOutcome
                 */
                PullEventsOutcome PullEvents(const Model::PullEventsRequest &request);
                void PullEventsAsync(const Model::PullEventsRequest& request, const PullEventsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                PullEventsOutcomeCallable PullEventsCallable(const Model::PullEventsRequest& request);

                /**
                 *该接口用于将一个网络上的视频拉取到云点播平台。
                 * @param req PullUploadRequest
                 * @return PullUploadOutcome
                 */
                PullUploadOutcome PullUpload(const Model::PullUploadRequest &request);
                void PullUploadAsync(const Model::PullUploadRequest& request, const PullUploadAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                PullUploadOutcomeCallable PullUploadCallable(const Model::PullUploadRequest& request);

                /**
                 *1. 预热指定的 URL 列表。
2. URL 的域名必须已在云点播中注册。
3. 单次请求最多指定20个 URL。
4. 默认预热配额为每天10000个 URL。
                 * @param req PushUrlCacheRequest
                 * @return PushUrlCacheOutcome
                 */
                PushUrlCacheOutcome PushUrlCache(const Model::PushUrlCacheRequest &request);
                void PushUrlCacheAsync(const Model::PushUrlCacheRequest& request, const PushUrlCacheAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                PushUrlCacheOutcomeCallable PushUrlCacheCallable(const Model::PushUrlCacheRequest& request);

                /**
                 *该 API 已经<font color=red>不再维护</font>，请使用新版接口 [音画质重生](https://cloud.tencent.com/document/api/266/102571)。
发起音画质重生
                 * @param req RebuildMediaRequest
                 * @return RebuildMediaOutcome
                 */
                RebuildMediaOutcome RebuildMedia(const Model::RebuildMediaRequest &request);
                void RebuildMediaAsync(const Model::RebuildMediaRequest& request, const RebuildMediaAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                RebuildMediaOutcomeCallable RebuildMediaCallable(const Model::RebuildMediaRequest& request);

                /**
                 *该 API 已经<font color=red>不再维护</font>，请使用新版接口 [音画质重生](https://cloud.tencent.com/document/api/266/102571)。
使用模板发起视频重生。
                 * @param req RebuildMediaByTemplateRequest
                 * @return RebuildMediaByTemplateOutcome
                 */
                RebuildMediaByTemplateOutcome RebuildMediaByTemplate(const Model::RebuildMediaByTemplateRequest &request);
                void RebuildMediaByTemplateAsync(const Model::RebuildMediaByTemplateRequest& request, const RebuildMediaByTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                RebuildMediaByTemplateOutcomeCallable RebuildMediaByTemplateCallable(const Model::RebuildMediaByTemplateRequest& request);

                /**
                 *1. 刷新指定的 URL 列表。
2. URL 的域名必须已在云点播中注册。
3. 单次请求最多指定20个 URL。
4. 默认刷新配额为每天100000个 URL。
                 * @param req RefreshUrlCacheRequest
                 * @return RefreshUrlCacheOutcome
                 */
                RefreshUrlCacheOutcome RefreshUrlCache(const Model::RefreshUrlCacheRequest &request);
                void RefreshUrlCacheAsync(const Model::RefreshUrlCacheRequest& request, const RefreshUrlCacheAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                RefreshUrlCacheOutcomeCallable RefreshUrlCacheCallable(const Model::RefreshUrlCacheRequest& request);

                /**
                 *智能去除水印
                 * @param req RemoveWatermarkRequest
                 * @return RemoveWatermarkOutcome
                 */
                RemoveWatermarkOutcome RemoveWatermark(const Model::RemoveWatermarkRequest &request);
                void RemoveWatermarkAsync(const Model::RemoveWatermarkRequest& request, const RemoveWatermarkAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                RemoveWatermarkOutcomeCallable RemoveWatermarkCallable(const Model::RemoveWatermarkRequest& request);

                /**
                 *重新设置用户自定义任务流模板的内容。
                 * @param req ResetProcedureTemplateRequest
                 * @return ResetProcedureTemplateOutcome
                 */
                ResetProcedureTemplateOutcome ResetProcedureTemplate(const Model::ResetProcedureTemplateRequest &request);
                void ResetProcedureTemplateAsync(const Model::ResetProcedureTemplateRequest& request, const ResetProcedureTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ResetProcedureTemplateOutcomeCallable ResetProcedureTemplateCallable(const Model::ResetProcedureTemplateRequest& request);

                /**
                 *当媒体文件的存储类型是归档存储或深度归档存储时，是不可访问的。如需访问，则需要调用本接口进行解冻，解冻后可访问的媒体文件是临时的，在有效期过后，则不可访问。
                 * @param req RestoreMediaRequest
                 * @return RestoreMediaOutcome
                 */
                RestoreMediaOutcome RestoreMedia(const Model::RestoreMediaRequest &request);
                void RestoreMediaAsync(const Model::RestoreMediaRequest& request, const RestoreMediaAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                RestoreMediaOutcomeCallable RestoreMediaCallable(const Model::RestoreMediaRequest& request);

                /**
                 *对点播中的音视频媒体发起审核任务，智能检测视频画面、画面中的文字、语音中的文字、声音出现的违规内容。

如使用事件通知，事件通知的类型为 [音视频审核完成](https://cloud.tencent.com/document/product/266/81258)。
                 * @param req ReviewAudioVideoRequest
                 * @return ReviewAudioVideoOutcome
                 */
                ReviewAudioVideoOutcome ReviewAudioVideo(const Model::ReviewAudioVideoRequest &request);
                void ReviewAudioVideoAsync(const Model::ReviewAudioVideoRequest& request, const ReviewAudioVideoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ReviewAudioVideoOutcomeCallable ReviewAudioVideoCallable(const Model::ReviewAudioVideoRequest& request);

                /**
                 *对点播中的图片文件发起审核（令人反感的信息、不安全的信息、不适宜的信息）任务。

><li>图片文件大小支持：文件 < 5M；</li>
><li>图片文件分辨率支持：建议分辨率大于256x256，否则可能会影响审核效果；</li>
><li>图片文件支持格式：PNG、JPG、JPEG、BMP、GIF、WEBP格式。</li>
                 * @param req ReviewImageRequest
                 * @return ReviewImageOutcome
                 */
                ReviewImageOutcome ReviewImage(const Model::ReviewImageRequest &request);
                void ReviewImageAsync(const Model::ReviewImageRequest& request, const ReviewImageAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ReviewImageOutcomeCallable ReviewImageCallable(const Model::ReviewImageRequest& request);

                /**
                 *搜索媒体信息，支持多种条件筛选，以及支持对返回结果排序、过滤等功能，具体包括：
- 指定文件 ID 集合 FileIds ，返回匹配集合中任意 ID 的媒体。
- 根据多个媒体文件名 Names 或描述信息 Descriptions 进行模糊搜索。
- 根据多个文件名前缀 NamePrefixes 进行搜索。
- 指定分类集合 ClassIds（见输入参数），返回满足集合中任意分类的媒体。例如：媒体分类有电影、电视剧、综艺等，其中电影分类下又有子分类历史片、动作片、言情片。如果 ClassIds 指定了电影、电视剧，那么电影和电视剧下的所有子分类都会返回；而如果 ClassIds 指定的是历史片、动作片，那么只有这2个子分类下的媒体才会返回。
- 指定标签集合 Tags（见输入参数），返回满足集合中任意标签的媒体。例如：媒体标签有二次元、宫斗、鬼畜，如果 Tags 指定了二次元、鬼畜2个标签，那么只要符合这2个标签中任意一个的媒体都会被检索出来。
- 指定文件类型集合 Categories（见输入参数），返回满足集合中任意类型的媒体。例如：文件类型有 Video（视频）、 Audio （音频）、 Image （图片）。如果Categories指定了 Video 和 Audio 2个文件类型，那么符合这些类型的媒体都会被检索出来。
- 指定来源集合 SourceTypes（见输入参数），返回满足集合中任意来源的媒体。例如：媒体来源有 Record (直播录制)、Upload （上传）等。如果 SourceTypes 指定了 Record 和 Upload ，那么符合这些来源的媒体都会被检索出来。
- 指定文件封装格式集合 MediaTypes（见输入参数），返回满足集合中任意封装格式的媒体。例如：封装格式有 MP4、AVI、MP3 等。如果 MediaTypes 指定了 MP4 和 MP3，那么符合这些封装格式的媒体都会被检索出来。
- 指定文件状态集合 Status（见输入参数），返回满足集合中任意状态的媒体。例如：文件状态有 Normal（正常）、SystemForbidden（平台封禁）、Forbidden（主动封禁）。如果 Status 指定了 Normal 和 Forbidden 2种文件状态，那么符合这些状态的媒体都会被检索出来。
- 指定文件审核结果集合 ReviewResults（见输入参数），返回满足集合中任意状态的媒体。例如：文件审核结果有 pass（通过）、block（违规）等。如果 ReviewResults 指定了 pass 和 block 2种审核结果，那么符合这些审核结果的媒体都会被检索出来。
- 指定直播推流码集合 StreamIds（见输入参数）筛选直播录制的媒体。
- 指定媒体的创建时间范围筛选媒体。
- 指定 TRTC 应用 ID 集合筛选媒体。
- 指定 TRTC 房间 ID 集合筛选媒体。

- 以上参数之间可以任意组合进行检索。例如：筛选创建时间在2018年12月1日12:00:00到2018年12月8日12:00:00之间、分类为电影或电视剧、带有宫斗和悬疑标签的媒体。注意，任何支持数组输入的参数，其元素之间的搜索逻辑为‘或’。所有参数之间的逻辑关系为‘与’。

- 允许通过 Filters 控制返回的媒体信息种类（默认返回所有信息）。可选输入包括：
    1. 基础信息（basicInfo）：包括媒体名称、分类、播放地址、封面图片等。
    2. 元信息（metaData）：包括大小、时长、视频流信息、音频流信息等。
    3. 转码结果信息（transcodeInfo）：包括该媒体转码生成的各种规格的媒体地址、视频流参数、音频流参数等。
    4. 转动图结果信息（animatedGraphicsInfo）：对视频转动图（如 gif）后的动图信息。
    5. 采样截图信息（sampleSnapshotInfo）：对视频采样截图后的截图信息。
    6. 雪碧图信息（imageSpriteInfo）：对视频截取雪碧图后的雪碧图信息。
    7. 指定时间点截图信息（snapshotByTimeOffsetInfo）：对视频依照指定时间点截图后，的截图信息。
    8. 视频打点信息（keyFrameDescInfo）：对视频设置的打点信息。
    9. 转自适应码流信息（adaptiveDynamicStreamingInfo）：包括规格、加密类型、打包格式等相关信息。

- 允许对结果根据创建时间进行排序并分页返回，通过 Offset 和 Limit （见输入参数）来控制分页。

<div id="maxResultsDesc">接口返回结果数限制：</div>

- <b><a href="#p_offset">Offset</a> 和 <a href="#p_limit">Limit</a> 两个参数影响单次分页查询结果数。特别注意：当这2个值都缺省时，本接口最多只返回10条查询结果。</b>
- <b>最大支持返回5000条搜索结果，超出部分不再支持查询。如果搜索结果量太大，建议使用更精细的筛选条件来减少搜索结果。</b>

<br>不推荐使用的条件筛选：
- （不推荐：应使用 Names、NamePrefixes 或 Descriptions 替代）指定单个文本 Text 对媒体文件名或描述信息进行模糊搜索。
- （不推荐：应使用 SourceTypes 替代）指定单个媒体文件来源 SourceType 进行搜索。
- （不推荐：应使用 StreamIds 替代）指定单个推流直播码 StreamId 进行搜索。
- （不推荐：应使用 CreateTime 替代）指定单个起始创建时间 StartTime 进行搜索。
- （不推荐：应使用 CreateTime 替代）指定单个结尾创建时间 EndTime 进行搜索。
                 * @param req SearchMediaRequest
                 * @return SearchMediaOutcome
                 */
                SearchMediaOutcome SearchMedia(const Model::SearchMediaRequest &request);
                void SearchMediaAsync(const Model::SearchMediaRequest& request, const SearchMediaAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                SearchMediaOutcomeCallable SearchMediaCallable(const Model::SearchMediaRequest& request);

                /**
                 *使用自然语言对媒体进行语义搜索。
                 * @param req SearchMediaBySemanticsRequest
                 * @return SearchMediaBySemanticsOutcome
                 */
                SearchMediaBySemanticsOutcome SearchMediaBySemantics(const Model::SearchMediaBySemanticsRequest &request);
                void SearchMediaBySemanticsAsync(const Model::SearchMediaBySemanticsRequest& request, const SearchMediaBySemanticsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                SearchMediaBySemanticsOutcomeCallable SearchMediaBySemanticsCallable(const Model::SearchMediaBySemanticsRequest& request);

                /**
                 *为点播域名设置投递 CLS 的目标。
                 * @param req SetCLSPushTargetRequest
                 * @return SetCLSPushTargetOutcome
                 */
                SetCLSPushTargetOutcome SetCLSPushTarget(const Model::SetCLSPushTargetRequest &request);
                void SetCLSPushTargetAsync(const Model::SetCLSPushTargetRequest& request, const SetCLSPushTargetAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                SetCLSPushTargetOutcomeCallable SetCLSPushTargetCallable(const Model::SetCLSPushTargetRequest& request);

                /**
                 *设置 DRM 密钥提供商信息。
                 * @param req SetDrmKeyProviderInfoRequest
                 * @return SetDrmKeyProviderInfoOutcome
                 */
                SetDrmKeyProviderInfoOutcome SetDrmKeyProviderInfo(const Model::SetDrmKeyProviderInfoRequest &request);
                void SetDrmKeyProviderInfoAsync(const Model::SetDrmKeyProviderInfoRequest& request, const SetDrmKeyProviderInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                SetDrmKeyProviderInfoOutcomeCallable SetDrmKeyProviderInfoCallable(const Model::SetDrmKeyProviderInfoRequest& request);

                /**
                 *设置点播域名 HTTPS 证书。
                 * @param req SetVodDomainCertificateRequest
                 * @return SetVodDomainCertificateOutcome
                 */
                SetVodDomainCertificateOutcome SetVodDomainCertificate(const Model::SetVodDomainCertificateRequest &request);
                void SetVodDomainCertificateAsync(const Model::SetVodDomainCertificateRequest& request, const SetVodDomainCertificateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                SetVodDomainCertificateOutcomeCallable SetVodDomainCertificateCallable(const Model::SetVodDomainCertificateRequest& request);

                /**
                 *对 HLS 视频进行按时间段裁剪，实时生成一个新的视频（HLS 格式），开发者可以将其立即分享出去，或者长久保存起来。

腾讯云点播支持两种剪辑模式：
- 剪辑固化：将剪辑出来的视频保存成独立的视频，拥有独立 FileId；适用于将精彩片段长久保存的场景；
- 剪辑不固化：剪辑得到的视频附属于输入文件，没有独立 FileId；适用于将精彩片段临时分享的场景。

该接口基于输入 m3u8 文件进行裁剪，其最小剪辑精度为一个 ts 切片，无法实现秒级或者更为精确的剪辑精度。

### 剪辑固化
所谓剪辑固化，是指将剪辑出来的视频保存成一个独立的视频（拥有独立的 FileId）。其生命周期不受原始输入视频影响（即使原始输入视频被删除，剪辑结果也不会受到任何影响）；也可以对其进行转码、微信发布等二次处理。

举例如下：一场完整的足球比赛，原始视频可能长达 2 个小时，客户出于节省成本的目的可以对这个视频存储 2 个月，但对于剪辑的「精彩时刻」视频却可以指定存储更长时间，同时可以单独对「精彩时刻」视频进行转码、微信发布等额外的点播操作，这时候可以选择剪辑并且固化的方案。

剪辑固化的优势在于其生命周期与原始输入视频相互独立，可以独立管理、长久保存。

<font color='red'>注意：</font>如果剪辑时指定进行固化，通过 ModifyEventConfig 接口启用接收剪辑固化事件通知，固化成功后将会收到一个 PersistenceComplete 类型的事件通知。在收到这个事件通知之前，不应该对原始输入的视频进行删除、降冷等操作，否则剪辑生成的视频播放可能出现异常。

### 剪辑不固化
所谓剪辑不固化，是指剪辑所得到的结果（m3u8 文件）与原始输入视频共享相同的 ts 分片，新生成的视频不是一个独立完整的视频（没有独立 FileId，只有播放 URL），其有效期与原始输入的完整视频有效期是一致的。一旦原始输入的视频被删除，也会导致该片段无法播放。

剪辑不固化，由于其剪辑结果不是一个独立的视频，因而也不会纳入点播媒资视频管理（例如控制台的视频总数不会统计这一片段）中，也无法单独针对这个片段做转码、微信发布等任何视频处理操作。

剪辑不固化的优势在于其剪辑操作十分“轻量化”，不会产生额外的存储开销。但其不足之处在于生命周期与原始录制视频相同，且无法进一步进行转码等视频处理。
                 * @param req SimpleHlsClipRequest
                 * @return SimpleHlsClipOutcome
                 */
                SimpleHlsClipOutcome SimpleHlsClip(const Model::SimpleHlsClipRequest &request);
                void SimpleHlsClipAsync(const Model::SimpleHlsClipRequest& request, const SimpleHlsClipAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                SimpleHlsClipOutcomeCallable SimpleHlsClipCallable(const Model::SimpleHlsClipRequest& request);

                /**
                 *对点播视频进行拆条，生成多个新的点播视频。
                 * @param req SplitMediaRequest
                 * @return SplitMediaOutcome
                 */
                SplitMediaOutcome SplitMedia(const Model::SplitMediaRequest &request);
                void SplitMediaAsync(const Model::SplitMediaRequest& request, const SplitMediaAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                SplitMediaOutcomeCallable SplitMediaCallable(const Model::SplitMediaRequest& request);

                /**
                 *该接口用于验证域名解析值。
                 * @param req VerifyDomainRecordRequest
                 * @return VerifyDomainRecordOutcome
                 */
                VerifyDomainRecordOutcome VerifyDomainRecord(const Model::VerifyDomainRecordRequest &request);
                void VerifyDomainRecordAsync(const Model::VerifyDomainRecordRequest& request, const VerifyDomainRecordAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                VerifyDomainRecordOutcomeCallable VerifyDomainRecordCallable(const Model::VerifyDomainRecordRequest& request);

                /**
                 *将点播视频发布到微信小程序，供微信小程序播放器播放。
本接口支持发布原始视频和转码后视频，暂不支持发布自适应码流。
                 * @param req WeChatMiniProgramPublishRequest
                 * @return WeChatMiniProgramPublishOutcome
                 */
                WeChatMiniProgramPublishOutcome WeChatMiniProgramPublish(const Model::WeChatMiniProgramPublishRequest &request);
                void WeChatMiniProgramPublishAsync(const Model::WeChatMiniProgramPublishRequest& request, const WeChatMiniProgramPublishAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                WeChatMiniProgramPublishOutcomeCallable WeChatMiniProgramPublishCallable(const Model::WeChatMiniProgramPublishRequest& request);

            };
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_VODCLIENT_H_
