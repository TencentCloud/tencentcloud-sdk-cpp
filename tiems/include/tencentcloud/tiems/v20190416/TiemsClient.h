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

#ifndef TENCENTCLOUD_TIEMS_V20190416_TIEMSCLIENT_H_
#define TENCENTCLOUD_TIEMS_V20190416_TIEMSCLIENT_H_

#include <functional>
#include <future>
#include <tencentcloud/core/AbstractClient.h>
#include <tencentcloud/core/Credential.h>
#include <tencentcloud/core/profile/ClientProfile.h>
#include <tencentcloud/core/AsyncCallerContext.h>
#include <tencentcloud/tiems/v20190416/model/CreateServiceRequest.h>
#include <tencentcloud/tiems/v20190416/model/CreateServiceResponse.h>
#include <tencentcloud/tiems/v20190416/model/CreateServiceConfigRequest.h>
#include <tencentcloud/tiems/v20190416/model/CreateServiceConfigResponse.h>
#include <tencentcloud/tiems/v20190416/model/DeleteServiceRequest.h>
#include <tencentcloud/tiems/v20190416/model/DeleteServiceResponse.h>
#include <tencentcloud/tiems/v20190416/model/DeleteServiceConfigRequest.h>
#include <tencentcloud/tiems/v20190416/model/DeleteServiceConfigResponse.h>
#include <tencentcloud/tiems/v20190416/model/DescribeRuntimesRequest.h>
#include <tencentcloud/tiems/v20190416/model/DescribeRuntimesResponse.h>
#include <tencentcloud/tiems/v20190416/model/DescribeServiceConfigsRequest.h>
#include <tencentcloud/tiems/v20190416/model/DescribeServiceConfigsResponse.h>
#include <tencentcloud/tiems/v20190416/model/DescribeServicesRequest.h>
#include <tencentcloud/tiems/v20190416/model/DescribeServicesResponse.h>
#include <tencentcloud/tiems/v20190416/model/UpdateServiceRequest.h>
#include <tencentcloud/tiems/v20190416/model/UpdateServiceResponse.h>


namespace TencentCloud
{
    namespace Tiems
    {
        namespace V20190416
        {
            class TiemsClient : public AbstractClient
            {
            public:
                TiemsClient(const Credential &credential, const std::string &region);
                TiemsClient(const Credential &credential, const std::string &region, const ClientProfile &profile);

                typedef Outcome<Error, Model::CreateServiceResponse> CreateServiceOutcome;
                typedef std::future<CreateServiceOutcome> CreateServiceOutcomeCallable;
                typedef std::function<void(const TiemsClient*, const Model::CreateServiceRequest&, CreateServiceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateServiceAsyncHandler;
                typedef Outcome<Error, Model::CreateServiceConfigResponse> CreateServiceConfigOutcome;
                typedef std::future<CreateServiceConfigOutcome> CreateServiceConfigOutcomeCallable;
                typedef std::function<void(const TiemsClient*, const Model::CreateServiceConfigRequest&, CreateServiceConfigOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateServiceConfigAsyncHandler;
                typedef Outcome<Error, Model::DeleteServiceResponse> DeleteServiceOutcome;
                typedef std::future<DeleteServiceOutcome> DeleteServiceOutcomeCallable;
                typedef std::function<void(const TiemsClient*, const Model::DeleteServiceRequest&, DeleteServiceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteServiceAsyncHandler;
                typedef Outcome<Error, Model::DeleteServiceConfigResponse> DeleteServiceConfigOutcome;
                typedef std::future<DeleteServiceConfigOutcome> DeleteServiceConfigOutcomeCallable;
                typedef std::function<void(const TiemsClient*, const Model::DeleteServiceConfigRequest&, DeleteServiceConfigOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteServiceConfigAsyncHandler;
                typedef Outcome<Error, Model::DescribeRuntimesResponse> DescribeRuntimesOutcome;
                typedef std::future<DescribeRuntimesOutcome> DescribeRuntimesOutcomeCallable;
                typedef std::function<void(const TiemsClient*, const Model::DescribeRuntimesRequest&, DescribeRuntimesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeRuntimesAsyncHandler;
                typedef Outcome<Error, Model::DescribeServiceConfigsResponse> DescribeServiceConfigsOutcome;
                typedef std::future<DescribeServiceConfigsOutcome> DescribeServiceConfigsOutcomeCallable;
                typedef std::function<void(const TiemsClient*, const Model::DescribeServiceConfigsRequest&, DescribeServiceConfigsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeServiceConfigsAsyncHandler;
                typedef Outcome<Error, Model::DescribeServicesResponse> DescribeServicesOutcome;
                typedef std::future<DescribeServicesOutcome> DescribeServicesOutcomeCallable;
                typedef std::function<void(const TiemsClient*, const Model::DescribeServicesRequest&, DescribeServicesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeServicesAsyncHandler;
                typedef Outcome<Error, Model::UpdateServiceResponse> UpdateServiceOutcome;
                typedef std::future<UpdateServiceOutcome> UpdateServiceOutcomeCallable;
                typedef std::function<void(const TiemsClient*, const Model::UpdateServiceRequest&, UpdateServiceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> UpdateServiceAsyncHandler;



                /**
                 *创建服务
                 * @param req CreateServiceRequest
                 * @return CreateServiceOutcome
                 */
                CreateServiceOutcome CreateService(const Model::CreateServiceRequest &request);
                void CreateServiceAsync(const Model::CreateServiceRequest& request, const CreateServiceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateServiceOutcomeCallable CreateServiceCallable(const Model::CreateServiceRequest& request);

                /**
                 *创建服务配置
                 * @param req CreateServiceConfigRequest
                 * @return CreateServiceConfigOutcome
                 */
                CreateServiceConfigOutcome CreateServiceConfig(const Model::CreateServiceConfigRequest &request);
                void CreateServiceConfigAsync(const Model::CreateServiceConfigRequest& request, const CreateServiceConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateServiceConfigOutcomeCallable CreateServiceConfigCallable(const Model::CreateServiceConfigRequest& request);

                /**
                 *删除服务
                 * @param req DeleteServiceRequest
                 * @return DeleteServiceOutcome
                 */
                DeleteServiceOutcome DeleteService(const Model::DeleteServiceRequest &request);
                void DeleteServiceAsync(const Model::DeleteServiceRequest& request, const DeleteServiceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteServiceOutcomeCallable DeleteServiceCallable(const Model::DeleteServiceRequest& request);

                /**
                 *删除服务配置
                 * @param req DeleteServiceConfigRequest
                 * @return DeleteServiceConfigOutcome
                 */
                DeleteServiceConfigOutcome DeleteServiceConfig(const Model::DeleteServiceConfigRequest &request);
                void DeleteServiceConfigAsync(const Model::DeleteServiceConfigRequest& request, const DeleteServiceConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteServiceConfigOutcomeCallable DeleteServiceConfigCallable(const Model::DeleteServiceConfigRequest& request);

                /**
                 *描述服务运行环境
                 * @param req DescribeRuntimesRequest
                 * @return DescribeRuntimesOutcome
                 */
                DescribeRuntimesOutcome DescribeRuntimes(const Model::DescribeRuntimesRequest &request);
                void DescribeRuntimesAsync(const Model::DescribeRuntimesRequest& request, const DescribeRuntimesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeRuntimesOutcomeCallable DescribeRuntimesCallable(const Model::DescribeRuntimesRequest& request);

                /**
                 *描述服务配置
                 * @param req DescribeServiceConfigsRequest
                 * @return DescribeServiceConfigsOutcome
                 */
                DescribeServiceConfigsOutcome DescribeServiceConfigs(const Model::DescribeServiceConfigsRequest &request);
                void DescribeServiceConfigsAsync(const Model::DescribeServiceConfigsRequest& request, const DescribeServiceConfigsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeServiceConfigsOutcomeCallable DescribeServiceConfigsCallable(const Model::DescribeServiceConfigsRequest& request);

                /**
                 *描述服务
                 * @param req DescribeServicesRequest
                 * @return DescribeServicesOutcome
                 */
                DescribeServicesOutcome DescribeServices(const Model::DescribeServicesRequest &request);
                void DescribeServicesAsync(const Model::DescribeServicesRequest& request, const DescribeServicesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeServicesOutcomeCallable DescribeServicesCallable(const Model::DescribeServicesRequest& request);

                /**
                 *更新服务
                 * @param req UpdateServiceRequest
                 * @return UpdateServiceOutcome
                 */
                UpdateServiceOutcome UpdateService(const Model::UpdateServiceRequest &request);
                void UpdateServiceAsync(const Model::UpdateServiceRequest& request, const UpdateServiceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                UpdateServiceOutcomeCallable UpdateServiceCallable(const Model::UpdateServiceRequest& request);

            };
        }
    }
}

#endif // !TENCENTCLOUD_TIEMS_V20190416_TIEMSCLIENT_H_
