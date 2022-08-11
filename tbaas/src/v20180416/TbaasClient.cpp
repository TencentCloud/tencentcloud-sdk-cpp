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

TbaasClient::CreateChaincodeAndInstallForUserOutcome TbaasClient::CreateChaincodeAndInstallForUser(const CreateChaincodeAndInstallForUserRequest &request)
{
    auto outcome = MakeRequest(request, "CreateChaincodeAndInstallForUser");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateChaincodeAndInstallForUserResponse rsp = CreateChaincodeAndInstallForUserResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateChaincodeAndInstallForUserOutcome(rsp);
        else
            return CreateChaincodeAndInstallForUserOutcome(o.GetError());
    }
    else
    {
        return CreateChaincodeAndInstallForUserOutcome(outcome.GetError());
    }
}

void TbaasClient::CreateChaincodeAndInstallForUserAsync(const CreateChaincodeAndInstallForUserRequest& request, const CreateChaincodeAndInstallForUserAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateChaincodeAndInstallForUser(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TbaasClient::CreateChaincodeAndInstallForUserOutcomeCallable TbaasClient::CreateChaincodeAndInstallForUserCallable(const CreateChaincodeAndInstallForUserRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateChaincodeAndInstallForUserOutcome()>>(
        [this, request]()
        {
            return this->CreateChaincodeAndInstallForUser(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TbaasClient::DeployDynamicBcosContractOutcome TbaasClient::DeployDynamicBcosContract(const DeployDynamicBcosContractRequest &request)
{
    auto outcome = MakeRequest(request, "DeployDynamicBcosContract");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeployDynamicBcosContractResponse rsp = DeployDynamicBcosContractResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeployDynamicBcosContractOutcome(rsp);
        else
            return DeployDynamicBcosContractOutcome(o.GetError());
    }
    else
    {
        return DeployDynamicBcosContractOutcome(outcome.GetError());
    }
}

void TbaasClient::DeployDynamicBcosContractAsync(const DeployDynamicBcosContractRequest& request, const DeployDynamicBcosContractAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeployDynamicBcosContract(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TbaasClient::DeployDynamicBcosContractOutcomeCallable TbaasClient::DeployDynamicBcosContractCallable(const DeployDynamicBcosContractRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeployDynamicBcosContractOutcome()>>(
        [this, request]()
        {
            return this->DeployDynamicBcosContract(request);
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

TbaasClient::GetBcosBlockByNumberOutcome TbaasClient::GetBcosBlockByNumber(const GetBcosBlockByNumberRequest &request)
{
    auto outcome = MakeRequest(request, "GetBcosBlockByNumber");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        GetBcosBlockByNumberResponse rsp = GetBcosBlockByNumberResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return GetBcosBlockByNumberOutcome(rsp);
        else
            return GetBcosBlockByNumberOutcome(o.GetError());
    }
    else
    {
        return GetBcosBlockByNumberOutcome(outcome.GetError());
    }
}

void TbaasClient::GetBcosBlockByNumberAsync(const GetBcosBlockByNumberRequest& request, const GetBcosBlockByNumberAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->GetBcosBlockByNumber(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TbaasClient::GetBcosBlockByNumberOutcomeCallable TbaasClient::GetBcosBlockByNumberCallable(const GetBcosBlockByNumberRequest &request)
{
    auto task = std::make_shared<std::packaged_task<GetBcosBlockByNumberOutcome()>>(
        [this, request]()
        {
            return this->GetBcosBlockByNumber(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TbaasClient::GetBcosBlockListOutcome TbaasClient::GetBcosBlockList(const GetBcosBlockListRequest &request)
{
    auto outcome = MakeRequest(request, "GetBcosBlockList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        GetBcosBlockListResponse rsp = GetBcosBlockListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return GetBcosBlockListOutcome(rsp);
        else
            return GetBcosBlockListOutcome(o.GetError());
    }
    else
    {
        return GetBcosBlockListOutcome(outcome.GetError());
    }
}

void TbaasClient::GetBcosBlockListAsync(const GetBcosBlockListRequest& request, const GetBcosBlockListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->GetBcosBlockList(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TbaasClient::GetBcosBlockListOutcomeCallable TbaasClient::GetBcosBlockListCallable(const GetBcosBlockListRequest &request)
{
    auto task = std::make_shared<std::packaged_task<GetBcosBlockListOutcome()>>(
        [this, request]()
        {
            return this->GetBcosBlockList(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TbaasClient::GetBcosTransByHashOutcome TbaasClient::GetBcosTransByHash(const GetBcosTransByHashRequest &request)
{
    auto outcome = MakeRequest(request, "GetBcosTransByHash");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        GetBcosTransByHashResponse rsp = GetBcosTransByHashResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return GetBcosTransByHashOutcome(rsp);
        else
            return GetBcosTransByHashOutcome(o.GetError());
    }
    else
    {
        return GetBcosTransByHashOutcome(outcome.GetError());
    }
}

void TbaasClient::GetBcosTransByHashAsync(const GetBcosTransByHashRequest& request, const GetBcosTransByHashAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->GetBcosTransByHash(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TbaasClient::GetBcosTransByHashOutcomeCallable TbaasClient::GetBcosTransByHashCallable(const GetBcosTransByHashRequest &request)
{
    auto task = std::make_shared<std::packaged_task<GetBcosTransByHashOutcome()>>(
        [this, request]()
        {
            return this->GetBcosTransByHash(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TbaasClient::GetBcosTransListOutcome TbaasClient::GetBcosTransList(const GetBcosTransListRequest &request)
{
    auto outcome = MakeRequest(request, "GetBcosTransList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        GetBcosTransListResponse rsp = GetBcosTransListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return GetBcosTransListOutcome(rsp);
        else
            return GetBcosTransListOutcome(o.GetError());
    }
    else
    {
        return GetBcosTransListOutcome(outcome.GetError());
    }
}

void TbaasClient::GetBcosTransListAsync(const GetBcosTransListRequest& request, const GetBcosTransListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->GetBcosTransList(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TbaasClient::GetBcosTransListOutcomeCallable TbaasClient::GetBcosTransListCallable(const GetBcosTransListRequest &request)
{
    auto task = std::make_shared<std::packaged_task<GetBcosTransListOutcome()>>(
        [this, request]()
        {
            return this->GetBcosTransList(request);
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

TbaasClient::GetChaincodeCompileLogForUserOutcome TbaasClient::GetChaincodeCompileLogForUser(const GetChaincodeCompileLogForUserRequest &request)
{
    auto outcome = MakeRequest(request, "GetChaincodeCompileLogForUser");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        GetChaincodeCompileLogForUserResponse rsp = GetChaincodeCompileLogForUserResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return GetChaincodeCompileLogForUserOutcome(rsp);
        else
            return GetChaincodeCompileLogForUserOutcome(o.GetError());
    }
    else
    {
        return GetChaincodeCompileLogForUserOutcome(outcome.GetError());
    }
}

void TbaasClient::GetChaincodeCompileLogForUserAsync(const GetChaincodeCompileLogForUserRequest& request, const GetChaincodeCompileLogForUserAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->GetChaincodeCompileLogForUser(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TbaasClient::GetChaincodeCompileLogForUserOutcomeCallable TbaasClient::GetChaincodeCompileLogForUserCallable(const GetChaincodeCompileLogForUserRequest &request)
{
    auto task = std::make_shared<std::packaged_task<GetChaincodeCompileLogForUserOutcome()>>(
        [this, request]()
        {
            return this->GetChaincodeCompileLogForUser(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TbaasClient::GetChaincodeInitializeResultForUserOutcome TbaasClient::GetChaincodeInitializeResultForUser(const GetChaincodeInitializeResultForUserRequest &request)
{
    auto outcome = MakeRequest(request, "GetChaincodeInitializeResultForUser");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        GetChaincodeInitializeResultForUserResponse rsp = GetChaincodeInitializeResultForUserResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return GetChaincodeInitializeResultForUserOutcome(rsp);
        else
            return GetChaincodeInitializeResultForUserOutcome(o.GetError());
    }
    else
    {
        return GetChaincodeInitializeResultForUserOutcome(outcome.GetError());
    }
}

void TbaasClient::GetChaincodeInitializeResultForUserAsync(const GetChaincodeInitializeResultForUserRequest& request, const GetChaincodeInitializeResultForUserAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->GetChaincodeInitializeResultForUser(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TbaasClient::GetChaincodeInitializeResultForUserOutcomeCallable TbaasClient::GetChaincodeInitializeResultForUserCallable(const GetChaincodeInitializeResultForUserRequest &request)
{
    auto task = std::make_shared<std::packaged_task<GetChaincodeInitializeResultForUserOutcome()>>(
        [this, request]()
        {
            return this->GetChaincodeInitializeResultForUser(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TbaasClient::GetChaincodeLogForUserOutcome TbaasClient::GetChaincodeLogForUser(const GetChaincodeLogForUserRequest &request)
{
    auto outcome = MakeRequest(request, "GetChaincodeLogForUser");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        GetChaincodeLogForUserResponse rsp = GetChaincodeLogForUserResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return GetChaincodeLogForUserOutcome(rsp);
        else
            return GetChaincodeLogForUserOutcome(o.GetError());
    }
    else
    {
        return GetChaincodeLogForUserOutcome(outcome.GetError());
    }
}

void TbaasClient::GetChaincodeLogForUserAsync(const GetChaincodeLogForUserRequest& request, const GetChaincodeLogForUserAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->GetChaincodeLogForUser(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TbaasClient::GetChaincodeLogForUserOutcomeCallable TbaasClient::GetChaincodeLogForUserCallable(const GetChaincodeLogForUserRequest &request)
{
    auto task = std::make_shared<std::packaged_task<GetChaincodeLogForUserOutcome()>>(
        [this, request]()
        {
            return this->GetChaincodeLogForUser(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TbaasClient::GetChannelListForUserOutcome TbaasClient::GetChannelListForUser(const GetChannelListForUserRequest &request)
{
    auto outcome = MakeRequest(request, "GetChannelListForUser");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        GetChannelListForUserResponse rsp = GetChannelListForUserResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return GetChannelListForUserOutcome(rsp);
        else
            return GetChannelListForUserOutcome(o.GetError());
    }
    else
    {
        return GetChannelListForUserOutcome(outcome.GetError());
    }
}

void TbaasClient::GetChannelListForUserAsync(const GetChannelListForUserRequest& request, const GetChannelListForUserAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->GetChannelListForUser(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TbaasClient::GetChannelListForUserOutcomeCallable TbaasClient::GetChannelListForUserCallable(const GetChannelListForUserRequest &request)
{
    auto task = std::make_shared<std::packaged_task<GetChannelListForUserOutcome()>>(
        [this, request]()
        {
            return this->GetChannelListForUser(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TbaasClient::GetClusterListForUserOutcome TbaasClient::GetClusterListForUser(const GetClusterListForUserRequest &request)
{
    auto outcome = MakeRequest(request, "GetClusterListForUser");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        GetClusterListForUserResponse rsp = GetClusterListForUserResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return GetClusterListForUserOutcome(rsp);
        else
            return GetClusterListForUserOutcome(o.GetError());
    }
    else
    {
        return GetClusterListForUserOutcome(outcome.GetError());
    }
}

void TbaasClient::GetClusterListForUserAsync(const GetClusterListForUserRequest& request, const GetClusterListForUserAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->GetClusterListForUser(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TbaasClient::GetClusterListForUserOutcomeCallable TbaasClient::GetClusterListForUserCallable(const GetClusterListForUserRequest &request)
{
    auto task = std::make_shared<std::packaged_task<GetClusterListForUserOutcome()>>(
        [this, request]()
        {
            return this->GetClusterListForUser(request);
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

TbaasClient::GetPeerLogForUserOutcome TbaasClient::GetPeerLogForUser(const GetPeerLogForUserRequest &request)
{
    auto outcome = MakeRequest(request, "GetPeerLogForUser");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        GetPeerLogForUserResponse rsp = GetPeerLogForUserResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return GetPeerLogForUserOutcome(rsp);
        else
            return GetPeerLogForUserOutcome(o.GetError());
    }
    else
    {
        return GetPeerLogForUserOutcome(outcome.GetError());
    }
}

void TbaasClient::GetPeerLogForUserAsync(const GetPeerLogForUserRequest& request, const GetPeerLogForUserAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->GetPeerLogForUser(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TbaasClient::GetPeerLogForUserOutcomeCallable TbaasClient::GetPeerLogForUserCallable(const GetPeerLogForUserRequest &request)
{
    auto task = std::make_shared<std::packaged_task<GetPeerLogForUserOutcome()>>(
        [this, request]()
        {
            return this->GetPeerLogForUser(request);
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

TbaasClient::InitializeChaincodeForUserOutcome TbaasClient::InitializeChaincodeForUser(const InitializeChaincodeForUserRequest &request)
{
    auto outcome = MakeRequest(request, "InitializeChaincodeForUser");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        InitializeChaincodeForUserResponse rsp = InitializeChaincodeForUserResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return InitializeChaincodeForUserOutcome(rsp);
        else
            return InitializeChaincodeForUserOutcome(o.GetError());
    }
    else
    {
        return InitializeChaincodeForUserOutcome(outcome.GetError());
    }
}

void TbaasClient::InitializeChaincodeForUserAsync(const InitializeChaincodeForUserRequest& request, const InitializeChaincodeForUserAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->InitializeChaincodeForUser(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TbaasClient::InitializeChaincodeForUserOutcomeCallable TbaasClient::InitializeChaincodeForUserCallable(const InitializeChaincodeForUserRequest &request)
{
    auto task = std::make_shared<std::packaged_task<InitializeChaincodeForUserOutcome()>>(
        [this, request]()
        {
            return this->InitializeChaincodeForUser(request);
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

TbaasClient::InvokeBcosTransOutcome TbaasClient::InvokeBcosTrans(const InvokeBcosTransRequest &request)
{
    auto outcome = MakeRequest(request, "InvokeBcosTrans");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        InvokeBcosTransResponse rsp = InvokeBcosTransResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return InvokeBcosTransOutcome(rsp);
        else
            return InvokeBcosTransOutcome(o.GetError());
    }
    else
    {
        return InvokeBcosTransOutcome(outcome.GetError());
    }
}

void TbaasClient::InvokeBcosTransAsync(const InvokeBcosTransRequest& request, const InvokeBcosTransAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->InvokeBcosTrans(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TbaasClient::InvokeBcosTransOutcomeCallable TbaasClient::InvokeBcosTransCallable(const InvokeBcosTransRequest &request)
{
    auto task = std::make_shared<std::packaged_task<InvokeBcosTransOutcome()>>(
        [this, request]()
        {
            return this->InvokeBcosTrans(request);
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

