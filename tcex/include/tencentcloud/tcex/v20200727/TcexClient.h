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

#ifndef TENCENTCLOUD_TCEX_V20200727_TCEXCLIENT_H_
#define TENCENTCLOUD_TCEX_V20200727_TCEXCLIENT_H_

#include <functional>
#include <future>
#include <tencentcloud/core/AbstractClient.h>
#include <tencentcloud/core/Credential.h>
#include <tencentcloud/core/profile/ClientProfile.h>
#include <tencentcloud/core/AsyncCallerContext.h>
#include <tencentcloud/tcex/v20200727/model/DescribeInvocationResultRequest.h>
#include <tencentcloud/tcex/v20200727/model/DescribeInvocationResultResponse.h>
#include <tencentcloud/tcex/v20200727/model/InvokeServiceRequest.h>
#include <tencentcloud/tcex/v20200727/model/InvokeServiceResponse.h>


namespace TencentCloud
{
    namespace Tcex
    {
        namespace V20200727
        {
            class TcexClient : public AbstractClient
            {
            public:
                TcexClient(const Credential &credential, const std::string &region);
                TcexClient(const Credential &credential, const std::string &region, const ClientProfile &profile);

                typedef Outcome<Core::Error, Model::DescribeInvocationResultResponse> DescribeInvocationResultOutcome;
                typedef std::future<DescribeInvocationResultOutcome> DescribeInvocationResultOutcomeCallable;
                typedef std::function<void(const TcexClient*, const Model::DescribeInvocationResultRequest&, DescribeInvocationResultOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeInvocationResultAsyncHandler;
                typedef Outcome<Core::Error, Model::InvokeServiceResponse> InvokeServiceOutcome;
                typedef std::future<InvokeServiceOutcome> InvokeServiceOutcomeCallable;
                typedef std::function<void(const TcexClient*, const Model::InvokeServiceRequest&, InvokeServiceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> InvokeServiceAsyncHandler;



                /**
                 *产品控制台已经下线

获取服务调用结果。和InvokeService接口配置合适，其InvokeId参数为InvokeService接口返回的RequestId。
                 * @param req DescribeInvocationResultRequest
                 * @return DescribeInvocationResultOutcome
                 */
                DescribeInvocationResultOutcome DescribeInvocationResult(const Model::DescribeInvocationResultRequest &request);
                void DescribeInvocationResultAsync(const Model::DescribeInvocationResultRequest& request, const DescribeInvocationResultAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeInvocationResultOutcomeCallable DescribeInvocationResultCallable(const Model::DescribeInvocationResultRequest& request);

                /**
                 *产品控制台已经下线

通过传入文档url，测试服务算法。此接口需要和DescribeInvocationResult接口配置使用，该接口使用InvokeService返回的RequestId作为InvokeId参数，用于查询调用结果。
                 * @param req InvokeServiceRequest
                 * @return InvokeServiceOutcome
                 */
                InvokeServiceOutcome InvokeService(const Model::InvokeServiceRequest &request);
                void InvokeServiceAsync(const Model::InvokeServiceRequest& request, const InvokeServiceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                InvokeServiceOutcomeCallable InvokeServiceCallable(const Model::InvokeServiceRequest& request);

            };
        }
    }
}

#endif // !TENCENTCLOUD_TCEX_V20200727_TCEXCLIENT_H_
