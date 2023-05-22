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

#ifndef TENCENTCLOUD_CSXG_V20230303_CSXGCLIENT_H_
#define TENCENTCLOUD_CSXG_V20230303_CSXGCLIENT_H_

#include <functional>
#include <future>
#include <tencentcloud/core/AbstractClient.h>
#include <tencentcloud/core/Credential.h>
#include <tencentcloud/core/profile/ClientProfile.h>
#include <tencentcloud/core/AsyncCallerContext.h>
#include <tencentcloud/csxg/v20230303/model/Create5GInstanceRequest.h>
#include <tencentcloud/csxg/v20230303/model/Create5GInstanceResponse.h>
#include <tencentcloud/csxg/v20230303/model/Delete5GInstanceRequest.h>
#include <tencentcloud/csxg/v20230303/model/Delete5GInstanceResponse.h>
#include <tencentcloud/csxg/v20230303/model/Describe5GAPNsRequest.h>
#include <tencentcloud/csxg/v20230303/model/Describe5GAPNsResponse.h>
#include <tencentcloud/csxg/v20230303/model/Describe5GInstancesRequest.h>
#include <tencentcloud/csxg/v20230303/model/Describe5GInstancesResponse.h>
#include <tencentcloud/csxg/v20230303/model/Modify5GInstanceAttributeRequest.h>
#include <tencentcloud/csxg/v20230303/model/Modify5GInstanceAttributeResponse.h>


namespace TencentCloud
{
    namespace Csxg
    {
        namespace V20230303
        {
            class CsxgClient : public AbstractClient
            {
            public:
                CsxgClient(const Credential &credential, const std::string &region);
                CsxgClient(const Credential &credential, const std::string &region, const ClientProfile &profile);

                typedef Outcome<Core::Error, Model::Create5GInstanceResponse> Create5GInstanceOutcome;
                typedef std::future<Create5GInstanceOutcome> Create5GInstanceOutcomeCallable;
                typedef std::function<void(const CsxgClient*, const Model::Create5GInstanceRequest&, Create5GInstanceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> Create5GInstanceAsyncHandler;
                typedef Outcome<Core::Error, Model::Delete5GInstanceResponse> Delete5GInstanceOutcome;
                typedef std::future<Delete5GInstanceOutcome> Delete5GInstanceOutcomeCallable;
                typedef std::function<void(const CsxgClient*, const Model::Delete5GInstanceRequest&, Delete5GInstanceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> Delete5GInstanceAsyncHandler;
                typedef Outcome<Core::Error, Model::Describe5GAPNsResponse> Describe5GAPNsOutcome;
                typedef std::future<Describe5GAPNsOutcome> Describe5GAPNsOutcomeCallable;
                typedef std::function<void(const CsxgClient*, const Model::Describe5GAPNsRequest&, Describe5GAPNsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> Describe5GAPNsAsyncHandler;
                typedef Outcome<Core::Error, Model::Describe5GInstancesResponse> Describe5GInstancesOutcome;
                typedef std::future<Describe5GInstancesOutcome> Describe5GInstancesOutcomeCallable;
                typedef std::function<void(const CsxgClient*, const Model::Describe5GInstancesRequest&, Describe5GInstancesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> Describe5GInstancesAsyncHandler;
                typedef Outcome<Core::Error, Model::Modify5GInstanceAttributeResponse> Modify5GInstanceAttributeOutcome;
                typedef std::future<Modify5GInstanceAttributeOutcome> Modify5GInstanceAttributeOutcomeCallable;
                typedef std::function<void(const CsxgClient*, const Model::Modify5GInstanceAttributeRequest&, Modify5GInstanceAttributeOutcome, const std::shared_ptr<const AsyncCallerContext>&)> Modify5GInstanceAttributeAsyncHandler;



                /**
                 *创建5G入云服务接口
                 * @param req Create5GInstanceRequest
                 * @return Create5GInstanceOutcome
                 */
                Create5GInstanceOutcome Create5GInstance(const Model::Create5GInstanceRequest &request);
                void Create5GInstanceAsync(const Model::Create5GInstanceRequest& request, const Create5GInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                Create5GInstanceOutcomeCallable Create5GInstanceCallable(const Model::Create5GInstanceRequest& request);

                /**
                 *删除5G入云服务
                 * @param req Delete5GInstanceRequest
                 * @return Delete5GInstanceOutcome
                 */
                Delete5GInstanceOutcome Delete5GInstance(const Model::Delete5GInstanceRequest &request);
                void Delete5GInstanceAsync(const Model::Delete5GInstanceRequest& request, const Delete5GInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                Delete5GInstanceOutcomeCallable Delete5GInstanceCallable(const Model::Delete5GInstanceRequest& request);

                /**
                 *查询APN信息
                 * @param req Describe5GAPNsRequest
                 * @return Describe5GAPNsOutcome
                 */
                Describe5GAPNsOutcome Describe5GAPNs(const Model::Describe5GAPNsRequest &request);
                void Describe5GAPNsAsync(const Model::Describe5GAPNsRequest& request, const Describe5GAPNsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                Describe5GAPNsOutcomeCallable Describe5GAPNsCallable(const Model::Describe5GAPNsRequest& request);

                /**
                 *查询5G入云服务
                 * @param req Describe5GInstancesRequest
                 * @return Describe5GInstancesOutcome
                 */
                Describe5GInstancesOutcome Describe5GInstances(const Model::Describe5GInstancesRequest &request);
                void Describe5GInstancesAsync(const Model::Describe5GInstancesRequest& request, const Describe5GInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                Describe5GInstancesOutcomeCallable Describe5GInstancesCallable(const Model::Describe5GInstancesRequest& request);

                /**
                 *修改5G入云服务
                 * @param req Modify5GInstanceAttributeRequest
                 * @return Modify5GInstanceAttributeOutcome
                 */
                Modify5GInstanceAttributeOutcome Modify5GInstanceAttribute(const Model::Modify5GInstanceAttributeRequest &request);
                void Modify5GInstanceAttributeAsync(const Model::Modify5GInstanceAttributeRequest& request, const Modify5GInstanceAttributeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                Modify5GInstanceAttributeOutcomeCallable Modify5GInstanceAttributeCallable(const Model::Modify5GInstanceAttributeRequest& request);

            };
        }
    }
}

#endif // !TENCENTCLOUD_CSXG_V20230303_CSXGCLIENT_H_
