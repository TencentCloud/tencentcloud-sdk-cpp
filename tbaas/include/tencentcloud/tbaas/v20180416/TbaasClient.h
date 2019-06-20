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
#include <tencentcloud/tbaas/v20180416/model/GetBlockListRequest.h>
#include <tencentcloud/tbaas/v20180416/model/GetBlockListResponse.h>
#include <tencentcloud/tbaas/v20180416/model/GetClusterSummaryRequest.h>
#include <tencentcloud/tbaas/v20180416/model/GetClusterSummaryResponse.h>
#include <tencentcloud/tbaas/v20180416/model/GetInvokeTxRequest.h>
#include <tencentcloud/tbaas/v20180416/model/GetInvokeTxResponse.h>
#include <tencentcloud/tbaas/v20180416/model/GetLatesdTransactionListRequest.h>
#include <tencentcloud/tbaas/v20180416/model/GetLatesdTransactionListResponse.h>
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

                typedef Outcome<Error, Model::GetBlockListResponse> GetBlockListOutcome;
                typedef std::future<GetBlockListOutcome> GetBlockListOutcomeCallable;
                typedef std::function<void(const TbaasClient*, const Model::GetBlockListRequest&, GetBlockListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> GetBlockListAsyncHandler;
                typedef Outcome<Error, Model::GetClusterSummaryResponse> GetClusterSummaryOutcome;
                typedef std::future<GetClusterSummaryOutcome> GetClusterSummaryOutcomeCallable;
                typedef std::function<void(const TbaasClient*, const Model::GetClusterSummaryRequest&, GetClusterSummaryOutcome, const std::shared_ptr<const AsyncCallerContext>&)> GetClusterSummaryAsyncHandler;
                typedef Outcome<Error, Model::GetInvokeTxResponse> GetInvokeTxOutcome;
                typedef std::future<GetInvokeTxOutcome> GetInvokeTxOutcomeCallable;
                typedef std::function<void(const TbaasClient*, const Model::GetInvokeTxRequest&, GetInvokeTxOutcome, const std::shared_ptr<const AsyncCallerContext>&)> GetInvokeTxAsyncHandler;
                typedef Outcome<Error, Model::GetLatesdTransactionListResponse> GetLatesdTransactionListOutcome;
                typedef std::future<GetLatesdTransactionListOutcome> GetLatesdTransactionListOutcomeCallable;
                typedef std::function<void(const TbaasClient*, const Model::GetLatesdTransactionListRequest&, GetLatesdTransactionListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> GetLatesdTransactionListAsyncHandler;
                typedef Outcome<Error, Model::InvokeResponse> InvokeOutcome;
                typedef std::future<InvokeOutcome> InvokeOutcomeCallable;
                typedef std::function<void(const TbaasClient*, const Model::InvokeRequest&, InvokeOutcome, const std::shared_ptr<const AsyncCallerContext>&)> InvokeAsyncHandler;
                typedef Outcome<Error, Model::QueryResponse> QueryOutcome;
                typedef std::future<QueryOutcome> QueryOutcomeCallable;
                typedef std::function<void(const TbaasClient*, const Model::QueryRequest&, QueryOutcome, const std::shared_ptr<const AsyncCallerContext>&)> QueryAsyncHandler;



                /**
                 *查看当前网络下的所有区块列表，分页展示
                 * @param req GetBlockListRequest
                 * @return GetBlockListOutcome
                 */
                GetBlockListOutcome GetBlockList(const Model::GetBlockListRequest &request);
                void GetBlockListAsync(const Model::GetBlockListRequest& request, const GetBlockListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                GetBlockListOutcomeCallable GetBlockListCallable(const Model::GetBlockListRequest& request);

                /**
                 *获取区块链网络概要
                 * @param req GetClusterSummaryRequest
                 * @return GetClusterSummaryOutcome
                 */
                GetClusterSummaryOutcome GetClusterSummary(const Model::GetClusterSummaryRequest &request);
                void GetClusterSummaryAsync(const Model::GetClusterSummaryRequest& request, const GetClusterSummaryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                GetClusterSummaryOutcomeCallable GetClusterSummaryCallable(const Model::GetClusterSummaryRequest& request);

                /**
                 *Invoke异步调用结果查询
                 * @param req GetInvokeTxRequest
                 * @return GetInvokeTxOutcome
                 */
                GetInvokeTxOutcome GetInvokeTx(const Model::GetInvokeTxRequest &request);
                void GetInvokeTxAsync(const Model::GetInvokeTxRequest& request, const GetInvokeTxAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                GetInvokeTxOutcomeCallable GetInvokeTxCallable(const Model::GetInvokeTxRequest& request);

                /**
                 *获取最新交易列表
                 * @param req GetLatesdTransactionListRequest
                 * @return GetLatesdTransactionListOutcome
                 */
                GetLatesdTransactionListOutcome GetLatesdTransactionList(const Model::GetLatesdTransactionListRequest &request);
                void GetLatesdTransactionListAsync(const Model::GetLatesdTransactionListRequest& request, const GetLatesdTransactionListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                GetLatesdTransactionListOutcomeCallable GetLatesdTransactionListCallable(const Model::GetLatesdTransactionListRequest& request);

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
