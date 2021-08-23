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

#ifndef TENCENTCLOUD_DTF_V20200506_DTFCLIENT_H_
#define TENCENTCLOUD_DTF_V20200506_DTFCLIENT_H_

#include <functional>
#include <future>
#include <tencentcloud/core/AbstractClient.h>
#include <tencentcloud/core/Credential.h>
#include <tencentcloud/core/profile/ClientProfile.h>
#include <tencentcloud/core/AsyncCallerContext.h>
#include <tencentcloud/dtf/v20200506/model/DescribeTransactionsRequest.h>
#include <tencentcloud/dtf/v20200506/model/DescribeTransactionsResponse.h>


namespace TencentCloud
{
    namespace Dtf
    {
        namespace V20200506
        {
            class DtfClient : public AbstractClient
            {
            public:
                DtfClient(const Credential &credential, const std::string &region);
                DtfClient(const Credential &credential, const std::string &region, const ClientProfile &profile);

                typedef Outcome<Core::Error, Model::DescribeTransactionsResponse> DescribeTransactionsOutcome;
                typedef std::future<DescribeTransactionsOutcome> DescribeTransactionsOutcomeCallable;
                typedef std::function<void(const DtfClient*, const Model::DescribeTransactionsRequest&, DescribeTransactionsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeTransactionsAsyncHandler;



                /**
                 *查询主事务列表
                 * @param req DescribeTransactionsRequest
                 * @return DescribeTransactionsOutcome
                 */
                DescribeTransactionsOutcome DescribeTransactions(const Model::DescribeTransactionsRequest &request);
                void DescribeTransactionsAsync(const Model::DescribeTransactionsRequest& request, const DescribeTransactionsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeTransactionsOutcomeCallable DescribeTransactionsCallable(const Model::DescribeTransactionsRequest& request);

            };
        }
    }
}

#endif // !TENCENTCLOUD_DTF_V20200506_DTFCLIENT_H_
