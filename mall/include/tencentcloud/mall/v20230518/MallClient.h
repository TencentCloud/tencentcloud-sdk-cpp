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

#ifndef TENCENTCLOUD_MALL_V20230518_MALLCLIENT_H_
#define TENCENTCLOUD_MALL_V20230518_MALLCLIENT_H_

#include <functional>
#include <future>
#include <tencentcloud/core/AbstractClient.h>
#include <tencentcloud/core/Credential.h>
#include <tencentcloud/core/profile/ClientProfile.h>
#include <tencentcloud/core/AsyncCallerContext.h>
#include <tencentcloud/mall/v20230518/model/DescribeDrawResourceListRequest.h>
#include <tencentcloud/mall/v20230518/model/DescribeDrawResourceListResponse.h>


namespace TencentCloud
{
    namespace Mall
    {
        namespace V20230518
        {
            class MallClient : public AbstractClient
            {
            public:
                MallClient(const Credential &credential, const std::string &region);
                MallClient(const Credential &credential, const std::string &region, const ClientProfile &profile);

                typedef Outcome<Core::Error, Model::DescribeDrawResourceListResponse> DescribeDrawResourceListOutcome;
                typedef std::future<DescribeDrawResourceListOutcome> DescribeDrawResourceListOutcomeCallable;
                typedef std::function<void(const MallClient*, const Model::DescribeDrawResourceListRequest&, DescribeDrawResourceListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDrawResourceListAsyncHandler;



                /**
                 *依据客户的Uin查询开通的资源列表
                 * @param req DescribeDrawResourceListRequest
                 * @return DescribeDrawResourceListOutcome
                 */
                DescribeDrawResourceListOutcome DescribeDrawResourceList(const Model::DescribeDrawResourceListRequest &request);
                void DescribeDrawResourceListAsync(const Model::DescribeDrawResourceListRequest& request, const DescribeDrawResourceListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeDrawResourceListOutcomeCallable DescribeDrawResourceListCallable(const Model::DescribeDrawResourceListRequest& request);

            };
        }
    }
}

#endif // !TENCENTCLOUD_MALL_V20230518_MALLCLIENT_H_
