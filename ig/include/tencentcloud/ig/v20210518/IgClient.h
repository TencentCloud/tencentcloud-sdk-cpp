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

#ifndef TENCENTCLOUD_IG_V20210518_IGCLIENT_H_
#define TENCENTCLOUD_IG_V20210518_IGCLIENT_H_

#include <functional>
#include <future>
#include <tencentcloud/core/AbstractClient.h>
#include <tencentcloud/core/Credential.h>
#include <tencentcloud/core/profile/ClientProfile.h>
#include <tencentcloud/core/AsyncCallerContext.h>
#include <tencentcloud/ig/v20210518/model/DescribeIgOrderListRequest.h>
#include <tencentcloud/ig/v20210518/model/DescribeIgOrderListResponse.h>


namespace TencentCloud
{
    namespace Ig
    {
        namespace V20210518
        {
            class IgClient : public AbstractClient
            {
            public:
                IgClient(const Credential &credential, const std::string &region);
                IgClient(const Credential &credential, const std::string &region, const ClientProfile &profile);

                typedef Outcome<Core::Error, Model::DescribeIgOrderListResponse> DescribeIgOrderListOutcome;
                typedef std::future<DescribeIgOrderListOutcome> DescribeIgOrderListOutcomeCallable;
                typedef std::function<void(const IgClient*, const Model::DescribeIgOrderListRequest&, DescribeIgOrderListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeIgOrderListAsyncHandler;



                /**
                 *查询智能导诊订单列表
                 * @param req DescribeIgOrderListRequest
                 * @return DescribeIgOrderListOutcome
                 */
                DescribeIgOrderListOutcome DescribeIgOrderList(const Model::DescribeIgOrderListRequest &request);
                void DescribeIgOrderListAsync(const Model::DescribeIgOrderListRequest& request, const DescribeIgOrderListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeIgOrderListOutcomeCallable DescribeIgOrderListCallable(const Model::DescribeIgOrderListRequest& request);

            };
        }
    }
}

#endif // !TENCENTCLOUD_IG_V20210518_IGCLIENT_H_
