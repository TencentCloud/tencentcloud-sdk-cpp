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

#ifndef TENCENTCLOUD_DSGC_V20190723_DSGCCLIENT_H_
#define TENCENTCLOUD_DSGC_V20190723_DSGCCLIENT_H_

#include <functional>
#include <future>
#include <tencentcloud/core/AbstractClient.h>
#include <tencentcloud/core/Credential.h>
#include <tencentcloud/core/profile/ClientProfile.h>
#include <tencentcloud/core/AsyncCallerContext.h>
#include <tencentcloud/dsgc/v20190723/model/CreateDSPADbMetaResourcesRequest.h>
#include <tencentcloud/dsgc/v20190723/model/CreateDSPADbMetaResourcesResponse.h>


namespace TencentCloud
{
    namespace Dsgc
    {
        namespace V20190723
        {
            class DsgcClient : public AbstractClient
            {
            public:
                DsgcClient(const Credential &credential, const std::string &region);
                DsgcClient(const Credential &credential, const std::string &region, const ClientProfile &profile);

                typedef Outcome<Core::Error, Model::CreateDSPADbMetaResourcesResponse> CreateDSPADbMetaResourcesOutcome;
                typedef std::future<CreateDSPADbMetaResourcesOutcome> CreateDSPADbMetaResourcesOutcomeCallable;
                typedef std::function<void(const DsgcClient*, const Model::CreateDSPADbMetaResourcesRequest&, CreateDSPADbMetaResourcesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateDSPADbMetaResourcesAsyncHandler;



                /**
                 *添加用户云上数据库类型资源
                 * @param req CreateDSPADbMetaResourcesRequest
                 * @return CreateDSPADbMetaResourcesOutcome
                 */
                CreateDSPADbMetaResourcesOutcome CreateDSPADbMetaResources(const Model::CreateDSPADbMetaResourcesRequest &request);
                void CreateDSPADbMetaResourcesAsync(const Model::CreateDSPADbMetaResourcesRequest& request, const CreateDSPADbMetaResourcesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateDSPADbMetaResourcesOutcomeCallable CreateDSPADbMetaResourcesCallable(const Model::CreateDSPADbMetaResourcesRequest& request);

            };
        }
    }
}

#endif // !TENCENTCLOUD_DSGC_V20190723_DSGCCLIENT_H_
