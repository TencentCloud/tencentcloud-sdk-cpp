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

#ifndef TENCENTCLOUD_RKP_V20191209_RKPCLIENT_H_
#define TENCENTCLOUD_RKP_V20191209_RKPCLIENT_H_

#include <functional>
#include <future>
#include <tencentcloud/core/AbstractClient.h>
#include <tencentcloud/core/Credential.h>
#include <tencentcloud/core/profile/ClientProfile.h>
#include <tencentcloud/core/AsyncCallerContext.h>
#include <tencentcloud/rkp/v20191209/model/GetOpenIdRequest.h>
#include <tencentcloud/rkp/v20191209/model/GetOpenIdResponse.h>
#include <tencentcloud/rkp/v20191209/model/GetTokenRequest.h>
#include <tencentcloud/rkp/v20191209/model/GetTokenResponse.h>
#include <tencentcloud/rkp/v20191209/model/QueryDevAndRiskRequest.h>
#include <tencentcloud/rkp/v20191209/model/QueryDevAndRiskResponse.h>


namespace TencentCloud
{
    namespace Rkp
    {
        namespace V20191209
        {
            class RkpClient : public AbstractClient
            {
            public:
                RkpClient(const Credential &credential, const std::string &region);
                RkpClient(const Credential &credential, const std::string &region, const ClientProfile &profile);

                typedef Outcome<Error, Model::GetOpenIdResponse> GetOpenIdOutcome;
                typedef std::future<GetOpenIdOutcome> GetOpenIdOutcomeCallable;
                typedef std::function<void(const RkpClient*, const Model::GetOpenIdRequest&, GetOpenIdOutcome, const std::shared_ptr<const AsyncCallerContext>&)> GetOpenIdAsyncHandler;
                typedef Outcome<Error, Model::GetTokenResponse> GetTokenOutcome;
                typedef std::future<GetTokenOutcome> GetTokenOutcomeCallable;
                typedef std::function<void(const RkpClient*, const Model::GetTokenRequest&, GetTokenOutcome, const std::shared_ptr<const AsyncCallerContext>&)> GetTokenAsyncHandler;
                typedef Outcome<Error, Model::QueryDevAndRiskResponse> QueryDevAndRiskOutcome;
                typedef std::future<QueryDevAndRiskOutcome> QueryDevAndRiskOutcomeCallable;
                typedef std::function<void(const RkpClient*, const Model::QueryDevAndRiskRequest&, QueryDevAndRiskOutcome, const std::shared_ptr<const AsyncCallerContext>&)> QueryDevAndRiskAsyncHandler;



                /**
                 *根据DevicceToken查询OpenID。
                 * @param req GetOpenIdRequest
                 * @return GetOpenIdOutcome
                 */
                GetOpenIdOutcome GetOpenId(const Model::GetOpenIdRequest &request);
                void GetOpenIdAsync(const Model::GetOpenIdRequest& request, const GetOpenIdAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                GetOpenIdOutcomeCallable GetOpenIdCallable(const Model::GetOpenIdRequest& request);

                /**
                 *获取token接口。
                 * @param req GetTokenRequest
                 * @return GetTokenOutcome
                 */
                GetTokenOutcome GetToken(const Model::GetTokenRequest &request);
                void GetTokenAsync(const Model::GetTokenRequest& request, const GetTokenAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                GetTokenOutcomeCallable GetTokenCallable(const Model::GetTokenRequest& request);

                /**
                 *腾讯天御设备风险查询接口，输入由客户应用自主采集的设备信息， 通过腾讯大数据风控能力，可以准确根据输入设备信息，还原设备库中的设备ID，并且识别设备的风险，解决客户业务过程中的设备风险，降低企业损失。
                 * @param req QueryDevAndRiskRequest
                 * @return QueryDevAndRiskOutcome
                 */
                QueryDevAndRiskOutcome QueryDevAndRisk(const Model::QueryDevAndRiskRequest &request);
                void QueryDevAndRiskAsync(const Model::QueryDevAndRiskRequest& request, const QueryDevAndRiskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                QueryDevAndRiskOutcomeCallable QueryDevAndRiskCallable(const Model::QueryDevAndRiskRequest& request);

            };
        }
    }
}

#endif // !TENCENTCLOUD_RKP_V20191209_RKPCLIENT_H_
