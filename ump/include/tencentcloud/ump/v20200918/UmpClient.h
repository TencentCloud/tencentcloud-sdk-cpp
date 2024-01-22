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

#ifndef TENCENTCLOUD_UMP_V20200918_UMPCLIENT_H_
#define TENCENTCLOUD_UMP_V20200918_UMPCLIENT_H_

#include <functional>
#include <future>
#include <tencentcloud/core/AbstractClient.h>
#include <tencentcloud/core/Credential.h>
#include <tencentcloud/core/profile/ClientProfile.h>
#include <tencentcloud/core/AsyncCallerContext.h>
#include <tencentcloud/ump/v20200918/model/CreateCameraAlertsRequest.h>
#include <tencentcloud/ump/v20200918/model/CreateCameraAlertsResponse.h>
#include <tencentcloud/ump/v20200918/model/CreateCameraStateRequest.h>
#include <tencentcloud/ump/v20200918/model/CreateCameraStateResponse.h>
#include <tencentcloud/ump/v20200918/model/CreateCaptureRequest.h>
#include <tencentcloud/ump/v20200918/model/CreateCaptureResponse.h>
#include <tencentcloud/ump/v20200918/model/CreateMultiBizAlertRequest.h>
#include <tencentcloud/ump/v20200918/model/CreateMultiBizAlertResponse.h>
#include <tencentcloud/ump/v20200918/model/CreateProgramStateRequest.h>
#include <tencentcloud/ump/v20200918/model/CreateProgramStateResponse.h>
#include <tencentcloud/ump/v20200918/model/CreateServerStateRequest.h>
#include <tencentcloud/ump/v20200918/model/CreateServerStateResponse.h>
#include <tencentcloud/ump/v20200918/model/DeleteMultiBizAlertRequest.h>
#include <tencentcloud/ump/v20200918/model/DeleteMultiBizAlertResponse.h>
#include <tencentcloud/ump/v20200918/model/DeleteTaskRequest.h>
#include <tencentcloud/ump/v20200918/model/DeleteTaskResponse.h>
#include <tencentcloud/ump/v20200918/model/DescribeCamerasRequest.h>
#include <tencentcloud/ump/v20200918/model/DescribeCamerasResponse.h>
#include <tencentcloud/ump/v20200918/model/DescribeConfigRequest.h>
#include <tencentcloud/ump/v20200918/model/DescribeConfigResponse.h>
#include <tencentcloud/ump/v20200918/model/DescribeImageRequest.h>
#include <tencentcloud/ump/v20200918/model/DescribeImageResponse.h>
#include <tencentcloud/ump/v20200918/model/DescribeMultiBizBaseImageRequest.h>
#include <tencentcloud/ump/v20200918/model/DescribeMultiBizBaseImageResponse.h>
#include <tencentcloud/ump/v20200918/model/DescribeTasksRequest.h>
#include <tencentcloud/ump/v20200918/model/DescribeTasksResponse.h>
#include <tencentcloud/ump/v20200918/model/DescribeZonesRequest.h>
#include <tencentcloud/ump/v20200918/model/DescribeZonesResponse.h>
#include <tencentcloud/ump/v20200918/model/ModifyMultiBizConfigRequest.h>
#include <tencentcloud/ump/v20200918/model/ModifyMultiBizConfigResponse.h>
#include <tencentcloud/ump/v20200918/model/ReportServiceRegisterRequest.h>
#include <tencentcloud/ump/v20200918/model/ReportServiceRegisterResponse.h>
#include <tencentcloud/ump/v20200918/model/SearchImageRequest.h>
#include <tencentcloud/ump/v20200918/model/SearchImageResponse.h>


namespace TencentCloud
{
    namespace Ump
    {
        namespace V20200918
        {
            class UmpClient : public AbstractClient
            {
            public:
                UmpClient(const Credential &credential, const std::string &region);
                UmpClient(const Credential &credential, const std::string &region, const ClientProfile &profile);

                typedef Outcome<Core::Error, Model::CreateCameraAlertsResponse> CreateCameraAlertsOutcome;
                typedef std::future<CreateCameraAlertsOutcome> CreateCameraAlertsOutcomeCallable;
                typedef std::function<void(const UmpClient*, const Model::CreateCameraAlertsRequest&, CreateCameraAlertsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateCameraAlertsAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateCameraStateResponse> CreateCameraStateOutcome;
                typedef std::future<CreateCameraStateOutcome> CreateCameraStateOutcomeCallable;
                typedef std::function<void(const UmpClient*, const Model::CreateCameraStateRequest&, CreateCameraStateOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateCameraStateAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateCaptureResponse> CreateCaptureOutcome;
                typedef std::future<CreateCaptureOutcome> CreateCaptureOutcomeCallable;
                typedef std::function<void(const UmpClient*, const Model::CreateCaptureRequest&, CreateCaptureOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateCaptureAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateMultiBizAlertResponse> CreateMultiBizAlertOutcome;
                typedef std::future<CreateMultiBizAlertOutcome> CreateMultiBizAlertOutcomeCallable;
                typedef std::function<void(const UmpClient*, const Model::CreateMultiBizAlertRequest&, CreateMultiBizAlertOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateMultiBizAlertAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateProgramStateResponse> CreateProgramStateOutcome;
                typedef std::future<CreateProgramStateOutcome> CreateProgramStateOutcomeCallable;
                typedef std::function<void(const UmpClient*, const Model::CreateProgramStateRequest&, CreateProgramStateOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateProgramStateAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateServerStateResponse> CreateServerStateOutcome;
                typedef std::future<CreateServerStateOutcome> CreateServerStateOutcomeCallable;
                typedef std::function<void(const UmpClient*, const Model::CreateServerStateRequest&, CreateServerStateOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateServerStateAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteMultiBizAlertResponse> DeleteMultiBizAlertOutcome;
                typedef std::future<DeleteMultiBizAlertOutcome> DeleteMultiBizAlertOutcomeCallable;
                typedef std::function<void(const UmpClient*, const Model::DeleteMultiBizAlertRequest&, DeleteMultiBizAlertOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteMultiBizAlertAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteTaskResponse> DeleteTaskOutcome;
                typedef std::future<DeleteTaskOutcome> DeleteTaskOutcomeCallable;
                typedef std::function<void(const UmpClient*, const Model::DeleteTaskRequest&, DeleteTaskOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteTaskAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeCamerasResponse> DescribeCamerasOutcome;
                typedef std::future<DescribeCamerasOutcome> DescribeCamerasOutcomeCallable;
                typedef std::function<void(const UmpClient*, const Model::DescribeCamerasRequest&, DescribeCamerasOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeCamerasAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeConfigResponse> DescribeConfigOutcome;
                typedef std::future<DescribeConfigOutcome> DescribeConfigOutcomeCallable;
                typedef std::function<void(const UmpClient*, const Model::DescribeConfigRequest&, DescribeConfigOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeConfigAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeImageResponse> DescribeImageOutcome;
                typedef std::future<DescribeImageOutcome> DescribeImageOutcomeCallable;
                typedef std::function<void(const UmpClient*, const Model::DescribeImageRequest&, DescribeImageOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeImageAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeMultiBizBaseImageResponse> DescribeMultiBizBaseImageOutcome;
                typedef std::future<DescribeMultiBizBaseImageOutcome> DescribeMultiBizBaseImageOutcomeCallable;
                typedef std::function<void(const UmpClient*, const Model::DescribeMultiBizBaseImageRequest&, DescribeMultiBizBaseImageOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeMultiBizBaseImageAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeTasksResponse> DescribeTasksOutcome;
                typedef std::future<DescribeTasksOutcome> DescribeTasksOutcomeCallable;
                typedef std::function<void(const UmpClient*, const Model::DescribeTasksRequest&, DescribeTasksOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeTasksAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeZonesResponse> DescribeZonesOutcome;
                typedef std::future<DescribeZonesOutcome> DescribeZonesOutcomeCallable;
                typedef std::function<void(const UmpClient*, const Model::DescribeZonesRequest&, DescribeZonesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeZonesAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyMultiBizConfigResponse> ModifyMultiBizConfigOutcome;
                typedef std::future<ModifyMultiBizConfigOutcome> ModifyMultiBizConfigOutcomeCallable;
                typedef std::function<void(const UmpClient*, const Model::ModifyMultiBizConfigRequest&, ModifyMultiBizConfigOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyMultiBizConfigAsyncHandler;
                typedef Outcome<Core::Error, Model::ReportServiceRegisterResponse> ReportServiceRegisterOutcome;
                typedef std::future<ReportServiceRegisterOutcome> ReportServiceRegisterOutcomeCallable;
                typedef std::function<void(const UmpClient*, const Model::ReportServiceRegisterRequest&, ReportServiceRegisterOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ReportServiceRegisterAsyncHandler;
                typedef Outcome<Core::Error, Model::SearchImageResponse> SearchImageOutcome;
                typedef std::future<SearchImageOutcome> SearchImageOutcomeCallable;
                typedef std::function<void(const UmpClient*, const Model::SearchImageRequest&, SearchImageOutcome, const std::shared_ptr<const AsyncCallerContext>&)> SearchImageAsyncHandler;



                /**
                 *优mall产品启动下线流程

上报相机移动、遮挡等告警信息


                 * @param req CreateCameraAlertsRequest
                 * @return CreateCameraAlertsOutcome
                 */
                CreateCameraAlertsOutcome CreateCameraAlerts(const Model::CreateCameraAlertsRequest &request);
                void CreateCameraAlertsAsync(const Model::CreateCameraAlertsRequest& request, const CreateCameraAlertsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateCameraAlertsOutcomeCallable CreateCameraAlertsCallable(const Model::CreateCameraAlertsRequest& request);

                /**
                 *优mall产品启动下线流程

上报当前场内所有相机的当前状态
                 * @param req CreateCameraStateRequest
                 * @return CreateCameraStateOutcome
                 */
                CreateCameraStateOutcome CreateCameraState(const Model::CreateCameraStateRequest &request);
                void CreateCameraStateAsync(const Model::CreateCameraStateRequest& request, const CreateCameraStateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateCameraStateOutcomeCallable CreateCameraStateCallable(const Model::CreateCameraStateRequest& request);

                /**
                 *优mall产品下线

场内抓拍上报接口
                 * @param req CreateCaptureRequest
                 * @return CreateCaptureOutcome
                 */
                CreateCaptureOutcome CreateCapture(const Model::CreateCaptureRequest &request);
                void CreateCaptureAsync(const Model::CreateCaptureRequest& request, const CreateCaptureAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateCaptureOutcomeCallable CreateCaptureCallable(const Model::CreateCaptureRequest& request);

                /**
                 *优mall产品启动下线流程

集团广场的多经点位告警
                 * @param req CreateMultiBizAlertRequest
                 * @return CreateMultiBizAlertOutcome
                 */
                CreateMultiBizAlertOutcome CreateMultiBizAlert(const Model::CreateMultiBizAlertRequest &request);
                void CreateMultiBizAlertAsync(const Model::CreateMultiBizAlertRequest& request, const CreateMultiBizAlertAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateMultiBizAlertOutcomeCallable CreateMultiBizAlertCallable(const Model::CreateMultiBizAlertRequest& request);

                /**
                 *优mall产品启动下线流程

上报所有进程监控信息
                 * @param req CreateProgramStateRequest
                 * @return CreateProgramStateOutcome
                 */
                CreateProgramStateOutcome CreateProgramState(const Model::CreateProgramStateRequest &request);
                void CreateProgramStateAsync(const Model::CreateProgramStateRequest& request, const CreateProgramStateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateProgramStateOutcomeCallable CreateProgramStateCallable(const Model::CreateProgramStateRequest& request);

                /**
                 *优mall产品启动下线流程

上报所有服务器硬件监控信息
                 * @param req CreateServerStateRequest
                 * @return CreateServerStateOutcome
                 */
                CreateServerStateOutcome CreateServerState(const Model::CreateServerStateRequest &request);
                void CreateServerStateAsync(const Model::CreateServerStateRequest& request, const CreateServerStateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateServerStateOutcomeCallable CreateServerStateCallable(const Model::CreateServerStateRequest& request);

                /**
                 *优mall产品启动下线流程

集团广场的多经点位消警
                 * @param req DeleteMultiBizAlertRequest
                 * @return DeleteMultiBizAlertOutcome
                 */
                DeleteMultiBizAlertOutcome DeleteMultiBizAlert(const Model::DeleteMultiBizAlertRequest &request);
                void DeleteMultiBizAlertAsync(const Model::DeleteMultiBizAlertRequest& request, const DeleteMultiBizAlertAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteMultiBizAlertOutcomeCallable DeleteMultiBizAlertCallable(const Model::DeleteMultiBizAlertRequest& request);

                /**
                 *优mall产品启动下线流程

删除集团广场对应的任务
                 * @param req DeleteTaskRequest
                 * @return DeleteTaskOutcome
                 */
                DeleteTaskOutcome DeleteTask(const Model::DeleteTaskRequest &request);
                void DeleteTaskAsync(const Model::DeleteTaskRequest& request, const DeleteTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteTaskOutcomeCallable DeleteTaskCallable(const Model::DeleteTaskRequest& request);

                /**
                 *优mall产品启动下线流程

获取集团广场对应的摄像头列表
                 * @param req DescribeCamerasRequest
                 * @return DescribeCamerasOutcome
                 */
                DescribeCamerasOutcome DescribeCameras(const Model::DescribeCamerasRequest &request);
                void DescribeCamerasAsync(const Model::DescribeCamerasRequest& request, const DescribeCamerasAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeCamerasOutcomeCallable DescribeCamerasCallable(const Model::DescribeCamerasRequest& request);

                /**
                 *优mall产品启动下线流程

获取摄像头配置信息
mac不为空返回指定相机配置
mac为空返回对应GroupCode和MallId全量配置
                 * @param req DescribeConfigRequest
                 * @return DescribeConfigOutcome
                 */
                DescribeConfigOutcome DescribeConfig(const Model::DescribeConfigRequest &request);
                void DescribeConfigAsync(const Model::DescribeConfigRequest& request, const DescribeConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeConfigOutcomeCallable DescribeConfigCallable(const Model::DescribeConfigRequest& request);

                /**
                 *优mall产品启动下线流程

实时获取底图接口
                 * @param req DescribeImageRequest
                 * @return DescribeImageOutcome
                 */
                DescribeImageOutcome DescribeImage(const Model::DescribeImageRequest &request);
                void DescribeImageAsync(const Model::DescribeImageRequest& request, const DescribeImageAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeImageOutcomeCallable DescribeImageCallable(const Model::DescribeImageRequest& request);

                /**
                 *优mall产品启动下线流程

获取多经点位底图
                 * @param req DescribeMultiBizBaseImageRequest
                 * @return DescribeMultiBizBaseImageOutcome
                 */
                DescribeMultiBizBaseImageOutcome DescribeMultiBizBaseImage(const Model::DescribeMultiBizBaseImageRequest &request);
                void DescribeMultiBizBaseImageAsync(const Model::DescribeMultiBizBaseImageRequest& request, const DescribeMultiBizBaseImageAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeMultiBizBaseImageOutcomeCallable DescribeMultiBizBaseImageCallable(const Model::DescribeMultiBizBaseImageRequest& request);

                /**
                 *优mall产品启动下线流程

查询集团广场对应的任务列表
                 * @param req DescribeTasksRequest
                 * @return DescribeTasksOutcome
                 */
                DescribeTasksOutcome DescribeTasks(const Model::DescribeTasksRequest &request);
                void DescribeTasksAsync(const Model::DescribeTasksRequest& request, const DescribeTasksAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeTasksOutcomeCallable DescribeTasksCallable(const Model::DescribeTasksRequest& request);

                /**
                 *优mall产品启动下线流程

获取集团广场的点位列表
                 * @param req DescribeZonesRequest
                 * @return DescribeZonesOutcome
                 */
                DescribeZonesOutcome DescribeZones(const Model::DescribeZonesRequest &request);
                void DescribeZonesAsync(const Model::DescribeZonesRequest& request, const DescribeZonesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeZonesOutcomeCallable DescribeZonesCallable(const Model::DescribeZonesRequest& request);

                /**
                 *优mall产品启动下线流程

集团广场的多经点位配置更新
                 * @param req ModifyMultiBizConfigRequest
                 * @return ModifyMultiBizConfigOutcome
                 */
                ModifyMultiBizConfigOutcome ModifyMultiBizConfig(const Model::ModifyMultiBizConfigRequest &request);
                void ModifyMultiBizConfigAsync(const Model::ModifyMultiBizConfigRequest& request, const ModifyMultiBizConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyMultiBizConfigOutcomeCallable ModifyMultiBizConfigCallable(const Model::ModifyMultiBizConfigRequest& request);

                /**
                 *优mall产品启动下线流程

上报服务注册自身的服务地址作为回调地址, 用于信息回传。
                 * @param req ReportServiceRegisterRequest
                 * @return ReportServiceRegisterOutcome
                 */
                ReportServiceRegisterOutcome ReportServiceRegister(const Model::ReportServiceRegisterRequest &request);
                void ReportServiceRegisterAsync(const Model::ReportServiceRegisterRequest& request, const ReportServiceRegisterAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ReportServiceRegisterOutcomeCallable ReportServiceRegisterCallable(const Model::ReportServiceRegisterRequest& request);

                /**
                 *优mall产品启动下线流程

以图搜图
                 * @param req SearchImageRequest
                 * @return SearchImageOutcome
                 */
                SearchImageOutcome SearchImage(const Model::SearchImageRequest &request);
                void SearchImageAsync(const Model::SearchImageRequest& request, const SearchImageAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                SearchImageOutcomeCallable SearchImageCallable(const Model::SearchImageRequest& request);

            };
        }
    }
}

#endif // !TENCENTCLOUD_UMP_V20200918_UMPCLIENT_H_
