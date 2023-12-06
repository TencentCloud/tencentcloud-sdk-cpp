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

#ifndef TENCENTCLOUD_GME_V20180711_GMECLIENT_H_
#define TENCENTCLOUD_GME_V20180711_GMECLIENT_H_

#include <functional>
#include <future>
#include <tencentcloud/core/AbstractClient.h>
#include <tencentcloud/core/Credential.h>
#include <tencentcloud/core/profile/ClientProfile.h>
#include <tencentcloud/core/AsyncCallerContext.h>
#include <tencentcloud/gme/v20180711/model/CreateAgeDetectTaskRequest.h>
#include <tencentcloud/gme/v20180711/model/CreateAgeDetectTaskResponse.h>
#include <tencentcloud/gme/v20180711/model/CreateAppRequest.h>
#include <tencentcloud/gme/v20180711/model/CreateAppResponse.h>
#include <tencentcloud/gme/v20180711/model/CreateCustomizationRequest.h>
#include <tencentcloud/gme/v20180711/model/CreateCustomizationResponse.h>
#include <tencentcloud/gme/v20180711/model/CreateScanUserRequest.h>
#include <tencentcloud/gme/v20180711/model/CreateScanUserResponse.h>
#include <tencentcloud/gme/v20180711/model/DeleteCustomizationRequest.h>
#include <tencentcloud/gme/v20180711/model/DeleteCustomizationResponse.h>
#include <tencentcloud/gme/v20180711/model/DeleteRoomMemberRequest.h>
#include <tencentcloud/gme/v20180711/model/DeleteRoomMemberResponse.h>
#include <tencentcloud/gme/v20180711/model/DeleteScanUserRequest.h>
#include <tencentcloud/gme/v20180711/model/DeleteScanUserResponse.h>
#include <tencentcloud/gme/v20180711/model/DescribeAgeDetectTaskRequest.h>
#include <tencentcloud/gme/v20180711/model/DescribeAgeDetectTaskResponse.h>
#include <tencentcloud/gme/v20180711/model/DescribeAppStatisticsRequest.h>
#include <tencentcloud/gme/v20180711/model/DescribeAppStatisticsResponse.h>
#include <tencentcloud/gme/v20180711/model/DescribeApplicationDataRequest.h>
#include <tencentcloud/gme/v20180711/model/DescribeApplicationDataResponse.h>
#include <tencentcloud/gme/v20180711/model/DescribeApplicationListRequest.h>
#include <tencentcloud/gme/v20180711/model/DescribeApplicationListResponse.h>
#include <tencentcloud/gme/v20180711/model/DescribeRealtimeScanConfigRequest.h>
#include <tencentcloud/gme/v20180711/model/DescribeRealtimeScanConfigResponse.h>
#include <tencentcloud/gme/v20180711/model/DescribeRecordInfoRequest.h>
#include <tencentcloud/gme/v20180711/model/DescribeRecordInfoResponse.h>
#include <tencentcloud/gme/v20180711/model/DescribeRoomInfoRequest.h>
#include <tencentcloud/gme/v20180711/model/DescribeRoomInfoResponse.h>
#include <tencentcloud/gme/v20180711/model/DescribeScanResultListRequest.h>
#include <tencentcloud/gme/v20180711/model/DescribeScanResultListResponse.h>
#include <tencentcloud/gme/v20180711/model/DescribeTaskInfoRequest.h>
#include <tencentcloud/gme/v20180711/model/DescribeTaskInfoResponse.h>
#include <tencentcloud/gme/v20180711/model/DescribeUserInAndOutTimeRequest.h>
#include <tencentcloud/gme/v20180711/model/DescribeUserInAndOutTimeResponse.h>
#include <tencentcloud/gme/v20180711/model/GetCustomizationListRequest.h>
#include <tencentcloud/gme/v20180711/model/GetCustomizationListResponse.h>
#include <tencentcloud/gme/v20180711/model/ModifyAppStatusRequest.h>
#include <tencentcloud/gme/v20180711/model/ModifyAppStatusResponse.h>
#include <tencentcloud/gme/v20180711/model/ModifyCustomizationRequest.h>
#include <tencentcloud/gme/v20180711/model/ModifyCustomizationResponse.h>
#include <tencentcloud/gme/v20180711/model/ModifyCustomizationStateRequest.h>
#include <tencentcloud/gme/v20180711/model/ModifyCustomizationStateResponse.h>
#include <tencentcloud/gme/v20180711/model/ModifyRecordInfoRequest.h>
#include <tencentcloud/gme/v20180711/model/ModifyRecordInfoResponse.h>
#include <tencentcloud/gme/v20180711/model/ModifyUserMicStatusRequest.h>
#include <tencentcloud/gme/v20180711/model/ModifyUserMicStatusResponse.h>
#include <tencentcloud/gme/v20180711/model/ScanVoiceRequest.h>
#include <tencentcloud/gme/v20180711/model/ScanVoiceResponse.h>
#include <tencentcloud/gme/v20180711/model/StartRecordRequest.h>
#include <tencentcloud/gme/v20180711/model/StartRecordResponse.h>
#include <tencentcloud/gme/v20180711/model/StopRecordRequest.h>
#include <tencentcloud/gme/v20180711/model/StopRecordResponse.h>
#include <tencentcloud/gme/v20180711/model/UpdateScanRoomsRequest.h>
#include <tencentcloud/gme/v20180711/model/UpdateScanRoomsResponse.h>
#include <tencentcloud/gme/v20180711/model/UpdateScanUsersRequest.h>
#include <tencentcloud/gme/v20180711/model/UpdateScanUsersResponse.h>


namespace TencentCloud
{
    namespace Gme
    {
        namespace V20180711
        {
            class GmeClient : public AbstractClient
            {
            public:
                GmeClient(const Credential &credential, const std::string &region);
                GmeClient(const Credential &credential, const std::string &region, const ClientProfile &profile);

                typedef Outcome<Core::Error, Model::CreateAgeDetectTaskResponse> CreateAgeDetectTaskOutcome;
                typedef std::future<CreateAgeDetectTaskOutcome> CreateAgeDetectTaskOutcomeCallable;
                typedef std::function<void(const GmeClient*, const Model::CreateAgeDetectTaskRequest&, CreateAgeDetectTaskOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateAgeDetectTaskAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateAppResponse> CreateAppOutcome;
                typedef std::future<CreateAppOutcome> CreateAppOutcomeCallable;
                typedef std::function<void(const GmeClient*, const Model::CreateAppRequest&, CreateAppOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateAppAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateCustomizationResponse> CreateCustomizationOutcome;
                typedef std::future<CreateCustomizationOutcome> CreateCustomizationOutcomeCallable;
                typedef std::function<void(const GmeClient*, const Model::CreateCustomizationRequest&, CreateCustomizationOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateCustomizationAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateScanUserResponse> CreateScanUserOutcome;
                typedef std::future<CreateScanUserOutcome> CreateScanUserOutcomeCallable;
                typedef std::function<void(const GmeClient*, const Model::CreateScanUserRequest&, CreateScanUserOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateScanUserAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteCustomizationResponse> DeleteCustomizationOutcome;
                typedef std::future<DeleteCustomizationOutcome> DeleteCustomizationOutcomeCallable;
                typedef std::function<void(const GmeClient*, const Model::DeleteCustomizationRequest&, DeleteCustomizationOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteCustomizationAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteRoomMemberResponse> DeleteRoomMemberOutcome;
                typedef std::future<DeleteRoomMemberOutcome> DeleteRoomMemberOutcomeCallable;
                typedef std::function<void(const GmeClient*, const Model::DeleteRoomMemberRequest&, DeleteRoomMemberOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteRoomMemberAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteScanUserResponse> DeleteScanUserOutcome;
                typedef std::future<DeleteScanUserOutcome> DeleteScanUserOutcomeCallable;
                typedef std::function<void(const GmeClient*, const Model::DeleteScanUserRequest&, DeleteScanUserOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteScanUserAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeAgeDetectTaskResponse> DescribeAgeDetectTaskOutcome;
                typedef std::future<DescribeAgeDetectTaskOutcome> DescribeAgeDetectTaskOutcomeCallable;
                typedef std::function<void(const GmeClient*, const Model::DescribeAgeDetectTaskRequest&, DescribeAgeDetectTaskOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAgeDetectTaskAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeAppStatisticsResponse> DescribeAppStatisticsOutcome;
                typedef std::future<DescribeAppStatisticsOutcome> DescribeAppStatisticsOutcomeCallable;
                typedef std::function<void(const GmeClient*, const Model::DescribeAppStatisticsRequest&, DescribeAppStatisticsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAppStatisticsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeApplicationDataResponse> DescribeApplicationDataOutcome;
                typedef std::future<DescribeApplicationDataOutcome> DescribeApplicationDataOutcomeCallable;
                typedef std::function<void(const GmeClient*, const Model::DescribeApplicationDataRequest&, DescribeApplicationDataOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeApplicationDataAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeApplicationListResponse> DescribeApplicationListOutcome;
                typedef std::future<DescribeApplicationListOutcome> DescribeApplicationListOutcomeCallable;
                typedef std::function<void(const GmeClient*, const Model::DescribeApplicationListRequest&, DescribeApplicationListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeApplicationListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeRealtimeScanConfigResponse> DescribeRealtimeScanConfigOutcome;
                typedef std::future<DescribeRealtimeScanConfigOutcome> DescribeRealtimeScanConfigOutcomeCallable;
                typedef std::function<void(const GmeClient*, const Model::DescribeRealtimeScanConfigRequest&, DescribeRealtimeScanConfigOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeRealtimeScanConfigAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeRecordInfoResponse> DescribeRecordInfoOutcome;
                typedef std::future<DescribeRecordInfoOutcome> DescribeRecordInfoOutcomeCallable;
                typedef std::function<void(const GmeClient*, const Model::DescribeRecordInfoRequest&, DescribeRecordInfoOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeRecordInfoAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeRoomInfoResponse> DescribeRoomInfoOutcome;
                typedef std::future<DescribeRoomInfoOutcome> DescribeRoomInfoOutcomeCallable;
                typedef std::function<void(const GmeClient*, const Model::DescribeRoomInfoRequest&, DescribeRoomInfoOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeRoomInfoAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeScanResultListResponse> DescribeScanResultListOutcome;
                typedef std::future<DescribeScanResultListOutcome> DescribeScanResultListOutcomeCallable;
                typedef std::function<void(const GmeClient*, const Model::DescribeScanResultListRequest&, DescribeScanResultListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeScanResultListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeTaskInfoResponse> DescribeTaskInfoOutcome;
                typedef std::future<DescribeTaskInfoOutcome> DescribeTaskInfoOutcomeCallable;
                typedef std::function<void(const GmeClient*, const Model::DescribeTaskInfoRequest&, DescribeTaskInfoOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeTaskInfoAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeUserInAndOutTimeResponse> DescribeUserInAndOutTimeOutcome;
                typedef std::future<DescribeUserInAndOutTimeOutcome> DescribeUserInAndOutTimeOutcomeCallable;
                typedef std::function<void(const GmeClient*, const Model::DescribeUserInAndOutTimeRequest&, DescribeUserInAndOutTimeOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeUserInAndOutTimeAsyncHandler;
                typedef Outcome<Core::Error, Model::GetCustomizationListResponse> GetCustomizationListOutcome;
                typedef std::future<GetCustomizationListOutcome> GetCustomizationListOutcomeCallable;
                typedef std::function<void(const GmeClient*, const Model::GetCustomizationListRequest&, GetCustomizationListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> GetCustomizationListAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyAppStatusResponse> ModifyAppStatusOutcome;
                typedef std::future<ModifyAppStatusOutcome> ModifyAppStatusOutcomeCallable;
                typedef std::function<void(const GmeClient*, const Model::ModifyAppStatusRequest&, ModifyAppStatusOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyAppStatusAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyCustomizationResponse> ModifyCustomizationOutcome;
                typedef std::future<ModifyCustomizationOutcome> ModifyCustomizationOutcomeCallable;
                typedef std::function<void(const GmeClient*, const Model::ModifyCustomizationRequest&, ModifyCustomizationOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyCustomizationAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyCustomizationStateResponse> ModifyCustomizationStateOutcome;
                typedef std::future<ModifyCustomizationStateOutcome> ModifyCustomizationStateOutcomeCallable;
                typedef std::function<void(const GmeClient*, const Model::ModifyCustomizationStateRequest&, ModifyCustomizationStateOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyCustomizationStateAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyRecordInfoResponse> ModifyRecordInfoOutcome;
                typedef std::future<ModifyRecordInfoOutcome> ModifyRecordInfoOutcomeCallable;
                typedef std::function<void(const GmeClient*, const Model::ModifyRecordInfoRequest&, ModifyRecordInfoOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyRecordInfoAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyUserMicStatusResponse> ModifyUserMicStatusOutcome;
                typedef std::future<ModifyUserMicStatusOutcome> ModifyUserMicStatusOutcomeCallable;
                typedef std::function<void(const GmeClient*, const Model::ModifyUserMicStatusRequest&, ModifyUserMicStatusOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyUserMicStatusAsyncHandler;
                typedef Outcome<Core::Error, Model::ScanVoiceResponse> ScanVoiceOutcome;
                typedef std::future<ScanVoiceOutcome> ScanVoiceOutcomeCallable;
                typedef std::function<void(const GmeClient*, const Model::ScanVoiceRequest&, ScanVoiceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ScanVoiceAsyncHandler;
                typedef Outcome<Core::Error, Model::StartRecordResponse> StartRecordOutcome;
                typedef std::future<StartRecordOutcome> StartRecordOutcomeCallable;
                typedef std::function<void(const GmeClient*, const Model::StartRecordRequest&, StartRecordOutcome, const std::shared_ptr<const AsyncCallerContext>&)> StartRecordAsyncHandler;
                typedef Outcome<Core::Error, Model::StopRecordResponse> StopRecordOutcome;
                typedef std::future<StopRecordOutcome> StopRecordOutcomeCallable;
                typedef std::function<void(const GmeClient*, const Model::StopRecordRequest&, StopRecordOutcome, const std::shared_ptr<const AsyncCallerContext>&)> StopRecordAsyncHandler;
                typedef Outcome<Core::Error, Model::UpdateScanRoomsResponse> UpdateScanRoomsOutcome;
                typedef std::future<UpdateScanRoomsOutcome> UpdateScanRoomsOutcomeCallable;
                typedef std::function<void(const GmeClient*, const Model::UpdateScanRoomsRequest&, UpdateScanRoomsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> UpdateScanRoomsAsyncHandler;
                typedef Outcome<Core::Error, Model::UpdateScanUsersResponse> UpdateScanUsersOutcome;
                typedef std::future<UpdateScanUsersOutcome> UpdateScanUsersOutcomeCallable;
                typedef std::function<void(const GmeClient*, const Model::UpdateScanUsersRequest&, UpdateScanUsersOutcome, const std::shared_ptr<const AsyncCallerContext>&)> UpdateScanUsersAsyncHandler;



                /**
                 *目前该功能底层能力已不具备，不对外提供，目前需要下线，走预下线流程。

用于创建年龄语音识别任务的接口，请求频率10次/秒。该接口目前通过白名单开放试用，如有需求，请提交工单申请。
</br>
<h4><b>接口功能说明：</b></h4>
<li>支持对语音文件进行检测，判断是否为未成年人。</li>
<li>支持批量提交检测子任务。检测子任务列表最多支持100个。</li>
</br>
<h4><b>音频文件限制说明：</b></h4>
<li>音频文件大小限制：10 M</li>
<li>音频文件时长限制：3分钟</li>
<li>音频文件格式支持的类型：.wav、.m4a、.amr、.mp3、.aac、.wma、.ogg</li>
</br>
                 * @param req CreateAgeDetectTaskRequest
                 * @return CreateAgeDetectTaskOutcome
                 */
                CreateAgeDetectTaskOutcome CreateAgeDetectTask(const Model::CreateAgeDetectTaskRequest &request);
                void CreateAgeDetectTaskAsync(const Model::CreateAgeDetectTaskRequest& request, const CreateAgeDetectTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateAgeDetectTaskOutcomeCallable CreateAgeDetectTaskCallable(const Model::CreateAgeDetectTaskRequest& request);

                /**
                 *本接口(CreateApp)用于创建一个GME应用。
                 * @param req CreateAppRequest
                 * @return CreateAppOutcome
                 */
                CreateAppOutcome CreateApp(const Model::CreateAppRequest &request);
                void CreateAppAsync(const Model::CreateAppRequest& request, const CreateAppAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateAppOutcomeCallable CreateAppCallable(const Model::CreateAppRequest& request);

                /**
                 *用户使用该接口可以创建语音消息转文本热句模型，以供识别调用
                 * @param req CreateCustomizationRequest
                 * @return CreateCustomizationOutcome
                 */
                CreateCustomizationOutcome CreateCustomization(const Model::CreateCustomizationRequest &request);
                void CreateCustomizationAsync(const Model::CreateCustomizationRequest& request, const CreateCustomizationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateCustomizationOutcomeCallable CreateCustomizationCallable(const Model::CreateCustomizationRequest& request);

                /**
                 *新增自定义送检用户。**接口使用前提**：目前 CreateScanUser 接口通过白名单开放，如需使用，需要 [提交工单申请](https://console.cloud.tencent.com/workorder/category?level1_id=438&level2_id=445&source=0&data_title=%E6%B8%B8%E6%88%8F%E5%A4%9A%E5%AA%92%E4%BD%93%E5%BC%95%E6%93%8EGME&step=1)。
                 * @param req CreateScanUserRequest
                 * @return CreateScanUserOutcome
                 */
                CreateScanUserOutcome CreateScanUser(const Model::CreateScanUserRequest &request);
                void CreateScanUserAsync(const Model::CreateScanUserRequest& request, const CreateScanUserAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateScanUserOutcomeCallable CreateScanUserCallable(const Model::CreateScanUserRequest& request);

                /**
                 *用户通过该接口可以删除语音消息转文本热句模型
                 * @param req DeleteCustomizationRequest
                 * @return DeleteCustomizationOutcome
                 */
                DeleteCustomizationOutcome DeleteCustomization(const Model::DeleteCustomizationRequest &request);
                void DeleteCustomizationAsync(const Model::DeleteCustomizationRequest& request, const DeleteCustomizationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteCustomizationOutcomeCallable DeleteCustomizationCallable(const Model::DeleteCustomizationRequest& request);

                /**
                 *本接口(DeleteRoomMember)用户删除房间或者剔除房间内用户
                 * @param req DeleteRoomMemberRequest
                 * @return DeleteRoomMemberOutcome
                 */
                DeleteRoomMemberOutcome DeleteRoomMember(const Model::DeleteRoomMemberRequest &request);
                void DeleteRoomMemberAsync(const Model::DeleteRoomMemberRequest& request, const DeleteRoomMemberAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteRoomMemberOutcomeCallable DeleteRoomMemberCallable(const Model::DeleteRoomMemberRequest& request);

                /**
                 *删除自定义送检用户。**接口使用前提**：目前 DeleteScanUser 接口通过白名单开放，如需使用，需要 [提交工单申请](https://console.cloud.tencent.com/workorder/category?level1_id=438&level2_id=445&source=0&data_title=%E6%B8%B8%E6%88%8F%E5%A4%9A%E5%AA%92%E4%BD%93%E5%BC%95%E6%93%8EGME&step=1)。
                 * @param req DeleteScanUserRequest
                 * @return DeleteScanUserOutcome
                 */
                DeleteScanUserOutcome DeleteScanUser(const Model::DeleteScanUserRequest &request);
                void DeleteScanUserAsync(const Model::DeleteScanUserRequest& request, const DeleteScanUserAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteScanUserOutcomeCallable DeleteScanUserCallable(const Model::DeleteScanUserRequest& request);

                /**
                 *目前该功能底层能力已不具备，不对外提供，目前需要下线，走预下线流程。

查询年龄语音识别任务结果，请求频率10次/秒。该接口目前通过白名单开放试用，如有需求，请提交工单申请。
                 * @param req DescribeAgeDetectTaskRequest
                 * @return DescribeAgeDetectTaskOutcome
                 */
                DescribeAgeDetectTaskOutcome DescribeAgeDetectTask(const Model::DescribeAgeDetectTaskRequest &request);
                void DescribeAgeDetectTaskAsync(const Model::DescribeAgeDetectTaskRequest& request, const DescribeAgeDetectTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeAgeDetectTaskOutcomeCallable DescribeAgeDetectTaskCallable(const Model::DescribeAgeDetectTaskRequest& request);

                /**
                 *本接口(DescribeAppStatistics)用于获取某个GME应用的用量数据。包括实时语音，语音消息及转文本，语音分析等。最长查询周期为最近60天。
                 * @param req DescribeAppStatisticsRequest
                 * @return DescribeAppStatisticsOutcome
                 */
                DescribeAppStatisticsOutcome DescribeAppStatistics(const Model::DescribeAppStatisticsRequest &request);
                void DescribeAppStatisticsAsync(const Model::DescribeAppStatisticsRequest& request, const DescribeAppStatisticsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeAppStatisticsOutcomeCallable DescribeAppStatisticsCallable(const Model::DescribeAppStatisticsRequest& request);

                /**
                 *本接口(DescribeApplicationData)用于获取数据详情信息，最多可拉取最近90天的数据。
                 * @param req DescribeApplicationDataRequest
                 * @return DescribeApplicationDataOutcome
                 */
                DescribeApplicationDataOutcome DescribeApplicationData(const Model::DescribeApplicationDataRequest &request);
                void DescribeApplicationDataAsync(const Model::DescribeApplicationDataRequest& request, const DescribeApplicationDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeApplicationDataOutcomeCallable DescribeApplicationDataCallable(const Model::DescribeApplicationDataRequest& request);

                /**
                 *本接口(DescribeApplicationList)用于查询自己账号下的应用列表
                 * @param req DescribeApplicationListRequest
                 * @return DescribeApplicationListOutcome
                 */
                DescribeApplicationListOutcome DescribeApplicationList(const Model::DescribeApplicationListRequest &request);
                void DescribeApplicationListAsync(const Model::DescribeApplicationListRequest& request, const DescribeApplicationListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeApplicationListOutcomeCallable DescribeApplicationListCallable(const Model::DescribeApplicationListRequest& request);

                /**
                 *获取用户自定义送检信息。**接口使用前提**：目前 DescribeRealtimeScanConfig 接口通过白名单开放，如需使用，需要 [提交工单申请](https://console.cloud.tencent.com/workorder/category?level1_id=438&level2_id=445&source=0&data_title=%E6%B8%B8%E6%88%8F%E5%A4%9A%E5%AA%92%E4%BD%93%E5%BC%95%E6%93%8EGME&step=1)。
                 * @param req DescribeRealtimeScanConfigRequest
                 * @return DescribeRealtimeScanConfigOutcome
                 */
                DescribeRealtimeScanConfigOutcome DescribeRealtimeScanConfig(const Model::DescribeRealtimeScanConfigRequest &request);
                void DescribeRealtimeScanConfigAsync(const Model::DescribeRealtimeScanConfigRequest& request, const DescribeRealtimeScanConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeRealtimeScanConfigOutcomeCallable DescribeRealtimeScanConfigCallable(const Model::DescribeRealtimeScanConfigRequest& request);

                /**
                 *查询录制任务信息。
                 * @param req DescribeRecordInfoRequest
                 * @return DescribeRecordInfoOutcome
                 */
                DescribeRecordInfoOutcome DescribeRecordInfo(const Model::DescribeRecordInfoRequest &request);
                void DescribeRecordInfoAsync(const Model::DescribeRecordInfoRequest& request, const DescribeRecordInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeRecordInfoOutcomeCallable DescribeRecordInfoCallable(const Model::DescribeRecordInfoRequest& request);

                /**
                 *获取房间内用户信息
                 * @param req DescribeRoomInfoRequest
                 * @return DescribeRoomInfoOutcome
                 */
                DescribeRoomInfoOutcome DescribeRoomInfo(const Model::DescribeRoomInfoRequest &request);
                void DescribeRoomInfoAsync(const Model::DescribeRoomInfoRequest& request, const DescribeRoomInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeRoomInfoOutcomeCallable DescribeRoomInfoCallable(const Model::DescribeRoomInfoRequest& request);

                /**
                 *本接口(DescribeScanResultList)用于查询语音检测结果，查询任务列表最多支持100个。
<p style="color:red">如果在提交语音检测任务时未设置 Callback 字段，则需要通过本接口获取检测结果</p>
                 * @param req DescribeScanResultListRequest
                 * @return DescribeScanResultListOutcome
                 */
                DescribeScanResultListOutcome DescribeScanResultList(const Model::DescribeScanResultListRequest &request);
                void DescribeScanResultListAsync(const Model::DescribeScanResultListRequest& request, const DescribeScanResultListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeScanResultListOutcomeCallable DescribeScanResultListCallable(const Model::DescribeScanResultListRequest& request);

                /**
                 *查询房间录制的详细信息
                 * @param req DescribeTaskInfoRequest
                 * @return DescribeTaskInfoOutcome
                 */
                DescribeTaskInfoOutcome DescribeTaskInfo(const Model::DescribeTaskInfoRequest &request);
                void DescribeTaskInfoAsync(const Model::DescribeTaskInfoRequest& request, const DescribeTaskInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeTaskInfoOutcomeCallable DescribeTaskInfoCallable(const Model::DescribeTaskInfoRequest& request);

                /**
                 *拉取用户在房间得进出时间
                 * @param req DescribeUserInAndOutTimeRequest
                 * @return DescribeUserInAndOutTimeOutcome
                 */
                DescribeUserInAndOutTimeOutcome DescribeUserInAndOutTime(const Model::DescribeUserInAndOutTimeRequest &request);
                void DescribeUserInAndOutTimeAsync(const Model::DescribeUserInAndOutTimeRequest& request, const DescribeUserInAndOutTimeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeUserInAndOutTimeOutcomeCallable DescribeUserInAndOutTimeCallable(const Model::DescribeUserInAndOutTimeRequest& request);

                /**
                 *查询语音消息转文本热句模型列表
                 * @param req GetCustomizationListRequest
                 * @return GetCustomizationListOutcome
                 */
                GetCustomizationListOutcome GetCustomizationList(const Model::GetCustomizationListRequest &request);
                void GetCustomizationListAsync(const Model::GetCustomizationListRequest& request, const GetCustomizationListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                GetCustomizationListOutcomeCallable GetCustomizationListCallable(const Model::GetCustomizationListRequest& request);

                /**
                 *本接口(ModifyAppStatus)用于修改应用总开关状态。
                 * @param req ModifyAppStatusRequest
                 * @return ModifyAppStatusOutcome
                 */
                ModifyAppStatusOutcome ModifyAppStatus(const Model::ModifyAppStatusRequest &request);
                void ModifyAppStatusAsync(const Model::ModifyAppStatusRequest& request, const ModifyAppStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyAppStatusOutcomeCallable ModifyAppStatusCallable(const Model::ModifyAppStatusRequest& request);

                /**
                 *用户通过该接口可以更新语音消息转文本热句模型。
                 * @param req ModifyCustomizationRequest
                 * @return ModifyCustomizationOutcome
                 */
                ModifyCustomizationOutcome ModifyCustomization(const Model::ModifyCustomizationRequest &request);
                void ModifyCustomizationAsync(const Model::ModifyCustomizationRequest& request, const ModifyCustomizationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyCustomizationOutcomeCallable ModifyCustomizationCallable(const Model::ModifyCustomizationRequest& request);

                /**
                 *通过该接口，用户可以修改语音消息转文本热句模型状态，上下线热句模型
                 * @param req ModifyCustomizationStateRequest
                 * @return ModifyCustomizationStateOutcome
                 */
                ModifyCustomizationStateOutcome ModifyCustomizationState(const Model::ModifyCustomizationStateRequest &request);
                void ModifyCustomizationStateAsync(const Model::ModifyCustomizationStateRequest& request, const ModifyCustomizationStateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyCustomizationStateOutcomeCallable ModifyCustomizationStateCallable(const Model::ModifyCustomizationStateRequest& request);

                /**
                 *修改录制配置信息
                 * @param req ModifyRecordInfoRequest
                 * @return ModifyRecordInfoOutcome
                 */
                ModifyRecordInfoOutcome ModifyRecordInfo(const Model::ModifyRecordInfoRequest &request);
                void ModifyRecordInfoAsync(const Model::ModifyRecordInfoRequest& request, const ModifyRecordInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyRecordInfoOutcomeCallable ModifyRecordInfoCallable(const Model::ModifyRecordInfoRequest& request);

                /**
                 ***接口作用**：此接口用于修改房间用户的麦克风状态，例如房间内用户麦克风为打开状态，可调用此接口将该用户麦克风进行关闭，关闭后即使该用户使用客户端接口 EnableMic 打开麦克风，依然无法与房间内成员通话，属于被禁言状态。该状态持续到此用户退房后失效，或者调用该接口重新打开此用户麦克风状态。
**接口应用场景**：此接口多用于游戏业务中台或者风控后台，对一些发表不当言论的玩家进行禁言处理。
**接口使用前提**：目前 ModifyUserMicStatus 接口通过白名单开放，如需使用，需要 [提交工单申请](https://console.cloud.tencent.com/workorder/category?level1_id=438&level2_id=445&source=0&data_title=%E6%B8%B8%E6%88%8F%E5%A4%9A%E5%AA%92%E4%BD%93%E5%BC%95%E6%93%8EGME&step=1)。
                 * @param req ModifyUserMicStatusRequest
                 * @return ModifyUserMicStatusOutcome
                 */
                ModifyUserMicStatusOutcome ModifyUserMicStatus(const Model::ModifyUserMicStatusRequest &request);
                void ModifyUserMicStatusAsync(const Model::ModifyUserMicStatusRequest& request, const ModifyUserMicStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyUserMicStatusOutcomeCallable ModifyUserMicStatusCallable(const Model::ModifyUserMicStatusRequest& request);

                /**
                 *本接口(ScanVoice)用于提交语音检测任务，检测任务列表最多支持100个。使用前请您登录[控制台 - 服务配置](https://console.cloud.tencent.com/gamegme/conf)开启语音内容安全服务。
</br></br>

<h4><b>功能试用说明：</b></h4>
<li>打开前往<a href="https://console.cloud.tencent.com/gamegme/tryout">控制台 - 产品试用</a>免费试用语音内容安全服务。</li>
</br>

<h4><b>接口功能说明：</b></h4>
<li>支持对语音流或语音文件进行检测，判断其中是否包含违规内容。</li>
<li>支持设置回调地址 Callback 获取检测结果，同时支持通过接口(查询语音检测结果)主动轮询获取检测结果。</li>
<li>支持场景输入，包括：谩骂、色情等场景</li>
<li>支持批量提交检测任务。检测任务列表最多支持100个。</li>
</br>
<h4><b>音频文件限制说明：</b></h4>
<li>音频文件大小限制：100 M</li>
<li>音频文件时长限制：30分钟</li>
<li>音频文件格式支持的类型：.wav、.m4a、.amr、.mp3、.aac、.wma、.ogg</li>
</br>
<h4><b>语音流限制说明：</b></h4>
<li>语音流格式支持的类型：.m3u8、.flv</li>
<li>语音流支持的传输协议：RTMP、HTTP、HTTPS</li>
<li>语音流时长限制：4小时</li>
<li>支持音视频流分离并对音频流进行分析</li>
</br>
<h4 id="Label_Value"><b>Scenes 与 Label 参数说明：</b></h4>
<p>提交语音检测任务时，需要指定 Scenes 场景参数，<font color="red">目前要求您设置 Scenes 参数值为：["default"]</font>；而在检测结果中，则包含请求时指定的场景，以及对应类型的检测结果。</p>
<table>
<thread>
<tr>
<th>场景</th>
<th>描述</th>
<th>Label</th>
</tr>
</thread>
<tbody>
<tr>
<td>语音检测</td>
<td>语音检测的检测类型</td>
<td>
<p>normal:正常文本</p>
<p>porn:色情</p>
<p>abuse:谩骂</p>
<p>ad :广告</p>
<p>illegal :违法</p>
<p>moan :呻吟</p>
<p>customized:自定义词库</p>
</td>
</tr>
</tbody>
</table>
</br>
<h4 id="Callback_Declare"><b>回调相关说明：</b></h4>
<li>如果在请求参数中指定了回调地址参数 Callback，即一个 HTTP(S) 协议接口的 URL，则需要支持 POST 方法，传输数据编码采用 UTF-8。</li>
<li>在推送回调数据后，接收到的 HTTP 状态码为 200 时，表示推送成功。</li>
<li>HTTP 请求参数（query）说明：</li>
<table>
<thread>
<tr>
<th>名称</th>
<th>类型</th>
<th>是否必需</th>
<th>描述</th>
</tr>
</thread>
<tbody>
<tr>
<td>Signatue</td>
<td>string</td>
<td>是</td>
<td>签名，具体见<a href="#Callback_Signatue">签名生成说明</a></td>
</tr>
</tbody>
</table>
<ul  id="Callback_Signatue">
	<li>签名生成说明：</li>
	<ul>
		<li>使用 HMAC-SH1 算法, 最终结果做 BASE64 编码;</li>
		<li>签名原文串为 POST+body 的整个json内容(长度以 Content-Length 为准);</li>
		<li>签名key为应用的 SecretKey，可以通过控制台查看。</li>
	</ul>
</ul>

<li>回调示例如下<font color="red">（详细字段说明见结构：
<a href="https://cloud.tencent.com/document/api/607/35375#DescribeScanResult" target="_blank">DescribeScanResult</a>）</font>：</li>
<pre><code>{
	"Code": 0,
	"DataId": "1400000000_test_data_id",
	"ScanFinishTime": 1566720906,
	"HitFlag": true,
	"Live": false,
	"Msg": "",
	"ScanPiece": [{
		"DumpUrl": "",
		"HitFlag": true,
		"MainType": "abuse",
		"RoomId": "123",
		"OpenId": "111",
		"Info":"",
		"Offset": 0,
		"Duration": 3400,
		"PieceStartTime":1574684231,
		"ScanDetail": [{
			"EndTime": 1110,
			"KeyWord": "违规字",
			"Label": "abuse",
			"Rate": "90.00",
			"StartTime": 1110
		}, {
			"EndTime": 1380,
			"KeyWord": "违规字",
			"Label": "abuse",
			"Rate": "90.00",
			"StartTime": 930
		}, {
			"EndTime": 1560,
			"KeyWord": "违规字",
			"Label": "abuse",
			"Rate": "90.00",
			"StartTime": 930
		}, {
			"EndTime": 2820,
			"KeyWord": "违规字",
			"Label": "abuse",
			"Rate": "90.00",
			"StartTime": 2490
		}]
	}],
	"ScanStartTime": 1566720905,
	"Scenes": [
		"default"
	],
	"Status": "Success",
	"TaskId": "6330xxxx-9xx7-11ed-98e3-52xxxxe4ac3b",
	"Url": "https://xxx/xxx.m4a"
}
</code></pre>
                 * @param req ScanVoiceRequest
                 * @return ScanVoiceOutcome
                 */
                ScanVoiceOutcome ScanVoice(const Model::ScanVoiceRequest &request);
                void ScanVoiceAsync(const Model::ScanVoiceRequest& request, const ScanVoiceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ScanVoiceOutcomeCallable ScanVoiceCallable(const Model::ScanVoiceRequest& request);

                /**
                 *开启录制
                 * @param req StartRecordRequest
                 * @return StartRecordOutcome
                 */
                StartRecordOutcome StartRecord(const Model::StartRecordRequest &request);
                void StartRecordAsync(const Model::StartRecordRequest& request, const StartRecordAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                StartRecordOutcomeCallable StartRecordCallable(const Model::StartRecordRequest& request);

                /**
                 *停止录制

                 * @param req StopRecordRequest
                 * @return StopRecordOutcome
                 */
                StopRecordOutcome StopRecord(const Model::StopRecordRequest &request);
                void StopRecordAsync(const Model::StopRecordRequest& request, const StopRecordAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                StopRecordOutcomeCallable StopRecordCallable(const Model::StopRecordRequest& request);

                /**
                 *更新自定义送检房间号。**接口使用前提**：目前 UpdateScanRooms 接口通过白名单开放，如需使用，需要 [提交工单申请](https://console.cloud.tencent.com/workorder/category?level1_id=438&level2_id=445&source=0&data_title=%E6%B8%B8%E6%88%8F%E5%A4%9A%E5%AA%92%E4%BD%93%E5%BC%95%E6%93%8EGME&step=1)。
                 * @param req UpdateScanRoomsRequest
                 * @return UpdateScanRoomsOutcome
                 */
                UpdateScanRoomsOutcome UpdateScanRooms(const Model::UpdateScanRoomsRequest &request);
                void UpdateScanRoomsAsync(const Model::UpdateScanRoomsRequest& request, const UpdateScanRoomsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                UpdateScanRoomsOutcomeCallable UpdateScanRoomsCallable(const Model::UpdateScanRoomsRequest& request);

                /**
                 *更新自定义送检用户号。
**接口使用前提**：目前 UpdateScanUsers 接口通过白名单开放，如需使用，需要 [提交工单申请](https://console.cloud.tencent.com/workorder/category?level1_id=438&level2_id=445&source=0&data_title=%E6%B8%B8%E6%88%8F%E5%A4%9A%E5%AA%92%E4%BD%93%E5%BC%95%E6%93%8EGME&step=1)。
                 * @param req UpdateScanUsersRequest
                 * @return UpdateScanUsersOutcome
                 */
                UpdateScanUsersOutcome UpdateScanUsers(const Model::UpdateScanUsersRequest &request);
                void UpdateScanUsersAsync(const Model::UpdateScanUsersRequest& request, const UpdateScanUsersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                UpdateScanUsersOutcomeCallable UpdateScanUsersCallable(const Model::UpdateScanUsersRequest& request);

            };
        }
    }
}

#endif // !TENCENTCLOUD_GME_V20180711_GMECLIENT_H_
