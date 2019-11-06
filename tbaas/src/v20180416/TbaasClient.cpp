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

TbaasClient::BlockByNumberHandlerOutcome TbaasClient::BlockByNumberHandler(const BlockByNumberHandlerRequest &request)
{
    auto outcome = MakeRequest(request, "BlockByNumberHandler");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        BlockByNumberHandlerResponse rsp = BlockByNumberHandlerResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return BlockByNumberHandlerOutcome(rsp);
        else
            return BlockByNumberHandlerOutcome(o.GetError());
    }
    else
    {
        return BlockByNumberHandlerOutcome(outcome.GetError());
    }
}

void TbaasClient::BlockByNumberHandlerAsync(const BlockByNumberHandlerRequest& request, const BlockByNumberHandlerAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->BlockByNumberHandler(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TbaasClient::BlockByNumberHandlerOutcomeCallable TbaasClient::BlockByNumberHandlerCallable(const BlockByNumberHandlerRequest &request)
{
    auto task = std::make_shared<std::packaged_task<BlockByNumberHandlerOutcome()>>(
        [this, request]()
        {
            return this->BlockByNumberHandler(request);
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

TbaasClient::GetBlockListHandlerOutcome TbaasClient::GetBlockListHandler(const GetBlockListHandlerRequest &request)
{
    auto outcome = MakeRequest(request, "GetBlockListHandler");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        GetBlockListHandlerResponse rsp = GetBlockListHandlerResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return GetBlockListHandlerOutcome(rsp);
        else
            return GetBlockListHandlerOutcome(o.GetError());
    }
    else
    {
        return GetBlockListHandlerOutcome(outcome.GetError());
    }
}

void TbaasClient::GetBlockListHandlerAsync(const GetBlockListHandlerRequest& request, const GetBlockListHandlerAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->GetBlockListHandler(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TbaasClient::GetBlockListHandlerOutcomeCallable TbaasClient::GetBlockListHandlerCallable(const GetBlockListHandlerRequest &request)
{
    auto task = std::make_shared<std::packaged_task<GetBlockListHandlerOutcome()>>(
        [this, request]()
        {
            return this->GetBlockListHandler(request);
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

TbaasClient::GetLatesdTransactionListOutcome TbaasClient::GetLatesdTransactionList(const GetLatesdTransactionListRequest &request)
{
    auto outcome = MakeRequest(request, "GetLatesdTransactionList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        GetLatesdTransactionListResponse rsp = GetLatesdTransactionListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return GetLatesdTransactionListOutcome(rsp);
        else
            return GetLatesdTransactionListOutcome(o.GetError());
    }
    else
    {
        return GetLatesdTransactionListOutcome(outcome.GetError());
    }
}

void TbaasClient::GetLatesdTransactionListAsync(const GetLatesdTransactionListRequest& request, const GetLatesdTransactionListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->GetLatesdTransactionList(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TbaasClient::GetLatesdTransactionListOutcomeCallable TbaasClient::GetLatesdTransactionListCallable(const GetLatesdTransactionListRequest &request)
{
    auto task = std::make_shared<std::packaged_task<GetLatesdTransactionListOutcome()>>(
        [this, request]()
        {
            return this->GetLatesdTransactionList(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TbaasClient::GetTransByHashHandlerOutcome TbaasClient::GetTransByHashHandler(const GetTransByHashHandlerRequest &request)
{
    auto outcome = MakeRequest(request, "GetTransByHashHandler");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        GetTransByHashHandlerResponse rsp = GetTransByHashHandlerResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return GetTransByHashHandlerOutcome(rsp);
        else
            return GetTransByHashHandlerOutcome(o.GetError());
    }
    else
    {
        return GetTransByHashHandlerOutcome(outcome.GetError());
    }
}

void TbaasClient::GetTransByHashHandlerAsync(const GetTransByHashHandlerRequest& request, const GetTransByHashHandlerAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->GetTransByHashHandler(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TbaasClient::GetTransByHashHandlerOutcomeCallable TbaasClient::GetTransByHashHandlerCallable(const GetTransByHashHandlerRequest &request)
{
    auto task = std::make_shared<std::packaged_task<GetTransByHashHandlerOutcome()>>(
        [this, request]()
        {
            return this->GetTransByHashHandler(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TbaasClient::GetTransListHandlerOutcome TbaasClient::GetTransListHandler(const GetTransListHandlerRequest &request)
{
    auto outcome = MakeRequest(request, "GetTransListHandler");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        GetTransListHandlerResponse rsp = GetTransListHandlerResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return GetTransListHandlerOutcome(rsp);
        else
            return GetTransListHandlerOutcome(o.GetError());
    }
    else
    {
        return GetTransListHandlerOutcome(outcome.GetError());
    }
}

void TbaasClient::GetTransListHandlerAsync(const GetTransListHandlerRequest& request, const GetTransListHandlerAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->GetTransListHandler(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TbaasClient::GetTransListHandlerOutcomeCallable TbaasClient::GetTransListHandlerCallable(const GetTransListHandlerRequest &request)
{
    auto task = std::make_shared<std::packaged_task<GetTransListHandlerOutcome()>>(
        [this, request]()
        {
            return this->GetTransListHandler(request);
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

TbaasClient::SendTransactionHandlerOutcome TbaasClient::SendTransactionHandler(const SendTransactionHandlerRequest &request)
{
    auto outcome = MakeRequest(request, "SendTransactionHandler");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        SendTransactionHandlerResponse rsp = SendTransactionHandlerResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return SendTransactionHandlerOutcome(rsp);
        else
            return SendTransactionHandlerOutcome(o.GetError());
    }
    else
    {
        return SendTransactionHandlerOutcome(outcome.GetError());
    }
}

void TbaasClient::SendTransactionHandlerAsync(const SendTransactionHandlerRequest& request, const SendTransactionHandlerAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->SendTransactionHandler(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TbaasClient::SendTransactionHandlerOutcomeCallable TbaasClient::SendTransactionHandlerCallable(const SendTransactionHandlerRequest &request)
{
    auto task = std::make_shared<std::packaged_task<SendTransactionHandlerOutcome()>>(
        [this, request]()
        {
            return this->SendTransactionHandler(request);
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

