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

#ifndef TENCENTCLOUD_ACP_V20220105_ACPCLIENT_H_
#define TENCENTCLOUD_ACP_V20220105_ACPCLIENT_H_

#include <functional>
#include <future>
#include <tencentcloud/core/AbstractClient.h>
#include <tencentcloud/core/Credential.h>
#include <tencentcloud/core/profile/ClientProfile.h>
#include <tencentcloud/core/AsyncCallerContext.h>
#include <tencentcloud/acp/v20220105/model/CreateAppScanTaskRequest.h>
#include <tencentcloud/acp/v20220105/model/CreateAppScanTaskResponse.h>
#include <tencentcloud/acp/v20220105/model/CreateAppScanTaskRepeatRequest.h>
#include <tencentcloud/acp/v20220105/model/CreateAppScanTaskRepeatResponse.h>
#include <tencentcloud/acp/v20220105/model/DescribeChannelTaskReportUrlRequest.h>
#include <tencentcloud/acp/v20220105/model/DescribeChannelTaskReportUrlResponse.h>
#include <tencentcloud/acp/v20220105/model/DescribeFileTicketRequest.h>
#include <tencentcloud/acp/v20220105/model/DescribeFileTicketResponse.h>
#include <tencentcloud/acp/v20220105/model/DescribeResourceUsageInfoRequest.h>
#include <tencentcloud/acp/v20220105/model/DescribeResourceUsageInfoResponse.h>
#include <tencentcloud/acp/v20220105/model/DescribeScanTaskListRequest.h>
#include <tencentcloud/acp/v20220105/model/DescribeScanTaskListResponse.h>
#include <tencentcloud/acp/v20220105/model/DescribeScanTaskReportUrlRequest.h>
#include <tencentcloud/acp/v20220105/model/DescribeScanTaskReportUrlResponse.h>
#include <tencentcloud/acp/v20220105/model/DescribeScanTaskStatusRequest.h>
#include <tencentcloud/acp/v20220105/model/DescribeScanTaskStatusResponse.h>


namespace TencentCloud
{
    namespace Acp
    {
        namespace V20220105
        {
            class AcpClient : public AbstractClient
            {
            public:
                AcpClient(const Credential &credential, const std::string &region);
                AcpClient(const Credential &credential, const std::string &region, const ClientProfile &profile);

                typedef Outcome<Core::Error, Model::CreateAppScanTaskResponse> CreateAppScanTaskOutcome;
                typedef std::future<CreateAppScanTaskOutcome> CreateAppScanTaskOutcomeCallable;
                typedef std::function<void(const AcpClient*, const Model::CreateAppScanTaskRequest&, CreateAppScanTaskOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateAppScanTaskAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateAppScanTaskRepeatResponse> CreateAppScanTaskRepeatOutcome;
                typedef std::future<CreateAppScanTaskRepeatOutcome> CreateAppScanTaskRepeatOutcomeCallable;
                typedef std::function<void(const AcpClient*, const Model::CreateAppScanTaskRepeatRequest&, CreateAppScanTaskRepeatOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateAppScanTaskRepeatAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeChannelTaskReportUrlResponse> DescribeChannelTaskReportUrlOutcome;
                typedef std::future<DescribeChannelTaskReportUrlOutcome> DescribeChannelTaskReportUrlOutcomeCallable;
                typedef std::function<void(const AcpClient*, const Model::DescribeChannelTaskReportUrlRequest&, DescribeChannelTaskReportUrlOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeChannelTaskReportUrlAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeFileTicketResponse> DescribeFileTicketOutcome;
                typedef std::future<DescribeFileTicketOutcome> DescribeFileTicketOutcomeCallable;
                typedef std::function<void(const AcpClient*, const Model::DescribeFileTicketRequest&, DescribeFileTicketOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeFileTicketAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeResourceUsageInfoResponse> DescribeResourceUsageInfoOutcome;
                typedef std::future<DescribeResourceUsageInfoOutcome> DescribeResourceUsageInfoOutcomeCallable;
                typedef std::function<void(const AcpClient*, const Model::DescribeResourceUsageInfoRequest&, DescribeResourceUsageInfoOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeResourceUsageInfoAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeScanTaskListResponse> DescribeScanTaskListOutcome;
                typedef std::future<DescribeScanTaskListOutcome> DescribeScanTaskListOutcomeCallable;
                typedef std::function<void(const AcpClient*, const Model::DescribeScanTaskListRequest&, DescribeScanTaskListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeScanTaskListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeScanTaskReportUrlResponse> DescribeScanTaskReportUrlOutcome;
                typedef std::future<DescribeScanTaskReportUrlOutcome> DescribeScanTaskReportUrlOutcomeCallable;
                typedef std::function<void(const AcpClient*, const Model::DescribeScanTaskReportUrlRequest&, DescribeScanTaskReportUrlOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeScanTaskReportUrlAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeScanTaskStatusResponse> DescribeScanTaskStatusOutcome;
                typedef std::future<DescribeScanTaskStatusOutcome> DescribeScanTaskStatusOutcomeCallable;
                typedef std::function<void(const AcpClient*, const Model::DescribeScanTaskStatusRequest&, DescribeScanTaskStatusOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeScanTaskStatusAsyncHandler;



                /**
                 *创建应用合规隐私诊断任务
                 * @param req CreateAppScanTaskRequest
                 * @return CreateAppScanTaskOutcome
                 */
                CreateAppScanTaskOutcome CreateAppScanTask(const Model::CreateAppScanTaskRequest &request);
                void CreateAppScanTaskAsync(const Model::CreateAppScanTaskRequest& request, const CreateAppScanTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateAppScanTaskOutcomeCallable CreateAppScanTaskCallable(const Model::CreateAppScanTaskRequest& request);

                /**
                 *App应用合规隐私诊断重试任务
                 * @param req CreateAppScanTaskRepeatRequest
                 * @return CreateAppScanTaskRepeatOutcome
                 */
                CreateAppScanTaskRepeatOutcome CreateAppScanTaskRepeat(const Model::CreateAppScanTaskRepeatRequest &request);
                void CreateAppScanTaskRepeatAsync(const Model::CreateAppScanTaskRepeatRequest& request, const CreateAppScanTaskRepeatAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateAppScanTaskRepeatOutcomeCallable CreateAppScanTaskRepeatCallable(const Model::CreateAppScanTaskRepeatRequest& request);

                /**
                 *获取子渠道的App合规诊断任务报告url
                 * @param req DescribeChannelTaskReportUrlRequest
                 * @return DescribeChannelTaskReportUrlOutcome
                 */
                DescribeChannelTaskReportUrlOutcome DescribeChannelTaskReportUrl(const Model::DescribeChannelTaskReportUrlRequest &request);
                void DescribeChannelTaskReportUrlAsync(const Model::DescribeChannelTaskReportUrlRequest& request, const DescribeChannelTaskReportUrlAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeChannelTaskReportUrlOutcomeCallable DescribeChannelTaskReportUrlCallable(const Model::DescribeChannelTaskReportUrlRequest& request);

                /**
                 *获取应用合规文件上传凭证，用于上传诊断文件
                 * @param req DescribeFileTicketRequest
                 * @return DescribeFileTicketOutcome
                 */
                DescribeFileTicketOutcome DescribeFileTicket(const Model::DescribeFileTicketRequest &request);
                void DescribeFileTicketAsync(const Model::DescribeFileTicketRequest& request, const DescribeFileTicketAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeFileTicketOutcomeCallable DescribeFileTicketCallable(const Model::DescribeFileTicketRequest& request);

                /**
                 *查询应用合规平台用户资源的使用情况
                 * @param req DescribeResourceUsageInfoRequest
                 * @return DescribeResourceUsageInfoOutcome
                 */
                DescribeResourceUsageInfoOutcome DescribeResourceUsageInfo(const Model::DescribeResourceUsageInfoRequest &request);
                void DescribeResourceUsageInfoAsync(const Model::DescribeResourceUsageInfoRequest& request, const DescribeResourceUsageInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeResourceUsageInfoOutcomeCallable DescribeResourceUsageInfoCallable(const Model::DescribeResourceUsageInfoRequest& request);

                /**
                 *获取App隐私合规诊断任务列表
                 * @param req DescribeScanTaskListRequest
                 * @return DescribeScanTaskListOutcome
                 */
                DescribeScanTaskListOutcome DescribeScanTaskList(const Model::DescribeScanTaskListRequest &request);
                void DescribeScanTaskListAsync(const Model::DescribeScanTaskListRequest& request, const DescribeScanTaskListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeScanTaskListOutcomeCallable DescribeScanTaskListCallable(const Model::DescribeScanTaskListRequest& request);

                /**
                 *获取App合规诊断任务报告url
                 * @param req DescribeScanTaskReportUrlRequest
                 * @return DescribeScanTaskReportUrlOutcome
                 */
                DescribeScanTaskReportUrlOutcome DescribeScanTaskReportUrl(const Model::DescribeScanTaskReportUrlRequest &request);
                void DescribeScanTaskReportUrlAsync(const Model::DescribeScanTaskReportUrlRequest& request, const DescribeScanTaskReportUrlAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeScanTaskReportUrlOutcomeCallable DescribeScanTaskReportUrlCallable(const Model::DescribeScanTaskReportUrlRequest& request);

                /**
                 *查询App隐私合规诊断任务状态
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

#endif // !TENCENTCLOUD_ACP_V20220105_ACPCLIENT_H_
