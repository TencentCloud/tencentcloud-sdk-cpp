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

#ifndef TENCENTCLOUD_TBAAS_V20180416_TBAASCLIENT_H_
#define TENCENTCLOUD_TBAAS_V20180416_TBAASCLIENT_H_

#include <functional>
#include <future>
#include <tencentcloud/core/AbstractClient.h>
#include <tencentcloud/core/Credential.h>
#include <tencentcloud/core/profile/ClientProfile.h>
#include <tencentcloud/core/AsyncCallerContext.h>
#include <tencentcloud/tbaas/v20180416/model/GetInvokeTxRequest.h>
#include <tencentcloud/tbaas/v20180416/model/GetInvokeTxResponse.h>
#include <tencentcloud/tbaas/v20180416/model/InvokeRequest.h>
#include <tencentcloud/tbaas/v20180416/model/InvokeResponse.h>
#include <tencentcloud/tbaas/v20180416/model/QueryRequest.h>
#include <tencentcloud/tbaas/v20180416/model/QueryResponse.h>


namespace TencentCloud
{
    namespace Tbaas
    {
        namespace V20180416
        {
            class TbaasClient : public AbstractClient
            {
            public:
                TbaasClient(const Credential &credential, const std::string &region);
                TbaasClient(const Credential &credential, const std::string &region, const ClientProfile &profile);

                typedef Outcome<Error, Model::GetInvokeTxResponse> GetInvokeTxOutcome;
                typedef std::future<GetInvokeTxOutcome> GetInvokeTxOutcomeCallable;
                typedef std::function<void(const TbaasClient*, const Model::GetInvokeTxRequest&, GetInvokeTxOutcome, const std::shared_ptr<const AsyncCallerContext>&)> GetInvokeTxAsyncHandler;
                typedef Outcome<Error, Model::InvokeResponse> InvokeOutcome;
                typedef std::future<InvokeOutcome> InvokeOutcomeCallable;
                typedef std::function<void(const TbaasClient*, const Model::InvokeRequest&, InvokeOutcome, const std::shared_ptr<const AsyncCallerContext>&)> InvokeAsyncHandler;
                typedef Outcome<Error, Model::QueryResponse> QueryOutcome;
                typedef std::future<QueryOutcome> QueryOutcomeCallable;
                typedef std::function<void(const TbaasClient*, const Model::QueryRequest&, QueryOutcome, const std::shared_ptr<const AsyncCallerContext>&)> QueryAsyncHandler;



                /**
                 *Invoke异步调用结果查询
                 * @param req GetInvokeTxRequest
                 * @return GetInvokeTxOutcome
                 */
                GetInvokeTxOutcome GetInvokeTx(const Model::GetInvokeTxRequest &request);
                void GetInvokeTxAsync(const Model::GetInvokeTxRequest& request, const GetInvokeTxAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                GetInvokeTxOutcomeCallable GetInvokeTxCallable(const Model::GetInvokeTxRequest& request);

                /**
                 *新增交易
                 * @param req InvokeRequest
                 * @return InvokeOutcome
                 */
                InvokeOutcome Invoke(const Model::InvokeRequest &request);
                void InvokeAsync(const Model::InvokeRequest& request, const InvokeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                InvokeOutcomeCallable InvokeCallable(const Model::InvokeRequest& request);

                /**
                 *查询交易
                 * @param req QueryRequest
                 * @return QueryOutcome
                 */
                QueryOutcome Query(const Model::QueryRequest &request);
                void QueryAsync(const Model::QueryRequest& request, const QueryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                QueryOutcomeCallable QueryCallable(const Model::QueryRequest& request);

            };
        }
    }
}

#endif // !TENCENTCLOUD_TBAAS_V20180416_TBAASCLIENT_H_
