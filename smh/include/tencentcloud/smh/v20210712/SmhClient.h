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

#ifndef TENCENTCLOUD_SMH_V20210712_SMHCLIENT_H_
#define TENCENTCLOUD_SMH_V20210712_SMHCLIENT_H_

#include <functional>
#include <future>
#include <tencentcloud/core/AbstractClient.h>
#include <tencentcloud/core/Credential.h>
#include <tencentcloud/core/profile/ClientProfile.h>
#include <tencentcloud/core/AsyncCallerContext.h>
#include <tencentcloud/smh/v20210712/model/CreateLibraryRequest.h>
#include <tencentcloud/smh/v20210712/model/CreateLibraryResponse.h>
#include <tencentcloud/smh/v20210712/model/DeleteLibraryRequest.h>
#include <tencentcloud/smh/v20210712/model/DeleteLibraryResponse.h>
#include <tencentcloud/smh/v20210712/model/DescribeLibrariesRequest.h>
#include <tencentcloud/smh/v20210712/model/DescribeLibrariesResponse.h>
#include <tencentcloud/smh/v20210712/model/DescribeLibrarySecretRequest.h>
#include <tencentcloud/smh/v20210712/model/DescribeLibrarySecretResponse.h>
#include <tencentcloud/smh/v20210712/model/DescribeOfficialInstancesRequest.h>
#include <tencentcloud/smh/v20210712/model/DescribeOfficialInstancesResponse.h>
#include <tencentcloud/smh/v20210712/model/DescribeOfficialOverviewRequest.h>
#include <tencentcloud/smh/v20210712/model/DescribeOfficialOverviewResponse.h>
#include <tencentcloud/smh/v20210712/model/DescribeTrafficPackagesRequest.h>
#include <tencentcloud/smh/v20210712/model/DescribeTrafficPackagesResponse.h>
#include <tencentcloud/smh/v20210712/model/ModifyLibraryRequest.h>
#include <tencentcloud/smh/v20210712/model/ModifyLibraryResponse.h>
#include <tencentcloud/smh/v20210712/model/SendSmsCodeRequest.h>
#include <tencentcloud/smh/v20210712/model/SendSmsCodeResponse.h>
#include <tencentcloud/smh/v20210712/model/VerifySmsCodeRequest.h>
#include <tencentcloud/smh/v20210712/model/VerifySmsCodeResponse.h>


namespace TencentCloud
{
    namespace Smh
    {
        namespace V20210712
        {
            class SmhClient : public AbstractClient
            {
            public:
                SmhClient(const Credential &credential, const std::string &region);
                SmhClient(const Credential &credential, const std::string &region, const ClientProfile &profile);

                typedef Outcome<Core::Error, Model::CreateLibraryResponse> CreateLibraryOutcome;
                typedef std::future<CreateLibraryOutcome> CreateLibraryOutcomeCallable;
                typedef std::function<void(const SmhClient*, const Model::CreateLibraryRequest&, CreateLibraryOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateLibraryAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteLibraryResponse> DeleteLibraryOutcome;
                typedef std::future<DeleteLibraryOutcome> DeleteLibraryOutcomeCallable;
                typedef std::function<void(const SmhClient*, const Model::DeleteLibraryRequest&, DeleteLibraryOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteLibraryAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeLibrariesResponse> DescribeLibrariesOutcome;
                typedef std::future<DescribeLibrariesOutcome> DescribeLibrariesOutcomeCallable;
                typedef std::function<void(const SmhClient*, const Model::DescribeLibrariesRequest&, DescribeLibrariesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeLibrariesAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeLibrarySecretResponse> DescribeLibrarySecretOutcome;
                typedef std::future<DescribeLibrarySecretOutcome> DescribeLibrarySecretOutcomeCallable;
                typedef std::function<void(const SmhClient*, const Model::DescribeLibrarySecretRequest&, DescribeLibrarySecretOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeLibrarySecretAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeOfficialInstancesResponse> DescribeOfficialInstancesOutcome;
                typedef std::future<DescribeOfficialInstancesOutcome> DescribeOfficialInstancesOutcomeCallable;
                typedef std::function<void(const SmhClient*, const Model::DescribeOfficialInstancesRequest&, DescribeOfficialInstancesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeOfficialInstancesAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeOfficialOverviewResponse> DescribeOfficialOverviewOutcome;
                typedef std::future<DescribeOfficialOverviewOutcome> DescribeOfficialOverviewOutcomeCallable;
                typedef std::function<void(const SmhClient*, const Model::DescribeOfficialOverviewRequest&, DescribeOfficialOverviewOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeOfficialOverviewAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeTrafficPackagesResponse> DescribeTrafficPackagesOutcome;
                typedef std::future<DescribeTrafficPackagesOutcome> DescribeTrafficPackagesOutcomeCallable;
                typedef std::function<void(const SmhClient*, const Model::DescribeTrafficPackagesRequest&, DescribeTrafficPackagesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeTrafficPackagesAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyLibraryResponse> ModifyLibraryOutcome;
                typedef std::future<ModifyLibraryOutcome> ModifyLibraryOutcomeCallable;
                typedef std::function<void(const SmhClient*, const Model::ModifyLibraryRequest&, ModifyLibraryOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyLibraryAsyncHandler;
                typedef Outcome<Core::Error, Model::SendSmsCodeResponse> SendSmsCodeOutcome;
                typedef std::future<SendSmsCodeOutcome> SendSmsCodeOutcomeCallable;
                typedef std::function<void(const SmhClient*, const Model::SendSmsCodeRequest&, SendSmsCodeOutcome, const std::shared_ptr<const AsyncCallerContext>&)> SendSmsCodeAsyncHandler;
                typedef Outcome<Core::Error, Model::VerifySmsCodeResponse> VerifySmsCodeOutcome;
                typedef std::future<VerifySmsCodeOutcome> VerifySmsCodeOutcomeCallable;
                typedef std::function<void(const SmhClient*, const Model::VerifySmsCodeRequest&, VerifySmsCodeOutcome, const std::shared_ptr<const AsyncCallerContext>&)> VerifySmsCodeAsyncHandler;



                /**
                 *创建 PaaS 服务媒体库
                 * @param req CreateLibraryRequest
                 * @return CreateLibraryOutcome
                 */
                CreateLibraryOutcome CreateLibrary(const Model::CreateLibraryRequest &request);
                void CreateLibraryAsync(const Model::CreateLibraryRequest& request, const CreateLibraryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateLibraryOutcomeCallable CreateLibraryCallable(const Model::CreateLibraryRequest& request);

                /**
                 *删除 PaaS 服务媒体库
                 * @param req DeleteLibraryRequest
                 * @return DeleteLibraryOutcome
                 */
                DeleteLibraryOutcome DeleteLibrary(const Model::DeleteLibraryRequest &request);
                void DeleteLibraryAsync(const Model::DeleteLibraryRequest& request, const DeleteLibraryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteLibraryOutcomeCallable DeleteLibraryCallable(const Model::DeleteLibraryRequest& request);

                /**
                 *查询 PaaS 服务媒体库列表
                 * @param req DescribeLibrariesRequest
                 * @return DescribeLibrariesOutcome
                 */
                DescribeLibrariesOutcome DescribeLibraries(const Model::DescribeLibrariesRequest &request);
                void DescribeLibrariesAsync(const Model::DescribeLibrariesRequest& request, const DescribeLibrariesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeLibrariesOutcomeCallable DescribeLibrariesCallable(const Model::DescribeLibrariesRequest& request);

                /**
                 *查询 PaaS 服务媒体库密钥
                 * @param req DescribeLibrarySecretRequest
                 * @return DescribeLibrarySecretOutcome
                 */
                DescribeLibrarySecretOutcome DescribeLibrarySecret(const Model::DescribeLibrarySecretRequest &request);
                void DescribeLibrarySecretAsync(const Model::DescribeLibrarySecretRequest& request, const DescribeLibrarySecretAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeLibrarySecretOutcomeCallable DescribeLibrarySecretCallable(const Model::DescribeLibrarySecretRequest& request);

                /**
                 *查询官方云盘实例
                 * @param req DescribeOfficialInstancesRequest
                 * @return DescribeOfficialInstancesOutcome
                 */
                DescribeOfficialInstancesOutcome DescribeOfficialInstances(const Model::DescribeOfficialInstancesRequest &request);
                void DescribeOfficialInstancesAsync(const Model::DescribeOfficialInstancesRequest& request, const DescribeOfficialInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeOfficialInstancesOutcomeCallable DescribeOfficialInstancesCallable(const Model::DescribeOfficialInstancesRequest& request);

                /**
                 *查询官方云盘实例概览数据
                 * @param req DescribeOfficialOverviewRequest
                 * @return DescribeOfficialOverviewOutcome
                 */
                DescribeOfficialOverviewOutcome DescribeOfficialOverview(const Model::DescribeOfficialOverviewRequest &request);
                void DescribeOfficialOverviewAsync(const Model::DescribeOfficialOverviewRequest& request, const DescribeOfficialOverviewAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeOfficialOverviewOutcomeCallable DescribeOfficialOverviewCallable(const Model::DescribeOfficialOverviewRequest& request);

                /**
                 *查询流量资源包
                 * @param req DescribeTrafficPackagesRequest
                 * @return DescribeTrafficPackagesOutcome
                 */
                DescribeTrafficPackagesOutcome DescribeTrafficPackages(const Model::DescribeTrafficPackagesRequest &request);
                void DescribeTrafficPackagesAsync(const Model::DescribeTrafficPackagesRequest& request, const DescribeTrafficPackagesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeTrafficPackagesOutcomeCallable DescribeTrafficPackagesCallable(const Model::DescribeTrafficPackagesRequest& request);

                /**
                 *修改 PaaS 服务媒体库配置项
                 * @param req ModifyLibraryRequest
                 * @return ModifyLibraryOutcome
                 */
                ModifyLibraryOutcome ModifyLibrary(const Model::ModifyLibraryRequest &request);
                void ModifyLibraryAsync(const Model::ModifyLibraryRequest& request, const ModifyLibraryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyLibraryOutcomeCallable ModifyLibraryCallable(const Model::ModifyLibraryRequest& request);

                /**
                 *发送用于换绑官方云盘实例的超级管理员账号的短信验证码
                 * @param req SendSmsCodeRequest
                 * @return SendSmsCodeOutcome
                 */
                SendSmsCodeOutcome SendSmsCode(const Model::SendSmsCodeRequest &request);
                void SendSmsCodeAsync(const Model::SendSmsCodeRequest& request, const SendSmsCodeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                SendSmsCodeOutcomeCallable SendSmsCodeCallable(const Model::SendSmsCodeRequest& request);

                /**
                 *验证短信验证码以换绑官方云盘实例的超级管理员账号
                 * @param req VerifySmsCodeRequest
                 * @return VerifySmsCodeOutcome
                 */
                VerifySmsCodeOutcome VerifySmsCode(const Model::VerifySmsCodeRequest &request);
                void VerifySmsCodeAsync(const Model::VerifySmsCodeRequest& request, const VerifySmsCodeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                VerifySmsCodeOutcomeCallable VerifySmsCodeCallable(const Model::VerifySmsCodeRequest& request);

            };
        }
    }
}

#endif // !TENCENTCLOUD_SMH_V20210712_SMHCLIENT_H_
