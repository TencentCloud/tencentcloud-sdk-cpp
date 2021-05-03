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

#ifndef TENCENTCLOUD_TEM_V20201221_TEMCLIENT_H_
#define TENCENTCLOUD_TEM_V20201221_TEMCLIENT_H_

#include <functional>
#include <future>
#include <tencentcloud/core/AbstractClient.h>
#include <tencentcloud/core/Credential.h>
#include <tencentcloud/core/profile/ClientProfile.h>
#include <tencentcloud/core/AsyncCallerContext.h>
#include <tencentcloud/tem/v20201221/model/CreateCosTokenRequest.h>
#include <tencentcloud/tem/v20201221/model/CreateCosTokenResponse.h>
#include <tencentcloud/tem/v20201221/model/CreateNamespaceRequest.h>
#include <tencentcloud/tem/v20201221/model/CreateNamespaceResponse.h>
#include <tencentcloud/tem/v20201221/model/DescribeNamespacesRequest.h>
#include <tencentcloud/tem/v20201221/model/DescribeNamespacesResponse.h>
#include <tencentcloud/tem/v20201221/model/ModifyIngressRequest.h>
#include <tencentcloud/tem/v20201221/model/ModifyIngressResponse.h>
#include <tencentcloud/tem/v20201221/model/ModifyNamespaceRequest.h>
#include <tencentcloud/tem/v20201221/model/ModifyNamespaceResponse.h>


namespace TencentCloud
{
    namespace Tem
    {
        namespace V20201221
        {
            class TemClient : public AbstractClient
            {
            public:
                TemClient(const Credential &credential, const std::string &region);
                TemClient(const Credential &credential, const std::string &region, const ClientProfile &profile);

                typedef Outcome<Error, Model::CreateCosTokenResponse> CreateCosTokenOutcome;
                typedef std::future<CreateCosTokenOutcome> CreateCosTokenOutcomeCallable;
                typedef std::function<void(const TemClient*, const Model::CreateCosTokenRequest&, CreateCosTokenOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateCosTokenAsyncHandler;
                typedef Outcome<Error, Model::CreateNamespaceResponse> CreateNamespaceOutcome;
                typedef std::future<CreateNamespaceOutcome> CreateNamespaceOutcomeCallable;
                typedef std::function<void(const TemClient*, const Model::CreateNamespaceRequest&, CreateNamespaceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateNamespaceAsyncHandler;
                typedef Outcome<Error, Model::DescribeNamespacesResponse> DescribeNamespacesOutcome;
                typedef std::future<DescribeNamespacesOutcome> DescribeNamespacesOutcomeCallable;
                typedef std::function<void(const TemClient*, const Model::DescribeNamespacesRequest&, DescribeNamespacesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeNamespacesAsyncHandler;
                typedef Outcome<Error, Model::ModifyIngressResponse> ModifyIngressOutcome;
                typedef std::future<ModifyIngressOutcome> ModifyIngressOutcomeCallable;
                typedef std::function<void(const TemClient*, const Model::ModifyIngressRequest&, ModifyIngressOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyIngressAsyncHandler;
                typedef Outcome<Error, Model::ModifyNamespaceResponse> ModifyNamespaceOutcome;
                typedef std::future<ModifyNamespaceOutcome> ModifyNamespaceOutcomeCallable;
                typedef std::function<void(const TemClient*, const Model::ModifyNamespaceRequest&, ModifyNamespaceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyNamespaceAsyncHandler;



                /**
                 *生成Cos临时秘钥
                 * @param req CreateCosTokenRequest
                 * @return CreateCosTokenOutcome
                 */
                CreateCosTokenOutcome CreateCosToken(const Model::CreateCosTokenRequest &request);
                void CreateCosTokenAsync(const Model::CreateCosTokenRequest& request, const CreateCosTokenAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateCosTokenOutcomeCallable CreateCosTokenCallable(const Model::CreateCosTokenRequest& request);

                /**
                 *创建命名空间
                 * @param req CreateNamespaceRequest
                 * @return CreateNamespaceOutcome
                 */
                CreateNamespaceOutcome CreateNamespace(const Model::CreateNamespaceRequest &request);
                void CreateNamespaceAsync(const Model::CreateNamespaceRequest& request, const CreateNamespaceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateNamespaceOutcomeCallable CreateNamespaceCallable(const Model::CreateNamespaceRequest& request);

                /**
                 *获取租户命名空间列表
                 * @param req DescribeNamespacesRequest
                 * @return DescribeNamespacesOutcome
                 */
                DescribeNamespacesOutcome DescribeNamespaces(const Model::DescribeNamespacesRequest &request);
                void DescribeNamespacesAsync(const Model::DescribeNamespacesRequest& request, const DescribeNamespacesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeNamespacesOutcomeCallable DescribeNamespacesCallable(const Model::DescribeNamespacesRequest& request);

                /**
                 *创建或者更新 Ingress 规则
                 * @param req ModifyIngressRequest
                 * @return ModifyIngressOutcome
                 */
                ModifyIngressOutcome ModifyIngress(const Model::ModifyIngressRequest &request);
                void ModifyIngressAsync(const Model::ModifyIngressRequest& request, const ModifyIngressAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyIngressOutcomeCallable ModifyIngressCallable(const Model::ModifyIngressRequest& request);

                /**
                 *编辑命名空间
                 * @param req ModifyNamespaceRequest
                 * @return ModifyNamespaceOutcome
                 */
                ModifyNamespaceOutcome ModifyNamespace(const Model::ModifyNamespaceRequest &request);
                void ModifyNamespaceAsync(const Model::ModifyNamespaceRequest& request, const ModifyNamespaceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyNamespaceOutcomeCallable ModifyNamespaceCallable(const Model::ModifyNamespaceRequest& request);

            };
        }
    }
}

#endif // !TENCENTCLOUD_TEM_V20201221_TEMCLIENT_H_
