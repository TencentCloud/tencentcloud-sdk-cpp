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

#ifndef TENCENTCLOUD_TSW_V20210412_TSWCLIENT_H_
#define TENCENTCLOUD_TSW_V20210412_TSWCLIENT_H_

#include <functional>
#include <future>
#include <tencentcloud/core/AbstractClient.h>
#include <tencentcloud/core/Credential.h>
#include <tencentcloud/core/profile/ClientProfile.h>
#include <tencentcloud/core/AsyncCallerContext.h>
#include <tencentcloud/tsw/v20210412/model/DescribeComponentAlertObjectRequest.h>
#include <tencentcloud/tsw/v20210412/model/DescribeComponentAlertObjectResponse.h>
#include <tencentcloud/tsw/v20210412/model/DescribeServiceAlertObjectRequest.h>
#include <tencentcloud/tsw/v20210412/model/DescribeServiceAlertObjectResponse.h>
#include <tencentcloud/tsw/v20210412/model/DescribeTokenRequest.h>
#include <tencentcloud/tsw/v20210412/model/DescribeTokenResponse.h>


namespace TencentCloud
{
    namespace Tsw
    {
        namespace V20210412
        {
            class TswClient : public AbstractClient
            {
            public:
                TswClient(const Credential &credential, const std::string &region);
                TswClient(const Credential &credential, const std::string &region, const ClientProfile &profile);

                typedef Outcome<Core::Error, Model::DescribeComponentAlertObjectResponse> DescribeComponentAlertObjectOutcome;
                typedef std::future<DescribeComponentAlertObjectOutcome> DescribeComponentAlertObjectOutcomeCallable;
                typedef std::function<void(const TswClient*, const Model::DescribeComponentAlertObjectRequest&, DescribeComponentAlertObjectOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeComponentAlertObjectAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeServiceAlertObjectResponse> DescribeServiceAlertObjectOutcome;
                typedef std::future<DescribeServiceAlertObjectOutcome> DescribeServiceAlertObjectOutcomeCallable;
                typedef std::function<void(const TswClient*, const Model::DescribeServiceAlertObjectRequest&, DescribeServiceAlertObjectOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeServiceAlertObjectAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeTokenResponse> DescribeTokenOutcome;
                typedef std::future<DescribeTokenOutcome> DescribeTokenOutcomeCallable;
                typedef std::function<void(const TswClient*, const Model::DescribeTokenRequest&, DescribeTokenOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeTokenAsyncHandler;



                /**
                 *获取告警对象-组件告警
                 * @param req DescribeComponentAlertObjectRequest
                 * @return DescribeComponentAlertObjectOutcome
                 */
                DescribeComponentAlertObjectOutcome DescribeComponentAlertObject(const Model::DescribeComponentAlertObjectRequest &request);
                void DescribeComponentAlertObjectAsync(const Model::DescribeComponentAlertObjectRequest& request, const DescribeComponentAlertObjectAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeComponentAlertObjectOutcomeCallable DescribeComponentAlertObjectCallable(const Model::DescribeComponentAlertObjectRequest& request);

                /**
                 *获取告警对象-服务告警表
                 * @param req DescribeServiceAlertObjectRequest
                 * @return DescribeServiceAlertObjectOutcome
                 */
                DescribeServiceAlertObjectOutcome DescribeServiceAlertObject(const Model::DescribeServiceAlertObjectRequest &request);
                void DescribeServiceAlertObjectAsync(const Model::DescribeServiceAlertObjectRequest& request, const DescribeServiceAlertObjectAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeServiceAlertObjectOutcomeCallable DescribeServiceAlertObjectCallable(const Model::DescribeServiceAlertObjectRequest& request);

                /**
                 *查询token
                 * @param req DescribeTokenRequest
                 * @return DescribeTokenOutcome
                 */
                DescribeTokenOutcome DescribeToken(const Model::DescribeTokenRequest &request);
                void DescribeTokenAsync(const Model::DescribeTokenRequest& request, const DescribeTokenAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeTokenOutcomeCallable DescribeTokenCallable(const Model::DescribeTokenRequest& request);

            };
        }
    }
}

#endif // !TENCENTCLOUD_TSW_V20210412_TSWCLIENT_H_
