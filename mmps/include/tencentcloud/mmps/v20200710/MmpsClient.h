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

#ifndef TENCENTCLOUD_MMPS_V20200710_MMPSCLIENT_H_
#define TENCENTCLOUD_MMPS_V20200710_MMPSCLIENT_H_

#include <functional>
#include <future>
#include <tencentcloud/core/AbstractClient.h>
#include <tencentcloud/core/Credential.h>
#include <tencentcloud/core/profile/ClientProfile.h>
#include <tencentcloud/core/AsyncCallerContext.h>
#include <tencentcloud/mmps/v20200710/model/CreateAppScanTaskRequest.h>
#include <tencentcloud/mmps/v20200710/model/CreateAppScanTaskResponse.h>
#include <tencentcloud/mmps/v20200710/model/CreateAppScanTaskRepeatRequest.h>
#include <tencentcloud/mmps/v20200710/model/CreateAppScanTaskRepeatResponse.h>
#include <tencentcloud/mmps/v20200710/model/CreateFlySecMiniAppProfessionalScanTaskRequest.h>
#include <tencentcloud/mmps/v20200710/model/CreateFlySecMiniAppProfessionalScanTaskResponse.h>
#include <tencentcloud/mmps/v20200710/model/CreateFlySecMiniAppScanTaskRequest.h>
#include <tencentcloud/mmps/v20200710/model/CreateFlySecMiniAppScanTaskResponse.h>
#include <tencentcloud/mmps/v20200710/model/CreateFlySecMiniAppScanTaskRepeatRequest.h>
#include <tencentcloud/mmps/v20200710/model/CreateFlySecMiniAppScanTaskRepeatResponse.h>
#include <tencentcloud/mmps/v20200710/model/DescribeBasicDiagnosisResourceUsageInfoRequest.h>
#include <tencentcloud/mmps/v20200710/model/DescribeBasicDiagnosisResourceUsageInfoResponse.h>
#include <tencentcloud/mmps/v20200710/model/DescribeFlySecMiniAppReportUrlRequest.h>
#include <tencentcloud/mmps/v20200710/model/DescribeFlySecMiniAppReportUrlResponse.h>
#include <tencentcloud/mmps/v20200710/model/DescribeFlySecMiniAppScanReportListRequest.h>
#include <tencentcloud/mmps/v20200710/model/DescribeFlySecMiniAppScanReportListResponse.h>
#include <tencentcloud/mmps/v20200710/model/DescribeFlySecMiniAppScanTaskListRequest.h>
#include <tencentcloud/mmps/v20200710/model/DescribeFlySecMiniAppScanTaskListResponse.h>
#include <tencentcloud/mmps/v20200710/model/DescribeFlySecMiniAppScanTaskParamRequest.h>
#include <tencentcloud/mmps/v20200710/model/DescribeFlySecMiniAppScanTaskParamResponse.h>
#include <tencentcloud/mmps/v20200710/model/DescribeFlySecMiniAppScanTaskStatusRequest.h>
#include <tencentcloud/mmps/v20200710/model/DescribeFlySecMiniAppScanTaskStatusResponse.h>
#include <tencentcloud/mmps/v20200710/model/DescribeResourceUsageInfoRequest.h>
#include <tencentcloud/mmps/v20200710/model/DescribeResourceUsageInfoResponse.h>
#include <tencentcloud/mmps/v20200710/model/DescribeScanTaskListRequest.h>
#include <tencentcloud/mmps/v20200710/model/DescribeScanTaskListResponse.h>
#include <tencentcloud/mmps/v20200710/model/DescribeScanTaskReportUrlRequest.h>
#include <tencentcloud/mmps/v20200710/model/DescribeScanTaskReportUrlResponse.h>
#include <tencentcloud/mmps/v20200710/model/DescribeScanTaskStatusRequest.h>
#include <tencentcloud/mmps/v20200710/model/DescribeScanTaskStatusResponse.h>


namespace TencentCloud
{
    namespace Mmps
    {
        namespace V20200710
        {
            class MmpsClient : public AbstractClient
            {
            public:
                MmpsClient(const Credential &credential, const std::string &region);
                MmpsClient(const Credential &credential, const std::string &region, const ClientProfile &profile);

                typedef Outcome<Core::Error, Model::CreateAppScanTaskResponse> CreateAppScanTaskOutcome;
                typedef std::future<CreateAppScanTaskOutcome> CreateAppScanTaskOutcomeCallable;
                typedef std::function<void(const MmpsClient*, const Model::CreateAppScanTaskRequest&, CreateAppScanTaskOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateAppScanTaskAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateAppScanTaskRepeatResponse> CreateAppScanTaskRepeatOutcome;
                typedef std::future<CreateAppScanTaskRepeatOutcome> CreateAppScanTaskRepeatOutcomeCallable;
                typedef std::function<void(const MmpsClient*, const Model::CreateAppScanTaskRepeatRequest&, CreateAppScanTaskRepeatOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateAppScanTaskRepeatAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateFlySecMiniAppProfessionalScanTaskResponse> CreateFlySecMiniAppProfessionalScanTaskOutcome;
                typedef std::future<CreateFlySecMiniAppProfessionalScanTaskOutcome> CreateFlySecMiniAppProfessionalScanTaskOutcomeCallable;
                typedef std::function<void(const MmpsClient*, const Model::CreateFlySecMiniAppProfessionalScanTaskRequest&, CreateFlySecMiniAppProfessionalScanTaskOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateFlySecMiniAppProfessionalScanTaskAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateFlySecMiniAppScanTaskResponse> CreateFlySecMiniAppScanTaskOutcome;
                typedef std::future<CreateFlySecMiniAppScanTaskOutcome> CreateFlySecMiniAppScanTaskOutcomeCallable;
                typedef std::function<void(const MmpsClient*, const Model::CreateFlySecMiniAppScanTaskRequest&, CreateFlySecMiniAppScanTaskOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateFlySecMiniAppScanTaskAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateFlySecMiniAppScanTaskRepeatResponse> CreateFlySecMiniAppScanTaskRepeatOutcome;
                typedef std::future<CreateFlySecMiniAppScanTaskRepeatOutcome> CreateFlySecMiniAppScanTaskRepeatOutcomeCallable;
                typedef std::function<void(const MmpsClient*, const Model::CreateFlySecMiniAppScanTaskRepeatRequest&, CreateFlySecMiniAppScanTaskRepeatOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateFlySecMiniAppScanTaskRepeatAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeBasicDiagnosisResourceUsageInfoResponse> DescribeBasicDiagnosisResourceUsageInfoOutcome;
                typedef std::future<DescribeBasicDiagnosisResourceUsageInfoOutcome> DescribeBasicDiagnosisResourceUsageInfoOutcomeCallable;
                typedef std::function<void(const MmpsClient*, const Model::DescribeBasicDiagnosisResourceUsageInfoRequest&, DescribeBasicDiagnosisResourceUsageInfoOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeBasicDiagnosisResourceUsageInfoAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeFlySecMiniAppReportUrlResponse> DescribeFlySecMiniAppReportUrlOutcome;
                typedef std::future<DescribeFlySecMiniAppReportUrlOutcome> DescribeFlySecMiniAppReportUrlOutcomeCallable;
                typedef std::function<void(const MmpsClient*, const Model::DescribeFlySecMiniAppReportUrlRequest&, DescribeFlySecMiniAppReportUrlOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeFlySecMiniAppReportUrlAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeFlySecMiniAppScanReportListResponse> DescribeFlySecMiniAppScanReportListOutcome;
                typedef std::future<DescribeFlySecMiniAppScanReportListOutcome> DescribeFlySecMiniAppScanReportListOutcomeCallable;
                typedef std::function<void(const MmpsClient*, const Model::DescribeFlySecMiniAppScanReportListRequest&, DescribeFlySecMiniAppScanReportListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeFlySecMiniAppScanReportListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeFlySecMiniAppScanTaskListResponse> DescribeFlySecMiniAppScanTaskListOutcome;
                typedef std::future<DescribeFlySecMiniAppScanTaskListOutcome> DescribeFlySecMiniAppScanTaskListOutcomeCallable;
                typedef std::function<void(const MmpsClient*, const Model::DescribeFlySecMiniAppScanTaskListRequest&, DescribeFlySecMiniAppScanTaskListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeFlySecMiniAppScanTaskListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeFlySecMiniAppScanTaskParamResponse> DescribeFlySecMiniAppScanTaskParamOutcome;
                typedef std::future<DescribeFlySecMiniAppScanTaskParamOutcome> DescribeFlySecMiniAppScanTaskParamOutcomeCallable;
                typedef std::function<void(const MmpsClient*, const Model::DescribeFlySecMiniAppScanTaskParamRequest&, DescribeFlySecMiniAppScanTaskParamOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeFlySecMiniAppScanTaskParamAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeFlySecMiniAppScanTaskStatusResponse> DescribeFlySecMiniAppScanTaskStatusOutcome;
                typedef std::future<DescribeFlySecMiniAppScanTaskStatusOutcome> DescribeFlySecMiniAppScanTaskStatusOutcomeCallable;
                typedef std::function<void(const MmpsClient*, const Model::DescribeFlySecMiniAppScanTaskStatusRequest&, DescribeFlySecMiniAppScanTaskStatusOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeFlySecMiniAppScanTaskStatusAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeResourceUsageInfoResponse> DescribeResourceUsageInfoOutcome;
                typedef std::future<DescribeResourceUsageInfoOutcome> DescribeResourceUsageInfoOutcomeCallable;
                typedef std::function<void(const MmpsClient*, const Model::DescribeResourceUsageInfoRequest&, DescribeResourceUsageInfoOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeResourceUsageInfoAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeScanTaskListResponse> DescribeScanTaskListOutcome;
                typedef std::future<DescribeScanTaskListOutcome> DescribeScanTaskListOutcomeCallable;
                typedef std::function<void(const MmpsClient*, const Model::DescribeScanTaskListRequest&, DescribeScanTaskListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeScanTaskListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeScanTaskReportUrlResponse> DescribeScanTaskReportUrlOutcome;
                typedef std::future<DescribeScanTaskReportUrlOutcome> DescribeScanTaskReportUrlOutcomeCallable;
                typedef std::function<void(const MmpsClient*, const Model::DescribeScanTaskReportUrlRequest&, DescribeScanTaskReportUrlOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeScanTaskReportUrlAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeScanTaskStatusResponse> DescribeScanTaskStatusOutcome;
                typedef std::future<DescribeScanTaskStatusOutcome> DescribeScanTaskStatusOutcomeCallable;
                typedef std::function<void(const MmpsClient*, const Model::DescribeScanTaskStatusRequest&, DescribeScanTaskStatusOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeScanTaskStatusAsyncHandler;



                /**
                 *创建小程序隐私合规诊断任务
                 * @param req CreateAppScanTaskRequest
                 * @return CreateAppScanTaskOutcome
                 */
                CreateAppScanTaskOutcome CreateAppScanTask(const Model::CreateAppScanTaskRequest &request);
                void CreateAppScanTaskAsync(const Model::CreateAppScanTaskRequest& request, const CreateAppScanTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateAppScanTaskOutcomeCallable CreateAppScanTaskCallable(const Model::CreateAppScanTaskRequest& request);

                /**
                 *小程序隐私合规诊断重试任务
                 * @param req CreateAppScanTaskRepeatRequest
                 * @return CreateAppScanTaskRepeatOutcome
                 */
                CreateAppScanTaskRepeatOutcome CreateAppScanTaskRepeat(const Model::CreateAppScanTaskRepeatRequest &request);
                void CreateAppScanTaskRepeatAsync(const Model::CreateAppScanTaskRepeatRequest& request, const CreateAppScanTaskRepeatAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateAppScanTaskRepeatOutcomeCallable CreateAppScanTaskRepeatCallable(const Model::CreateAppScanTaskRepeatRequest& request);

                /**
                 *创建小程序安全深度诊断任务
                 * @param req CreateFlySecMiniAppProfessionalScanTaskRequest
                 * @return CreateFlySecMiniAppProfessionalScanTaskOutcome
                 */
                CreateFlySecMiniAppProfessionalScanTaskOutcome CreateFlySecMiniAppProfessionalScanTask(const Model::CreateFlySecMiniAppProfessionalScanTaskRequest &request);
                void CreateFlySecMiniAppProfessionalScanTaskAsync(const Model::CreateFlySecMiniAppProfessionalScanTaskRequest& request, const CreateFlySecMiniAppProfessionalScanTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateFlySecMiniAppProfessionalScanTaskOutcomeCallable CreateFlySecMiniAppProfessionalScanTaskCallable(const Model::CreateFlySecMiniAppProfessionalScanTaskRequest& request);

                /**
                 *创建小程序翼扬安全的基础或深度诊断任务
                 * @param req CreateFlySecMiniAppScanTaskRequest
                 * @return CreateFlySecMiniAppScanTaskOutcome
                 */
                CreateFlySecMiniAppScanTaskOutcome CreateFlySecMiniAppScanTask(const Model::CreateFlySecMiniAppScanTaskRequest &request);
                void CreateFlySecMiniAppScanTaskAsync(const Model::CreateFlySecMiniAppScanTaskRequest& request, const CreateFlySecMiniAppScanTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateFlySecMiniAppScanTaskOutcomeCallable CreateFlySecMiniAppScanTaskCallable(const Model::CreateFlySecMiniAppScanTaskRequest& request);

                /**
                 *重新提交基础诊断任务
                 * @param req CreateFlySecMiniAppScanTaskRepeatRequest
                 * @return CreateFlySecMiniAppScanTaskRepeatOutcome
                 */
                CreateFlySecMiniAppScanTaskRepeatOutcome CreateFlySecMiniAppScanTaskRepeat(const Model::CreateFlySecMiniAppScanTaskRepeatRequest &request);
                void CreateFlySecMiniAppScanTaskRepeatAsync(const Model::CreateFlySecMiniAppScanTaskRepeatRequest& request, const CreateFlySecMiniAppScanTaskRepeatAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateFlySecMiniAppScanTaskRepeatOutcomeCallable CreateFlySecMiniAppScanTaskRepeatCallable(const Model::CreateFlySecMiniAppScanTaskRepeatRequest& request);

                /**
                 *查询翼扬安全基础诊断资源使用情况
                 * @param req DescribeBasicDiagnosisResourceUsageInfoRequest
                 * @return DescribeBasicDiagnosisResourceUsageInfoOutcome
                 */
                DescribeBasicDiagnosisResourceUsageInfoOutcome DescribeBasicDiagnosisResourceUsageInfo(const Model::DescribeBasicDiagnosisResourceUsageInfoRequest &request);
                void DescribeBasicDiagnosisResourceUsageInfoAsync(const Model::DescribeBasicDiagnosisResourceUsageInfoRequest& request, const DescribeBasicDiagnosisResourceUsageInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeBasicDiagnosisResourceUsageInfoOutcomeCallable DescribeBasicDiagnosisResourceUsageInfoCallable(const Model::DescribeBasicDiagnosisResourceUsageInfoRequest& request);

                /**
                 *获取翼扬诊断任务报告链接地址
                 * @param req DescribeFlySecMiniAppReportUrlRequest
                 * @return DescribeFlySecMiniAppReportUrlOutcome
                 */
                DescribeFlySecMiniAppReportUrlOutcome DescribeFlySecMiniAppReportUrl(const Model::DescribeFlySecMiniAppReportUrlRequest &request);
                void DescribeFlySecMiniAppReportUrlAsync(const Model::DescribeFlySecMiniAppReportUrlRequest& request, const DescribeFlySecMiniAppReportUrlAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeFlySecMiniAppReportUrlOutcomeCallable DescribeFlySecMiniAppReportUrlCallable(const Model::DescribeFlySecMiniAppReportUrlRequest& request);

                /**
                 *查询指定小程序版本的翼扬诊断安全得分
                 * @param req DescribeFlySecMiniAppScanReportListRequest
                 * @return DescribeFlySecMiniAppScanReportListOutcome
                 */
                DescribeFlySecMiniAppScanReportListOutcome DescribeFlySecMiniAppScanReportList(const Model::DescribeFlySecMiniAppScanReportListRequest &request);
                void DescribeFlySecMiniAppScanReportListAsync(const Model::DescribeFlySecMiniAppScanReportListRequest& request, const DescribeFlySecMiniAppScanReportListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeFlySecMiniAppScanReportListOutcomeCallable DescribeFlySecMiniAppScanReportListCallable(const Model::DescribeFlySecMiniAppScanReportListRequest& request);

                /**
                 *获取翼扬安全诊断任务列表
                 * @param req DescribeFlySecMiniAppScanTaskListRequest
                 * @return DescribeFlySecMiniAppScanTaskListOutcome
                 */
                DescribeFlySecMiniAppScanTaskListOutcome DescribeFlySecMiniAppScanTaskList(const Model::DescribeFlySecMiniAppScanTaskListRequest &request);
                void DescribeFlySecMiniAppScanTaskListAsync(const Model::DescribeFlySecMiniAppScanTaskListRequest& request, const DescribeFlySecMiniAppScanTaskListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeFlySecMiniAppScanTaskListOutcomeCallable DescribeFlySecMiniAppScanTaskListCallable(const Model::DescribeFlySecMiniAppScanTaskListRequest& request);

                /**
                 *获取用户提交的基础诊断任务参数信息
                 * @param req DescribeFlySecMiniAppScanTaskParamRequest
                 * @return DescribeFlySecMiniAppScanTaskParamOutcome
                 */
                DescribeFlySecMiniAppScanTaskParamOutcome DescribeFlySecMiniAppScanTaskParam(const Model::DescribeFlySecMiniAppScanTaskParamRequest &request);
                void DescribeFlySecMiniAppScanTaskParamAsync(const Model::DescribeFlySecMiniAppScanTaskParamRequest& request, const DescribeFlySecMiniAppScanTaskParamAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeFlySecMiniAppScanTaskParamOutcomeCallable DescribeFlySecMiniAppScanTaskParamCallable(const Model::DescribeFlySecMiniAppScanTaskParamRequest& request);

                /**
                 *查询翼扬安全诊断任务状态
                 * @param req DescribeFlySecMiniAppScanTaskStatusRequest
                 * @return DescribeFlySecMiniAppScanTaskStatusOutcome
                 */
                DescribeFlySecMiniAppScanTaskStatusOutcome DescribeFlySecMiniAppScanTaskStatus(const Model::DescribeFlySecMiniAppScanTaskStatusRequest &request);
                void DescribeFlySecMiniAppScanTaskStatusAsync(const Model::DescribeFlySecMiniAppScanTaskStatusRequest& request, const DescribeFlySecMiniAppScanTaskStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeFlySecMiniAppScanTaskStatusOutcomeCallable DescribeFlySecMiniAppScanTaskStatusCallable(const Model::DescribeFlySecMiniAppScanTaskStatusRequest& request);

                /**
                 *查询翼扬安全资源使用情况
                 * @param req DescribeResourceUsageInfoRequest
                 * @return DescribeResourceUsageInfoOutcome
                 */
                DescribeResourceUsageInfoOutcome DescribeResourceUsageInfo(const Model::DescribeResourceUsageInfoRequest &request);
                void DescribeResourceUsageInfoAsync(const Model::DescribeResourceUsageInfoRequest& request, const DescribeResourceUsageInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeResourceUsageInfoOutcomeCallable DescribeResourceUsageInfoCallable(const Model::DescribeResourceUsageInfoRequest& request);

                /**
                 *获取小程序隐私合规诊断任务列表
                 * @param req DescribeScanTaskListRequest
                 * @return DescribeScanTaskListOutcome
                 */
                DescribeScanTaskListOutcome DescribeScanTaskList(const Model::DescribeScanTaskListRequest &request);
                void DescribeScanTaskListAsync(const Model::DescribeScanTaskListRequest& request, const DescribeScanTaskListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeScanTaskListOutcomeCallable DescribeScanTaskListCallable(const Model::DescribeScanTaskListRequest& request);

                /**
                 *获取小程序合规诊断任务报告url
                 * @param req DescribeScanTaskReportUrlRequest
                 * @return DescribeScanTaskReportUrlOutcome
                 */
                DescribeScanTaskReportUrlOutcome DescribeScanTaskReportUrl(const Model::DescribeScanTaskReportUrlRequest &request);
                void DescribeScanTaskReportUrlAsync(const Model::DescribeScanTaskReportUrlRequest& request, const DescribeScanTaskReportUrlAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeScanTaskReportUrlOutcomeCallable DescribeScanTaskReportUrlCallable(const Model::DescribeScanTaskReportUrlRequest& request);

                /**
                 *查询小程序隐私合规诊断任务状态
                 * @param req DescribeScanTaskStatusRequest
                 * @return DescribeScanTaskStatusOutcome
                 */
                DescribeScanTaskStatusOutcome DescribeScanTaskStatus(const Model::DescribeScanTaskStatusRequest &request);
                void DescribeScanTaskStatusAsync(const Model::DescribeScanTaskStatusRequest& request, const DescribeScanTaskStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeScanTaskStatusOutcomeCallable DescribeScanTaskStatusCallable(const Model::DescribeScanTaskStatusRequest& request);

            };
        }
    }
}

#endif // !TENCENTCLOUD_MMPS_V20200710_MMPSCLIENT_H_
