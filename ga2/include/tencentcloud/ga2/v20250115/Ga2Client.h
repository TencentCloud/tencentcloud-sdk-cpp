/*
 * Copyright (c) 2017-2025 Tencent. All Rights Reserved.
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

#ifndef TENCENTCLOUD_GA2_V20250115_GA2CLIENT_H_
#define TENCENTCLOUD_GA2_V20250115_GA2CLIENT_H_

#include <functional>
#include <future>
#include <tencentcloud/core/AbstractClient.h>
#include <tencentcloud/core/Credential.h>
#include <tencentcloud/core/profile/ClientProfile.h>
#include <tencentcloud/core/AsyncCallerContext.h>
#include <tencentcloud/ga2/v20250115/model/CreateGlobalAcceleratorRequest.h>
#include <tencentcloud/ga2/v20250115/model/CreateGlobalAcceleratorResponse.h>
#include <tencentcloud/ga2/v20250115/model/DescribeCrossBorderSettlementRequest.h>
#include <tencentcloud/ga2/v20250115/model/DescribeCrossBorderSettlementResponse.h>


namespace TencentCloud
{
    namespace Ga2
    {
        namespace V20250115
        {
            class Ga2Client : public AbstractClient
            {
            public:
                Ga2Client(const Credential &credential, const std::string &region);
                Ga2Client(const Credential &credential, const std::string &region, const ClientProfile &profile);

                typedef Outcome<Core::Error, Model::CreateGlobalAcceleratorResponse> CreateGlobalAcceleratorOutcome;
                typedef std::future<CreateGlobalAcceleratorOutcome> CreateGlobalAcceleratorOutcomeCallable;
                typedef std::function<void(const Ga2Client*, const Model::CreateGlobalAcceleratorRequest&, CreateGlobalAcceleratorOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateGlobalAcceleratorAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeCrossBorderSettlementResponse> DescribeCrossBorderSettlementOutcome;
                typedef std::future<DescribeCrossBorderSettlementOutcome> DescribeCrossBorderSettlementOutcomeCallable;
                typedef std::function<void(const Ga2Client*, const Model::DescribeCrossBorderSettlementRequest&, DescribeCrossBorderSettlementOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeCrossBorderSettlementAsyncHandler;



                /**
                 *创建全球加速实例
                 * @param req CreateGlobalAcceleratorRequest
                 * @return CreateGlobalAcceleratorOutcome
                 */
                CreateGlobalAcceleratorOutcome CreateGlobalAccelerator(const Model::CreateGlobalAcceleratorRequest &request);
                void CreateGlobalAcceleratorAsync(const Model::CreateGlobalAcceleratorRequest& request, const CreateGlobalAcceleratorAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateGlobalAcceleratorOutcomeCallable CreateGlobalAcceleratorCallable(const Model::CreateGlobalAcceleratorRequest& request);

                /**
                 *查询跨境账单
                 * @param req DescribeCrossBorderSettlementRequest
                 * @return DescribeCrossBorderSettlementOutcome
                 */
                DescribeCrossBorderSettlementOutcome DescribeCrossBorderSettlement(const Model::DescribeCrossBorderSettlementRequest &request);
                void DescribeCrossBorderSettlementAsync(const Model::DescribeCrossBorderSettlementRequest& request, const DescribeCrossBorderSettlementAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeCrossBorderSettlementOutcomeCallable DescribeCrossBorderSettlementCallable(const Model::DescribeCrossBorderSettlementRequest& request);

            };
        }
    }
}

#endif // !TENCENTCLOUD_GA2_V20250115_GA2CLIENT_H_
