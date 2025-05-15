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
#include <tencentcloud/tbaas/v20180416/model/ApplyChainMakerBatchUserCertRequest.h>
#include <tencentcloud/tbaas/v20180416/model/ApplyChainMakerBatchUserCertResponse.h>
#include <tencentcloud/tbaas/v20180416/model/ApplyUserCertRequest.h>
#include <tencentcloud/tbaas/v20180416/model/ApplyUserCertResponse.h>
#include <tencentcloud/tbaas/v20180416/model/DescribeFabricBlockRequest.h>
#include <tencentcloud/tbaas/v20180416/model/DescribeFabricBlockResponse.h>
#include <tencentcloud/tbaas/v20180416/model/DescribeFabricTransactionRequest.h>
#include <tencentcloud/tbaas/v20180416/model/DescribeFabricTransactionResponse.h>
#include <tencentcloud/tbaas/v20180416/model/DownloadUserCertRequest.h>
#include <tencentcloud/tbaas/v20180416/model/DownloadUserCertResponse.h>
#include <tencentcloud/tbaas/v20180416/model/GetBlockListRequest.h>
#include <tencentcloud/tbaas/v20180416/model/GetBlockListResponse.h>
#include <tencentcloud/tbaas/v20180416/model/GetBlockTransactionListForUserRequest.h>
#include <tencentcloud/tbaas/v20180416/model/GetBlockTransactionListForUserResponse.h>
#include <tencentcloud/tbaas/v20180416/model/GetClusterSummaryRequest.h>
#include <tencentcloud/tbaas/v20180416/model/GetClusterSummaryResponse.h>
#include <tencentcloud/tbaas/v20180416/model/GetInvokeTxRequest.h>
#include <tencentcloud/tbaas/v20180416/model/GetInvokeTxResponse.h>
#include <tencentcloud/tbaas/v20180416/model/GetLatestTransactionListRequest.h>
#include <tencentcloud/tbaas/v20180416/model/GetLatestTransactionListResponse.h>
#include <tencentcloud/tbaas/v20180416/model/GetTransactionDetailForUserRequest.h>
#include <tencentcloud/tbaas/v20180416/model/GetTransactionDetailForUserResponse.h>
#include <tencentcloud/tbaas/v20180416/model/InvokeRequest.h>
#include <tencentcloud/tbaas/v20180416/model/InvokeResponse.h>
#include <tencentcloud/tbaas/v20180416/model/InvokeChainMakerContractRequest.h>
#include <tencentcloud/tbaas/v20180416/model/InvokeChainMakerContractResponse.h>
#include <tencentcloud/tbaas/v20180416/model/InvokeChainMakerDemoContractRequest.h>
#include <tencentcloud/tbaas/v20180416/model/InvokeChainMakerDemoContractResponse.h>
#include <tencentcloud/tbaas/v20180416/model/InvokeFabricChaincodeRequest.h>
#include <tencentcloud/tbaas/v20180416/model/InvokeFabricChaincodeResponse.h>
#include <tencentcloud/tbaas/v20180416/model/QueryRequest.h>
#include <tencentcloud/tbaas/v20180416/model/QueryResponse.h>
#include <tencentcloud/tbaas/v20180416/model/QueryChainMakerBlockTransactionRequest.h>
#include <tencentcloud/tbaas/v20180416/model/QueryChainMakerBlockTransactionResponse.h>
#include <tencentcloud/tbaas/v20180416/model/QueryChainMakerContractRequest.h>
#include <tencentcloud/tbaas/v20180416/model/QueryChainMakerContractResponse.h>
#include <tencentcloud/tbaas/v20180416/model/QueryChainMakerDemoBlockTransactionRequest.h>
#include <tencentcloud/tbaas/v20180416/model/QueryChainMakerDemoBlockTransactionResponse.h>
#include <tencentcloud/tbaas/v20180416/model/QueryChainMakerDemoContractRequest.h>
#include <tencentcloud/tbaas/v20180416/model/QueryChainMakerDemoContractResponse.h>
#include <tencentcloud/tbaas/v20180416/model/QueryChainMakerDemoTransactionRequest.h>
#include <tencentcloud/tbaas/v20180416/model/QueryChainMakerDemoTransactionResponse.h>
#include <tencentcloud/tbaas/v20180416/model/QueryChainMakerTransactionRequest.h>
#include <tencentcloud/tbaas/v20180416/model/QueryChainMakerTransactionResponse.h>
#include <tencentcloud/tbaas/v20180416/model/QueryFabricChaincodeRequest.h>
#include <tencentcloud/tbaas/v20180416/model/QueryFabricChaincodeResponse.h>
#include <tencentcloud/tbaas/v20180416/model/SrvInvokeRequest.h>
#include <tencentcloud/tbaas/v20180416/model/SrvInvokeResponse.h>


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

                typedef Outcome<Core::Error, Model::ApplyChainMakerBatchUserCertResponse> ApplyChainMakerBatchUserCertOutcome;
                typedef std::future<ApplyChainMakerBatchUserCertOutcome> ApplyChainMakerBatchUserCertOutcomeCallable;
                typedef std::function<void(const TbaasClient*, const Model::ApplyChainMakerBatchUserCertRequest&, ApplyChainMakerBatchUserCertOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ApplyChainMakerBatchUserCertAsyncHandler;
                typedef Outcome<Core::Error, Model::ApplyUserCertResponse> ApplyUserCertOutcome;
                typedef std::future<ApplyUserCertOutcome> ApplyUserCertOutcomeCallable;
                typedef std::function<void(const TbaasClient*, const Model::ApplyUserCertRequest&, ApplyUserCertOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ApplyUserCertAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeFabricBlockResponse> DescribeFabricBlockOutcome;
                typedef std::future<DescribeFabricBlockOutcome> DescribeFabricBlockOutcomeCallable;
                typedef std::function<void(const TbaasClient*, const Model::DescribeFabricBlockRequest&, DescribeFabricBlockOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeFabricBlockAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeFabricTransactionResponse> DescribeFabricTransactionOutcome;
                typedef std::future<DescribeFabricTransactionOutcome> DescribeFabricTransactionOutcomeCallable;
                typedef std::function<void(const TbaasClient*, const Model::DescribeFabricTransactionRequest&, DescribeFabricTransactionOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeFabricTransactionAsyncHandler;
                typedef Outcome<Core::Error, Model::DownloadUserCertResponse> DownloadUserCertOutcome;
                typedef std::future<DownloadUserCertOutcome> DownloadUserCertOutcomeCallable;
                typedef std::function<void(const TbaasClient*, const Model::DownloadUserCertRequest&, DownloadUserCertOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DownloadUserCertAsyncHandler;
                typedef Outcome<Core::Error, Model::GetBlockListResponse> GetBlockListOutcome;
                typedef std::future<GetBlockListOutcome> GetBlockListOutcomeCallable;
                typedef std::function<void(const TbaasClient*, const Model::GetBlockListRequest&, GetBlockListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> GetBlockListAsyncHandler;
                typedef Outcome<Core::Error, Model::GetBlockTransactionListForUserResponse> GetBlockTransactionListForUserOutcome;
                typedef std::future<GetBlockTransactionListForUserOutcome> GetBlockTransactionListForUserOutcomeCallable;
                typedef std::function<void(const TbaasClient*, const Model::GetBlockTransactionListForUserRequest&, GetBlockTransactionListForUserOutcome, const std::shared_ptr<const AsyncCallerContext>&)> GetBlockTransactionListForUserAsyncHandler;
                typedef Outcome<Core::Error, Model::GetClusterSummaryResponse> GetClusterSummaryOutcome;
                typedef std::future<GetClusterSummaryOutcome> GetClusterSummaryOutcomeCallable;
                typedef std::function<void(const TbaasClient*, const Model::GetClusterSummaryRequest&, GetClusterSummaryOutcome, const std::shared_ptr<const AsyncCallerContext>&)> GetClusterSummaryAsyncHandler;
                typedef Outcome<Core::Error, Model::GetInvokeTxResponse> GetInvokeTxOutcome;
                typedef std::future<GetInvokeTxOutcome> GetInvokeTxOutcomeCallable;
                typedef std::function<void(const TbaasClient*, const Model::GetInvokeTxRequest&, GetInvokeTxOutcome, const std::shared_ptr<const AsyncCallerContext>&)> GetInvokeTxAsyncHandler;
                typedef Outcome<Core::Error, Model::GetLatestTransactionListResponse> GetLatestTransactionListOutcome;
                typedef std::future<GetLatestTransactionListOutcome> GetLatestTransactionListOutcomeCallable;
                typedef std::function<void(const TbaasClient*, const Model::GetLatestTransactionListRequest&, GetLatestTransactionListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> GetLatestTransactionListAsyncHandler;
                typedef Outcome<Core::Error, Model::GetTransactionDetailForUserResponse> GetTransactionDetailForUserOutcome;
                typedef std::future<GetTransactionDetailForUserOutcome> GetTransactionDetailForUserOutcomeCallable;
                typedef std::function<void(const TbaasClient*, const Model::GetTransactionDetailForUserRequest&, GetTransactionDetailForUserOutcome, const std::shared_ptr<const AsyncCallerContext>&)> GetTransactionDetailForUserAsyncHandler;
                typedef Outcome<Core::Error, Model::InvokeResponse> InvokeOutcome;
                typedef std::future<InvokeOutcome> InvokeOutcomeCallable;
                typedef std::function<void(const TbaasClient*, const Model::InvokeRequest&, InvokeOutcome, const std::shared_ptr<const AsyncCallerContext>&)> InvokeAsyncHandler;
                typedef Outcome<Core::Error, Model::InvokeChainMakerContractResponse> InvokeChainMakerContractOutcome;
                typedef std::future<InvokeChainMakerContractOutcome> InvokeChainMakerContractOutcomeCallable;
                typedef std::function<void(const TbaasClient*, const Model::InvokeChainMakerContractRequest&, InvokeChainMakerContractOutcome, const std::shared_ptr<const AsyncCallerContext>&)> InvokeChainMakerContractAsyncHandler;
                typedef Outcome<Core::Error, Model::InvokeChainMakerDemoContractResponse> InvokeChainMakerDemoContractOutcome;
                typedef std::future<InvokeChainMakerDemoContractOutcome> InvokeChainMakerDemoContractOutcomeCallable;
                typedef std::function<void(const TbaasClient*, const Model::InvokeChainMakerDemoContractRequest&, InvokeChainMakerDemoContractOutcome, const std::shared_ptr<const AsyncCallerContext>&)> InvokeChainMakerDemoContractAsyncHandler;
                typedef Outcome<Core::Error, Model::InvokeFabricChaincodeResponse> InvokeFabricChaincodeOutcome;
                typedef std::future<InvokeFabricChaincodeOutcome> InvokeFabricChaincodeOutcomeCallable;
                typedef std::function<void(const TbaasClient*, const Model::InvokeFabricChaincodeRequest&, InvokeFabricChaincodeOutcome, const std::shared_ptr<const AsyncCallerContext>&)> InvokeFabricChaincodeAsyncHandler;
                typedef Outcome<Core::Error, Model::QueryResponse> QueryOutcome;
                typedef std::future<QueryOutcome> QueryOutcomeCallable;
                typedef std::function<void(const TbaasClient*, const Model::QueryRequest&, QueryOutcome, const std::shared_ptr<const AsyncCallerContext>&)> QueryAsyncHandler;
                typedef Outcome<Core::Error, Model::QueryChainMakerBlockTransactionResponse> QueryChainMakerBlockTransactionOutcome;
                typedef std::future<QueryChainMakerBlockTransactionOutcome> QueryChainMakerBlockTransactionOutcomeCallable;
                typedef std::function<void(const TbaasClient*, const Model::QueryChainMakerBlockTransactionRequest&, QueryChainMakerBlockTransactionOutcome, const std::shared_ptr<const AsyncCallerContext>&)> QueryChainMakerBlockTransactionAsyncHandler;
                typedef Outcome<Core::Error, Model::QueryChainMakerContractResponse> QueryChainMakerContractOutcome;
                typedef std::future<QueryChainMakerContractOutcome> QueryChainMakerContractOutcomeCallable;
                typedef std::function<void(const TbaasClient*, const Model::QueryChainMakerContractRequest&, QueryChainMakerContractOutcome, const std::shared_ptr<const AsyncCallerContext>&)> QueryChainMakerContractAsyncHandler;
                typedef Outcome<Core::Error, Model::QueryChainMakerDemoBlockTransactionResponse> QueryChainMakerDemoBlockTransactionOutcome;
                typedef std::future<QueryChainMakerDemoBlockTransactionOutcome> QueryChainMakerDemoBlockTransactionOutcomeCallable;
                typedef std::function<void(const TbaasClient*, const Model::QueryChainMakerDemoBlockTransactionRequest&, QueryChainMakerDemoBlockTransactionOutcome, const std::shared_ptr<const AsyncCallerContext>&)> QueryChainMakerDemoBlockTransactionAsyncHandler;
                typedef Outcome<Core::Error, Model::QueryChainMakerDemoContractResponse> QueryChainMakerDemoContractOutcome;
                typedef std::future<QueryChainMakerDemoContractOutcome> QueryChainMakerDemoContractOutcomeCallable;
                typedef std::function<void(const TbaasClient*, const Model::QueryChainMakerDemoContractRequest&, QueryChainMakerDemoContractOutcome, const std::shared_ptr<const AsyncCallerContext>&)> QueryChainMakerDemoContractAsyncHandler;
                typedef Outcome<Core::Error, Model::QueryChainMakerDemoTransactionResponse> QueryChainMakerDemoTransactionOutcome;
                typedef std::future<QueryChainMakerDemoTransactionOutcome> QueryChainMakerDemoTransactionOutcomeCallable;
                typedef std::function<void(const TbaasClient*, const Model::QueryChainMakerDemoTransactionRequest&, QueryChainMakerDemoTransactionOutcome, const std::shared_ptr<const AsyncCallerContext>&)> QueryChainMakerDemoTransactionAsyncHandler;
                typedef Outcome<Core::Error, Model::QueryChainMakerTransactionResponse> QueryChainMakerTransactionOutcome;
                typedef std::future<QueryChainMakerTransactionOutcome> QueryChainMakerTransactionOutcomeCallable;
                typedef std::function<void(const TbaasClient*, const Model::QueryChainMakerTransactionRequest&, QueryChainMakerTransactionOutcome, const std::shared_ptr<const AsyncCallerContext>&)> QueryChainMakerTransactionAsyncHandler;
                typedef Outcome<Core::Error, Model::QueryFabricChaincodeResponse> QueryFabricChaincodeOutcome;
                typedef std::future<QueryFabricChaincodeOutcome> QueryFabricChaincodeOutcomeCallable;
                typedef std::function<void(const TbaasClient*, const Model::QueryFabricChaincodeRequest&, QueryFabricChaincodeOutcome, const std::shared_ptr<const AsyncCallerContext>&)> QueryFabricChaincodeAsyncHandler;
                typedef Outcome<Core::Error, Model::SrvInvokeResponse> SrvInvokeOutcome;
                typedef std::future<SrvInvokeOutcome> SrvInvokeOutcomeCallable;
                typedef std::function<void(const TbaasClient*, const Model::SrvInvokeRequest&, SrvInvokeOutcome, const std::shared_ptr<const AsyncCallerContext>&)> SrvInvokeAsyncHandler;



                /**
                 *批量申请长安链用户签名证书
                 * @param req ApplyChainMakerBatchUserCertRequest
                 * @return ApplyChainMakerBatchUserCertOutcome
                 */
                ApplyChainMakerBatchUserCertOutcome ApplyChainMakerBatchUserCert(const Model::ApplyChainMakerBatchUserCertRequest &request);
                void ApplyChainMakerBatchUserCertAsync(const Model::ApplyChainMakerBatchUserCertRequest& request, const ApplyChainMakerBatchUserCertAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ApplyChainMakerBatchUserCertOutcomeCallable ApplyChainMakerBatchUserCertCallable(const Model::ApplyChainMakerBatchUserCertRequest& request);

                /**
                 *申请用户证书
                 * @param req ApplyUserCertRequest
                 * @return ApplyUserCertOutcome
                 */
                ApplyUserCertOutcome ApplyUserCert(const Model::ApplyUserCertRequest &request);
                void ApplyUserCertAsync(const Model::ApplyUserCertRequest& request, const ApplyUserCertAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ApplyUserCertOutcomeCallable ApplyUserCertCallable(const Model::ApplyUserCertRequest& request);

                /**
                 *获取Fabric某区块的详细信息
                 * @param req DescribeFabricBlockRequest
                 * @return DescribeFabricBlockOutcome
                 */
                DescribeFabricBlockOutcome DescribeFabricBlock(const Model::DescribeFabricBlockRequest &request);
                void DescribeFabricBlockAsync(const Model::DescribeFabricBlockRequest& request, const DescribeFabricBlockAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeFabricBlockOutcomeCallable DescribeFabricBlockCallable(const Model::DescribeFabricBlockRequest& request);

                /**
                 *获取Fabric交易的详细信息
                 * @param req DescribeFabricTransactionRequest
                 * @return DescribeFabricTransactionOutcome
                 */
                DescribeFabricTransactionOutcome DescribeFabricTransaction(const Model::DescribeFabricTransactionRequest &request);
                void DescribeFabricTransactionAsync(const Model::DescribeFabricTransactionRequest& request, const DescribeFabricTransactionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeFabricTransactionOutcomeCallable DescribeFabricTransactionCallable(const Model::DescribeFabricTransactionRequest& request);

                /**
                 *下载用户证书
                 * @param req DownloadUserCertRequest
                 * @return DownloadUserCertOutcome
                 */
                DownloadUserCertOutcome DownloadUserCert(const Model::DownloadUserCertRequest &request);
                void DownloadUserCertAsync(const Model::DownloadUserCertRequest& request, const DownloadUserCertAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DownloadUserCertOutcomeCallable DownloadUserCertCallable(const Model::DownloadUserCertRequest& request);

                /**
                 *查看当前网络下的所有区块列表，分页展示
                 * @param req GetBlockListRequest
                 * @return GetBlockListOutcome
                 */
                GetBlockListOutcome GetBlockList(const Model::GetBlockListRequest &request);
                void GetBlockListAsync(const Model::GetBlockListRequest& request, const GetBlockListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                GetBlockListOutcomeCallable GetBlockListCallable(const Model::GetBlockListRequest& request);

                /**
                 *获取区块内交易列表
                 * @param req GetBlockTransactionListForUserRequest
                 * @return GetBlockTransactionListForUserOutcome
                 */
                GetBlockTransactionListForUserOutcome GetBlockTransactionListForUser(const Model::GetBlockTransactionListForUserRequest &request);
                void GetBlockTransactionListForUserAsync(const Model::GetBlockTransactionListForUserRequest& request, const GetBlockTransactionListForUserAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                GetBlockTransactionListForUserOutcomeCallable GetBlockTransactionListForUserCallable(const Model::GetBlockTransactionListForUserRequest& request);

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
                 *获取fabric最新交易列表
                 * @param req GetLatestTransactionListRequest
                 * @return GetLatestTransactionListOutcome
                 */
                GetLatestTransactionListOutcome GetLatestTransactionList(const Model::GetLatestTransactionListRequest &request);
                void GetLatestTransactionListAsync(const Model::GetLatestTransactionListRequest& request, const GetLatestTransactionListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                GetLatestTransactionListOutcomeCallable GetLatestTransactionListCallable(const Model::GetLatestTransactionListRequest& request);

                /**
                 *获取交易的详情
                 * @param req GetTransactionDetailForUserRequest
                 * @return GetTransactionDetailForUserOutcome
                 */
                GetTransactionDetailForUserOutcome GetTransactionDetailForUser(const Model::GetTransactionDetailForUserRequest &request);
                void GetTransactionDetailForUserAsync(const Model::GetTransactionDetailForUserRequest& request, const GetTransactionDetailForUserAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                GetTransactionDetailForUserOutcomeCallable GetTransactionDetailForUserCallable(const Model::GetTransactionDetailForUserRequest& request);

                /**
                 *新增交易
                 * @param req InvokeRequest
                 * @return InvokeOutcome
                 */
                InvokeOutcome Invoke(const Model::InvokeRequest &request);
                void InvokeAsync(const Model::InvokeRequest& request, const InvokeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                InvokeOutcomeCallable InvokeCallable(const Model::InvokeRequest& request);

                /**
                 *调用长安链合约执行交易
                 * @param req InvokeChainMakerContractRequest
                 * @return InvokeChainMakerContractOutcome
                 */
                InvokeChainMakerContractOutcome InvokeChainMakerContract(const Model::InvokeChainMakerContractRequest &request);
                void InvokeChainMakerContractAsync(const Model::InvokeChainMakerContractRequest& request, const InvokeChainMakerContractAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                InvokeChainMakerContractOutcomeCallable InvokeChainMakerContractCallable(const Model::InvokeChainMakerContractRequest& request);

                /**
                 *调用长安链体验网络合约执行交易
                 * @param req InvokeChainMakerDemoContractRequest
                 * @return InvokeChainMakerDemoContractOutcome
                 */
                InvokeChainMakerDemoContractOutcome InvokeChainMakerDemoContract(const Model::InvokeChainMakerDemoContractRequest &request);
                void InvokeChainMakerDemoContractAsync(const Model::InvokeChainMakerDemoContractRequest& request, const InvokeChainMakerDemoContractAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                InvokeChainMakerDemoContractOutcomeCallable InvokeChainMakerDemoContractCallable(const Model::InvokeChainMakerDemoContractRequest& request);

                /**
                 *调用Fabric用户合约执行交易
                 * @param req InvokeFabricChaincodeRequest
                 * @return InvokeFabricChaincodeOutcome
                 */
                InvokeFabricChaincodeOutcome InvokeFabricChaincode(const Model::InvokeFabricChaincodeRequest &request);
                void InvokeFabricChaincodeAsync(const Model::InvokeFabricChaincodeRequest& request, const InvokeFabricChaincodeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                InvokeFabricChaincodeOutcomeCallable InvokeFabricChaincodeCallable(const Model::InvokeFabricChaincodeRequest& request);

                /**
                 *查询交易
                 * @param req QueryRequest
                 * @return QueryOutcome
                 */
                QueryOutcome Query(const Model::QueryRequest &request);
                void QueryAsync(const Model::QueryRequest& request, const QueryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                QueryOutcomeCallable QueryCallable(const Model::QueryRequest& request);

                /**
                 *查询长安链指定高度区块的交易
                 * @param req QueryChainMakerBlockTransactionRequest
                 * @return QueryChainMakerBlockTransactionOutcome
                 */
                QueryChainMakerBlockTransactionOutcome QueryChainMakerBlockTransaction(const Model::QueryChainMakerBlockTransactionRequest &request);
                void QueryChainMakerBlockTransactionAsync(const Model::QueryChainMakerBlockTransactionRequest& request, const QueryChainMakerBlockTransactionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                QueryChainMakerBlockTransactionOutcomeCallable QueryChainMakerBlockTransactionCallable(const Model::QueryChainMakerBlockTransactionRequest& request);

                /**
                 *调用长安链合约查询
                 * @param req QueryChainMakerContractRequest
                 * @return QueryChainMakerContractOutcome
                 */
                QueryChainMakerContractOutcome QueryChainMakerContract(const Model::QueryChainMakerContractRequest &request);
                void QueryChainMakerContractAsync(const Model::QueryChainMakerContractRequest& request, const QueryChainMakerContractAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                QueryChainMakerContractOutcomeCallable QueryChainMakerContractCallable(const Model::QueryChainMakerContractRequest& request);

                /**
                 *查询长安链体验网络指定高度区块的交易
                 * @param req QueryChainMakerDemoBlockTransactionRequest
                 * @return QueryChainMakerDemoBlockTransactionOutcome
                 */
                QueryChainMakerDemoBlockTransactionOutcome QueryChainMakerDemoBlockTransaction(const Model::QueryChainMakerDemoBlockTransactionRequest &request);
                void QueryChainMakerDemoBlockTransactionAsync(const Model::QueryChainMakerDemoBlockTransactionRequest& request, const QueryChainMakerDemoBlockTransactionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                QueryChainMakerDemoBlockTransactionOutcomeCallable QueryChainMakerDemoBlockTransactionCallable(const Model::QueryChainMakerDemoBlockTransactionRequest& request);

                /**
                 *调用长安链体验网络合约查询
                 * @param req QueryChainMakerDemoContractRequest
                 * @return QueryChainMakerDemoContractOutcome
                 */
                QueryChainMakerDemoContractOutcome QueryChainMakerDemoContract(const Model::QueryChainMakerDemoContractRequest &request);
                void QueryChainMakerDemoContractAsync(const Model::QueryChainMakerDemoContractRequest& request, const QueryChainMakerDemoContractAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                QueryChainMakerDemoContractOutcomeCallable QueryChainMakerDemoContractCallable(const Model::QueryChainMakerDemoContractRequest& request);

                /**
                 *通过交易ID查询长安链体验网络交易
                 * @param req QueryChainMakerDemoTransactionRequest
                 * @return QueryChainMakerDemoTransactionOutcome
                 */
                QueryChainMakerDemoTransactionOutcome QueryChainMakerDemoTransaction(const Model::QueryChainMakerDemoTransactionRequest &request);
                void QueryChainMakerDemoTransactionAsync(const Model::QueryChainMakerDemoTransactionRequest& request, const QueryChainMakerDemoTransactionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                QueryChainMakerDemoTransactionOutcomeCallable QueryChainMakerDemoTransactionCallable(const Model::QueryChainMakerDemoTransactionRequest& request);

                /**
                 *通过交易ID查询长安链交易
                 * @param req QueryChainMakerTransactionRequest
                 * @return QueryChainMakerTransactionOutcome
                 */
                QueryChainMakerTransactionOutcome QueryChainMakerTransaction(const Model::QueryChainMakerTransactionRequest &request);
                void QueryChainMakerTransactionAsync(const Model::QueryChainMakerTransactionRequest& request, const QueryChainMakerTransactionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                QueryChainMakerTransactionOutcomeCallable QueryChainMakerTransactionCallable(const Model::QueryChainMakerTransactionRequest& request);

                /**
                 *调用Fabric用户合约查询
                 * @param req QueryFabricChaincodeRequest
                 * @return QueryFabricChaincodeOutcome
                 */
                QueryFabricChaincodeOutcome QueryFabricChaincode(const Model::QueryFabricChaincodeRequest &request);
                void QueryFabricChaincodeAsync(const Model::QueryFabricChaincodeRequest& request, const QueryFabricChaincodeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                QueryFabricChaincodeOutcomeCallable QueryFabricChaincodeCallable(const Model::QueryFabricChaincodeRequest& request);

                /**
                 *trustsql服务统一接口
                 * @param req SrvInvokeRequest
                 * @return SrvInvokeOutcome
                 */
                SrvInvokeOutcome SrvInvoke(const Model::SrvInvokeRequest &request);
                void SrvInvokeAsync(const Model::SrvInvokeRequest& request, const SrvInvokeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                SrvInvokeOutcomeCallable SrvInvokeCallable(const Model::SrvInvokeRequest& request);

            };
        }
    }
}

#endif // !TENCENTCLOUD_TBAAS_V20180416_TBAASCLIENT_H_
