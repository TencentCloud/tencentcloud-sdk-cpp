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

#ifndef TENCENTCLOUD_VPC_V20170312_VPCCLIENT_H_
#define TENCENTCLOUD_VPC_V20170312_VPCCLIENT_H_

#include <functional>
#include <future>
#include <tencentcloud/core/AbstractClient.h>
#include <tencentcloud/core/Credential.h>
#include <tencentcloud/core/profile/ClientProfile.h>
#include <tencentcloud/core/AsyncCallerContext.h>
#include <tencentcloud/vpc/v20170312/model/DescribeNatsEipsInternalRequest.h>
#include <tencentcloud/vpc/v20170312/model/DescribeNatsEipsInternalResponse.h>


namespace TencentCloud
{
    namespace Vpc
    {
        namespace V20170312
        {
            class VpcClient : public AbstractClient
            {
            public:
                VpcClient(const Credential &credential, const std::string &region);
                VpcClient(const Credential &credential, const std::string &region, const ClientProfile &profile);

                typedef Outcome<Core::Error, Model::DescribeNatsEipsInternalResponse> DescribeNatsEipsInternalOutcome;
                typedef std::future<DescribeNatsEipsInternalOutcome> DescribeNatsEipsInternalOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::DescribeNatsEipsInternalRequest&, DescribeNatsEipsInternalOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeNatsEipsInternalAsyncHandler;



                /**
                 *内部用户查询所有NAT网关的EIP IP列表信息
                 * @param req DescribeNatsEipsInternalRequest
                 * @return DescribeNatsEipsInternalOutcome
                 */
                DescribeNatsEipsInternalOutcome DescribeNatsEipsInternal(const Model::DescribeNatsEipsInternalRequest &request);
                void DescribeNatsEipsInternalAsync(const Model::DescribeNatsEipsInternalRequest& request, const DescribeNatsEipsInternalAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeNatsEipsInternalOutcomeCallable DescribeNatsEipsInternalCallable(const Model::DescribeNatsEipsInternalRequest& request);

            };
        }
    }
}

#endif // !TENCENTCLOUD_VPC_V20170312_VPCCLIENT_H_
