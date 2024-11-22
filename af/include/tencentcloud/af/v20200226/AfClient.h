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

#ifndef TENCENTCLOUD_AF_V20200226_AFCLIENT_H_
#define TENCENTCLOUD_AF_V20200226_AFCLIENT_H_

#include <functional>
#include <future>
#include <tencentcloud/core/AbstractClient.h>
#include <tencentcloud/core/Credential.h>
#include <tencentcloud/core/profile/ClientProfile.h>
#include <tencentcloud/core/AsyncCallerContext.h>
#include <tencentcloud/af/v20200226/model/DescribeAntiFraudRequest.h>
#include <tencentcloud/af/v20200226/model/DescribeAntiFraudResponse.h>
#include <tencentcloud/af/v20200226/model/GetAntiFraudRequest.h>
#include <tencentcloud/af/v20200226/model/GetAntiFraudResponse.h>
#include <tencentcloud/af/v20200226/model/QueryAntiFraudRequest.h>
#include <tencentcloud/af/v20200226/model/QueryAntiFraudResponse.h>


namespace TencentCloud
{
    namespace Af
    {
        namespace V20200226
        {
            class AfClient : public AbstractClient
            {
            public:
                AfClient(const Credential &credential, const std::string &region);
                AfClient(const Credential &credential, const std::string &region, const ClientProfile &profile);

                typedef Outcome<Core::Error, Model::DescribeAntiFraudResponse> DescribeAntiFraudOutcome;
                typedef std::future<DescribeAntiFraudOutcome> DescribeAntiFraudOutcomeCallable;
                typedef std::function<void(const AfClient*, const Model::DescribeAntiFraudRequest&, DescribeAntiFraudOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAntiFraudAsyncHandler;
                typedef Outcome<Core::Error, Model::GetAntiFraudResponse> GetAntiFraudOutcome;
                typedef std::future<GetAntiFraudOutcome> GetAntiFraudOutcomeCallable;
                typedef std::function<void(const AfClient*, const Model::GetAntiFraudRequest&, GetAntiFraudOutcome, const std::shared_ptr<const AsyncCallerContext>&)> GetAntiFraudAsyncHandler;
                typedef Outcome<Core::Error, Model::QueryAntiFraudResponse> QueryAntiFraudOutcome;
                typedef std::future<QueryAntiFraudOutcome> QueryAntiFraudOutcomeCallable;
                typedef std::function<void(const AfClient*, const Model::QueryAntiFraudRequest&, QueryAntiFraudOutcome, const std::shared_ptr<const AsyncCallerContext>&)> QueryAntiFraudAsyncHandler;



                /**
                 *该接口未在使用，后端地址已无法访问，经查近60天日志无正常业务访问记录，申请预下线。

天御反欺诈服务，主要应用于银行、证券、保险、消费金融等金融行业客户，通过腾讯的大数据风控能力，
可以准确识别恶意用户信息，解决客户在支付、活动、理财，风控等业务环节遇到的欺诈威胁，降低企业
的损失。
                 * @param req DescribeAntiFraudRequest
                 * @return DescribeAntiFraudOutcome
                 */
                DescribeAntiFraudOutcome DescribeAntiFraud(const Model::DescribeAntiFraudRequest &request);
                void DescribeAntiFraudAsync(const Model::DescribeAntiFraudRequest& request, const DescribeAntiFraudAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeAntiFraudOutcomeCallable DescribeAntiFraudCallable(const Model::DescribeAntiFraudRequest& request);

                /**
                 *反欺诈评分接口
                 * @param req GetAntiFraudRequest
                 * @return GetAntiFraudOutcome
                 */
                GetAntiFraudOutcome GetAntiFraud(const Model::GetAntiFraudRequest &request);
                void GetAntiFraudAsync(const Model::GetAntiFraudRequest& request, const GetAntiFraudAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                GetAntiFraudOutcomeCallable GetAntiFraudCallable(const Model::GetAntiFraudRequest& request);

                /**
                 *天御反欺诈服务，主要应用于银行、证券、保险、消费金融等金融行业客户，通过腾讯的大数据风控能力，
可以准确识别恶意用户信息，解决客户在支付、活动、理财，风控等业务环节遇到的欺诈威胁，降低企业
的损失。
                 * @param req QueryAntiFraudRequest
                 * @return QueryAntiFraudOutcome
                 */
                QueryAntiFraudOutcome QueryAntiFraud(const Model::QueryAntiFraudRequest &request);
                void QueryAntiFraudAsync(const Model::QueryAntiFraudRequest& request, const QueryAntiFraudAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                QueryAntiFraudOutcomeCallable QueryAntiFraudCallable(const Model::QueryAntiFraudRequest& request);

            };
        }
    }
}

#endif // !TENCENTCLOUD_AF_V20200226_AFCLIENT_H_
