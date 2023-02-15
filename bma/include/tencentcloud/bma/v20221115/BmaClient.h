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

#ifndef TENCENTCLOUD_BMA_V20221115_BMACLIENT_H_
#define TENCENTCLOUD_BMA_V20221115_BMACLIENT_H_

#include <functional>
#include <future>
#include <tencentcloud/core/AbstractClient.h>
#include <tencentcloud/core/Credential.h>
#include <tencentcloud/core/profile/ClientProfile.h>
#include <tencentcloud/core/AsyncCallerContext.h>
#include <tencentcloud/bma/v20221115/model/CreateBPFakeAPPRequest.h>
#include <tencentcloud/bma/v20221115/model/CreateBPFakeAPPResponse.h>
#include <tencentcloud/bma/v20221115/model/CreateBPFakeAPPListRequest.h>
#include <tencentcloud/bma/v20221115/model/CreateBPFakeAPPListResponse.h>
#include <tencentcloud/bma/v20221115/model/CreateBPFakeURLRequest.h>
#include <tencentcloud/bma/v20221115/model/CreateBPFakeURLResponse.h>
#include <tencentcloud/bma/v20221115/model/CreateBPFakeURLsRequest.h>
#include <tencentcloud/bma/v20221115/model/CreateBPFakeURLsResponse.h>


namespace TencentCloud
{
    namespace Bma
    {
        namespace V20221115
        {
            class BmaClient : public AbstractClient
            {
            public:
                BmaClient(const Credential &credential, const std::string &region);
                BmaClient(const Credential &credential, const std::string &region, const ClientProfile &profile);

                typedef Outcome<Core::Error, Model::CreateBPFakeAPPResponse> CreateBPFakeAPPOutcome;
                typedef std::future<CreateBPFakeAPPOutcome> CreateBPFakeAPPOutcomeCallable;
                typedef std::function<void(const BmaClient*, const Model::CreateBPFakeAPPRequest&, CreateBPFakeAPPOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateBPFakeAPPAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateBPFakeAPPListResponse> CreateBPFakeAPPListOutcome;
                typedef std::future<CreateBPFakeAPPListOutcome> CreateBPFakeAPPListOutcomeCallable;
                typedef std::function<void(const BmaClient*, const Model::CreateBPFakeAPPListRequest&, CreateBPFakeAPPListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateBPFakeAPPListAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateBPFakeURLResponse> CreateBPFakeURLOutcome;
                typedef std::future<CreateBPFakeURLOutcome> CreateBPFakeURLOutcomeCallable;
                typedef std::function<void(const BmaClient*, const Model::CreateBPFakeURLRequest&, CreateBPFakeURLOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateBPFakeURLAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateBPFakeURLsResponse> CreateBPFakeURLsOutcome;
                typedef std::future<CreateBPFakeURLsOutcome> CreateBPFakeURLsOutcomeCallable;
                typedef std::function<void(const BmaClient*, const Model::CreateBPFakeURLsRequest&, CreateBPFakeURLsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateBPFakeURLsAsyncHandler;



                /**
                 *仿冒应用举报
                 * @param req CreateBPFakeAPPRequest
                 * @return CreateBPFakeAPPOutcome
                 */
                CreateBPFakeAPPOutcome CreateBPFakeAPP(const Model::CreateBPFakeAPPRequest &request);
                void CreateBPFakeAPPAsync(const Model::CreateBPFakeAPPRequest& request, const CreateBPFakeAPPAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateBPFakeAPPOutcomeCallable CreateBPFakeAPPCallable(const Model::CreateBPFakeAPPRequest& request);

                /**
                 *批量仿冒应用举报
                 * @param req CreateBPFakeAPPListRequest
                 * @return CreateBPFakeAPPListOutcome
                 */
                CreateBPFakeAPPListOutcome CreateBPFakeAPPList(const Model::CreateBPFakeAPPListRequest &request);
                void CreateBPFakeAPPListAsync(const Model::CreateBPFakeAPPListRequest& request, const CreateBPFakeAPPListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateBPFakeAPPListOutcomeCallable CreateBPFakeAPPListCallable(const Model::CreateBPFakeAPPListRequest& request);

                /**
                 *仿冒网址举报
                 * @param req CreateBPFakeURLRequest
                 * @return CreateBPFakeURLOutcome
                 */
                CreateBPFakeURLOutcome CreateBPFakeURL(const Model::CreateBPFakeURLRequest &request);
                void CreateBPFakeURLAsync(const Model::CreateBPFakeURLRequest& request, const CreateBPFakeURLAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateBPFakeURLOutcomeCallable CreateBPFakeURLCallable(const Model::CreateBPFakeURLRequest& request);

                /**
                 *批量仿冒网址举报
                 * @param req CreateBPFakeURLsRequest
                 * @return CreateBPFakeURLsOutcome
                 */
                CreateBPFakeURLsOutcome CreateBPFakeURLs(const Model::CreateBPFakeURLsRequest &request);
                void CreateBPFakeURLsAsync(const Model::CreateBPFakeURLsRequest& request, const CreateBPFakeURLsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateBPFakeURLsOutcomeCallable CreateBPFakeURLsCallable(const Model::CreateBPFakeURLsRequest& request);

            };
        }
    }
}

#endif // !TENCENTCLOUD_BMA_V20221115_BMACLIENT_H_
