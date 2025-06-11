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

#ifndef TENCENTCLOUD_HAI_V20230812_HAICLIENT_H_
#define TENCENTCLOUD_HAI_V20230812_HAICLIENT_H_

#include <functional>
#include <future>
#include <tencentcloud/core/AbstractClient.h>
#include <tencentcloud/core/Credential.h>
#include <tencentcloud/core/profile/ClientProfile.h>
#include <tencentcloud/core/AsyncCallerContext.h>
#include <tencentcloud/hai/v20230812/model/CreateApplicationRequest.h>
#include <tencentcloud/hai/v20230812/model/CreateApplicationResponse.h>
#include <tencentcloud/hai/v20230812/model/CreateMuskPromptRequest.h>
#include <tencentcloud/hai/v20230812/model/CreateMuskPromptResponse.h>
#include <tencentcloud/hai/v20230812/model/DescribeApplicationsRequest.h>
#include <tencentcloud/hai/v20230812/model/DescribeApplicationsResponse.h>
#include <tencentcloud/hai/v20230812/model/DescribeInstanceNetworkStatusRequest.h>
#include <tencentcloud/hai/v20230812/model/DescribeInstanceNetworkStatusResponse.h>
#include <tencentcloud/hai/v20230812/model/DescribeInstancesRequest.h>
#include <tencentcloud/hai/v20230812/model/DescribeInstancesResponse.h>
#include <tencentcloud/hai/v20230812/model/DescribeMuskPromptsRequest.h>
#include <tencentcloud/hai/v20230812/model/DescribeMuskPromptsResponse.h>
#include <tencentcloud/hai/v20230812/model/DescribeRegionsRequest.h>
#include <tencentcloud/hai/v20230812/model/DescribeRegionsResponse.h>
#include <tencentcloud/hai/v20230812/model/DescribeScenesRequest.h>
#include <tencentcloud/hai/v20230812/model/DescribeScenesResponse.h>
#include <tencentcloud/hai/v20230812/model/DescribeServiceLoginSettingsRequest.h>
#include <tencentcloud/hai/v20230812/model/DescribeServiceLoginSettingsResponse.h>
#include <tencentcloud/hai/v20230812/model/InquirePriceRunInstancesRequest.h>
#include <tencentcloud/hai/v20230812/model/InquirePriceRunInstancesResponse.h>
#include <tencentcloud/hai/v20230812/model/ResetInstancesPasswordRequest.h>
#include <tencentcloud/hai/v20230812/model/ResetInstancesPasswordResponse.h>
#include <tencentcloud/hai/v20230812/model/ResizeInstanceDiskRequest.h>
#include <tencentcloud/hai/v20230812/model/ResizeInstanceDiskResponse.h>
#include <tencentcloud/hai/v20230812/model/RunInstancesRequest.h>
#include <tencentcloud/hai/v20230812/model/RunInstancesResponse.h>
#include <tencentcloud/hai/v20230812/model/StartInstanceRequest.h>
#include <tencentcloud/hai/v20230812/model/StartInstanceResponse.h>
#include <tencentcloud/hai/v20230812/model/StopInstanceRequest.h>
#include <tencentcloud/hai/v20230812/model/StopInstanceResponse.h>
#include <tencentcloud/hai/v20230812/model/TerminateInstancesRequest.h>
#include <tencentcloud/hai/v20230812/model/TerminateInstancesResponse.h>


namespace TencentCloud
{
    namespace Hai
    {
        namespace V20230812
        {
            class HaiClient : public AbstractClient
            {
            public:
                HaiClient(const Credential &credential, const std::string &region);
                HaiClient(const Credential &credential, const std::string &region, const ClientProfile &profile);

                typedef Outcome<Core::Error, Model::CreateApplicationResponse> CreateApplicationOutcome;
                typedef std::future<CreateApplicationOutcome> CreateApplicationOutcomeCallable;
                typedef std::function<void(const HaiClient*, const Model::CreateApplicationRequest&, CreateApplicationOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateApplicationAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateMuskPromptResponse> CreateMuskPromptOutcome;
                typedef std::future<CreateMuskPromptOutcome> CreateMuskPromptOutcomeCallable;
                typedef std::function<void(const HaiClient*, const Model::CreateMuskPromptRequest&, CreateMuskPromptOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateMuskPromptAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeApplicationsResponse> DescribeApplicationsOutcome;
                typedef std::future<DescribeApplicationsOutcome> DescribeApplicationsOutcomeCallable;
                typedef std::function<void(const HaiClient*, const Model::DescribeApplicationsRequest&, DescribeApplicationsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeApplicationsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeInstanceNetworkStatusResponse> DescribeInstanceNetworkStatusOutcome;
                typedef std::future<DescribeInstanceNetworkStatusOutcome> DescribeInstanceNetworkStatusOutcomeCallable;
                typedef std::function<void(const HaiClient*, const Model::DescribeInstanceNetworkStatusRequest&, DescribeInstanceNetworkStatusOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeInstanceNetworkStatusAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeInstancesResponse> DescribeInstancesOutcome;
                typedef std::future<DescribeInstancesOutcome> DescribeInstancesOutcomeCallable;
                typedef std::function<void(const HaiClient*, const Model::DescribeInstancesRequest&, DescribeInstancesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeInstancesAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeMuskPromptsResponse> DescribeMuskPromptsOutcome;
                typedef std::future<DescribeMuskPromptsOutcome> DescribeMuskPromptsOutcomeCallable;
                typedef std::function<void(const HaiClient*, const Model::DescribeMuskPromptsRequest&, DescribeMuskPromptsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeMuskPromptsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeRegionsResponse> DescribeRegionsOutcome;
                typedef std::future<DescribeRegionsOutcome> DescribeRegionsOutcomeCallable;
                typedef std::function<void(const HaiClient*, const Model::DescribeRegionsRequest&, DescribeRegionsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeRegionsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeScenesResponse> DescribeScenesOutcome;
                typedef std::future<DescribeScenesOutcome> DescribeScenesOutcomeCallable;
                typedef std::function<void(const HaiClient*, const Model::DescribeScenesRequest&, DescribeScenesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeScenesAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeServiceLoginSettingsResponse> DescribeServiceLoginSettingsOutcome;
                typedef std::future<DescribeServiceLoginSettingsOutcome> DescribeServiceLoginSettingsOutcomeCallable;
                typedef std::function<void(const HaiClient*, const Model::DescribeServiceLoginSettingsRequest&, DescribeServiceLoginSettingsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeServiceLoginSettingsAsyncHandler;
                typedef Outcome<Core::Error, Model::InquirePriceRunInstancesResponse> InquirePriceRunInstancesOutcome;
                typedef std::future<InquirePriceRunInstancesOutcome> InquirePriceRunInstancesOutcomeCallable;
                typedef std::function<void(const HaiClient*, const Model::InquirePriceRunInstancesRequest&, InquirePriceRunInstancesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> InquirePriceRunInstancesAsyncHandler;
                typedef Outcome<Core::Error, Model::ResetInstancesPasswordResponse> ResetInstancesPasswordOutcome;
                typedef std::future<ResetInstancesPasswordOutcome> ResetInstancesPasswordOutcomeCallable;
                typedef std::function<void(const HaiClient*, const Model::ResetInstancesPasswordRequest&, ResetInstancesPasswordOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ResetInstancesPasswordAsyncHandler;
                typedef Outcome<Core::Error, Model::ResizeInstanceDiskResponse> ResizeInstanceDiskOutcome;
                typedef std::future<ResizeInstanceDiskOutcome> ResizeInstanceDiskOutcomeCallable;
                typedef std::function<void(const HaiClient*, const Model::ResizeInstanceDiskRequest&, ResizeInstanceDiskOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ResizeInstanceDiskAsyncHandler;
                typedef Outcome<Core::Error, Model::RunInstancesResponse> RunInstancesOutcome;
                typedef std::future<RunInstancesOutcome> RunInstancesOutcomeCallable;
                typedef std::function<void(const HaiClient*, const Model::RunInstancesRequest&, RunInstancesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> RunInstancesAsyncHandler;
                typedef Outcome<Core::Error, Model::StartInstanceResponse> StartInstanceOutcome;
                typedef std::future<StartInstanceOutcome> StartInstanceOutcomeCallable;
                typedef std::function<void(const HaiClient*, const Model::StartInstanceRequest&, StartInstanceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> StartInstanceAsyncHandler;
                typedef Outcome<Core::Error, Model::StopInstanceResponse> StopInstanceOutcome;
                typedef std::future<StopInstanceOutcome> StopInstanceOutcomeCallable;
                typedef std::function<void(const HaiClient*, const Model::StopInstanceRequest&, StopInstanceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> StopInstanceAsyncHandler;
                typedef Outcome<Core::Error, Model::TerminateInstancesResponse> TerminateInstancesOutcome;
                typedef std::future<TerminateInstancesOutcome> TerminateInstancesOutcomeCallable;
                typedef std::function<void(const HaiClient*, const Model::TerminateInstancesRequest&, TerminateInstancesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> TerminateInstancesAsyncHandler;



                /**
                 *本接口（CreateApplication）用于对HAI实例制作自定义应用。
                 * @param req CreateApplicationRequest
                 * @return CreateApplicationOutcome
                 */
                CreateApplicationOutcome CreateApplication(const Model::CreateApplicationRequest &request);
                void CreateApplicationAsync(const Model::CreateApplicationRequest& request, const CreateApplicationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateApplicationOutcomeCallable CreateApplicationCallable(const Model::CreateApplicationRequest& request);

                /**
                 *创建musk prompt 任务
                 * @param req CreateMuskPromptRequest
                 * @return CreateMuskPromptOutcome
                 */
                CreateMuskPromptOutcome CreateMuskPrompt(const Model::CreateMuskPromptRequest &request);
                void CreateMuskPromptAsync(const Model::CreateMuskPromptRequest& request, const CreateMuskPromptAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateMuskPromptOutcomeCallable CreateMuskPromptCallable(const Model::CreateMuskPromptRequest& request);

                /**
                 *本接口（DescribeApplications）用于查询应用
                 * @param req DescribeApplicationsRequest
                 * @return DescribeApplicationsOutcome
                 */
                DescribeApplicationsOutcome DescribeApplications(const Model::DescribeApplicationsRequest &request);
                void DescribeApplicationsAsync(const Model::DescribeApplicationsRequest& request, const DescribeApplicationsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeApplicationsOutcomeCallable DescribeApplicationsCallable(const Model::DescribeApplicationsRequest& request);

                /**
                 *本接口（DescribeInstanceNetworkStatus）用于查询实例的网络配置及消耗情况
                 * @param req DescribeInstanceNetworkStatusRequest
                 * @return DescribeInstanceNetworkStatusOutcome
                 */
                DescribeInstanceNetworkStatusOutcome DescribeInstanceNetworkStatus(const Model::DescribeInstanceNetworkStatusRequest &request);
                void DescribeInstanceNetworkStatusAsync(const Model::DescribeInstanceNetworkStatusRequest& request, const DescribeInstanceNetworkStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeInstanceNetworkStatusOutcomeCallable DescribeInstanceNetworkStatusCallable(const Model::DescribeInstanceNetworkStatusRequest& request);

                /**
                 *本接口（DescribeInstances）用户查询实例
                 * @param req DescribeInstancesRequest
                 * @return DescribeInstancesOutcome
                 */
                DescribeInstancesOutcome DescribeInstances(const Model::DescribeInstancesRequest &request);
                void DescribeInstancesAsync(const Model::DescribeInstancesRequest& request, const DescribeInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeInstancesOutcomeCallable DescribeInstancesCallable(const Model::DescribeInstancesRequest& request);

                /**
                 *获取prompt任务列表
                 * @param req DescribeMuskPromptsRequest
                 * @return DescribeMuskPromptsOutcome
                 */
                DescribeMuskPromptsOutcome DescribeMuskPrompts(const Model::DescribeMuskPromptsRequest &request);
                void DescribeMuskPromptsAsync(const Model::DescribeMuskPromptsRequest& request, const DescribeMuskPromptsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeMuskPromptsOutcomeCallable DescribeMuskPromptsCallable(const Model::DescribeMuskPromptsRequest& request);

                /**
                 *本接口（DescribeRegions）用于查询地域列表
                 * @param req DescribeRegionsRequest
                 * @return DescribeRegionsOutcome
                 */
                DescribeRegionsOutcome DescribeRegions(const Model::DescribeRegionsRequest &request);
                void DescribeRegionsAsync(const Model::DescribeRegionsRequest& request, const DescribeRegionsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeRegionsOutcomeCallable DescribeRegionsCallable(const Model::DescribeRegionsRequest& request);

                /**
                 *本接口（DescribeScenes）用于查询场景
                 * @param req DescribeScenesRequest
                 * @return DescribeScenesOutcome
                 */
                DescribeScenesOutcome DescribeScenes(const Model::DescribeScenesRequest &request);
                void DescribeScenesAsync(const Model::DescribeScenesRequest& request, const DescribeScenesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeScenesOutcomeCallable DescribeScenesCallable(const Model::DescribeScenesRequest& request);

                /**
                 *本接口（DescribeServiceLoginSettings）用于查询服务登录配置
                 * @param req DescribeServiceLoginSettingsRequest
                 * @return DescribeServiceLoginSettingsOutcome
                 */
                DescribeServiceLoginSettingsOutcome DescribeServiceLoginSettings(const Model::DescribeServiceLoginSettingsRequest &request);
                void DescribeServiceLoginSettingsAsync(const Model::DescribeServiceLoginSettingsRequest& request, const DescribeServiceLoginSettingsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeServiceLoginSettingsOutcomeCallable DescribeServiceLoginSettingsCallable(const Model::DescribeServiceLoginSettingsRequest& request);

                /**
                 *本接口 (InquirePriceRunInstances) 用于实例询价。
                 * @param req InquirePriceRunInstancesRequest
                 * @return InquirePriceRunInstancesOutcome
                 */
                InquirePriceRunInstancesOutcome InquirePriceRunInstances(const Model::InquirePriceRunInstancesRequest &request);
                void InquirePriceRunInstancesAsync(const Model::InquirePriceRunInstancesRequest& request, const InquirePriceRunInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                InquirePriceRunInstancesOutcomeCallable InquirePriceRunInstancesCallable(const Model::InquirePriceRunInstancesRequest& request);

                /**
                 *本接口 (ResetInstancesPassword) 用于重置实例的用户密码。
                 * @param req ResetInstancesPasswordRequest
                 * @return ResetInstancesPasswordOutcome
                 */
                ResetInstancesPasswordOutcome ResetInstancesPassword(const Model::ResetInstancesPasswordRequest &request);
                void ResetInstancesPasswordAsync(const Model::ResetInstancesPasswordRequest& request, const ResetInstancesPasswordAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ResetInstancesPasswordOutcomeCallable ResetInstancesPasswordCallable(const Model::ResetInstancesPasswordRequest& request);

                /**
                 *本接口（ResizeInstanceDisk）用于对指定HAI实例进行扩容云硬盘操作。
                 * @param req ResizeInstanceDiskRequest
                 * @return ResizeInstanceDiskOutcome
                 */
                ResizeInstanceDiskOutcome ResizeInstanceDisk(const Model::ResizeInstanceDiskRequest &request);
                void ResizeInstanceDiskAsync(const Model::ResizeInstanceDiskRequest& request, const ResizeInstanceDiskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ResizeInstanceDiskOutcomeCallable ResizeInstanceDiskCallable(const Model::ResizeInstanceDiskRequest& request);

                /**
                 *本接口 (RunInstances) 用于创建一个或多个指定配置的实例。
                 * @param req RunInstancesRequest
                 * @return RunInstancesOutcome
                 */
                RunInstancesOutcome RunInstances(const Model::RunInstancesRequest &request);
                void RunInstancesAsync(const Model::RunInstancesRequest& request, const RunInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                RunInstancesOutcomeCallable RunInstancesCallable(const Model::RunInstancesRequest& request);

                /**
                 *本接口 (StartInstance) 用于主动启动实例。
‘运行中’、‘预付费’的实例不支持启动实例
                 * @param req StartInstanceRequest
                 * @return StartInstanceOutcome
                 */
                StartInstanceOutcome StartInstance(const Model::StartInstanceRequest &request);
                void StartInstanceAsync(const Model::StartInstanceRequest& request, const StartInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                StartInstanceOutcomeCallable StartInstanceCallable(const Model::StartInstanceRequest& request);

                /**
                 *本接口 (StopInstance) 用于主动关闭实例。
‘已关机’、‘预付费’的实例不支持关机
                 * @param req StopInstanceRequest
                 * @return StopInstanceOutcome
                 */
                StopInstanceOutcome StopInstance(const Model::StopInstanceRequest &request);
                void StopInstanceAsync(const Model::StopInstanceRequest& request, const StopInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                StopInstanceOutcomeCallable StopInstanceCallable(const Model::StopInstanceRequest& request);

                /**
                 *本接口 (TerminateInstances) 用于主动退还实例。
                 * @param req TerminateInstancesRequest
                 * @return TerminateInstancesOutcome
                 */
                TerminateInstancesOutcome TerminateInstances(const Model::TerminateInstancesRequest &request);
                void TerminateInstancesAsync(const Model::TerminateInstancesRequest& request, const TerminateInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                TerminateInstancesOutcomeCallable TerminateInstancesCallable(const Model::TerminateInstancesRequest& request);

            };
        }
    }
}

#endif // !TENCENTCLOUD_HAI_V20230812_HAICLIENT_H_
