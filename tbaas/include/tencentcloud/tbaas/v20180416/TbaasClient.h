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
#include <tencentcloud/tbaas/v20180416/model/ApplyUserCertRequest.h>
#include <tencentcloud/tbaas/v20180416/model/ApplyUserCertResponse.h>
#include <tencentcloud/tbaas/v20180416/model/BlockByNumberHandlerRequest.h>
#include <tencentcloud/tbaas/v20180416/model/BlockByNumberHandlerResponse.h>
#include <tencentcloud/tbaas/v20180416/model/DeployDynamicContractHandlerRequest.h>
#include <tencentcloud/tbaas/v20180416/model/DeployDynamicContractHandlerResponse.h>
#include <tencentcloud/tbaas/v20180416/model/DownloadUserCertRequest.h>
#include <tencentcloud/tbaas/v20180416/model/DownloadUserCertResponse.h>
#include <tencentcloud/tbaas/v20180416/model/GetBlockListRequest.h>
#include <tencentcloud/tbaas/v20180416/model/GetBlockListResponse.h>
#include <tencentcloud/tbaas/v20180416/model/GetBlockListHandlerRequest.h>
#include <tencentcloud/tbaas/v20180416/model/GetBlockListHandlerResponse.h>
#include <tencentcloud/tbaas/v20180416/model/GetBlockTransactionListForUserRequest.h>
#include <tencentcloud/tbaas/v20180416/model/GetBlockTransactionListForUserResponse.h>
#include <tencentcloud/tbaas/v20180416/model/GetClusterSummaryRequest.h>
#include <tencentcloud/tbaas/v20180416/model/GetClusterSummaryResponse.h>
#include <tencentcloud/tbaas/v20180416/model/GetInvokeTxRequest.h>
#include <tencentcloud/tbaas/v20180416/model/GetInvokeTxResponse.h>
#include <tencentcloud/tbaas/v20180416/model/GetLatesdTransactionListRequest.h>
#include <tencentcloud/tbaas/v20180416/model/GetLatesdTransactionListResponse.h>
#include <tencentcloud/tbaas/v20180416/model/GetTransByHashHandlerRequest.h>
#include <tencentcloud/tbaas/v20180416/model/GetTransByHashHandlerResponse.h>
#include <tencentcloud/tbaas/v20180416/model/GetTransListHandlerRequest.h>
#include <tencentcloud/tbaas/v20180416/model/GetTransListHandlerResponse.h>
#include <tencentcloud/tbaas/v20180416/model/GetTransactionDetailForUserRequest.h>
#include <tencentcloud/tbaas/v20180416/model/GetTransactionDetailForUserResponse.h>
#include <tencentcloud/tbaas/v20180416/model/InvokeRequest.h>
#include <tencentcloud/tbaas/v20180416/model/InvokeResponse.h>
#include <tencentcloud/tbaas/v20180416/model/QueryRequest.h>
#include <tencentcloud/tbaas/v20180416/model/QueryResponse.h>
#include <tencentcloud/tbaas/v20180416/model/SendTransactionHandlerRequest.h>
#include <tencentcloud/tbaas/v20180416/model/SendTransactionHandlerResponse.h>
#include <tencentcloud/tbaas/v20180416/model/SrvInvokeRequest.h>
#include <tencentcloud/tbaas/v20180416/model/SrvInvokeResponse.h>
#include <tencentcloud/tbaas/v20180416/model/TransByDynamicContractHandlerRequest.h>
#include <tencentcloud/tbaas/v20180416/model/TransByDynamicContractHandlerResponse.h>


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

                typedef Outcome<Error, Model::ApplyUserCertResponse> ApplyUserCertOutcome;
                typedef std::future<ApplyUserCertOutcome> ApplyUserCertOutcomeCallable;
                typedef std::function<void(const TbaasClient*, const Model::ApplyUserCertRequest&, ApplyUserCertOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ApplyUserCertAsyncHandler;
                typedef Outcome<Error, Model::BlockByNumberHandlerResponse> BlockByNumberHandlerOutcome;
                typedef std::future<BlockByNumberHandlerOutcome> BlockByNumberHandlerOutcomeCallable;
                typedef std::function<void(const TbaasClient*, const Model::BlockByNumberHandlerRequest&, BlockByNumberHandlerOutcome, const std::shared_ptr<const AsyncCallerContext>&)> BlockByNumberHandlerAsyncHandler;
                typedef Outcome<Error, Model::DeployDynamicContractHandlerResponse> DeployDynamicContractHandlerOutcome;
                typedef std::future<DeployDynamicContractHandlerOutcome> DeployDynamicContractHandlerOutcomeCallable;
                typedef std::function<void(const TbaasClient*, const Model::DeployDynamicContractHandlerRequest&, DeployDynamicContractHandlerOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeployDynamicContractHandlerAsyncHandler;
                typedef Outcome<Error, Model::DownloadUserCertResponse> DownloadUserCertOutcome;
                typedef std::future<DownloadUserCertOutcome> DownloadUserCertOutcomeCallable;
                typedef std::function<void(const TbaasClient*, const Model::DownloadUserCertRequest&, DownloadUserCertOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DownloadUserCertAsyncHandler;
                typedef Outcome<Error, Model::GetBlockListResponse> GetBlockListOutcome;
                typedef std::future<GetBlockListOutcome> GetBlockListOutcomeCallable;
                typedef std::function<void(const TbaasClient*, const Model::GetBlockListRequest&, GetBlockListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> GetBlockListAsyncHandler;
                typedef Outcome<Error, Model::GetBlockListHandlerResponse> GetBlockListHandlerOutcome;
                typedef std::future<GetBlockListHandlerOutcome> GetBlockListHandlerOutcomeCallable;
                typedef std::function<void(const TbaasClient*, const Model::GetBlockListHandlerRequest&, GetBlockListHandlerOutcome, const std::shared_ptr<const AsyncCallerContext>&)> GetBlockListHandlerAsyncHandler;
                typedef Outcome<Error, Model::GetBlockTransactionListForUserResponse> GetBlockTransactionListForUserOutcome;
                typedef std::future<GetBlockTransactionListForUserOutcome> GetBlockTransactionListForUserOutcomeCallable;
                typedef std::function<void(const TbaasClient*, const Model::GetBlockTransactionListForUserRequest&, GetBlockTransactionListForUserOutcome, const std::shared_ptr<const AsyncCallerContext>&)> GetBlockTransactionListForUserAsyncHandler;
                typedef Outcome<Error, Model::GetClusterSummaryResponse> GetClusterSummaryOutcome;
                typedef std::future<GetClusterSummaryOutcome> GetClusterSummaryOutcomeCallable;
                typedef std::function<void(const TbaasClient*, const Model::GetClusterSummaryRequest&, GetClusterSummaryOutcome, const std::shared_ptr<const AsyncCallerContext>&)> GetClusterSummaryAsyncHandler;
                typedef Outcome<Error, Model::GetInvokeTxResponse> GetInvokeTxOutcome;
                typedef std::future<GetInvokeTxOutcome> GetInvokeTxOutcomeCallable;
                typedef std::function<void(const TbaasClient*, const Model::GetInvokeTxRequest&, GetInvokeTxOutcome, const std::shared_ptr<const AsyncCallerContext>&)> GetInvokeTxAsyncHandler;
                typedef Outcome<Error, Model::GetLatesdTransactionListResponse> GetLatesdTransactionListOutcome;
                typedef std::future<GetLatesdTransactionListOutcome> GetLatesdTransactionListOutcomeCallable;
                typedef std::function<void(const TbaasClient*, const Model::GetLatesdTransactionListRequest&, GetLatesdTransactionListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> GetLatesdTransactionListAsyncHandler;
                typedef Outcome<Error, Model::GetTransByHashHandlerResponse> GetTransByHashHandlerOutcome;
                typedef std::future<GetTransByHashHandlerOutcome> GetTransByHashHandlerOutcomeCallable;
                typedef std::function<void(const TbaasClient*, const Model::GetTransByHashHandlerRequest&, GetTransByHashHandlerOutcome, const std::shared_ptr<const AsyncCallerContext>&)> GetTransByHashHandlerAsyncHandler;
                typedef Outcome<Error, Model::GetTransListHandlerResponse> GetTransListHandlerOutcome;
                typedef std::future<GetTransListHandlerOutcome> GetTransListHandlerOutcomeCallable;
                typedef std::function<void(const TbaasClient*, const Model::GetTransListHandlerRequest&, GetTransListHandlerOutcome, const std::shared_ptr<const AsyncCallerContext>&)> GetTransListHandlerAsyncHandler;
                typedef Outcome<Error, Model::GetTransactionDetailForUserResponse> GetTransactionDetailForUserOutcome;
                typedef std::future<GetTransactionDetailForUserOutcome> GetTransactionDetailForUserOutcomeCallable;
                typedef std::function<void(const TbaasClient*, const Model::GetTransactionDetailForUserRequest&, GetTransactionDetailForUserOutcome, const std::shared_ptr<const AsyncCallerContext>&)> GetTransactionDetailForUserAsyncHandler;
                typedef Outcome<Error, Model::InvokeResponse> InvokeOutcome;
                typedef std::future<InvokeOutcome> InvokeOutcomeCallable;
                typedef std::function<void(const TbaasClient*, const Model::InvokeRequest&, InvokeOutcome, const std::shared_ptr<const AsyncCallerContext>&)> InvokeAsyncHandler;
                typedef Outcome<Error, Model::QueryResponse> QueryOutcome;
                typedef std::future<QueryOutcome> QueryOutcomeCallable;
                typedef std::function<void(const TbaasClient*, const Model::QueryRequest&, QueryOutcome, const std::shared_ptr<const AsyncCallerContext>&)> QueryAsyncHandler;
                typedef Outcome<Error, Model::SendTransactionHandlerResponse> SendTransactionHandlerOutcome;
                typedef std::future<SendTransactionHandlerOutcome> SendTransactionHandlerOutcomeCallable;
                typedef std::function<void(const TbaasClient*, const Model::SendTransactionHandlerRequest&, SendTransactionHandlerOutcome, const std::shared_ptr<const AsyncCallerContext>&)> SendTransactionHandlerAsyncHandler;
                typedef Outcome<Error, Model::SrvInvokeResponse> SrvInvokeOutcome;
                typedef std::future<SrvInvokeOutcome> SrvInvokeOutcomeCallable;
                typedef std::function<void(const TbaasClient*, const Model::SrvInvokeRequest&, SrvInvokeOutcome, const std::shared_ptr<const AsyncCallerContext>&)> SrvInvokeAsyncHandler;
                typedef Outcome<Error, Model::TransByDynamicContractHandlerResponse> TransByDynamicContractHandlerOutcome;
                typedef std::future<TransByDynamicContractHandlerOutcome> TransByDynamicContractHandlerOutcomeCallable;
                typedef std::function<void(const TbaasClient*, const Model::TransByDynamicContractHandlerRequest&, TransByDynamicContractHandlerOutcome, const std::shared_ptr<const AsyncCallerContext>&)> TransByDynamicContractHandlerAsyncHandler;



                /**
                 *申请用户证书
                 * @param req ApplyUserCertRequest
                 * @return ApplyUserCertOutcome
                 */
                ApplyUserCertOutcome ApplyUserCert(const Model::ApplyUserCertRequest &request);
                void ApplyUserCertAsync(const Model::ApplyUserCertRequest& request, const ApplyUserCertAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ApplyUserCertOutcomeCallable ApplyUserCertCallable(const Model::ApplyUserCertRequest& request);

                /**
                 *Bcos根据块高查询区块信息
                 * @param req BlockByNumberHandlerRequest
                 * @return BlockByNumberHandlerOutcome
                 */
                BlockByNumberHandlerOutcome BlockByNumberHandler(const Model::BlockByNumberHandlerRequest &request);
                void BlockByNumberHandlerAsync(const Model::BlockByNumberHandlerRequest& request, const BlockByNumberHandlerAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                BlockByNumberHandlerOutcomeCallable BlockByNumberHandlerCallable(const Model::BlockByNumberHandlerRequest& request);

                /**
                 *动态部署合约
                 * @param req DeployDynamicContractHandlerRequest
                 * @return DeployDynamicContractHandlerOutcome
                 */
                DeployDynamicContractHandlerOutcome DeployDynamicContractHandler(const Model::DeployDynamicContractHandlerRequest &request);
                void DeployDynamicContractHandlerAsync(const Model::DeployDynamicContractHandlerRequest& request, const DeployDynamicContractHandlerAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeployDynamicContractHandlerOutcomeCallable DeployDynamicContractHandlerCallable(const Model::DeployDynamicContractHandlerRequest& request);

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
                 *Bcos分页查询当前群组下的区块列表
                 * @param req GetBlockListHandlerRequest
                 * @return GetBlockListHandlerOutcome
                 */
                GetBlockListHandlerOutcome GetBlockListHandler(const Model::GetBlockListHandlerRequest &request);
                void GetBlockListHandlerAsync(const Model::GetBlockListHandlerRequest& request, const GetBlockListHandlerAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                GetBlockListHandlerOutcomeCallable GetBlockListHandlerCallable(const Model::GetBlockListHandlerRequest& request);

                /**
                 *获取区块内的交易列表
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
                 *获取最新交易列表
                 * @param req GetLatesdTransactionListRequest
                 * @return GetLatesdTransactionListOutcome
                 */
                GetLatesdTransactionListOutcome GetLatesdTransactionList(const Model::GetLatesdTransactionListRequest &request);
                void GetLatesdTransactionListAsync(const Model::GetLatesdTransactionListRequest& request, const GetLatesdTransactionListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                GetLatesdTransactionListOutcomeCallable GetLatesdTransactionListCallable(const Model::GetLatesdTransactionListRequest& request);

                /**
                 *Bcos根据交易哈希查看交易详细信息
                 * @param req GetTransByHashHandlerRequest
                 * @return GetTransByHashHandlerOutcome
                 */
                GetTransByHashHandlerOutcome GetTransByHashHandler(const Model::GetTransByHashHandlerRequest &request);
                void GetTransByHashHandlerAsync(const Model::GetTransByHashHandlerRequest& request, const GetTransByHashHandlerAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                GetTransByHashHandlerOutcomeCallable GetTransByHashHandlerCallable(const Model::GetTransByHashHandlerRequest& request);

                /**
                 *Bcos分页查询当前群组的交易信息列表
                 * @param req GetTransListHandlerRequest
                 * @return GetTransListHandlerOutcome
                 */
                GetTransListHandlerOutcome GetTransListHandler(const Model::GetTransListHandlerRequest &request);
                void GetTransListHandlerAsync(const Model::GetTransListHandlerRequest& request, const GetTransListHandlerAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                GetTransListHandlerOutcomeCallable GetTransListHandlerCallable(const Model::GetTransListHandlerRequest& request);

                /**
                 *获取交易详情
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
                 *查询交易
                 * @param req QueryRequest
                 * @return QueryOutcome
                 */
                QueryOutcome Query(const Model::QueryRequest &request);
                void QueryAsync(const Model::QueryRequest& request, const QueryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                QueryOutcomeCallable QueryCallable(const Model::QueryRequest& request);

                /**
                 *Bcos发送交易
                 * @param req SendTransactionHandlerRequest
                 * @return SendTransactionHandlerOutcome
                 */
                SendTransactionHandlerOutcome SendTransactionHandler(const Model::SendTransactionHandlerRequest &request);
                void SendTransactionHandlerAsync(const Model::SendTransactionHandlerRequest& request, const SendTransactionHandlerAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                SendTransactionHandlerOutcomeCallable SendTransactionHandlerCallable(const Model::SendTransactionHandlerRequest& request);

                /**
                 *trustsql服务统一接口
                 * @param req SrvInvokeRequest
                 * @return SrvInvokeOutcome
                 */
                SrvInvokeOutcome SrvInvoke(const Model::SrvInvokeRequest &request);
                void SrvInvokeAsync(const Model::SrvInvokeRequest& request, const SrvInvokeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                SrvInvokeOutcomeCallable SrvInvokeCallable(const Model::SrvInvokeRequest& request);

                /**
                 *根据动态部署的合约发送交易
                 * @param req TransByDynamicContractHandlerRequest
                 * @return TransByDynamicContractHandlerOutcome
                 */
                TransByDynamicContractHandlerOutcome TransByDynamicContractHandler(const Model::TransByDynamicContractHandlerRequest &request);
                void TransByDynamicContractHandlerAsync(const Model::TransByDynamicContractHandlerRequest& request, const TransByDynamicContractHandlerAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                TransByDynamicContractHandlerOutcomeCallable TransByDynamicContractHandlerCallable(const Model::TransByDynamicContractHandlerRequest& request);

            };
        }
    }
}

#endif // !TENCENTCLOUD_TBAAS_V20180416_TBAASCLIENT_H_
