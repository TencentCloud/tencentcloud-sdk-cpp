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

#include <tencentcloud/tbaas/v20180416/TbaasClient.h>
#include <tencentcloud/core/Executor.h>
#include <tencentcloud/core/Runnable.h>

using namespace TencentCloud;
using namespace TencentCloud::Tbaas::V20180416;
using namespace TencentCloud::Tbaas::V20180416::Model;
using namespace std;

namespace
{
    const string VERSION = "2018-04-16";
    const string ENDPOINT = "tbaas.tencentcloudapi.com";
}

TbaasClient::TbaasClient(const Credential &credential, const string &region) :
    TbaasClient(credential, region, ClientProfile())
{
}

TbaasClient::TbaasClient(const Credential &credential, const string &region, const ClientProfile &profile) :
    AbstractClient(ENDPOINT, VERSION, credential, region, profile)
{
}


TbaasClient::ApplyChainMakerBatchUserCertOutcome TbaasClient::ApplyChainMakerBatchUserCert(const ApplyChainMakerBatchUserCertRequest &request)
{
    auto outcome = MakeRequest(request, "ApplyChainMakerBatchUserCert");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ApplyChainMakerBatchUserCertResponse rsp = ApplyChainMakerBatchUserCertResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ApplyChainMakerBatchUserCertOutcome(rsp);
        else
            return ApplyChainMakerBatchUserCertOutcome(o.GetError());
    }
    else
    {
        return ApplyChainMakerBatchUserCertOutcome(outcome.GetError());
    }
}

void TbaasClient::ApplyChainMakerBatchUserCertAsync(const ApplyChainMakerBatchUserCertRequest& request, const ApplyChainMakerBatchUserCertAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ApplyChainMakerBatchUserCert(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TbaasClient::ApplyChainMakerBatchUserCertOutcomeCallable TbaasClient::ApplyChainMakerBatchUserCertCallable(const ApplyChainMakerBatchUserCertRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ApplyChainMakerBatchUserCertOutcome()>>(
        [this, request]()
        {
            return this->ApplyChainMakerBatchUserCert(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TbaasClient::ApplyUserCertOutcome TbaasClient::ApplyUserCert(const ApplyUserCertRequest &request)
{
    auto outcome = MakeRequest(request, "ApplyUserCert");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ApplyUserCertResponse rsp = ApplyUserCertResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ApplyUserCertOutcome(rsp);
        else
            return ApplyUserCertOutcome(o.GetError());
    }
    else
    {
        return ApplyUserCertOutcome(outcome.GetError());
    }
}

void TbaasClient::ApplyUserCertAsync(const ApplyUserCertRequest& request, const ApplyUserCertAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ApplyUserCert(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TbaasClient::ApplyUserCertOutcomeCallable TbaasClient::ApplyUserCertCallable(const ApplyUserCertRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ApplyUserCertOutcome()>>(
        [this, request]()
        {
            return this->ApplyUserCert(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TbaasClient::DescribeFabricBlockOutcome TbaasClient::DescribeFabricBlock(const DescribeFabricBlockRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeFabricBlock");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeFabricBlockResponse rsp = DescribeFabricBlockResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeFabricBlockOutcome(rsp);
        else
            return DescribeFabricBlockOutcome(o.GetError());
    }
    else
    {
        return DescribeFabricBlockOutcome(outcome.GetError());
    }
}

void TbaasClient::DescribeFabricBlockAsync(const DescribeFabricBlockRequest& request, const DescribeFabricBlockAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeFabricBlock(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TbaasClient::DescribeFabricBlockOutcomeCallable TbaasClient::DescribeFabricBlockCallable(const DescribeFabricBlockRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeFabricBlockOutcome()>>(
        [this, request]()
        {
            return this->DescribeFabricBlock(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TbaasClient::DescribeFabricTransactionOutcome TbaasClient::DescribeFabricTransaction(const DescribeFabricTransactionRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeFabricTransaction");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeFabricTransactionResponse rsp = DescribeFabricTransactionResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeFabricTransactionOutcome(rsp);
        else
            return DescribeFabricTransactionOutcome(o.GetError());
    }
    else
    {
        return DescribeFabricTransactionOutcome(outcome.GetError());
    }
}

void TbaasClient::DescribeFabricTransactionAsync(const DescribeFabricTransactionRequest& request, const DescribeFabricTransactionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeFabricTransaction(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TbaasClient::DescribeFabricTransactionOutcomeCallable TbaasClient::DescribeFabricTransactionCallable(const DescribeFabricTransactionRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeFabricTransactionOutcome()>>(
        [this, request]()
        {
            return this->DescribeFabricTransaction(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TbaasClient::DownloadUserCertOutcome TbaasClient::DownloadUserCert(const DownloadUserCertRequest &request)
{
    auto outcome = MakeRequest(request, "DownloadUserCert");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DownloadUserCertResponse rsp = DownloadUserCertResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DownloadUserCertOutcome(rsp);
        else
            return DownloadUserCertOutcome(o.GetError());
    }
    else
    {
        return DownloadUserCertOutcome(outcome.GetError());
    }
}

void TbaasClient::DownloadUserCertAsync(const DownloadUserCertRequest& request, const DownloadUserCertAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DownloadUserCert(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TbaasClient::DownloadUserCertOutcomeCallable TbaasClient::DownloadUserCertCallable(const DownloadUserCertRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DownloadUserCertOutcome()>>(
        [this, request]()
        {
            return this->DownloadUserCert(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TbaasClient::GetBlockListOutcome TbaasClient::GetBlockList(const GetBlockListRequest &request)
{
    auto outcome = MakeRequest(request, "GetBlockList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        GetBlockListResponse rsp = GetBlockListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return GetBlockListOutcome(rsp);
        else
            return GetBlockListOutcome(o.GetError());
    }
    else
    {
        return GetBlockListOutcome(outcome.GetError());
    }
}

void TbaasClient::GetBlockListAsync(const GetBlockListRequest& request, const GetBlockListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->GetBlockList(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TbaasClient::GetBlockListOutcomeCallable TbaasClient::GetBlockListCallable(const GetBlockListRequest &request)
{
    auto task = std::make_shared<std::packaged_task<GetBlockListOutcome()>>(
        [this, request]()
        {
            return this->GetBlockList(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TbaasClient::GetBlockTransactionListForUserOutcome TbaasClient::GetBlockTransactionListForUser(const GetBlockTransactionListForUserRequest &request)
{
    auto outcome = MakeRequest(request, "GetBlockTransactionListForUser");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        GetBlockTransactionListForUserResponse rsp = GetBlockTransactionListForUserResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return GetBlockTransactionListForUserOutcome(rsp);
        else
            return GetBlockTransactionListForUserOutcome(o.GetError());
    }
    else
    {
        return GetBlockTransactionListForUserOutcome(outcome.GetError());
    }
}

void TbaasClient::GetBlockTransactionListForUserAsync(const GetBlockTransactionListForUserRequest& request, const GetBlockTransactionListForUserAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->GetBlockTransactionListForUser(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TbaasClient::GetBlockTransactionListForUserOutcomeCallable TbaasClient::GetBlockTransactionListForUserCallable(const GetBlockTransactionListForUserRequest &request)
{
    auto task = std::make_shared<std::packaged_task<GetBlockTransactionListForUserOutcome()>>(
        [this, request]()
        {
            return this->GetBlockTransactionListForUser(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TbaasClient::GetClusterSummaryOutcome TbaasClient::GetClusterSummary(const GetClusterSummaryRequest &request)
{
    auto outcome = MakeRequest(request, "GetClusterSummary");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        GetClusterSummaryResponse rsp = GetClusterSummaryResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return GetClusterSummaryOutcome(rsp);
        else
            return GetClusterSummaryOutcome(o.GetError());
    }
    else
    {
        return GetClusterSummaryOutcome(outcome.GetError());
    }
}

void TbaasClient::GetClusterSummaryAsync(const GetClusterSummaryRequest& request, const GetClusterSummaryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->GetClusterSummary(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TbaasClient::GetClusterSummaryOutcomeCallable TbaasClient::GetClusterSummaryCallable(const GetClusterSummaryRequest &request)
{
    auto task = std::make_shared<std::packaged_task<GetClusterSummaryOutcome()>>(
        [this, request]()
        {
            return this->GetClusterSummary(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TbaasClient::GetInvokeTxOutcome TbaasClient::GetInvokeTx(const GetInvokeTxRequest &request)
{
    auto outcome = MakeRequest(request, "GetInvokeTx");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        GetInvokeTxResponse rsp = GetInvokeTxResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return GetInvokeTxOutcome(rsp);
        else
            return GetInvokeTxOutcome(o.GetError());
    }
    else
    {
        return GetInvokeTxOutcome(outcome.GetError());
    }
}

void TbaasClient::GetInvokeTxAsync(const GetInvokeTxRequest& request, const GetInvokeTxAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->GetInvokeTx(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TbaasClient::GetInvokeTxOutcomeCallable TbaasClient::GetInvokeTxCallable(const GetInvokeTxRequest &request)
{
    auto task = std::make_shared<std::packaged_task<GetInvokeTxOutcome()>>(
        [this, request]()
        {
            return this->GetInvokeTx(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TbaasClient::GetLatestTransactionListOutcome TbaasClient::GetLatestTransactionList(const GetLatestTransactionListRequest &request)
{
    auto outcome = MakeRequest(request, "GetLatestTransactionList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        GetLatestTransactionListResponse rsp = GetLatestTransactionListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return GetLatestTransactionListOutcome(rsp);
        else
            return GetLatestTransactionListOutcome(o.GetError());
    }
    else
    {
        return GetLatestTransactionListOutcome(outcome.GetError());
    }
}

void TbaasClient::GetLatestTransactionListAsync(const GetLatestTransactionListRequest& request, const GetLatestTransactionListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->GetLatestTransactionList(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TbaasClient::GetLatestTransactionListOutcomeCallable TbaasClient::GetLatestTransactionListCallable(const GetLatestTransactionListRequest &request)
{
    auto task = std::make_shared<std::packaged_task<GetLatestTransactionListOutcome()>>(
        [this, request]()
        {
            return this->GetLatestTransactionList(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TbaasClient::GetTransactionDetailForUserOutcome TbaasClient::GetTransactionDetailForUser(const GetTransactionDetailForUserRequest &request)
{
    auto outcome = MakeRequest(request, "GetTransactionDetailForUser");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        GetTransactionDetailForUserResponse rsp = GetTransactionDetailForUserResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return GetTransactionDetailForUserOutcome(rsp);
        else
            return GetTransactionDetailForUserOutcome(o.GetError());
    }
    else
    {
        return GetTransactionDetailForUserOutcome(outcome.GetError());
    }
}

void TbaasClient::GetTransactionDetailForUserAsync(const GetTransactionDetailForUserRequest& request, const GetTransactionDetailForUserAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->GetTransactionDetailForUser(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TbaasClient::GetTransactionDetailForUserOutcomeCallable TbaasClient::GetTransactionDetailForUserCallable(const GetTransactionDetailForUserRequest &request)
{
    auto task = std::make_shared<std::packaged_task<GetTransactionDetailForUserOutcome()>>(
        [this, request]()
        {
            return this->GetTransactionDetailForUser(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TbaasClient::InvokeOutcome TbaasClient::Invoke(const InvokeRequest &request)
{
    auto outcome = MakeRequest(request, "Invoke");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        InvokeResponse rsp = InvokeResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return InvokeOutcome(rsp);
        else
            return InvokeOutcome(o.GetError());
    }
    else
    {
        return InvokeOutcome(outcome.GetError());
    }
}

void TbaasClient::InvokeAsync(const InvokeRequest& request, const InvokeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->Invoke(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TbaasClient::InvokeOutcomeCallable TbaasClient::InvokeCallable(const InvokeRequest &request)
{
    auto task = std::make_shared<std::packaged_task<InvokeOutcome()>>(
        [this, request]()
        {
            return this->Invoke(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TbaasClient::InvokeChainMakerContractOutcome TbaasClient::InvokeChainMakerContract(const InvokeChainMakerContractRequest &request)
{
    auto outcome = MakeRequest(request, "InvokeChainMakerContract");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        InvokeChainMakerContractResponse rsp = InvokeChainMakerContractResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return InvokeChainMakerContractOutcome(rsp);
        else
            return InvokeChainMakerContractOutcome(o.GetError());
    }
    else
    {
        return InvokeChainMakerContractOutcome(outcome.GetError());
    }
}

void TbaasClient::InvokeChainMakerContractAsync(const InvokeChainMakerContractRequest& request, const InvokeChainMakerContractAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->InvokeChainMakerContract(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TbaasClient::InvokeChainMakerContractOutcomeCallable TbaasClient::InvokeChainMakerContractCallable(const InvokeChainMakerContractRequest &request)
{
    auto task = std::make_shared<std::packaged_task<InvokeChainMakerContractOutcome()>>(
        [this, request]()
        {
            return this->InvokeChainMakerContract(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TbaasClient::InvokeChainMakerDemoContractOutcome TbaasClient::InvokeChainMakerDemoContract(const InvokeChainMakerDemoContractRequest &request)
{
    auto outcome = MakeRequest(request, "InvokeChainMakerDemoContract");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        InvokeChainMakerDemoContractResponse rsp = InvokeChainMakerDemoContractResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return InvokeChainMakerDemoContractOutcome(rsp);
        else
            return InvokeChainMakerDemoContractOutcome(o.GetError());
    }
    else
    {
        return InvokeChainMakerDemoContractOutcome(outcome.GetError());
    }
}

void TbaasClient::InvokeChainMakerDemoContractAsync(const InvokeChainMakerDemoContractRequest& request, const InvokeChainMakerDemoContractAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->InvokeChainMakerDemoContract(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TbaasClient::InvokeChainMakerDemoContractOutcomeCallable TbaasClient::InvokeChainMakerDemoContractCallable(const InvokeChainMakerDemoContractRequest &request)
{
    auto task = std::make_shared<std::packaged_task<InvokeChainMakerDemoContractOutcome()>>(
        [this, request]()
        {
            return this->InvokeChainMakerDemoContract(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TbaasClient::InvokeFabricChaincodeOutcome TbaasClient::InvokeFabricChaincode(const InvokeFabricChaincodeRequest &request)
{
    auto outcome = MakeRequest(request, "InvokeFabricChaincode");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        InvokeFabricChaincodeResponse rsp = InvokeFabricChaincodeResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return InvokeFabricChaincodeOutcome(rsp);
        else
            return InvokeFabricChaincodeOutcome(o.GetError());
    }
    else
    {
        return InvokeFabricChaincodeOutcome(outcome.GetError());
    }
}

void TbaasClient::InvokeFabricChaincodeAsync(const InvokeFabricChaincodeRequest& request, const InvokeFabricChaincodeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->InvokeFabricChaincode(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TbaasClient::InvokeFabricChaincodeOutcomeCallable TbaasClient::InvokeFabricChaincodeCallable(const InvokeFabricChaincodeRequest &request)
{
    auto task = std::make_shared<std::packaged_task<InvokeFabricChaincodeOutcome()>>(
        [this, request]()
        {
            return this->InvokeFabricChaincode(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TbaasClient::QueryOutcome TbaasClient::Query(const QueryRequest &request)
{
    auto outcome = MakeRequest(request, "Query");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        QueryResponse rsp = QueryResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return QueryOutcome(rsp);
        else
            return QueryOutcome(o.GetError());
    }
    else
    {
        return QueryOutcome(outcome.GetError());
    }
}

void TbaasClient::QueryAsync(const QueryRequest& request, const QueryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->Query(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TbaasClient::QueryOutcomeCallable TbaasClient::QueryCallable(const QueryRequest &request)
{
    auto task = std::make_shared<std::packaged_task<QueryOutcome()>>(
        [this, request]()
        {
            return this->Query(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TbaasClient::QueryChainMakerBlockTransactionOutcome TbaasClient::QueryChainMakerBlockTransaction(const QueryChainMakerBlockTransactionRequest &request)
{
    auto outcome = MakeRequest(request, "QueryChainMakerBlockTransaction");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        QueryChainMakerBlockTransactionResponse rsp = QueryChainMakerBlockTransactionResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return QueryChainMakerBlockTransactionOutcome(rsp);
        else
            return QueryChainMakerBlockTransactionOutcome(o.GetError());
    }
    else
    {
        return QueryChainMakerBlockTransactionOutcome(outcome.GetError());
    }
}

void TbaasClient::QueryChainMakerBlockTransactionAsync(const QueryChainMakerBlockTransactionRequest& request, const QueryChainMakerBlockTransactionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->QueryChainMakerBlockTransaction(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TbaasClient::QueryChainMakerBlockTransactionOutcomeCallable TbaasClient::QueryChainMakerBlockTransactionCallable(const QueryChainMakerBlockTransactionRequest &request)
{
    auto task = std::make_shared<std::packaged_task<QueryChainMakerBlockTransactionOutcome()>>(
        [this, request]()
        {
            return this->QueryChainMakerBlockTransaction(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TbaasClient::QueryChainMakerContractOutcome TbaasClient::QueryChainMakerContract(const QueryChainMakerContractRequest &request)
{
    auto outcome = MakeRequest(request, "QueryChainMakerContract");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        QueryChainMakerContractResponse rsp = QueryChainMakerContractResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return QueryChainMakerContractOutcome(rsp);
        else
            return QueryChainMakerContractOutcome(o.GetError());
    }
    else
    {
        return QueryChainMakerContractOutcome(outcome.GetError());
    }
}

void TbaasClient::QueryChainMakerContractAsync(const QueryChainMakerContractRequest& request, const QueryChainMakerContractAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->QueryChainMakerContract(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TbaasClient::QueryChainMakerContractOutcomeCallable TbaasClient::QueryChainMakerContractCallable(const QueryChainMakerContractRequest &request)
{
    auto task = std::make_shared<std::packaged_task<QueryChainMakerContractOutcome()>>(
        [this, request]()
        {
            return this->QueryChainMakerContract(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TbaasClient::QueryChainMakerDemoBlockTransactionOutcome TbaasClient::QueryChainMakerDemoBlockTransaction(const QueryChainMakerDemoBlockTransactionRequest &request)
{
    auto outcome = MakeRequest(request, "QueryChainMakerDemoBlockTransaction");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        QueryChainMakerDemoBlockTransactionResponse rsp = QueryChainMakerDemoBlockTransactionResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return QueryChainMakerDemoBlockTransactionOutcome(rsp);
        else
            return QueryChainMakerDemoBlockTransactionOutcome(o.GetError());
    }
    else
    {
        return QueryChainMakerDemoBlockTransactionOutcome(outcome.GetError());
    }
}

void TbaasClient::QueryChainMakerDemoBlockTransactionAsync(const QueryChainMakerDemoBlockTransactionRequest& request, const QueryChainMakerDemoBlockTransactionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->QueryChainMakerDemoBlockTransaction(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TbaasClient::QueryChainMakerDemoBlockTransactionOutcomeCallable TbaasClient::QueryChainMakerDemoBlockTransactionCallable(const QueryChainMakerDemoBlockTransactionRequest &request)
{
    auto task = std::make_shared<std::packaged_task<QueryChainMakerDemoBlockTransactionOutcome()>>(
        [this, request]()
        {
            return this->QueryChainMakerDemoBlockTransaction(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TbaasClient::QueryChainMakerDemoContractOutcome TbaasClient::QueryChainMakerDemoContract(const QueryChainMakerDemoContractRequest &request)
{
    auto outcome = MakeRequest(request, "QueryChainMakerDemoContract");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        QueryChainMakerDemoContractResponse rsp = QueryChainMakerDemoContractResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return QueryChainMakerDemoContractOutcome(rsp);
        else
            return QueryChainMakerDemoContractOutcome(o.GetError());
    }
    else
    {
        return QueryChainMakerDemoContractOutcome(outcome.GetError());
    }
}

void TbaasClient::QueryChainMakerDemoContractAsync(const QueryChainMakerDemoContractRequest& request, const QueryChainMakerDemoContractAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->QueryChainMakerDemoContract(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TbaasClient::QueryChainMakerDemoContractOutcomeCallable TbaasClient::QueryChainMakerDemoContractCallable(const QueryChainMakerDemoContractRequest &request)
{
    auto task = std::make_shared<std::packaged_task<QueryChainMakerDemoContractOutcome()>>(
        [this, request]()
        {
            return this->QueryChainMakerDemoContract(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TbaasClient::QueryChainMakerDemoTransactionOutcome TbaasClient::QueryChainMakerDemoTransaction(const QueryChainMakerDemoTransactionRequest &request)
{
    auto outcome = MakeRequest(request, "QueryChainMakerDemoTransaction");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        QueryChainMakerDemoTransactionResponse rsp = QueryChainMakerDemoTransactionResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return QueryChainMakerDemoTransactionOutcome(rsp);
        else
            return QueryChainMakerDemoTransactionOutcome(o.GetError());
    }
    else
    {
        return QueryChainMakerDemoTransactionOutcome(outcome.GetError());
    }
}

void TbaasClient::QueryChainMakerDemoTransactionAsync(const QueryChainMakerDemoTransactionRequest& request, const QueryChainMakerDemoTransactionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->QueryChainMakerDemoTransaction(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TbaasClient::QueryChainMakerDemoTransactionOutcomeCallable TbaasClient::QueryChainMakerDemoTransactionCallable(const QueryChainMakerDemoTransactionRequest &request)
{
    auto task = std::make_shared<std::packaged_task<QueryChainMakerDemoTransactionOutcome()>>(
        [this, request]()
        {
            return this->QueryChainMakerDemoTransaction(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TbaasClient::QueryChainMakerTransactionOutcome TbaasClient::QueryChainMakerTransaction(const QueryChainMakerTransactionRequest &request)
{
    auto outcome = MakeRequest(request, "QueryChainMakerTransaction");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        QueryChainMakerTransactionResponse rsp = QueryChainMakerTransactionResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return QueryChainMakerTransactionOutcome(rsp);
        else
            return QueryChainMakerTransactionOutcome(o.GetError());
    }
    else
    {
        return QueryChainMakerTransactionOutcome(outcome.GetError());
    }
}

void TbaasClient::QueryChainMakerTransactionAsync(const QueryChainMakerTransactionRequest& request, const QueryChainMakerTransactionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->QueryChainMakerTransaction(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TbaasClient::QueryChainMakerTransactionOutcomeCallable TbaasClient::QueryChainMakerTransactionCallable(const QueryChainMakerTransactionRequest &request)
{
    auto task = std::make_shared<std::packaged_task<QueryChainMakerTransactionOutcome()>>(
        [this, request]()
        {
            return this->QueryChainMakerTransaction(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TbaasClient::QueryFabricChaincodeOutcome TbaasClient::QueryFabricChaincode(const QueryFabricChaincodeRequest &request)
{
    auto outcome = MakeRequest(request, "QueryFabricChaincode");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        QueryFabricChaincodeResponse rsp = QueryFabricChaincodeResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return QueryFabricChaincodeOutcome(rsp);
        else
            return QueryFabricChaincodeOutcome(o.GetError());
    }
    else
    {
        return QueryFabricChaincodeOutcome(outcome.GetError());
    }
}

void TbaasClient::QueryFabricChaincodeAsync(const QueryFabricChaincodeRequest& request, const QueryFabricChaincodeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->QueryFabricChaincode(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TbaasClient::QueryFabricChaincodeOutcomeCallable TbaasClient::QueryFabricChaincodeCallable(const QueryFabricChaincodeRequest &request)
{
    auto task = std::make_shared<std::packaged_task<QueryFabricChaincodeOutcome()>>(
        [this, request]()
        {
            return this->QueryFabricChaincode(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TbaasClient::SrvInvokeOutcome TbaasClient::SrvInvoke(const SrvInvokeRequest &request)
{
    auto outcome = MakeRequest(request, "SrvInvoke");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        SrvInvokeResponse rsp = SrvInvokeResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return SrvInvokeOutcome(rsp);
        else
            return SrvInvokeOutcome(o.GetError());
    }
    else
    {
        return SrvInvokeOutcome(outcome.GetError());
    }
}

void TbaasClient::SrvInvokeAsync(const SrvInvokeRequest& request, const SrvInvokeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->SrvInvoke(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TbaasClient::SrvInvokeOutcomeCallable TbaasClient::SrvInvokeCallable(const SrvInvokeRequest &request)
{
    auto task = std::make_shared<std::packaged_task<SrvInvokeOutcome()>>(
        [this, request]()
        {
            return this->SrvInvoke(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

