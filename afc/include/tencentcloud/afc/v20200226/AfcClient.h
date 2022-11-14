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

#ifndef TENCENTCLOUD_AFC_V20200226_AFCCLIENT_H_
#define TENCENTCLOUD_AFC_V20200226_AFCCLIENT_H_

#include <functional>
#include <future>
#include <tencentcloud/core/AbstractClient.h>
#include <tencentcloud/core/Credential.h>
#include <tencentcloud/core/profile/ClientProfile.h>
#include <tencentcloud/core/AsyncCallerContext.h>
#include <tencentcloud/afc/v20200226/model/GetAntiFraudVipRequest.h>
#include <tencentcloud/afc/v20200226/model/GetAntiFraudVipResponse.h>
#include <tencentcloud/afc/v20200226/model/QueryAntiFraudVipRequest.h>
#include <tencentcloud/afc/v20200226/model/QueryAntiFraudVipResponse.h>
#include <tencentcloud/afc/v20200226/model/TransportGeneralInterfaceRequest.h>
#include <tencentcloud/afc/v20200226/model/TransportGeneralInterfaceResponse.h>


namespace TencentCloud
{
    namespace Afc
    {
        namespace V20200226
        {
            class AfcClient : public AbstractClient
            {
            public:
                AfcClient(const Credential &credential, const std::string &region);
                AfcClient(const Credential &credential, const std::string &region, const ClientProfile &profile);

                typedef Outcome<Core::Error, Model::GetAntiFraudVipResponse> GetAntiFraudVipOutcome;
                typedef std::future<GetAntiFraudVipOutcome> GetAntiFraudVipOutcomeCallable;
                typedef std::function<void(const AfcClient*, const Model::GetAntiFraudVipRequest&, GetAntiFraudVipOutcome, const std::shared_ptr<const AsyncCallerContext>&)> GetAntiFraudVipAsyncHandler;
                typedef Outcome<Core::Error, Model::QueryAntiFraudVipResponse> QueryAntiFraudVipOutcome;
                typedef std::future<QueryAntiFraudVipOutcome> QueryAntiFraudVipOutcomeCallable;
                typedef std::function<void(const AfcClient*, const Model::QueryAntiFraudVipRequest&, QueryAntiFraudVipOutcome, const std::shared_ptr<const AsyncCallerContext>&)> QueryAntiFraudVipAsyncHandler;
                typedef Outcome<Core::Error, Model::TransportGeneralInterfaceResponse> TransportGeneralInterfaceOutcome;
                typedef std::future<TransportGeneralInterfaceOutcome> TransportGeneralInterfaceOutcomeCallable;
                typedef std::function<void(const AfcClient*, const Model::TransportGeneralInterfaceRequest&, TransportGeneralInterfaceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> TransportGeneralInterfaceAsyncHandler;



                /**
                 *反欺诈VIP评分接口
                 * @param req GetAntiFraudVipRequest
                 * @return GetAntiFraudVipOutcome
                 */
                GetAntiFraudVipOutcome GetAntiFraudVip(const Model::GetAntiFraudVipRequest &request);
                void GetAntiFraudVipAsync(const Model::GetAntiFraudVipRequest& request, const GetAntiFraudVipAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                GetAntiFraudVipOutcomeCallable GetAntiFraudVipCallable(const Model::GetAntiFraudVipRequest& request);

                /**
                 *天御反欺诈服务，主要应用于银行、证券、保险、P2P等金融行业客户，通过腾讯的大数据风控能力，
可以准确识别恶意用户信息，解决客户在支付、活动、理财，风控等业务环节遇到的欺诈威胁，降低企业
的损失。
                 * @param req QueryAntiFraudVipRequest
                 * @return QueryAntiFraudVipOutcome
                 */
                QueryAntiFraudVipOutcome QueryAntiFraudVip(const Model::QueryAntiFraudVipRequest &request);
                void QueryAntiFraudVipAsync(const Model::QueryAntiFraudVipRequest& request, const QueryAntiFraudVipAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                QueryAntiFraudVipOutcomeCallable QueryAntiFraudVipCallable(const Model::QueryAntiFraudVipRequest& request);

                /**
                 *天御信鸽取数平台接口
                 * @param req TransportGeneralInterfaceRequest
                 * @return TransportGeneralInterfaceOutcome
                 */
                TransportGeneralInterfaceOutcome TransportGeneralInterface(const Model::TransportGeneralInterfaceRequest &request);
                void TransportGeneralInterfaceAsync(const Model::TransportGeneralInterfaceRequest& request, const TransportGeneralInterfaceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                TransportGeneralInterfaceOutcomeCallable TransportGeneralInterfaceCallable(const Model::TransportGeneralInterfaceRequest& request);

            };
        }
    }
}

#endif // !TENCENTCLOUD_AFC_V20200226_AFCCLIENT_H_
