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

#include <tencentcloud/btoe/v20210514/BtoeClient.h>
#include <tencentcloud/core/Executor.h>
#include <tencentcloud/core/Runnable.h>

using namespace TencentCloud;
using namespace TencentCloud::Btoe::V20210514;
using namespace TencentCloud::Btoe::V20210514::Model;
using namespace std;

namespace
{
    const string VERSION = "2021-05-14";
    const string ENDPOINT = "btoe.tencentcloudapi.com";
}

BtoeClient::BtoeClient(const Credential &credential, const string &region) :
    BtoeClient(credential, region, ClientProfile())
{
}

BtoeClient::BtoeClient(const Credential &credential, const string &region, const ClientProfile &profile) :
    AbstractClient(ENDPOINT, VERSION, credential, region, profile)
{
}


BtoeClient::CreateAudioDepositOutcome BtoeClient::CreateAudioDeposit(const CreateAudioDepositRequest &request)
{
    auto outcome = MakeRequest(request, "CreateAudioDeposit");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateAudioDepositResponse rsp = CreateAudioDepositResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateAudioDepositOutcome(rsp);
        else
            return CreateAudioDepositOutcome(o.GetError());
    }
    else
    {
        return CreateAudioDepositOutcome(outcome.GetError());
    }
}

void BtoeClient::CreateAudioDepositAsync(const CreateAudioDepositRequest& request, const CreateAudioDepositAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateAudioDeposit(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

BtoeClient::CreateAudioDepositOutcomeCallable BtoeClient::CreateAudioDepositCallable(const CreateAudioDepositRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateAudioDepositOutcome()>>(
        [this, request]()
        {
            return this->CreateAudioDeposit(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

BtoeClient::CreateDataDepositOutcome BtoeClient::CreateDataDeposit(const CreateDataDepositRequest &request)
{
    auto outcome = MakeRequest(request, "CreateDataDeposit");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateDataDepositResponse rsp = CreateDataDepositResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateDataDepositOutcome(rsp);
        else
            return CreateDataDepositOutcome(o.GetError());
    }
    else
    {
        return CreateDataDepositOutcome(outcome.GetError());
    }
}

void BtoeClient::CreateDataDepositAsync(const CreateDataDepositRequest& request, const CreateDataDepositAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateDataDeposit(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

BtoeClient::CreateDataDepositOutcomeCallable BtoeClient::CreateDataDepositCallable(const CreateDataDepositRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateDataDepositOutcome()>>(
        [this, request]()
        {
            return this->CreateDataDeposit(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

BtoeClient::CreateDocDepositOutcome BtoeClient::CreateDocDeposit(const CreateDocDepositRequest &request)
{
    auto outcome = MakeRequest(request, "CreateDocDeposit");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateDocDepositResponse rsp = CreateDocDepositResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateDocDepositOutcome(rsp);
        else
            return CreateDocDepositOutcome(o.GetError());
    }
    else
    {
        return CreateDocDepositOutcome(outcome.GetError());
    }
}

void BtoeClient::CreateDocDepositAsync(const CreateDocDepositRequest& request, const CreateDocDepositAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateDocDeposit(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

BtoeClient::CreateDocDepositOutcomeCallable BtoeClient::CreateDocDepositCallable(const CreateDocDepositRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateDocDepositOutcome()>>(
        [this, request]()
        {
            return this->CreateDocDeposit(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

BtoeClient::CreateHashDepositOutcome BtoeClient::CreateHashDeposit(const CreateHashDepositRequest &request)
{
    auto outcome = MakeRequest(request, "CreateHashDeposit");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateHashDepositResponse rsp = CreateHashDepositResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateHashDepositOutcome(rsp);
        else
            return CreateHashDepositOutcome(o.GetError());
    }
    else
    {
        return CreateHashDepositOutcome(outcome.GetError());
    }
}

void BtoeClient::CreateHashDepositAsync(const CreateHashDepositRequest& request, const CreateHashDepositAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateHashDeposit(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

BtoeClient::CreateHashDepositOutcomeCallable BtoeClient::CreateHashDepositCallable(const CreateHashDepositRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateHashDepositOutcome()>>(
        [this, request]()
        {
            return this->CreateHashDeposit(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

BtoeClient::CreateHashDepositNoCertOutcome BtoeClient::CreateHashDepositNoCert(const CreateHashDepositNoCertRequest &request)
{
    auto outcome = MakeRequest(request, "CreateHashDepositNoCert");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateHashDepositNoCertResponse rsp = CreateHashDepositNoCertResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateHashDepositNoCertOutcome(rsp);
        else
            return CreateHashDepositNoCertOutcome(o.GetError());
    }
    else
    {
        return CreateHashDepositNoCertOutcome(outcome.GetError());
    }
}

void BtoeClient::CreateHashDepositNoCertAsync(const CreateHashDepositNoCertRequest& request, const CreateHashDepositNoCertAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateHashDepositNoCert(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

BtoeClient::CreateHashDepositNoCertOutcomeCallable BtoeClient::CreateHashDepositNoCertCallable(const CreateHashDepositNoCertRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateHashDepositNoCertOutcome()>>(
        [this, request]()
        {
            return this->CreateHashDepositNoCert(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

BtoeClient::CreateHashDepositNoSealOutcome BtoeClient::CreateHashDepositNoSeal(const CreateHashDepositNoSealRequest &request)
{
    auto outcome = MakeRequest(request, "CreateHashDepositNoSeal");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateHashDepositNoSealResponse rsp = CreateHashDepositNoSealResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateHashDepositNoSealOutcome(rsp);
        else
            return CreateHashDepositNoSealOutcome(o.GetError());
    }
    else
    {
        return CreateHashDepositNoSealOutcome(outcome.GetError());
    }
}

void BtoeClient::CreateHashDepositNoSealAsync(const CreateHashDepositNoSealRequest& request, const CreateHashDepositNoSealAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateHashDepositNoSeal(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

BtoeClient::CreateHashDepositNoSealOutcomeCallable BtoeClient::CreateHashDepositNoSealCallable(const CreateHashDepositNoSealRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateHashDepositNoSealOutcome()>>(
        [this, request]()
        {
            return this->CreateHashDepositNoSeal(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

BtoeClient::CreateImageDepositOutcome BtoeClient::CreateImageDeposit(const CreateImageDepositRequest &request)
{
    auto outcome = MakeRequest(request, "CreateImageDeposit");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateImageDepositResponse rsp = CreateImageDepositResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateImageDepositOutcome(rsp);
        else
            return CreateImageDepositOutcome(o.GetError());
    }
    else
    {
        return CreateImageDepositOutcome(outcome.GetError());
    }
}

void BtoeClient::CreateImageDepositAsync(const CreateImageDepositRequest& request, const CreateImageDepositAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateImageDeposit(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

BtoeClient::CreateImageDepositOutcomeCallable BtoeClient::CreateImageDepositCallable(const CreateImageDepositRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateImageDepositOutcome()>>(
        [this, request]()
        {
            return this->CreateImageDeposit(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

BtoeClient::CreateVideoDepositOutcome BtoeClient::CreateVideoDeposit(const CreateVideoDepositRequest &request)
{
    auto outcome = MakeRequest(request, "CreateVideoDeposit");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateVideoDepositResponse rsp = CreateVideoDepositResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateVideoDepositOutcome(rsp);
        else
            return CreateVideoDepositOutcome(o.GetError());
    }
    else
    {
        return CreateVideoDepositOutcome(outcome.GetError());
    }
}

void BtoeClient::CreateVideoDepositAsync(const CreateVideoDepositRequest& request, const CreateVideoDepositAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateVideoDeposit(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

BtoeClient::CreateVideoDepositOutcomeCallable BtoeClient::CreateVideoDepositCallable(const CreateVideoDepositRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateVideoDepositOutcome()>>(
        [this, request]()
        {
            return this->CreateVideoDeposit(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

BtoeClient::GetDepositCertOutcome BtoeClient::GetDepositCert(const GetDepositCertRequest &request)
{
    auto outcome = MakeRequest(request, "GetDepositCert");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        GetDepositCertResponse rsp = GetDepositCertResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return GetDepositCertOutcome(rsp);
        else
            return GetDepositCertOutcome(o.GetError());
    }
    else
    {
        return GetDepositCertOutcome(outcome.GetError());
    }
}

void BtoeClient::GetDepositCertAsync(const GetDepositCertRequest& request, const GetDepositCertAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->GetDepositCert(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

BtoeClient::GetDepositCertOutcomeCallable BtoeClient::GetDepositCertCallable(const GetDepositCertRequest &request)
{
    auto task = std::make_shared<std::packaged_task<GetDepositCertOutcome()>>(
        [this, request]()
        {
            return this->GetDepositCert(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

BtoeClient::GetDepositFileOutcome BtoeClient::GetDepositFile(const GetDepositFileRequest &request)
{
    auto outcome = MakeRequest(request, "GetDepositFile");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        GetDepositFileResponse rsp = GetDepositFileResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return GetDepositFileOutcome(rsp);
        else
            return GetDepositFileOutcome(o.GetError());
    }
    else
    {
        return GetDepositFileOutcome(outcome.GetError());
    }
}

void BtoeClient::GetDepositFileAsync(const GetDepositFileRequest& request, const GetDepositFileAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->GetDepositFile(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

BtoeClient::GetDepositFileOutcomeCallable BtoeClient::GetDepositFileCallable(const GetDepositFileRequest &request)
{
    auto task = std::make_shared<std::packaged_task<GetDepositFileOutcome()>>(
        [this, request]()
        {
            return this->GetDepositFile(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

BtoeClient::GetDepositInfoOutcome BtoeClient::GetDepositInfo(const GetDepositInfoRequest &request)
{
    auto outcome = MakeRequest(request, "GetDepositInfo");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        GetDepositInfoResponse rsp = GetDepositInfoResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return GetDepositInfoOutcome(rsp);
        else
            return GetDepositInfoOutcome(o.GetError());
    }
    else
    {
        return GetDepositInfoOutcome(outcome.GetError());
    }
}

void BtoeClient::GetDepositInfoAsync(const GetDepositInfoRequest& request, const GetDepositInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->GetDepositInfo(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

BtoeClient::GetDepositInfoOutcomeCallable BtoeClient::GetDepositInfoCallable(const GetDepositInfoRequest &request)
{
    auto task = std::make_shared<std::packaged_task<GetDepositInfoOutcome()>>(
        [this, request]()
        {
            return this->GetDepositInfo(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

BtoeClient::VerifyEvidenceBlockChainTxHashOutcome BtoeClient::VerifyEvidenceBlockChainTxHash(const VerifyEvidenceBlockChainTxHashRequest &request)
{
    auto outcome = MakeRequest(request, "VerifyEvidenceBlockChainTxHash");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        VerifyEvidenceBlockChainTxHashResponse rsp = VerifyEvidenceBlockChainTxHashResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return VerifyEvidenceBlockChainTxHashOutcome(rsp);
        else
            return VerifyEvidenceBlockChainTxHashOutcome(o.GetError());
    }
    else
    {
        return VerifyEvidenceBlockChainTxHashOutcome(outcome.GetError());
    }
}

void BtoeClient::VerifyEvidenceBlockChainTxHashAsync(const VerifyEvidenceBlockChainTxHashRequest& request, const VerifyEvidenceBlockChainTxHashAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->VerifyEvidenceBlockChainTxHash(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

BtoeClient::VerifyEvidenceBlockChainTxHashOutcomeCallable BtoeClient::VerifyEvidenceBlockChainTxHashCallable(const VerifyEvidenceBlockChainTxHashRequest &request)
{
    auto task = std::make_shared<std::packaged_task<VerifyEvidenceBlockChainTxHashOutcome()>>(
        [this, request]()
        {
            return this->VerifyEvidenceBlockChainTxHash(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

BtoeClient::VerifyEvidenceHashOutcome BtoeClient::VerifyEvidenceHash(const VerifyEvidenceHashRequest &request)
{
    auto outcome = MakeRequest(request, "VerifyEvidenceHash");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        VerifyEvidenceHashResponse rsp = VerifyEvidenceHashResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return VerifyEvidenceHashOutcome(rsp);
        else
            return VerifyEvidenceHashOutcome(o.GetError());
    }
    else
    {
        return VerifyEvidenceHashOutcome(outcome.GetError());
    }
}

void BtoeClient::VerifyEvidenceHashAsync(const VerifyEvidenceHashRequest& request, const VerifyEvidenceHashAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->VerifyEvidenceHash(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

BtoeClient::VerifyEvidenceHashOutcomeCallable BtoeClient::VerifyEvidenceHashCallable(const VerifyEvidenceHashRequest &request)
{
    auto task = std::make_shared<std::packaged_task<VerifyEvidenceHashOutcome()>>(
        [this, request]()
        {
            return this->VerifyEvidenceHash(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

