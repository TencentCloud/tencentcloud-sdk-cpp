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

#ifndef TENCENTCLOUD_MPS_V20190612_MPSCLIENT_H_
#define TENCENTCLOUD_MPS_V20190612_MPSCLIENT_H_

#include <functional>
#include <future>
#include <tencentcloud/core/AbstractClient.h>
#include <tencentcloud/core/Credential.h>
#include <tencentcloud/core/profile/ClientProfile.h>
#include <tencentcloud/core/AsyncCallerContext.h>
#include <tencentcloud/mps/v20190612/model/ActivateSSAIRequest.h>
#include <tencentcloud/mps/v20190612/model/ActivateSSAIResponse.h>
#include <tencentcloud/mps/v20190612/model/ActivateStreamPackageRequest.h>
#include <tencentcloud/mps/v20190612/model/ActivateStreamPackageResponse.h>
#include <tencentcloud/mps/v20190612/model/BatchDeleteStreamLinkFlowRequest.h>
#include <tencentcloud/mps/v20190612/model/BatchDeleteStreamLinkFlowResponse.h>
#include <tencentcloud/mps/v20190612/model/BatchProcessMediaRequest.h>
#include <tencentcloud/mps/v20190612/model/BatchProcessMediaResponse.h>
#include <tencentcloud/mps/v20190612/model/BatchStartStreamLinkFlowRequest.h>
#include <tencentcloud/mps/v20190612/model/BatchStartStreamLinkFlowResponse.h>
#include <tencentcloud/mps/v20190612/model/BatchStopStreamLinkFlowRequest.h>
#include <tencentcloud/mps/v20190612/model/BatchStopStreamLinkFlowResponse.h>
#include <tencentcloud/mps/v20190612/model/CreateAIAnalysisTemplateRequest.h>
#include <tencentcloud/mps/v20190612/model/CreateAIAnalysisTemplateResponse.h>
#include <tencentcloud/mps/v20190612/model/CreateAIRecognitionTemplateRequest.h>
#include <tencentcloud/mps/v20190612/model/CreateAIRecognitionTemplateResponse.h>
#include <tencentcloud/mps/v20190612/model/CreateAdaptiveDynamicStreamingTemplateRequest.h>
#include <tencentcloud/mps/v20190612/model/CreateAdaptiveDynamicStreamingTemplateResponse.h>
#include <tencentcloud/mps/v20190612/model/CreateAigcImageTaskRequest.h>
#include <tencentcloud/mps/v20190612/model/CreateAigcImageTaskResponse.h>
#include <tencentcloud/mps/v20190612/model/CreateAigcVideoTaskRequest.h>
#include <tencentcloud/mps/v20190612/model/CreateAigcVideoTaskResponse.h>
#include <tencentcloud/mps/v20190612/model/CreateAnimatedGraphicsTemplateRequest.h>
#include <tencentcloud/mps/v20190612/model/CreateAnimatedGraphicsTemplateResponse.h>
#include <tencentcloud/mps/v20190612/model/CreateAsrHotwordsRequest.h>
#include <tencentcloud/mps/v20190612/model/CreateAsrHotwordsResponse.h>
#include <tencentcloud/mps/v20190612/model/CreateBlindWatermarkTemplateRequest.h>
#include <tencentcloud/mps/v20190612/model/CreateBlindWatermarkTemplateResponse.h>
#include <tencentcloud/mps/v20190612/model/CreateContentReviewTemplateRequest.h>
#include <tencentcloud/mps/v20190612/model/CreateContentReviewTemplateResponse.h>
#include <tencentcloud/mps/v20190612/model/CreateImageSpriteTemplateRequest.h>
#include <tencentcloud/mps/v20190612/model/CreateImageSpriteTemplateResponse.h>
#include <tencentcloud/mps/v20190612/model/CreateLiveRecordTemplateRequest.h>
#include <tencentcloud/mps/v20190612/model/CreateLiveRecordTemplateResponse.h>
#include <tencentcloud/mps/v20190612/model/CreateMediaEvaluationRequest.h>
#include <tencentcloud/mps/v20190612/model/CreateMediaEvaluationResponse.h>
#include <tencentcloud/mps/v20190612/model/CreatePersonSampleRequest.h>
#include <tencentcloud/mps/v20190612/model/CreatePersonSampleResponse.h>
#include <tencentcloud/mps/v20190612/model/CreateProcessImageTemplateRequest.h>
#include <tencentcloud/mps/v20190612/model/CreateProcessImageTemplateResponse.h>
#include <tencentcloud/mps/v20190612/model/CreateQualityControlTemplateRequest.h>
#include <tencentcloud/mps/v20190612/model/CreateQualityControlTemplateResponse.h>
#include <tencentcloud/mps/v20190612/model/CreateSampleSnapshotTemplateRequest.h>
#include <tencentcloud/mps/v20190612/model/CreateSampleSnapshotTemplateResponse.h>
#include <tencentcloud/mps/v20190612/model/CreateScheduleRequest.h>
#include <tencentcloud/mps/v20190612/model/CreateScheduleResponse.h>
#include <tencentcloud/mps/v20190612/model/CreateSmartEraseTemplateRequest.h>
#include <tencentcloud/mps/v20190612/model/CreateSmartEraseTemplateResponse.h>
#include <tencentcloud/mps/v20190612/model/CreateSmartSubtitleTemplateRequest.h>
#include <tencentcloud/mps/v20190612/model/CreateSmartSubtitleTemplateResponse.h>
#include <tencentcloud/mps/v20190612/model/CreateSnapshotByTimeOffsetTemplateRequest.h>
#include <tencentcloud/mps/v20190612/model/CreateSnapshotByTimeOffsetTemplateResponse.h>
#include <tencentcloud/mps/v20190612/model/CreateStreamLinkEventRequest.h>
#include <tencentcloud/mps/v20190612/model/CreateStreamLinkEventResponse.h>
#include <tencentcloud/mps/v20190612/model/CreateStreamLinkFlowRequest.h>
#include <tencentcloud/mps/v20190612/model/CreateStreamLinkFlowResponse.h>
#include <tencentcloud/mps/v20190612/model/CreateStreamLinkInputRequest.h>
#include <tencentcloud/mps/v20190612/model/CreateStreamLinkInputResponse.h>
#include <tencentcloud/mps/v20190612/model/CreateStreamLinkOutputInfoRequest.h>
#include <tencentcloud/mps/v20190612/model/CreateStreamLinkOutputInfoResponse.h>
#include <tencentcloud/mps/v20190612/model/CreateStreamLinkSecurityGroupRequest.h>
#include <tencentcloud/mps/v20190612/model/CreateStreamLinkSecurityGroupResponse.h>
#include <tencentcloud/mps/v20190612/model/CreateStreamPackageLinearAssemblyChannelRequest.h>
#include <tencentcloud/mps/v20190612/model/CreateStreamPackageLinearAssemblyChannelResponse.h>
#include <tencentcloud/mps/v20190612/model/CreateStreamPackageLinearAssemblyProgramRequest.h>
#include <tencentcloud/mps/v20190612/model/CreateStreamPackageLinearAssemblyProgramResponse.h>
#include <tencentcloud/mps/v20190612/model/CreateStreamPackageSSAIChannelRequest.h>
#include <tencentcloud/mps/v20190612/model/CreateStreamPackageSSAIChannelResponse.h>
#include <tencentcloud/mps/v20190612/model/CreateStreamPackageSourceRequest.h>
#include <tencentcloud/mps/v20190612/model/CreateStreamPackageSourceResponse.h>
#include <tencentcloud/mps/v20190612/model/CreateStreamPackageSourceLocationRequest.h>
#include <tencentcloud/mps/v20190612/model/CreateStreamPackageSourceLocationResponse.h>
#include <tencentcloud/mps/v20190612/model/CreateSubtitleEmbedTemplateRequest.h>
#include <tencentcloud/mps/v20190612/model/CreateSubtitleEmbedTemplateResponse.h>
#include <tencentcloud/mps/v20190612/model/CreateTranscodeTemplateRequest.h>
#include <tencentcloud/mps/v20190612/model/CreateTranscodeTemplateResponse.h>
#include <tencentcloud/mps/v20190612/model/CreateVideoDatabaseEntryTaskRequest.h>
#include <tencentcloud/mps/v20190612/model/CreateVideoDatabaseEntryTaskResponse.h>
#include <tencentcloud/mps/v20190612/model/CreateVideoSearchTaskRequest.h>
#include <tencentcloud/mps/v20190612/model/CreateVideoSearchTaskResponse.h>
#include <tencentcloud/mps/v20190612/model/CreateWatermarkTemplateRequest.h>
#include <tencentcloud/mps/v20190612/model/CreateWatermarkTemplateResponse.h>
#include <tencentcloud/mps/v20190612/model/CreateWordSamplesRequest.h>
#include <tencentcloud/mps/v20190612/model/CreateWordSamplesResponse.h>
#include <tencentcloud/mps/v20190612/model/CreateWorkflowRequest.h>
#include <tencentcloud/mps/v20190612/model/CreateWorkflowResponse.h>
#include <tencentcloud/mps/v20190612/model/DeleteAIAnalysisTemplateRequest.h>
#include <tencentcloud/mps/v20190612/model/DeleteAIAnalysisTemplateResponse.h>
#include <tencentcloud/mps/v20190612/model/DeleteAIRecognitionTemplateRequest.h>
#include <tencentcloud/mps/v20190612/model/DeleteAIRecognitionTemplateResponse.h>
#include <tencentcloud/mps/v20190612/model/DeleteAdaptiveDynamicStreamingTemplateRequest.h>
#include <tencentcloud/mps/v20190612/model/DeleteAdaptiveDynamicStreamingTemplateResponse.h>
#include <tencentcloud/mps/v20190612/model/DeleteAnimatedGraphicsTemplateRequest.h>
#include <tencentcloud/mps/v20190612/model/DeleteAnimatedGraphicsTemplateResponse.h>
#include <tencentcloud/mps/v20190612/model/DeleteAsrHotwordsRequest.h>
#include <tencentcloud/mps/v20190612/model/DeleteAsrHotwordsResponse.h>
#include <tencentcloud/mps/v20190612/model/DeleteBlindWatermarkTemplateRequest.h>
#include <tencentcloud/mps/v20190612/model/DeleteBlindWatermarkTemplateResponse.h>
#include <tencentcloud/mps/v20190612/model/DeleteContentReviewTemplateRequest.h>
#include <tencentcloud/mps/v20190612/model/DeleteContentReviewTemplateResponse.h>
#include <tencentcloud/mps/v20190612/model/DeleteImageSpriteTemplateRequest.h>
#include <tencentcloud/mps/v20190612/model/DeleteImageSpriteTemplateResponse.h>
#include <tencentcloud/mps/v20190612/model/DeleteLiveRecordTemplateRequest.h>
#include <tencentcloud/mps/v20190612/model/DeleteLiveRecordTemplateResponse.h>
#include <tencentcloud/mps/v20190612/model/DeletePersonSampleRequest.h>
#include <tencentcloud/mps/v20190612/model/DeletePersonSampleResponse.h>
#include <tencentcloud/mps/v20190612/model/DeleteProcessImageTemplateRequest.h>
#include <tencentcloud/mps/v20190612/model/DeleteProcessImageTemplateResponse.h>
#include <tencentcloud/mps/v20190612/model/DeleteQualityControlTemplateRequest.h>
#include <tencentcloud/mps/v20190612/model/DeleteQualityControlTemplateResponse.h>
#include <tencentcloud/mps/v20190612/model/DeleteSampleSnapshotTemplateRequest.h>
#include <tencentcloud/mps/v20190612/model/DeleteSampleSnapshotTemplateResponse.h>
#include <tencentcloud/mps/v20190612/model/DeleteScheduleRequest.h>
#include <tencentcloud/mps/v20190612/model/DeleteScheduleResponse.h>
#include <tencentcloud/mps/v20190612/model/DeleteSmartEraseTemplateRequest.h>
#include <tencentcloud/mps/v20190612/model/DeleteSmartEraseTemplateResponse.h>
#include <tencentcloud/mps/v20190612/model/DeleteSmartSubtitleTemplateRequest.h>
#include <tencentcloud/mps/v20190612/model/DeleteSmartSubtitleTemplateResponse.h>
#include <tencentcloud/mps/v20190612/model/DeleteSnapshotByTimeOffsetTemplateRequest.h>
#include <tencentcloud/mps/v20190612/model/DeleteSnapshotByTimeOffsetTemplateResponse.h>
#include <tencentcloud/mps/v20190612/model/DeleteStreamLinkEventRequest.h>
#include <tencentcloud/mps/v20190612/model/DeleteStreamLinkEventResponse.h>
#include <tencentcloud/mps/v20190612/model/DeleteStreamLinkFlowRequest.h>
#include <tencentcloud/mps/v20190612/model/DeleteStreamLinkFlowResponse.h>
#include <tencentcloud/mps/v20190612/model/DeleteStreamLinkOutputRequest.h>
#include <tencentcloud/mps/v20190612/model/DeleteStreamLinkOutputResponse.h>
#include <tencentcloud/mps/v20190612/model/DeleteStreamLinkSecurityGroupRequest.h>
#include <tencentcloud/mps/v20190612/model/DeleteStreamLinkSecurityGroupResponse.h>
#include <tencentcloud/mps/v20190612/model/DeleteStreamPackageLinearAssemblyChannelRequest.h>
#include <tencentcloud/mps/v20190612/model/DeleteStreamPackageLinearAssemblyChannelResponse.h>
#include <tencentcloud/mps/v20190612/model/DeleteStreamPackageLinearAssemblyChannelsRequest.h>
#include <tencentcloud/mps/v20190612/model/DeleteStreamPackageLinearAssemblyChannelsResponse.h>
#include <tencentcloud/mps/v20190612/model/DeleteStreamPackageLinearAssemblyProgramRequest.h>
#include <tencentcloud/mps/v20190612/model/DeleteStreamPackageLinearAssemblyProgramResponse.h>
#include <tencentcloud/mps/v20190612/model/DeleteStreamPackageLinearAssemblyProgramsRequest.h>
#include <tencentcloud/mps/v20190612/model/DeleteStreamPackageLinearAssemblyProgramsResponse.h>
#include <tencentcloud/mps/v20190612/model/DeleteStreamPackageLinearAssemblyProgramsByChannelRequest.h>
#include <tencentcloud/mps/v20190612/model/DeleteStreamPackageLinearAssemblyProgramsByChannelResponse.h>
#include <tencentcloud/mps/v20190612/model/DeleteStreamPackageSSAIChannelRequest.h>
#include <tencentcloud/mps/v20190612/model/DeleteStreamPackageSSAIChannelResponse.h>
#include <tencentcloud/mps/v20190612/model/DeleteStreamPackageSourceRequest.h>
#include <tencentcloud/mps/v20190612/model/DeleteStreamPackageSourceResponse.h>
#include <tencentcloud/mps/v20190612/model/DeleteStreamPackageSourceLocationRequest.h>
#include <tencentcloud/mps/v20190612/model/DeleteStreamPackageSourceLocationResponse.h>
#include <tencentcloud/mps/v20190612/model/DeleteSubtitleEmbedTemplateRequest.h>
#include <tencentcloud/mps/v20190612/model/DeleteSubtitleEmbedTemplateResponse.h>
#include <tencentcloud/mps/v20190612/model/DeleteTranscodeTemplateRequest.h>
#include <tencentcloud/mps/v20190612/model/DeleteTranscodeTemplateResponse.h>
#include <tencentcloud/mps/v20190612/model/DeleteWatermarkTemplateRequest.h>
#include <tencentcloud/mps/v20190612/model/DeleteWatermarkTemplateResponse.h>
#include <tencentcloud/mps/v20190612/model/DeleteWordSamplesRequest.h>
#include <tencentcloud/mps/v20190612/model/DeleteWordSamplesResponse.h>
#include <tencentcloud/mps/v20190612/model/DeleteWorkflowRequest.h>
#include <tencentcloud/mps/v20190612/model/DeleteWorkflowResponse.h>
#include <tencentcloud/mps/v20190612/model/DescribeAIAnalysisTemplatesRequest.h>
#include <tencentcloud/mps/v20190612/model/DescribeAIAnalysisTemplatesResponse.h>
#include <tencentcloud/mps/v20190612/model/DescribeAIRecognitionTemplatesRequest.h>
#include <tencentcloud/mps/v20190612/model/DescribeAIRecognitionTemplatesResponse.h>
#include <tencentcloud/mps/v20190612/model/DescribeAdaptiveDynamicStreamingTemplatesRequest.h>
#include <tencentcloud/mps/v20190612/model/DescribeAdaptiveDynamicStreamingTemplatesResponse.h>
#include <tencentcloud/mps/v20190612/model/DescribeAigcImageTaskRequest.h>
#include <tencentcloud/mps/v20190612/model/DescribeAigcImageTaskResponse.h>
#include <tencentcloud/mps/v20190612/model/DescribeAigcVideoTaskRequest.h>
#include <tencentcloud/mps/v20190612/model/DescribeAigcVideoTaskResponse.h>
#include <tencentcloud/mps/v20190612/model/DescribeAnimatedGraphicsTemplatesRequest.h>
#include <tencentcloud/mps/v20190612/model/DescribeAnimatedGraphicsTemplatesResponse.h>
#include <tencentcloud/mps/v20190612/model/DescribeAsrHotwordsRequest.h>
#include <tencentcloud/mps/v20190612/model/DescribeAsrHotwordsResponse.h>
#include <tencentcloud/mps/v20190612/model/DescribeAsrHotwordsListRequest.h>
#include <tencentcloud/mps/v20190612/model/DescribeAsrHotwordsListResponse.h>
#include <tencentcloud/mps/v20190612/model/DescribeBatchTaskDetailRequest.h>
#include <tencentcloud/mps/v20190612/model/DescribeBatchTaskDetailResponse.h>
#include <tencentcloud/mps/v20190612/model/DescribeBlindWatermarkTemplatesRequest.h>
#include <tencentcloud/mps/v20190612/model/DescribeBlindWatermarkTemplatesResponse.h>
#include <tencentcloud/mps/v20190612/model/DescribeContentReviewTemplatesRequest.h>
#include <tencentcloud/mps/v20190612/model/DescribeContentReviewTemplatesResponse.h>
#include <tencentcloud/mps/v20190612/model/DescribeGroupAttachFlowsByIdRequest.h>
#include <tencentcloud/mps/v20190612/model/DescribeGroupAttachFlowsByIdResponse.h>
#include <tencentcloud/mps/v20190612/model/DescribeImageSpriteTemplatesRequest.h>
#include <tencentcloud/mps/v20190612/model/DescribeImageSpriteTemplatesResponse.h>
#include <tencentcloud/mps/v20190612/model/DescribeImageTaskDetailRequest.h>
#include <tencentcloud/mps/v20190612/model/DescribeImageTaskDetailResponse.h>
#include <tencentcloud/mps/v20190612/model/DescribeLiveRecordTemplatesRequest.h>
#include <tencentcloud/mps/v20190612/model/DescribeLiveRecordTemplatesResponse.h>
#include <tencentcloud/mps/v20190612/model/DescribeMDPMPSUserInfoRequest.h>
#include <tencentcloud/mps/v20190612/model/DescribeMDPMPSUserInfoResponse.h>
#include <tencentcloud/mps/v20190612/model/DescribeMediaMetaDataRequest.h>
#include <tencentcloud/mps/v20190612/model/DescribeMediaMetaDataResponse.h>
#include <tencentcloud/mps/v20190612/model/DescribePersonSamplesRequest.h>
#include <tencentcloud/mps/v20190612/model/DescribePersonSamplesResponse.h>
#include <tencentcloud/mps/v20190612/model/DescribeProcessImageTemplatesRequest.h>
#include <tencentcloud/mps/v20190612/model/DescribeProcessImageTemplatesResponse.h>
#include <tencentcloud/mps/v20190612/model/DescribeQualityControlTemplatesRequest.h>
#include <tencentcloud/mps/v20190612/model/DescribeQualityControlTemplatesResponse.h>
#include <tencentcloud/mps/v20190612/model/DescribeSSAIActivateStateRequest.h>
#include <tencentcloud/mps/v20190612/model/DescribeSSAIActivateStateResponse.h>
#include <tencentcloud/mps/v20190612/model/DescribeSampleSnapshotTemplatesRequest.h>
#include <tencentcloud/mps/v20190612/model/DescribeSampleSnapshotTemplatesResponse.h>
#include <tencentcloud/mps/v20190612/model/DescribeSchedulesRequest.h>
#include <tencentcloud/mps/v20190612/model/DescribeSchedulesResponse.h>
#include <tencentcloud/mps/v20190612/model/DescribeSmartEraseTemplatesRequest.h>
#include <tencentcloud/mps/v20190612/model/DescribeSmartEraseTemplatesResponse.h>
#include <tencentcloud/mps/v20190612/model/DescribeSmartSubtitleTemplatesRequest.h>
#include <tencentcloud/mps/v20190612/model/DescribeSmartSubtitleTemplatesResponse.h>
#include <tencentcloud/mps/v20190612/model/DescribeSnapshotByTimeOffsetTemplatesRequest.h>
#include <tencentcloud/mps/v20190612/model/DescribeSnapshotByTimeOffsetTemplatesResponse.h>
#include <tencentcloud/mps/v20190612/model/DescribeStreamLinkActivateStateRequest.h>
#include <tencentcloud/mps/v20190612/model/DescribeStreamLinkActivateStateResponse.h>
#include <tencentcloud/mps/v20190612/model/DescribeStreamLinkEventRequest.h>
#include <tencentcloud/mps/v20190612/model/DescribeStreamLinkEventResponse.h>
#include <tencentcloud/mps/v20190612/model/DescribeStreamLinkEventAttachedFlowsRequest.h>
#include <tencentcloud/mps/v20190612/model/DescribeStreamLinkEventAttachedFlowsResponse.h>
#include <tencentcloud/mps/v20190612/model/DescribeStreamLinkEventsRequest.h>
#include <tencentcloud/mps/v20190612/model/DescribeStreamLinkEventsResponse.h>
#include <tencentcloud/mps/v20190612/model/DescribeStreamLinkFlowRequest.h>
#include <tencentcloud/mps/v20190612/model/DescribeStreamLinkFlowResponse.h>
#include <tencentcloud/mps/v20190612/model/DescribeStreamLinkFlowLogsRequest.h>
#include <tencentcloud/mps/v20190612/model/DescribeStreamLinkFlowLogsResponse.h>
#include <tencentcloud/mps/v20190612/model/DescribeStreamLinkFlowMediaStatisticsRequest.h>
#include <tencentcloud/mps/v20190612/model/DescribeStreamLinkFlowMediaStatisticsResponse.h>
#include <tencentcloud/mps/v20190612/model/DescribeStreamLinkFlowRealtimeStatusRequest.h>
#include <tencentcloud/mps/v20190612/model/DescribeStreamLinkFlowRealtimeStatusResponse.h>
#include <tencentcloud/mps/v20190612/model/DescribeStreamLinkFlowSRTStatisticsRequest.h>
#include <tencentcloud/mps/v20190612/model/DescribeStreamLinkFlowSRTStatisticsResponse.h>
#include <tencentcloud/mps/v20190612/model/DescribeStreamLinkFlowStatisticsRequest.h>
#include <tencentcloud/mps/v20190612/model/DescribeStreamLinkFlowStatisticsResponse.h>
#include <tencentcloud/mps/v20190612/model/DescribeStreamLinkFlowsRequest.h>
#include <tencentcloud/mps/v20190612/model/DescribeStreamLinkFlowsResponse.h>
#include <tencentcloud/mps/v20190612/model/DescribeStreamLinkRegionsRequest.h>
#include <tencentcloud/mps/v20190612/model/DescribeStreamLinkRegionsResponse.h>
#include <tencentcloud/mps/v20190612/model/DescribeStreamLinkSecurityGroupsRequest.h>
#include <tencentcloud/mps/v20190612/model/DescribeStreamLinkSecurityGroupsResponse.h>
#include <tencentcloud/mps/v20190612/model/DescribeStreamPackageActivateStateRequest.h>
#include <tencentcloud/mps/v20190612/model/DescribeStreamPackageActivateStateResponse.h>
#include <tencentcloud/mps/v20190612/model/DescribeStreamPackageLinearAssemblyChannelRequest.h>
#include <tencentcloud/mps/v20190612/model/DescribeStreamPackageLinearAssemblyChannelResponse.h>
#include <tencentcloud/mps/v20190612/model/DescribeStreamPackageLinearAssemblyChannelAlertsRequest.h>
#include <tencentcloud/mps/v20190612/model/DescribeStreamPackageLinearAssemblyChannelAlertsResponse.h>
#include <tencentcloud/mps/v20190612/model/DescribeStreamPackageLinearAssemblyChannelsRequest.h>
#include <tencentcloud/mps/v20190612/model/DescribeStreamPackageLinearAssemblyChannelsResponse.h>
#include <tencentcloud/mps/v20190612/model/DescribeStreamPackageLinearAssemblyProgramRequest.h>
#include <tencentcloud/mps/v20190612/model/DescribeStreamPackageLinearAssemblyProgramResponse.h>
#include <tencentcloud/mps/v20190612/model/DescribeStreamPackageLinearAssemblyProgramSchedulesRequest.h>
#include <tencentcloud/mps/v20190612/model/DescribeStreamPackageLinearAssemblyProgramSchedulesResponse.h>
#include <tencentcloud/mps/v20190612/model/DescribeStreamPackageLinearAssemblyProgramsRequest.h>
#include <tencentcloud/mps/v20190612/model/DescribeStreamPackageLinearAssemblyProgramsResponse.h>
#include <tencentcloud/mps/v20190612/model/DescribeStreamPackageLinearAssemblyUsageRequest.h>
#include <tencentcloud/mps/v20190612/model/DescribeStreamPackageLinearAssemblyUsageResponse.h>
#include <tencentcloud/mps/v20190612/model/DescribeStreamPackageSSAIChannelRequest.h>
#include <tencentcloud/mps/v20190612/model/DescribeStreamPackageSSAIChannelResponse.h>
#include <tencentcloud/mps/v20190612/model/DescribeStreamPackageSSAIChannelsRequest.h>
#include <tencentcloud/mps/v20190612/model/DescribeStreamPackageSSAIChannelsResponse.h>
#include <tencentcloud/mps/v20190612/model/DescribeStreamPackageSSAIUsageRequest.h>
#include <tencentcloud/mps/v20190612/model/DescribeStreamPackageSSAIUsageResponse.h>
#include <tencentcloud/mps/v20190612/model/DescribeStreamPackageSourceRequest.h>
#include <tencentcloud/mps/v20190612/model/DescribeStreamPackageSourceResponse.h>
#include <tencentcloud/mps/v20190612/model/DescribeStreamPackageSourceAlertsRequest.h>
#include <tencentcloud/mps/v20190612/model/DescribeStreamPackageSourceAlertsResponse.h>
#include <tencentcloud/mps/v20190612/model/DescribeStreamPackageSourceLocationRequest.h>
#include <tencentcloud/mps/v20190612/model/DescribeStreamPackageSourceLocationResponse.h>
#include <tencentcloud/mps/v20190612/model/DescribeStreamPackageSourceLocationsRequest.h>
#include <tencentcloud/mps/v20190612/model/DescribeStreamPackageSourceLocationsResponse.h>
#include <tencentcloud/mps/v20190612/model/DescribeStreamPackageSourcesRequest.h>
#include <tencentcloud/mps/v20190612/model/DescribeStreamPackageSourcesResponse.h>
#include <tencentcloud/mps/v20190612/model/DescribeSubtitleEmbedTemplatesRequest.h>
#include <tencentcloud/mps/v20190612/model/DescribeSubtitleEmbedTemplatesResponse.h>
#include <tencentcloud/mps/v20190612/model/DescribeTaskDetailRequest.h>
#include <tencentcloud/mps/v20190612/model/DescribeTaskDetailResponse.h>
#include <tencentcloud/mps/v20190612/model/DescribeTasksRequest.h>
#include <tencentcloud/mps/v20190612/model/DescribeTasksResponse.h>
#include <tencentcloud/mps/v20190612/model/DescribeTranscodeTemplatesRequest.h>
#include <tencentcloud/mps/v20190612/model/DescribeTranscodeTemplatesResponse.h>
#include <tencentcloud/mps/v20190612/model/DescribeUsageDataRequest.h>
#include <tencentcloud/mps/v20190612/model/DescribeUsageDataResponse.h>
#include <tencentcloud/mps/v20190612/model/DescribeVideoDatabaseEntryTaskDetailRequest.h>
#include <tencentcloud/mps/v20190612/model/DescribeVideoDatabaseEntryTaskDetailResponse.h>
#include <tencentcloud/mps/v20190612/model/DescribeVideoSearchTaskDetailRequest.h>
#include <tencentcloud/mps/v20190612/model/DescribeVideoSearchTaskDetailResponse.h>
#include <tencentcloud/mps/v20190612/model/DescribeVoicesRequest.h>
#include <tencentcloud/mps/v20190612/model/DescribeVoicesResponse.h>
#include <tencentcloud/mps/v20190612/model/DescribeWatermarkTemplatesRequest.h>
#include <tencentcloud/mps/v20190612/model/DescribeWatermarkTemplatesResponse.h>
#include <tencentcloud/mps/v20190612/model/DescribeWordSamplesRequest.h>
#include <tencentcloud/mps/v20190612/model/DescribeWordSamplesResponse.h>
#include <tencentcloud/mps/v20190612/model/DescribeWorkflowsRequest.h>
#include <tencentcloud/mps/v20190612/model/DescribeWorkflowsResponse.h>
#include <tencentcloud/mps/v20190612/model/DisableScheduleRequest.h>
#include <tencentcloud/mps/v20190612/model/DisableScheduleResponse.h>
#include <tencentcloud/mps/v20190612/model/DisableWorkflowRequest.h>
#include <tencentcloud/mps/v20190612/model/DisableWorkflowResponse.h>
#include <tencentcloud/mps/v20190612/model/DisassociateSecurityGroupRequest.h>
#include <tencentcloud/mps/v20190612/model/DisassociateSecurityGroupResponse.h>
#include <tencentcloud/mps/v20190612/model/EditMediaRequest.h>
#include <tencentcloud/mps/v20190612/model/EditMediaResponse.h>
#include <tencentcloud/mps/v20190612/model/EnableScheduleRequest.h>
#include <tencentcloud/mps/v20190612/model/EnableScheduleResponse.h>
#include <tencentcloud/mps/v20190612/model/EnableWorkflowRequest.h>
#include <tencentcloud/mps/v20190612/model/EnableWorkflowResponse.h>
#include <tencentcloud/mps/v20190612/model/ExecuteFunctionRequest.h>
#include <tencentcloud/mps/v20190612/model/ExecuteFunctionResponse.h>
#include <tencentcloud/mps/v20190612/model/ExtractBlindWatermarkRequest.h>
#include <tencentcloud/mps/v20190612/model/ExtractBlindWatermarkResponse.h>
#include <tencentcloud/mps/v20190612/model/ManageTaskRequest.h>
#include <tencentcloud/mps/v20190612/model/ManageTaskResponse.h>
#include <tencentcloud/mps/v20190612/model/ModifyAIAnalysisTemplateRequest.h>
#include <tencentcloud/mps/v20190612/model/ModifyAIAnalysisTemplateResponse.h>
#include <tencentcloud/mps/v20190612/model/ModifyAIRecognitionTemplateRequest.h>
#include <tencentcloud/mps/v20190612/model/ModifyAIRecognitionTemplateResponse.h>
#include <tencentcloud/mps/v20190612/model/ModifyAdaptiveDynamicStreamingTemplateRequest.h>
#include <tencentcloud/mps/v20190612/model/ModifyAdaptiveDynamicStreamingTemplateResponse.h>
#include <tencentcloud/mps/v20190612/model/ModifyAnimatedGraphicsTemplateRequest.h>
#include <tencentcloud/mps/v20190612/model/ModifyAnimatedGraphicsTemplateResponse.h>
#include <tencentcloud/mps/v20190612/model/ModifyAsrHotwordsRequest.h>
#include <tencentcloud/mps/v20190612/model/ModifyAsrHotwordsResponse.h>
#include <tencentcloud/mps/v20190612/model/ModifyBlindWatermarkTemplateRequest.h>
#include <tencentcloud/mps/v20190612/model/ModifyBlindWatermarkTemplateResponse.h>
#include <tencentcloud/mps/v20190612/model/ModifyContentReviewTemplateRequest.h>
#include <tencentcloud/mps/v20190612/model/ModifyContentReviewTemplateResponse.h>
#include <tencentcloud/mps/v20190612/model/ModifyImageSpriteTemplateRequest.h>
#include <tencentcloud/mps/v20190612/model/ModifyImageSpriteTemplateResponse.h>
#include <tencentcloud/mps/v20190612/model/ModifyLiveRecordTemplateRequest.h>
#include <tencentcloud/mps/v20190612/model/ModifyLiveRecordTemplateResponse.h>
#include <tencentcloud/mps/v20190612/model/ModifyPersonSampleRequest.h>
#include <tencentcloud/mps/v20190612/model/ModifyPersonSampleResponse.h>
#include <tencentcloud/mps/v20190612/model/ModifyProcessImageTemplateRequest.h>
#include <tencentcloud/mps/v20190612/model/ModifyProcessImageTemplateResponse.h>
#include <tencentcloud/mps/v20190612/model/ModifyQualityControlTemplateRequest.h>
#include <tencentcloud/mps/v20190612/model/ModifyQualityControlTemplateResponse.h>
#include <tencentcloud/mps/v20190612/model/ModifySampleSnapshotTemplateRequest.h>
#include <tencentcloud/mps/v20190612/model/ModifySampleSnapshotTemplateResponse.h>
#include <tencentcloud/mps/v20190612/model/ModifyScheduleRequest.h>
#include <tencentcloud/mps/v20190612/model/ModifyScheduleResponse.h>
#include <tencentcloud/mps/v20190612/model/ModifySmartEraseTemplateRequest.h>
#include <tencentcloud/mps/v20190612/model/ModifySmartEraseTemplateResponse.h>
#include <tencentcloud/mps/v20190612/model/ModifySmartSubtitleTemplateRequest.h>
#include <tencentcloud/mps/v20190612/model/ModifySmartSubtitleTemplateResponse.h>
#include <tencentcloud/mps/v20190612/model/ModifySnapshotByTimeOffsetTemplateRequest.h>
#include <tencentcloud/mps/v20190612/model/ModifySnapshotByTimeOffsetTemplateResponse.h>
#include <tencentcloud/mps/v20190612/model/ModifyStreamLinkEventRequest.h>
#include <tencentcloud/mps/v20190612/model/ModifyStreamLinkEventResponse.h>
#include <tencentcloud/mps/v20190612/model/ModifyStreamLinkFlowRequest.h>
#include <tencentcloud/mps/v20190612/model/ModifyStreamLinkFlowResponse.h>
#include <tencentcloud/mps/v20190612/model/ModifyStreamLinkInputRequest.h>
#include <tencentcloud/mps/v20190612/model/ModifyStreamLinkInputResponse.h>
#include <tencentcloud/mps/v20190612/model/ModifyStreamLinkOutputInfoRequest.h>
#include <tencentcloud/mps/v20190612/model/ModifyStreamLinkOutputInfoResponse.h>
#include <tencentcloud/mps/v20190612/model/ModifyStreamLinkSecurityGroupRequest.h>
#include <tencentcloud/mps/v20190612/model/ModifyStreamLinkSecurityGroupResponse.h>
#include <tencentcloud/mps/v20190612/model/ModifyStreamPackageLinearAssemblyChannelRequest.h>
#include <tencentcloud/mps/v20190612/model/ModifyStreamPackageLinearAssemblyChannelResponse.h>
#include <tencentcloud/mps/v20190612/model/ModifyStreamPackageLinearAssemblyProgramRequest.h>
#include <tencentcloud/mps/v20190612/model/ModifyStreamPackageLinearAssemblyProgramResponse.h>
#include <tencentcloud/mps/v20190612/model/ModifyStreamPackageSSAIChannelRequest.h>
#include <tencentcloud/mps/v20190612/model/ModifyStreamPackageSSAIChannelResponse.h>
#include <tencentcloud/mps/v20190612/model/ModifyStreamPackageSourceRequest.h>
#include <tencentcloud/mps/v20190612/model/ModifyStreamPackageSourceResponse.h>
#include <tencentcloud/mps/v20190612/model/ModifyStreamPackageSourceLocationRequest.h>
#include <tencentcloud/mps/v20190612/model/ModifyStreamPackageSourceLocationResponse.h>
#include <tencentcloud/mps/v20190612/model/ModifySubtitleEmbedTemplateRequest.h>
#include <tencentcloud/mps/v20190612/model/ModifySubtitleEmbedTemplateResponse.h>
#include <tencentcloud/mps/v20190612/model/ModifyTranscodeTemplateRequest.h>
#include <tencentcloud/mps/v20190612/model/ModifyTranscodeTemplateResponse.h>
#include <tencentcloud/mps/v20190612/model/ModifyWatermarkTemplateRequest.h>
#include <tencentcloud/mps/v20190612/model/ModifyWatermarkTemplateResponse.h>
#include <tencentcloud/mps/v20190612/model/ModifyWordSampleRequest.h>
#include <tencentcloud/mps/v20190612/model/ModifyWordSampleResponse.h>
#include <tencentcloud/mps/v20190612/model/ParseLiveStreamProcessNotificationRequest.h>
#include <tencentcloud/mps/v20190612/model/ParseLiveStreamProcessNotificationResponse.h>
#include <tencentcloud/mps/v20190612/model/ParseNotificationRequest.h>
#include <tencentcloud/mps/v20190612/model/ParseNotificationResponse.h>
#include <tencentcloud/mps/v20190612/model/ProcessImageRequest.h>
#include <tencentcloud/mps/v20190612/model/ProcessImageResponse.h>
#include <tencentcloud/mps/v20190612/model/ProcessLiveStreamRequest.h>
#include <tencentcloud/mps/v20190612/model/ProcessLiveStreamResponse.h>
#include <tencentcloud/mps/v20190612/model/ProcessMediaRequest.h>
#include <tencentcloud/mps/v20190612/model/ProcessMediaResponse.h>
#include <tencentcloud/mps/v20190612/model/RecognizeAudioRequest.h>
#include <tencentcloud/mps/v20190612/model/RecognizeAudioResponse.h>
#include <tencentcloud/mps/v20190612/model/RecognizeMediaForZhiXueRequest.h>
#include <tencentcloud/mps/v20190612/model/RecognizeMediaForZhiXueResponse.h>
#include <tencentcloud/mps/v20190612/model/ResetWorkflowRequest.h>
#include <tencentcloud/mps/v20190612/model/ResetWorkflowResponse.h>
#include <tencentcloud/mps/v20190612/model/StartStreamLinkFlowRequest.h>
#include <tencentcloud/mps/v20190612/model/StartStreamLinkFlowResponse.h>
#include <tencentcloud/mps/v20190612/model/StartStreamPackageLinearAssemblyChannelRequest.h>
#include <tencentcloud/mps/v20190612/model/StartStreamPackageLinearAssemblyChannelResponse.h>
#include <tencentcloud/mps/v20190612/model/StopStreamLinkFlowRequest.h>
#include <tencentcloud/mps/v20190612/model/StopStreamLinkFlowResponse.h>
#include <tencentcloud/mps/v20190612/model/StopStreamPackageLinearAssemblyChannelRequest.h>
#include <tencentcloud/mps/v20190612/model/StopStreamPackageLinearAssemblyChannelResponse.h>
#include <tencentcloud/mps/v20190612/model/SyncDubbingRequest.h>
#include <tencentcloud/mps/v20190612/model/SyncDubbingResponse.h>
#include <tencentcloud/mps/v20190612/model/TextTranslationRequest.h>
#include <tencentcloud/mps/v20190612/model/TextTranslationResponse.h>
#include <tencentcloud/mps/v20190612/model/WithdrawsWatermarkRequest.h>
#include <tencentcloud/mps/v20190612/model/WithdrawsWatermarkResponse.h>


namespace TencentCloud
{
    namespace Mps
    {
        namespace V20190612
        {
            class MpsClient : public AbstractClient
            {
            public:
                MpsClient(const Credential &credential, const std::string &region);
                MpsClient(const Credential &credential, const std::string &region, const ClientProfile &profile);

                typedef Outcome<Core::Error, Model::ActivateSSAIResponse> ActivateSSAIOutcome;
                typedef std::future<ActivateSSAIOutcome> ActivateSSAIOutcomeCallable;
                typedef std::function<void(const MpsClient*, const Model::ActivateSSAIRequest&, ActivateSSAIOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ActivateSSAIAsyncHandler;
                typedef Outcome<Core::Error, Model::ActivateStreamPackageResponse> ActivateStreamPackageOutcome;
                typedef std::future<ActivateStreamPackageOutcome> ActivateStreamPackageOutcomeCallable;
                typedef std::function<void(const MpsClient*, const Model::ActivateStreamPackageRequest&, ActivateStreamPackageOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ActivateStreamPackageAsyncHandler;
                typedef Outcome<Core::Error, Model::BatchDeleteStreamLinkFlowResponse> BatchDeleteStreamLinkFlowOutcome;
                typedef std::future<BatchDeleteStreamLinkFlowOutcome> BatchDeleteStreamLinkFlowOutcomeCallable;
                typedef std::function<void(const MpsClient*, const Model::BatchDeleteStreamLinkFlowRequest&, BatchDeleteStreamLinkFlowOutcome, const std::shared_ptr<const AsyncCallerContext>&)> BatchDeleteStreamLinkFlowAsyncHandler;
                typedef Outcome<Core::Error, Model::BatchProcessMediaResponse> BatchProcessMediaOutcome;
                typedef std::future<BatchProcessMediaOutcome> BatchProcessMediaOutcomeCallable;
                typedef std::function<void(const MpsClient*, const Model::BatchProcessMediaRequest&, BatchProcessMediaOutcome, const std::shared_ptr<const AsyncCallerContext>&)> BatchProcessMediaAsyncHandler;
                typedef Outcome<Core::Error, Model::BatchStartStreamLinkFlowResponse> BatchStartStreamLinkFlowOutcome;
                typedef std::future<BatchStartStreamLinkFlowOutcome> BatchStartStreamLinkFlowOutcomeCallable;
                typedef std::function<void(const MpsClient*, const Model::BatchStartStreamLinkFlowRequest&, BatchStartStreamLinkFlowOutcome, const std::shared_ptr<const AsyncCallerContext>&)> BatchStartStreamLinkFlowAsyncHandler;
                typedef Outcome<Core::Error, Model::BatchStopStreamLinkFlowResponse> BatchStopStreamLinkFlowOutcome;
                typedef std::future<BatchStopStreamLinkFlowOutcome> BatchStopStreamLinkFlowOutcomeCallable;
                typedef std::function<void(const MpsClient*, const Model::BatchStopStreamLinkFlowRequest&, BatchStopStreamLinkFlowOutcome, const std::shared_ptr<const AsyncCallerContext>&)> BatchStopStreamLinkFlowAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateAIAnalysisTemplateResponse> CreateAIAnalysisTemplateOutcome;
                typedef std::future<CreateAIAnalysisTemplateOutcome> CreateAIAnalysisTemplateOutcomeCallable;
                typedef std::function<void(const MpsClient*, const Model::CreateAIAnalysisTemplateRequest&, CreateAIAnalysisTemplateOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateAIAnalysisTemplateAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateAIRecognitionTemplateResponse> CreateAIRecognitionTemplateOutcome;
                typedef std::future<CreateAIRecognitionTemplateOutcome> CreateAIRecognitionTemplateOutcomeCallable;
                typedef std::function<void(const MpsClient*, const Model::CreateAIRecognitionTemplateRequest&, CreateAIRecognitionTemplateOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateAIRecognitionTemplateAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateAdaptiveDynamicStreamingTemplateResponse> CreateAdaptiveDynamicStreamingTemplateOutcome;
                typedef std::future<CreateAdaptiveDynamicStreamingTemplateOutcome> CreateAdaptiveDynamicStreamingTemplateOutcomeCallable;
                typedef std::function<void(const MpsClient*, const Model::CreateAdaptiveDynamicStreamingTemplateRequest&, CreateAdaptiveDynamicStreamingTemplateOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateAdaptiveDynamicStreamingTemplateAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateAigcImageTaskResponse> CreateAigcImageTaskOutcome;
                typedef std::future<CreateAigcImageTaskOutcome> CreateAigcImageTaskOutcomeCallable;
                typedef std::function<void(const MpsClient*, const Model::CreateAigcImageTaskRequest&, CreateAigcImageTaskOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateAigcImageTaskAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateAigcVideoTaskResponse> CreateAigcVideoTaskOutcome;
                typedef std::future<CreateAigcVideoTaskOutcome> CreateAigcVideoTaskOutcomeCallable;
                typedef std::function<void(const MpsClient*, const Model::CreateAigcVideoTaskRequest&, CreateAigcVideoTaskOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateAigcVideoTaskAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateAnimatedGraphicsTemplateResponse> CreateAnimatedGraphicsTemplateOutcome;
                typedef std::future<CreateAnimatedGraphicsTemplateOutcome> CreateAnimatedGraphicsTemplateOutcomeCallable;
                typedef std::function<void(const MpsClient*, const Model::CreateAnimatedGraphicsTemplateRequest&, CreateAnimatedGraphicsTemplateOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateAnimatedGraphicsTemplateAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateAsrHotwordsResponse> CreateAsrHotwordsOutcome;
                typedef std::future<CreateAsrHotwordsOutcome> CreateAsrHotwordsOutcomeCallable;
                typedef std::function<void(const MpsClient*, const Model::CreateAsrHotwordsRequest&, CreateAsrHotwordsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateAsrHotwordsAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateBlindWatermarkTemplateResponse> CreateBlindWatermarkTemplateOutcome;
                typedef std::future<CreateBlindWatermarkTemplateOutcome> CreateBlindWatermarkTemplateOutcomeCallable;
                typedef std::function<void(const MpsClient*, const Model::CreateBlindWatermarkTemplateRequest&, CreateBlindWatermarkTemplateOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateBlindWatermarkTemplateAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateContentReviewTemplateResponse> CreateContentReviewTemplateOutcome;
                typedef std::future<CreateContentReviewTemplateOutcome> CreateContentReviewTemplateOutcomeCallable;
                typedef std::function<void(const MpsClient*, const Model::CreateContentReviewTemplateRequest&, CreateContentReviewTemplateOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateContentReviewTemplateAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateImageSpriteTemplateResponse> CreateImageSpriteTemplateOutcome;
                typedef std::future<CreateImageSpriteTemplateOutcome> CreateImageSpriteTemplateOutcomeCallable;
                typedef std::function<void(const MpsClient*, const Model::CreateImageSpriteTemplateRequest&, CreateImageSpriteTemplateOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateImageSpriteTemplateAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateLiveRecordTemplateResponse> CreateLiveRecordTemplateOutcome;
                typedef std::future<CreateLiveRecordTemplateOutcome> CreateLiveRecordTemplateOutcomeCallable;
                typedef std::function<void(const MpsClient*, const Model::CreateLiveRecordTemplateRequest&, CreateLiveRecordTemplateOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateLiveRecordTemplateAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateMediaEvaluationResponse> CreateMediaEvaluationOutcome;
                typedef std::future<CreateMediaEvaluationOutcome> CreateMediaEvaluationOutcomeCallable;
                typedef std::function<void(const MpsClient*, const Model::CreateMediaEvaluationRequest&, CreateMediaEvaluationOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateMediaEvaluationAsyncHandler;
                typedef Outcome<Core::Error, Model::CreatePersonSampleResponse> CreatePersonSampleOutcome;
                typedef std::future<CreatePersonSampleOutcome> CreatePersonSampleOutcomeCallable;
                typedef std::function<void(const MpsClient*, const Model::CreatePersonSampleRequest&, CreatePersonSampleOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreatePersonSampleAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateProcessImageTemplateResponse> CreateProcessImageTemplateOutcome;
                typedef std::future<CreateProcessImageTemplateOutcome> CreateProcessImageTemplateOutcomeCallable;
                typedef std::function<void(const MpsClient*, const Model::CreateProcessImageTemplateRequest&, CreateProcessImageTemplateOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateProcessImageTemplateAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateQualityControlTemplateResponse> CreateQualityControlTemplateOutcome;
                typedef std::future<CreateQualityControlTemplateOutcome> CreateQualityControlTemplateOutcomeCallable;
                typedef std::function<void(const MpsClient*, const Model::CreateQualityControlTemplateRequest&, CreateQualityControlTemplateOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateQualityControlTemplateAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateSampleSnapshotTemplateResponse> CreateSampleSnapshotTemplateOutcome;
                typedef std::future<CreateSampleSnapshotTemplateOutcome> CreateSampleSnapshotTemplateOutcomeCallable;
                typedef std::function<void(const MpsClient*, const Model::CreateSampleSnapshotTemplateRequest&, CreateSampleSnapshotTemplateOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateSampleSnapshotTemplateAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateScheduleResponse> CreateScheduleOutcome;
                typedef std::future<CreateScheduleOutcome> CreateScheduleOutcomeCallable;
                typedef std::function<void(const MpsClient*, const Model::CreateScheduleRequest&, CreateScheduleOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateScheduleAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateSmartEraseTemplateResponse> CreateSmartEraseTemplateOutcome;
                typedef std::future<CreateSmartEraseTemplateOutcome> CreateSmartEraseTemplateOutcomeCallable;
                typedef std::function<void(const MpsClient*, const Model::CreateSmartEraseTemplateRequest&, CreateSmartEraseTemplateOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateSmartEraseTemplateAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateSmartSubtitleTemplateResponse> CreateSmartSubtitleTemplateOutcome;
                typedef std::future<CreateSmartSubtitleTemplateOutcome> CreateSmartSubtitleTemplateOutcomeCallable;
                typedef std::function<void(const MpsClient*, const Model::CreateSmartSubtitleTemplateRequest&, CreateSmartSubtitleTemplateOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateSmartSubtitleTemplateAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateSnapshotByTimeOffsetTemplateResponse> CreateSnapshotByTimeOffsetTemplateOutcome;
                typedef std::future<CreateSnapshotByTimeOffsetTemplateOutcome> CreateSnapshotByTimeOffsetTemplateOutcomeCallable;
                typedef std::function<void(const MpsClient*, const Model::CreateSnapshotByTimeOffsetTemplateRequest&, CreateSnapshotByTimeOffsetTemplateOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateSnapshotByTimeOffsetTemplateAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateStreamLinkEventResponse> CreateStreamLinkEventOutcome;
                typedef std::future<CreateStreamLinkEventOutcome> CreateStreamLinkEventOutcomeCallable;
                typedef std::function<void(const MpsClient*, const Model::CreateStreamLinkEventRequest&, CreateStreamLinkEventOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateStreamLinkEventAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateStreamLinkFlowResponse> CreateStreamLinkFlowOutcome;
                typedef std::future<CreateStreamLinkFlowOutcome> CreateStreamLinkFlowOutcomeCallable;
                typedef std::function<void(const MpsClient*, const Model::CreateStreamLinkFlowRequest&, CreateStreamLinkFlowOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateStreamLinkFlowAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateStreamLinkInputResponse> CreateStreamLinkInputOutcome;
                typedef std::future<CreateStreamLinkInputOutcome> CreateStreamLinkInputOutcomeCallable;
                typedef std::function<void(const MpsClient*, const Model::CreateStreamLinkInputRequest&, CreateStreamLinkInputOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateStreamLinkInputAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateStreamLinkOutputInfoResponse> CreateStreamLinkOutputInfoOutcome;
                typedef std::future<CreateStreamLinkOutputInfoOutcome> CreateStreamLinkOutputInfoOutcomeCallable;
                typedef std::function<void(const MpsClient*, const Model::CreateStreamLinkOutputInfoRequest&, CreateStreamLinkOutputInfoOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateStreamLinkOutputInfoAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateStreamLinkSecurityGroupResponse> CreateStreamLinkSecurityGroupOutcome;
                typedef std::future<CreateStreamLinkSecurityGroupOutcome> CreateStreamLinkSecurityGroupOutcomeCallable;
                typedef std::function<void(const MpsClient*, const Model::CreateStreamLinkSecurityGroupRequest&, CreateStreamLinkSecurityGroupOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateStreamLinkSecurityGroupAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateStreamPackageLinearAssemblyChannelResponse> CreateStreamPackageLinearAssemblyChannelOutcome;
                typedef std::future<CreateStreamPackageLinearAssemblyChannelOutcome> CreateStreamPackageLinearAssemblyChannelOutcomeCallable;
                typedef std::function<void(const MpsClient*, const Model::CreateStreamPackageLinearAssemblyChannelRequest&, CreateStreamPackageLinearAssemblyChannelOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateStreamPackageLinearAssemblyChannelAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateStreamPackageLinearAssemblyProgramResponse> CreateStreamPackageLinearAssemblyProgramOutcome;
                typedef std::future<CreateStreamPackageLinearAssemblyProgramOutcome> CreateStreamPackageLinearAssemblyProgramOutcomeCallable;
                typedef std::function<void(const MpsClient*, const Model::CreateStreamPackageLinearAssemblyProgramRequest&, CreateStreamPackageLinearAssemblyProgramOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateStreamPackageLinearAssemblyProgramAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateStreamPackageSSAIChannelResponse> CreateStreamPackageSSAIChannelOutcome;
                typedef std::future<CreateStreamPackageSSAIChannelOutcome> CreateStreamPackageSSAIChannelOutcomeCallable;
                typedef std::function<void(const MpsClient*, const Model::CreateStreamPackageSSAIChannelRequest&, CreateStreamPackageSSAIChannelOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateStreamPackageSSAIChannelAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateStreamPackageSourceResponse> CreateStreamPackageSourceOutcome;
                typedef std::future<CreateStreamPackageSourceOutcome> CreateStreamPackageSourceOutcomeCallable;
                typedef std::function<void(const MpsClient*, const Model::CreateStreamPackageSourceRequest&, CreateStreamPackageSourceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateStreamPackageSourceAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateStreamPackageSourceLocationResponse> CreateStreamPackageSourceLocationOutcome;
                typedef std::future<CreateStreamPackageSourceLocationOutcome> CreateStreamPackageSourceLocationOutcomeCallable;
                typedef std::function<void(const MpsClient*, const Model::CreateStreamPackageSourceLocationRequest&, CreateStreamPackageSourceLocationOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateStreamPackageSourceLocationAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateSubtitleEmbedTemplateResponse> CreateSubtitleEmbedTemplateOutcome;
                typedef std::future<CreateSubtitleEmbedTemplateOutcome> CreateSubtitleEmbedTemplateOutcomeCallable;
                typedef std::function<void(const MpsClient*, const Model::CreateSubtitleEmbedTemplateRequest&, CreateSubtitleEmbedTemplateOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateSubtitleEmbedTemplateAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateTranscodeTemplateResponse> CreateTranscodeTemplateOutcome;
                typedef std::future<CreateTranscodeTemplateOutcome> CreateTranscodeTemplateOutcomeCallable;
                typedef std::function<void(const MpsClient*, const Model::CreateTranscodeTemplateRequest&, CreateTranscodeTemplateOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateTranscodeTemplateAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateVideoDatabaseEntryTaskResponse> CreateVideoDatabaseEntryTaskOutcome;
                typedef std::future<CreateVideoDatabaseEntryTaskOutcome> CreateVideoDatabaseEntryTaskOutcomeCallable;
                typedef std::function<void(const MpsClient*, const Model::CreateVideoDatabaseEntryTaskRequest&, CreateVideoDatabaseEntryTaskOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateVideoDatabaseEntryTaskAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateVideoSearchTaskResponse> CreateVideoSearchTaskOutcome;
                typedef std::future<CreateVideoSearchTaskOutcome> CreateVideoSearchTaskOutcomeCallable;
                typedef std::function<void(const MpsClient*, const Model::CreateVideoSearchTaskRequest&, CreateVideoSearchTaskOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateVideoSearchTaskAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateWatermarkTemplateResponse> CreateWatermarkTemplateOutcome;
                typedef std::future<CreateWatermarkTemplateOutcome> CreateWatermarkTemplateOutcomeCallable;
                typedef std::function<void(const MpsClient*, const Model::CreateWatermarkTemplateRequest&, CreateWatermarkTemplateOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateWatermarkTemplateAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateWordSamplesResponse> CreateWordSamplesOutcome;
                typedef std::future<CreateWordSamplesOutcome> CreateWordSamplesOutcomeCallable;
                typedef std::function<void(const MpsClient*, const Model::CreateWordSamplesRequest&, CreateWordSamplesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateWordSamplesAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateWorkflowResponse> CreateWorkflowOutcome;
                typedef std::future<CreateWorkflowOutcome> CreateWorkflowOutcomeCallable;
                typedef std::function<void(const MpsClient*, const Model::CreateWorkflowRequest&, CreateWorkflowOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateWorkflowAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteAIAnalysisTemplateResponse> DeleteAIAnalysisTemplateOutcome;
                typedef std::future<DeleteAIAnalysisTemplateOutcome> DeleteAIAnalysisTemplateOutcomeCallable;
                typedef std::function<void(const MpsClient*, const Model::DeleteAIAnalysisTemplateRequest&, DeleteAIAnalysisTemplateOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteAIAnalysisTemplateAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteAIRecognitionTemplateResponse> DeleteAIRecognitionTemplateOutcome;
                typedef std::future<DeleteAIRecognitionTemplateOutcome> DeleteAIRecognitionTemplateOutcomeCallable;
                typedef std::function<void(const MpsClient*, const Model::DeleteAIRecognitionTemplateRequest&, DeleteAIRecognitionTemplateOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteAIRecognitionTemplateAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteAdaptiveDynamicStreamingTemplateResponse> DeleteAdaptiveDynamicStreamingTemplateOutcome;
                typedef std::future<DeleteAdaptiveDynamicStreamingTemplateOutcome> DeleteAdaptiveDynamicStreamingTemplateOutcomeCallable;
                typedef std::function<void(const MpsClient*, const Model::DeleteAdaptiveDynamicStreamingTemplateRequest&, DeleteAdaptiveDynamicStreamingTemplateOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteAdaptiveDynamicStreamingTemplateAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteAnimatedGraphicsTemplateResponse> DeleteAnimatedGraphicsTemplateOutcome;
                typedef std::future<DeleteAnimatedGraphicsTemplateOutcome> DeleteAnimatedGraphicsTemplateOutcomeCallable;
                typedef std::function<void(const MpsClient*, const Model::DeleteAnimatedGraphicsTemplateRequest&, DeleteAnimatedGraphicsTemplateOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteAnimatedGraphicsTemplateAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteAsrHotwordsResponse> DeleteAsrHotwordsOutcome;
                typedef std::future<DeleteAsrHotwordsOutcome> DeleteAsrHotwordsOutcomeCallable;
                typedef std::function<void(const MpsClient*, const Model::DeleteAsrHotwordsRequest&, DeleteAsrHotwordsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteAsrHotwordsAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteBlindWatermarkTemplateResponse> DeleteBlindWatermarkTemplateOutcome;
                typedef std::future<DeleteBlindWatermarkTemplateOutcome> DeleteBlindWatermarkTemplateOutcomeCallable;
                typedef std::function<void(const MpsClient*, const Model::DeleteBlindWatermarkTemplateRequest&, DeleteBlindWatermarkTemplateOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteBlindWatermarkTemplateAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteContentReviewTemplateResponse> DeleteContentReviewTemplateOutcome;
                typedef std::future<DeleteContentReviewTemplateOutcome> DeleteContentReviewTemplateOutcomeCallable;
                typedef std::function<void(const MpsClient*, const Model::DeleteContentReviewTemplateRequest&, DeleteContentReviewTemplateOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteContentReviewTemplateAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteImageSpriteTemplateResponse> DeleteImageSpriteTemplateOutcome;
                typedef std::future<DeleteImageSpriteTemplateOutcome> DeleteImageSpriteTemplateOutcomeCallable;
                typedef std::function<void(const MpsClient*, const Model::DeleteImageSpriteTemplateRequest&, DeleteImageSpriteTemplateOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteImageSpriteTemplateAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteLiveRecordTemplateResponse> DeleteLiveRecordTemplateOutcome;
                typedef std::future<DeleteLiveRecordTemplateOutcome> DeleteLiveRecordTemplateOutcomeCallable;
                typedef std::function<void(const MpsClient*, const Model::DeleteLiveRecordTemplateRequest&, DeleteLiveRecordTemplateOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteLiveRecordTemplateAsyncHandler;
                typedef Outcome<Core::Error, Model::DeletePersonSampleResponse> DeletePersonSampleOutcome;
                typedef std::future<DeletePersonSampleOutcome> DeletePersonSampleOutcomeCallable;
                typedef std::function<void(const MpsClient*, const Model::DeletePersonSampleRequest&, DeletePersonSampleOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeletePersonSampleAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteProcessImageTemplateResponse> DeleteProcessImageTemplateOutcome;
                typedef std::future<DeleteProcessImageTemplateOutcome> DeleteProcessImageTemplateOutcomeCallable;
                typedef std::function<void(const MpsClient*, const Model::DeleteProcessImageTemplateRequest&, DeleteProcessImageTemplateOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteProcessImageTemplateAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteQualityControlTemplateResponse> DeleteQualityControlTemplateOutcome;
                typedef std::future<DeleteQualityControlTemplateOutcome> DeleteQualityControlTemplateOutcomeCallable;
                typedef std::function<void(const MpsClient*, const Model::DeleteQualityControlTemplateRequest&, DeleteQualityControlTemplateOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteQualityControlTemplateAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteSampleSnapshotTemplateResponse> DeleteSampleSnapshotTemplateOutcome;
                typedef std::future<DeleteSampleSnapshotTemplateOutcome> DeleteSampleSnapshotTemplateOutcomeCallable;
                typedef std::function<void(const MpsClient*, const Model::DeleteSampleSnapshotTemplateRequest&, DeleteSampleSnapshotTemplateOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteSampleSnapshotTemplateAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteScheduleResponse> DeleteScheduleOutcome;
                typedef std::future<DeleteScheduleOutcome> DeleteScheduleOutcomeCallable;
                typedef std::function<void(const MpsClient*, const Model::DeleteScheduleRequest&, DeleteScheduleOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteScheduleAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteSmartEraseTemplateResponse> DeleteSmartEraseTemplateOutcome;
                typedef std::future<DeleteSmartEraseTemplateOutcome> DeleteSmartEraseTemplateOutcomeCallable;
                typedef std::function<void(const MpsClient*, const Model::DeleteSmartEraseTemplateRequest&, DeleteSmartEraseTemplateOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteSmartEraseTemplateAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteSmartSubtitleTemplateResponse> DeleteSmartSubtitleTemplateOutcome;
                typedef std::future<DeleteSmartSubtitleTemplateOutcome> DeleteSmartSubtitleTemplateOutcomeCallable;
                typedef std::function<void(const MpsClient*, const Model::DeleteSmartSubtitleTemplateRequest&, DeleteSmartSubtitleTemplateOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteSmartSubtitleTemplateAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteSnapshotByTimeOffsetTemplateResponse> DeleteSnapshotByTimeOffsetTemplateOutcome;
                typedef std::future<DeleteSnapshotByTimeOffsetTemplateOutcome> DeleteSnapshotByTimeOffsetTemplateOutcomeCallable;
                typedef std::function<void(const MpsClient*, const Model::DeleteSnapshotByTimeOffsetTemplateRequest&, DeleteSnapshotByTimeOffsetTemplateOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteSnapshotByTimeOffsetTemplateAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteStreamLinkEventResponse> DeleteStreamLinkEventOutcome;
                typedef std::future<DeleteStreamLinkEventOutcome> DeleteStreamLinkEventOutcomeCallable;
                typedef std::function<void(const MpsClient*, const Model::DeleteStreamLinkEventRequest&, DeleteStreamLinkEventOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteStreamLinkEventAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteStreamLinkFlowResponse> DeleteStreamLinkFlowOutcome;
                typedef std::future<DeleteStreamLinkFlowOutcome> DeleteStreamLinkFlowOutcomeCallable;
                typedef std::function<void(const MpsClient*, const Model::DeleteStreamLinkFlowRequest&, DeleteStreamLinkFlowOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteStreamLinkFlowAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteStreamLinkOutputResponse> DeleteStreamLinkOutputOutcome;
                typedef std::future<DeleteStreamLinkOutputOutcome> DeleteStreamLinkOutputOutcomeCallable;
                typedef std::function<void(const MpsClient*, const Model::DeleteStreamLinkOutputRequest&, DeleteStreamLinkOutputOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteStreamLinkOutputAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteStreamLinkSecurityGroupResponse> DeleteStreamLinkSecurityGroupOutcome;
                typedef std::future<DeleteStreamLinkSecurityGroupOutcome> DeleteStreamLinkSecurityGroupOutcomeCallable;
                typedef std::function<void(const MpsClient*, const Model::DeleteStreamLinkSecurityGroupRequest&, DeleteStreamLinkSecurityGroupOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteStreamLinkSecurityGroupAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteStreamPackageLinearAssemblyChannelResponse> DeleteStreamPackageLinearAssemblyChannelOutcome;
                typedef std::future<DeleteStreamPackageLinearAssemblyChannelOutcome> DeleteStreamPackageLinearAssemblyChannelOutcomeCallable;
                typedef std::function<void(const MpsClient*, const Model::DeleteStreamPackageLinearAssemblyChannelRequest&, DeleteStreamPackageLinearAssemblyChannelOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteStreamPackageLinearAssemblyChannelAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteStreamPackageLinearAssemblyChannelsResponse> DeleteStreamPackageLinearAssemblyChannelsOutcome;
                typedef std::future<DeleteStreamPackageLinearAssemblyChannelsOutcome> DeleteStreamPackageLinearAssemblyChannelsOutcomeCallable;
                typedef std::function<void(const MpsClient*, const Model::DeleteStreamPackageLinearAssemblyChannelsRequest&, DeleteStreamPackageLinearAssemblyChannelsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteStreamPackageLinearAssemblyChannelsAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteStreamPackageLinearAssemblyProgramResponse> DeleteStreamPackageLinearAssemblyProgramOutcome;
                typedef std::future<DeleteStreamPackageLinearAssemblyProgramOutcome> DeleteStreamPackageLinearAssemblyProgramOutcomeCallable;
                typedef std::function<void(const MpsClient*, const Model::DeleteStreamPackageLinearAssemblyProgramRequest&, DeleteStreamPackageLinearAssemblyProgramOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteStreamPackageLinearAssemblyProgramAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteStreamPackageLinearAssemblyProgramsResponse> DeleteStreamPackageLinearAssemblyProgramsOutcome;
                typedef std::future<DeleteStreamPackageLinearAssemblyProgramsOutcome> DeleteStreamPackageLinearAssemblyProgramsOutcomeCallable;
                typedef std::function<void(const MpsClient*, const Model::DeleteStreamPackageLinearAssemblyProgramsRequest&, DeleteStreamPackageLinearAssemblyProgramsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteStreamPackageLinearAssemblyProgramsAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteStreamPackageLinearAssemblyProgramsByChannelResponse> DeleteStreamPackageLinearAssemblyProgramsByChannelOutcome;
                typedef std::future<DeleteStreamPackageLinearAssemblyProgramsByChannelOutcome> DeleteStreamPackageLinearAssemblyProgramsByChannelOutcomeCallable;
                typedef std::function<void(const MpsClient*, const Model::DeleteStreamPackageLinearAssemblyProgramsByChannelRequest&, DeleteStreamPackageLinearAssemblyProgramsByChannelOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteStreamPackageLinearAssemblyProgramsByChannelAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteStreamPackageSSAIChannelResponse> DeleteStreamPackageSSAIChannelOutcome;
                typedef std::future<DeleteStreamPackageSSAIChannelOutcome> DeleteStreamPackageSSAIChannelOutcomeCallable;
                typedef std::function<void(const MpsClient*, const Model::DeleteStreamPackageSSAIChannelRequest&, DeleteStreamPackageSSAIChannelOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteStreamPackageSSAIChannelAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteStreamPackageSourceResponse> DeleteStreamPackageSourceOutcome;
                typedef std::future<DeleteStreamPackageSourceOutcome> DeleteStreamPackageSourceOutcomeCallable;
                typedef std::function<void(const MpsClient*, const Model::DeleteStreamPackageSourceRequest&, DeleteStreamPackageSourceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteStreamPackageSourceAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteStreamPackageSourceLocationResponse> DeleteStreamPackageSourceLocationOutcome;
                typedef std::future<DeleteStreamPackageSourceLocationOutcome> DeleteStreamPackageSourceLocationOutcomeCallable;
                typedef std::function<void(const MpsClient*, const Model::DeleteStreamPackageSourceLocationRequest&, DeleteStreamPackageSourceLocationOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteStreamPackageSourceLocationAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteSubtitleEmbedTemplateResponse> DeleteSubtitleEmbedTemplateOutcome;
                typedef std::future<DeleteSubtitleEmbedTemplateOutcome> DeleteSubtitleEmbedTemplateOutcomeCallable;
                typedef std::function<void(const MpsClient*, const Model::DeleteSubtitleEmbedTemplateRequest&, DeleteSubtitleEmbedTemplateOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteSubtitleEmbedTemplateAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteTranscodeTemplateResponse> DeleteTranscodeTemplateOutcome;
                typedef std::future<DeleteTranscodeTemplateOutcome> DeleteTranscodeTemplateOutcomeCallable;
                typedef std::function<void(const MpsClient*, const Model::DeleteTranscodeTemplateRequest&, DeleteTranscodeTemplateOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteTranscodeTemplateAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteWatermarkTemplateResponse> DeleteWatermarkTemplateOutcome;
                typedef std::future<DeleteWatermarkTemplateOutcome> DeleteWatermarkTemplateOutcomeCallable;
                typedef std::function<void(const MpsClient*, const Model::DeleteWatermarkTemplateRequest&, DeleteWatermarkTemplateOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteWatermarkTemplateAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteWordSamplesResponse> DeleteWordSamplesOutcome;
                typedef std::future<DeleteWordSamplesOutcome> DeleteWordSamplesOutcomeCallable;
                typedef std::function<void(const MpsClient*, const Model::DeleteWordSamplesRequest&, DeleteWordSamplesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteWordSamplesAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteWorkflowResponse> DeleteWorkflowOutcome;
                typedef std::future<DeleteWorkflowOutcome> DeleteWorkflowOutcomeCallable;
                typedef std::function<void(const MpsClient*, const Model::DeleteWorkflowRequest&, DeleteWorkflowOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteWorkflowAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeAIAnalysisTemplatesResponse> DescribeAIAnalysisTemplatesOutcome;
                typedef std::future<DescribeAIAnalysisTemplatesOutcome> DescribeAIAnalysisTemplatesOutcomeCallable;
                typedef std::function<void(const MpsClient*, const Model::DescribeAIAnalysisTemplatesRequest&, DescribeAIAnalysisTemplatesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAIAnalysisTemplatesAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeAIRecognitionTemplatesResponse> DescribeAIRecognitionTemplatesOutcome;
                typedef std::future<DescribeAIRecognitionTemplatesOutcome> DescribeAIRecognitionTemplatesOutcomeCallable;
                typedef std::function<void(const MpsClient*, const Model::DescribeAIRecognitionTemplatesRequest&, DescribeAIRecognitionTemplatesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAIRecognitionTemplatesAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeAdaptiveDynamicStreamingTemplatesResponse> DescribeAdaptiveDynamicStreamingTemplatesOutcome;
                typedef std::future<DescribeAdaptiveDynamicStreamingTemplatesOutcome> DescribeAdaptiveDynamicStreamingTemplatesOutcomeCallable;
                typedef std::function<void(const MpsClient*, const Model::DescribeAdaptiveDynamicStreamingTemplatesRequest&, DescribeAdaptiveDynamicStreamingTemplatesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAdaptiveDynamicStreamingTemplatesAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeAigcImageTaskResponse> DescribeAigcImageTaskOutcome;
                typedef std::future<DescribeAigcImageTaskOutcome> DescribeAigcImageTaskOutcomeCallable;
                typedef std::function<void(const MpsClient*, const Model::DescribeAigcImageTaskRequest&, DescribeAigcImageTaskOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAigcImageTaskAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeAigcVideoTaskResponse> DescribeAigcVideoTaskOutcome;
                typedef std::future<DescribeAigcVideoTaskOutcome> DescribeAigcVideoTaskOutcomeCallable;
                typedef std::function<void(const MpsClient*, const Model::DescribeAigcVideoTaskRequest&, DescribeAigcVideoTaskOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAigcVideoTaskAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeAnimatedGraphicsTemplatesResponse> DescribeAnimatedGraphicsTemplatesOutcome;
                typedef std::future<DescribeAnimatedGraphicsTemplatesOutcome> DescribeAnimatedGraphicsTemplatesOutcomeCallable;
                typedef std::function<void(const MpsClient*, const Model::DescribeAnimatedGraphicsTemplatesRequest&, DescribeAnimatedGraphicsTemplatesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAnimatedGraphicsTemplatesAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeAsrHotwordsResponse> DescribeAsrHotwordsOutcome;
                typedef std::future<DescribeAsrHotwordsOutcome> DescribeAsrHotwordsOutcomeCallable;
                typedef std::function<void(const MpsClient*, const Model::DescribeAsrHotwordsRequest&, DescribeAsrHotwordsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAsrHotwordsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeAsrHotwordsListResponse> DescribeAsrHotwordsListOutcome;
                typedef std::future<DescribeAsrHotwordsListOutcome> DescribeAsrHotwordsListOutcomeCallable;
                typedef std::function<void(const MpsClient*, const Model::DescribeAsrHotwordsListRequest&, DescribeAsrHotwordsListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAsrHotwordsListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeBatchTaskDetailResponse> DescribeBatchTaskDetailOutcome;
                typedef std::future<DescribeBatchTaskDetailOutcome> DescribeBatchTaskDetailOutcomeCallable;
                typedef std::function<void(const MpsClient*, const Model::DescribeBatchTaskDetailRequest&, DescribeBatchTaskDetailOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeBatchTaskDetailAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeBlindWatermarkTemplatesResponse> DescribeBlindWatermarkTemplatesOutcome;
                typedef std::future<DescribeBlindWatermarkTemplatesOutcome> DescribeBlindWatermarkTemplatesOutcomeCallable;
                typedef std::function<void(const MpsClient*, const Model::DescribeBlindWatermarkTemplatesRequest&, DescribeBlindWatermarkTemplatesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeBlindWatermarkTemplatesAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeContentReviewTemplatesResponse> DescribeContentReviewTemplatesOutcome;
                typedef std::future<DescribeContentReviewTemplatesOutcome> DescribeContentReviewTemplatesOutcomeCallable;
                typedef std::function<void(const MpsClient*, const Model::DescribeContentReviewTemplatesRequest&, DescribeContentReviewTemplatesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeContentReviewTemplatesAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeGroupAttachFlowsByIdResponse> DescribeGroupAttachFlowsByIdOutcome;
                typedef std::future<DescribeGroupAttachFlowsByIdOutcome> DescribeGroupAttachFlowsByIdOutcomeCallable;
                typedef std::function<void(const MpsClient*, const Model::DescribeGroupAttachFlowsByIdRequest&, DescribeGroupAttachFlowsByIdOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeGroupAttachFlowsByIdAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeImageSpriteTemplatesResponse> DescribeImageSpriteTemplatesOutcome;
                typedef std::future<DescribeImageSpriteTemplatesOutcome> DescribeImageSpriteTemplatesOutcomeCallable;
                typedef std::function<void(const MpsClient*, const Model::DescribeImageSpriteTemplatesRequest&, DescribeImageSpriteTemplatesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeImageSpriteTemplatesAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeImageTaskDetailResponse> DescribeImageTaskDetailOutcome;
                typedef std::future<DescribeImageTaskDetailOutcome> DescribeImageTaskDetailOutcomeCallable;
                typedef std::function<void(const MpsClient*, const Model::DescribeImageTaskDetailRequest&, DescribeImageTaskDetailOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeImageTaskDetailAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeLiveRecordTemplatesResponse> DescribeLiveRecordTemplatesOutcome;
                typedef std::future<DescribeLiveRecordTemplatesOutcome> DescribeLiveRecordTemplatesOutcomeCallable;
                typedef std::function<void(const MpsClient*, const Model::DescribeLiveRecordTemplatesRequest&, DescribeLiveRecordTemplatesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeLiveRecordTemplatesAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeMDPMPSUserInfoResponse> DescribeMDPMPSUserInfoOutcome;
                typedef std::future<DescribeMDPMPSUserInfoOutcome> DescribeMDPMPSUserInfoOutcomeCallable;
                typedef std::function<void(const MpsClient*, const Model::DescribeMDPMPSUserInfoRequest&, DescribeMDPMPSUserInfoOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeMDPMPSUserInfoAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeMediaMetaDataResponse> DescribeMediaMetaDataOutcome;
                typedef std::future<DescribeMediaMetaDataOutcome> DescribeMediaMetaDataOutcomeCallable;
                typedef std::function<void(const MpsClient*, const Model::DescribeMediaMetaDataRequest&, DescribeMediaMetaDataOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeMediaMetaDataAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribePersonSamplesResponse> DescribePersonSamplesOutcome;
                typedef std::future<DescribePersonSamplesOutcome> DescribePersonSamplesOutcomeCallable;
                typedef std::function<void(const MpsClient*, const Model::DescribePersonSamplesRequest&, DescribePersonSamplesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribePersonSamplesAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeProcessImageTemplatesResponse> DescribeProcessImageTemplatesOutcome;
                typedef std::future<DescribeProcessImageTemplatesOutcome> DescribeProcessImageTemplatesOutcomeCallable;
                typedef std::function<void(const MpsClient*, const Model::DescribeProcessImageTemplatesRequest&, DescribeProcessImageTemplatesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeProcessImageTemplatesAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeQualityControlTemplatesResponse> DescribeQualityControlTemplatesOutcome;
                typedef std::future<DescribeQualityControlTemplatesOutcome> DescribeQualityControlTemplatesOutcomeCallable;
                typedef std::function<void(const MpsClient*, const Model::DescribeQualityControlTemplatesRequest&, DescribeQualityControlTemplatesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeQualityControlTemplatesAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeSSAIActivateStateResponse> DescribeSSAIActivateStateOutcome;
                typedef std::future<DescribeSSAIActivateStateOutcome> DescribeSSAIActivateStateOutcomeCallable;
                typedef std::function<void(const MpsClient*, const Model::DescribeSSAIActivateStateRequest&, DescribeSSAIActivateStateOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeSSAIActivateStateAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeSampleSnapshotTemplatesResponse> DescribeSampleSnapshotTemplatesOutcome;
                typedef std::future<DescribeSampleSnapshotTemplatesOutcome> DescribeSampleSnapshotTemplatesOutcomeCallable;
                typedef std::function<void(const MpsClient*, const Model::DescribeSampleSnapshotTemplatesRequest&, DescribeSampleSnapshotTemplatesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeSampleSnapshotTemplatesAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeSchedulesResponse> DescribeSchedulesOutcome;
                typedef std::future<DescribeSchedulesOutcome> DescribeSchedulesOutcomeCallable;
                typedef std::function<void(const MpsClient*, const Model::DescribeSchedulesRequest&, DescribeSchedulesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeSchedulesAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeSmartEraseTemplatesResponse> DescribeSmartEraseTemplatesOutcome;
                typedef std::future<DescribeSmartEraseTemplatesOutcome> DescribeSmartEraseTemplatesOutcomeCallable;
                typedef std::function<void(const MpsClient*, const Model::DescribeSmartEraseTemplatesRequest&, DescribeSmartEraseTemplatesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeSmartEraseTemplatesAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeSmartSubtitleTemplatesResponse> DescribeSmartSubtitleTemplatesOutcome;
                typedef std::future<DescribeSmartSubtitleTemplatesOutcome> DescribeSmartSubtitleTemplatesOutcomeCallable;
                typedef std::function<void(const MpsClient*, const Model::DescribeSmartSubtitleTemplatesRequest&, DescribeSmartSubtitleTemplatesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeSmartSubtitleTemplatesAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeSnapshotByTimeOffsetTemplatesResponse> DescribeSnapshotByTimeOffsetTemplatesOutcome;
                typedef std::future<DescribeSnapshotByTimeOffsetTemplatesOutcome> DescribeSnapshotByTimeOffsetTemplatesOutcomeCallable;
                typedef std::function<void(const MpsClient*, const Model::DescribeSnapshotByTimeOffsetTemplatesRequest&, DescribeSnapshotByTimeOffsetTemplatesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeSnapshotByTimeOffsetTemplatesAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeStreamLinkActivateStateResponse> DescribeStreamLinkActivateStateOutcome;
                typedef std::future<DescribeStreamLinkActivateStateOutcome> DescribeStreamLinkActivateStateOutcomeCallable;
                typedef std::function<void(const MpsClient*, const Model::DescribeStreamLinkActivateStateRequest&, DescribeStreamLinkActivateStateOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeStreamLinkActivateStateAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeStreamLinkEventResponse> DescribeStreamLinkEventOutcome;
                typedef std::future<DescribeStreamLinkEventOutcome> DescribeStreamLinkEventOutcomeCallable;
                typedef std::function<void(const MpsClient*, const Model::DescribeStreamLinkEventRequest&, DescribeStreamLinkEventOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeStreamLinkEventAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeStreamLinkEventAttachedFlowsResponse> DescribeStreamLinkEventAttachedFlowsOutcome;
                typedef std::future<DescribeStreamLinkEventAttachedFlowsOutcome> DescribeStreamLinkEventAttachedFlowsOutcomeCallable;
                typedef std::function<void(const MpsClient*, const Model::DescribeStreamLinkEventAttachedFlowsRequest&, DescribeStreamLinkEventAttachedFlowsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeStreamLinkEventAttachedFlowsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeStreamLinkEventsResponse> DescribeStreamLinkEventsOutcome;
                typedef std::future<DescribeStreamLinkEventsOutcome> DescribeStreamLinkEventsOutcomeCallable;
                typedef std::function<void(const MpsClient*, const Model::DescribeStreamLinkEventsRequest&, DescribeStreamLinkEventsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeStreamLinkEventsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeStreamLinkFlowResponse> DescribeStreamLinkFlowOutcome;
                typedef std::future<DescribeStreamLinkFlowOutcome> DescribeStreamLinkFlowOutcomeCallable;
                typedef std::function<void(const MpsClient*, const Model::DescribeStreamLinkFlowRequest&, DescribeStreamLinkFlowOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeStreamLinkFlowAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeStreamLinkFlowLogsResponse> DescribeStreamLinkFlowLogsOutcome;
                typedef std::future<DescribeStreamLinkFlowLogsOutcome> DescribeStreamLinkFlowLogsOutcomeCallable;
                typedef std::function<void(const MpsClient*, const Model::DescribeStreamLinkFlowLogsRequest&, DescribeStreamLinkFlowLogsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeStreamLinkFlowLogsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeStreamLinkFlowMediaStatisticsResponse> DescribeStreamLinkFlowMediaStatisticsOutcome;
                typedef std::future<DescribeStreamLinkFlowMediaStatisticsOutcome> DescribeStreamLinkFlowMediaStatisticsOutcomeCallable;
                typedef std::function<void(const MpsClient*, const Model::DescribeStreamLinkFlowMediaStatisticsRequest&, DescribeStreamLinkFlowMediaStatisticsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeStreamLinkFlowMediaStatisticsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeStreamLinkFlowRealtimeStatusResponse> DescribeStreamLinkFlowRealtimeStatusOutcome;
                typedef std::future<DescribeStreamLinkFlowRealtimeStatusOutcome> DescribeStreamLinkFlowRealtimeStatusOutcomeCallable;
                typedef std::function<void(const MpsClient*, const Model::DescribeStreamLinkFlowRealtimeStatusRequest&, DescribeStreamLinkFlowRealtimeStatusOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeStreamLinkFlowRealtimeStatusAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeStreamLinkFlowSRTStatisticsResponse> DescribeStreamLinkFlowSRTStatisticsOutcome;
                typedef std::future<DescribeStreamLinkFlowSRTStatisticsOutcome> DescribeStreamLinkFlowSRTStatisticsOutcomeCallable;
                typedef std::function<void(const MpsClient*, const Model::DescribeStreamLinkFlowSRTStatisticsRequest&, DescribeStreamLinkFlowSRTStatisticsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeStreamLinkFlowSRTStatisticsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeStreamLinkFlowStatisticsResponse> DescribeStreamLinkFlowStatisticsOutcome;
                typedef std::future<DescribeStreamLinkFlowStatisticsOutcome> DescribeStreamLinkFlowStatisticsOutcomeCallable;
                typedef std::function<void(const MpsClient*, const Model::DescribeStreamLinkFlowStatisticsRequest&, DescribeStreamLinkFlowStatisticsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeStreamLinkFlowStatisticsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeStreamLinkFlowsResponse> DescribeStreamLinkFlowsOutcome;
                typedef std::future<DescribeStreamLinkFlowsOutcome> DescribeStreamLinkFlowsOutcomeCallable;
                typedef std::function<void(const MpsClient*, const Model::DescribeStreamLinkFlowsRequest&, DescribeStreamLinkFlowsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeStreamLinkFlowsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeStreamLinkRegionsResponse> DescribeStreamLinkRegionsOutcome;
                typedef std::future<DescribeStreamLinkRegionsOutcome> DescribeStreamLinkRegionsOutcomeCallable;
                typedef std::function<void(const MpsClient*, const Model::DescribeStreamLinkRegionsRequest&, DescribeStreamLinkRegionsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeStreamLinkRegionsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeStreamLinkSecurityGroupsResponse> DescribeStreamLinkSecurityGroupsOutcome;
                typedef std::future<DescribeStreamLinkSecurityGroupsOutcome> DescribeStreamLinkSecurityGroupsOutcomeCallable;
                typedef std::function<void(const MpsClient*, const Model::DescribeStreamLinkSecurityGroupsRequest&, DescribeStreamLinkSecurityGroupsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeStreamLinkSecurityGroupsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeStreamPackageActivateStateResponse> DescribeStreamPackageActivateStateOutcome;
                typedef std::future<DescribeStreamPackageActivateStateOutcome> DescribeStreamPackageActivateStateOutcomeCallable;
                typedef std::function<void(const MpsClient*, const Model::DescribeStreamPackageActivateStateRequest&, DescribeStreamPackageActivateStateOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeStreamPackageActivateStateAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeStreamPackageLinearAssemblyChannelResponse> DescribeStreamPackageLinearAssemblyChannelOutcome;
                typedef std::future<DescribeStreamPackageLinearAssemblyChannelOutcome> DescribeStreamPackageLinearAssemblyChannelOutcomeCallable;
                typedef std::function<void(const MpsClient*, const Model::DescribeStreamPackageLinearAssemblyChannelRequest&, DescribeStreamPackageLinearAssemblyChannelOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeStreamPackageLinearAssemblyChannelAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeStreamPackageLinearAssemblyChannelAlertsResponse> DescribeStreamPackageLinearAssemblyChannelAlertsOutcome;
                typedef std::future<DescribeStreamPackageLinearAssemblyChannelAlertsOutcome> DescribeStreamPackageLinearAssemblyChannelAlertsOutcomeCallable;
                typedef std::function<void(const MpsClient*, const Model::DescribeStreamPackageLinearAssemblyChannelAlertsRequest&, DescribeStreamPackageLinearAssemblyChannelAlertsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeStreamPackageLinearAssemblyChannelAlertsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeStreamPackageLinearAssemblyChannelsResponse> DescribeStreamPackageLinearAssemblyChannelsOutcome;
                typedef std::future<DescribeStreamPackageLinearAssemblyChannelsOutcome> DescribeStreamPackageLinearAssemblyChannelsOutcomeCallable;
                typedef std::function<void(const MpsClient*, const Model::DescribeStreamPackageLinearAssemblyChannelsRequest&, DescribeStreamPackageLinearAssemblyChannelsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeStreamPackageLinearAssemblyChannelsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeStreamPackageLinearAssemblyProgramResponse> DescribeStreamPackageLinearAssemblyProgramOutcome;
                typedef std::future<DescribeStreamPackageLinearAssemblyProgramOutcome> DescribeStreamPackageLinearAssemblyProgramOutcomeCallable;
                typedef std::function<void(const MpsClient*, const Model::DescribeStreamPackageLinearAssemblyProgramRequest&, DescribeStreamPackageLinearAssemblyProgramOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeStreamPackageLinearAssemblyProgramAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeStreamPackageLinearAssemblyProgramSchedulesResponse> DescribeStreamPackageLinearAssemblyProgramSchedulesOutcome;
                typedef std::future<DescribeStreamPackageLinearAssemblyProgramSchedulesOutcome> DescribeStreamPackageLinearAssemblyProgramSchedulesOutcomeCallable;
                typedef std::function<void(const MpsClient*, const Model::DescribeStreamPackageLinearAssemblyProgramSchedulesRequest&, DescribeStreamPackageLinearAssemblyProgramSchedulesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeStreamPackageLinearAssemblyProgramSchedulesAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeStreamPackageLinearAssemblyProgramsResponse> DescribeStreamPackageLinearAssemblyProgramsOutcome;
                typedef std::future<DescribeStreamPackageLinearAssemblyProgramsOutcome> DescribeStreamPackageLinearAssemblyProgramsOutcomeCallable;
                typedef std::function<void(const MpsClient*, const Model::DescribeStreamPackageLinearAssemblyProgramsRequest&, DescribeStreamPackageLinearAssemblyProgramsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeStreamPackageLinearAssemblyProgramsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeStreamPackageLinearAssemblyUsageResponse> DescribeStreamPackageLinearAssemblyUsageOutcome;
                typedef std::future<DescribeStreamPackageLinearAssemblyUsageOutcome> DescribeStreamPackageLinearAssemblyUsageOutcomeCallable;
                typedef std::function<void(const MpsClient*, const Model::DescribeStreamPackageLinearAssemblyUsageRequest&, DescribeStreamPackageLinearAssemblyUsageOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeStreamPackageLinearAssemblyUsageAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeStreamPackageSSAIChannelResponse> DescribeStreamPackageSSAIChannelOutcome;
                typedef std::future<DescribeStreamPackageSSAIChannelOutcome> DescribeStreamPackageSSAIChannelOutcomeCallable;
                typedef std::function<void(const MpsClient*, const Model::DescribeStreamPackageSSAIChannelRequest&, DescribeStreamPackageSSAIChannelOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeStreamPackageSSAIChannelAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeStreamPackageSSAIChannelsResponse> DescribeStreamPackageSSAIChannelsOutcome;
                typedef std::future<DescribeStreamPackageSSAIChannelsOutcome> DescribeStreamPackageSSAIChannelsOutcomeCallable;
                typedef std::function<void(const MpsClient*, const Model::DescribeStreamPackageSSAIChannelsRequest&, DescribeStreamPackageSSAIChannelsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeStreamPackageSSAIChannelsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeStreamPackageSSAIUsageResponse> DescribeStreamPackageSSAIUsageOutcome;
                typedef std::future<DescribeStreamPackageSSAIUsageOutcome> DescribeStreamPackageSSAIUsageOutcomeCallable;
                typedef std::function<void(const MpsClient*, const Model::DescribeStreamPackageSSAIUsageRequest&, DescribeStreamPackageSSAIUsageOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeStreamPackageSSAIUsageAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeStreamPackageSourceResponse> DescribeStreamPackageSourceOutcome;
                typedef std::future<DescribeStreamPackageSourceOutcome> DescribeStreamPackageSourceOutcomeCallable;
                typedef std::function<void(const MpsClient*, const Model::DescribeStreamPackageSourceRequest&, DescribeStreamPackageSourceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeStreamPackageSourceAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeStreamPackageSourceAlertsResponse> DescribeStreamPackageSourceAlertsOutcome;
                typedef std::future<DescribeStreamPackageSourceAlertsOutcome> DescribeStreamPackageSourceAlertsOutcomeCallable;
                typedef std::function<void(const MpsClient*, const Model::DescribeStreamPackageSourceAlertsRequest&, DescribeStreamPackageSourceAlertsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeStreamPackageSourceAlertsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeStreamPackageSourceLocationResponse> DescribeStreamPackageSourceLocationOutcome;
                typedef std::future<DescribeStreamPackageSourceLocationOutcome> DescribeStreamPackageSourceLocationOutcomeCallable;
                typedef std::function<void(const MpsClient*, const Model::DescribeStreamPackageSourceLocationRequest&, DescribeStreamPackageSourceLocationOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeStreamPackageSourceLocationAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeStreamPackageSourceLocationsResponse> DescribeStreamPackageSourceLocationsOutcome;
                typedef std::future<DescribeStreamPackageSourceLocationsOutcome> DescribeStreamPackageSourceLocationsOutcomeCallable;
                typedef std::function<void(const MpsClient*, const Model::DescribeStreamPackageSourceLocationsRequest&, DescribeStreamPackageSourceLocationsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeStreamPackageSourceLocationsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeStreamPackageSourcesResponse> DescribeStreamPackageSourcesOutcome;
                typedef std::future<DescribeStreamPackageSourcesOutcome> DescribeStreamPackageSourcesOutcomeCallable;
                typedef std::function<void(const MpsClient*, const Model::DescribeStreamPackageSourcesRequest&, DescribeStreamPackageSourcesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeStreamPackageSourcesAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeSubtitleEmbedTemplatesResponse> DescribeSubtitleEmbedTemplatesOutcome;
                typedef std::future<DescribeSubtitleEmbedTemplatesOutcome> DescribeSubtitleEmbedTemplatesOutcomeCallable;
                typedef std::function<void(const MpsClient*, const Model::DescribeSubtitleEmbedTemplatesRequest&, DescribeSubtitleEmbedTemplatesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeSubtitleEmbedTemplatesAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeTaskDetailResponse> DescribeTaskDetailOutcome;
                typedef std::future<DescribeTaskDetailOutcome> DescribeTaskDetailOutcomeCallable;
                typedef std::function<void(const MpsClient*, const Model::DescribeTaskDetailRequest&, DescribeTaskDetailOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeTaskDetailAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeTasksResponse> DescribeTasksOutcome;
                typedef std::future<DescribeTasksOutcome> DescribeTasksOutcomeCallable;
                typedef std::function<void(const MpsClient*, const Model::DescribeTasksRequest&, DescribeTasksOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeTasksAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeTranscodeTemplatesResponse> DescribeTranscodeTemplatesOutcome;
                typedef std::future<DescribeTranscodeTemplatesOutcome> DescribeTranscodeTemplatesOutcomeCallable;
                typedef std::function<void(const MpsClient*, const Model::DescribeTranscodeTemplatesRequest&, DescribeTranscodeTemplatesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeTranscodeTemplatesAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeUsageDataResponse> DescribeUsageDataOutcome;
                typedef std::future<DescribeUsageDataOutcome> DescribeUsageDataOutcomeCallable;
                typedef std::function<void(const MpsClient*, const Model::DescribeUsageDataRequest&, DescribeUsageDataOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeUsageDataAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeVideoDatabaseEntryTaskDetailResponse> DescribeVideoDatabaseEntryTaskDetailOutcome;
                typedef std::future<DescribeVideoDatabaseEntryTaskDetailOutcome> DescribeVideoDatabaseEntryTaskDetailOutcomeCallable;
                typedef std::function<void(const MpsClient*, const Model::DescribeVideoDatabaseEntryTaskDetailRequest&, DescribeVideoDatabaseEntryTaskDetailOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeVideoDatabaseEntryTaskDetailAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeVideoSearchTaskDetailResponse> DescribeVideoSearchTaskDetailOutcome;
                typedef std::future<DescribeVideoSearchTaskDetailOutcome> DescribeVideoSearchTaskDetailOutcomeCallable;
                typedef std::function<void(const MpsClient*, const Model::DescribeVideoSearchTaskDetailRequest&, DescribeVideoSearchTaskDetailOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeVideoSearchTaskDetailAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeVoicesResponse> DescribeVoicesOutcome;
                typedef std::future<DescribeVoicesOutcome> DescribeVoicesOutcomeCallable;
                typedef std::function<void(const MpsClient*, const Model::DescribeVoicesRequest&, DescribeVoicesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeVoicesAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeWatermarkTemplatesResponse> DescribeWatermarkTemplatesOutcome;
                typedef std::future<DescribeWatermarkTemplatesOutcome> DescribeWatermarkTemplatesOutcomeCallable;
                typedef std::function<void(const MpsClient*, const Model::DescribeWatermarkTemplatesRequest&, DescribeWatermarkTemplatesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeWatermarkTemplatesAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeWordSamplesResponse> DescribeWordSamplesOutcome;
                typedef std::future<DescribeWordSamplesOutcome> DescribeWordSamplesOutcomeCallable;
                typedef std::function<void(const MpsClient*, const Model::DescribeWordSamplesRequest&, DescribeWordSamplesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeWordSamplesAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeWorkflowsResponse> DescribeWorkflowsOutcome;
                typedef std::future<DescribeWorkflowsOutcome> DescribeWorkflowsOutcomeCallable;
                typedef std::function<void(const MpsClient*, const Model::DescribeWorkflowsRequest&, DescribeWorkflowsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeWorkflowsAsyncHandler;
                typedef Outcome<Core::Error, Model::DisableScheduleResponse> DisableScheduleOutcome;
                typedef std::future<DisableScheduleOutcome> DisableScheduleOutcomeCallable;
                typedef std::function<void(const MpsClient*, const Model::DisableScheduleRequest&, DisableScheduleOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DisableScheduleAsyncHandler;
                typedef Outcome<Core::Error, Model::DisableWorkflowResponse> DisableWorkflowOutcome;
                typedef std::future<DisableWorkflowOutcome> DisableWorkflowOutcomeCallable;
                typedef std::function<void(const MpsClient*, const Model::DisableWorkflowRequest&, DisableWorkflowOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DisableWorkflowAsyncHandler;
                typedef Outcome<Core::Error, Model::DisassociateSecurityGroupResponse> DisassociateSecurityGroupOutcome;
                typedef std::future<DisassociateSecurityGroupOutcome> DisassociateSecurityGroupOutcomeCallable;
                typedef std::function<void(const MpsClient*, const Model::DisassociateSecurityGroupRequest&, DisassociateSecurityGroupOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DisassociateSecurityGroupAsyncHandler;
                typedef Outcome<Core::Error, Model::EditMediaResponse> EditMediaOutcome;
                typedef std::future<EditMediaOutcome> EditMediaOutcomeCallable;
                typedef std::function<void(const MpsClient*, const Model::EditMediaRequest&, EditMediaOutcome, const std::shared_ptr<const AsyncCallerContext>&)> EditMediaAsyncHandler;
                typedef Outcome<Core::Error, Model::EnableScheduleResponse> EnableScheduleOutcome;
                typedef std::future<EnableScheduleOutcome> EnableScheduleOutcomeCallable;
                typedef std::function<void(const MpsClient*, const Model::EnableScheduleRequest&, EnableScheduleOutcome, const std::shared_ptr<const AsyncCallerContext>&)> EnableScheduleAsyncHandler;
                typedef Outcome<Core::Error, Model::EnableWorkflowResponse> EnableWorkflowOutcome;
                typedef std::future<EnableWorkflowOutcome> EnableWorkflowOutcomeCallable;
                typedef std::function<void(const MpsClient*, const Model::EnableWorkflowRequest&, EnableWorkflowOutcome, const std::shared_ptr<const AsyncCallerContext>&)> EnableWorkflowAsyncHandler;
                typedef Outcome<Core::Error, Model::ExecuteFunctionResponse> ExecuteFunctionOutcome;
                typedef std::future<ExecuteFunctionOutcome> ExecuteFunctionOutcomeCallable;
                typedef std::function<void(const MpsClient*, const Model::ExecuteFunctionRequest&, ExecuteFunctionOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ExecuteFunctionAsyncHandler;
                typedef Outcome<Core::Error, Model::ExtractBlindWatermarkResponse> ExtractBlindWatermarkOutcome;
                typedef std::future<ExtractBlindWatermarkOutcome> ExtractBlindWatermarkOutcomeCallable;
                typedef std::function<void(const MpsClient*, const Model::ExtractBlindWatermarkRequest&, ExtractBlindWatermarkOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ExtractBlindWatermarkAsyncHandler;
                typedef Outcome<Core::Error, Model::ManageTaskResponse> ManageTaskOutcome;
                typedef std::future<ManageTaskOutcome> ManageTaskOutcomeCallable;
                typedef std::function<void(const MpsClient*, const Model::ManageTaskRequest&, ManageTaskOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ManageTaskAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyAIAnalysisTemplateResponse> ModifyAIAnalysisTemplateOutcome;
                typedef std::future<ModifyAIAnalysisTemplateOutcome> ModifyAIAnalysisTemplateOutcomeCallable;
                typedef std::function<void(const MpsClient*, const Model::ModifyAIAnalysisTemplateRequest&, ModifyAIAnalysisTemplateOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyAIAnalysisTemplateAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyAIRecognitionTemplateResponse> ModifyAIRecognitionTemplateOutcome;
                typedef std::future<ModifyAIRecognitionTemplateOutcome> ModifyAIRecognitionTemplateOutcomeCallable;
                typedef std::function<void(const MpsClient*, const Model::ModifyAIRecognitionTemplateRequest&, ModifyAIRecognitionTemplateOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyAIRecognitionTemplateAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyAdaptiveDynamicStreamingTemplateResponse> ModifyAdaptiveDynamicStreamingTemplateOutcome;
                typedef std::future<ModifyAdaptiveDynamicStreamingTemplateOutcome> ModifyAdaptiveDynamicStreamingTemplateOutcomeCallable;
                typedef std::function<void(const MpsClient*, const Model::ModifyAdaptiveDynamicStreamingTemplateRequest&, ModifyAdaptiveDynamicStreamingTemplateOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyAdaptiveDynamicStreamingTemplateAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyAnimatedGraphicsTemplateResponse> ModifyAnimatedGraphicsTemplateOutcome;
                typedef std::future<ModifyAnimatedGraphicsTemplateOutcome> ModifyAnimatedGraphicsTemplateOutcomeCallable;
                typedef std::function<void(const MpsClient*, const Model::ModifyAnimatedGraphicsTemplateRequest&, ModifyAnimatedGraphicsTemplateOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyAnimatedGraphicsTemplateAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyAsrHotwordsResponse> ModifyAsrHotwordsOutcome;
                typedef std::future<ModifyAsrHotwordsOutcome> ModifyAsrHotwordsOutcomeCallable;
                typedef std::function<void(const MpsClient*, const Model::ModifyAsrHotwordsRequest&, ModifyAsrHotwordsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyAsrHotwordsAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyBlindWatermarkTemplateResponse> ModifyBlindWatermarkTemplateOutcome;
                typedef std::future<ModifyBlindWatermarkTemplateOutcome> ModifyBlindWatermarkTemplateOutcomeCallable;
                typedef std::function<void(const MpsClient*, const Model::ModifyBlindWatermarkTemplateRequest&, ModifyBlindWatermarkTemplateOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyBlindWatermarkTemplateAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyContentReviewTemplateResponse> ModifyContentReviewTemplateOutcome;
                typedef std::future<ModifyContentReviewTemplateOutcome> ModifyContentReviewTemplateOutcomeCallable;
                typedef std::function<void(const MpsClient*, const Model::ModifyContentReviewTemplateRequest&, ModifyContentReviewTemplateOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyContentReviewTemplateAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyImageSpriteTemplateResponse> ModifyImageSpriteTemplateOutcome;
                typedef std::future<ModifyImageSpriteTemplateOutcome> ModifyImageSpriteTemplateOutcomeCallable;
                typedef std::function<void(const MpsClient*, const Model::ModifyImageSpriteTemplateRequest&, ModifyImageSpriteTemplateOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyImageSpriteTemplateAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyLiveRecordTemplateResponse> ModifyLiveRecordTemplateOutcome;
                typedef std::future<ModifyLiveRecordTemplateOutcome> ModifyLiveRecordTemplateOutcomeCallable;
                typedef std::function<void(const MpsClient*, const Model::ModifyLiveRecordTemplateRequest&, ModifyLiveRecordTemplateOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyLiveRecordTemplateAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyPersonSampleResponse> ModifyPersonSampleOutcome;
                typedef std::future<ModifyPersonSampleOutcome> ModifyPersonSampleOutcomeCallable;
                typedef std::function<void(const MpsClient*, const Model::ModifyPersonSampleRequest&, ModifyPersonSampleOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyPersonSampleAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyProcessImageTemplateResponse> ModifyProcessImageTemplateOutcome;
                typedef std::future<ModifyProcessImageTemplateOutcome> ModifyProcessImageTemplateOutcomeCallable;
                typedef std::function<void(const MpsClient*, const Model::ModifyProcessImageTemplateRequest&, ModifyProcessImageTemplateOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyProcessImageTemplateAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyQualityControlTemplateResponse> ModifyQualityControlTemplateOutcome;
                typedef std::future<ModifyQualityControlTemplateOutcome> ModifyQualityControlTemplateOutcomeCallable;
                typedef std::function<void(const MpsClient*, const Model::ModifyQualityControlTemplateRequest&, ModifyQualityControlTemplateOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyQualityControlTemplateAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifySampleSnapshotTemplateResponse> ModifySampleSnapshotTemplateOutcome;
                typedef std::future<ModifySampleSnapshotTemplateOutcome> ModifySampleSnapshotTemplateOutcomeCallable;
                typedef std::function<void(const MpsClient*, const Model::ModifySampleSnapshotTemplateRequest&, ModifySampleSnapshotTemplateOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifySampleSnapshotTemplateAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyScheduleResponse> ModifyScheduleOutcome;
                typedef std::future<ModifyScheduleOutcome> ModifyScheduleOutcomeCallable;
                typedef std::function<void(const MpsClient*, const Model::ModifyScheduleRequest&, ModifyScheduleOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyScheduleAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifySmartEraseTemplateResponse> ModifySmartEraseTemplateOutcome;
                typedef std::future<ModifySmartEraseTemplateOutcome> ModifySmartEraseTemplateOutcomeCallable;
                typedef std::function<void(const MpsClient*, const Model::ModifySmartEraseTemplateRequest&, ModifySmartEraseTemplateOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifySmartEraseTemplateAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifySmartSubtitleTemplateResponse> ModifySmartSubtitleTemplateOutcome;
                typedef std::future<ModifySmartSubtitleTemplateOutcome> ModifySmartSubtitleTemplateOutcomeCallable;
                typedef std::function<void(const MpsClient*, const Model::ModifySmartSubtitleTemplateRequest&, ModifySmartSubtitleTemplateOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifySmartSubtitleTemplateAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifySnapshotByTimeOffsetTemplateResponse> ModifySnapshotByTimeOffsetTemplateOutcome;
                typedef std::future<ModifySnapshotByTimeOffsetTemplateOutcome> ModifySnapshotByTimeOffsetTemplateOutcomeCallable;
                typedef std::function<void(const MpsClient*, const Model::ModifySnapshotByTimeOffsetTemplateRequest&, ModifySnapshotByTimeOffsetTemplateOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifySnapshotByTimeOffsetTemplateAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyStreamLinkEventResponse> ModifyStreamLinkEventOutcome;
                typedef std::future<ModifyStreamLinkEventOutcome> ModifyStreamLinkEventOutcomeCallable;
                typedef std::function<void(const MpsClient*, const Model::ModifyStreamLinkEventRequest&, ModifyStreamLinkEventOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyStreamLinkEventAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyStreamLinkFlowResponse> ModifyStreamLinkFlowOutcome;
                typedef std::future<ModifyStreamLinkFlowOutcome> ModifyStreamLinkFlowOutcomeCallable;
                typedef std::function<void(const MpsClient*, const Model::ModifyStreamLinkFlowRequest&, ModifyStreamLinkFlowOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyStreamLinkFlowAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyStreamLinkInputResponse> ModifyStreamLinkInputOutcome;
                typedef std::future<ModifyStreamLinkInputOutcome> ModifyStreamLinkInputOutcomeCallable;
                typedef std::function<void(const MpsClient*, const Model::ModifyStreamLinkInputRequest&, ModifyStreamLinkInputOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyStreamLinkInputAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyStreamLinkOutputInfoResponse> ModifyStreamLinkOutputInfoOutcome;
                typedef std::future<ModifyStreamLinkOutputInfoOutcome> ModifyStreamLinkOutputInfoOutcomeCallable;
                typedef std::function<void(const MpsClient*, const Model::ModifyStreamLinkOutputInfoRequest&, ModifyStreamLinkOutputInfoOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyStreamLinkOutputInfoAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyStreamLinkSecurityGroupResponse> ModifyStreamLinkSecurityGroupOutcome;
                typedef std::future<ModifyStreamLinkSecurityGroupOutcome> ModifyStreamLinkSecurityGroupOutcomeCallable;
                typedef std::function<void(const MpsClient*, const Model::ModifyStreamLinkSecurityGroupRequest&, ModifyStreamLinkSecurityGroupOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyStreamLinkSecurityGroupAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyStreamPackageLinearAssemblyChannelResponse> ModifyStreamPackageLinearAssemblyChannelOutcome;
                typedef std::future<ModifyStreamPackageLinearAssemblyChannelOutcome> ModifyStreamPackageLinearAssemblyChannelOutcomeCallable;
                typedef std::function<void(const MpsClient*, const Model::ModifyStreamPackageLinearAssemblyChannelRequest&, ModifyStreamPackageLinearAssemblyChannelOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyStreamPackageLinearAssemblyChannelAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyStreamPackageLinearAssemblyProgramResponse> ModifyStreamPackageLinearAssemblyProgramOutcome;
                typedef std::future<ModifyStreamPackageLinearAssemblyProgramOutcome> ModifyStreamPackageLinearAssemblyProgramOutcomeCallable;
                typedef std::function<void(const MpsClient*, const Model::ModifyStreamPackageLinearAssemblyProgramRequest&, ModifyStreamPackageLinearAssemblyProgramOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyStreamPackageLinearAssemblyProgramAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyStreamPackageSSAIChannelResponse> ModifyStreamPackageSSAIChannelOutcome;
                typedef std::future<ModifyStreamPackageSSAIChannelOutcome> ModifyStreamPackageSSAIChannelOutcomeCallable;
                typedef std::function<void(const MpsClient*, const Model::ModifyStreamPackageSSAIChannelRequest&, ModifyStreamPackageSSAIChannelOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyStreamPackageSSAIChannelAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyStreamPackageSourceResponse> ModifyStreamPackageSourceOutcome;
                typedef std::future<ModifyStreamPackageSourceOutcome> ModifyStreamPackageSourceOutcomeCallable;
                typedef std::function<void(const MpsClient*, const Model::ModifyStreamPackageSourceRequest&, ModifyStreamPackageSourceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyStreamPackageSourceAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyStreamPackageSourceLocationResponse> ModifyStreamPackageSourceLocationOutcome;
                typedef std::future<ModifyStreamPackageSourceLocationOutcome> ModifyStreamPackageSourceLocationOutcomeCallable;
                typedef std::function<void(const MpsClient*, const Model::ModifyStreamPackageSourceLocationRequest&, ModifyStreamPackageSourceLocationOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyStreamPackageSourceLocationAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifySubtitleEmbedTemplateResponse> ModifySubtitleEmbedTemplateOutcome;
                typedef std::future<ModifySubtitleEmbedTemplateOutcome> ModifySubtitleEmbedTemplateOutcomeCallable;
                typedef std::function<void(const MpsClient*, const Model::ModifySubtitleEmbedTemplateRequest&, ModifySubtitleEmbedTemplateOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifySubtitleEmbedTemplateAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyTranscodeTemplateResponse> ModifyTranscodeTemplateOutcome;
                typedef std::future<ModifyTranscodeTemplateOutcome> ModifyTranscodeTemplateOutcomeCallable;
                typedef std::function<void(const MpsClient*, const Model::ModifyTranscodeTemplateRequest&, ModifyTranscodeTemplateOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyTranscodeTemplateAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyWatermarkTemplateResponse> ModifyWatermarkTemplateOutcome;
                typedef std::future<ModifyWatermarkTemplateOutcome> ModifyWatermarkTemplateOutcomeCallable;
                typedef std::function<void(const MpsClient*, const Model::ModifyWatermarkTemplateRequest&, ModifyWatermarkTemplateOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyWatermarkTemplateAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyWordSampleResponse> ModifyWordSampleOutcome;
                typedef std::future<ModifyWordSampleOutcome> ModifyWordSampleOutcomeCallable;
                typedef std::function<void(const MpsClient*, const Model::ModifyWordSampleRequest&, ModifyWordSampleOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyWordSampleAsyncHandler;
                typedef Outcome<Core::Error, Model::ParseLiveStreamProcessNotificationResponse> ParseLiveStreamProcessNotificationOutcome;
                typedef std::future<ParseLiveStreamProcessNotificationOutcome> ParseLiveStreamProcessNotificationOutcomeCallable;
                typedef std::function<void(const MpsClient*, const Model::ParseLiveStreamProcessNotificationRequest&, ParseLiveStreamProcessNotificationOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ParseLiveStreamProcessNotificationAsyncHandler;
                typedef Outcome<Core::Error, Model::ParseNotificationResponse> ParseNotificationOutcome;
                typedef std::future<ParseNotificationOutcome> ParseNotificationOutcomeCallable;
                typedef std::function<void(const MpsClient*, const Model::ParseNotificationRequest&, ParseNotificationOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ParseNotificationAsyncHandler;
                typedef Outcome<Core::Error, Model::ProcessImageResponse> ProcessImageOutcome;
                typedef std::future<ProcessImageOutcome> ProcessImageOutcomeCallable;
                typedef std::function<void(const MpsClient*, const Model::ProcessImageRequest&, ProcessImageOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ProcessImageAsyncHandler;
                typedef Outcome<Core::Error, Model::ProcessLiveStreamResponse> ProcessLiveStreamOutcome;
                typedef std::future<ProcessLiveStreamOutcome> ProcessLiveStreamOutcomeCallable;
                typedef std::function<void(const MpsClient*, const Model::ProcessLiveStreamRequest&, ProcessLiveStreamOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ProcessLiveStreamAsyncHandler;
                typedef Outcome<Core::Error, Model::ProcessMediaResponse> ProcessMediaOutcome;
                typedef std::future<ProcessMediaOutcome> ProcessMediaOutcomeCallable;
                typedef std::function<void(const MpsClient*, const Model::ProcessMediaRequest&, ProcessMediaOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ProcessMediaAsyncHandler;
                typedef Outcome<Core::Error, Model::RecognizeAudioResponse> RecognizeAudioOutcome;
                typedef std::future<RecognizeAudioOutcome> RecognizeAudioOutcomeCallable;
                typedef std::function<void(const MpsClient*, const Model::RecognizeAudioRequest&, RecognizeAudioOutcome, const std::shared_ptr<const AsyncCallerContext>&)> RecognizeAudioAsyncHandler;
                typedef Outcome<Core::Error, Model::RecognizeMediaForZhiXueResponse> RecognizeMediaForZhiXueOutcome;
                typedef std::future<RecognizeMediaForZhiXueOutcome> RecognizeMediaForZhiXueOutcomeCallable;
                typedef std::function<void(const MpsClient*, const Model::RecognizeMediaForZhiXueRequest&, RecognizeMediaForZhiXueOutcome, const std::shared_ptr<const AsyncCallerContext>&)> RecognizeMediaForZhiXueAsyncHandler;
                typedef Outcome<Core::Error, Model::ResetWorkflowResponse> ResetWorkflowOutcome;
                typedef std::future<ResetWorkflowOutcome> ResetWorkflowOutcomeCallable;
                typedef std::function<void(const MpsClient*, const Model::ResetWorkflowRequest&, ResetWorkflowOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ResetWorkflowAsyncHandler;
                typedef Outcome<Core::Error, Model::StartStreamLinkFlowResponse> StartStreamLinkFlowOutcome;
                typedef std::future<StartStreamLinkFlowOutcome> StartStreamLinkFlowOutcomeCallable;
                typedef std::function<void(const MpsClient*, const Model::StartStreamLinkFlowRequest&, StartStreamLinkFlowOutcome, const std::shared_ptr<const AsyncCallerContext>&)> StartStreamLinkFlowAsyncHandler;
                typedef Outcome<Core::Error, Model::StartStreamPackageLinearAssemblyChannelResponse> StartStreamPackageLinearAssemblyChannelOutcome;
                typedef std::future<StartStreamPackageLinearAssemblyChannelOutcome> StartStreamPackageLinearAssemblyChannelOutcomeCallable;
                typedef std::function<void(const MpsClient*, const Model::StartStreamPackageLinearAssemblyChannelRequest&, StartStreamPackageLinearAssemblyChannelOutcome, const std::shared_ptr<const AsyncCallerContext>&)> StartStreamPackageLinearAssemblyChannelAsyncHandler;
                typedef Outcome<Core::Error, Model::StopStreamLinkFlowResponse> StopStreamLinkFlowOutcome;
                typedef std::future<StopStreamLinkFlowOutcome> StopStreamLinkFlowOutcomeCallable;
                typedef std::function<void(const MpsClient*, const Model::StopStreamLinkFlowRequest&, StopStreamLinkFlowOutcome, const std::shared_ptr<const AsyncCallerContext>&)> StopStreamLinkFlowAsyncHandler;
                typedef Outcome<Core::Error, Model::StopStreamPackageLinearAssemblyChannelResponse> StopStreamPackageLinearAssemblyChannelOutcome;
                typedef std::future<StopStreamPackageLinearAssemblyChannelOutcome> StopStreamPackageLinearAssemblyChannelOutcomeCallable;
                typedef std::function<void(const MpsClient*, const Model::StopStreamPackageLinearAssemblyChannelRequest&, StopStreamPackageLinearAssemblyChannelOutcome, const std::shared_ptr<const AsyncCallerContext>&)> StopStreamPackageLinearAssemblyChannelAsyncHandler;
                typedef Outcome<Core::Error, Model::SyncDubbingResponse> SyncDubbingOutcome;
                typedef std::future<SyncDubbingOutcome> SyncDubbingOutcomeCallable;
                typedef std::function<void(const MpsClient*, const Model::SyncDubbingRequest&, SyncDubbingOutcome, const std::shared_ptr<const AsyncCallerContext>&)> SyncDubbingAsyncHandler;
                typedef Outcome<Core::Error, Model::TextTranslationResponse> TextTranslationOutcome;
                typedef std::future<TextTranslationOutcome> TextTranslationOutcomeCallable;
                typedef std::function<void(const MpsClient*, const Model::TextTranslationRequest&, TextTranslationOutcome, const std::shared_ptr<const AsyncCallerContext>&)> TextTranslationAsyncHandler;
                typedef Outcome<Core::Error, Model::WithdrawsWatermarkResponse> WithdrawsWatermarkOutcome;
                typedef std::future<WithdrawsWatermarkOutcome> WithdrawsWatermarkOutcomeCallable;
                typedef std::function<void(const MpsClient*, const Model::WithdrawsWatermarkRequest&, WithdrawsWatermarkOutcome, const std::shared_ptr<const AsyncCallerContext>&)> WithdrawsWatermarkAsyncHandler;



                /**
                 *开通SSAI
                 * @param req ActivateSSAIRequest
                 * @return ActivateSSAIOutcome
                 */
                ActivateSSAIOutcome ActivateSSAI(const Model::ActivateSSAIRequest &request);
                void ActivateSSAIAsync(const Model::ActivateSSAIRequest& request, const ActivateSSAIAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ActivateSSAIOutcomeCallable ActivateSSAICallable(const Model::ActivateSSAIRequest& request);

                /**
                 *创建媒体封装用户。
                 * @param req ActivateStreamPackageRequest
                 * @return ActivateStreamPackageOutcome
                 */
                ActivateStreamPackageOutcome ActivateStreamPackage(const Model::ActivateStreamPackageRequest &request);
                void ActivateStreamPackageAsync(const Model::ActivateStreamPackageRequest& request, const ActivateStreamPackageAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ActivateStreamPackageOutcomeCallable ActivateStreamPackageCallable(const Model::ActivateStreamPackageRequest& request);

                /**
                 *批量删除媒体传输流。
                 * @param req BatchDeleteStreamLinkFlowRequest
                 * @return BatchDeleteStreamLinkFlowOutcome
                 */
                BatchDeleteStreamLinkFlowOutcome BatchDeleteStreamLinkFlow(const Model::BatchDeleteStreamLinkFlowRequest &request);
                void BatchDeleteStreamLinkFlowAsync(const Model::BatchDeleteStreamLinkFlowRequest& request, const BatchDeleteStreamLinkFlowAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                BatchDeleteStreamLinkFlowOutcomeCallable BatchDeleteStreamLinkFlowCallable(const Model::BatchDeleteStreamLinkFlowRequest& request);

                /**
                 *对 URL视频链接批量发起处理任务，功能包括：
智能字幕（语音全文、语音热词、语音翻译）
                 * @param req BatchProcessMediaRequest
                 * @return BatchProcessMediaOutcome
                 */
                BatchProcessMediaOutcome BatchProcessMedia(const Model::BatchProcessMediaRequest &request);
                void BatchProcessMediaAsync(const Model::BatchProcessMediaRequest& request, const BatchProcessMediaAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                BatchProcessMediaOutcomeCallable BatchProcessMediaCallable(const Model::BatchProcessMediaRequest& request);

                /**
                 *批量启动媒体传输流。
                 * @param req BatchStartStreamLinkFlowRequest
                 * @return BatchStartStreamLinkFlowOutcome
                 */
                BatchStartStreamLinkFlowOutcome BatchStartStreamLinkFlow(const Model::BatchStartStreamLinkFlowRequest &request);
                void BatchStartStreamLinkFlowAsync(const Model::BatchStartStreamLinkFlowRequest& request, const BatchStartStreamLinkFlowAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                BatchStartStreamLinkFlowOutcomeCallable BatchStartStreamLinkFlowCallable(const Model::BatchStartStreamLinkFlowRequest& request);

                /**
                 *批量停止媒体传输流。
                 * @param req BatchStopStreamLinkFlowRequest
                 * @return BatchStopStreamLinkFlowOutcome
                 */
                BatchStopStreamLinkFlowOutcome BatchStopStreamLinkFlow(const Model::BatchStopStreamLinkFlowRequest &request);
                void BatchStopStreamLinkFlowAsync(const Model::BatchStopStreamLinkFlowRequest& request, const BatchStopStreamLinkFlowAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                BatchStopStreamLinkFlowOutcomeCallable BatchStopStreamLinkFlowCallable(const Model::BatchStopStreamLinkFlowRequest& request);

                /**
                 *创建用户自定义内容分析模板，数量上限：50。
                 * @param req CreateAIAnalysisTemplateRequest
                 * @return CreateAIAnalysisTemplateOutcome
                 */
                CreateAIAnalysisTemplateOutcome CreateAIAnalysisTemplate(const Model::CreateAIAnalysisTemplateRequest &request);
                void CreateAIAnalysisTemplateAsync(const Model::CreateAIAnalysisTemplateRequest& request, const CreateAIAnalysisTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateAIAnalysisTemplateOutcomeCallable CreateAIAnalysisTemplateCallable(const Model::CreateAIAnalysisTemplateRequest& request);

                /**
                 *创建用户自定义内容识别模板，数量上限：50。
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
                 *调用该接口用于创建AIGC生图片任务。
                 * @param req CreateAigcImageTaskRequest
                 * @return CreateAigcImageTaskOutcome
                 */
                CreateAigcImageTaskOutcome CreateAigcImageTask(const Model::CreateAigcImageTaskRequest &request);
                void CreateAigcImageTaskAsync(const Model::CreateAigcImageTaskRequest& request, const CreateAigcImageTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateAigcImageTaskOutcomeCallable CreateAigcImageTaskCallable(const Model::CreateAigcImageTaskRequest& request);

                /**
                 *调用该接口，用于创建AI生视频任务。
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
                 *智能字幕新建热词库接口
                 * @param req CreateAsrHotwordsRequest
                 * @return CreateAsrHotwordsOutcome
                 */
                CreateAsrHotwordsOutcome CreateAsrHotwords(const Model::CreateAsrHotwordsRequest &request);
                void CreateAsrHotwordsAsync(const Model::CreateAsrHotwordsRequest& request, const CreateAsrHotwordsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateAsrHotwordsOutcomeCallable CreateAsrHotwordsCallable(const Model::CreateAsrHotwordsRequest& request);

                /**
                 *创建用户自定义数字水印模板。
                 * @param req CreateBlindWatermarkTemplateRequest
                 * @return CreateBlindWatermarkTemplateOutcome
                 */
                CreateBlindWatermarkTemplateOutcome CreateBlindWatermarkTemplate(const Model::CreateBlindWatermarkTemplateRequest &request);
                void CreateBlindWatermarkTemplateAsync(const Model::CreateBlindWatermarkTemplateRequest& request, const CreateBlindWatermarkTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateBlindWatermarkTemplateOutcomeCallable CreateBlindWatermarkTemplateCallable(const Model::CreateBlindWatermarkTemplateRequest& request);

                /**
                 *创建用户自定义内容审核模板，数量上限：50。
                 * @param req CreateContentReviewTemplateRequest
                 * @return CreateContentReviewTemplateOutcome
                 */
                CreateContentReviewTemplateOutcome CreateContentReviewTemplate(const Model::CreateContentReviewTemplateRequest &request);
                void CreateContentReviewTemplateAsync(const Model::CreateContentReviewTemplateRequest& request, const CreateContentReviewTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateContentReviewTemplateOutcomeCallable CreateContentReviewTemplateCallable(const Model::CreateContentReviewTemplateRequest& request);

                /**
                 *创建用户自定义雪碧图模板，数量上限：16。
                 * @param req CreateImageSpriteTemplateRequest
                 * @return CreateImageSpriteTemplateOutcome
                 */
                CreateImageSpriteTemplateOutcome CreateImageSpriteTemplate(const Model::CreateImageSpriteTemplateRequest &request);
                void CreateImageSpriteTemplateAsync(const Model::CreateImageSpriteTemplateRequest& request, const CreateImageSpriteTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateImageSpriteTemplateOutcomeCallable CreateImageSpriteTemplateCallable(const Model::CreateImageSpriteTemplateRequest& request);

                /**
                 *创建直播录制模板
                 * @param req CreateLiveRecordTemplateRequest
                 * @return CreateLiveRecordTemplateOutcome
                 */
                CreateLiveRecordTemplateOutcome CreateLiveRecordTemplate(const Model::CreateLiveRecordTemplateRequest &request);
                void CreateLiveRecordTemplateAsync(const Model::CreateLiveRecordTemplateRequest& request, const CreateLiveRecordTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateLiveRecordTemplateOutcomeCallable CreateLiveRecordTemplateCallable(const Model::CreateLiveRecordTemplateRequest& request);

                /**
                 *发起视频评测任务，功能包括：

1. 对一个原视频和多个转码后的视频进行评分。
2. 计算不同转码方式的 BD-Rate。
                 * @param req CreateMediaEvaluationRequest
                 * @return CreateMediaEvaluationOutcome
                 */
                CreateMediaEvaluationOutcome CreateMediaEvaluation(const Model::CreateMediaEvaluationRequest &request);
                void CreateMediaEvaluationAsync(const Model::CreateMediaEvaluationRequest& request, const CreateMediaEvaluationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateMediaEvaluationOutcomeCallable CreateMediaEvaluationCallable(const Model::CreateMediaEvaluationRequest& request);

                /**
                 *该接口用于创建素材样本，用于通过五官定位等技术，进行内容识别、内容不适宜等视频处理。
                 * @param req CreatePersonSampleRequest
                 * @return CreatePersonSampleOutcome
                 */
                CreatePersonSampleOutcome CreatePersonSample(const Model::CreatePersonSampleRequest &request);
                void CreatePersonSampleAsync(const Model::CreatePersonSampleRequest& request, const CreatePersonSampleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreatePersonSampleOutcomeCallable CreatePersonSampleCallable(const Model::CreatePersonSampleRequest& request);

                /**
                 *创建图片处理模板
                 * @param req CreateProcessImageTemplateRequest
                 * @return CreateProcessImageTemplateOutcome
                 */
                CreateProcessImageTemplateOutcome CreateProcessImageTemplate(const Model::CreateProcessImageTemplateRequest &request);
                void CreateProcessImageTemplateAsync(const Model::CreateProcessImageTemplateRequest& request, const CreateProcessImageTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateProcessImageTemplateOutcomeCallable CreateProcessImageTemplateCallable(const Model::CreateProcessImageTemplateRequest& request);

                /**
                 *创建媒体质检模板，数量上限：50。
                 * @param req CreateQualityControlTemplateRequest
                 * @return CreateQualityControlTemplateOutcome
                 */
                CreateQualityControlTemplateOutcome CreateQualityControlTemplate(const Model::CreateQualityControlTemplateRequest &request);
                void CreateQualityControlTemplateAsync(const Model::CreateQualityControlTemplateRequest& request, const CreateQualityControlTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateQualityControlTemplateOutcomeCallable CreateQualityControlTemplateCallable(const Model::CreateQualityControlTemplateRequest& request);

                /**
                 *创建用户自定义采样截图模板，数量上限：16。
                 * @param req CreateSampleSnapshotTemplateRequest
                 * @return CreateSampleSnapshotTemplateOutcome
                 */
                CreateSampleSnapshotTemplateOutcome CreateSampleSnapshotTemplate(const Model::CreateSampleSnapshotTemplateRequest &request);
                void CreateSampleSnapshotTemplateAsync(const Model::CreateSampleSnapshotTemplateRequest& request, const CreateSampleSnapshotTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateSampleSnapshotTemplateOutcomeCallable CreateSampleSnapshotTemplateCallable(const Model::CreateSampleSnapshotTemplateRequest& request);

                /**
                 *对 COS 中指定 Bucket 的目录下上传的媒体文件，设置处理规则，包括：
1. 视频转码（带水印）；
2. 视频转动图；
3. 对视频按指定时间点截图；
4. 对视频采样截图；
5. 对视频截图雪碧图；
6. 对视频转自适应码流；
7. 智能内容审核（鉴黄、敏感信息检测）；
8. 智能内容分析（标签、分类、封面、按帧标签）；
9. 智能内容识别（人脸、文本全文、文本关键词、语音全文、语音关键词）。
10. 媒体质检（直播流格式诊断、音画内容检测（抖动、模糊、低光照、过曝光、黑边、白边、黑屏、白屏、花屏、噪点、马赛克、二维码等）、无参考打分）
11. 智能字幕（语音全文、语音热词、语音翻译）
12. 智能擦除（去水印、去字幕、隐私保护）；

注意：创建编排成功后是禁用状态，需要手动启用。
                 * @param req CreateScheduleRequest
                 * @return CreateScheduleOutcome
                 */
                CreateScheduleOutcome CreateSchedule(const Model::CreateScheduleRequest &request);
                void CreateScheduleAsync(const Model::CreateScheduleRequest& request, const CreateScheduleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateScheduleOutcomeCallable CreateScheduleCallable(const Model::CreateScheduleRequest& request);

                /**
                 *创建自定义智能擦除模板
                 * @param req CreateSmartEraseTemplateRequest
                 * @return CreateSmartEraseTemplateOutcome
                 */
                CreateSmartEraseTemplateOutcome CreateSmartEraseTemplate(const Model::CreateSmartEraseTemplateRequest &request);
                void CreateSmartEraseTemplateAsync(const Model::CreateSmartEraseTemplateRequest& request, const CreateSmartEraseTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateSmartEraseTemplateOutcomeCallable CreateSmartEraseTemplateCallable(const Model::CreateSmartEraseTemplateRequest& request);

                /**
                 *创建自定义智能字幕模板
                 * @param req CreateSmartSubtitleTemplateRequest
                 * @return CreateSmartSubtitleTemplateOutcome
                 */
                CreateSmartSubtitleTemplateOutcome CreateSmartSubtitleTemplate(const Model::CreateSmartSubtitleTemplateRequest &request);
                void CreateSmartSubtitleTemplateAsync(const Model::CreateSmartSubtitleTemplateRequest& request, const CreateSmartSubtitleTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateSmartSubtitleTemplateOutcomeCallable CreateSmartSubtitleTemplateCallable(const Model::CreateSmartSubtitleTemplateRequest& request);

                /**
                 *创建用户自定义指定时间点截图模板，数量上限：16。
                 * @param req CreateSnapshotByTimeOffsetTemplateRequest
                 * @return CreateSnapshotByTimeOffsetTemplateOutcome
                 */
                CreateSnapshotByTimeOffsetTemplateOutcome CreateSnapshotByTimeOffsetTemplate(const Model::CreateSnapshotByTimeOffsetTemplateRequest &request);
                void CreateSnapshotByTimeOffsetTemplateAsync(const Model::CreateSnapshotByTimeOffsetTemplateRequest& request, const CreateSnapshotByTimeOffsetTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateSnapshotByTimeOffsetTemplateOutcomeCallable CreateSnapshotByTimeOffsetTemplateCallable(const Model::CreateSnapshotByTimeOffsetTemplateRequest& request);

                /**
                 *创建媒体传输的事件Event。
                 * @param req CreateStreamLinkEventRequest
                 * @return CreateStreamLinkEventOutcome
                 */
                CreateStreamLinkEventOutcome CreateStreamLinkEvent(const Model::CreateStreamLinkEventRequest &request);
                void CreateStreamLinkEventAsync(const Model::CreateStreamLinkEventRequest& request, const CreateStreamLinkEventAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateStreamLinkEventOutcomeCallable CreateStreamLinkEventCallable(const Model::CreateStreamLinkEventRequest& request);

                /**
                 *创建媒体传输的传输流配置。
                 * @param req CreateStreamLinkFlowRequest
                 * @return CreateStreamLinkFlowOutcome
                 */
                CreateStreamLinkFlowOutcome CreateStreamLinkFlow(const Model::CreateStreamLinkFlowRequest &request);
                void CreateStreamLinkFlowAsync(const Model::CreateStreamLinkFlowRequest& request, const CreateStreamLinkFlowAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateStreamLinkFlowOutcomeCallable CreateStreamLinkFlowCallable(const Model::CreateStreamLinkFlowRequest& request);

                /**
                 *创建媒体传输的输入配置。
                 * @param req CreateStreamLinkInputRequest
                 * @return CreateStreamLinkInputOutcome
                 */
                CreateStreamLinkInputOutcome CreateStreamLinkInput(const Model::CreateStreamLinkInputRequest &request);
                void CreateStreamLinkInputAsync(const Model::CreateStreamLinkInputRequest& request, const CreateStreamLinkInputAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateStreamLinkInputOutcomeCallable CreateStreamLinkInputCallable(const Model::CreateStreamLinkInputRequest& request);

                /**
                 *创建媒体传输流的输出信息。
                 * @param req CreateStreamLinkOutputInfoRequest
                 * @return CreateStreamLinkOutputInfoOutcome
                 */
                CreateStreamLinkOutputInfoOutcome CreateStreamLinkOutputInfo(const Model::CreateStreamLinkOutputInfoRequest &request);
                void CreateStreamLinkOutputInfoAsync(const Model::CreateStreamLinkOutputInfoRequest& request, const CreateStreamLinkOutputInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateStreamLinkOutputInfoOutcomeCallable CreateStreamLinkOutputInfoCallable(const Model::CreateStreamLinkOutputInfoRequest& request);

                /**
                 *创建安全组，数量限制5个。
                 * @param req CreateStreamLinkSecurityGroupRequest
                 * @return CreateStreamLinkSecurityGroupOutcome
                 */
                CreateStreamLinkSecurityGroupOutcome CreateStreamLinkSecurityGroup(const Model::CreateStreamLinkSecurityGroupRequest &request);
                void CreateStreamLinkSecurityGroupAsync(const Model::CreateStreamLinkSecurityGroupRequest& request, const CreateStreamLinkSecurityGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateStreamLinkSecurityGroupOutcomeCallable CreateStreamLinkSecurityGroupCallable(const Model::CreateStreamLinkSecurityGroupRequest& request);

                /**
                 *创建媒体包装频道。
                 * @param req CreateStreamPackageLinearAssemblyChannelRequest
                 * @return CreateStreamPackageLinearAssemblyChannelOutcome
                 */
                CreateStreamPackageLinearAssemblyChannelOutcome CreateStreamPackageLinearAssemblyChannel(const Model::CreateStreamPackageLinearAssemblyChannelRequest &request);
                void CreateStreamPackageLinearAssemblyChannelAsync(const Model::CreateStreamPackageLinearAssemblyChannelRequest& request, const CreateStreamPackageLinearAssemblyChannelAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateStreamPackageLinearAssemblyChannelOutcomeCallable CreateStreamPackageLinearAssemblyChannelCallable(const Model::CreateStreamPackageLinearAssemblyChannelRequest& request);

                /**
                 *创建线性组装Program。
                 * @param req CreateStreamPackageLinearAssemblyProgramRequest
                 * @return CreateStreamPackageLinearAssemblyProgramOutcome
                 */
                CreateStreamPackageLinearAssemblyProgramOutcome CreateStreamPackageLinearAssemblyProgram(const Model::CreateStreamPackageLinearAssemblyProgramRequest &request);
                void CreateStreamPackageLinearAssemblyProgramAsync(const Model::CreateStreamPackageLinearAssemblyProgramRequest& request, const CreateStreamPackageLinearAssemblyProgramAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateStreamPackageLinearAssemblyProgramOutcomeCallable CreateStreamPackageLinearAssemblyProgramCallable(const Model::CreateStreamPackageLinearAssemblyProgramRequest& request);

                /**
                 *创建SSAI广告插入配置。
                 * @param req CreateStreamPackageSSAIChannelRequest
                 * @return CreateStreamPackageSSAIChannelOutcome
                 */
                CreateStreamPackageSSAIChannelOutcome CreateStreamPackageSSAIChannel(const Model::CreateStreamPackageSSAIChannelRequest &request);
                void CreateStreamPackageSSAIChannelAsync(const Model::CreateStreamPackageSSAIChannelRequest& request, const CreateStreamPackageSSAIChannelAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateStreamPackageSSAIChannelOutcomeCallable CreateStreamPackageSSAIChannelCallable(const Model::CreateStreamPackageSSAIChannelRequest& request);

                /**
                 *创建媒体包装频道。
                 * @param req CreateStreamPackageSourceRequest
                 * @return CreateStreamPackageSourceOutcome
                 */
                CreateStreamPackageSourceOutcome CreateStreamPackageSource(const Model::CreateStreamPackageSourceRequest &request);
                void CreateStreamPackageSourceAsync(const Model::CreateStreamPackageSourceRequest& request, const CreateStreamPackageSourceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateStreamPackageSourceOutcomeCallable CreateStreamPackageSourceCallable(const Model::CreateStreamPackageSourceRequest& request);

                /**
                 *创建媒体包装频道。
                 * @param req CreateStreamPackageSourceLocationRequest
                 * @return CreateStreamPackageSourceLocationOutcome
                 */
                CreateStreamPackageSourceLocationOutcome CreateStreamPackageSourceLocation(const Model::CreateStreamPackageSourceLocationRequest &request);
                void CreateStreamPackageSourceLocationAsync(const Model::CreateStreamPackageSourceLocationRequest& request, const CreateStreamPackageSourceLocationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateStreamPackageSourceLocationOutcomeCallable CreateStreamPackageSourceLocationCallable(const Model::CreateStreamPackageSourceLocationRequest& request);

                /**
                 *创建自定义字幕压制模板
                 * @param req CreateSubtitleEmbedTemplateRequest
                 * @return CreateSubtitleEmbedTemplateOutcome
                 */
                CreateSubtitleEmbedTemplateOutcome CreateSubtitleEmbedTemplate(const Model::CreateSubtitleEmbedTemplateRequest &request);
                void CreateSubtitleEmbedTemplateAsync(const Model::CreateSubtitleEmbedTemplateRequest& request, const CreateSubtitleEmbedTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateSubtitleEmbedTemplateOutcomeCallable CreateSubtitleEmbedTemplateCallable(const Model::CreateSubtitleEmbedTemplateRequest& request);

                /**
                 *创建用户自定义转码模板，数量上限：1000
                 * @param req CreateTranscodeTemplateRequest
                 * @return CreateTranscodeTemplateOutcome
                 */
                CreateTranscodeTemplateOutcome CreateTranscodeTemplate(const Model::CreateTranscodeTemplateRequest &request);
                void CreateTranscodeTemplateAsync(const Model::CreateTranscodeTemplateRequest& request, const CreateTranscodeTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateTranscodeTemplateOutcomeCallable CreateTranscodeTemplateCallable(const Model::CreateTranscodeTemplateRequest& request);

                /**
                 *对URL链接或COS中的视频发起入库任务。
可选在任务完成后向回调方发送任务完成状态信息。
                 * @param req CreateVideoDatabaseEntryTaskRequest
                 * @return CreateVideoDatabaseEntryTaskOutcome
                 */
                CreateVideoDatabaseEntryTaskOutcome CreateVideoDatabaseEntryTask(const Model::CreateVideoDatabaseEntryTaskRequest &request);
                void CreateVideoDatabaseEntryTaskAsync(const Model::CreateVideoDatabaseEntryTaskRequest& request, const CreateVideoDatabaseEntryTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateVideoDatabaseEntryTaskOutcomeCallable CreateVideoDatabaseEntryTaskCallable(const Model::CreateVideoDatabaseEntryTaskRequest& request);

                /**
                 *使用检索值检索库中最接近检索值的若干视频。
                 * @param req CreateVideoSearchTaskRequest
                 * @return CreateVideoSearchTaskOutcome
                 */
                CreateVideoSearchTaskOutcome CreateVideoSearchTask(const Model::CreateVideoSearchTaskRequest &request);
                void CreateVideoSearchTaskAsync(const Model::CreateVideoSearchTaskRequest& request, const CreateVideoSearchTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateVideoSearchTaskOutcomeCallable CreateVideoSearchTaskCallable(const Model::CreateVideoSearchTaskRequest& request);

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
                 *对 COS 中指定 Bucket 的目录下上传的媒体文件，设置处理规则，包括：
1. 视频转码（带水印）；
2. 视频转动图；
3. 对视频按指定时间点截图；
4. 对视频采样截图；
5. 对视频截图雪碧图；
6. 对视频转自适应码流；
7. 智能内容审核（鉴黄、敏感信息检测）；
8. 智能内容分析（标签、分类、封面、按帧标签）；
9. 智能内容识别（人脸、文本全文、文本关键词、语音全文、语音关键词）。

注意：创建工作流成功后是禁用状态，需要手动启用。
                 * @param req CreateWorkflowRequest
                 * @return CreateWorkflowOutcome
                 */
                CreateWorkflowOutcome CreateWorkflow(const Model::CreateWorkflowRequest &request);
                void CreateWorkflowAsync(const Model::CreateWorkflowRequest& request, const CreateWorkflowAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateWorkflowOutcomeCallable CreateWorkflowCallable(const Model::CreateWorkflowRequest& request);

                /**
                 *删除用户自定义内容分析模板。

注意：模板 ID 为 10000 以下的为系统预置模板，不允许删除。
                 * @param req DeleteAIAnalysisTemplateRequest
                 * @return DeleteAIAnalysisTemplateOutcome
                 */
                DeleteAIAnalysisTemplateOutcome DeleteAIAnalysisTemplate(const Model::DeleteAIAnalysisTemplateRequest &request);
                void DeleteAIAnalysisTemplateAsync(const Model::DeleteAIAnalysisTemplateRequest& request, const DeleteAIAnalysisTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteAIAnalysisTemplateOutcomeCallable DeleteAIAnalysisTemplateCallable(const Model::DeleteAIAnalysisTemplateRequest& request);

                /**
                 *删除用户自定义内容识别模板。
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
                 *删除用户自定义转动图模板。
                 * @param req DeleteAnimatedGraphicsTemplateRequest
                 * @return DeleteAnimatedGraphicsTemplateOutcome
                 */
                DeleteAnimatedGraphicsTemplateOutcome DeleteAnimatedGraphicsTemplate(const Model::DeleteAnimatedGraphicsTemplateRequest &request);
                void DeleteAnimatedGraphicsTemplateAsync(const Model::DeleteAnimatedGraphicsTemplateRequest& request, const DeleteAnimatedGraphicsTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteAnimatedGraphicsTemplateOutcomeCallable DeleteAnimatedGraphicsTemplateCallable(const Model::DeleteAnimatedGraphicsTemplateRequest& request);

                /**
                 *删除智能字幕热词库
                 * @param req DeleteAsrHotwordsRequest
                 * @return DeleteAsrHotwordsOutcome
                 */
                DeleteAsrHotwordsOutcome DeleteAsrHotwords(const Model::DeleteAsrHotwordsRequest &request);
                void DeleteAsrHotwordsAsync(const Model::DeleteAsrHotwordsRequest& request, const DeleteAsrHotwordsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteAsrHotwordsOutcomeCallable DeleteAsrHotwordsCallable(const Model::DeleteAsrHotwordsRequest& request);

                /**
                 *删除用户自定义数字水印模板。
                 * @param req DeleteBlindWatermarkTemplateRequest
                 * @return DeleteBlindWatermarkTemplateOutcome
                 */
                DeleteBlindWatermarkTemplateOutcome DeleteBlindWatermarkTemplate(const Model::DeleteBlindWatermarkTemplateRequest &request);
                void DeleteBlindWatermarkTemplateAsync(const Model::DeleteBlindWatermarkTemplateRequest& request, const DeleteBlindWatermarkTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteBlindWatermarkTemplateOutcomeCallable DeleteBlindWatermarkTemplateCallable(const Model::DeleteBlindWatermarkTemplateRequest& request);

                /**
                 *删除用户自定义内容审核模板。
                 * @param req DeleteContentReviewTemplateRequest
                 * @return DeleteContentReviewTemplateOutcome
                 */
                DeleteContentReviewTemplateOutcome DeleteContentReviewTemplate(const Model::DeleteContentReviewTemplateRequest &request);
                void DeleteContentReviewTemplateAsync(const Model::DeleteContentReviewTemplateRequest& request, const DeleteContentReviewTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteContentReviewTemplateOutcomeCallable DeleteContentReviewTemplateCallable(const Model::DeleteContentReviewTemplateRequest& request);

                /**
                 *删除雪碧图模板。
                 * @param req DeleteImageSpriteTemplateRequest
                 * @return DeleteImageSpriteTemplateOutcome
                 */
                DeleteImageSpriteTemplateOutcome DeleteImageSpriteTemplate(const Model::DeleteImageSpriteTemplateRequest &request);
                void DeleteImageSpriteTemplateAsync(const Model::DeleteImageSpriteTemplateRequest& request, const DeleteImageSpriteTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteImageSpriteTemplateOutcomeCallable DeleteImageSpriteTemplateCallable(const Model::DeleteImageSpriteTemplateRequest& request);

                /**
                 *删除直播录制模板
                 * @param req DeleteLiveRecordTemplateRequest
                 * @return DeleteLiveRecordTemplateOutcome
                 */
                DeleteLiveRecordTemplateOutcome DeleteLiveRecordTemplate(const Model::DeleteLiveRecordTemplateRequest &request);
                void DeleteLiveRecordTemplateAsync(const Model::DeleteLiveRecordTemplateRequest& request, const DeleteLiveRecordTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteLiveRecordTemplateOutcomeCallable DeleteLiveRecordTemplateCallable(const Model::DeleteLiveRecordTemplateRequest& request);

                /**
                 *该接口用于根据素材 ID，删除素材样本。
                 * @param req DeletePersonSampleRequest
                 * @return DeletePersonSampleOutcome
                 */
                DeletePersonSampleOutcome DeletePersonSample(const Model::DeletePersonSampleRequest &request);
                void DeletePersonSampleAsync(const Model::DeletePersonSampleRequest& request, const DeletePersonSampleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeletePersonSampleOutcomeCallable DeletePersonSampleCallable(const Model::DeletePersonSampleRequest& request);

                /**
                 *删除图片处理模板
                 * @param req DeleteProcessImageTemplateRequest
                 * @return DeleteProcessImageTemplateOutcome
                 */
                DeleteProcessImageTemplateOutcome DeleteProcessImageTemplate(const Model::DeleteProcessImageTemplateRequest &request);
                void DeleteProcessImageTemplateAsync(const Model::DeleteProcessImageTemplateRequest& request, const DeleteProcessImageTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteProcessImageTemplateOutcomeCallable DeleteProcessImageTemplateCallable(const Model::DeleteProcessImageTemplateRequest& request);

                /**
                 *删除媒体质检模板
                 * @param req DeleteQualityControlTemplateRequest
                 * @return DeleteQualityControlTemplateOutcome
                 */
                DeleteQualityControlTemplateOutcome DeleteQualityControlTemplate(const Model::DeleteQualityControlTemplateRequest &request);
                void DeleteQualityControlTemplateAsync(const Model::DeleteQualityControlTemplateRequest& request, const DeleteQualityControlTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteQualityControlTemplateOutcomeCallable DeleteQualityControlTemplateCallable(const Model::DeleteQualityControlTemplateRequest& request);

                /**
                 *删除用户自定义采样截图模板。
                 * @param req DeleteSampleSnapshotTemplateRequest
                 * @return DeleteSampleSnapshotTemplateOutcome
                 */
                DeleteSampleSnapshotTemplateOutcome DeleteSampleSnapshotTemplate(const Model::DeleteSampleSnapshotTemplateRequest &request);
                void DeleteSampleSnapshotTemplateAsync(const Model::DeleteSampleSnapshotTemplateRequest& request, const DeleteSampleSnapshotTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteSampleSnapshotTemplateOutcomeCallable DeleteSampleSnapshotTemplateCallable(const Model::DeleteSampleSnapshotTemplateRequest& request);

                /**
                 *删除编排
                 * @param req DeleteScheduleRequest
                 * @return DeleteScheduleOutcome
                 */
                DeleteScheduleOutcome DeleteSchedule(const Model::DeleteScheduleRequest &request);
                void DeleteScheduleAsync(const Model::DeleteScheduleRequest& request, const DeleteScheduleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteScheduleOutcomeCallable DeleteScheduleCallable(const Model::DeleteScheduleRequest& request);

                /**
                 *删除用户自定义智能擦除模板。
                 * @param req DeleteSmartEraseTemplateRequest
                 * @return DeleteSmartEraseTemplateOutcome
                 */
                DeleteSmartEraseTemplateOutcome DeleteSmartEraseTemplate(const Model::DeleteSmartEraseTemplateRequest &request);
                void DeleteSmartEraseTemplateAsync(const Model::DeleteSmartEraseTemplateRequest& request, const DeleteSmartEraseTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteSmartEraseTemplateOutcomeCallable DeleteSmartEraseTemplateCallable(const Model::DeleteSmartEraseTemplateRequest& request);

                /**
                 *删除用户自定义智能字幕模板。
                 * @param req DeleteSmartSubtitleTemplateRequest
                 * @return DeleteSmartSubtitleTemplateOutcome
                 */
                DeleteSmartSubtitleTemplateOutcome DeleteSmartSubtitleTemplate(const Model::DeleteSmartSubtitleTemplateRequest &request);
                void DeleteSmartSubtitleTemplateAsync(const Model::DeleteSmartSubtitleTemplateRequest& request, const DeleteSmartSubtitleTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteSmartSubtitleTemplateOutcomeCallable DeleteSmartSubtitleTemplateCallable(const Model::DeleteSmartSubtitleTemplateRequest& request);

                /**
                 *删除用户自定义指定时间点截图模板。
                 * @param req DeleteSnapshotByTimeOffsetTemplateRequest
                 * @return DeleteSnapshotByTimeOffsetTemplateOutcome
                 */
                DeleteSnapshotByTimeOffsetTemplateOutcome DeleteSnapshotByTimeOffsetTemplate(const Model::DeleteSnapshotByTimeOffsetTemplateRequest &request);
                void DeleteSnapshotByTimeOffsetTemplateAsync(const Model::DeleteSnapshotByTimeOffsetTemplateRequest& request, const DeleteSnapshotByTimeOffsetTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteSnapshotByTimeOffsetTemplateOutcomeCallable DeleteSnapshotByTimeOffsetTemplateCallable(const Model::DeleteSnapshotByTimeOffsetTemplateRequest& request);

                /**
                 *删除媒体传输的事件配置。
                 * @param req DeleteStreamLinkEventRequest
                 * @return DeleteStreamLinkEventOutcome
                 */
                DeleteStreamLinkEventOutcome DeleteStreamLinkEvent(const Model::DeleteStreamLinkEventRequest &request);
                void DeleteStreamLinkEventAsync(const Model::DeleteStreamLinkEventRequest& request, const DeleteStreamLinkEventAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteStreamLinkEventOutcomeCallable DeleteStreamLinkEventCallable(const Model::DeleteStreamLinkEventRequest& request);

                /**
                 *删除媒体传输的传输流配置。
                 * @param req DeleteStreamLinkFlowRequest
                 * @return DeleteStreamLinkFlowOutcome
                 */
                DeleteStreamLinkFlowOutcome DeleteStreamLinkFlow(const Model::DeleteStreamLinkFlowRequest &request);
                void DeleteStreamLinkFlowAsync(const Model::DeleteStreamLinkFlowRequest& request, const DeleteStreamLinkFlowAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteStreamLinkFlowOutcomeCallable DeleteStreamLinkFlowCallable(const Model::DeleteStreamLinkFlowRequest& request);

                /**
                 *删除媒体传输流的输出配置。
                 * @param req DeleteStreamLinkOutputRequest
                 * @return DeleteStreamLinkOutputOutcome
                 */
                DeleteStreamLinkOutputOutcome DeleteStreamLinkOutput(const Model::DeleteStreamLinkOutputRequest &request);
                void DeleteStreamLinkOutputAsync(const Model::DeleteStreamLinkOutputRequest& request, const DeleteStreamLinkOutputAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteStreamLinkOutputOutcomeCallable DeleteStreamLinkOutputCallable(const Model::DeleteStreamLinkOutputRequest& request);

                /**
                 *删除安全组。
                 * @param req DeleteStreamLinkSecurityGroupRequest
                 * @return DeleteStreamLinkSecurityGroupOutcome
                 */
                DeleteStreamLinkSecurityGroupOutcome DeleteStreamLinkSecurityGroup(const Model::DeleteStreamLinkSecurityGroupRequest &request);
                void DeleteStreamLinkSecurityGroupAsync(const Model::DeleteStreamLinkSecurityGroupRequest& request, const DeleteStreamLinkSecurityGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteStreamLinkSecurityGroupOutcomeCallable DeleteStreamLinkSecurityGroupCallable(const Model::DeleteStreamLinkSecurityGroupRequest& request);

                /**
                 *删除媒体包装Channel。
                 * @param req DeleteStreamPackageLinearAssemblyChannelRequest
                 * @return DeleteStreamPackageLinearAssemblyChannelOutcome
                 */
                DeleteStreamPackageLinearAssemblyChannelOutcome DeleteStreamPackageLinearAssemblyChannel(const Model::DeleteStreamPackageLinearAssemblyChannelRequest &request);
                void DeleteStreamPackageLinearAssemblyChannelAsync(const Model::DeleteStreamPackageLinearAssemblyChannelRequest& request, const DeleteStreamPackageLinearAssemblyChannelAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteStreamPackageLinearAssemblyChannelOutcomeCallable DeleteStreamPackageLinearAssemblyChannelCallable(const Model::DeleteStreamPackageLinearAssemblyChannelRequest& request);

                /**
                 *批量删除媒体包装Channel。
                 * @param req DeleteStreamPackageLinearAssemblyChannelsRequest
                 * @return DeleteStreamPackageLinearAssemblyChannelsOutcome
                 */
                DeleteStreamPackageLinearAssemblyChannelsOutcome DeleteStreamPackageLinearAssemblyChannels(const Model::DeleteStreamPackageLinearAssemblyChannelsRequest &request);
                void DeleteStreamPackageLinearAssemblyChannelsAsync(const Model::DeleteStreamPackageLinearAssemblyChannelsRequest& request, const DeleteStreamPackageLinearAssemblyChannelsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteStreamPackageLinearAssemblyChannelsOutcomeCallable DeleteStreamPackageLinearAssemblyChannelsCallable(const Model::DeleteStreamPackageLinearAssemblyChannelsRequest& request);

                /**
                 *删除线性组装Program。
                 * @param req DeleteStreamPackageLinearAssemblyProgramRequest
                 * @return DeleteStreamPackageLinearAssemblyProgramOutcome
                 */
                DeleteStreamPackageLinearAssemblyProgramOutcome DeleteStreamPackageLinearAssemblyProgram(const Model::DeleteStreamPackageLinearAssemblyProgramRequest &request);
                void DeleteStreamPackageLinearAssemblyProgramAsync(const Model::DeleteStreamPackageLinearAssemblyProgramRequest& request, const DeleteStreamPackageLinearAssemblyProgramAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteStreamPackageLinearAssemblyProgramOutcomeCallable DeleteStreamPackageLinearAssemblyProgramCallable(const Model::DeleteStreamPackageLinearAssemblyProgramRequest& request);

                /**
                 *批量删除线性组装Program。
                 * @param req DeleteStreamPackageLinearAssemblyProgramsRequest
                 * @return DeleteStreamPackageLinearAssemblyProgramsOutcome
                 */
                DeleteStreamPackageLinearAssemblyProgramsOutcome DeleteStreamPackageLinearAssemblyPrograms(const Model::DeleteStreamPackageLinearAssemblyProgramsRequest &request);
                void DeleteStreamPackageLinearAssemblyProgramsAsync(const Model::DeleteStreamPackageLinearAssemblyProgramsRequest& request, const DeleteStreamPackageLinearAssemblyProgramsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteStreamPackageLinearAssemblyProgramsOutcomeCallable DeleteStreamPackageLinearAssemblyProgramsCallable(const Model::DeleteStreamPackageLinearAssemblyProgramsRequest& request);

                /**
                 *批量删除同一Channel下的ID
                 * @param req DeleteStreamPackageLinearAssemblyProgramsByChannelRequest
                 * @return DeleteStreamPackageLinearAssemblyProgramsByChannelOutcome
                 */
                DeleteStreamPackageLinearAssemblyProgramsByChannelOutcome DeleteStreamPackageLinearAssemblyProgramsByChannel(const Model::DeleteStreamPackageLinearAssemblyProgramsByChannelRequest &request);
                void DeleteStreamPackageLinearAssemblyProgramsByChannelAsync(const Model::DeleteStreamPackageLinearAssemblyProgramsByChannelRequest& request, const DeleteStreamPackageLinearAssemblyProgramsByChannelAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteStreamPackageLinearAssemblyProgramsByChannelOutcomeCallable DeleteStreamPackageLinearAssemblyProgramsByChannelCallable(const Model::DeleteStreamPackageLinearAssemblyProgramsByChannelRequest& request);

                /**
                 *删除广告插入配置。
                 * @param req DeleteStreamPackageSSAIChannelRequest
                 * @return DeleteStreamPackageSSAIChannelOutcome
                 */
                DeleteStreamPackageSSAIChannelOutcome DeleteStreamPackageSSAIChannel(const Model::DeleteStreamPackageSSAIChannelRequest &request);
                void DeleteStreamPackageSSAIChannelAsync(const Model::DeleteStreamPackageSSAIChannelRequest& request, const DeleteStreamPackageSSAIChannelAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteStreamPackageSSAIChannelOutcomeCallable DeleteStreamPackageSSAIChannelCallable(const Model::DeleteStreamPackageSSAIChannelRequest& request);

                /**
                 *批量删除媒体包装Source。
                 * @param req DeleteStreamPackageSourceRequest
                 * @return DeleteStreamPackageSourceOutcome
                 */
                DeleteStreamPackageSourceOutcome DeleteStreamPackageSource(const Model::DeleteStreamPackageSourceRequest &request);
                void DeleteStreamPackageSourceAsync(const Model::DeleteStreamPackageSourceRequest& request, const DeleteStreamPackageSourceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteStreamPackageSourceOutcomeCallable DeleteStreamPackageSourceCallable(const Model::DeleteStreamPackageSourceRequest& request);

                /**
                 *删除媒体包装SourceLocation。
                 * @param req DeleteStreamPackageSourceLocationRequest
                 * @return DeleteStreamPackageSourceLocationOutcome
                 */
                DeleteStreamPackageSourceLocationOutcome DeleteStreamPackageSourceLocation(const Model::DeleteStreamPackageSourceLocationRequest &request);
                void DeleteStreamPackageSourceLocationAsync(const Model::DeleteStreamPackageSourceLocationRequest& request, const DeleteStreamPackageSourceLocationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteStreamPackageSourceLocationOutcomeCallable DeleteStreamPackageSourceLocationCallable(const Model::DeleteStreamPackageSourceLocationRequest& request);

                /**
                 *删除用户自定义字幕压制模板。
                 * @param req DeleteSubtitleEmbedTemplateRequest
                 * @return DeleteSubtitleEmbedTemplateOutcome
                 */
                DeleteSubtitleEmbedTemplateOutcome DeleteSubtitleEmbedTemplate(const Model::DeleteSubtitleEmbedTemplateRequest &request);
                void DeleteSubtitleEmbedTemplateAsync(const Model::DeleteSubtitleEmbedTemplateRequest& request, const DeleteSubtitleEmbedTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteSubtitleEmbedTemplateOutcomeCallable DeleteSubtitleEmbedTemplateCallable(const Model::DeleteSubtitleEmbedTemplateRequest& request);

                /**
                 *删除用户自定义转码模板。
                 * @param req DeleteTranscodeTemplateRequest
                 * @return DeleteTranscodeTemplateOutcome
                 */
                DeleteTranscodeTemplateOutcome DeleteTranscodeTemplate(const Model::DeleteTranscodeTemplateRequest &request);
                void DeleteTranscodeTemplateAsync(const Model::DeleteTranscodeTemplateRequest& request, const DeleteTranscodeTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteTranscodeTemplateOutcomeCallable DeleteTranscodeTemplateCallable(const Model::DeleteTranscodeTemplateRequest& request);

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
                 *删除工作流。对于已启用的工作流，需要禁用后才能删除。
                 * @param req DeleteWorkflowRequest
                 * @return DeleteWorkflowOutcome
                 */
                DeleteWorkflowOutcome DeleteWorkflow(const Model::DeleteWorkflowRequest &request);
                void DeleteWorkflowAsync(const Model::DeleteWorkflowRequest& request, const DeleteWorkflowAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteWorkflowOutcomeCallable DeleteWorkflowCallable(const Model::DeleteWorkflowRequest& request);

                /**
                 *根据内容分析模板唯一标识，获取内容分析模板详情列表。返回结果包含符合条件的所有用户自定义内容分析模板及系统预置视频内容分析模板
                 * @param req DescribeAIAnalysisTemplatesRequest
                 * @return DescribeAIAnalysisTemplatesOutcome
                 */
                DescribeAIAnalysisTemplatesOutcome DescribeAIAnalysisTemplates(const Model::DescribeAIAnalysisTemplatesRequest &request);
                void DescribeAIAnalysisTemplatesAsync(const Model::DescribeAIAnalysisTemplatesRequest& request, const DescribeAIAnalysisTemplatesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeAIAnalysisTemplatesOutcomeCallable DescribeAIAnalysisTemplatesCallable(const Model::DescribeAIAnalysisTemplatesRequest& request);

                /**
                 *根据内容识别模板唯一标识，获取内容识别模板详情列表。返回结果包含符合条件的所有用户自定义内容识别模板及系统预置视频内容识别模板
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
                 *调用该接口，查询AIGC生图片任务进度以及获取生成结果。
                 * @param req DescribeAigcImageTaskRequest
                 * @return DescribeAigcImageTaskOutcome
                 */
                DescribeAigcImageTaskOutcome DescribeAigcImageTask(const Model::DescribeAigcImageTaskRequest &request);
                void DescribeAigcImageTaskAsync(const Model::DescribeAigcImageTaskRequest& request, const DescribeAigcImageTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeAigcImageTaskOutcomeCallable DescribeAigcImageTaskCallable(const Model::DescribeAigcImageTaskRequest& request);

                /**
                 *调用该接口，用于查询AIGC生视频任务的进度以及获取生成结果。
                 * @param req DescribeAigcVideoTaskRequest
                 * @return DescribeAigcVideoTaskOutcome
                 */
                DescribeAigcVideoTaskOutcome DescribeAigcVideoTask(const Model::DescribeAigcVideoTaskRequest &request);
                void DescribeAigcVideoTaskAsync(const Model::DescribeAigcVideoTaskRequest& request, const DescribeAigcVideoTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeAigcVideoTaskOutcomeCallable DescribeAigcVideoTaskCallable(const Model::DescribeAigcVideoTaskRequest& request);

                /**
                 *查询转动图模板列表，支持根据条件，分页查询。
                 * @param req DescribeAnimatedGraphicsTemplatesRequest
                 * @return DescribeAnimatedGraphicsTemplatesOutcome
                 */
                DescribeAnimatedGraphicsTemplatesOutcome DescribeAnimatedGraphicsTemplates(const Model::DescribeAnimatedGraphicsTemplatesRequest &request);
                void DescribeAnimatedGraphicsTemplatesAsync(const Model::DescribeAnimatedGraphicsTemplatesRequest& request, const DescribeAnimatedGraphicsTemplatesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeAnimatedGraphicsTemplatesOutcomeCallable DescribeAnimatedGraphicsTemplatesCallable(const Model::DescribeAnimatedGraphicsTemplatesRequest& request);

                /**
                 *查询智能字幕热词库
                 * @param req DescribeAsrHotwordsRequest
                 * @return DescribeAsrHotwordsOutcome
                 */
                DescribeAsrHotwordsOutcome DescribeAsrHotwords(const Model::DescribeAsrHotwordsRequest &request);
                void DescribeAsrHotwordsAsync(const Model::DescribeAsrHotwordsRequest& request, const DescribeAsrHotwordsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeAsrHotwordsOutcomeCallable DescribeAsrHotwordsCallable(const Model::DescribeAsrHotwordsRequest& request);

                /**
                 *获取热词库列表
                 * @param req DescribeAsrHotwordsListRequest
                 * @return DescribeAsrHotwordsListOutcome
                 */
                DescribeAsrHotwordsListOutcome DescribeAsrHotwordsList(const Model::DescribeAsrHotwordsListRequest &request);
                void DescribeAsrHotwordsListAsync(const Model::DescribeAsrHotwordsListRequest& request, const DescribeAsrHotwordsListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeAsrHotwordsListOutcomeCallable DescribeAsrHotwordsListCallable(const Model::DescribeAsrHotwordsListRequest& request);

                /**
                 *通过任务 ID 查询任务的执行状态和结果的详细信息（最多可以查询7天之内提交的任务）。
                 * @param req DescribeBatchTaskDetailRequest
                 * @return DescribeBatchTaskDetailOutcome
                 */
                DescribeBatchTaskDetailOutcome DescribeBatchTaskDetail(const Model::DescribeBatchTaskDetailRequest &request);
                void DescribeBatchTaskDetailAsync(const Model::DescribeBatchTaskDetailRequest& request, const DescribeBatchTaskDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeBatchTaskDetailOutcomeCallable DescribeBatchTaskDetailCallable(const Model::DescribeBatchTaskDetailRequest& request);

                /**
                 *查询用户自定义数字水印模板，支持根据条件，分页查询。
                 * @param req DescribeBlindWatermarkTemplatesRequest
                 * @return DescribeBlindWatermarkTemplatesOutcome
                 */
                DescribeBlindWatermarkTemplatesOutcome DescribeBlindWatermarkTemplates(const Model::DescribeBlindWatermarkTemplatesRequest &request);
                void DescribeBlindWatermarkTemplatesAsync(const Model::DescribeBlindWatermarkTemplatesRequest& request, const DescribeBlindWatermarkTemplatesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeBlindWatermarkTemplatesOutcomeCallable DescribeBlindWatermarkTemplatesCallable(const Model::DescribeBlindWatermarkTemplatesRequest& request);

                /**
                 *根据智能审核模板唯一标识，获取智能审核模板详情列表。返回结果包含符合条件的所有用户自定义模板及系统预置智能审核模板。
                 * @param req DescribeContentReviewTemplatesRequest
                 * @return DescribeContentReviewTemplatesOutcome
                 */
                DescribeContentReviewTemplatesOutcome DescribeContentReviewTemplates(const Model::DescribeContentReviewTemplatesRequest &request);
                void DescribeContentReviewTemplatesAsync(const Model::DescribeContentReviewTemplatesRequest& request, const DescribeContentReviewTemplatesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeContentReviewTemplatesOutcomeCallable DescribeContentReviewTemplatesCallable(const Model::DescribeContentReviewTemplatesRequest& request);

                /**
                 *根据安全组反差关联的Flow信息。
                 * @param req DescribeGroupAttachFlowsByIdRequest
                 * @return DescribeGroupAttachFlowsByIdOutcome
                 */
                DescribeGroupAttachFlowsByIdOutcome DescribeGroupAttachFlowsById(const Model::DescribeGroupAttachFlowsByIdRequest &request);
                void DescribeGroupAttachFlowsByIdAsync(const Model::DescribeGroupAttachFlowsByIdRequest& request, const DescribeGroupAttachFlowsByIdAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeGroupAttachFlowsByIdOutcomeCallable DescribeGroupAttachFlowsByIdCallable(const Model::DescribeGroupAttachFlowsByIdRequest& request);

                /**
                 *查询雪碧图模板，支持根据条件，分页查询。
                 * @param req DescribeImageSpriteTemplatesRequest
                 * @return DescribeImageSpriteTemplatesOutcome
                 */
                DescribeImageSpriteTemplatesOutcome DescribeImageSpriteTemplates(const Model::DescribeImageSpriteTemplatesRequest &request);
                void DescribeImageSpriteTemplatesAsync(const Model::DescribeImageSpriteTemplatesRequest& request, const DescribeImageSpriteTemplatesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeImageSpriteTemplatesOutcomeCallable DescribeImageSpriteTemplatesCallable(const Model::DescribeImageSpriteTemplatesRequest& request);

                /**
                 *通过任务 ID 查询任务的执行状态和结果的详细信息（最多可以查询7天之内提交的任务）。
                 * @param req DescribeImageTaskDetailRequest
                 * @return DescribeImageTaskDetailOutcome
                 */
                DescribeImageTaskDetailOutcome DescribeImageTaskDetail(const Model::DescribeImageTaskDetailRequest &request);
                void DescribeImageTaskDetailAsync(const Model::DescribeImageTaskDetailRequest& request, const DescribeImageTaskDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeImageTaskDetailOutcomeCallable DescribeImageTaskDetailCallable(const Model::DescribeImageTaskDetailRequest& request);

                /**
                 *获取直播录制模板
                 * @param req DescribeLiveRecordTemplatesRequest
                 * @return DescribeLiveRecordTemplatesOutcome
                 */
                DescribeLiveRecordTemplatesOutcome DescribeLiveRecordTemplates(const Model::DescribeLiveRecordTemplatesRequest &request);
                void DescribeLiveRecordTemplatesAsync(const Model::DescribeLiveRecordTemplatesRequest& request, const DescribeLiveRecordTemplatesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeLiveRecordTemplatesOutcomeCallable DescribeLiveRecordTemplatesCallable(const Model::DescribeLiveRecordTemplatesRequest& request);

                /**
                 *查询用户开通mps信息，是否开通/授权。
                 * @param req DescribeMDPMPSUserInfoRequest
                 * @return DescribeMDPMPSUserInfoOutcome
                 */
                DescribeMDPMPSUserInfoOutcome DescribeMDPMPSUserInfo(const Model::DescribeMDPMPSUserInfoRequest &request);
                void DescribeMDPMPSUserInfoAsync(const Model::DescribeMDPMPSUserInfoRequest& request, const DescribeMDPMPSUserInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeMDPMPSUserInfoOutcomeCallable DescribeMDPMPSUserInfoCallable(const Model::DescribeMDPMPSUserInfoRequest& request);

                /**
                 *获取媒体的元信息，包括视频画面宽、高、编码格式、时长、帧率等。
                 * @param req DescribeMediaMetaDataRequest
                 * @return DescribeMediaMetaDataOutcome
                 */
                DescribeMediaMetaDataOutcome DescribeMediaMetaData(const Model::DescribeMediaMetaDataRequest &request);
                void DescribeMediaMetaDataAsync(const Model::DescribeMediaMetaDataRequest& request, const DescribeMediaMetaDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeMediaMetaDataOutcomeCallable DescribeMediaMetaDataCallable(const Model::DescribeMediaMetaDataRequest& request);

                /**
                 *该接口用于查询素材样本信息，支持根据素材 ID、名称、标签，分页查询。
                 * @param req DescribePersonSamplesRequest
                 * @return DescribePersonSamplesOutcome
                 */
                DescribePersonSamplesOutcome DescribePersonSamples(const Model::DescribePersonSamplesRequest &request);
                void DescribePersonSamplesAsync(const Model::DescribePersonSamplesRequest& request, const DescribePersonSamplesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribePersonSamplesOutcomeCallable DescribePersonSamplesCallable(const Model::DescribePersonSamplesRequest& request);

                /**
                 *查询图片处理模板列表。
                 * @param req DescribeProcessImageTemplatesRequest
                 * @return DescribeProcessImageTemplatesOutcome
                 */
                DescribeProcessImageTemplatesOutcome DescribeProcessImageTemplates(const Model::DescribeProcessImageTemplatesRequest &request);
                void DescribeProcessImageTemplatesAsync(const Model::DescribeProcessImageTemplatesRequest& request, const DescribeProcessImageTemplatesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeProcessImageTemplatesOutcomeCallable DescribeProcessImageTemplatesCallable(const Model::DescribeProcessImageTemplatesRequest& request);

                /**
                 *查询用户自定义媒体质检模板，支持根据条件，分页查询。
                 * @param req DescribeQualityControlTemplatesRequest
                 * @return DescribeQualityControlTemplatesOutcome
                 */
                DescribeQualityControlTemplatesOutcome DescribeQualityControlTemplates(const Model::DescribeQualityControlTemplatesRequest &request);
                void DescribeQualityControlTemplatesAsync(const Model::DescribeQualityControlTemplatesRequest& request, const DescribeQualityControlTemplatesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeQualityControlTemplatesOutcomeCallable DescribeQualityControlTemplatesCallable(const Model::DescribeQualityControlTemplatesRequest& request);

                /**
                 *查询SSAI开通状态
                 * @param req DescribeSSAIActivateStateRequest
                 * @return DescribeSSAIActivateStateOutcome
                 */
                DescribeSSAIActivateStateOutcome DescribeSSAIActivateState(const Model::DescribeSSAIActivateStateRequest &request);
                void DescribeSSAIActivateStateAsync(const Model::DescribeSSAIActivateStateRequest& request, const DescribeSSAIActivateStateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeSSAIActivateStateOutcomeCallable DescribeSSAIActivateStateCallable(const Model::DescribeSSAIActivateStateRequest& request);

                /**
                 *查询采样截图模板，支持根据条件，分页查询。
                 * @param req DescribeSampleSnapshotTemplatesRequest
                 * @return DescribeSampleSnapshotTemplatesOutcome
                 */
                DescribeSampleSnapshotTemplatesOutcome DescribeSampleSnapshotTemplates(const Model::DescribeSampleSnapshotTemplatesRequest &request);
                void DescribeSampleSnapshotTemplatesAsync(const Model::DescribeSampleSnapshotTemplatesRequest& request, const DescribeSampleSnapshotTemplatesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeSampleSnapshotTemplatesOutcomeCallable DescribeSampleSnapshotTemplatesCallable(const Model::DescribeSampleSnapshotTemplatesRequest& request);

                /**
                 *查询编排。
                 * @param req DescribeSchedulesRequest
                 * @return DescribeSchedulesOutcome
                 */
                DescribeSchedulesOutcome DescribeSchedules(const Model::DescribeSchedulesRequest &request);
                void DescribeSchedulesAsync(const Model::DescribeSchedulesRequest& request, const DescribeSchedulesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeSchedulesOutcomeCallable DescribeSchedulesCallable(const Model::DescribeSchedulesRequest& request);

                /**
                 *根据智能擦除模板唯一标识，获取智能擦除模板详情列表。返回结果包含符合条件的所有用户自定义智能擦除模板及系统预置智能擦除模板
                 * @param req DescribeSmartEraseTemplatesRequest
                 * @return DescribeSmartEraseTemplatesOutcome
                 */
                DescribeSmartEraseTemplatesOutcome DescribeSmartEraseTemplates(const Model::DescribeSmartEraseTemplatesRequest &request);
                void DescribeSmartEraseTemplatesAsync(const Model::DescribeSmartEraseTemplatesRequest& request, const DescribeSmartEraseTemplatesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeSmartEraseTemplatesOutcomeCallable DescribeSmartEraseTemplatesCallable(const Model::DescribeSmartEraseTemplatesRequest& request);

                /**
                 *根据智能字幕 模板唯一标识，获取智能字幕模板详情列表。返回结果包含符合条件的所有用户自定义智能字幕模板及系统预置智能字幕模板
                 * @param req DescribeSmartSubtitleTemplatesRequest
                 * @return DescribeSmartSubtitleTemplatesOutcome
                 */
                DescribeSmartSubtitleTemplatesOutcome DescribeSmartSubtitleTemplates(const Model::DescribeSmartSubtitleTemplatesRequest &request);
                void DescribeSmartSubtitleTemplatesAsync(const Model::DescribeSmartSubtitleTemplatesRequest& request, const DescribeSmartSubtitleTemplatesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeSmartSubtitleTemplatesOutcomeCallable DescribeSmartSubtitleTemplatesCallable(const Model::DescribeSmartSubtitleTemplatesRequest& request);

                /**
                 *查询指定时间点截图模板，支持根据条件，分页查询。
                 * @param req DescribeSnapshotByTimeOffsetTemplatesRequest
                 * @return DescribeSnapshotByTimeOffsetTemplatesOutcome
                 */
                DescribeSnapshotByTimeOffsetTemplatesOutcome DescribeSnapshotByTimeOffsetTemplates(const Model::DescribeSnapshotByTimeOffsetTemplatesRequest &request);
                void DescribeSnapshotByTimeOffsetTemplatesAsync(const Model::DescribeSnapshotByTimeOffsetTemplatesRequest& request, const DescribeSnapshotByTimeOffsetTemplatesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeSnapshotByTimeOffsetTemplatesOutcomeCallable DescribeSnapshotByTimeOffsetTemplatesCallable(const Model::DescribeSnapshotByTimeOffsetTemplatesRequest& request);

                /**
                 *查询媒体传输开通状态。
                 * @param req DescribeStreamLinkActivateStateRequest
                 * @return DescribeStreamLinkActivateStateOutcome
                 */
                DescribeStreamLinkActivateStateOutcome DescribeStreamLinkActivateState(const Model::DescribeStreamLinkActivateStateRequest &request);
                void DescribeStreamLinkActivateStateAsync(const Model::DescribeStreamLinkActivateStateRequest& request, const DescribeStreamLinkActivateStateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeStreamLinkActivateStateOutcomeCallable DescribeStreamLinkActivateStateCallable(const Model::DescribeStreamLinkActivateStateRequest& request);

                /**
                 *查询媒体传输事件的配置信息。
                 * @param req DescribeStreamLinkEventRequest
                 * @return DescribeStreamLinkEventOutcome
                 */
                DescribeStreamLinkEventOutcome DescribeStreamLinkEvent(const Model::DescribeStreamLinkEventRequest &request);
                void DescribeStreamLinkEventAsync(const Model::DescribeStreamLinkEventRequest& request, const DescribeStreamLinkEventAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeStreamLinkEventOutcomeCallable DescribeStreamLinkEventCallable(const Model::DescribeStreamLinkEventRequest& request);

                /**
                 *查询媒体传输事件关联的所有媒体输入流的配置信息。
                 * @param req DescribeStreamLinkEventAttachedFlowsRequest
                 * @return DescribeStreamLinkEventAttachedFlowsOutcome
                 */
                DescribeStreamLinkEventAttachedFlowsOutcome DescribeStreamLinkEventAttachedFlows(const Model::DescribeStreamLinkEventAttachedFlowsRequest &request);
                void DescribeStreamLinkEventAttachedFlowsAsync(const Model::DescribeStreamLinkEventAttachedFlowsRequest& request, const DescribeStreamLinkEventAttachedFlowsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeStreamLinkEventAttachedFlowsOutcomeCallable DescribeStreamLinkEventAttachedFlowsCallable(const Model::DescribeStreamLinkEventAttachedFlowsRequest& request);

                /**
                 *批量查询媒体传输事件的配置信息。
                 * @param req DescribeStreamLinkEventsRequest
                 * @return DescribeStreamLinkEventsOutcome
                 */
                DescribeStreamLinkEventsOutcome DescribeStreamLinkEvents(const Model::DescribeStreamLinkEventsRequest &request);
                void DescribeStreamLinkEventsAsync(const Model::DescribeStreamLinkEventsRequest& request, const DescribeStreamLinkEventsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeStreamLinkEventsOutcomeCallable DescribeStreamLinkEventsCallable(const Model::DescribeStreamLinkEventsRequest& request);

                /**
                 *查询媒体输入流的配置信息。
                 * @param req DescribeStreamLinkFlowRequest
                 * @return DescribeStreamLinkFlowOutcome
                 */
                DescribeStreamLinkFlowOutcome DescribeStreamLinkFlow(const Model::DescribeStreamLinkFlowRequest &request);
                void DescribeStreamLinkFlowAsync(const Model::DescribeStreamLinkFlowRequest& request, const DescribeStreamLinkFlowAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeStreamLinkFlowOutcomeCallable DescribeStreamLinkFlowCallable(const Model::DescribeStreamLinkFlowRequest& request);

                /**
                 *查询媒体传输流的日志信息。
                 * @param req DescribeStreamLinkFlowLogsRequest
                 * @return DescribeStreamLinkFlowLogsOutcome
                 */
                DescribeStreamLinkFlowLogsOutcome DescribeStreamLinkFlowLogs(const Model::DescribeStreamLinkFlowLogsRequest &request);
                void DescribeStreamLinkFlowLogsAsync(const Model::DescribeStreamLinkFlowLogsRequest& request, const DescribeStreamLinkFlowLogsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeStreamLinkFlowLogsOutcomeCallable DescribeStreamLinkFlowLogsCallable(const Model::DescribeStreamLinkFlowLogsRequest& request);

                /**
                 *查询媒体传输流的媒体质量数据。
                 * @param req DescribeStreamLinkFlowMediaStatisticsRequest
                 * @return DescribeStreamLinkFlowMediaStatisticsOutcome
                 */
                DescribeStreamLinkFlowMediaStatisticsOutcome DescribeStreamLinkFlowMediaStatistics(const Model::DescribeStreamLinkFlowMediaStatisticsRequest &request);
                void DescribeStreamLinkFlowMediaStatisticsAsync(const Model::DescribeStreamLinkFlowMediaStatisticsRequest& request, const DescribeStreamLinkFlowMediaStatisticsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeStreamLinkFlowMediaStatisticsOutcomeCallable DescribeStreamLinkFlowMediaStatisticsCallable(const Model::DescribeStreamLinkFlowMediaStatisticsRequest& request);

                /**
                 *实时查询流的当前状态
                 * @param req DescribeStreamLinkFlowRealtimeStatusRequest
                 * @return DescribeStreamLinkFlowRealtimeStatusOutcome
                 */
                DescribeStreamLinkFlowRealtimeStatusOutcome DescribeStreamLinkFlowRealtimeStatus(const Model::DescribeStreamLinkFlowRealtimeStatusRequest &request);
                void DescribeStreamLinkFlowRealtimeStatusAsync(const Model::DescribeStreamLinkFlowRealtimeStatusRequest& request, const DescribeStreamLinkFlowRealtimeStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeStreamLinkFlowRealtimeStatusOutcomeCallable DescribeStreamLinkFlowRealtimeStatusCallable(const Model::DescribeStreamLinkFlowRealtimeStatusRequest& request);

                /**
                 *查询媒体传输流的SRT质量数据。
                 * @param req DescribeStreamLinkFlowSRTStatisticsRequest
                 * @return DescribeStreamLinkFlowSRTStatisticsOutcome
                 */
                DescribeStreamLinkFlowSRTStatisticsOutcome DescribeStreamLinkFlowSRTStatistics(const Model::DescribeStreamLinkFlowSRTStatisticsRequest &request);
                void DescribeStreamLinkFlowSRTStatisticsAsync(const Model::DescribeStreamLinkFlowSRTStatisticsRequest& request, const DescribeStreamLinkFlowSRTStatisticsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeStreamLinkFlowSRTStatisticsOutcomeCallable DescribeStreamLinkFlowSRTStatisticsCallable(const Model::DescribeStreamLinkFlowSRTStatisticsRequest& request);

                /**
                 *查询媒体传输流的媒体质量数据。
                 * @param req DescribeStreamLinkFlowStatisticsRequest
                 * @return DescribeStreamLinkFlowStatisticsOutcome
                 */
                DescribeStreamLinkFlowStatisticsOutcome DescribeStreamLinkFlowStatistics(const Model::DescribeStreamLinkFlowStatisticsRequest &request);
                void DescribeStreamLinkFlowStatisticsAsync(const Model::DescribeStreamLinkFlowStatisticsRequest& request, const DescribeStreamLinkFlowStatisticsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeStreamLinkFlowStatisticsOutcomeCallable DescribeStreamLinkFlowStatisticsCallable(const Model::DescribeStreamLinkFlowStatisticsRequest& request);

                /**
                 *批量查询媒体输入流的配置信息。
                 * @param req DescribeStreamLinkFlowsRequest
                 * @return DescribeStreamLinkFlowsOutcome
                 */
                DescribeStreamLinkFlowsOutcome DescribeStreamLinkFlows(const Model::DescribeStreamLinkFlowsRequest &request);
                void DescribeStreamLinkFlowsAsync(const Model::DescribeStreamLinkFlowsRequest& request, const DescribeStreamLinkFlowsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeStreamLinkFlowsOutcomeCallable DescribeStreamLinkFlowsCallable(const Model::DescribeStreamLinkFlowsRequest& request);

                /**
                 *查询媒体传输所有地区。
                 * @param req DescribeStreamLinkRegionsRequest
                 * @return DescribeStreamLinkRegionsOutcome
                 */
                DescribeStreamLinkRegionsOutcome DescribeStreamLinkRegions(const Model::DescribeStreamLinkRegionsRequest &request);
                void DescribeStreamLinkRegionsAsync(const Model::DescribeStreamLinkRegionsRequest& request, const DescribeStreamLinkRegionsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeStreamLinkRegionsOutcomeCallable DescribeStreamLinkRegionsCallable(const Model::DescribeStreamLinkRegionsRequest& request);

                /**
                 *批量查询安全组信息。
                 * @param req DescribeStreamLinkSecurityGroupsRequest
                 * @return DescribeStreamLinkSecurityGroupsOutcome
                 */
                DescribeStreamLinkSecurityGroupsOutcome DescribeStreamLinkSecurityGroups(const Model::DescribeStreamLinkSecurityGroupsRequest &request);
                void DescribeStreamLinkSecurityGroupsAsync(const Model::DescribeStreamLinkSecurityGroupsRequest& request, const DescribeStreamLinkSecurityGroupsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeStreamLinkSecurityGroupsOutcomeCallable DescribeStreamLinkSecurityGroupsCallable(const Model::DescribeStreamLinkSecurityGroupsRequest& request);

                /**
                 *查询媒体封装用户开通情况。
                 * @param req DescribeStreamPackageActivateStateRequest
                 * @return DescribeStreamPackageActivateStateOutcome
                 */
                DescribeStreamPackageActivateStateOutcome DescribeStreamPackageActivateState(const Model::DescribeStreamPackageActivateStateRequest &request);
                void DescribeStreamPackageActivateStateAsync(const Model::DescribeStreamPackageActivateStateRequest& request, const DescribeStreamPackageActivateStateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeStreamPackageActivateStateOutcomeCallable DescribeStreamPackageActivateStateCallable(const Model::DescribeStreamPackageActivateStateRequest& request);

                /**
                 *查询媒体包装线性组装频道信息。
                 * @param req DescribeStreamPackageLinearAssemblyChannelRequest
                 * @return DescribeStreamPackageLinearAssemblyChannelOutcome
                 */
                DescribeStreamPackageLinearAssemblyChannelOutcome DescribeStreamPackageLinearAssemblyChannel(const Model::DescribeStreamPackageLinearAssemblyChannelRequest &request);
                void DescribeStreamPackageLinearAssemblyChannelAsync(const Model::DescribeStreamPackageLinearAssemblyChannelRequest& request, const DescribeStreamPackageLinearAssemblyChannelAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeStreamPackageLinearAssemblyChannelOutcomeCallable DescribeStreamPackageLinearAssemblyChannelCallable(const Model::DescribeStreamPackageLinearAssemblyChannelRequest& request);

                /**
                 *查询线性组装频道告警信息。
                 * @param req DescribeStreamPackageLinearAssemblyChannelAlertsRequest
                 * @return DescribeStreamPackageLinearAssemblyChannelAlertsOutcome
                 */
                DescribeStreamPackageLinearAssemblyChannelAlertsOutcome DescribeStreamPackageLinearAssemblyChannelAlerts(const Model::DescribeStreamPackageLinearAssemblyChannelAlertsRequest &request);
                void DescribeStreamPackageLinearAssemblyChannelAlertsAsync(const Model::DescribeStreamPackageLinearAssemblyChannelAlertsRequest& request, const DescribeStreamPackageLinearAssemblyChannelAlertsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeStreamPackageLinearAssemblyChannelAlertsOutcomeCallable DescribeStreamPackageLinearAssemblyChannelAlertsCallable(const Model::DescribeStreamPackageLinearAssemblyChannelAlertsRequest& request);

                /**
                 *查询线性组装频道信息列表。
                 * @param req DescribeStreamPackageLinearAssemblyChannelsRequest
                 * @return DescribeStreamPackageLinearAssemblyChannelsOutcome
                 */
                DescribeStreamPackageLinearAssemblyChannelsOutcome DescribeStreamPackageLinearAssemblyChannels(const Model::DescribeStreamPackageLinearAssemblyChannelsRequest &request);
                void DescribeStreamPackageLinearAssemblyChannelsAsync(const Model::DescribeStreamPackageLinearAssemblyChannelsRequest& request, const DescribeStreamPackageLinearAssemblyChannelsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeStreamPackageLinearAssemblyChannelsOutcomeCallable DescribeStreamPackageLinearAssemblyChannelsCallable(const Model::DescribeStreamPackageLinearAssemblyChannelsRequest& request);

                /**
                 *查询媒体包装Program信息。
                 * @param req DescribeStreamPackageLinearAssemblyProgramRequest
                 * @return DescribeStreamPackageLinearAssemblyProgramOutcome
                 */
                DescribeStreamPackageLinearAssemblyProgramOutcome DescribeStreamPackageLinearAssemblyProgram(const Model::DescribeStreamPackageLinearAssemblyProgramRequest &request);
                void DescribeStreamPackageLinearAssemblyProgramAsync(const Model::DescribeStreamPackageLinearAssemblyProgramRequest& request, const DescribeStreamPackageLinearAssemblyProgramAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeStreamPackageLinearAssemblyProgramOutcomeCallable DescribeStreamPackageLinearAssemblyProgramCallable(const Model::DescribeStreamPackageLinearAssemblyProgramRequest& request);

                /**
                 *查询Programe信息列表。
                 * @param req DescribeStreamPackageLinearAssemblyProgramSchedulesRequest
                 * @return DescribeStreamPackageLinearAssemblyProgramSchedulesOutcome
                 */
                DescribeStreamPackageLinearAssemblyProgramSchedulesOutcome DescribeStreamPackageLinearAssemblyProgramSchedules(const Model::DescribeStreamPackageLinearAssemblyProgramSchedulesRequest &request);
                void DescribeStreamPackageLinearAssemblyProgramSchedulesAsync(const Model::DescribeStreamPackageLinearAssemblyProgramSchedulesRequest& request, const DescribeStreamPackageLinearAssemblyProgramSchedulesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeStreamPackageLinearAssemblyProgramSchedulesOutcomeCallable DescribeStreamPackageLinearAssemblyProgramSchedulesCallable(const Model::DescribeStreamPackageLinearAssemblyProgramSchedulesRequest& request);

                /**
                 *查询Programe信息列表。
                 * @param req DescribeStreamPackageLinearAssemblyProgramsRequest
                 * @return DescribeStreamPackageLinearAssemblyProgramsOutcome
                 */
                DescribeStreamPackageLinearAssemblyProgramsOutcome DescribeStreamPackageLinearAssemblyPrograms(const Model::DescribeStreamPackageLinearAssemblyProgramsRequest &request);
                void DescribeStreamPackageLinearAssemblyProgramsAsync(const Model::DescribeStreamPackageLinearAssemblyProgramsRequest& request, const DescribeStreamPackageLinearAssemblyProgramsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeStreamPackageLinearAssemblyProgramsOutcomeCallable DescribeStreamPackageLinearAssemblyProgramsCallable(const Model::DescribeStreamPackageLinearAssemblyProgramsRequest& request);

                /**
                 *频道线性组装用量查询
                 * @param req DescribeStreamPackageLinearAssemblyUsageRequest
                 * @return DescribeStreamPackageLinearAssemblyUsageOutcome
                 */
                DescribeStreamPackageLinearAssemblyUsageOutcome DescribeStreamPackageLinearAssemblyUsage(const Model::DescribeStreamPackageLinearAssemblyUsageRequest &request);
                void DescribeStreamPackageLinearAssemblyUsageAsync(const Model::DescribeStreamPackageLinearAssemblyUsageRequest& request, const DescribeStreamPackageLinearAssemblyUsageAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeStreamPackageLinearAssemblyUsageOutcomeCallable DescribeStreamPackageLinearAssemblyUsageCallable(const Model::DescribeStreamPackageLinearAssemblyUsageRequest& request);

                /**
                 *查询广告插入配置。
                 * @param req DescribeStreamPackageSSAIChannelRequest
                 * @return DescribeStreamPackageSSAIChannelOutcome
                 */
                DescribeStreamPackageSSAIChannelOutcome DescribeStreamPackageSSAIChannel(const Model::DescribeStreamPackageSSAIChannelRequest &request);
                void DescribeStreamPackageSSAIChannelAsync(const Model::DescribeStreamPackageSSAIChannelRequest& request, const DescribeStreamPackageSSAIChannelAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeStreamPackageSSAIChannelOutcomeCallable DescribeStreamPackageSSAIChannelCallable(const Model::DescribeStreamPackageSSAIChannelRequest& request);

                /**
                 *批量查询广告插入配置。
                 * @param req DescribeStreamPackageSSAIChannelsRequest
                 * @return DescribeStreamPackageSSAIChannelsOutcome
                 */
                DescribeStreamPackageSSAIChannelsOutcome DescribeStreamPackageSSAIChannels(const Model::DescribeStreamPackageSSAIChannelsRequest &request);
                void DescribeStreamPackageSSAIChannelsAsync(const Model::DescribeStreamPackageSSAIChannelsRequest& request, const DescribeStreamPackageSSAIChannelsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeStreamPackageSSAIChannelsOutcomeCallable DescribeStreamPackageSSAIChannelsCallable(const Model::DescribeStreamPackageSSAIChannelsRequest& request);

                /**
                 *SSAI广告替换用量查询
                 * @param req DescribeStreamPackageSSAIUsageRequest
                 * @return DescribeStreamPackageSSAIUsageOutcome
                 */
                DescribeStreamPackageSSAIUsageOutcome DescribeStreamPackageSSAIUsage(const Model::DescribeStreamPackageSSAIUsageRequest &request);
                void DescribeStreamPackageSSAIUsageAsync(const Model::DescribeStreamPackageSSAIUsageRequest& request, const DescribeStreamPackageSSAIUsageAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeStreamPackageSSAIUsageOutcomeCallable DescribeStreamPackageSSAIUsageCallable(const Model::DescribeStreamPackageSSAIUsageRequest& request);

                /**
                 *查询媒体包装Source信息。
                 * @param req DescribeStreamPackageSourceRequest
                 * @return DescribeStreamPackageSourceOutcome
                 */
                DescribeStreamPackageSourceOutcome DescribeStreamPackageSource(const Model::DescribeStreamPackageSourceRequest &request);
                void DescribeStreamPackageSourceAsync(const Model::DescribeStreamPackageSourceRequest& request, const DescribeStreamPackageSourceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeStreamPackageSourceOutcomeCallable DescribeStreamPackageSourceCallable(const Model::DescribeStreamPackageSourceRequest& request);

                /**
                 *查询线性组装Source告警信息。
                 * @param req DescribeStreamPackageSourceAlertsRequest
                 * @return DescribeStreamPackageSourceAlertsOutcome
                 */
                DescribeStreamPackageSourceAlertsOutcome DescribeStreamPackageSourceAlerts(const Model::DescribeStreamPackageSourceAlertsRequest &request);
                void DescribeStreamPackageSourceAlertsAsync(const Model::DescribeStreamPackageSourceAlertsRequest& request, const DescribeStreamPackageSourceAlertsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeStreamPackageSourceAlertsOutcomeCallable DescribeStreamPackageSourceAlertsCallable(const Model::DescribeStreamPackageSourceAlertsRequest& request);

                /**
                 *查询媒体包装SourceLocation信息。
                 * @param req DescribeStreamPackageSourceLocationRequest
                 * @return DescribeStreamPackageSourceLocationOutcome
                 */
                DescribeStreamPackageSourceLocationOutcome DescribeStreamPackageSourceLocation(const Model::DescribeStreamPackageSourceLocationRequest &request);
                void DescribeStreamPackageSourceLocationAsync(const Model::DescribeStreamPackageSourceLocationRequest& request, const DescribeStreamPackageSourceLocationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeStreamPackageSourceLocationOutcomeCallable DescribeStreamPackageSourceLocationCallable(const Model::DescribeStreamPackageSourceLocationRequest& request);

                /**
                 *查询SourceLocation信息列表。
                 * @param req DescribeStreamPackageSourceLocationsRequest
                 * @return DescribeStreamPackageSourceLocationsOutcome
                 */
                DescribeStreamPackageSourceLocationsOutcome DescribeStreamPackageSourceLocations(const Model::DescribeStreamPackageSourceLocationsRequest &request);
                void DescribeStreamPackageSourceLocationsAsync(const Model::DescribeStreamPackageSourceLocationsRequest& request, const DescribeStreamPackageSourceLocationsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeStreamPackageSourceLocationsOutcomeCallable DescribeStreamPackageSourceLocationsCallable(const Model::DescribeStreamPackageSourceLocationsRequest& request);

                /**
                 *查询Source信息列表。
                 * @param req DescribeStreamPackageSourcesRequest
                 * @return DescribeStreamPackageSourcesOutcome
                 */
                DescribeStreamPackageSourcesOutcome DescribeStreamPackageSources(const Model::DescribeStreamPackageSourcesRequest &request);
                void DescribeStreamPackageSourcesAsync(const Model::DescribeStreamPackageSourcesRequest& request, const DescribeStreamPackageSourcesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeStreamPackageSourcesOutcomeCallable DescribeStreamPackageSourcesCallable(const Model::DescribeStreamPackageSourcesRequest& request);

                /**
                 *根据字幕压制模板唯一标识，获取字幕压制模板详情列表。返回结果包含符合条件的所有用户自定义字幕压制模板及系统预置字幕压制模板
                 * @param req DescribeSubtitleEmbedTemplatesRequest
                 * @return DescribeSubtitleEmbedTemplatesOutcome
                 */
                DescribeSubtitleEmbedTemplatesOutcome DescribeSubtitleEmbedTemplates(const Model::DescribeSubtitleEmbedTemplatesRequest &request);
                void DescribeSubtitleEmbedTemplatesAsync(const Model::DescribeSubtitleEmbedTemplatesRequest& request, const DescribeSubtitleEmbedTemplatesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeSubtitleEmbedTemplatesOutcomeCallable DescribeSubtitleEmbedTemplatesCallable(const Model::DescribeSubtitleEmbedTemplatesRequest& request);

                /**
                 *通过任务 ID 查询任务的执行状态和结果的详细信息（最多可以查询7天之内提交的任务）。
                 * @param req DescribeTaskDetailRequest
                 * @return DescribeTaskDetailOutcome
                 */
                DescribeTaskDetailOutcome DescribeTaskDetail(const Model::DescribeTaskDetailRequest &request);
                void DescribeTaskDetailAsync(const Model::DescribeTaskDetailRequest& request, const DescribeTaskDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeTaskDetailOutcomeCallable DescribeTaskDetailCallable(const Model::DescribeTaskDetailRequest& request);

                /**
                 ** 该接口用于查询任务列表；
* 当列表数据比较多时，单次接口调用无法拉取整个列表，可通过 ScrollToken 参数，分批拉取；
* 只能查询到最近七天（168小时）内的任务。
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
                 *该接口返回查询时间范围内每天使用的媒体处理用量信息。
   1. 可以查询最近365天内的媒体处理统计数据。
   2. 查询时间跨度不超过90天。
                 * @param req DescribeUsageDataRequest
                 * @return DescribeUsageDataOutcome
                 */
                DescribeUsageDataOutcome DescribeUsageData(const Model::DescribeUsageDataRequest &request);
                void DescribeUsageDataAsync(const Model::DescribeUsageDataRequest& request, const DescribeUsageDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeUsageDataOutcomeCallable DescribeUsageDataCallable(const Model::DescribeUsageDataRequest& request);

                /**
                 *根据任务ID查询视频入库任务的状态。
                 * @param req DescribeVideoDatabaseEntryTaskDetailRequest
                 * @return DescribeVideoDatabaseEntryTaskDetailOutcome
                 */
                DescribeVideoDatabaseEntryTaskDetailOutcome DescribeVideoDatabaseEntryTaskDetail(const Model::DescribeVideoDatabaseEntryTaskDetailRequest &request);
                void DescribeVideoDatabaseEntryTaskDetailAsync(const Model::DescribeVideoDatabaseEntryTaskDetailRequest& request, const DescribeVideoDatabaseEntryTaskDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeVideoDatabaseEntryTaskDetailOutcomeCallable DescribeVideoDatabaseEntryTaskDetailCallable(const Model::DescribeVideoDatabaseEntryTaskDetailRequest& request);

                /**
                 *根据任务ID查询视频检索任务的状态。
                 * @param req DescribeVideoSearchTaskDetailRequest
                 * @return DescribeVideoSearchTaskDetailOutcome
                 */
                DescribeVideoSearchTaskDetailOutcome DescribeVideoSearchTaskDetail(const Model::DescribeVideoSearchTaskDetailRequest &request);
                void DescribeVideoSearchTaskDetailAsync(const Model::DescribeVideoSearchTaskDetailRequest& request, const DescribeVideoSearchTaskDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeVideoSearchTaskDetailOutcomeCallable DescribeVideoSearchTaskDetailCallable(const Model::DescribeVideoSearchTaskDetailRequest& request);

                /**
                 *同步接口。查询可用音色，支持通过类型、标签、语言等条件检索音色
                 * @param req DescribeVoicesRequest
                 * @return DescribeVoicesOutcome
                 */
                DescribeVoicesOutcome DescribeVoices(const Model::DescribeVoicesRequest &request);
                void DescribeVoicesAsync(const Model::DescribeVoicesRequest& request, const DescribeVoicesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeVoicesOutcomeCallable DescribeVoicesCallable(const Model::DescribeVoicesRequest& request);

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
                 *根据工作流 ID，获取工作流详情列表。
                 * @param req DescribeWorkflowsRequest
                 * @return DescribeWorkflowsOutcome
                 */
                DescribeWorkflowsOutcome DescribeWorkflows(const Model::DescribeWorkflowsRequest &request);
                void DescribeWorkflowsAsync(const Model::DescribeWorkflowsRequest& request, const DescribeWorkflowsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeWorkflowsOutcomeCallable DescribeWorkflowsCallable(const Model::DescribeWorkflowsRequest& request);

                /**
                 *禁用自动化触发编排任务。
                 * @param req DisableScheduleRequest
                 * @return DisableScheduleOutcome
                 */
                DisableScheduleOutcome DisableSchedule(const Model::DisableScheduleRequest &request);
                void DisableScheduleAsync(const Model::DisableScheduleRequest& request, const DisableScheduleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DisableScheduleOutcomeCallable DisableScheduleCallable(const Model::DisableScheduleRequest& request);

                /**
                 *禁用工作流。
                 * @param req DisableWorkflowRequest
                 * @return DisableWorkflowOutcome
                 */
                DisableWorkflowOutcome DisableWorkflow(const Model::DisableWorkflowRequest &request);
                void DisableWorkflowAsync(const Model::DisableWorkflowRequest& request, const DisableWorkflowAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DisableWorkflowOutcomeCallable DisableWorkflowCallable(const Model::DisableWorkflowRequest& request);

                /**
                 *批量解绑安全组下面关联的输入输出。
                 * @param req DisassociateSecurityGroupRequest
                 * @return DisassociateSecurityGroupOutcome
                 */
                DisassociateSecurityGroupOutcome DisassociateSecurityGroup(const Model::DisassociateSecurityGroupRequest &request);
                void DisassociateSecurityGroupAsync(const Model::DisassociateSecurityGroupRequest& request, const DisassociateSecurityGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DisassociateSecurityGroupOutcomeCallable DisassociateSecurityGroupCallable(const Model::DisassociateSecurityGroupRequest& request);

                /**
                 *对视频进行编辑，生成一个新的视频。编辑的功能包括：
 

一、**剪辑任务**：简单的视频剪辑，如剪辑、拼接等
1. 对一个文件进行剪辑，生成一个新的视频；
2. 对多个文件进行拼接，生成一个新的视频；
3. 对多个文件进行剪辑，然后再拼接，生成一个新的视频。

二、**合成任务**：通过接口描述信息，合成一个新的视频。
1. 多轨道（视频、音频、字幕）、多类型元素（视频、图片、音频、文字、空）
2. 图像级别：贴图、缩放、任意角度旋转、镜像等
3. 音频级别：音量控制、淡入淡出、混音等
4. 视频级别：转场、倍数播放、拼接、剪切、字幕、画中画、音画分离、出入场动效等
                 * @param req EditMediaRequest
                 * @return EditMediaOutcome
                 */
                EditMediaOutcome EditMedia(const Model::EditMediaRequest &request);
                void EditMediaAsync(const Model::EditMediaRequest& request, const EditMediaAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                EditMediaOutcomeCallable EditMediaCallable(const Model::EditMediaRequest& request);

                /**
                 *启用自动化触发编排任务。
                 * @param req EnableScheduleRequest
                 * @return EnableScheduleOutcome
                 */
                EnableScheduleOutcome EnableSchedule(const Model::EnableScheduleRequest &request);
                void EnableScheduleAsync(const Model::EnableScheduleRequest& request, const EnableScheduleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                EnableScheduleOutcomeCallable EnableScheduleCallable(const Model::EnableScheduleRequest& request);

                /**
                 *启用工作流。
                 * @param req EnableWorkflowRequest
                 * @return EnableWorkflowOutcome
                 */
                EnableWorkflowOutcome EnableWorkflow(const Model::EnableWorkflowRequest &request);
                void EnableWorkflowAsync(const Model::EnableWorkflowRequest& request, const EnableWorkflowAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                EnableWorkflowOutcomeCallable EnableWorkflowCallable(const Model::EnableWorkflowRequest& request);

                /**
                 *本接口仅用于定制开发的特殊场景，除非云媒体处理客服人员主动告知您需要使用本接口，其它情况请勿调用。
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
                 *对已发起的任务进行管理。
                 * @param req ManageTaskRequest
                 * @return ManageTaskOutcome
                 */
                ManageTaskOutcome ManageTask(const Model::ManageTaskRequest &request);
                void ManageTaskAsync(const Model::ManageTaskRequest& request, const ManageTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ManageTaskOutcomeCallable ManageTaskCallable(const Model::ManageTaskRequest& request);

                /**
                 *修改用户自定义内容分析模板。

注意：模板 ID 10000 以下的为系统预置模板，不允许修改。
                 * @param req ModifyAIAnalysisTemplateRequest
                 * @return ModifyAIAnalysisTemplateOutcome
                 */
                ModifyAIAnalysisTemplateOutcome ModifyAIAnalysisTemplate(const Model::ModifyAIAnalysisTemplateRequest &request);
                void ModifyAIAnalysisTemplateAsync(const Model::ModifyAIAnalysisTemplateRequest& request, const ModifyAIAnalysisTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyAIAnalysisTemplateOutcomeCallable ModifyAIAnalysisTemplateCallable(const Model::ModifyAIAnalysisTemplateRequest& request);

                /**
                 *修改用户自定义内容识别模板。
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
                 *智能字幕更新热词库接口
                 * @param req ModifyAsrHotwordsRequest
                 * @return ModifyAsrHotwordsOutcome
                 */
                ModifyAsrHotwordsOutcome ModifyAsrHotwords(const Model::ModifyAsrHotwordsRequest &request);
                void ModifyAsrHotwordsAsync(const Model::ModifyAsrHotwordsRequest& request, const ModifyAsrHotwordsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyAsrHotwordsOutcomeCallable ModifyAsrHotwordsCallable(const Model::ModifyAsrHotwordsRequest& request);

                /**
                 *修改用户自定义数字水印模板，数字水印类型不允许修改。
                 * @param req ModifyBlindWatermarkTemplateRequest
                 * @return ModifyBlindWatermarkTemplateOutcome
                 */
                ModifyBlindWatermarkTemplateOutcome ModifyBlindWatermarkTemplate(const Model::ModifyBlindWatermarkTemplateRequest &request);
                void ModifyBlindWatermarkTemplateAsync(const Model::ModifyBlindWatermarkTemplateRequest& request, const ModifyBlindWatermarkTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyBlindWatermarkTemplateOutcomeCallable ModifyBlindWatermarkTemplateCallable(const Model::ModifyBlindWatermarkTemplateRequest& request);

                /**
                 *修改用户自定义内容审核模板。
                 * @param req ModifyContentReviewTemplateRequest
                 * @return ModifyContentReviewTemplateOutcome
                 */
                ModifyContentReviewTemplateOutcome ModifyContentReviewTemplate(const Model::ModifyContentReviewTemplateRequest &request);
                void ModifyContentReviewTemplateAsync(const Model::ModifyContentReviewTemplateRequest& request, const ModifyContentReviewTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyContentReviewTemplateOutcomeCallable ModifyContentReviewTemplateCallable(const Model::ModifyContentReviewTemplateRequest& request);

                /**
                 *修改用户自定义雪碧图模板。
                 * @param req ModifyImageSpriteTemplateRequest
                 * @return ModifyImageSpriteTemplateOutcome
                 */
                ModifyImageSpriteTemplateOutcome ModifyImageSpriteTemplate(const Model::ModifyImageSpriteTemplateRequest &request);
                void ModifyImageSpriteTemplateAsync(const Model::ModifyImageSpriteTemplateRequest& request, const ModifyImageSpriteTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyImageSpriteTemplateOutcomeCallable ModifyImageSpriteTemplateCallable(const Model::ModifyImageSpriteTemplateRequest& request);

                /**
                 *修改直播录制模板
                 * @param req ModifyLiveRecordTemplateRequest
                 * @return ModifyLiveRecordTemplateOutcome
                 */
                ModifyLiveRecordTemplateOutcome ModifyLiveRecordTemplate(const Model::ModifyLiveRecordTemplateRequest &request);
                void ModifyLiveRecordTemplateAsync(const Model::ModifyLiveRecordTemplateRequest& request, const ModifyLiveRecordTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyLiveRecordTemplateOutcomeCallable ModifyLiveRecordTemplateCallable(const Model::ModifyLiveRecordTemplateRequest& request);

                /**
                 *该接口用于根据素材 ID，修改素材样本信息，包括名称、描述的修改，以及五官、标签的添加、删除、重置操作。五官删除操作需保证至少剩余 1 张图片，否则，请使用重置操作。
                 * @param req ModifyPersonSampleRequest
                 * @return ModifyPersonSampleOutcome
                 */
                ModifyPersonSampleOutcome ModifyPersonSample(const Model::ModifyPersonSampleRequest &request);
                void ModifyPersonSampleAsync(const Model::ModifyPersonSampleRequest& request, const ModifyPersonSampleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyPersonSampleOutcomeCallable ModifyPersonSampleCallable(const Model::ModifyPersonSampleRequest& request);

                /**
                 *修改图片处理模板。
                 * @param req ModifyProcessImageTemplateRequest
                 * @return ModifyProcessImageTemplateOutcome
                 */
                ModifyProcessImageTemplateOutcome ModifyProcessImageTemplate(const Model::ModifyProcessImageTemplateRequest &request);
                void ModifyProcessImageTemplateAsync(const Model::ModifyProcessImageTemplateRequest& request, const ModifyProcessImageTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyProcessImageTemplateOutcomeCallable ModifyProcessImageTemplateCallable(const Model::ModifyProcessImageTemplateRequest& request);

                /**
                 *修改媒体质检模板。
                 * @param req ModifyQualityControlTemplateRequest
                 * @return ModifyQualityControlTemplateOutcome
                 */
                ModifyQualityControlTemplateOutcome ModifyQualityControlTemplate(const Model::ModifyQualityControlTemplateRequest &request);
                void ModifyQualityControlTemplateAsync(const Model::ModifyQualityControlTemplateRequest& request, const ModifyQualityControlTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyQualityControlTemplateOutcomeCallable ModifyQualityControlTemplateCallable(const Model::ModifyQualityControlTemplateRequest& request);

                /**
                 *修改用户自定义采样截图模板。
                 * @param req ModifySampleSnapshotTemplateRequest
                 * @return ModifySampleSnapshotTemplateOutcome
                 */
                ModifySampleSnapshotTemplateOutcome ModifySampleSnapshotTemplate(const Model::ModifySampleSnapshotTemplateRequest &request);
                void ModifySampleSnapshotTemplateAsync(const Model::ModifySampleSnapshotTemplateRequest& request, const ModifySampleSnapshotTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifySampleSnapshotTemplateOutcomeCallable ModifySampleSnapshotTemplateCallable(const Model::ModifySampleSnapshotTemplateRequest& request);

                /**
                 *修改编排
                 * @param req ModifyScheduleRequest
                 * @return ModifyScheduleOutcome
                 */
                ModifyScheduleOutcome ModifySchedule(const Model::ModifyScheduleRequest &request);
                void ModifyScheduleAsync(const Model::ModifyScheduleRequest& request, const ModifyScheduleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyScheduleOutcomeCallable ModifyScheduleCallable(const Model::ModifyScheduleRequest& request);

                /**
                 *修改用户自定义智能擦除模板。
                 * @param req ModifySmartEraseTemplateRequest
                 * @return ModifySmartEraseTemplateOutcome
                 */
                ModifySmartEraseTemplateOutcome ModifySmartEraseTemplate(const Model::ModifySmartEraseTemplateRequest &request);
                void ModifySmartEraseTemplateAsync(const Model::ModifySmartEraseTemplateRequest& request, const ModifySmartEraseTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifySmartEraseTemplateOutcomeCallable ModifySmartEraseTemplateCallable(const Model::ModifySmartEraseTemplateRequest& request);

                /**
                 *修改用户自定义智能字幕模板。
                 * @param req ModifySmartSubtitleTemplateRequest
                 * @return ModifySmartSubtitleTemplateOutcome
                 */
                ModifySmartSubtitleTemplateOutcome ModifySmartSubtitleTemplate(const Model::ModifySmartSubtitleTemplateRequest &request);
                void ModifySmartSubtitleTemplateAsync(const Model::ModifySmartSubtitleTemplateRequest& request, const ModifySmartSubtitleTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifySmartSubtitleTemplateOutcomeCallable ModifySmartSubtitleTemplateCallable(const Model::ModifySmartSubtitleTemplateRequest& request);

                /**
                 *修改用户自定义指定时间点截图模板。
                 * @param req ModifySnapshotByTimeOffsetTemplateRequest
                 * @return ModifySnapshotByTimeOffsetTemplateOutcome
                 */
                ModifySnapshotByTimeOffsetTemplateOutcome ModifySnapshotByTimeOffsetTemplate(const Model::ModifySnapshotByTimeOffsetTemplateRequest &request);
                void ModifySnapshotByTimeOffsetTemplateAsync(const Model::ModifySnapshotByTimeOffsetTemplateRequest& request, const ModifySnapshotByTimeOffsetTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifySnapshotByTimeOffsetTemplateOutcomeCallable ModifySnapshotByTimeOffsetTemplateCallable(const Model::ModifySnapshotByTimeOffsetTemplateRequest& request);

                /**
                 *修改媒体传输的事件配置信息。
                 * @param req ModifyStreamLinkEventRequest
                 * @return ModifyStreamLinkEventOutcome
                 */
                ModifyStreamLinkEventOutcome ModifyStreamLinkEvent(const Model::ModifyStreamLinkEventRequest &request);
                void ModifyStreamLinkEventAsync(const Model::ModifyStreamLinkEventRequest& request, const ModifyStreamLinkEventAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyStreamLinkEventOutcomeCallable ModifyStreamLinkEventCallable(const Model::ModifyStreamLinkEventRequest& request);

                /**
                 *修改媒体传输的传输流配置信息。
                 * @param req ModifyStreamLinkFlowRequest
                 * @return ModifyStreamLinkFlowOutcome
                 */
                ModifyStreamLinkFlowOutcome ModifyStreamLinkFlow(const Model::ModifyStreamLinkFlowRequest &request);
                void ModifyStreamLinkFlowAsync(const Model::ModifyStreamLinkFlowRequest& request, const ModifyStreamLinkFlowAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyStreamLinkFlowOutcomeCallable ModifyStreamLinkFlowCallable(const Model::ModifyStreamLinkFlowRequest& request);

                /**
                 *修改媒体传输流的输入信息。
                 * @param req ModifyStreamLinkInputRequest
                 * @return ModifyStreamLinkInputOutcome
                 */
                ModifyStreamLinkInputOutcome ModifyStreamLinkInput(const Model::ModifyStreamLinkInputRequest &request);
                void ModifyStreamLinkInputAsync(const Model::ModifyStreamLinkInputRequest& request, const ModifyStreamLinkInputAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyStreamLinkInputOutcomeCallable ModifyStreamLinkInputCallable(const Model::ModifyStreamLinkInputRequest& request);

                /**
                 *修改媒体传输流的输出配置。
                 * @param req ModifyStreamLinkOutputInfoRequest
                 * @return ModifyStreamLinkOutputInfoOutcome
                 */
                ModifyStreamLinkOutputInfoOutcome ModifyStreamLinkOutputInfo(const Model::ModifyStreamLinkOutputInfoRequest &request);
                void ModifyStreamLinkOutputInfoAsync(const Model::ModifyStreamLinkOutputInfoRequest& request, const ModifyStreamLinkOutputInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyStreamLinkOutputInfoOutcomeCallable ModifyStreamLinkOutputInfoCallable(const Model::ModifyStreamLinkOutputInfoRequest& request);

                /**
                 *更新安全组。
                 * @param req ModifyStreamLinkSecurityGroupRequest
                 * @return ModifyStreamLinkSecurityGroupOutcome
                 */
                ModifyStreamLinkSecurityGroupOutcome ModifyStreamLinkSecurityGroup(const Model::ModifyStreamLinkSecurityGroupRequest &request);
                void ModifyStreamLinkSecurityGroupAsync(const Model::ModifyStreamLinkSecurityGroupRequest& request, const ModifyStreamLinkSecurityGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyStreamLinkSecurityGroupOutcomeCallable ModifyStreamLinkSecurityGroupCallable(const Model::ModifyStreamLinkSecurityGroupRequest& request);

                /**
                 *修改媒体包装Source信息。
                 * @param req ModifyStreamPackageLinearAssemblyChannelRequest
                 * @return ModifyStreamPackageLinearAssemblyChannelOutcome
                 */
                ModifyStreamPackageLinearAssemblyChannelOutcome ModifyStreamPackageLinearAssemblyChannel(const Model::ModifyStreamPackageLinearAssemblyChannelRequest &request);
                void ModifyStreamPackageLinearAssemblyChannelAsync(const Model::ModifyStreamPackageLinearAssemblyChannelRequest& request, const ModifyStreamPackageLinearAssemblyChannelAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyStreamPackageLinearAssemblyChannelOutcomeCallable ModifyStreamPackageLinearAssemblyChannelCallable(const Model::ModifyStreamPackageLinearAssemblyChannelRequest& request);

                /**
                 *修改媒体包装Program信息。
                 * @param req ModifyStreamPackageLinearAssemblyProgramRequest
                 * @return ModifyStreamPackageLinearAssemblyProgramOutcome
                 */
                ModifyStreamPackageLinearAssemblyProgramOutcome ModifyStreamPackageLinearAssemblyProgram(const Model::ModifyStreamPackageLinearAssemblyProgramRequest &request);
                void ModifyStreamPackageLinearAssemblyProgramAsync(const Model::ModifyStreamPackageLinearAssemblyProgramRequest& request, const ModifyStreamPackageLinearAssemblyProgramAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyStreamPackageLinearAssemblyProgramOutcomeCallable ModifyStreamPackageLinearAssemblyProgramCallable(const Model::ModifyStreamPackageLinearAssemblyProgramRequest& request);

                /**
                 *修改广告插入配置。
                 * @param req ModifyStreamPackageSSAIChannelRequest
                 * @return ModifyStreamPackageSSAIChannelOutcome
                 */
                ModifyStreamPackageSSAIChannelOutcome ModifyStreamPackageSSAIChannel(const Model::ModifyStreamPackageSSAIChannelRequest &request);
                void ModifyStreamPackageSSAIChannelAsync(const Model::ModifyStreamPackageSSAIChannelRequest& request, const ModifyStreamPackageSSAIChannelAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyStreamPackageSSAIChannelOutcomeCallable ModifyStreamPackageSSAIChannelCallable(const Model::ModifyStreamPackageSSAIChannelRequest& request);

                /**
                 *修改媒体包装Source信息。
                 * @param req ModifyStreamPackageSourceRequest
                 * @return ModifyStreamPackageSourceOutcome
                 */
                ModifyStreamPackageSourceOutcome ModifyStreamPackageSource(const Model::ModifyStreamPackageSourceRequest &request);
                void ModifyStreamPackageSourceAsync(const Model::ModifyStreamPackageSourceRequest& request, const ModifyStreamPackageSourceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyStreamPackageSourceOutcomeCallable ModifyStreamPackageSourceCallable(const Model::ModifyStreamPackageSourceRequest& request);

                /**
                 *修改媒体包装SourceLocation信息。
                 * @param req ModifyStreamPackageSourceLocationRequest
                 * @return ModifyStreamPackageSourceLocationOutcome
                 */
                ModifyStreamPackageSourceLocationOutcome ModifyStreamPackageSourceLocation(const Model::ModifyStreamPackageSourceLocationRequest &request);
                void ModifyStreamPackageSourceLocationAsync(const Model::ModifyStreamPackageSourceLocationRequest& request, const ModifyStreamPackageSourceLocationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyStreamPackageSourceLocationOutcomeCallable ModifyStreamPackageSourceLocationCallable(const Model::ModifyStreamPackageSourceLocationRequest& request);

                /**
                 *修改用户自定义字幕压制模板。
                 * @param req ModifySubtitleEmbedTemplateRequest
                 * @return ModifySubtitleEmbedTemplateOutcome
                 */
                ModifySubtitleEmbedTemplateOutcome ModifySubtitleEmbedTemplate(const Model::ModifySubtitleEmbedTemplateRequest &request);
                void ModifySubtitleEmbedTemplateAsync(const Model::ModifySubtitleEmbedTemplateRequest& request, const ModifySubtitleEmbedTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifySubtitleEmbedTemplateOutcomeCallable ModifySubtitleEmbedTemplateCallable(const Model::ModifySubtitleEmbedTemplateRequest& request);

                /**
                 *修改用户自定义转码模板信息。
                 * @param req ModifyTranscodeTemplateRequest
                 * @return ModifyTranscodeTemplateOutcome
                 */
                ModifyTranscodeTemplateOutcome ModifyTranscodeTemplate(const Model::ModifyTranscodeTemplateRequest &request);
                void ModifyTranscodeTemplateAsync(const Model::ModifyTranscodeTemplateRequest& request, const ModifyTranscodeTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyTranscodeTemplateOutcomeCallable ModifyTranscodeTemplateCallable(const Model::ModifyTranscodeTemplateRequest& request);

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
                 *从 CMQ 获取到消息后，从消息的 msgBody 字段中解析出 MPS 直播流处理事件通知的内容。
该接口不用于发起网络调用，而是用来帮助生成各个语言平台的 SDK，您可以参考 SDK 中的解析实现事件通知的解析。
                 * @param req ParseLiveStreamProcessNotificationRequest
                 * @return ParseLiveStreamProcessNotificationOutcome
                 */
                ParseLiveStreamProcessNotificationOutcome ParseLiveStreamProcessNotification(const Model::ParseLiveStreamProcessNotificationRequest &request);
                void ParseLiveStreamProcessNotificationAsync(const Model::ParseLiveStreamProcessNotificationRequest& request, const ParseLiveStreamProcessNotificationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ParseLiveStreamProcessNotificationOutcomeCallable ParseLiveStreamProcessNotificationCallable(const Model::ParseLiveStreamProcessNotificationRequest& request);

                /**
                 *从 CMQ 获取到消息后，从消息的 msgBody 字段中解析出 MPS 事件通知的内容。
该接口不用于发起网络调用，而是用来帮助生成各个语言平台的 SDK，您可以参考 SDK 中的解析函数，实现事件通知的解析。
                 * @param req ParseNotificationRequest
                 * @return ParseNotificationOutcome
                 */
                ParseNotificationOutcome ParseNotification(const Model::ParseNotificationRequest &request);
                void ParseNotificationAsync(const Model::ParseNotificationRequest& request, const ParseNotificationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ParseNotificationOutcomeCallable ParseNotificationCallable(const Model::ParseNotificationRequest& request);

                /**
                 *发起图片处理，功能包括：
1. 格式转换；
2. 图像增强；
3. 图像擦除;
                 * @param req ProcessImageRequest
                 * @return ProcessImageOutcome
                 */
                ProcessImageOutcome ProcessImage(const Model::ProcessImageRequest &request);
                void ProcessImageAsync(const Model::ProcessImageRequest& request, const ProcessImageAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ProcessImageOutcomeCallable ProcessImageCallable(const Model::ProcessImageRequest& request);

                /**
                 *对直播流媒体发起处理任务，功能包括：

* 智能内容审核（画面鉴黄、敏感信息检测、声音鉴黄）；
* 智能内容识别（人脸、文本全文、文本关键词、语音全文、语音关键词、语音实时翻译、物体识别、游戏打点）。
* 智能内容分析（拆条，集锦）。
* 质检（直播流格式诊断、音画内容检测（抖动、模糊、低光照、过曝光、黑边、白边、黑屏、白屏、花屏、噪点、马赛克、二维码等）、无参考打分）。
* 录制

直播流处理事件通知支持HTTP回调，也支持实时写入用户指定的消息队列 CMQ 中，用户从消息队列 CMQ 中获取事件通知结果，同时处理过程中存在输出文件的，会写入用户指定的输出文件的目标存储中。
                 * @param req ProcessLiveStreamRequest
                 * @return ProcessLiveStreamOutcome
                 */
                ProcessLiveStreamOutcome ProcessLiveStream(const Model::ProcessLiveStreamRequest &request);
                void ProcessLiveStreamAsync(const Model::ProcessLiveStreamRequest& request, const ProcessLiveStreamAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ProcessLiveStreamOutcomeCallable ProcessLiveStreamCallable(const Model::ProcessLiveStreamRequest& request);

                /**
                 *对 URL视频链接 或 COS 中的媒体文件发起处理任务，功能包括：
- 音视频转码（例如普通转码、极速高清转码、音视频增强、添加明水印、添加数字水印）；
- 音视频转自适应码流；
- 视频转动图；
- 对视频按指定时间点截图；
- 对视频采样截图；
- 对视频截图雪碧图；
- 媒体质检（例如媒体格式诊断、音画内容检测、无参考打分，其中音画内容检测主要针对抖动、模糊、低光照、过曝光、花屏、噪点、马赛克、二维码等问题）;
- 智能字幕（例如生成字幕并翻译）；
- 智能擦除（例如去水印、去字幕、隐私保护）；
- 智能内容审核（例如鉴黄、敏感信息检测）；
- 智能内容分析（例如标签、分类、封面、按帧标签、拆条、集锦、片头片尾、游戏打点）；
- 智能内容识别（例如人脸、文本全文、文本关键词、语音全文、语音关键词、语音翻译、物体识别）；
                 * @param req ProcessMediaRequest
                 * @return ProcessMediaOutcome
                 */
                ProcessMediaOutcome ProcessMedia(const Model::ProcessMediaRequest &request);
                void ProcessMediaAsync(const Model::ProcessMediaRequest& request, const ProcessMediaAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ProcessMediaOutcomeCallable ProcessMediaCallable(const Model::ProcessMediaRequest& request);

                /**
                 *同步接口，返回语音识别结果
                 * @param req RecognizeAudioRequest
                 * @return RecognizeAudioOutcome
                 */
                RecognizeAudioOutcome RecognizeAudio(const Model::RecognizeAudioRequest &request);
                void RecognizeAudioAsync(const Model::RecognizeAudioRequest& request, const RecognizeAudioAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                RecognizeAudioOutcomeCallable RecognizeAudioCallable(const Model::RecognizeAudioRequest& request);

                /**
                 *智能媒体识别，包含表情和动作识别。仅用于智学，其他调用无效。
                 * @param req RecognizeMediaForZhiXueRequest
                 * @return RecognizeMediaForZhiXueOutcome
                 */
                RecognizeMediaForZhiXueOutcome RecognizeMediaForZhiXue(const Model::RecognizeMediaForZhiXueRequest &request);
                void RecognizeMediaForZhiXueAsync(const Model::RecognizeMediaForZhiXueRequest& request, const RecognizeMediaForZhiXueAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                RecognizeMediaForZhiXueOutcomeCallable RecognizeMediaForZhiXueCallable(const Model::RecognizeMediaForZhiXueRequest& request);

                /**
                 *重新设置一个已经存在且处于禁用状态的工作流。
                 * @param req ResetWorkflowRequest
                 * @return ResetWorkflowOutcome
                 */
                ResetWorkflowOutcome ResetWorkflow(const Model::ResetWorkflowRequest &request);
                void ResetWorkflowAsync(const Model::ResetWorkflowRequest& request, const ResetWorkflowAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ResetWorkflowOutcomeCallable ResetWorkflowCallable(const Model::ResetWorkflowRequest& request);

                /**
                 *启动媒体传输流。
                 * @param req StartStreamLinkFlowRequest
                 * @return StartStreamLinkFlowOutcome
                 */
                StartStreamLinkFlowOutcome StartStreamLinkFlow(const Model::StartStreamLinkFlowRequest &request);
                void StartStreamLinkFlowAsync(const Model::StartStreamLinkFlowRequest& request, const StartStreamLinkFlowAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                StartStreamLinkFlowOutcomeCallable StartStreamLinkFlowCallable(const Model::StartStreamLinkFlowRequest& request);

                /**
                 *启动媒体包装频道。
                 * @param req StartStreamPackageLinearAssemblyChannelRequest
                 * @return StartStreamPackageLinearAssemblyChannelOutcome
                 */
                StartStreamPackageLinearAssemblyChannelOutcome StartStreamPackageLinearAssemblyChannel(const Model::StartStreamPackageLinearAssemblyChannelRequest &request);
                void StartStreamPackageLinearAssemblyChannelAsync(const Model::StartStreamPackageLinearAssemblyChannelRequest& request, const StartStreamPackageLinearAssemblyChannelAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                StartStreamPackageLinearAssemblyChannelOutcomeCallable StartStreamPackageLinearAssemblyChannelCallable(const Model::StartStreamPackageLinearAssemblyChannelRequest& request);

                /**
                 *停止媒体传输流。
                 * @param req StopStreamLinkFlowRequest
                 * @return StopStreamLinkFlowOutcome
                 */
                StopStreamLinkFlowOutcome StopStreamLinkFlow(const Model::StopStreamLinkFlowRequest &request);
                void StopStreamLinkFlowAsync(const Model::StopStreamLinkFlowRequest& request, const StopStreamLinkFlowAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                StopStreamLinkFlowOutcomeCallable StopStreamLinkFlowCallable(const Model::StopStreamLinkFlowRequest& request);

                /**
                 *停止线性组装频道。
                 * @param req StopStreamPackageLinearAssemblyChannelRequest
                 * @return StopStreamPackageLinearAssemblyChannelOutcome
                 */
                StopStreamPackageLinearAssemblyChannelOutcome StopStreamPackageLinearAssemblyChannel(const Model::StopStreamPackageLinearAssemblyChannelRequest &request);
                void StopStreamPackageLinearAssemblyChannelAsync(const Model::StopStreamPackageLinearAssemblyChannelRequest& request, const StopStreamPackageLinearAssemblyChannelAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                StopStreamPackageLinearAssemblyChannelOutcomeCallable StopStreamPackageLinearAssemblyChannelCallable(const Model::StopStreamPackageLinearAssemblyChannelRequest& request);

                /**
                 *同步接口，返回克隆音色Id或合成音频结果
                 * @param req SyncDubbingRequest
                 * @return SyncDubbingOutcome
                 */
                SyncDubbingOutcome SyncDubbing(const Model::SyncDubbingRequest &request);
                void SyncDubbingAsync(const Model::SyncDubbingRequest& request, const SyncDubbingAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                SyncDubbingOutcomeCallable SyncDubbingCallable(const Model::SyncDubbingRequest& request);

                /**
                 *文本翻译
                 * @param req TextTranslationRequest
                 * @return TextTranslationOutcome
                 */
                TextTranslationOutcome TextTranslation(const Model::TextTranslationRequest &request);
                void TextTranslationAsync(const Model::TextTranslationRequest& request, const TextTranslationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                TextTranslationOutcomeCallable TextTranslationCallable(const Model::TextTranslationRequest& request);

                /**
                 *提取视频中的盲水印。
                 * @param req WithdrawsWatermarkRequest
                 * @return WithdrawsWatermarkOutcome
                 */
                WithdrawsWatermarkOutcome WithdrawsWatermark(const Model::WithdrawsWatermarkRequest &request);
                void WithdrawsWatermarkAsync(const Model::WithdrawsWatermarkRequest& request, const WithdrawsWatermarkAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                WithdrawsWatermarkOutcomeCallable WithdrawsWatermarkCallable(const Model::WithdrawsWatermarkRequest& request);

            };
        }
    }
}

#endif // !TENCENTCLOUD_MPS_V20190612_MPSCLIENT_H_
