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

#ifndef TENCENTCLOUD_IOTVIDEOINDUSTRY_V20201201_IOTVIDEOINDUSTRYCLIENT_H_
#define TENCENTCLOUD_IOTVIDEOINDUSTRY_V20201201_IOTVIDEOINDUSTRYCLIENT_H_

#include <functional>
#include <future>
#include <tencentcloud/core/AbstractClient.h>
#include <tencentcloud/core/Credential.h>
#include <tencentcloud/core/profile/ClientProfile.h>
#include <tencentcloud/core/AsyncCallerContext.h>
#include <tencentcloud/iotvideoindustry/v20201201/model/BindGroupDevicesRequest.h>
#include <tencentcloud/iotvideoindustry/v20201201/model/BindGroupDevicesResponse.h>
#include <tencentcloud/iotvideoindustry/v20201201/model/ControlChannelLocalRecordRequest.h>
#include <tencentcloud/iotvideoindustry/v20201201/model/ControlChannelLocalRecordResponse.h>
#include <tencentcloud/iotvideoindustry/v20201201/model/ControlChannelPTZRequest.h>
#include <tencentcloud/iotvideoindustry/v20201201/model/ControlChannelPTZResponse.h>
#include <tencentcloud/iotvideoindustry/v20201201/model/ControlDevicePTZRequest.h>
#include <tencentcloud/iotvideoindustry/v20201201/model/ControlDevicePTZResponse.h>
#include <tencentcloud/iotvideoindustry/v20201201/model/ControlHomePositionRequest.h>
#include <tencentcloud/iotvideoindustry/v20201201/model/ControlHomePositionResponse.h>
#include <tencentcloud/iotvideoindustry/v20201201/model/ControlPresetRequest.h>
#include <tencentcloud/iotvideoindustry/v20201201/model/ControlPresetResponse.h>
#include <tencentcloud/iotvideoindustry/v20201201/model/ControlRecordStreamRequest.h>
#include <tencentcloud/iotvideoindustry/v20201201/model/ControlRecordStreamResponse.h>
#include <tencentcloud/iotvideoindustry/v20201201/model/CreateDeviceRequest.h>
#include <tencentcloud/iotvideoindustry/v20201201/model/CreateDeviceResponse.h>
#include <tencentcloud/iotvideoindustry/v20201201/model/CreateDeviceGroupRequest.h>
#include <tencentcloud/iotvideoindustry/v20201201/model/CreateDeviceGroupResponse.h>
#include <tencentcloud/iotvideoindustry/v20201201/model/CreateLiveChannelRequest.h>
#include <tencentcloud/iotvideoindustry/v20201201/model/CreateLiveChannelResponse.h>
#include <tencentcloud/iotvideoindustry/v20201201/model/CreateLiveRecordPlanRequest.h>
#include <tencentcloud/iotvideoindustry/v20201201/model/CreateLiveRecordPlanResponse.h>
#include <tencentcloud/iotvideoindustry/v20201201/model/CreateMessageForwardRequest.h>
#include <tencentcloud/iotvideoindustry/v20201201/model/CreateMessageForwardResponse.h>
#include <tencentcloud/iotvideoindustry/v20201201/model/CreateRecordPlanRequest.h>
#include <tencentcloud/iotvideoindustry/v20201201/model/CreateRecordPlanResponse.h>
#include <tencentcloud/iotvideoindustry/v20201201/model/CreateRecordingPlanRequest.h>
#include <tencentcloud/iotvideoindustry/v20201201/model/CreateRecordingPlanResponse.h>
#include <tencentcloud/iotvideoindustry/v20201201/model/CreateSceneRequest.h>
#include <tencentcloud/iotvideoindustry/v20201201/model/CreateSceneResponse.h>
#include <tencentcloud/iotvideoindustry/v20201201/model/CreateTimeTemplateRequest.h>
#include <tencentcloud/iotvideoindustry/v20201201/model/CreateTimeTemplateResponse.h>
#include <tencentcloud/iotvideoindustry/v20201201/model/DeleteChannelRequest.h>
#include <tencentcloud/iotvideoindustry/v20201201/model/DeleteChannelResponse.h>
#include <tencentcloud/iotvideoindustry/v20201201/model/DeleteDeviceRequest.h>
#include <tencentcloud/iotvideoindustry/v20201201/model/DeleteDeviceResponse.h>
#include <tencentcloud/iotvideoindustry/v20201201/model/DeleteDeviceGroupRequest.h>
#include <tencentcloud/iotvideoindustry/v20201201/model/DeleteDeviceGroupResponse.h>
#include <tencentcloud/iotvideoindustry/v20201201/model/DeleteLiveChannelRequest.h>
#include <tencentcloud/iotvideoindustry/v20201201/model/DeleteLiveChannelResponse.h>
#include <tencentcloud/iotvideoindustry/v20201201/model/DeleteLiveRecordPlanRequest.h>
#include <tencentcloud/iotvideoindustry/v20201201/model/DeleteLiveRecordPlanResponse.h>
#include <tencentcloud/iotvideoindustry/v20201201/model/DeleteLiveVideoListRequest.h>
#include <tencentcloud/iotvideoindustry/v20201201/model/DeleteLiveVideoListResponse.h>
#include <tencentcloud/iotvideoindustry/v20201201/model/DeleteMessageForwardRequest.h>
#include <tencentcloud/iotvideoindustry/v20201201/model/DeleteMessageForwardResponse.h>
#include <tencentcloud/iotvideoindustry/v20201201/model/DeleteRecordPlanRequest.h>
#include <tencentcloud/iotvideoindustry/v20201201/model/DeleteRecordPlanResponse.h>
#include <tencentcloud/iotvideoindustry/v20201201/model/DeleteRecordingPlanRequest.h>
#include <tencentcloud/iotvideoindustry/v20201201/model/DeleteRecordingPlanResponse.h>
#include <tencentcloud/iotvideoindustry/v20201201/model/DeleteSceneRequest.h>
#include <tencentcloud/iotvideoindustry/v20201201/model/DeleteSceneResponse.h>
#include <tencentcloud/iotvideoindustry/v20201201/model/DeleteTimeTemplateRequest.h>
#include <tencentcloud/iotvideoindustry/v20201201/model/DeleteTimeTemplateResponse.h>
#include <tencentcloud/iotvideoindustry/v20201201/model/DeleteVideoListRequest.h>
#include <tencentcloud/iotvideoindustry/v20201201/model/DeleteVideoListResponse.h>
#include <tencentcloud/iotvideoindustry/v20201201/model/DeleteWarningRequest.h>
#include <tencentcloud/iotvideoindustry/v20201201/model/DeleteWarningResponse.h>
#include <tencentcloud/iotvideoindustry/v20201201/model/DescribeAbnormalEventsRequest.h>
#include <tencentcloud/iotvideoindustry/v20201201/model/DescribeAbnormalEventsResponse.h>
#include <tencentcloud/iotvideoindustry/v20201201/model/DescribeAllDeviceListRequest.h>
#include <tencentcloud/iotvideoindustry/v20201201/model/DescribeAllDeviceListResponse.h>
#include <tencentcloud/iotvideoindustry/v20201201/model/DescribeBindSceneChannelsRequest.h>
#include <tencentcloud/iotvideoindustry/v20201201/model/DescribeBindSceneChannelsResponse.h>
#include <tencentcloud/iotvideoindustry/v20201201/model/DescribeBindSceneDevicesRequest.h>
#include <tencentcloud/iotvideoindustry/v20201201/model/DescribeBindSceneDevicesResponse.h>
#include <tencentcloud/iotvideoindustry/v20201201/model/DescribeChannelLiveStreamURLRequest.h>
#include <tencentcloud/iotvideoindustry/v20201201/model/DescribeChannelLiveStreamURLResponse.h>
#include <tencentcloud/iotvideoindustry/v20201201/model/DescribeChannelLocalRecordURLRequest.h>
#include <tencentcloud/iotvideoindustry/v20201201/model/DescribeChannelLocalRecordURLResponse.h>
#include <tencentcloud/iotvideoindustry/v20201201/model/DescribeChannelStreamURLRequest.h>
#include <tencentcloud/iotvideoindustry/v20201201/model/DescribeChannelStreamURLResponse.h>
#include <tencentcloud/iotvideoindustry/v20201201/model/DescribeChannelsRequest.h>
#include <tencentcloud/iotvideoindustry/v20201201/model/DescribeChannelsResponse.h>
#include <tencentcloud/iotvideoindustry/v20201201/model/DescribeChannelsByLiveRecordPlanRequest.h>
#include <tencentcloud/iotvideoindustry/v20201201/model/DescribeChannelsByLiveRecordPlanResponse.h>
#include <tencentcloud/iotvideoindustry/v20201201/model/DescribeCurrentDeviceDataRequest.h>
#include <tencentcloud/iotvideoindustry/v20201201/model/DescribeCurrentDeviceDataResponse.h>
#include <tencentcloud/iotvideoindustry/v20201201/model/DescribeDeviceRequest.h>
#include <tencentcloud/iotvideoindustry/v20201201/model/DescribeDeviceResponse.h>
#include <tencentcloud/iotvideoindustry/v20201201/model/DescribeDeviceEventRequest.h>
#include <tencentcloud/iotvideoindustry/v20201201/model/DescribeDeviceEventResponse.h>
#include <tencentcloud/iotvideoindustry/v20201201/model/DescribeDeviceGroupRequest.h>
#include <tencentcloud/iotvideoindustry/v20201201/model/DescribeDeviceGroupResponse.h>
#include <tencentcloud/iotvideoindustry/v20201201/model/DescribeDeviceListRequest.h>
#include <tencentcloud/iotvideoindustry/v20201201/model/DescribeDeviceListResponse.h>
#include <tencentcloud/iotvideoindustry/v20201201/model/DescribeDeviceMonitorDataRequest.h>
#include <tencentcloud/iotvideoindustry/v20201201/model/DescribeDeviceMonitorDataResponse.h>
#include <tencentcloud/iotvideoindustry/v20201201/model/DescribeDevicePassWordRequest.h>
#include <tencentcloud/iotvideoindustry/v20201201/model/DescribeDevicePassWordResponse.h>
#include <tencentcloud/iotvideoindustry/v20201201/model/DescribeDeviceStreamsRequest.h>
#include <tencentcloud/iotvideoindustry/v20201201/model/DescribeDeviceStreamsResponse.h>
#include <tencentcloud/iotvideoindustry/v20201201/model/DescribeGroupByIdRequest.h>
#include <tencentcloud/iotvideoindustry/v20201201/model/DescribeGroupByIdResponse.h>
#include <tencentcloud/iotvideoindustry/v20201201/model/DescribeGroupByPathRequest.h>
#include <tencentcloud/iotvideoindustry/v20201201/model/DescribeGroupByPathResponse.h>
#include <tencentcloud/iotvideoindustry/v20201201/model/DescribeGroupDevicesRequest.h>
#include <tencentcloud/iotvideoindustry/v20201201/model/DescribeGroupDevicesResponse.h>
#include <tencentcloud/iotvideoindustry/v20201201/model/DescribeGroupsRequest.h>
#include <tencentcloud/iotvideoindustry/v20201201/model/DescribeGroupsResponse.h>
#include <tencentcloud/iotvideoindustry/v20201201/model/DescribeIPCChannelsRequest.h>
#include <tencentcloud/iotvideoindustry/v20201201/model/DescribeIPCChannelsResponse.h>
#include <tencentcloud/iotvideoindustry/v20201201/model/DescribeLiveChannelRequest.h>
#include <tencentcloud/iotvideoindustry/v20201201/model/DescribeLiveChannelResponse.h>
#include <tencentcloud/iotvideoindustry/v20201201/model/DescribeLiveChannelListRequest.h>
#include <tencentcloud/iotvideoindustry/v20201201/model/DescribeLiveChannelListResponse.h>
#include <tencentcloud/iotvideoindustry/v20201201/model/DescribeLiveRecordPlanByIdRequest.h>
#include <tencentcloud/iotvideoindustry/v20201201/model/DescribeLiveRecordPlanByIdResponse.h>
#include <tencentcloud/iotvideoindustry/v20201201/model/DescribeLiveRecordPlanIdsRequest.h>
#include <tencentcloud/iotvideoindustry/v20201201/model/DescribeLiveRecordPlanIdsResponse.h>
#include <tencentcloud/iotvideoindustry/v20201201/model/DescribeLiveStreamRequest.h>
#include <tencentcloud/iotvideoindustry/v20201201/model/DescribeLiveStreamResponse.h>
#include <tencentcloud/iotvideoindustry/v20201201/model/DescribeLiveVideoListRequest.h>
#include <tencentcloud/iotvideoindustry/v20201201/model/DescribeLiveVideoListResponse.h>
#include <tencentcloud/iotvideoindustry/v20201201/model/DescribeMessageForwardRequest.h>
#include <tencentcloud/iotvideoindustry/v20201201/model/DescribeMessageForwardResponse.h>
#include <tencentcloud/iotvideoindustry/v20201201/model/DescribeMessageForwardsRequest.h>
#include <tencentcloud/iotvideoindustry/v20201201/model/DescribeMessageForwardsResponse.h>
#include <tencentcloud/iotvideoindustry/v20201201/model/DescribeMonitorDataByDateRequest.h>
#include <tencentcloud/iotvideoindustry/v20201201/model/DescribeMonitorDataByDateResponse.h>
#include <tencentcloud/iotvideoindustry/v20201201/model/DescribePresetListRequest.h>
#include <tencentcloud/iotvideoindustry/v20201201/model/DescribePresetListResponse.h>
#include <tencentcloud/iotvideoindustry/v20201201/model/DescribeRecordDatesByChannelRequest.h>
#include <tencentcloud/iotvideoindustry/v20201201/model/DescribeRecordDatesByChannelResponse.h>
#include <tencentcloud/iotvideoindustry/v20201201/model/DescribeRecordDatesByLiveRequest.h>
#include <tencentcloud/iotvideoindustry/v20201201/model/DescribeRecordDatesByLiveResponse.h>
#include <tencentcloud/iotvideoindustry/v20201201/model/DescribeRecordStreamRequest.h>
#include <tencentcloud/iotvideoindustry/v20201201/model/DescribeRecordStreamResponse.h>
#include <tencentcloud/iotvideoindustry/v20201201/model/DescribeRecordingPlanByIdRequest.h>
#include <tencentcloud/iotvideoindustry/v20201201/model/DescribeRecordingPlanByIdResponse.h>
#include <tencentcloud/iotvideoindustry/v20201201/model/DescribeRecordingPlansRequest.h>
#include <tencentcloud/iotvideoindustry/v20201201/model/DescribeRecordingPlansResponse.h>
#include <tencentcloud/iotvideoindustry/v20201201/model/DescribeSIPServerRequest.h>
#include <tencentcloud/iotvideoindustry/v20201201/model/DescribeSIPServerResponse.h>
#include <tencentcloud/iotvideoindustry/v20201201/model/DescribeSceneRequest.h>
#include <tencentcloud/iotvideoindustry/v20201201/model/DescribeSceneResponse.h>
#include <tencentcloud/iotvideoindustry/v20201201/model/DescribeScenesRequest.h>
#include <tencentcloud/iotvideoindustry/v20201201/model/DescribeScenesResponse.h>
#include <tencentcloud/iotvideoindustry/v20201201/model/DescribeStatisticDetailsRequest.h>
#include <tencentcloud/iotvideoindustry/v20201201/model/DescribeStatisticDetailsResponse.h>
#include <tencentcloud/iotvideoindustry/v20201201/model/DescribeStatisticSummaryRequest.h>
#include <tencentcloud/iotvideoindustry/v20201201/model/DescribeStatisticSummaryResponse.h>
#include <tencentcloud/iotvideoindustry/v20201201/model/DescribeSubGroupsRequest.h>
#include <tencentcloud/iotvideoindustry/v20201201/model/DescribeSubGroupsResponse.h>
#include <tencentcloud/iotvideoindustry/v20201201/model/DescribeSubscriptionStatusRequest.h>
#include <tencentcloud/iotvideoindustry/v20201201/model/DescribeSubscriptionStatusResponse.h>
#include <tencentcloud/iotvideoindustry/v20201201/model/DescribeVideoListRequest.h>
#include <tencentcloud/iotvideoindustry/v20201201/model/DescribeVideoListResponse.h>
#include <tencentcloud/iotvideoindustry/v20201201/model/DescribeVideoListByChannelRequest.h>
#include <tencentcloud/iotvideoindustry/v20201201/model/DescribeVideoListByChannelResponse.h>
#include <tencentcloud/iotvideoindustry/v20201201/model/DescribeWarnModRequest.h>
#include <tencentcloud/iotvideoindustry/v20201201/model/DescribeWarnModResponse.h>
#include <tencentcloud/iotvideoindustry/v20201201/model/DescribeWarningsRequest.h>
#include <tencentcloud/iotvideoindustry/v20201201/model/DescribeWarningsResponse.h>
#include <tencentcloud/iotvideoindustry/v20201201/model/DescribeXP2PDataRequest.h>
#include <tencentcloud/iotvideoindustry/v20201201/model/DescribeXP2PDataResponse.h>
#include <tencentcloud/iotvideoindustry/v20201201/model/GetRecordDatesByDevRequest.h>
#include <tencentcloud/iotvideoindustry/v20201201/model/GetRecordDatesByDevResponse.h>
#include <tencentcloud/iotvideoindustry/v20201201/model/GetRecordPlanByDevRequest.h>
#include <tencentcloud/iotvideoindustry/v20201201/model/GetRecordPlanByDevResponse.h>
#include <tencentcloud/iotvideoindustry/v20201201/model/GetRecordPlanByIdRequest.h>
#include <tencentcloud/iotvideoindustry/v20201201/model/GetRecordPlanByIdResponse.h>
#include <tencentcloud/iotvideoindustry/v20201201/model/GetRecordPlansRequest.h>
#include <tencentcloud/iotvideoindustry/v20201201/model/GetRecordPlansResponse.h>
#include <tencentcloud/iotvideoindustry/v20201201/model/GetTimeTemplateByIdRequest.h>
#include <tencentcloud/iotvideoindustry/v20201201/model/GetTimeTemplateByIdResponse.h>
#include <tencentcloud/iotvideoindustry/v20201201/model/GetTimeTemplatesRequest.h>
#include <tencentcloud/iotvideoindustry/v20201201/model/GetTimeTemplatesResponse.h>
#include <tencentcloud/iotvideoindustry/v20201201/model/GetVideoListByConRequest.h>
#include <tencentcloud/iotvideoindustry/v20201201/model/GetVideoListByConResponse.h>
#include <tencentcloud/iotvideoindustry/v20201201/model/ModifyBindPlanLiveChannelRequest.h>
#include <tencentcloud/iotvideoindustry/v20201201/model/ModifyBindPlanLiveChannelResponse.h>
#include <tencentcloud/iotvideoindustry/v20201201/model/ModifyBindRecordingPlanRequest.h>
#include <tencentcloud/iotvideoindustry/v20201201/model/ModifyBindRecordingPlanResponse.h>
#include <tencentcloud/iotvideoindustry/v20201201/model/ModifyBindSceneChannelsRequest.h>
#include <tencentcloud/iotvideoindustry/v20201201/model/ModifyBindSceneChannelsResponse.h>
#include <tencentcloud/iotvideoindustry/v20201201/model/ModifyBindSceneDeviceRequest.h>
#include <tencentcloud/iotvideoindustry/v20201201/model/ModifyBindSceneDeviceResponse.h>
#include <tencentcloud/iotvideoindustry/v20201201/model/ModifyDeviceDataRequest.h>
#include <tencentcloud/iotvideoindustry/v20201201/model/ModifyDeviceDataResponse.h>
#include <tencentcloud/iotvideoindustry/v20201201/model/ModifyLiveChannelRequest.h>
#include <tencentcloud/iotvideoindustry/v20201201/model/ModifyLiveChannelResponse.h>
#include <tencentcloud/iotvideoindustry/v20201201/model/ModifyLiveRecordPlanRequest.h>
#include <tencentcloud/iotvideoindustry/v20201201/model/ModifyLiveRecordPlanResponse.h>
#include <tencentcloud/iotvideoindustry/v20201201/model/ModifyLiveVideoRequest.h>
#include <tencentcloud/iotvideoindustry/v20201201/model/ModifyLiveVideoResponse.h>
#include <tencentcloud/iotvideoindustry/v20201201/model/ModifyMessageForwardRequest.h>
#include <tencentcloud/iotvideoindustry/v20201201/model/ModifyMessageForwardResponse.h>
#include <tencentcloud/iotvideoindustry/v20201201/model/ModifyPresetRequest.h>
#include <tencentcloud/iotvideoindustry/v20201201/model/ModifyPresetResponse.h>
#include <tencentcloud/iotvideoindustry/v20201201/model/ModifyRecordingPlanRequest.h>
#include <tencentcloud/iotvideoindustry/v20201201/model/ModifyRecordingPlanResponse.h>
#include <tencentcloud/iotvideoindustry/v20201201/model/ModifySceneRequest.h>
#include <tencentcloud/iotvideoindustry/v20201201/model/ModifySceneResponse.h>
#include <tencentcloud/iotvideoindustry/v20201201/model/ModifySubscriptionStatusRequest.h>
#include <tencentcloud/iotvideoindustry/v20201201/model/ModifySubscriptionStatusResponse.h>
#include <tencentcloud/iotvideoindustry/v20201201/model/ModifyVideoInfoRequest.h>
#include <tencentcloud/iotvideoindustry/v20201201/model/ModifyVideoInfoResponse.h>
#include <tencentcloud/iotvideoindustry/v20201201/model/ResetWarningRequest.h>
#include <tencentcloud/iotvideoindustry/v20201201/model/ResetWarningResponse.h>
#include <tencentcloud/iotvideoindustry/v20201201/model/UpdateDeviceGroupRequest.h>
#include <tencentcloud/iotvideoindustry/v20201201/model/UpdateDeviceGroupResponse.h>
#include <tencentcloud/iotvideoindustry/v20201201/model/UpdateDevicePassWordRequest.h>
#include <tencentcloud/iotvideoindustry/v20201201/model/UpdateDevicePassWordResponse.h>
#include <tencentcloud/iotvideoindustry/v20201201/model/UpdateRecordPlanRequest.h>
#include <tencentcloud/iotvideoindustry/v20201201/model/UpdateRecordPlanResponse.h>
#include <tencentcloud/iotvideoindustry/v20201201/model/UpdateTimeTemplateRequest.h>
#include <tencentcloud/iotvideoindustry/v20201201/model/UpdateTimeTemplateResponse.h>


namespace TencentCloud
{
    namespace Iotvideoindustry
    {
        namespace V20201201
        {
            class IotvideoindustryClient : public AbstractClient
            {
            public:
                IotvideoindustryClient(const Credential &credential, const std::string &region);
                IotvideoindustryClient(const Credential &credential, const std::string &region, const ClientProfile &profile);

                typedef Outcome<Core::Error, Model::BindGroupDevicesResponse> BindGroupDevicesOutcome;
                typedef std::future<BindGroupDevicesOutcome> BindGroupDevicesOutcomeCallable;
                typedef std::function<void(const IotvideoindustryClient*, const Model::BindGroupDevicesRequest&, BindGroupDevicesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> BindGroupDevicesAsyncHandler;
                typedef Outcome<Core::Error, Model::ControlChannelLocalRecordResponse> ControlChannelLocalRecordOutcome;
                typedef std::future<ControlChannelLocalRecordOutcome> ControlChannelLocalRecordOutcomeCallable;
                typedef std::function<void(const IotvideoindustryClient*, const Model::ControlChannelLocalRecordRequest&, ControlChannelLocalRecordOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ControlChannelLocalRecordAsyncHandler;
                typedef Outcome<Core::Error, Model::ControlChannelPTZResponse> ControlChannelPTZOutcome;
                typedef std::future<ControlChannelPTZOutcome> ControlChannelPTZOutcomeCallable;
                typedef std::function<void(const IotvideoindustryClient*, const Model::ControlChannelPTZRequest&, ControlChannelPTZOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ControlChannelPTZAsyncHandler;
                typedef Outcome<Core::Error, Model::ControlDevicePTZResponse> ControlDevicePTZOutcome;
                typedef std::future<ControlDevicePTZOutcome> ControlDevicePTZOutcomeCallable;
                typedef std::function<void(const IotvideoindustryClient*, const Model::ControlDevicePTZRequest&, ControlDevicePTZOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ControlDevicePTZAsyncHandler;
                typedef Outcome<Core::Error, Model::ControlHomePositionResponse> ControlHomePositionOutcome;
                typedef std::future<ControlHomePositionOutcome> ControlHomePositionOutcomeCallable;
                typedef std::function<void(const IotvideoindustryClient*, const Model::ControlHomePositionRequest&, ControlHomePositionOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ControlHomePositionAsyncHandler;
                typedef Outcome<Core::Error, Model::ControlPresetResponse> ControlPresetOutcome;
                typedef std::future<ControlPresetOutcome> ControlPresetOutcomeCallable;
                typedef std::function<void(const IotvideoindustryClient*, const Model::ControlPresetRequest&, ControlPresetOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ControlPresetAsyncHandler;
                typedef Outcome<Core::Error, Model::ControlRecordStreamResponse> ControlRecordStreamOutcome;
                typedef std::future<ControlRecordStreamOutcome> ControlRecordStreamOutcomeCallable;
                typedef std::function<void(const IotvideoindustryClient*, const Model::ControlRecordStreamRequest&, ControlRecordStreamOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ControlRecordStreamAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateDeviceResponse> CreateDeviceOutcome;
                typedef std::future<CreateDeviceOutcome> CreateDeviceOutcomeCallable;
                typedef std::function<void(const IotvideoindustryClient*, const Model::CreateDeviceRequest&, CreateDeviceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateDeviceAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateDeviceGroupResponse> CreateDeviceGroupOutcome;
                typedef std::future<CreateDeviceGroupOutcome> CreateDeviceGroupOutcomeCallable;
                typedef std::function<void(const IotvideoindustryClient*, const Model::CreateDeviceGroupRequest&, CreateDeviceGroupOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateDeviceGroupAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateLiveChannelResponse> CreateLiveChannelOutcome;
                typedef std::future<CreateLiveChannelOutcome> CreateLiveChannelOutcomeCallable;
                typedef std::function<void(const IotvideoindustryClient*, const Model::CreateLiveChannelRequest&, CreateLiveChannelOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateLiveChannelAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateLiveRecordPlanResponse> CreateLiveRecordPlanOutcome;
                typedef std::future<CreateLiveRecordPlanOutcome> CreateLiveRecordPlanOutcomeCallable;
                typedef std::function<void(const IotvideoindustryClient*, const Model::CreateLiveRecordPlanRequest&, CreateLiveRecordPlanOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateLiveRecordPlanAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateMessageForwardResponse> CreateMessageForwardOutcome;
                typedef std::future<CreateMessageForwardOutcome> CreateMessageForwardOutcomeCallable;
                typedef std::function<void(const IotvideoindustryClient*, const Model::CreateMessageForwardRequest&, CreateMessageForwardOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateMessageForwardAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateRecordPlanResponse> CreateRecordPlanOutcome;
                typedef std::future<CreateRecordPlanOutcome> CreateRecordPlanOutcomeCallable;
                typedef std::function<void(const IotvideoindustryClient*, const Model::CreateRecordPlanRequest&, CreateRecordPlanOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateRecordPlanAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateRecordingPlanResponse> CreateRecordingPlanOutcome;
                typedef std::future<CreateRecordingPlanOutcome> CreateRecordingPlanOutcomeCallable;
                typedef std::function<void(const IotvideoindustryClient*, const Model::CreateRecordingPlanRequest&, CreateRecordingPlanOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateRecordingPlanAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateSceneResponse> CreateSceneOutcome;
                typedef std::future<CreateSceneOutcome> CreateSceneOutcomeCallable;
                typedef std::function<void(const IotvideoindustryClient*, const Model::CreateSceneRequest&, CreateSceneOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateSceneAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateTimeTemplateResponse> CreateTimeTemplateOutcome;
                typedef std::future<CreateTimeTemplateOutcome> CreateTimeTemplateOutcomeCallable;
                typedef std::function<void(const IotvideoindustryClient*, const Model::CreateTimeTemplateRequest&, CreateTimeTemplateOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateTimeTemplateAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteChannelResponse> DeleteChannelOutcome;
                typedef std::future<DeleteChannelOutcome> DeleteChannelOutcomeCallable;
                typedef std::function<void(const IotvideoindustryClient*, const Model::DeleteChannelRequest&, DeleteChannelOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteChannelAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteDeviceResponse> DeleteDeviceOutcome;
                typedef std::future<DeleteDeviceOutcome> DeleteDeviceOutcomeCallable;
                typedef std::function<void(const IotvideoindustryClient*, const Model::DeleteDeviceRequest&, DeleteDeviceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteDeviceAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteDeviceGroupResponse> DeleteDeviceGroupOutcome;
                typedef std::future<DeleteDeviceGroupOutcome> DeleteDeviceGroupOutcomeCallable;
                typedef std::function<void(const IotvideoindustryClient*, const Model::DeleteDeviceGroupRequest&, DeleteDeviceGroupOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteDeviceGroupAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteLiveChannelResponse> DeleteLiveChannelOutcome;
                typedef std::future<DeleteLiveChannelOutcome> DeleteLiveChannelOutcomeCallable;
                typedef std::function<void(const IotvideoindustryClient*, const Model::DeleteLiveChannelRequest&, DeleteLiveChannelOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteLiveChannelAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteLiveRecordPlanResponse> DeleteLiveRecordPlanOutcome;
                typedef std::future<DeleteLiveRecordPlanOutcome> DeleteLiveRecordPlanOutcomeCallable;
                typedef std::function<void(const IotvideoindustryClient*, const Model::DeleteLiveRecordPlanRequest&, DeleteLiveRecordPlanOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteLiveRecordPlanAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteLiveVideoListResponse> DeleteLiveVideoListOutcome;
                typedef std::future<DeleteLiveVideoListOutcome> DeleteLiveVideoListOutcomeCallable;
                typedef std::function<void(const IotvideoindustryClient*, const Model::DeleteLiveVideoListRequest&, DeleteLiveVideoListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteLiveVideoListAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteMessageForwardResponse> DeleteMessageForwardOutcome;
                typedef std::future<DeleteMessageForwardOutcome> DeleteMessageForwardOutcomeCallable;
                typedef std::function<void(const IotvideoindustryClient*, const Model::DeleteMessageForwardRequest&, DeleteMessageForwardOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteMessageForwardAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteRecordPlanResponse> DeleteRecordPlanOutcome;
                typedef std::future<DeleteRecordPlanOutcome> DeleteRecordPlanOutcomeCallable;
                typedef std::function<void(const IotvideoindustryClient*, const Model::DeleteRecordPlanRequest&, DeleteRecordPlanOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteRecordPlanAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteRecordingPlanResponse> DeleteRecordingPlanOutcome;
                typedef std::future<DeleteRecordingPlanOutcome> DeleteRecordingPlanOutcomeCallable;
                typedef std::function<void(const IotvideoindustryClient*, const Model::DeleteRecordingPlanRequest&, DeleteRecordingPlanOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteRecordingPlanAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteSceneResponse> DeleteSceneOutcome;
                typedef std::future<DeleteSceneOutcome> DeleteSceneOutcomeCallable;
                typedef std::function<void(const IotvideoindustryClient*, const Model::DeleteSceneRequest&, DeleteSceneOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteSceneAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteTimeTemplateResponse> DeleteTimeTemplateOutcome;
                typedef std::future<DeleteTimeTemplateOutcome> DeleteTimeTemplateOutcomeCallable;
                typedef std::function<void(const IotvideoindustryClient*, const Model::DeleteTimeTemplateRequest&, DeleteTimeTemplateOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteTimeTemplateAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteVideoListResponse> DeleteVideoListOutcome;
                typedef std::future<DeleteVideoListOutcome> DeleteVideoListOutcomeCallable;
                typedef std::function<void(const IotvideoindustryClient*, const Model::DeleteVideoListRequest&, DeleteVideoListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteVideoListAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteWarningResponse> DeleteWarningOutcome;
                typedef std::future<DeleteWarningOutcome> DeleteWarningOutcomeCallable;
                typedef std::function<void(const IotvideoindustryClient*, const Model::DeleteWarningRequest&, DeleteWarningOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteWarningAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeAbnormalEventsResponse> DescribeAbnormalEventsOutcome;
                typedef std::future<DescribeAbnormalEventsOutcome> DescribeAbnormalEventsOutcomeCallable;
                typedef std::function<void(const IotvideoindustryClient*, const Model::DescribeAbnormalEventsRequest&, DescribeAbnormalEventsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAbnormalEventsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeAllDeviceListResponse> DescribeAllDeviceListOutcome;
                typedef std::future<DescribeAllDeviceListOutcome> DescribeAllDeviceListOutcomeCallable;
                typedef std::function<void(const IotvideoindustryClient*, const Model::DescribeAllDeviceListRequest&, DescribeAllDeviceListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAllDeviceListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeBindSceneChannelsResponse> DescribeBindSceneChannelsOutcome;
                typedef std::future<DescribeBindSceneChannelsOutcome> DescribeBindSceneChannelsOutcomeCallable;
                typedef std::function<void(const IotvideoindustryClient*, const Model::DescribeBindSceneChannelsRequest&, DescribeBindSceneChannelsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeBindSceneChannelsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeBindSceneDevicesResponse> DescribeBindSceneDevicesOutcome;
                typedef std::future<DescribeBindSceneDevicesOutcome> DescribeBindSceneDevicesOutcomeCallable;
                typedef std::function<void(const IotvideoindustryClient*, const Model::DescribeBindSceneDevicesRequest&, DescribeBindSceneDevicesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeBindSceneDevicesAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeChannelLiveStreamURLResponse> DescribeChannelLiveStreamURLOutcome;
                typedef std::future<DescribeChannelLiveStreamURLOutcome> DescribeChannelLiveStreamURLOutcomeCallable;
                typedef std::function<void(const IotvideoindustryClient*, const Model::DescribeChannelLiveStreamURLRequest&, DescribeChannelLiveStreamURLOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeChannelLiveStreamURLAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeChannelLocalRecordURLResponse> DescribeChannelLocalRecordURLOutcome;
                typedef std::future<DescribeChannelLocalRecordURLOutcome> DescribeChannelLocalRecordURLOutcomeCallable;
                typedef std::function<void(const IotvideoindustryClient*, const Model::DescribeChannelLocalRecordURLRequest&, DescribeChannelLocalRecordURLOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeChannelLocalRecordURLAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeChannelStreamURLResponse> DescribeChannelStreamURLOutcome;
                typedef std::future<DescribeChannelStreamURLOutcome> DescribeChannelStreamURLOutcomeCallable;
                typedef std::function<void(const IotvideoindustryClient*, const Model::DescribeChannelStreamURLRequest&, DescribeChannelStreamURLOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeChannelStreamURLAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeChannelsResponse> DescribeChannelsOutcome;
                typedef std::future<DescribeChannelsOutcome> DescribeChannelsOutcomeCallable;
                typedef std::function<void(const IotvideoindustryClient*, const Model::DescribeChannelsRequest&, DescribeChannelsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeChannelsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeChannelsByLiveRecordPlanResponse> DescribeChannelsByLiveRecordPlanOutcome;
                typedef std::future<DescribeChannelsByLiveRecordPlanOutcome> DescribeChannelsByLiveRecordPlanOutcomeCallable;
                typedef std::function<void(const IotvideoindustryClient*, const Model::DescribeChannelsByLiveRecordPlanRequest&, DescribeChannelsByLiveRecordPlanOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeChannelsByLiveRecordPlanAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeCurrentDeviceDataResponse> DescribeCurrentDeviceDataOutcome;
                typedef std::future<DescribeCurrentDeviceDataOutcome> DescribeCurrentDeviceDataOutcomeCallable;
                typedef std::function<void(const IotvideoindustryClient*, const Model::DescribeCurrentDeviceDataRequest&, DescribeCurrentDeviceDataOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeCurrentDeviceDataAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeDeviceResponse> DescribeDeviceOutcome;
                typedef std::future<DescribeDeviceOutcome> DescribeDeviceOutcomeCallable;
                typedef std::function<void(const IotvideoindustryClient*, const Model::DescribeDeviceRequest&, DescribeDeviceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDeviceAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeDeviceEventResponse> DescribeDeviceEventOutcome;
                typedef std::future<DescribeDeviceEventOutcome> DescribeDeviceEventOutcomeCallable;
                typedef std::function<void(const IotvideoindustryClient*, const Model::DescribeDeviceEventRequest&, DescribeDeviceEventOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDeviceEventAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeDeviceGroupResponse> DescribeDeviceGroupOutcome;
                typedef std::future<DescribeDeviceGroupOutcome> DescribeDeviceGroupOutcomeCallable;
                typedef std::function<void(const IotvideoindustryClient*, const Model::DescribeDeviceGroupRequest&, DescribeDeviceGroupOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDeviceGroupAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeDeviceListResponse> DescribeDeviceListOutcome;
                typedef std::future<DescribeDeviceListOutcome> DescribeDeviceListOutcomeCallable;
                typedef std::function<void(const IotvideoindustryClient*, const Model::DescribeDeviceListRequest&, DescribeDeviceListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDeviceListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeDeviceMonitorDataResponse> DescribeDeviceMonitorDataOutcome;
                typedef std::future<DescribeDeviceMonitorDataOutcome> DescribeDeviceMonitorDataOutcomeCallable;
                typedef std::function<void(const IotvideoindustryClient*, const Model::DescribeDeviceMonitorDataRequest&, DescribeDeviceMonitorDataOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDeviceMonitorDataAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeDevicePassWordResponse> DescribeDevicePassWordOutcome;
                typedef std::future<DescribeDevicePassWordOutcome> DescribeDevicePassWordOutcomeCallable;
                typedef std::function<void(const IotvideoindustryClient*, const Model::DescribeDevicePassWordRequest&, DescribeDevicePassWordOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDevicePassWordAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeDeviceStreamsResponse> DescribeDeviceStreamsOutcome;
                typedef std::future<DescribeDeviceStreamsOutcome> DescribeDeviceStreamsOutcomeCallable;
                typedef std::function<void(const IotvideoindustryClient*, const Model::DescribeDeviceStreamsRequest&, DescribeDeviceStreamsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDeviceStreamsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeGroupByIdResponse> DescribeGroupByIdOutcome;
                typedef std::future<DescribeGroupByIdOutcome> DescribeGroupByIdOutcomeCallable;
                typedef std::function<void(const IotvideoindustryClient*, const Model::DescribeGroupByIdRequest&, DescribeGroupByIdOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeGroupByIdAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeGroupByPathResponse> DescribeGroupByPathOutcome;
                typedef std::future<DescribeGroupByPathOutcome> DescribeGroupByPathOutcomeCallable;
                typedef std::function<void(const IotvideoindustryClient*, const Model::DescribeGroupByPathRequest&, DescribeGroupByPathOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeGroupByPathAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeGroupDevicesResponse> DescribeGroupDevicesOutcome;
                typedef std::future<DescribeGroupDevicesOutcome> DescribeGroupDevicesOutcomeCallable;
                typedef std::function<void(const IotvideoindustryClient*, const Model::DescribeGroupDevicesRequest&, DescribeGroupDevicesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeGroupDevicesAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeGroupsResponse> DescribeGroupsOutcome;
                typedef std::future<DescribeGroupsOutcome> DescribeGroupsOutcomeCallable;
                typedef std::function<void(const IotvideoindustryClient*, const Model::DescribeGroupsRequest&, DescribeGroupsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeGroupsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeIPCChannelsResponse> DescribeIPCChannelsOutcome;
                typedef std::future<DescribeIPCChannelsOutcome> DescribeIPCChannelsOutcomeCallable;
                typedef std::function<void(const IotvideoindustryClient*, const Model::DescribeIPCChannelsRequest&, DescribeIPCChannelsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeIPCChannelsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeLiveChannelResponse> DescribeLiveChannelOutcome;
                typedef std::future<DescribeLiveChannelOutcome> DescribeLiveChannelOutcomeCallable;
                typedef std::function<void(const IotvideoindustryClient*, const Model::DescribeLiveChannelRequest&, DescribeLiveChannelOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeLiveChannelAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeLiveChannelListResponse> DescribeLiveChannelListOutcome;
                typedef std::future<DescribeLiveChannelListOutcome> DescribeLiveChannelListOutcomeCallable;
                typedef std::function<void(const IotvideoindustryClient*, const Model::DescribeLiveChannelListRequest&, DescribeLiveChannelListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeLiveChannelListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeLiveRecordPlanByIdResponse> DescribeLiveRecordPlanByIdOutcome;
                typedef std::future<DescribeLiveRecordPlanByIdOutcome> DescribeLiveRecordPlanByIdOutcomeCallable;
                typedef std::function<void(const IotvideoindustryClient*, const Model::DescribeLiveRecordPlanByIdRequest&, DescribeLiveRecordPlanByIdOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeLiveRecordPlanByIdAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeLiveRecordPlanIdsResponse> DescribeLiveRecordPlanIdsOutcome;
                typedef std::future<DescribeLiveRecordPlanIdsOutcome> DescribeLiveRecordPlanIdsOutcomeCallable;
                typedef std::function<void(const IotvideoindustryClient*, const Model::DescribeLiveRecordPlanIdsRequest&, DescribeLiveRecordPlanIdsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeLiveRecordPlanIdsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeLiveStreamResponse> DescribeLiveStreamOutcome;
                typedef std::future<DescribeLiveStreamOutcome> DescribeLiveStreamOutcomeCallable;
                typedef std::function<void(const IotvideoindustryClient*, const Model::DescribeLiveStreamRequest&, DescribeLiveStreamOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeLiveStreamAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeLiveVideoListResponse> DescribeLiveVideoListOutcome;
                typedef std::future<DescribeLiveVideoListOutcome> DescribeLiveVideoListOutcomeCallable;
                typedef std::function<void(const IotvideoindustryClient*, const Model::DescribeLiveVideoListRequest&, DescribeLiveVideoListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeLiveVideoListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeMessageForwardResponse> DescribeMessageForwardOutcome;
                typedef std::future<DescribeMessageForwardOutcome> DescribeMessageForwardOutcomeCallable;
                typedef std::function<void(const IotvideoindustryClient*, const Model::DescribeMessageForwardRequest&, DescribeMessageForwardOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeMessageForwardAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeMessageForwardsResponse> DescribeMessageForwardsOutcome;
                typedef std::future<DescribeMessageForwardsOutcome> DescribeMessageForwardsOutcomeCallable;
                typedef std::function<void(const IotvideoindustryClient*, const Model::DescribeMessageForwardsRequest&, DescribeMessageForwardsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeMessageForwardsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeMonitorDataByDateResponse> DescribeMonitorDataByDateOutcome;
                typedef std::future<DescribeMonitorDataByDateOutcome> DescribeMonitorDataByDateOutcomeCallable;
                typedef std::function<void(const IotvideoindustryClient*, const Model::DescribeMonitorDataByDateRequest&, DescribeMonitorDataByDateOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeMonitorDataByDateAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribePresetListResponse> DescribePresetListOutcome;
                typedef std::future<DescribePresetListOutcome> DescribePresetListOutcomeCallable;
                typedef std::function<void(const IotvideoindustryClient*, const Model::DescribePresetListRequest&, DescribePresetListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribePresetListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeRecordDatesByChannelResponse> DescribeRecordDatesByChannelOutcome;
                typedef std::future<DescribeRecordDatesByChannelOutcome> DescribeRecordDatesByChannelOutcomeCallable;
                typedef std::function<void(const IotvideoindustryClient*, const Model::DescribeRecordDatesByChannelRequest&, DescribeRecordDatesByChannelOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeRecordDatesByChannelAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeRecordDatesByLiveResponse> DescribeRecordDatesByLiveOutcome;
                typedef std::future<DescribeRecordDatesByLiveOutcome> DescribeRecordDatesByLiveOutcomeCallable;
                typedef std::function<void(const IotvideoindustryClient*, const Model::DescribeRecordDatesByLiveRequest&, DescribeRecordDatesByLiveOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeRecordDatesByLiveAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeRecordStreamResponse> DescribeRecordStreamOutcome;
                typedef std::future<DescribeRecordStreamOutcome> DescribeRecordStreamOutcomeCallable;
                typedef std::function<void(const IotvideoindustryClient*, const Model::DescribeRecordStreamRequest&, DescribeRecordStreamOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeRecordStreamAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeRecordingPlanByIdResponse> DescribeRecordingPlanByIdOutcome;
                typedef std::future<DescribeRecordingPlanByIdOutcome> DescribeRecordingPlanByIdOutcomeCallable;
                typedef std::function<void(const IotvideoindustryClient*, const Model::DescribeRecordingPlanByIdRequest&, DescribeRecordingPlanByIdOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeRecordingPlanByIdAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeRecordingPlansResponse> DescribeRecordingPlansOutcome;
                typedef std::future<DescribeRecordingPlansOutcome> DescribeRecordingPlansOutcomeCallable;
                typedef std::function<void(const IotvideoindustryClient*, const Model::DescribeRecordingPlansRequest&, DescribeRecordingPlansOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeRecordingPlansAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeSIPServerResponse> DescribeSIPServerOutcome;
                typedef std::future<DescribeSIPServerOutcome> DescribeSIPServerOutcomeCallable;
                typedef std::function<void(const IotvideoindustryClient*, const Model::DescribeSIPServerRequest&, DescribeSIPServerOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeSIPServerAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeSceneResponse> DescribeSceneOutcome;
                typedef std::future<DescribeSceneOutcome> DescribeSceneOutcomeCallable;
                typedef std::function<void(const IotvideoindustryClient*, const Model::DescribeSceneRequest&, DescribeSceneOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeSceneAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeScenesResponse> DescribeScenesOutcome;
                typedef std::future<DescribeScenesOutcome> DescribeScenesOutcomeCallable;
                typedef std::function<void(const IotvideoindustryClient*, const Model::DescribeScenesRequest&, DescribeScenesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeScenesAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeStatisticDetailsResponse> DescribeStatisticDetailsOutcome;
                typedef std::future<DescribeStatisticDetailsOutcome> DescribeStatisticDetailsOutcomeCallable;
                typedef std::function<void(const IotvideoindustryClient*, const Model::DescribeStatisticDetailsRequest&, DescribeStatisticDetailsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeStatisticDetailsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeStatisticSummaryResponse> DescribeStatisticSummaryOutcome;
                typedef std::future<DescribeStatisticSummaryOutcome> DescribeStatisticSummaryOutcomeCallable;
                typedef std::function<void(const IotvideoindustryClient*, const Model::DescribeStatisticSummaryRequest&, DescribeStatisticSummaryOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeStatisticSummaryAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeSubGroupsResponse> DescribeSubGroupsOutcome;
                typedef std::future<DescribeSubGroupsOutcome> DescribeSubGroupsOutcomeCallable;
                typedef std::function<void(const IotvideoindustryClient*, const Model::DescribeSubGroupsRequest&, DescribeSubGroupsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeSubGroupsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeSubscriptionStatusResponse> DescribeSubscriptionStatusOutcome;
                typedef std::future<DescribeSubscriptionStatusOutcome> DescribeSubscriptionStatusOutcomeCallable;
                typedef std::function<void(const IotvideoindustryClient*, const Model::DescribeSubscriptionStatusRequest&, DescribeSubscriptionStatusOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeSubscriptionStatusAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeVideoListResponse> DescribeVideoListOutcome;
                typedef std::future<DescribeVideoListOutcome> DescribeVideoListOutcomeCallable;
                typedef std::function<void(const IotvideoindustryClient*, const Model::DescribeVideoListRequest&, DescribeVideoListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeVideoListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeVideoListByChannelResponse> DescribeVideoListByChannelOutcome;
                typedef std::future<DescribeVideoListByChannelOutcome> DescribeVideoListByChannelOutcomeCallable;
                typedef std::function<void(const IotvideoindustryClient*, const Model::DescribeVideoListByChannelRequest&, DescribeVideoListByChannelOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeVideoListByChannelAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeWarnModResponse> DescribeWarnModOutcome;
                typedef std::future<DescribeWarnModOutcome> DescribeWarnModOutcomeCallable;
                typedef std::function<void(const IotvideoindustryClient*, const Model::DescribeWarnModRequest&, DescribeWarnModOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeWarnModAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeWarningsResponse> DescribeWarningsOutcome;
                typedef std::future<DescribeWarningsOutcome> DescribeWarningsOutcomeCallable;
                typedef std::function<void(const IotvideoindustryClient*, const Model::DescribeWarningsRequest&, DescribeWarningsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeWarningsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeXP2PDataResponse> DescribeXP2PDataOutcome;
                typedef std::future<DescribeXP2PDataOutcome> DescribeXP2PDataOutcomeCallable;
                typedef std::function<void(const IotvideoindustryClient*, const Model::DescribeXP2PDataRequest&, DescribeXP2PDataOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeXP2PDataAsyncHandler;
                typedef Outcome<Core::Error, Model::GetRecordDatesByDevResponse> GetRecordDatesByDevOutcome;
                typedef std::future<GetRecordDatesByDevOutcome> GetRecordDatesByDevOutcomeCallable;
                typedef std::function<void(const IotvideoindustryClient*, const Model::GetRecordDatesByDevRequest&, GetRecordDatesByDevOutcome, const std::shared_ptr<const AsyncCallerContext>&)> GetRecordDatesByDevAsyncHandler;
                typedef Outcome<Core::Error, Model::GetRecordPlanByDevResponse> GetRecordPlanByDevOutcome;
                typedef std::future<GetRecordPlanByDevOutcome> GetRecordPlanByDevOutcomeCallable;
                typedef std::function<void(const IotvideoindustryClient*, const Model::GetRecordPlanByDevRequest&, GetRecordPlanByDevOutcome, const std::shared_ptr<const AsyncCallerContext>&)> GetRecordPlanByDevAsyncHandler;
                typedef Outcome<Core::Error, Model::GetRecordPlanByIdResponse> GetRecordPlanByIdOutcome;
                typedef std::future<GetRecordPlanByIdOutcome> GetRecordPlanByIdOutcomeCallable;
                typedef std::function<void(const IotvideoindustryClient*, const Model::GetRecordPlanByIdRequest&, GetRecordPlanByIdOutcome, const std::shared_ptr<const AsyncCallerContext>&)> GetRecordPlanByIdAsyncHandler;
                typedef Outcome<Core::Error, Model::GetRecordPlansResponse> GetRecordPlansOutcome;
                typedef std::future<GetRecordPlansOutcome> GetRecordPlansOutcomeCallable;
                typedef std::function<void(const IotvideoindustryClient*, const Model::GetRecordPlansRequest&, GetRecordPlansOutcome, const std::shared_ptr<const AsyncCallerContext>&)> GetRecordPlansAsyncHandler;
                typedef Outcome<Core::Error, Model::GetTimeTemplateByIdResponse> GetTimeTemplateByIdOutcome;
                typedef std::future<GetTimeTemplateByIdOutcome> GetTimeTemplateByIdOutcomeCallable;
                typedef std::function<void(const IotvideoindustryClient*, const Model::GetTimeTemplateByIdRequest&, GetTimeTemplateByIdOutcome, const std::shared_ptr<const AsyncCallerContext>&)> GetTimeTemplateByIdAsyncHandler;
                typedef Outcome<Core::Error, Model::GetTimeTemplatesResponse> GetTimeTemplatesOutcome;
                typedef std::future<GetTimeTemplatesOutcome> GetTimeTemplatesOutcomeCallable;
                typedef std::function<void(const IotvideoindustryClient*, const Model::GetTimeTemplatesRequest&, GetTimeTemplatesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> GetTimeTemplatesAsyncHandler;
                typedef Outcome<Core::Error, Model::GetVideoListByConResponse> GetVideoListByConOutcome;
                typedef std::future<GetVideoListByConOutcome> GetVideoListByConOutcomeCallable;
                typedef std::function<void(const IotvideoindustryClient*, const Model::GetVideoListByConRequest&, GetVideoListByConOutcome, const std::shared_ptr<const AsyncCallerContext>&)> GetVideoListByConAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyBindPlanLiveChannelResponse> ModifyBindPlanLiveChannelOutcome;
                typedef std::future<ModifyBindPlanLiveChannelOutcome> ModifyBindPlanLiveChannelOutcomeCallable;
                typedef std::function<void(const IotvideoindustryClient*, const Model::ModifyBindPlanLiveChannelRequest&, ModifyBindPlanLiveChannelOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyBindPlanLiveChannelAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyBindRecordingPlanResponse> ModifyBindRecordingPlanOutcome;
                typedef std::future<ModifyBindRecordingPlanOutcome> ModifyBindRecordingPlanOutcomeCallable;
                typedef std::function<void(const IotvideoindustryClient*, const Model::ModifyBindRecordingPlanRequest&, ModifyBindRecordingPlanOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyBindRecordingPlanAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyBindSceneChannelsResponse> ModifyBindSceneChannelsOutcome;
                typedef std::future<ModifyBindSceneChannelsOutcome> ModifyBindSceneChannelsOutcomeCallable;
                typedef std::function<void(const IotvideoindustryClient*, const Model::ModifyBindSceneChannelsRequest&, ModifyBindSceneChannelsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyBindSceneChannelsAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyBindSceneDeviceResponse> ModifyBindSceneDeviceOutcome;
                typedef std::future<ModifyBindSceneDeviceOutcome> ModifyBindSceneDeviceOutcomeCallable;
                typedef std::function<void(const IotvideoindustryClient*, const Model::ModifyBindSceneDeviceRequest&, ModifyBindSceneDeviceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyBindSceneDeviceAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyDeviceDataResponse> ModifyDeviceDataOutcome;
                typedef std::future<ModifyDeviceDataOutcome> ModifyDeviceDataOutcomeCallable;
                typedef std::function<void(const IotvideoindustryClient*, const Model::ModifyDeviceDataRequest&, ModifyDeviceDataOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyDeviceDataAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyLiveChannelResponse> ModifyLiveChannelOutcome;
                typedef std::future<ModifyLiveChannelOutcome> ModifyLiveChannelOutcomeCallable;
                typedef std::function<void(const IotvideoindustryClient*, const Model::ModifyLiveChannelRequest&, ModifyLiveChannelOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyLiveChannelAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyLiveRecordPlanResponse> ModifyLiveRecordPlanOutcome;
                typedef std::future<ModifyLiveRecordPlanOutcome> ModifyLiveRecordPlanOutcomeCallable;
                typedef std::function<void(const IotvideoindustryClient*, const Model::ModifyLiveRecordPlanRequest&, ModifyLiveRecordPlanOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyLiveRecordPlanAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyLiveVideoResponse> ModifyLiveVideoOutcome;
                typedef std::future<ModifyLiveVideoOutcome> ModifyLiveVideoOutcomeCallable;
                typedef std::function<void(const IotvideoindustryClient*, const Model::ModifyLiveVideoRequest&, ModifyLiveVideoOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyLiveVideoAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyMessageForwardResponse> ModifyMessageForwardOutcome;
                typedef std::future<ModifyMessageForwardOutcome> ModifyMessageForwardOutcomeCallable;
                typedef std::function<void(const IotvideoindustryClient*, const Model::ModifyMessageForwardRequest&, ModifyMessageForwardOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyMessageForwardAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyPresetResponse> ModifyPresetOutcome;
                typedef std::future<ModifyPresetOutcome> ModifyPresetOutcomeCallable;
                typedef std::function<void(const IotvideoindustryClient*, const Model::ModifyPresetRequest&, ModifyPresetOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyPresetAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyRecordingPlanResponse> ModifyRecordingPlanOutcome;
                typedef std::future<ModifyRecordingPlanOutcome> ModifyRecordingPlanOutcomeCallable;
                typedef std::function<void(const IotvideoindustryClient*, const Model::ModifyRecordingPlanRequest&, ModifyRecordingPlanOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyRecordingPlanAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifySceneResponse> ModifySceneOutcome;
                typedef std::future<ModifySceneOutcome> ModifySceneOutcomeCallable;
                typedef std::function<void(const IotvideoindustryClient*, const Model::ModifySceneRequest&, ModifySceneOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifySceneAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifySubscriptionStatusResponse> ModifySubscriptionStatusOutcome;
                typedef std::future<ModifySubscriptionStatusOutcome> ModifySubscriptionStatusOutcomeCallable;
                typedef std::function<void(const IotvideoindustryClient*, const Model::ModifySubscriptionStatusRequest&, ModifySubscriptionStatusOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifySubscriptionStatusAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyVideoInfoResponse> ModifyVideoInfoOutcome;
                typedef std::future<ModifyVideoInfoOutcome> ModifyVideoInfoOutcomeCallable;
                typedef std::function<void(const IotvideoindustryClient*, const Model::ModifyVideoInfoRequest&, ModifyVideoInfoOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyVideoInfoAsyncHandler;
                typedef Outcome<Core::Error, Model::ResetWarningResponse> ResetWarningOutcome;
                typedef std::future<ResetWarningOutcome> ResetWarningOutcomeCallable;
                typedef std::function<void(const IotvideoindustryClient*, const Model::ResetWarningRequest&, ResetWarningOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ResetWarningAsyncHandler;
                typedef Outcome<Core::Error, Model::UpdateDeviceGroupResponse> UpdateDeviceGroupOutcome;
                typedef std::future<UpdateDeviceGroupOutcome> UpdateDeviceGroupOutcomeCallable;
                typedef std::function<void(const IotvideoindustryClient*, const Model::UpdateDeviceGroupRequest&, UpdateDeviceGroupOutcome, const std::shared_ptr<const AsyncCallerContext>&)> UpdateDeviceGroupAsyncHandler;
                typedef Outcome<Core::Error, Model::UpdateDevicePassWordResponse> UpdateDevicePassWordOutcome;
                typedef std::future<UpdateDevicePassWordOutcome> UpdateDevicePassWordOutcomeCallable;
                typedef std::function<void(const IotvideoindustryClient*, const Model::UpdateDevicePassWordRequest&, UpdateDevicePassWordOutcome, const std::shared_ptr<const AsyncCallerContext>&)> UpdateDevicePassWordAsyncHandler;
                typedef Outcome<Core::Error, Model::UpdateRecordPlanResponse> UpdateRecordPlanOutcome;
                typedef std::future<UpdateRecordPlanOutcome> UpdateRecordPlanOutcomeCallable;
                typedef std::function<void(const IotvideoindustryClient*, const Model::UpdateRecordPlanRequest&, UpdateRecordPlanOutcome, const std::shared_ptr<const AsyncCallerContext>&)> UpdateRecordPlanAsyncHandler;
                typedef Outcome<Core::Error, Model::UpdateTimeTemplateResponse> UpdateTimeTemplateOutcome;
                typedef std::future<UpdateTimeTemplateOutcome> UpdateTimeTemplateOutcomeCallable;
                typedef std::function<void(const IotvideoindustryClient*, const Model::UpdateTimeTemplateRequest&, UpdateTimeTemplateOutcome, const std::shared_ptr<const AsyncCallerContext>&)> UpdateTimeTemplateAsyncHandler;



                /**
                 *本接口(BindGroupDevices) 用于绑定设备到分组。
                 * @param req BindGroupDevicesRequest
                 * @return BindGroupDevicesOutcome
                 */
                BindGroupDevicesOutcome BindGroupDevices(const Model::BindGroupDevicesRequest &request);
                void BindGroupDevicesAsync(const Model::BindGroupDevicesRequest& request, const BindGroupDevicesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                BindGroupDevicesOutcomeCallable BindGroupDevicesCallable(const Model::BindGroupDevicesRequest& request);

                /**
                 *本接口（ControlChannelLocalRecord）用于对通道本地回放流进行控制，包括暂停、播放、拉动、结束等

                 * @param req ControlChannelLocalRecordRequest
                 * @return ControlChannelLocalRecordOutcome
                 */
                ControlChannelLocalRecordOutcome ControlChannelLocalRecord(const Model::ControlChannelLocalRecordRequest &request);
                void ControlChannelLocalRecordAsync(const Model::ControlChannelLocalRecordRequest& request, const ControlChannelLocalRecordAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ControlChannelLocalRecordOutcomeCallable ControlChannelLocalRecordCallable(const Model::ControlChannelLocalRecordRequest& request);

                /**
                 *本接口(ControlChannelPTZ) 用于对支持GB28181 PTZ信令的设备进行指定通道的远程控制。
                 * @param req ControlChannelPTZRequest
                 * @return ControlChannelPTZOutcome
                 */
                ControlChannelPTZOutcome ControlChannelPTZ(const Model::ControlChannelPTZRequest &request);
                void ControlChannelPTZAsync(const Model::ControlChannelPTZRequest& request, const ControlChannelPTZAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ControlChannelPTZOutcomeCallable ControlChannelPTZCallable(const Model::ControlChannelPTZRequest& request);

                /**
                 *本接口(ControlDevicePTZ) 用于对支持GB28181 PTZ信令的设备进行远程控制。
请使用ControlChannelPTZ接口
                 * @param req ControlDevicePTZRequest
                 * @return ControlDevicePTZOutcome
                 */
                ControlDevicePTZOutcome ControlDevicePTZ(const Model::ControlDevicePTZRequest &request);
                void ControlDevicePTZAsync(const Model::ControlDevicePTZRequest& request, const ControlDevicePTZAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ControlDevicePTZOutcomeCallable ControlDevicePTZCallable(const Model::ControlDevicePTZRequest& request);

                /**
                 *看守位控制
                 * @param req ControlHomePositionRequest
                 * @return ControlHomePositionOutcome
                 */
                ControlHomePositionOutcome ControlHomePosition(const Model::ControlHomePositionRequest &request);
                void ControlHomePositionAsync(const Model::ControlHomePositionRequest& request, const ControlHomePositionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ControlHomePositionOutcomeCallable ControlHomePositionCallable(const Model::ControlHomePositionRequest& request);

                /**
                 *预置位控制
                 * @param req ControlPresetRequest
                 * @return ControlPresetOutcome
                 */
                ControlPresetOutcome ControlPreset(const Model::ControlPresetRequest &request);
                void ControlPresetAsync(const Model::ControlPresetRequest& request, const ControlPresetAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ControlPresetOutcomeCallable ControlPresetCallable(const Model::ControlPresetRequest& request);

                /**
                 *对回放流进行控制，包括暂停、播放、拉动、结束等
请使用ControlChannelLocalRecord接口
                 * @param req ControlRecordStreamRequest
                 * @return ControlRecordStreamOutcome
                 */
                ControlRecordStreamOutcome ControlRecordStream(const Model::ControlRecordStreamRequest &request);
                void ControlRecordStreamAsync(const Model::ControlRecordStreamRequest& request, const ControlRecordStreamAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ControlRecordStreamOutcomeCallable ControlRecordStreamCallable(const Model::ControlRecordStreamRequest& request);

                /**
                 *本接口(CreateDevice) 用于创建设备。
                 * @param req CreateDeviceRequest
                 * @return CreateDeviceOutcome
                 */
                CreateDeviceOutcome CreateDevice(const Model::CreateDeviceRequest &request);
                void CreateDeviceAsync(const Model::CreateDeviceRequest& request, const CreateDeviceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateDeviceOutcomeCallable CreateDeviceCallable(const Model::CreateDeviceRequest& request);

                /**
                 *本接口(CreateDeviceGroup) 用于创建设备管理分组。
                 * @param req CreateDeviceGroupRequest
                 * @return CreateDeviceGroupOutcome
                 */
                CreateDeviceGroupOutcome CreateDeviceGroup(const Model::CreateDeviceGroupRequest &request);
                void CreateDeviceGroupAsync(const Model::CreateDeviceGroupRequest& request, const CreateDeviceGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateDeviceGroupOutcomeCallable CreateDeviceGroupCallable(const Model::CreateDeviceGroupRequest& request);

                /**
                 *创建直播频道
                 * @param req CreateLiveChannelRequest
                 * @return CreateLiveChannelOutcome
                 */
                CreateLiveChannelOutcome CreateLiveChannel(const Model::CreateLiveChannelRequest &request);
                void CreateLiveChannelAsync(const Model::CreateLiveChannelRequest& request, const CreateLiveChannelAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateLiveChannelOutcomeCallable CreateLiveChannelCallable(const Model::CreateLiveChannelRequest& request);

                /**
                 *创建直播录制计划，直播录制接口，暂时下线中，只有国标接口支持云端录制
                 * @param req CreateLiveRecordPlanRequest
                 * @return CreateLiveRecordPlanOutcome
                 */
                CreateLiveRecordPlanOutcome CreateLiveRecordPlan(const Model::CreateLiveRecordPlanRequest &request);
                void CreateLiveRecordPlanAsync(const Model::CreateLiveRecordPlanRequest& request, const CreateLiveRecordPlanAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateLiveRecordPlanOutcomeCallable CreateLiveRecordPlanCallable(const Model::CreateLiveRecordPlanRequest& request);

                /**
                 *创建消息转发配置
                 * @param req CreateMessageForwardRequest
                 * @return CreateMessageForwardOutcome
                 */
                CreateMessageForwardOutcome CreateMessageForward(const Model::CreateMessageForwardRequest &request);
                void CreateMessageForwardAsync(const Model::CreateMessageForwardRequest& request, const CreateMessageForwardAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateMessageForwardOutcomeCallable CreateMessageForwardCallable(const Model::CreateMessageForwardRequest& request);

                /**
                 *本接口(CreateRecordPlan) 用于创建录制计划，使设备与时间模板绑定，以便及时启动录制
请使用CreateRecordingPlan代替
                 * @param req CreateRecordPlanRequest
                 * @return CreateRecordPlanOutcome
                 */
                CreateRecordPlanOutcome CreateRecordPlan(const Model::CreateRecordPlanRequest &request);
                void CreateRecordPlanAsync(const Model::CreateRecordPlanRequest& request, const CreateRecordPlanAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateRecordPlanOutcomeCallable CreateRecordPlanCallable(const Model::CreateRecordPlanRequest& request);

                /**
                 *本接口(CreateRecordingPlan) 用于创建录制计划，使通道与时间模板绑定，以便及时启动录制
                 * @param req CreateRecordingPlanRequest
                 * @return CreateRecordingPlanOutcome
                 */
                CreateRecordingPlanOutcome CreateRecordingPlan(const Model::CreateRecordingPlanRequest &request);
                void CreateRecordingPlanAsync(const Model::CreateRecordingPlanRequest& request, const CreateRecordingPlanAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateRecordingPlanOutcomeCallable CreateRecordingPlanCallable(const Model::CreateRecordingPlanRequest& request);

                /**
                 *创建场景
                 * @param req CreateSceneRequest
                 * @return CreateSceneOutcome
                 */
                CreateSceneOutcome CreateScene(const Model::CreateSceneRequest &request);
                void CreateSceneAsync(const Model::CreateSceneRequest& request, const CreateSceneAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateSceneOutcomeCallable CreateSceneCallable(const Model::CreateSceneRequest& request);

                /**
                 *本接口(CreateTimeTemplate) 用于根据模板描述的具体录制时间片段，创建定制化的时间模板。
                 * @param req CreateTimeTemplateRequest
                 * @return CreateTimeTemplateOutcome
                 */
                CreateTimeTemplateOutcome CreateTimeTemplate(const Model::CreateTimeTemplateRequest &request);
                void CreateTimeTemplateAsync(const Model::CreateTimeTemplateRequest& request, const CreateTimeTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateTimeTemplateOutcomeCallable CreateTimeTemplateCallable(const Model::CreateTimeTemplateRequest& request);

                /**
                 *本接口用于删除设备下的通道
注意： 在线状态的设备不允许删除
                 * @param req DeleteChannelRequest
                 * @return DeleteChannelOutcome
                 */
                DeleteChannelOutcome DeleteChannel(const Model::DeleteChannelRequest &request);
                void DeleteChannelAsync(const Model::DeleteChannelRequest& request, const DeleteChannelAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteChannelOutcomeCallable DeleteChannelCallable(const Model::DeleteChannelRequest& request);

                /**
                 *本接口(DeleteDevice)用于删除设备。
                 * @param req DeleteDeviceRequest
                 * @return DeleteDeviceOutcome
                 */
                DeleteDeviceOutcome DeleteDevice(const Model::DeleteDeviceRequest &request);
                void DeleteDeviceAsync(const Model::DeleteDeviceRequest& request, const DeleteDeviceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteDeviceOutcomeCallable DeleteDeviceCallable(const Model::DeleteDeviceRequest& request);

                /**
                 *本接口(DeleteDeviceGroup)用于删除分组。
                 * @param req DeleteDeviceGroupRequest
                 * @return DeleteDeviceGroupOutcome
                 */
                DeleteDeviceGroupOutcome DeleteDeviceGroup(const Model::DeleteDeviceGroupRequest &request);
                void DeleteDeviceGroupAsync(const Model::DeleteDeviceGroupRequest& request, const DeleteDeviceGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteDeviceGroupOutcomeCallable DeleteDeviceGroupCallable(const Model::DeleteDeviceGroupRequest& request);

                /**
                 *删除直播接口
                 * @param req DeleteLiveChannelRequest
                 * @return DeleteLiveChannelOutcome
                 */
                DeleteLiveChannelOutcome DeleteLiveChannel(const Model::DeleteLiveChannelRequest &request);
                void DeleteLiveChannelAsync(const Model::DeleteLiveChannelRequest& request, const DeleteLiveChannelAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteLiveChannelOutcomeCallable DeleteLiveChannelCallable(const Model::DeleteLiveChannelRequest& request);

                /**
                 *删除直播录制计划
                 * @param req DeleteLiveRecordPlanRequest
                 * @return DeleteLiveRecordPlanOutcome
                 */
                DeleteLiveRecordPlanOutcome DeleteLiveRecordPlan(const Model::DeleteLiveRecordPlanRequest &request);
                void DeleteLiveRecordPlanAsync(const Model::DeleteLiveRecordPlanRequest& request, const DeleteLiveRecordPlanAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteLiveRecordPlanOutcomeCallable DeleteLiveRecordPlanCallable(const Model::DeleteLiveRecordPlanRequest& request);

                /**
                 *直播录像删除
                 * @param req DeleteLiveVideoListRequest
                 * @return DeleteLiveVideoListOutcome
                 */
                DeleteLiveVideoListOutcome DeleteLiveVideoList(const Model::DeleteLiveVideoListRequest &request);
                void DeleteLiveVideoListAsync(const Model::DeleteLiveVideoListRequest& request, const DeleteLiveVideoListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteLiveVideoListOutcomeCallable DeleteLiveVideoListCallable(const Model::DeleteLiveVideoListRequest& request);

                /**
                 *删除消息转发配置
                 * @param req DeleteMessageForwardRequest
                 * @return DeleteMessageForwardOutcome
                 */
                DeleteMessageForwardOutcome DeleteMessageForward(const Model::DeleteMessageForwardRequest &request);
                void DeleteMessageForwardAsync(const Model::DeleteMessageForwardRequest& request, const DeleteMessageForwardAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteMessageForwardOutcomeCallable DeleteMessageForwardCallable(const Model::DeleteMessageForwardRequest& request);

                /**
                 *本接口(DeleteRecordPlan)用于删除录制计划
录制计划删除的同时，会停止该录制计划下的全部录制任务。
请使用DeleteRecordingPlan接口
                 * @param req DeleteRecordPlanRequest
                 * @return DeleteRecordPlanOutcome
                 */
                DeleteRecordPlanOutcome DeleteRecordPlan(const Model::DeleteRecordPlanRequest &request);
                void DeleteRecordPlanAsync(const Model::DeleteRecordPlanRequest& request, const DeleteRecordPlanAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteRecordPlanOutcomeCallable DeleteRecordPlanCallable(const Model::DeleteRecordPlanRequest& request);

                /**
                 *本接口(DeleteRecordingPlan)用于删除录制计划
录制计划删除的同时，会停止该录制计划下的全部录制任务。
                 * @param req DeleteRecordingPlanRequest
                 * @return DeleteRecordingPlanOutcome
                 */
                DeleteRecordingPlanOutcome DeleteRecordingPlan(const Model::DeleteRecordingPlanRequest &request);
                void DeleteRecordingPlanAsync(const Model::DeleteRecordingPlanRequest& request, const DeleteRecordingPlanAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteRecordingPlanOutcomeCallable DeleteRecordingPlanCallable(const Model::DeleteRecordingPlanRequest& request);

                /**
                 *删除场景
                 * @param req DeleteSceneRequest
                 * @return DeleteSceneOutcome
                 */
                DeleteSceneOutcome DeleteScene(const Model::DeleteSceneRequest &request);
                void DeleteSceneAsync(const Model::DeleteSceneRequest& request, const DeleteSceneAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteSceneOutcomeCallable DeleteSceneCallable(const Model::DeleteSceneRequest& request);

                /**
                 *本接口(DeleteTimeTemplate) 用于删除时间模板。
                 * @param req DeleteTimeTemplateRequest
                 * @return DeleteTimeTemplateOutcome
                 */
                DeleteTimeTemplateOutcome DeleteTimeTemplate(const Model::DeleteTimeTemplateRequest &request);
                void DeleteTimeTemplateAsync(const Model::DeleteTimeTemplateRequest& request, const DeleteTimeTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteTimeTemplateOutcomeCallable DeleteTimeTemplateCallable(const Model::DeleteTimeTemplateRequest& request);

                /**
                 *删除录像存储列表
                 * @param req DeleteVideoListRequest
                 * @return DeleteVideoListOutcome
                 */
                DeleteVideoListOutcome DeleteVideoList(const Model::DeleteVideoListRequest &request);
                void DeleteVideoListAsync(const Model::DeleteVideoListRequest& request, const DeleteVideoListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteVideoListOutcomeCallable DeleteVideoListCallable(const Model::DeleteVideoListRequest& request);

                /**
                 *设备告警-删除告警
                 * @param req DeleteWarningRequest
                 * @return DeleteWarningOutcome
                 */
                DeleteWarningOutcome DeleteWarning(const Model::DeleteWarningRequest &request);
                void DeleteWarningAsync(const Model::DeleteWarningRequest& request, const DeleteWarningAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteWarningOutcomeCallable DeleteWarningCallable(const Model::DeleteWarningRequest& request);

                /**
                 *获取异常事件统计
                 * @param req DescribeAbnormalEventsRequest
                 * @return DescribeAbnormalEventsOutcome
                 */
                DescribeAbnormalEventsOutcome DescribeAbnormalEvents(const Model::DescribeAbnormalEventsRequest &request);
                void DescribeAbnormalEventsAsync(const Model::DescribeAbnormalEventsRequest& request, const DescribeAbnormalEventsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeAbnormalEventsOutcomeCallable DescribeAbnormalEventsCallable(const Model::DescribeAbnormalEventsRequest& request);

                /**
                 *本接口(DescribeAllDeviceList) 用于获取设备列表。
请使用DescribeDevicesList接口
                 * @param req DescribeAllDeviceListRequest
                 * @return DescribeAllDeviceListOutcome
                 */
                DescribeAllDeviceListOutcome DescribeAllDeviceList(const Model::DescribeAllDeviceListRequest &request);
                void DescribeAllDeviceListAsync(const Model::DescribeAllDeviceListRequest& request, const DescribeAllDeviceListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeAllDeviceListOutcomeCallable DescribeAllDeviceListCallable(const Model::DescribeAllDeviceListRequest& request);

                /**
                 *获取场景绑定通道列表
                 * @param req DescribeBindSceneChannelsRequest
                 * @return DescribeBindSceneChannelsOutcome
                 */
                DescribeBindSceneChannelsOutcome DescribeBindSceneChannels(const Model::DescribeBindSceneChannelsRequest &request);
                void DescribeBindSceneChannelsAsync(const Model::DescribeBindSceneChannelsRequest& request, const DescribeBindSceneChannelsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeBindSceneChannelsOutcomeCallable DescribeBindSceneChannelsCallable(const Model::DescribeBindSceneChannelsRequest& request);

                /**
                 *获取场景绑定设备列表
                 * @param req DescribeBindSceneDevicesRequest
                 * @return DescribeBindSceneDevicesOutcome
                 */
                DescribeBindSceneDevicesOutcome DescribeBindSceneDevices(const Model::DescribeBindSceneDevicesRequest &request);
                void DescribeBindSceneDevicesAsync(const Model::DescribeBindSceneDevicesRequest& request, const DescribeBindSceneDevicesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeBindSceneDevicesOutcomeCallable DescribeBindSceneDevicesCallable(const Model::DescribeBindSceneDevicesRequest& request);

                /**
                 *本接口(DescribeChannelLiveStreamURL)用于获取设备指定通道实时流地址，地址是动态生成，如重新播放需要调用此接口重新获取最新播放地址。
正常推流，如未设置对应录制计划，且180s无人观看此流，将会被自动掐断。
                 * @param req DescribeChannelLiveStreamURLRequest
                 * @return DescribeChannelLiveStreamURLOutcome
                 */
                DescribeChannelLiveStreamURLOutcome DescribeChannelLiveStreamURL(const Model::DescribeChannelLiveStreamURLRequest &request);
                void DescribeChannelLiveStreamURLAsync(const Model::DescribeChannelLiveStreamURLRequest& request, const DescribeChannelLiveStreamURLAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeChannelLiveStreamURLOutcomeCallable DescribeChannelLiveStreamURLCallable(const Model::DescribeChannelLiveStreamURLRequest& request);

                /**
                 *本接口（DescribeChannelLocalRecordURL）用于将NVR等设备对应通道本地回放文件，通过GB28181信令推送至云端，并生成对应的实时视频流URL，流地址URL是动态生成，如需重新播放请重新调用此接口获取最新地址。
正常推流，如未设置对应录制计划，且180s无人观看此流，将会被自动掐断。
                 * @param req DescribeChannelLocalRecordURLRequest
                 * @return DescribeChannelLocalRecordURLOutcome
                 */
                DescribeChannelLocalRecordURLOutcome DescribeChannelLocalRecordURL(const Model::DescribeChannelLocalRecordURLRequest &request);
                void DescribeChannelLocalRecordURLAsync(const Model::DescribeChannelLocalRecordURLRequest& request, const DescribeChannelLocalRecordURLAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeChannelLocalRecordURLOutcomeCallable DescribeChannelLocalRecordURLCallable(const Model::DescribeChannelLocalRecordURLRequest& request);

                /**
                 *本接口(DescribeChannelStreamURL)用于获取设备指定通道实时流地址，地址是动态生成，如重新播放需要调用此接口重新获取最新播放地址。
正常推流，如未设置对应录制计划，且180s无人观看此流，将会被自动掐断。
                 * @param req DescribeChannelStreamURLRequest
                 * @return DescribeChannelStreamURLOutcome
                 */
                DescribeChannelStreamURLOutcome DescribeChannelStreamURL(const Model::DescribeChannelStreamURLRequest &request);
                void DescribeChannelStreamURLAsync(const Model::DescribeChannelStreamURLRequest& request, const DescribeChannelStreamURLAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeChannelStreamURLOutcomeCallable DescribeChannelStreamURLCallable(const Model::DescribeChannelStreamURLRequest& request);

                /**
                 *本接口（DescribeChannels）用于获取设备下属通道列表
                 * @param req DescribeChannelsRequest
                 * @return DescribeChannelsOutcome
                 */
                DescribeChannelsOutcome DescribeChannels(const Model::DescribeChannelsRequest &request);
                void DescribeChannelsAsync(const Model::DescribeChannelsRequest& request, const DescribeChannelsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeChannelsOutcomeCallable DescribeChannelsCallable(const Model::DescribeChannelsRequest& request);

                /**
                 *根据直播录制计划获取频道列表
                 * @param req DescribeChannelsByLiveRecordPlanRequest
                 * @return DescribeChannelsByLiveRecordPlanOutcome
                 */
                DescribeChannelsByLiveRecordPlanOutcome DescribeChannelsByLiveRecordPlan(const Model::DescribeChannelsByLiveRecordPlanRequest &request);
                void DescribeChannelsByLiveRecordPlanAsync(const Model::DescribeChannelsByLiveRecordPlanRequest& request, const DescribeChannelsByLiveRecordPlanAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeChannelsByLiveRecordPlanOutcomeCallable DescribeChannelsByLiveRecordPlanCallable(const Model::DescribeChannelsByLiveRecordPlanRequest& request);

                /**
                 *查询设备统计当前信息
                 * @param req DescribeCurrentDeviceDataRequest
                 * @return DescribeCurrentDeviceDataOutcome
                 */
                DescribeCurrentDeviceDataOutcome DescribeCurrentDeviceData(const Model::DescribeCurrentDeviceDataRequest &request);
                void DescribeCurrentDeviceDataAsync(const Model::DescribeCurrentDeviceDataRequest& request, const DescribeCurrentDeviceDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeCurrentDeviceDataOutcomeCallable DescribeCurrentDeviceDataCallable(const Model::DescribeCurrentDeviceDataRequest& request);

                /**
                 *获取指定设备详细信息
                 * @param req DescribeDeviceRequest
                 * @return DescribeDeviceOutcome
                 */
                DescribeDeviceOutcome DescribeDevice(const Model::DescribeDeviceRequest &request);
                void DescribeDeviceAsync(const Model::DescribeDeviceRequest& request, const DescribeDeviceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeDeviceOutcomeCallable DescribeDeviceCallable(const Model::DescribeDeviceRequest& request);

                /**
                 *获取设备事件
                 * @param req DescribeDeviceEventRequest
                 * @return DescribeDeviceEventOutcome
                 */
                DescribeDeviceEventOutcome DescribeDeviceEvent(const Model::DescribeDeviceEventRequest &request);
                void DescribeDeviceEventAsync(const Model::DescribeDeviceEventRequest& request, const DescribeDeviceEventAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeDeviceEventOutcomeCallable DescribeDeviceEventCallable(const Model::DescribeDeviceEventRequest& request);

                /**
                 *本接口(DescribeDeviceGroup)用于根据设备ID查询设备所在分组信息，可批量查询。
                 * @param req DescribeDeviceGroupRequest
                 * @return DescribeDeviceGroupOutcome
                 */
                DescribeDeviceGroupOutcome DescribeDeviceGroup(const Model::DescribeDeviceGroupRequest &request);
                void DescribeDeviceGroupAsync(const Model::DescribeDeviceGroupRequest& request, const DescribeDeviceGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeDeviceGroupOutcomeCallable DescribeDeviceGroupCallable(const Model::DescribeDeviceGroupRequest& request);

                /**
                 *本接口(DescribeDeviceList) 用于获取设备列表，支持模糊搜索
                 * @param req DescribeDeviceListRequest
                 * @return DescribeDeviceListOutcome
                 */
                DescribeDeviceListOutcome DescribeDeviceList(const Model::DescribeDeviceListRequest &request);
                void DescribeDeviceListAsync(const Model::DescribeDeviceListRequest& request, const DescribeDeviceListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeDeviceListOutcomeCallable DescribeDeviceListCallable(const Model::DescribeDeviceListRequest& request);

                /**
                 *查询设备统计monitor信息
                 * @param req DescribeDeviceMonitorDataRequest
                 * @return DescribeDeviceMonitorDataOutcome
                 */
                DescribeDeviceMonitorDataOutcome DescribeDeviceMonitorData(const Model::DescribeDeviceMonitorDataRequest &request);
                void DescribeDeviceMonitorDataAsync(const Model::DescribeDeviceMonitorDataRequest& request, const DescribeDeviceMonitorDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeDeviceMonitorDataOutcomeCallable DescribeDeviceMonitorDataCallable(const Model::DescribeDeviceMonitorDataRequest& request);

                /**
                 *本接口(DescribeDevicePassWord)用于查询设备密码。
                 * @param req DescribeDevicePassWordRequest
                 * @return DescribeDevicePassWordOutcome
                 */
                DescribeDevicePassWordOutcome DescribeDevicePassWord(const Model::DescribeDevicePassWordRequest &request);
                void DescribeDevicePassWordAsync(const Model::DescribeDevicePassWordRequest& request, const DescribeDevicePassWordAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeDevicePassWordOutcomeCallable DescribeDevicePassWordCallable(const Model::DescribeDevicePassWordRequest& request);

                /**
                 *本接口(DescribeDeviceStreams)用于获取设备实时流地址。
请使用DescribeChannelStreamURL接口
                 * @param req DescribeDeviceStreamsRequest
                 * @return DescribeDeviceStreamsOutcome
                 */
                DescribeDeviceStreamsOutcome DescribeDeviceStreams(const Model::DescribeDeviceStreamsRequest &request);
                void DescribeDeviceStreamsAsync(const Model::DescribeDeviceStreamsRequest& request, const DescribeDeviceStreamsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeDeviceStreamsOutcomeCallable DescribeDeviceStreamsCallable(const Model::DescribeDeviceStreamsRequest& request);

                /**
                 *本接口(DescribeGroupById)用于根据分组ID查询分组。
                 * @param req DescribeGroupByIdRequest
                 * @return DescribeGroupByIdOutcome
                 */
                DescribeGroupByIdOutcome DescribeGroupById(const Model::DescribeGroupByIdRequest &request);
                void DescribeGroupByIdAsync(const Model::DescribeGroupByIdRequest& request, const DescribeGroupByIdAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeGroupByIdOutcomeCallable DescribeGroupByIdCallable(const Model::DescribeGroupByIdRequest& request);

                /**
                 *根据分组路径查询分组
                 * @param req DescribeGroupByPathRequest
                 * @return DescribeGroupByPathOutcome
                 */
                DescribeGroupByPathOutcome DescribeGroupByPath(const Model::DescribeGroupByPathRequest &request);
                void DescribeGroupByPathAsync(const Model::DescribeGroupByPathRequest& request, const DescribeGroupByPathAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeGroupByPathOutcomeCallable DescribeGroupByPathCallable(const Model::DescribeGroupByPathRequest& request);

                /**
                 *本接口(DescribeGroupDevices)用于查询分组下的设备列表。
                 * @param req DescribeGroupDevicesRequest
                 * @return DescribeGroupDevicesOutcome
                 */
                DescribeGroupDevicesOutcome DescribeGroupDevices(const Model::DescribeGroupDevicesRequest &request);
                void DescribeGroupDevicesAsync(const Model::DescribeGroupDevicesRequest& request, const DescribeGroupDevicesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeGroupDevicesOutcomeCallable DescribeGroupDevicesCallable(const Model::DescribeGroupDevicesRequest& request);

                /**
                 *本接口(DescribeGroups)用于批量查询分组信息。
                 * @param req DescribeGroupsRequest
                 * @return DescribeGroupsOutcome
                 */
                DescribeGroupsOutcome DescribeGroups(const Model::DescribeGroupsRequest &request);
                void DescribeGroupsAsync(const Model::DescribeGroupsRequest& request, const DescribeGroupsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeGroupsOutcomeCallable DescribeGroupsCallable(const Model::DescribeGroupsRequest& request);

                /**
                 *获取IPC设备下属通道
请使用DescribeChannels接口
                 * @param req DescribeIPCChannelsRequest
                 * @return DescribeIPCChannelsOutcome
                 */
                DescribeIPCChannelsOutcome DescribeIPCChannels(const Model::DescribeIPCChannelsRequest &request);
                void DescribeIPCChannelsAsync(const Model::DescribeIPCChannelsRequest& request, const DescribeIPCChannelsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeIPCChannelsOutcomeCallable DescribeIPCChannelsCallable(const Model::DescribeIPCChannelsRequest& request);

                /**
                 *直播详情接口
                 * @param req DescribeLiveChannelRequest
                 * @return DescribeLiveChannelOutcome
                 */
                DescribeLiveChannelOutcome DescribeLiveChannel(const Model::DescribeLiveChannelRequest &request);
                void DescribeLiveChannelAsync(const Model::DescribeLiveChannelRequest& request, const DescribeLiveChannelAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeLiveChannelOutcomeCallable DescribeLiveChannelCallable(const Model::DescribeLiveChannelRequest& request);

                /**
                 *直播列表接口
                 * @param req DescribeLiveChannelListRequest
                 * @return DescribeLiveChannelListOutcome
                 */
                DescribeLiveChannelListOutcome DescribeLiveChannelList(const Model::DescribeLiveChannelListRequest &request);
                void DescribeLiveChannelListAsync(const Model::DescribeLiveChannelListRequest& request, const DescribeLiveChannelListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeLiveChannelListOutcomeCallable DescribeLiveChannelListCallable(const Model::DescribeLiveChannelListRequest& request);

                /**
                 *获取直播录制计划详情
                 * @param req DescribeLiveRecordPlanByIdRequest
                 * @return DescribeLiveRecordPlanByIdOutcome
                 */
                DescribeLiveRecordPlanByIdOutcome DescribeLiveRecordPlanById(const Model::DescribeLiveRecordPlanByIdRequest &request);
                void DescribeLiveRecordPlanByIdAsync(const Model::DescribeLiveRecordPlanByIdRequest& request, const DescribeLiveRecordPlanByIdAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeLiveRecordPlanByIdOutcomeCallable DescribeLiveRecordPlanByIdCallable(const Model::DescribeLiveRecordPlanByIdRequest& request);

                /**
                 *获取直播录制计划列表
                 * @param req DescribeLiveRecordPlanIdsRequest
                 * @return DescribeLiveRecordPlanIdsOutcome
                 */
                DescribeLiveRecordPlanIdsOutcome DescribeLiveRecordPlanIds(const Model::DescribeLiveRecordPlanIdsRequest &request);
                void DescribeLiveRecordPlanIdsAsync(const Model::DescribeLiveRecordPlanIdsRequest& request, const DescribeLiveRecordPlanIdsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeLiveRecordPlanIdsOutcomeCallable DescribeLiveRecordPlanIdsCallable(const Model::DescribeLiveRecordPlanIdsRequest& request);

                /**
                 *直播拉流接口
                 * @param req DescribeLiveStreamRequest
                 * @return DescribeLiveStreamOutcome
                 */
                DescribeLiveStreamOutcome DescribeLiveStream(const Model::DescribeLiveStreamRequest &request);
                void DescribeLiveStreamAsync(const Model::DescribeLiveStreamRequest& request, const DescribeLiveStreamAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeLiveStreamOutcomeCallable DescribeLiveStreamCallable(const Model::DescribeLiveStreamRequest& request);

                /**
                 *直播录像回放列表
                 * @param req DescribeLiveVideoListRequest
                 * @return DescribeLiveVideoListOutcome
                 */
                DescribeLiveVideoListOutcome DescribeLiveVideoList(const Model::DescribeLiveVideoListRequest &request);
                void DescribeLiveVideoListAsync(const Model::DescribeLiveVideoListRequest& request, const DescribeLiveVideoListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeLiveVideoListOutcomeCallable DescribeLiveVideoListCallable(const Model::DescribeLiveVideoListRequest& request);

                /**
                 *查看消息转发配置详情
                 * @param req DescribeMessageForwardRequest
                 * @return DescribeMessageForwardOutcome
                 */
                DescribeMessageForwardOutcome DescribeMessageForward(const Model::DescribeMessageForwardRequest &request);
                void DescribeMessageForwardAsync(const Model::DescribeMessageForwardRequest& request, const DescribeMessageForwardAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeMessageForwardOutcomeCallable DescribeMessageForwardCallable(const Model::DescribeMessageForwardRequest& request);

                /**
                 *查看消息转发配置列表
                 * @param req DescribeMessageForwardsRequest
                 * @return DescribeMessageForwardsOutcome
                 */
                DescribeMessageForwardsOutcome DescribeMessageForwards(const Model::DescribeMessageForwardsRequest &request);
                void DescribeMessageForwardsAsync(const Model::DescribeMessageForwardsRequest& request, const DescribeMessageForwardsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeMessageForwardsOutcomeCallable DescribeMessageForwardsCallable(const Model::DescribeMessageForwardsRequest& request);

                /**
                 *运营中心-设备录像存储统计
                 * @param req DescribeMonitorDataByDateRequest
                 * @return DescribeMonitorDataByDateOutcome
                 */
                DescribeMonitorDataByDateOutcome DescribeMonitorDataByDate(const Model::DescribeMonitorDataByDateRequest &request);
                void DescribeMonitorDataByDateAsync(const Model::DescribeMonitorDataByDateRequest& request, const DescribeMonitorDataByDateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeMonitorDataByDateOutcomeCallable DescribeMonitorDataByDateCallable(const Model::DescribeMonitorDataByDateRequest& request);

                /**
                 *获取预置位列表
                 * @param req DescribePresetListRequest
                 * @return DescribePresetListOutcome
                 */
                DescribePresetListOutcome DescribePresetList(const Model::DescribePresetListRequest &request);
                void DescribePresetListAsync(const Model::DescribePresetListRequest& request, const DescribePresetListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribePresetListOutcomeCallable DescribePresetListCallable(const Model::DescribePresetListRequest& request);

                /**
                 *本接口(DescribeRecordDatesByChannel)用于查询设备含有录像文件的日期列表。
                 * @param req DescribeRecordDatesByChannelRequest
                 * @return DescribeRecordDatesByChannelOutcome
                 */
                DescribeRecordDatesByChannelOutcome DescribeRecordDatesByChannel(const Model::DescribeRecordDatesByChannelRequest &request);
                void DescribeRecordDatesByChannelAsync(const Model::DescribeRecordDatesByChannelRequest& request, const DescribeRecordDatesByChannelAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeRecordDatesByChannelOutcomeCallable DescribeRecordDatesByChannelCallable(const Model::DescribeRecordDatesByChannelRequest& request);

                /**
                 *直播录像存储日期列表
                 * @param req DescribeRecordDatesByLiveRequest
                 * @return DescribeRecordDatesByLiveOutcome
                 */
                DescribeRecordDatesByLiveOutcome DescribeRecordDatesByLive(const Model::DescribeRecordDatesByLiveRequest &request);
                void DescribeRecordDatesByLiveAsync(const Model::DescribeRecordDatesByLiveRequest& request, const DescribeRecordDatesByLiveAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeRecordDatesByLiveOutcomeCallable DescribeRecordDatesByLiveCallable(const Model::DescribeRecordDatesByLiveRequest& request);

                /**
                 *获取回放视频流地址
请使用DescribeChannelLocalRecordURL接口

RecordId和StartTime/EndTime互斥
当存在RecordId时，StartTime和EndTime无效
当RecordId为空，StartTime和EndTime生效
                 * @param req DescribeRecordStreamRequest
                 * @return DescribeRecordStreamOutcome
                 */
                DescribeRecordStreamOutcome DescribeRecordStream(const Model::DescribeRecordStreamRequest &request);
                void DescribeRecordStreamAsync(const Model::DescribeRecordStreamRequest& request, const DescribeRecordStreamAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeRecordStreamOutcomeCallable DescribeRecordStreamCallable(const Model::DescribeRecordStreamRequest& request);

                /**
                 *本接口(DescribeRecordingPlanById)用于根据录制计划ID获取录制计划。
                 * @param req DescribeRecordingPlanByIdRequest
                 * @return DescribeRecordingPlanByIdOutcome
                 */
                DescribeRecordingPlanByIdOutcome DescribeRecordingPlanById(const Model::DescribeRecordingPlanByIdRequest &request);
                void DescribeRecordingPlanByIdAsync(const Model::DescribeRecordingPlanByIdRequest& request, const DescribeRecordingPlanByIdAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeRecordingPlanByIdOutcomeCallable DescribeRecordingPlanByIdCallable(const Model::DescribeRecordingPlanByIdRequest& request);

                /**
                 *本接口(DescribeRecordingPlans)用于获取用户的全部录制计划。
                 * @param req DescribeRecordingPlansRequest
                 * @return DescribeRecordingPlansOutcome
                 */
                DescribeRecordingPlansOutcome DescribeRecordingPlans(const Model::DescribeRecordingPlansRequest &request);
                void DescribeRecordingPlansAsync(const Model::DescribeRecordingPlansRequest& request, const DescribeRecordingPlansAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeRecordingPlansOutcomeCallable DescribeRecordingPlansCallable(const Model::DescribeRecordingPlansRequest& request);

                /**
                 *本接口用于获取SIP服务器相关配置，用户可以通过这些配置项，将设备通过GB28181协议注册到本服务。
                 * @param req DescribeSIPServerRequest
                 * @return DescribeSIPServerOutcome
                 */
                DescribeSIPServerOutcome DescribeSIPServer(const Model::DescribeSIPServerRequest &request);
                void DescribeSIPServerAsync(const Model::DescribeSIPServerRequest& request, const DescribeSIPServerAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeSIPServerOutcomeCallable DescribeSIPServerCallable(const Model::DescribeSIPServerRequest& request);

                /**
                 *场景详情
                 * @param req DescribeSceneRequest
                 * @return DescribeSceneOutcome
                 */
                DescribeSceneOutcome DescribeScene(const Model::DescribeSceneRequest &request);
                void DescribeSceneAsync(const Model::DescribeSceneRequest& request, const DescribeSceneAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeSceneOutcomeCallable DescribeSceneCallable(const Model::DescribeSceneRequest& request);

                /**
                 *获取场景列表
                 * @param req DescribeScenesRequest
                 * @return DescribeScenesOutcome
                 */
                DescribeScenesOutcome DescribeScenes(const Model::DescribeScenesRequest &request);
                void DescribeScenesAsync(const Model::DescribeScenesRequest& request, const DescribeScenesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeScenesOutcomeCallable DescribeScenesCallable(const Model::DescribeScenesRequest& request);

                /**
                 *本接口(DescribeStatisticDetails)用于查询指定统计项详情，返回结果按天为单位聚合，支持的最大时间查询范围为31天。
                 * @param req DescribeStatisticDetailsRequest
                 * @return DescribeStatisticDetailsOutcome
                 */
                DescribeStatisticDetailsOutcome DescribeStatisticDetails(const Model::DescribeStatisticDetailsRequest &request);
                void DescribeStatisticDetailsAsync(const Model::DescribeStatisticDetailsRequest& request, const DescribeStatisticDetailsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeStatisticDetailsOutcomeCallable DescribeStatisticDetailsCallable(const Model::DescribeStatisticDetailsRequest& request);

                /**
                 *本接口(DescribeStatisticSummary)用于查询用户昨日的概览数据。
                 * @param req DescribeStatisticSummaryRequest
                 * @return DescribeStatisticSummaryOutcome
                 */
                DescribeStatisticSummaryOutcome DescribeStatisticSummary(const Model::DescribeStatisticSummaryRequest &request);
                void DescribeStatisticSummaryAsync(const Model::DescribeStatisticSummaryRequest& request, const DescribeStatisticSummaryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeStatisticSummaryOutcomeCallable DescribeStatisticSummaryCallable(const Model::DescribeStatisticSummaryRequest& request);

                /**
                 *本接口(DescribeSubGroups)用于查询分组下的子分组列表。
                 * @param req DescribeSubGroupsRequest
                 * @return DescribeSubGroupsOutcome
                 */
                DescribeSubGroupsOutcome DescribeSubGroups(const Model::DescribeSubGroupsRequest &request);
                void DescribeSubGroupsAsync(const Model::DescribeSubGroupsRequest& request, const DescribeSubGroupsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeSubGroupsOutcomeCallable DescribeSubGroupsCallable(const Model::DescribeSubGroupsRequest& request);

                /**
                 *查询主设备订阅状态
                 * @param req DescribeSubscriptionStatusRequest
                 * @return DescribeSubscriptionStatusOutcome
                 */
                DescribeSubscriptionStatusOutcome DescribeSubscriptionStatus(const Model::DescribeSubscriptionStatusRequest &request);
                void DescribeSubscriptionStatusAsync(const Model::DescribeSubscriptionStatusRequest& request, const DescribeSubscriptionStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeSubscriptionStatusOutcomeCallable DescribeSubscriptionStatusCallable(const Model::DescribeSubscriptionStatusRequest& request);

                /**
                 *根据时间获取云端录制文件列表
                 * @param req DescribeVideoListRequest
                 * @return DescribeVideoListOutcome
                 */
                DescribeVideoListOutcome DescribeVideoList(const Model::DescribeVideoListRequest &request);
                void DescribeVideoListAsync(const Model::DescribeVideoListRequest& request, const DescribeVideoListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeVideoListOutcomeCallable DescribeVideoListCallable(const Model::DescribeVideoListRequest& request);

                /**
                 *本接口(DescribeVideoListByChannel)用于查询指定通道的录制文件列表
                 * @param req DescribeVideoListByChannelRequest
                 * @return DescribeVideoListByChannelOutcome
                 */
                DescribeVideoListByChannelOutcome DescribeVideoListByChannel(const Model::DescribeVideoListByChannelRequest &request);
                void DescribeVideoListByChannelAsync(const Model::DescribeVideoListByChannelRequest& request, const DescribeVideoListByChannelAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeVideoListByChannelOutcomeCallable DescribeVideoListByChannelCallable(const Model::DescribeVideoListByChannelRequest& request);

                /**
                 *告警等级列表
                 * @param req DescribeWarnModRequest
                 * @return DescribeWarnModOutcome
                 */
                DescribeWarnModOutcome DescribeWarnMod(const Model::DescribeWarnModRequest &request);
                void DescribeWarnModAsync(const Model::DescribeWarnModRequest& request, const DescribeWarnModAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeWarnModOutcomeCallable DescribeWarnModCallable(const Model::DescribeWarnModRequest& request);

                /**
                 *获取告警列表
                 * @param req DescribeWarningsRequest
                 * @return DescribeWarningsOutcome
                 */
                DescribeWarningsOutcome DescribeWarnings(const Model::DescribeWarningsRequest &request);
                void DescribeWarningsAsync(const Model::DescribeWarningsRequest& request, const DescribeWarningsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeWarningsOutcomeCallable DescribeWarningsCallable(const Model::DescribeWarningsRequest& request);

                /**
                 *获取X-P2P的统计数据
                 * @param req DescribeXP2PDataRequest
                 * @return DescribeXP2PDataOutcome
                 */
                DescribeXP2PDataOutcome DescribeXP2PData(const Model::DescribeXP2PDataRequest &request);
                void DescribeXP2PDataAsync(const Model::DescribeXP2PDataRequest& request, const DescribeXP2PDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeXP2PDataOutcomeCallable DescribeXP2PDataCallable(const Model::DescribeXP2PDataRequest& request);

                /**
                 *本接口(GetRecordDatesByDev)用于查询设备含有录像文件的日期列表。
请使用DescribeRecordDatesByChannel接口
                 * @param req GetRecordDatesByDevRequest
                 * @return GetRecordDatesByDevOutcome
                 */
                GetRecordDatesByDevOutcome GetRecordDatesByDev(const Model::GetRecordDatesByDevRequest &request);
                void GetRecordDatesByDevAsync(const Model::GetRecordDatesByDevRequest& request, const GetRecordDatesByDevAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                GetRecordDatesByDevOutcomeCallable GetRecordDatesByDevCallable(const Model::GetRecordDatesByDevRequest& request);

                /**
                 *本接口(GetRecordPlanByDev)用于根据设备ID查询其绑定的录制计划. 这个接口没有业务逻辑用到, 已废弃，统一用DescribeDevice
                 * @param req GetRecordPlanByDevRequest
                 * @return GetRecordPlanByDevOutcome
                 */
                GetRecordPlanByDevOutcome GetRecordPlanByDev(const Model::GetRecordPlanByDevRequest &request);
                void GetRecordPlanByDevAsync(const Model::GetRecordPlanByDevRequest& request, const GetRecordPlanByDevAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                GetRecordPlanByDevOutcomeCallable GetRecordPlanByDevCallable(const Model::GetRecordPlanByDevRequest& request);

                /**
                 *本接口(GetRecordPlanById)用于根据录制计划ID获取录制计划。
请使用DescribeRecordingPlanById接口
                 * @param req GetRecordPlanByIdRequest
                 * @return GetRecordPlanByIdOutcome
                 */
                GetRecordPlanByIdOutcome GetRecordPlanById(const Model::GetRecordPlanByIdRequest &request);
                void GetRecordPlanByIdAsync(const Model::GetRecordPlanByIdRequest& request, const GetRecordPlanByIdAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                GetRecordPlanByIdOutcomeCallable GetRecordPlanByIdCallable(const Model::GetRecordPlanByIdRequest& request);

                /**
                 *本接口(GetRecordPlans)用于获取用户的全部录制计划。
请使用DescribeRecordingPlans接口
                 * @param req GetRecordPlansRequest
                 * @return GetRecordPlansOutcome
                 */
                GetRecordPlansOutcome GetRecordPlans(const Model::GetRecordPlansRequest &request);
                void GetRecordPlansAsync(const Model::GetRecordPlansRequest& request, const GetRecordPlansAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                GetRecordPlansOutcomeCallable GetRecordPlansCallable(const Model::GetRecordPlansRequest& request);

                /**
                 *本接口(GetTimeTemplateById)用于根据模板ID获取时间模板详情。
                 * @param req GetTimeTemplateByIdRequest
                 * @return GetTimeTemplateByIdOutcome
                 */
                GetTimeTemplateByIdOutcome GetTimeTemplateById(const Model::GetTimeTemplateByIdRequest &request);
                void GetTimeTemplateByIdAsync(const Model::GetTimeTemplateByIdRequest& request, const GetTimeTemplateByIdAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                GetTimeTemplateByIdOutcomeCallable GetTimeTemplateByIdCallable(const Model::GetTimeTemplateByIdRequest& request);

                /**
                 *本接口(GetTimeTemplates)用于获取时间模板列表。
                 * @param req GetTimeTemplatesRequest
                 * @return GetTimeTemplatesOutcome
                 */
                GetTimeTemplatesOutcome GetTimeTemplates(const Model::GetTimeTemplatesRequest &request);
                void GetTimeTemplatesAsync(const Model::GetTimeTemplatesRequest& request, const GetTimeTemplatesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                GetTimeTemplatesOutcomeCallable GetTimeTemplatesCallable(const Model::GetTimeTemplatesRequest& request);

                /**
                 *本接口(GetVideoListByCon)用于查询设备的录制文件列表
请使用DescribeVideoListByChannel接口
                 * @param req GetVideoListByConRequest
                 * @return GetVideoListByConOutcome
                 */
                GetVideoListByConOutcome GetVideoListByCon(const Model::GetVideoListByConRequest &request);
                void GetVideoListByConAsync(const Model::GetVideoListByConRequest& request, const GetVideoListByConAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                GetVideoListByConOutcomeCallable GetVideoListByConCallable(const Model::GetVideoListByConRequest& request);

                /**
                 *直播录制计划绑定解绑直播频道
                 * @param req ModifyBindPlanLiveChannelRequest
                 * @return ModifyBindPlanLiveChannelOutcome
                 */
                ModifyBindPlanLiveChannelOutcome ModifyBindPlanLiveChannel(const Model::ModifyBindPlanLiveChannelRequest &request);
                void ModifyBindPlanLiveChannelAsync(const Model::ModifyBindPlanLiveChannelRequest& request, const ModifyBindPlanLiveChannelAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyBindPlanLiveChannelOutcomeCallable ModifyBindPlanLiveChannelCallable(const Model::ModifyBindPlanLiveChannelRequest& request);

                /**
                 *本接口(ModifyBindRecordingPlan)用于更新录制计划绑定的通道
                 * @param req ModifyBindRecordingPlanRequest
                 * @return ModifyBindRecordingPlanOutcome
                 */
                ModifyBindRecordingPlanOutcome ModifyBindRecordingPlan(const Model::ModifyBindRecordingPlanRequest &request);
                void ModifyBindRecordingPlanAsync(const Model::ModifyBindRecordingPlanRequest& request, const ModifyBindRecordingPlanAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyBindRecordingPlanOutcomeCallable ModifyBindRecordingPlanCallable(const Model::ModifyBindRecordingPlanRequest& request);

                /**
                 *场景绑定解绑通道接口
                 * @param req ModifyBindSceneChannelsRequest
                 * @return ModifyBindSceneChannelsOutcome
                 */
                ModifyBindSceneChannelsOutcome ModifyBindSceneChannels(const Model::ModifyBindSceneChannelsRequest &request);
                void ModifyBindSceneChannelsAsync(const Model::ModifyBindSceneChannelsRequest& request, const ModifyBindSceneChannelsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyBindSceneChannelsOutcomeCallable ModifyBindSceneChannelsCallable(const Model::ModifyBindSceneChannelsRequest& request);

                /**
                 *场景绑定/解绑通道接口
                 * @param req ModifyBindSceneDeviceRequest
                 * @return ModifyBindSceneDeviceOutcome
                 */
                ModifyBindSceneDeviceOutcome ModifyBindSceneDevice(const Model::ModifyBindSceneDeviceRequest &request);
                void ModifyBindSceneDeviceAsync(const Model::ModifyBindSceneDeviceRequest& request, const ModifyBindSceneDeviceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyBindSceneDeviceOutcomeCallable ModifyBindSceneDeviceCallable(const Model::ModifyBindSceneDeviceRequest& request);

                /**
                 *本接口(ModifyDeviceData)用于编辑设备信息。
                 * @param req ModifyDeviceDataRequest
                 * @return ModifyDeviceDataOutcome
                 */
                ModifyDeviceDataOutcome ModifyDeviceData(const Model::ModifyDeviceDataRequest &request);
                void ModifyDeviceDataAsync(const Model::ModifyDeviceDataRequest& request, const ModifyDeviceDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyDeviceDataOutcomeCallable ModifyDeviceDataCallable(const Model::ModifyDeviceDataRequest& request);

                /**
                 *编辑直播接口
                 * @param req ModifyLiveChannelRequest
                 * @return ModifyLiveChannelOutcome
                 */
                ModifyLiveChannelOutcome ModifyLiveChannel(const Model::ModifyLiveChannelRequest &request);
                void ModifyLiveChannelAsync(const Model::ModifyLiveChannelRequest& request, const ModifyLiveChannelAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyLiveChannelOutcomeCallable ModifyLiveChannelCallable(const Model::ModifyLiveChannelRequest& request);

                /**
                 *编辑直播录制计划
                 * @param req ModifyLiveRecordPlanRequest
                 * @return ModifyLiveRecordPlanOutcome
                 */
                ModifyLiveRecordPlanOutcome ModifyLiveRecordPlan(const Model::ModifyLiveRecordPlanRequest &request);
                void ModifyLiveRecordPlanAsync(const Model::ModifyLiveRecordPlanRequest& request, const ModifyLiveRecordPlanAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyLiveRecordPlanOutcomeCallable ModifyLiveRecordPlanCallable(const Model::ModifyLiveRecordPlanRequest& request);

                /**
                 *直播录像编辑
                 * @param req ModifyLiveVideoRequest
                 * @return ModifyLiveVideoOutcome
                 */
                ModifyLiveVideoOutcome ModifyLiveVideo(const Model::ModifyLiveVideoRequest &request);
                void ModifyLiveVideoAsync(const Model::ModifyLiveVideoRequest& request, const ModifyLiveVideoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyLiveVideoOutcomeCallable ModifyLiveVideoCallable(const Model::ModifyLiveVideoRequest& request);

                /**
                 *修改消息转发配置
                 * @param req ModifyMessageForwardRequest
                 * @return ModifyMessageForwardOutcome
                 */
                ModifyMessageForwardOutcome ModifyMessageForward(const Model::ModifyMessageForwardRequest &request);
                void ModifyMessageForwardAsync(const Model::ModifyMessageForwardRequest& request, const ModifyMessageForwardAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyMessageForwardOutcomeCallable ModifyMessageForwardCallable(const Model::ModifyMessageForwardRequest& request);

                /**
                 *编辑预置位信息
                 * @param req ModifyPresetRequest
                 * @return ModifyPresetOutcome
                 */
                ModifyPresetOutcome ModifyPreset(const Model::ModifyPresetRequest &request);
                void ModifyPresetAsync(const Model::ModifyPresetRequest& request, const ModifyPresetAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyPresetOutcomeCallable ModifyPresetCallable(const Model::ModifyPresetRequest& request);

                /**
                 *本接口(ModifyRecordingPlan)用于更新录制计划。
                 * @param req ModifyRecordingPlanRequest
                 * @return ModifyRecordingPlanOutcome
                 */
                ModifyRecordingPlanOutcome ModifyRecordingPlan(const Model::ModifyRecordingPlanRequest &request);
                void ModifyRecordingPlanAsync(const Model::ModifyRecordingPlanRequest& request, const ModifyRecordingPlanAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyRecordingPlanOutcomeCallable ModifyRecordingPlanCallable(const Model::ModifyRecordingPlanRequest& request);

                /**
                 *修改场景
                 * @param req ModifySceneRequest
                 * @return ModifySceneOutcome
                 */
                ModifySceneOutcome ModifyScene(const Model::ModifySceneRequest &request);
                void ModifySceneAsync(const Model::ModifySceneRequest& request, const ModifySceneAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifySceneOutcomeCallable ModifySceneCallable(const Model::ModifySceneRequest& request);

                /**
                 *编辑设备订阅状态
                 * @param req ModifySubscriptionStatusRequest
                 * @return ModifySubscriptionStatusOutcome
                 */
                ModifySubscriptionStatusOutcome ModifySubscriptionStatus(const Model::ModifySubscriptionStatusRequest &request);
                void ModifySubscriptionStatusAsync(const Model::ModifySubscriptionStatusRequest& request, const ModifySubscriptionStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifySubscriptionStatusOutcomeCallable ModifySubscriptionStatusCallable(const Model::ModifySubscriptionStatusRequest& request);

                /**
                 *修改录像存储列表
                 * @param req ModifyVideoInfoRequest
                 * @return ModifyVideoInfoOutcome
                 */
                ModifyVideoInfoOutcome ModifyVideoInfo(const Model::ModifyVideoInfoRequest &request);
                void ModifyVideoInfoAsync(const Model::ModifyVideoInfoRequest& request, const ModifyVideoInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyVideoInfoOutcomeCallable ModifyVideoInfoCallable(const Model::ModifyVideoInfoRequest& request);

                /**
                 *重置设备告警
                 * @param req ResetWarningRequest
                 * @return ResetWarningOutcome
                 */
                ResetWarningOutcome ResetWarning(const Model::ResetWarningRequest &request);
                void ResetWarningAsync(const Model::ResetWarningRequest& request, const ResetWarningAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ResetWarningOutcomeCallable ResetWarningCallable(const Model::ResetWarningRequest& request);

                /**
                 *本接口(UpdateDeviceGroup)用于修改分组信息。
                 * @param req UpdateDeviceGroupRequest
                 * @return UpdateDeviceGroupOutcome
                 */
                UpdateDeviceGroupOutcome UpdateDeviceGroup(const Model::UpdateDeviceGroupRequest &request);
                void UpdateDeviceGroupAsync(const Model::UpdateDeviceGroupRequest& request, const UpdateDeviceGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                UpdateDeviceGroupOutcomeCallable UpdateDeviceGroupCallable(const Model::UpdateDeviceGroupRequest& request);

                /**
                 *本接口(UpdateDevicePassWord)用于修改设备密码。
                 * @param req UpdateDevicePassWordRequest
                 * @return UpdateDevicePassWordOutcome
                 */
                UpdateDevicePassWordOutcome UpdateDevicePassWord(const Model::UpdateDevicePassWordRequest &request);
                void UpdateDevicePassWordAsync(const Model::UpdateDevicePassWordRequest& request, const UpdateDevicePassWordAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                UpdateDevicePassWordOutcomeCallable UpdateDevicePassWordCallable(const Model::UpdateDevicePassWordRequest& request);

                /**
                 *本接口(UpdateRecordPlan)用于更新录制计划。
请使用 ModifyRecordingPlan接口和ModifyBindRecordingPlan接口
                 * @param req UpdateRecordPlanRequest
                 * @return UpdateRecordPlanOutcome
                 */
                UpdateRecordPlanOutcome UpdateRecordPlan(const Model::UpdateRecordPlanRequest &request);
                void UpdateRecordPlanAsync(const Model::UpdateRecordPlanRequest& request, const UpdateRecordPlanAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                UpdateRecordPlanOutcomeCallable UpdateRecordPlanCallable(const Model::UpdateRecordPlanRequest& request);

                /**
                 *本接口(UpdateTimeTemplate)用于更新时间模板。
                 * @param req UpdateTimeTemplateRequest
                 * @return UpdateTimeTemplateOutcome
                 */
                UpdateTimeTemplateOutcome UpdateTimeTemplate(const Model::UpdateTimeTemplateRequest &request);
                void UpdateTimeTemplateAsync(const Model::UpdateTimeTemplateRequest& request, const UpdateTimeTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                UpdateTimeTemplateOutcomeCallable UpdateTimeTemplateCallable(const Model::UpdateTimeTemplateRequest& request);

            };
        }
    }
}

#endif // !TENCENTCLOUD_IOTVIDEOINDUSTRY_V20201201_IOTVIDEOINDUSTRYCLIENT_H_
