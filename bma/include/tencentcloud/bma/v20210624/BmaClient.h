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

#ifndef TENCENTCLOUD_BMA_V20210624_BMACLIENT_H_
#define TENCENTCLOUD_BMA_V20210624_BMACLIENT_H_

#include <functional>
#include <future>
#include <tencentcloud/core/AbstractClient.h>
#include <tencentcloud/core/Credential.h>
#include <tencentcloud/core/profile/ClientProfile.h>
#include <tencentcloud/core/AsyncCallerContext.h>
#include <tencentcloud/bma/v20210624/model/CreateCRBlockRequest.h>
#include <tencentcloud/bma/v20210624/model/CreateCRBlockResponse.h>
#include <tencentcloud/bma/v20210624/model/CreateCRCompanyVerifyRequest.h>
#include <tencentcloud/bma/v20210624/model/CreateCRCompanyVerifyResponse.h>
#include <tencentcloud/bma/v20210624/model/CreateCRRightRequest.h>
#include <tencentcloud/bma/v20210624/model/CreateCRRightResponse.h>
#include <tencentcloud/bma/v20210624/model/DescribeCRWorkInfoRequest.h>
#include <tencentcloud/bma/v20210624/model/DescribeCRWorkInfoResponse.h>


namespace TencentCloud
{
    namespace Bma
    {
        namespace V20210624
        {
            class BmaClient : public AbstractClient
            {
            public:
                BmaClient(const Credential &credential, const std::string &region);
                BmaClient(const Credential &credential, const std::string &region, const ClientProfile &profile);

                typedef Outcome<Core::Error, Model::CreateCRBlockResponse> CreateCRBlockOutcome;
                typedef std::future<CreateCRBlockOutcome> CreateCRBlockOutcomeCallable;
                typedef std::function<void(const BmaClient*, const Model::CreateCRBlockRequest&, CreateCRBlockOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateCRBlockAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateCRCompanyVerifyResponse> CreateCRCompanyVerifyOutcome;
                typedef std::future<CreateCRCompanyVerifyOutcome> CreateCRCompanyVerifyOutcomeCallable;
                typedef std::function<void(const BmaClient*, const Model::CreateCRCompanyVerifyRequest&, CreateCRCompanyVerifyOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateCRCompanyVerifyAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateCRRightResponse> CreateCRRightOutcome;
                typedef std::future<CreateCRRightOutcome> CreateCRRightOutcomeCallable;
                typedef std::function<void(const BmaClient*, const Model::CreateCRRightRequest&, CreateCRRightOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateCRRightAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeCRWorkInfoResponse> DescribeCRWorkInfoOutcome;
                typedef std::future<DescribeCRWorkInfoOutcome> DescribeCRWorkInfoOutcomeCallable;
                typedef std::function<void(const BmaClient*, const Model::DescribeCRWorkInfoRequest&, DescribeCRWorkInfoOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeCRWorkInfoAsyncHandler;



                /**
                 *版权保护-新建拦截接口
                 * @param req CreateCRBlockRequest
                 * @return CreateCRBlockOutcome
                 */
                CreateCRBlockOutcome CreateCRBlock(const Model::CreateCRBlockRequest &request);
                void CreateCRBlockAsync(const Model::CreateCRBlockRequest& request, const CreateCRBlockAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateCRBlockOutcomeCallable CreateCRBlockCallable(const Model::CreateCRBlockRequest& request);

                /**
                 *品牌经营管家-版权保护模块企业认证接口
                 * @param req CreateCRCompanyVerifyRequest
                 * @return CreateCRCompanyVerifyOutcome
                 */
                CreateCRCompanyVerifyOutcome CreateCRCompanyVerify(const Model::CreateCRCompanyVerifyRequest &request);
                void CreateCRCompanyVerifyAsync(const Model::CreateCRCompanyVerifyRequest& request, const CreateCRCompanyVerifyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateCRCompanyVerifyOutcomeCallable CreateCRCompanyVerifyCallable(const Model::CreateCRCompanyVerifyRequest& request);

                /**
                 *版权保护-新建发函接口
                 * @param req CreateCRRightRequest
                 * @return CreateCRRightOutcome
                 */
                CreateCRRightOutcome CreateCRRight(const Model::CreateCRRightRequest &request);
                void CreateCRRightAsync(const Model::CreateCRRightRequest& request, const CreateCRRightAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateCRRightOutcomeCallable CreateCRRightCallable(const Model::CreateCRRightRequest& request);

                /**
                 *查询作品基本信息
                 * @param req DescribeCRWorkInfoRequest
                 * @return DescribeCRWorkInfoOutcome
                 */
                DescribeCRWorkInfoOutcome DescribeCRWorkInfo(const Model::DescribeCRWorkInfoRequest &request);
                void DescribeCRWorkInfoAsync(const Model::DescribeCRWorkInfoRequest& request, const DescribeCRWorkInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeCRWorkInfoOutcomeCallable DescribeCRWorkInfoCallable(const Model::DescribeCRWorkInfoRequest& request);

            };
        }
    }
}

#endif // !TENCENTCLOUD_BMA_V20210624_BMACLIENT_H_
