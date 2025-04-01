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

#ifndef TENCENTCLOUD_VOD_V20240718_VODCLIENT_H_
#define TENCENTCLOUD_VOD_V20240718_VODCLIENT_H_

#include <functional>
#include <future>
#include <tencentcloud/core/AbstractClient.h>
#include <tencentcloud/core/Credential.h>
#include <tencentcloud/core/profile/ClientProfile.h>
#include <tencentcloud/core/AsyncCallerContext.h>
#include <tencentcloud/vod/v20240718/model/CreateIncrementalMigrationStrategyRequest.h>
#include <tencentcloud/vod/v20240718/model/CreateIncrementalMigrationStrategyResponse.h>
#include <tencentcloud/vod/v20240718/model/CreateStorageRequest.h>
#include <tencentcloud/vod/v20240718/model/CreateStorageResponse.h>
#include <tencentcloud/vod/v20240718/model/CreateStorageCredentialsRequest.h>
#include <tencentcloud/vod/v20240718/model/CreateStorageCredentialsResponse.h>
#include <tencentcloud/vod/v20240718/model/DeleteIncrementalMigrationStrategyRequest.h>
#include <tencentcloud/vod/v20240718/model/DeleteIncrementalMigrationStrategyResponse.h>
#include <tencentcloud/vod/v20240718/model/DescribeIncrementalMigrationStrategyInfosRequest.h>
#include <tencentcloud/vod/v20240718/model/DescribeIncrementalMigrationStrategyInfosResponse.h>
#include <tencentcloud/vod/v20240718/model/DescribeStorageRequest.h>
#include <tencentcloud/vod/v20240718/model/DescribeStorageResponse.h>
#include <tencentcloud/vod/v20240718/model/ModifyIncrementalMigrationStrategyRequest.h>
#include <tencentcloud/vod/v20240718/model/ModifyIncrementalMigrationStrategyResponse.h>


namespace TencentCloud
{
    namespace Vod
    {
        namespace V20240718
        {
            class VodClient : public AbstractClient
            {
            public:
                VodClient(const Credential &credential, const std::string &region);
                VodClient(const Credential &credential, const std::string &region, const ClientProfile &profile);

                typedef Outcome<Core::Error, Model::CreateIncrementalMigrationStrategyResponse> CreateIncrementalMigrationStrategyOutcome;
                typedef std::future<CreateIncrementalMigrationStrategyOutcome> CreateIncrementalMigrationStrategyOutcomeCallable;
                typedef std::function<void(const VodClient*, const Model::CreateIncrementalMigrationStrategyRequest&, CreateIncrementalMigrationStrategyOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateIncrementalMigrationStrategyAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateStorageResponse> CreateStorageOutcome;
                typedef std::future<CreateStorageOutcome> CreateStorageOutcomeCallable;
                typedef std::function<void(const VodClient*, const Model::CreateStorageRequest&, CreateStorageOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateStorageAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateStorageCredentialsResponse> CreateStorageCredentialsOutcome;
                typedef std::future<CreateStorageCredentialsOutcome> CreateStorageCredentialsOutcomeCallable;
                typedef std::function<void(const VodClient*, const Model::CreateStorageCredentialsRequest&, CreateStorageCredentialsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateStorageCredentialsAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteIncrementalMigrationStrategyResponse> DeleteIncrementalMigrationStrategyOutcome;
                typedef std::future<DeleteIncrementalMigrationStrategyOutcome> DeleteIncrementalMigrationStrategyOutcomeCallable;
                typedef std::function<void(const VodClient*, const Model::DeleteIncrementalMigrationStrategyRequest&, DeleteIncrementalMigrationStrategyOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteIncrementalMigrationStrategyAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeIncrementalMigrationStrategyInfosResponse> DescribeIncrementalMigrationStrategyInfosOutcome;
                typedef std::future<DescribeIncrementalMigrationStrategyInfosOutcome> DescribeIncrementalMigrationStrategyInfosOutcomeCallable;
                typedef std::function<void(const VodClient*, const Model::DescribeIncrementalMigrationStrategyInfosRequest&, DescribeIncrementalMigrationStrategyInfosOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeIncrementalMigrationStrategyInfosAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeStorageResponse> DescribeStorageOutcome;
                typedef std::future<DescribeStorageOutcome> DescribeStorageOutcomeCallable;
                typedef std::function<void(const VodClient*, const Model::DescribeStorageRequest&, DescribeStorageOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeStorageAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyIncrementalMigrationStrategyResponse> ModifyIncrementalMigrationStrategyOutcome;
                typedef std::future<ModifyIncrementalMigrationStrategyOutcome> ModifyIncrementalMigrationStrategyOutcomeCallable;
                typedef std::function<void(const VodClient*, const Model::ModifyIncrementalMigrationStrategyRequest&, ModifyIncrementalMigrationStrategyOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyIncrementalMigrationStrategyAsyncHandler;



                /**
                 *创建增量迁移策略。
                 * @param req CreateIncrementalMigrationStrategyRequest
                 * @return CreateIncrementalMigrationStrategyOutcome
                 */
                CreateIncrementalMigrationStrategyOutcome CreateIncrementalMigrationStrategy(const Model::CreateIncrementalMigrationStrategyRequest &request);
                void CreateIncrementalMigrationStrategyAsync(const Model::CreateIncrementalMigrationStrategyRequest& request, const CreateIncrementalMigrationStrategyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateIncrementalMigrationStrategyOutcomeCallable CreateIncrementalMigrationStrategyCallable(const Model::CreateIncrementalMigrationStrategyRequest& request);

                /**
                 *该接口用于为专业版应用创建存储桶。

注：
- 本接口仅用于专业版应用；
- 客户创建点播专业版应用时，系统默认为客户开通了部分地域的存储，用户如果需要开通其它地域的存储，可以通过该接口进行开通；
- 通过 [DescribeStorageRegions](https://cloud.tencent.com/document/product/266/72480) 接口可以查询到所有存储地域及已经开通存储桶的地域。
                 * @param req CreateStorageRequest
                 * @return CreateStorageOutcome
                 */
                CreateStorageOutcome CreateStorage(const Model::CreateStorageRequest &request);
                void CreateStorageAsync(const Model::CreateStorageRequest& request, const CreateStorageAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateStorageOutcomeCallable CreateStorageCallable(const Model::CreateStorageRequest& request);

                /**
                 *用于按指定策略，生成专业版应用的临时访问凭证，比如生成用于客户端上传的临时凭证。
                 * @param req CreateStorageCredentialsRequest
                 * @return CreateStorageCredentialsOutcome
                 */
                CreateStorageCredentialsOutcome CreateStorageCredentials(const Model::CreateStorageCredentialsRequest &request);
                void CreateStorageCredentialsAsync(const Model::CreateStorageCredentialsRequest& request, const CreateStorageCredentialsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateStorageCredentialsOutcomeCallable CreateStorageCredentialsCallable(const Model::CreateStorageCredentialsRequest& request);

                /**
                 *删除增量迁移策略。
                 * @param req DeleteIncrementalMigrationStrategyRequest
                 * @return DeleteIncrementalMigrationStrategyOutcome
                 */
                DeleteIncrementalMigrationStrategyOutcome DeleteIncrementalMigrationStrategy(const Model::DeleteIncrementalMigrationStrategyRequest &request);
                void DeleteIncrementalMigrationStrategyAsync(const Model::DeleteIncrementalMigrationStrategyRequest& request, const DeleteIncrementalMigrationStrategyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteIncrementalMigrationStrategyOutcomeCallable DeleteIncrementalMigrationStrategyCallable(const Model::DeleteIncrementalMigrationStrategyRequest& request);

                /**
                 *查询增量迁移策略信息。
                 * @param req DescribeIncrementalMigrationStrategyInfosRequest
                 * @return DescribeIncrementalMigrationStrategyInfosOutcome
                 */
                DescribeIncrementalMigrationStrategyInfosOutcome DescribeIncrementalMigrationStrategyInfos(const Model::DescribeIncrementalMigrationStrategyInfosRequest &request);
                void DescribeIncrementalMigrationStrategyInfosAsync(const Model::DescribeIncrementalMigrationStrategyInfosRequest& request, const DescribeIncrementalMigrationStrategyInfosAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeIncrementalMigrationStrategyInfosOutcomeCallable DescribeIncrementalMigrationStrategyInfosCallable(const Model::DescribeIncrementalMigrationStrategyInfosRequest& request);

                /**
                 *该接口用于查询专业版应用中的存储桶信息，同时支持分页查询。

注：
- 本接口仅用于专业版应用。
                 * @param req DescribeStorageRequest
                 * @return DescribeStorageOutcome
                 */
                DescribeStorageOutcome DescribeStorage(const Model::DescribeStorageRequest &request);
                void DescribeStorageAsync(const Model::DescribeStorageRequest& request, const DescribeStorageAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeStorageOutcomeCallable DescribeStorageCallable(const Model::DescribeStorageRequest& request);

                /**
                 *创建增量迁移策略。
                 * @param req ModifyIncrementalMigrationStrategyRequest
                 * @return ModifyIncrementalMigrationStrategyOutcome
                 */
                ModifyIncrementalMigrationStrategyOutcome ModifyIncrementalMigrationStrategy(const Model::ModifyIncrementalMigrationStrategyRequest &request);
                void ModifyIncrementalMigrationStrategyAsync(const Model::ModifyIncrementalMigrationStrategyRequest& request, const ModifyIncrementalMigrationStrategyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyIncrementalMigrationStrategyOutcomeCallable ModifyIncrementalMigrationStrategyCallable(const Model::ModifyIncrementalMigrationStrategyRequest& request);

            };
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20240718_VODCLIENT_H_
