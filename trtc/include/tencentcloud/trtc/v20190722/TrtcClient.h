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

#ifndef TENCENTCLOUD_TRTC_V20190722_TRTCCLIENT_H_
#define TENCENTCLOUD_TRTC_V20190722_TRTCCLIENT_H_

#include <functional>
#include <future>
#include <tencentcloud/core/AbstractClient.h>
#include <tencentcloud/core/Credential.h>
#include <tencentcloud/core/profile/ClientProfile.h>
#include <tencentcloud/core/AsyncCallerContext.h>
#include <tencentcloud/trtc/v20190722/model/CreateCloudRecordingRequest.h>
#include <tencentcloud/trtc/v20190722/model/CreateCloudRecordingResponse.h>
#include <tencentcloud/trtc/v20190722/model/CreatePictureRequest.h>
#include <tencentcloud/trtc/v20190722/model/CreatePictureResponse.h>
#include <tencentcloud/trtc/v20190722/model/CreateTroubleInfoRequest.h>
#include <tencentcloud/trtc/v20190722/model/CreateTroubleInfoResponse.h>
#include <tencentcloud/trtc/v20190722/model/DeleteCloudRecordingRequest.h>
#include <tencentcloud/trtc/v20190722/model/DeleteCloudRecordingResponse.h>
#include <tencentcloud/trtc/v20190722/model/DeletePictureRequest.h>
#include <tencentcloud/trtc/v20190722/model/DeletePictureResponse.h>
#include <tencentcloud/trtc/v20190722/model/DescribeAbnormalEventRequest.h>
#include <tencentcloud/trtc/v20190722/model/DescribeAbnormalEventResponse.h>
#include <tencentcloud/trtc/v20190722/model/DescribeCallDetailRequest.h>
#include <tencentcloud/trtc/v20190722/model/DescribeCallDetailResponse.h>
#include <tencentcloud/trtc/v20190722/model/DescribeCloudRecordingRequest.h>
#include <tencentcloud/trtc/v20190722/model/DescribeCloudRecordingResponse.h>
#include <tencentcloud/trtc/v20190722/model/DescribeDetailEventRequest.h>
#include <tencentcloud/trtc/v20190722/model/DescribeDetailEventResponse.h>
#include <tencentcloud/trtc/v20190722/model/DescribeExternalTrtcMeasureRequest.h>
#include <tencentcloud/trtc/v20190722/model/DescribeExternalTrtcMeasureResponse.h>
#include <tencentcloud/trtc/v20190722/model/DescribeHistoryScaleRequest.h>
#include <tencentcloud/trtc/v20190722/model/DescribeHistoryScaleResponse.h>
#include <tencentcloud/trtc/v20190722/model/DescribePictureRequest.h>
#include <tencentcloud/trtc/v20190722/model/DescribePictureResponse.h>
#include <tencentcloud/trtc/v20190722/model/DescribeRecordStatisticRequest.h>
#include <tencentcloud/trtc/v20190722/model/DescribeRecordStatisticResponse.h>
#include <tencentcloud/trtc/v20190722/model/DescribeRoomInformationRequest.h>
#include <tencentcloud/trtc/v20190722/model/DescribeRoomInformationResponse.h>
#include <tencentcloud/trtc/v20190722/model/DescribeTrtcMcuTranscodeTimeRequest.h>
#include <tencentcloud/trtc/v20190722/model/DescribeTrtcMcuTranscodeTimeResponse.h>
#include <tencentcloud/trtc/v20190722/model/DescribeUserInformationRequest.h>
#include <tencentcloud/trtc/v20190722/model/DescribeUserInformationResponse.h>
#include <tencentcloud/trtc/v20190722/model/DismissRoomRequest.h>
#include <tencentcloud/trtc/v20190722/model/DismissRoomResponse.h>
#include <tencentcloud/trtc/v20190722/model/DismissRoomByStrRoomIdRequest.h>
#include <tencentcloud/trtc/v20190722/model/DismissRoomByStrRoomIdResponse.h>
#include <tencentcloud/trtc/v20190722/model/ModifyCloudRecordingRequest.h>
#include <tencentcloud/trtc/v20190722/model/ModifyCloudRecordingResponse.h>
#include <tencentcloud/trtc/v20190722/model/ModifyPictureRequest.h>
#include <tencentcloud/trtc/v20190722/model/ModifyPictureResponse.h>
#include <tencentcloud/trtc/v20190722/model/RemoveUserRequest.h>
#include <tencentcloud/trtc/v20190722/model/RemoveUserResponse.h>
#include <tencentcloud/trtc/v20190722/model/RemoveUserByStrRoomIdRequest.h>
#include <tencentcloud/trtc/v20190722/model/RemoveUserByStrRoomIdResponse.h>
#include <tencentcloud/trtc/v20190722/model/StartMCUMixTranscodeRequest.h>
#include <tencentcloud/trtc/v20190722/model/StartMCUMixTranscodeResponse.h>
#include <tencentcloud/trtc/v20190722/model/StartMCUMixTranscodeByStrRoomIdRequest.h>
#include <tencentcloud/trtc/v20190722/model/StartMCUMixTranscodeByStrRoomIdResponse.h>
#include <tencentcloud/trtc/v20190722/model/StopMCUMixTranscodeRequest.h>
#include <tencentcloud/trtc/v20190722/model/StopMCUMixTranscodeResponse.h>
#include <tencentcloud/trtc/v20190722/model/StopMCUMixTranscodeByStrRoomIdRequest.h>
#include <tencentcloud/trtc/v20190722/model/StopMCUMixTranscodeByStrRoomIdResponse.h>


namespace TencentCloud
{
    namespace Trtc
    {
        namespace V20190722
        {
            class TrtcClient : public AbstractClient
            {
            public:
                TrtcClient(const Credential &credential, const std::string &region);
                TrtcClient(const Credential &credential, const std::string &region, const ClientProfile &profile);

                typedef Outcome<Core::Error, Model::CreateCloudRecordingResponse> CreateCloudRecordingOutcome;
                typedef std::future<CreateCloudRecordingOutcome> CreateCloudRecordingOutcomeCallable;
                typedef std::function<void(const TrtcClient*, const Model::CreateCloudRecordingRequest&, CreateCloudRecordingOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateCloudRecordingAsyncHandler;
                typedef Outcome<Core::Error, Model::CreatePictureResponse> CreatePictureOutcome;
                typedef std::future<CreatePictureOutcome> CreatePictureOutcomeCallable;
                typedef std::function<void(const TrtcClient*, const Model::CreatePictureRequest&, CreatePictureOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreatePictureAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateTroubleInfoResponse> CreateTroubleInfoOutcome;
                typedef std::future<CreateTroubleInfoOutcome> CreateTroubleInfoOutcomeCallable;
                typedef std::function<void(const TrtcClient*, const Model::CreateTroubleInfoRequest&, CreateTroubleInfoOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateTroubleInfoAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteCloudRecordingResponse> DeleteCloudRecordingOutcome;
                typedef std::future<DeleteCloudRecordingOutcome> DeleteCloudRecordingOutcomeCallable;
                typedef std::function<void(const TrtcClient*, const Model::DeleteCloudRecordingRequest&, DeleteCloudRecordingOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteCloudRecordingAsyncHandler;
                typedef Outcome<Core::Error, Model::DeletePictureResponse> DeletePictureOutcome;
                typedef std::future<DeletePictureOutcome> DeletePictureOutcomeCallable;
                typedef std::function<void(const TrtcClient*, const Model::DeletePictureRequest&, DeletePictureOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeletePictureAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeAbnormalEventResponse> DescribeAbnormalEventOutcome;
                typedef std::future<DescribeAbnormalEventOutcome> DescribeAbnormalEventOutcomeCallable;
                typedef std::function<void(const TrtcClient*, const Model::DescribeAbnormalEventRequest&, DescribeAbnormalEventOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAbnormalEventAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeCallDetailResponse> DescribeCallDetailOutcome;
                typedef std::future<DescribeCallDetailOutcome> DescribeCallDetailOutcomeCallable;
                typedef std::function<void(const TrtcClient*, const Model::DescribeCallDetailRequest&, DescribeCallDetailOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeCallDetailAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeCloudRecordingResponse> DescribeCloudRecordingOutcome;
                typedef std::future<DescribeCloudRecordingOutcome> DescribeCloudRecordingOutcomeCallable;
                typedef std::function<void(const TrtcClient*, const Model::DescribeCloudRecordingRequest&, DescribeCloudRecordingOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeCloudRecordingAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeDetailEventResponse> DescribeDetailEventOutcome;
                typedef std::future<DescribeDetailEventOutcome> DescribeDetailEventOutcomeCallable;
                typedef std::function<void(const TrtcClient*, const Model::DescribeDetailEventRequest&, DescribeDetailEventOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDetailEventAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeExternalTrtcMeasureResponse> DescribeExternalTrtcMeasureOutcome;
                typedef std::future<DescribeExternalTrtcMeasureOutcome> DescribeExternalTrtcMeasureOutcomeCallable;
                typedef std::function<void(const TrtcClient*, const Model::DescribeExternalTrtcMeasureRequest&, DescribeExternalTrtcMeasureOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeExternalTrtcMeasureAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeHistoryScaleResponse> DescribeHistoryScaleOutcome;
                typedef std::future<DescribeHistoryScaleOutcome> DescribeHistoryScaleOutcomeCallable;
                typedef std::function<void(const TrtcClient*, const Model::DescribeHistoryScaleRequest&, DescribeHistoryScaleOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeHistoryScaleAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribePictureResponse> DescribePictureOutcome;
                typedef std::future<DescribePictureOutcome> DescribePictureOutcomeCallable;
                typedef std::function<void(const TrtcClient*, const Model::DescribePictureRequest&, DescribePictureOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribePictureAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeRecordStatisticResponse> DescribeRecordStatisticOutcome;
                typedef std::future<DescribeRecordStatisticOutcome> DescribeRecordStatisticOutcomeCallable;
                typedef std::function<void(const TrtcClient*, const Model::DescribeRecordStatisticRequest&, DescribeRecordStatisticOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeRecordStatisticAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeRoomInformationResponse> DescribeRoomInformationOutcome;
                typedef std::future<DescribeRoomInformationOutcome> DescribeRoomInformationOutcomeCallable;
                typedef std::function<void(const TrtcClient*, const Model::DescribeRoomInformationRequest&, DescribeRoomInformationOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeRoomInformationAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeTrtcMcuTranscodeTimeResponse> DescribeTrtcMcuTranscodeTimeOutcome;
                typedef std::future<DescribeTrtcMcuTranscodeTimeOutcome> DescribeTrtcMcuTranscodeTimeOutcomeCallable;
                typedef std::function<void(const TrtcClient*, const Model::DescribeTrtcMcuTranscodeTimeRequest&, DescribeTrtcMcuTranscodeTimeOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeTrtcMcuTranscodeTimeAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeUserInformationResponse> DescribeUserInformationOutcome;
                typedef std::future<DescribeUserInformationOutcome> DescribeUserInformationOutcomeCallable;
                typedef std::function<void(const TrtcClient*, const Model::DescribeUserInformationRequest&, DescribeUserInformationOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeUserInformationAsyncHandler;
                typedef Outcome<Core::Error, Model::DismissRoomResponse> DismissRoomOutcome;
                typedef std::future<DismissRoomOutcome> DismissRoomOutcomeCallable;
                typedef std::function<void(const TrtcClient*, const Model::DismissRoomRequest&, DismissRoomOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DismissRoomAsyncHandler;
                typedef Outcome<Core::Error, Model::DismissRoomByStrRoomIdResponse> DismissRoomByStrRoomIdOutcome;
                typedef std::future<DismissRoomByStrRoomIdOutcome> DismissRoomByStrRoomIdOutcomeCallable;
                typedef std::function<void(const TrtcClient*, const Model::DismissRoomByStrRoomIdRequest&, DismissRoomByStrRoomIdOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DismissRoomByStrRoomIdAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyCloudRecordingResponse> ModifyCloudRecordingOutcome;
                typedef std::future<ModifyCloudRecordingOutcome> ModifyCloudRecordingOutcomeCallable;
                typedef std::function<void(const TrtcClient*, const Model::ModifyCloudRecordingRequest&, ModifyCloudRecordingOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyCloudRecordingAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyPictureResponse> ModifyPictureOutcome;
                typedef std::future<ModifyPictureOutcome> ModifyPictureOutcomeCallable;
                typedef std::function<void(const TrtcClient*, const Model::ModifyPictureRequest&, ModifyPictureOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyPictureAsyncHandler;
                typedef Outcome<Core::Error, Model::RemoveUserResponse> RemoveUserOutcome;
                typedef std::future<RemoveUserOutcome> RemoveUserOutcomeCallable;
                typedef std::function<void(const TrtcClient*, const Model::RemoveUserRequest&, RemoveUserOutcome, const std::shared_ptr<const AsyncCallerContext>&)> RemoveUserAsyncHandler;
                typedef Outcome<Core::Error, Model::RemoveUserByStrRoomIdResponse> RemoveUserByStrRoomIdOutcome;
                typedef std::future<RemoveUserByStrRoomIdOutcome> RemoveUserByStrRoomIdOutcomeCallable;
                typedef std::function<void(const TrtcClient*, const Model::RemoveUserByStrRoomIdRequest&, RemoveUserByStrRoomIdOutcome, const std::shared_ptr<const AsyncCallerContext>&)> RemoveUserByStrRoomIdAsyncHandler;
                typedef Outcome<Core::Error, Model::StartMCUMixTranscodeResponse> StartMCUMixTranscodeOutcome;
                typedef std::future<StartMCUMixTranscodeOutcome> StartMCUMixTranscodeOutcomeCallable;
                typedef std::function<void(const TrtcClient*, const Model::StartMCUMixTranscodeRequest&, StartMCUMixTranscodeOutcome, const std::shared_ptr<const AsyncCallerContext>&)> StartMCUMixTranscodeAsyncHandler;
                typedef Outcome<Core::Error, Model::StartMCUMixTranscodeByStrRoomIdResponse> StartMCUMixTranscodeByStrRoomIdOutcome;
                typedef std::future<StartMCUMixTranscodeByStrRoomIdOutcome> StartMCUMixTranscodeByStrRoomIdOutcomeCallable;
                typedef std::function<void(const TrtcClient*, const Model::StartMCUMixTranscodeByStrRoomIdRequest&, StartMCUMixTranscodeByStrRoomIdOutcome, const std::shared_ptr<const AsyncCallerContext>&)> StartMCUMixTranscodeByStrRoomIdAsyncHandler;
                typedef Outcome<Core::Error, Model::StopMCUMixTranscodeResponse> StopMCUMixTranscodeOutcome;
                typedef std::future<StopMCUMixTranscodeOutcome> StopMCUMixTranscodeOutcomeCallable;
                typedef std::function<void(const TrtcClient*, const Model::StopMCUMixTranscodeRequest&, StopMCUMixTranscodeOutcome, const std::shared_ptr<const AsyncCallerContext>&)> StopMCUMixTranscodeAsyncHandler;
                typedef Outcome<Core::Error, Model::StopMCUMixTranscodeByStrRoomIdResponse> StopMCUMixTranscodeByStrRoomIdOutcome;
                typedef std::future<StopMCUMixTranscodeByStrRoomIdOutcome> StopMCUMixTranscodeByStrRoomIdOutcomeCallable;
                typedef std::function<void(const TrtcClient*, const Model::StopMCUMixTranscodeByStrRoomIdRequest&, StopMCUMixTranscodeByStrRoomIdOutcome, const std::shared_ptr<const AsyncCallerContext>&)> StopMCUMixTranscodeByStrRoomIdAsyncHandler;



                /**
                 *###接口说明：
启动云端录制功能，完成房间内的音视频录制，并上传到指定的云存储。您可以通过此 API 接口把TRTC 房间中的每一路音视频流做单独的录制有或者多路视频画面混流一路。

###您可以通过此接口实现如下目标：
* 指定订阅流参数（RecordParams）来指定需要录制的主播的黑名单或者白名单。
* 指定第三方存储的参数（StorageParams）来指定上传到您希望的云存储
* 指定混流模式下的音视频转码详细参数（MixTranscodeParams），包括视频分辨率、视频码率、视频帧率、以及声音质量等
* 指定混流模式各路画面的位置和布局或者也可以指定自动模板的方式来配置。

###关键名词：
* 单流录制：分别录制房间的订阅UserId的音频和视频。录制服务会实时将录制文件（M3U8/TS）上传至云存储。
* 混流录制：将房间内订阅UserId的音视频混录成一个音视频文件，并将录制文件（M3U8/TS）上传至云存储。
                 * @param req CreateCloudRecordingRequest
                 * @return CreateCloudRecordingOutcome
                 */
                CreateCloudRecordingOutcome CreateCloudRecording(const Model::CreateCloudRecordingRequest &request);
                void CreateCloudRecordingAsync(const Model::CreateCloudRecordingRequest& request, const CreateCloudRecordingAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateCloudRecordingOutcomeCallable CreateCloudRecordingCallable(const Model::CreateCloudRecordingRequest& request);

                /**
                 *如果您需要在 [云端混流转码](https://cloud.tencent.com/document/product/647/16827) 时频繁新增自定义背景图或水印，可通过此接口上传新的图片素材。无需频繁新增图片的场景，建议直接在 [控制台 > 应用管理 > 素材管理](https://cloud.tencent.com/document/product/647/50769) 中操作。
                 * @param req CreatePictureRequest
                 * @return CreatePictureOutcome
                 */
                CreatePictureOutcome CreatePicture(const Model::CreatePictureRequest &request);
                void CreatePictureAsync(const Model::CreatePictureRequest& request, const CreatePictureAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreatePictureOutcomeCallable CreatePictureCallable(const Model::CreatePictureRequest& request);

                /**
                 *创建异常信息
                 * @param req CreateTroubleInfoRequest
                 * @return CreateTroubleInfoOutcome
                 */
                CreateTroubleInfoOutcome CreateTroubleInfo(const Model::CreateTroubleInfoRequest &request);
                void CreateTroubleInfoAsync(const Model::CreateTroubleInfoRequest& request, const CreateTroubleInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateTroubleInfoOutcomeCallable CreateTroubleInfoCallable(const Model::CreateTroubleInfoRequest& request);

                /**
                 *成功开启录制后，可以使用此接口来停止录制任务。仅在录制任务进行时有效，录制退出后更新将会返回错误。停止录制成功后不代表文件全部传输完成，如果未完成后台将会继续上传文件，成功后通过事件回调通知客户文件全部传输完成状态。
                 * @param req DeleteCloudRecordingRequest
                 * @return DeleteCloudRecordingOutcome
                 */
                DeleteCloudRecordingOutcome DeleteCloudRecording(const Model::DeleteCloudRecordingRequest &request);
                void DeleteCloudRecordingAsync(const Model::DeleteCloudRecordingRequest& request, const DeleteCloudRecordingAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteCloudRecordingOutcomeCallable DeleteCloudRecordingCallable(const Model::DeleteCloudRecordingRequest& request);

                /**
                 *如果您需要在 [云端混流转码](https://cloud.tencent.com/document/product/647/16827) 时频繁删除自定义背景图或水印，可通过此接口删除已上传的图片。无需频繁删除图片的场景，建议直接在 [控制台 > 应用管理 > 素材管理](https://cloud.tencent.com/document/product/647/50769) 中操作。
                 * @param req DeletePictureRequest
                 * @return DeletePictureOutcome
                 */
                DeletePictureOutcome DeletePicture(const Model::DeletePictureRequest &request);
                void DeletePictureAsync(const Model::DeletePictureRequest& request, const DeletePictureAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeletePictureOutcomeCallable DeletePictureCallable(const Model::DeletePictureRequest& request);

                /**
                 *查询SDKAppID下用户的异常体验事件，返回异常体验ID与可能产生异常体验的原因。可查询15天内数据，查询起止时间不超过1个小时。支持跨天查询。异常体验ID映射见：https://cloud.tencent.com/document/product/647/44916
                 * @param req DescribeAbnormalEventRequest
                 * @return DescribeAbnormalEventOutcome
                 */
                DescribeAbnormalEventOutcome DescribeAbnormalEvent(const Model::DescribeAbnormalEventRequest &request);
                void DescribeAbnormalEventAsync(const Model::DescribeAbnormalEventRequest& request, const DescribeAbnormalEventAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeAbnormalEventOutcomeCallable DescribeAbnormalEventCallable(const Model::DescribeAbnormalEventRequest& request);

                /**
                 *查询指定时间内的用户列表及用户通话质量数据，可查询14天内数据。DataType 不为null，查询起止时间不超过1个小时，查询用户不超过6个，支持跨天查询。DataType，UserIds为null时，查询起止时间不超过4个小时， 默认查询6个用户，同时支持每页查询100以内用户个数（PageSize不超过100）。接口用于查询质量问题，不推荐作为计费使用。
**注意**：该接口只用于历史数据统计或核对数据使用，实时类关键业务逻辑不能使用。
                 * @param req DescribeCallDetailRequest
                 * @return DescribeCallDetailOutcome
                 */
                DescribeCallDetailOutcome DescribeCallDetail(const Model::DescribeCallDetailRequest &request);
                void DescribeCallDetailAsync(const Model::DescribeCallDetailRequest& request, const DescribeCallDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeCallDetailOutcomeCallable DescribeCallDetailCallable(const Model::DescribeCallDetailRequest& request);

                /**
                 *成功开启录制后，可以使用此接口来查询录制状态。仅在录制任务进行时有效，录制退出后查询将会返回错误。
                 * @param req DescribeCloudRecordingRequest
                 * @return DescribeCloudRecordingOutcome
                 */
                DescribeCloudRecordingOutcome DescribeCloudRecording(const Model::DescribeCloudRecordingRequest &request);
                void DescribeCloudRecordingAsync(const Model::DescribeCloudRecordingRequest& request, const DescribeCloudRecordingAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeCloudRecordingOutcomeCallable DescribeCloudRecordingCallable(const Model::DescribeCloudRecordingRequest& request);

                /**
                 *查询用户某次通话内的进退房，视频开关等详细事件。可查询14天内数据。
                 * @param req DescribeDetailEventRequest
                 * @return DescribeDetailEventOutcome
                 */
                DescribeDetailEventOutcome DescribeDetailEvent(const Model::DescribeDetailEventRequest &request);
                void DescribeDetailEventAsync(const Model::DescribeDetailEventRequest& request, const DescribeDetailEventAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeDetailEventOutcomeCallable DescribeDetailEventCallable(const Model::DescribeDetailEventRequest& request);

                /**
                 *获取Trtc的用量统计数据。走计费渠道二期 只允许查两天的数据
                 * @param req DescribeExternalTrtcMeasureRequest
                 * @return DescribeExternalTrtcMeasureOutcome
                 */
                DescribeExternalTrtcMeasureOutcome DescribeExternalTrtcMeasure(const Model::DescribeExternalTrtcMeasureRequest &request);
                void DescribeExternalTrtcMeasureAsync(const Model::DescribeExternalTrtcMeasureRequest& request, const DescribeExternalTrtcMeasureAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeExternalTrtcMeasureOutcomeCallable DescribeExternalTrtcMeasureCallable(const Model::DescribeExternalTrtcMeasureRequest& request);

                /**
                 *可查询sdkqppid 每天的房间数和用户数，每分钟1次，可查询最近14天的数据。当天未结束，无法查到当天的房间数与用户数。 
                 * @param req DescribeHistoryScaleRequest
                 * @return DescribeHistoryScaleOutcome
                 */
                DescribeHistoryScaleOutcome DescribeHistoryScale(const Model::DescribeHistoryScaleRequest &request);
                void DescribeHistoryScaleAsync(const Model::DescribeHistoryScaleRequest& request, const DescribeHistoryScaleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeHistoryScaleOutcomeCallable DescribeHistoryScaleCallable(const Model::DescribeHistoryScaleRequest& request);

                /**
                 *如果您需要在 [云端混流转码](https://cloud.tencent.com/document/product/647/16827) 时频繁查找自定义背景图或水印信息，可通过此接口查找已上传的图片信息。无需频繁查找图片信息的场景，建议直接在 [控制台 > 应用管理 > 素材管理](https://cloud.tencent.com/document/product/647/50769) 中查看。
                 * @param req DescribePictureRequest
                 * @return DescribePictureOutcome
                 */
                DescribePictureOutcome DescribePicture(const Model::DescribePictureRequest &request);
                void DescribePictureAsync(const Model::DescribePictureRequest& request, const DescribePictureAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribePictureOutcomeCallable DescribePictureCallable(const Model::DescribePictureRequest& request);

                /**
                 *查询云端录制计费时长。

- 查询时间小于等于1天时，返回每5分钟粒度的数据；查询时间大于1天时，返回按天汇总的数据。
- 单次查询统计区间最多不能超过31天。
- 若查询当天用量，由于统计延迟等原因，返回数据可能不够准确。
- 日结后付费将于次日上午推送账单，建议次日上午9点以后再来查询前一天的用量。
                 * @param req DescribeRecordStatisticRequest
                 * @return DescribeRecordStatisticOutcome
                 */
                DescribeRecordStatisticOutcome DescribeRecordStatistic(const Model::DescribeRecordStatisticRequest &request);
                void DescribeRecordStatisticAsync(const Model::DescribeRecordStatisticRequest& request, const DescribeRecordStatisticAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeRecordStatisticOutcomeCallable DescribeRecordStatisticCallable(const Model::DescribeRecordStatisticRequest& request);

                /**
                 *查询sdkappid下的房间列表。默认返回10条通话，一次最多返回100条通话。可查询14天内的数据。
**注意**：该接口只用于历史数据统计或核对数据使用，实时类关键业务逻辑不能使用。
                 * @param req DescribeRoomInformationRequest
                 * @return DescribeRoomInformationOutcome
                 */
                DescribeRoomInformationOutcome DescribeRoomInformation(const Model::DescribeRoomInformationRequest &request);
                void DescribeRoomInformationAsync(const Model::DescribeRoomInformationRequest& request, const DescribeRoomInformationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeRoomInformationOutcomeCallable DescribeRoomInformationCallable(const Model::DescribeRoomInformationRequest& request);

                /**
                 *查询旁路转码计费时长。
- 查询时间小于等于1天时，返回每5分钟粒度的数据；查询时间大于1天时，返回按天汇总的数据。
- 单次查询统计区间最多不能超过31天。
- 若查询当天用量，由于统计延迟等原因，返回数据可能不够准确。
- 日结后付费将于次日上午推送账单，建议次日上午9点以后再来查询前一天的用量。
                 * @param req DescribeTrtcMcuTranscodeTimeRequest
                 * @return DescribeTrtcMcuTranscodeTimeOutcome
                 */
                DescribeTrtcMcuTranscodeTimeOutcome DescribeTrtcMcuTranscodeTime(const Model::DescribeTrtcMcuTranscodeTimeRequest &request);
                void DescribeTrtcMcuTranscodeTimeAsync(const Model::DescribeTrtcMcuTranscodeTimeRequest& request, const DescribeTrtcMcuTranscodeTimeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeTrtcMcuTranscodeTimeOutcomeCallable DescribeTrtcMcuTranscodeTimeCallable(const Model::DescribeTrtcMcuTranscodeTimeRequest& request);

                /**
                 *查询指定时间内的用户列表，可查询14天内数据，查询起止时间不超过4小时。默认每页查询6个用户，支持每页最大查询100个用户PageSize不超过100）。
**注意**：该接口只用于历史数据统计或核对数据使用，实时类关键业务逻辑不能使用。
                 * @param req DescribeUserInformationRequest
                 * @return DescribeUserInformationOutcome
                 */
                DescribeUserInformationOutcome DescribeUserInformation(const Model::DescribeUserInformationRequest &request);
                void DescribeUserInformationAsync(const Model::DescribeUserInformationRequest& request, const DescribeUserInformationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeUserInformationOutcomeCallable DescribeUserInformationCallable(const Model::DescribeUserInformationRequest& request);

                /**
                 *接口说明：把房间所有用户从房间移出，解散房间。支持所有平台，Android、iOS、Windows 和 macOS 需升级到 TRTC SDK 6.6及以上版本。
                 * @param req DismissRoomRequest
                 * @return DismissRoomOutcome
                 */
                DismissRoomOutcome DismissRoom(const Model::DismissRoomRequest &request);
                void DismissRoomAsync(const Model::DismissRoomRequest& request, const DismissRoomAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DismissRoomOutcomeCallable DismissRoomCallable(const Model::DismissRoomRequest& request);

                /**
                 *接口说明：把房间所有用户从房间移出，解散房间。支持所有平台，Android、iOS、Windows 和 macOS 需升级到 TRTC SDK 6.6及以上版本。
                 * @param req DismissRoomByStrRoomIdRequest
                 * @return DismissRoomByStrRoomIdOutcome
                 */
                DismissRoomByStrRoomIdOutcome DismissRoomByStrRoomId(const Model::DismissRoomByStrRoomIdRequest &request);
                void DismissRoomByStrRoomIdAsync(const Model::DismissRoomByStrRoomIdRequest& request, const DismissRoomByStrRoomIdAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DismissRoomByStrRoomIdOutcomeCallable DismissRoomByStrRoomIdCallable(const Model::DismissRoomByStrRoomIdRequest& request);

                /**
                 *成功开启录制后，可以使用此接口来更新录制任务。仅在录制任务进行时有效，录制退出后更新将会返回错误。更新操作是全量覆盖，并不是增量更新的模式，也就是说每次更新都需要携带全量的信息。
                 * @param req ModifyCloudRecordingRequest
                 * @return ModifyCloudRecordingOutcome
                 */
                ModifyCloudRecordingOutcome ModifyCloudRecording(const Model::ModifyCloudRecordingRequest &request);
                void ModifyCloudRecordingAsync(const Model::ModifyCloudRecordingRequest& request, const ModifyCloudRecordingAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyCloudRecordingOutcomeCallable ModifyCloudRecordingCallable(const Model::ModifyCloudRecordingRequest& request);

                /**
                 *如果您需要在 [云端混流转码](https://cloud.tencent.com/document/product/647/16827) 时频繁修改自定义背景图或水印素材，可通过此接口修改已上传的图片。无需频繁修改图片素材的场景，建议直接在 [控制台 > 应用管理 > 素材管理](https://cloud.tencent.com/document/product/647/50769) 中操作。
                 * @param req ModifyPictureRequest
                 * @return ModifyPictureOutcome
                 */
                ModifyPictureOutcome ModifyPicture(const Model::ModifyPictureRequest &request);
                void ModifyPictureAsync(const Model::ModifyPictureRequest& request, const ModifyPictureAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyPictureOutcomeCallable ModifyPictureCallable(const Model::ModifyPictureRequest& request);

                /**
                 *接口说明：将用户从房间移出，适用于主播/房主/管理员踢人等场景。支持所有平台，Android、iOS、Windows 和 macOS 需升级到 TRTC SDK 6.6及以上版本。
                 * @param req RemoveUserRequest
                 * @return RemoveUserOutcome
                 */
                RemoveUserOutcome RemoveUser(const Model::RemoveUserRequest &request);
                void RemoveUserAsync(const Model::RemoveUserRequest& request, const RemoveUserAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                RemoveUserOutcomeCallable RemoveUserCallable(const Model::RemoveUserRequest& request);

                /**
                 *接口说明：将用户从房间移出，适用于主播/房主/管理员踢人等场景。支持所有平台，Android、iOS、Windows 和 macOS 需升级到 TRTC SDK 6.6及以上版本。
                 * @param req RemoveUserByStrRoomIdRequest
                 * @return RemoveUserByStrRoomIdOutcome
                 */
                RemoveUserByStrRoomIdOutcome RemoveUserByStrRoomId(const Model::RemoveUserByStrRoomIdRequest &request);
                void RemoveUserByStrRoomIdAsync(const Model::RemoveUserByStrRoomIdRequest& request, const RemoveUserByStrRoomIdAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                RemoveUserByStrRoomIdOutcomeCallable RemoveUserByStrRoomIdCallable(const Model::RemoveUserByStrRoomIdRequest& request);

                /**
                 *接口说明：启动云端混流，并指定混流画面中各路画面的布局位置。

TRTC 的一个房间中可能会同时存在多路音视频流，您可以通过此 API 接口，通知腾讯云服务端将多路视频画面合成一路，并指定每一路画面的位置，同时将多路声音进行混音，最终形成一路音视频流，以便用于录制和直播观看。房间销毁后混流自动结束。

您可以通过此接口实现如下目标：
- 设置最终直播流的画质和音质，包括视频分辨率、视频码率、视频帧率、以及声音质量等。
- 设置各路画面的位置和布局，您只需要在启动时设置一次，排版引擎会自动完成后续的画面排布。
- 设置录制文件名，用于二次回放。
- 设置 CDN 直播流 ID，用于在 CDN 进行直播观看。

目前已经支持了如下几种布局模板：
- 悬浮模板：第一个进入房间的用户的视频画面会铺满整个屏幕，其他用户的视频画面从左下角依次水平排列，显示为小画面，最多4行，每行4个，小画面悬浮于大画面之上。最多支持1个大画面和15个小画面，如果用户只发送音频，仍然会占用画面位置。
- 九宫格模板：所有用户的视频画面大小一致，平分整个屏幕，人数越多，每个画面的尺寸越小。最多支持16个画面，如果用户只发送音频，仍然会占用画面位置。
- 屏幕分享模板：适合视频会议和在线教育场景的布局，屏幕分享（或者主讲的摄像头）始终占据屏幕左侧的大画面位置，其他用户依次垂直排列于右侧，最多两列，每列最多8个小画面。最多支持1个大画面和15个小画面。若上行分辨率宽高比与画面输出宽高比不一致时，左侧大画面为了保持内容的完整性采用缩放方式处理，右侧小画面采用裁剪方式处理。
- 画中画模板：适用于混合大小两路视频画面和其他用户混音，或者混合一路大画面和其他用户混音的场景。小画面悬浮于大画面之上，可以指定大小画面的用户以及小画面的显示位置，最多支持2个画面。
- 自定义模板：适用于在混流中指定用户的画面位置，或者预设视频画面位置的场景。当预设位置指定用户时，排版引擎会该用户预留位置；当预设位置未指定用户时，排版引擎会根据进房间顺序自动填充。预设位置填满时，不再混合其他用户的画面和声音。自定义模板启用占位图功能时（LayoutParams中的PlaceHolderMode设置成1），在预设位置的用户没有上行视频时可显示对应的占位图（PlaceImageId）。

注意：
1、**混流转码为收费功能，调用接口将产生云端混流转码费用，详见[云端混流转码计费说明](https://cloud.tencent.com/document/product/647/49446)。**
2、2020年1月9号及以后创建的应用才能直接调用此接口。2020年1月9日之前创建的应用默认使用云直播的云端混流，如需切换至MCU混流，请[提交工单](https://console.cloud.tencent.com/workorder/category)寻求帮助。
3、客户端混流和服务端混流不能混用。
                 * @param req StartMCUMixTranscodeRequest
                 * @return StartMCUMixTranscodeOutcome
                 */
                StartMCUMixTranscodeOutcome StartMCUMixTranscode(const Model::StartMCUMixTranscodeRequest &request);
                void StartMCUMixTranscodeAsync(const Model::StartMCUMixTranscodeRequest& request, const StartMCUMixTranscodeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                StartMCUMixTranscodeOutcomeCallable StartMCUMixTranscodeCallable(const Model::StartMCUMixTranscodeRequest& request);

                /**
                 *接口说明：启动云端混流，并指定混流画面中各路画面的布局位置。

TRTC 的一个房间中可能会同时存在多路音视频流，您可以通过此 API 接口，通知腾讯云服务端将多路视频画面合成一路，并指定每一路画面的位置，同时将多路声音进行混音，最终形成一路音视频流，以便用于录制和直播观看。

您可以通过此接口实现如下目标：
- 设置最终直播流的画质和音质，包括视频分辨率、视频码率、视频帧率、以及声音质量等。
- 设置各路画面的位置和布局，您只需要在启动时设置一次，排版引擎会自动完成后续的画面排布。
- 设置录制文件名，用于二次回放。
- 设置 CDN 直播流 ID，用于在 CDN 进行直播观看。

目前已经支持了如下几种布局模板：
- 悬浮模板：第一个进入房间的用户的视频画面会铺满整个屏幕，其他用户的视频画面从左下角依次水平排列，显示为小画面，最多4行，每行4个，小画面悬浮于大画面之上。最多支持1个大画面和15个小画面，如果用户只发送音频，仍然会占用画面位置。
- 九宫格模板：所有用户的视频画面大小一致，平分整个屏幕，人数越多，每个画面的尺寸越小。最多支持16个画面，如果用户只发送音频，仍然会占用画面位置。
- 屏幕分享模板：适合视频会议和在线教育场景的布局，屏幕分享（或者主讲的摄像头）始终占据屏幕左侧的大画面位置，其他用户依次垂直排列于右侧，最多两列，每列最多8个小画面。最多支持1个大画面和15个小画面。若上行分辨率宽高比与画面输出宽高比不一致时，左侧大画面为了保持内容的完整性采用缩放方式处理，右侧小画面采用裁剪方式处理。
- 画中画模板：适用于混合大小两路视频画面和其他用户混音，或者混合一路大画面和其他用户混音的场景。小画面悬浮于大画面之上，可以指定大小画面的用户以及小画面的显示位置。
- 自定义模板：适用于在混流中指定用户的画面位置，或者预设视频画面位置的场景。当预设位置指定用户时，排版引擎会该用户预留位置；当预设位置未指定用户时，排版引擎会根据进房间顺序自动填充。预设位置填满时，不再混合其他用户的画面和声音。自定义模板启用占位图功能时（LayoutParams中的PlaceHolderMode设置成1），在预设位置的用户没有上行视频时可显示对应的占位图（PlaceImageId）。

注意：
1、**混流转码为收费功能，调用接口将产生云端混流转码费用，详见[云端混流转码计费说明](https://cloud.tencent.com/document/product/647/49446)。**
2、2020年1月9号及以后创建的应用才能直接调用此接口。2020年1月9日之前创建的应用默认使用云直播的云端混流，如需切换至MCU混流，请[提交工单](https://console.cloud.tencent.com/workorder/category)寻求帮助。
3、客户端混流和服务端混流不能混用。
                 * @param req StartMCUMixTranscodeByStrRoomIdRequest
                 * @return StartMCUMixTranscodeByStrRoomIdOutcome
                 */
                StartMCUMixTranscodeByStrRoomIdOutcome StartMCUMixTranscodeByStrRoomId(const Model::StartMCUMixTranscodeByStrRoomIdRequest &request);
                void StartMCUMixTranscodeByStrRoomIdAsync(const Model::StartMCUMixTranscodeByStrRoomIdRequest& request, const StartMCUMixTranscodeByStrRoomIdAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                StartMCUMixTranscodeByStrRoomIdOutcomeCallable StartMCUMixTranscodeByStrRoomIdCallable(const Model::StartMCUMixTranscodeByStrRoomIdRequest& request);

                /**
                 *接口说明：结束云端混流
                 * @param req StopMCUMixTranscodeRequest
                 * @return StopMCUMixTranscodeOutcome
                 */
                StopMCUMixTranscodeOutcome StopMCUMixTranscode(const Model::StopMCUMixTranscodeRequest &request);
                void StopMCUMixTranscodeAsync(const Model::StopMCUMixTranscodeRequest& request, const StopMCUMixTranscodeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                StopMCUMixTranscodeOutcomeCallable StopMCUMixTranscodeCallable(const Model::StopMCUMixTranscodeRequest& request);

                /**
                 *接口说明：结束云端混流
                 * @param req StopMCUMixTranscodeByStrRoomIdRequest
                 * @return StopMCUMixTranscodeByStrRoomIdOutcome
                 */
                StopMCUMixTranscodeByStrRoomIdOutcome StopMCUMixTranscodeByStrRoomId(const Model::StopMCUMixTranscodeByStrRoomIdRequest &request);
                void StopMCUMixTranscodeByStrRoomIdAsync(const Model::StopMCUMixTranscodeByStrRoomIdRequest& request, const StopMCUMixTranscodeByStrRoomIdAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                StopMCUMixTranscodeByStrRoomIdOutcomeCallable StopMCUMixTranscodeByStrRoomIdCallable(const Model::StopMCUMixTranscodeByStrRoomIdRequest& request);

            };
        }
    }
}

#endif // !TENCENTCLOUD_TRTC_V20190722_TRTCCLIENT_H_
