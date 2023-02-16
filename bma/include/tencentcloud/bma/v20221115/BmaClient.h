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
#include <tencentcloud/bma/v20221115/model/CreateBPBrandRequest.h>
#include <tencentcloud/bma/v20221115/model/CreateBPBrandResponse.h>
#include <tencentcloud/bma/v20221115/model/CreateBPFakeAPPRequest.h>
#include <tencentcloud/bma/v20221115/model/CreateBPFakeAPPResponse.h>
#include <tencentcloud/bma/v20221115/model/CreateBPFakeAPPListRequest.h>
#include <tencentcloud/bma/v20221115/model/CreateBPFakeAPPListResponse.h>
#include <tencentcloud/bma/v20221115/model/CreateBPFakeURLRequest.h>
#include <tencentcloud/bma/v20221115/model/CreateBPFakeURLResponse.h>
#include <tencentcloud/bma/v20221115/model/CreateBPFakeURLsRequest.h>
#include <tencentcloud/bma/v20221115/model/CreateBPFakeURLsResponse.h>
#include <tencentcloud/bma/v20221115/model/CreateBPWhiteListRequest.h>
#include <tencentcloud/bma/v20221115/model/CreateBPWhiteListResponse.h>
#include <tencentcloud/bma/v20221115/model/DeleteBPWhiteListRequest.h>
#include <tencentcloud/bma/v20221115/model/DeleteBPWhiteListResponse.h>
#include <tencentcloud/bma/v20221115/model/DescribeBPBrandsRequest.h>
#include <tencentcloud/bma/v20221115/model/DescribeBPBrandsResponse.h>
#include <tencentcloud/bma/v20221115/model/DescribeBPFakeAPPListRequest.h>
#include <tencentcloud/bma/v20221115/model/DescribeBPFakeAPPListResponse.h>
#include <tencentcloud/bma/v20221115/model/DescribeBPFakeURLsRequest.h>
#include <tencentcloud/bma/v20221115/model/DescribeBPFakeURLsResponse.h>
#include <tencentcloud/bma/v20221115/model/DescribeBPWhiteListsRequest.h>
#include <tencentcloud/bma/v20221115/model/DescribeBPWhiteListsResponse.h>


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

                typedef Outcome<Core::Error, Model::CreateBPBrandResponse> CreateBPBrandOutcome;
                typedef std::future<CreateBPBrandOutcome> CreateBPBrandOutcomeCallable;
                typedef std::function<void(const BmaClient*, const Model::CreateBPBrandRequest&, CreateBPBrandOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateBPBrandAsyncHandler;
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
                typedef Outcome<Core::Error, Model::CreateBPWhiteListResponse> CreateBPWhiteListOutcome;
                typedef std::future<CreateBPWhiteListOutcome> CreateBPWhiteListOutcomeCallable;
                typedef std::function<void(const BmaClient*, const Model::CreateBPWhiteListRequest&, CreateBPWhiteListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateBPWhiteListAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteBPWhiteListResponse> DeleteBPWhiteListOutcome;
                typedef std::future<DeleteBPWhiteListOutcome> DeleteBPWhiteListOutcomeCallable;
                typedef std::function<void(const BmaClient*, const Model::DeleteBPWhiteListRequest&, DeleteBPWhiteListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteBPWhiteListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeBPBrandsResponse> DescribeBPBrandsOutcome;
                typedef std::future<DescribeBPBrandsOutcome> DescribeBPBrandsOutcomeCallable;
                typedef std::function<void(const BmaClient*, const Model::DescribeBPBrandsRequest&, DescribeBPBrandsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeBPBrandsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeBPFakeAPPListResponse> DescribeBPFakeAPPListOutcome;
                typedef std::future<DescribeBPFakeAPPListOutcome> DescribeBPFakeAPPListOutcomeCallable;
                typedef std::function<void(const BmaClient*, const Model::DescribeBPFakeAPPListRequest&, DescribeBPFakeAPPListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeBPFakeAPPListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeBPFakeURLsResponse> DescribeBPFakeURLsOutcome;
                typedef std::future<DescribeBPFakeURLsOutcome> DescribeBPFakeURLsOutcomeCallable;
                typedef std::function<void(const BmaClient*, const Model::DescribeBPFakeURLsRequest&, DescribeBPFakeURLsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeBPFakeURLsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeBPWhiteListsResponse> DescribeBPWhiteListsOutcome;
                typedef std::future<DescribeBPWhiteListsOutcome> DescribeBPWhiteListsOutcomeCallable;
                typedef std::function<void(const BmaClient*, const Model::DescribeBPWhiteListsRequest&, DescribeBPWhiteListsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeBPWhiteListsAsyncHandler;



                /**
                 *添加品牌
                 * @param req CreateBPBrandRequest
                 * @return CreateBPBrandOutcome
                 */
                CreateBPBrandOutcome CreateBPBrand(const Model::CreateBPBrandRequest &request);
                void CreateBPBrandAsync(const Model::CreateBPBrandRequest& request, const CreateBPBrandAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateBPBrandOutcomeCallable CreateBPBrandCallable(const Model::CreateBPBrandRequest& request);

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

                /**
                 *添加白名单
                 * @param req CreateBPWhiteListRequest
                 * @return CreateBPWhiteListOutcome
                 */
                CreateBPWhiteListOutcome CreateBPWhiteList(const Model::CreateBPWhiteListRequest &request);
                void CreateBPWhiteListAsync(const Model::CreateBPWhiteListRequest& request, const CreateBPWhiteListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateBPWhiteListOutcomeCallable CreateBPWhiteListCallable(const Model::CreateBPWhiteListRequest& request);

                /**
                 *删除白名单
                 * @param req DeleteBPWhiteListRequest
                 * @return DeleteBPWhiteListOutcome
                 */
                DeleteBPWhiteListOutcome DeleteBPWhiteList(const Model::DeleteBPWhiteListRequest &request);
                void DeleteBPWhiteListAsync(const Model::DeleteBPWhiteListRequest& request, const DeleteBPWhiteListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteBPWhiteListOutcomeCallable DeleteBPWhiteListCallable(const Model::DeleteBPWhiteListRequest& request);

                /**
                 *查询品牌列表
                 * @param req DescribeBPBrandsRequest
                 * @return DescribeBPBrandsOutcome
                 */
                DescribeBPBrandsOutcome DescribeBPBrands(const Model::DescribeBPBrandsRequest &request);
                void DescribeBPBrandsAsync(const Model::DescribeBPBrandsRequest& request, const DescribeBPBrandsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeBPBrandsOutcomeCallable DescribeBPBrandsCallable(const Model::DescribeBPBrandsRequest& request);

                /**
                 *查询仿冒应用列表
                 * @param req DescribeBPFakeAPPListRequest
                 * @return DescribeBPFakeAPPListOutcome
                 */
                DescribeBPFakeAPPListOutcome DescribeBPFakeAPPList(const Model::DescribeBPFakeAPPListRequest &request);
                void DescribeBPFakeAPPListAsync(const Model::DescribeBPFakeAPPListRequest& request, const DescribeBPFakeAPPListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeBPFakeAPPListOutcomeCallable DescribeBPFakeAPPListCallable(const Model::DescribeBPFakeAPPListRequest& request);

                /**
                 *查询仿冒网址列表
                 * @param req DescribeBPFakeURLsRequest
                 * @return DescribeBPFakeURLsOutcome
                 */
                DescribeBPFakeURLsOutcome DescribeBPFakeURLs(const Model::DescribeBPFakeURLsRequest &request);
                void DescribeBPFakeURLsAsync(const Model::DescribeBPFakeURLsRequest& request, const DescribeBPFakeURLsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeBPFakeURLsOutcomeCallable DescribeBPFakeURLsCallable(const Model::DescribeBPFakeURLsRequest& request);

                /**
                 *查询白名单列表
                 * @param req DescribeBPWhiteListsRequest
                 * @return DescribeBPWhiteListsOutcome
                 */
                DescribeBPWhiteListsOutcome DescribeBPWhiteLists(const Model::DescribeBPWhiteListsRequest &request);
                void DescribeBPWhiteListsAsync(const Model::DescribeBPWhiteListsRequest& request, const DescribeBPWhiteListsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeBPWhiteListsOutcomeCallable DescribeBPWhiteListsCallable(const Model::DescribeBPWhiteListsRequest& request);

            };
        }
    }
}

#endif // !TENCENTCLOUD_BMA_V20221115_BMACLIENT_H_
