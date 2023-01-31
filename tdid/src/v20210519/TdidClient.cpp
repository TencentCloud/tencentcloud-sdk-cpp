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

#include <tencentcloud/tdid/v20210519/TdidClient.h>
#include <tencentcloud/core/Executor.h>
#include <tencentcloud/core/Runnable.h>

using namespace TencentCloud;
using namespace TencentCloud::Tdid::V20210519;
using namespace TencentCloud::Tdid::V20210519::Model;
using namespace std;

namespace
{
    const string VERSION = "2021-05-19";
    const string ENDPOINT = "tdid.tencentcloudapi.com";
}

TdidClient::TdidClient(const Credential &credential, const string &region) :
    TdidClient(credential, region, ClientProfile())
{
}

TdidClient::TdidClient(const Credential &credential, const string &region, const ClientProfile &profile) :
    AbstractClient(ENDPOINT, VERSION, credential, region, profile)
{
}


TdidClient::AddLabelOutcome TdidClient::AddLabel(const AddLabelRequest &request)
{
    auto outcome = MakeRequest(request, "AddLabel");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        AddLabelResponse rsp = AddLabelResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return AddLabelOutcome(rsp);
        else
            return AddLabelOutcome(o.GetError());
    }
    else
    {
        return AddLabelOutcome(outcome.GetError());
    }
}

void TdidClient::AddLabelAsync(const AddLabelRequest& request, const AddLabelAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->AddLabel(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TdidClient::AddLabelOutcomeCallable TdidClient::AddLabelCallable(const AddLabelRequest &request)
{
    auto task = std::make_shared<std::packaged_task<AddLabelOutcome()>>(
        [this, request]()
        {
            return this->AddLabel(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TdidClient::CancelAuthorityIssuerOutcome TdidClient::CancelAuthorityIssuer(const CancelAuthorityIssuerRequest &request)
{
    auto outcome = MakeRequest(request, "CancelAuthorityIssuer");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CancelAuthorityIssuerResponse rsp = CancelAuthorityIssuerResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CancelAuthorityIssuerOutcome(rsp);
        else
            return CancelAuthorityIssuerOutcome(o.GetError());
    }
    else
    {
        return CancelAuthorityIssuerOutcome(outcome.GetError());
    }
}

void TdidClient::CancelAuthorityIssuerAsync(const CancelAuthorityIssuerRequest& request, const CancelAuthorityIssuerAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CancelAuthorityIssuer(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TdidClient::CancelAuthorityIssuerOutcomeCallable TdidClient::CancelAuthorityIssuerCallable(const CancelAuthorityIssuerRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CancelAuthorityIssuerOutcome()>>(
        [this, request]()
        {
            return this->CancelAuthorityIssuer(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TdidClient::CheckChainOutcome TdidClient::CheckChain(const CheckChainRequest &request)
{
    auto outcome = MakeRequest(request, "CheckChain");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CheckChainResponse rsp = CheckChainResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CheckChainOutcome(rsp);
        else
            return CheckChainOutcome(o.GetError());
    }
    else
    {
        return CheckChainOutcome(outcome.GetError());
    }
}

void TdidClient::CheckChainAsync(const CheckChainRequest& request, const CheckChainAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CheckChain(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TdidClient::CheckChainOutcomeCallable TdidClient::CheckChainCallable(const CheckChainRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CheckChainOutcome()>>(
        [this, request]()
        {
            return this->CheckChain(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TdidClient::CheckDidDeployOutcome TdidClient::CheckDidDeploy(const CheckDidDeployRequest &request)
{
    auto outcome = MakeRequest(request, "CheckDidDeploy");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CheckDidDeployResponse rsp = CheckDidDeployResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CheckDidDeployOutcome(rsp);
        else
            return CheckDidDeployOutcome(o.GetError());
    }
    else
    {
        return CheckDidDeployOutcome(outcome.GetError());
    }
}

void TdidClient::CheckDidDeployAsync(const CheckDidDeployRequest& request, const CheckDidDeployAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CheckDidDeploy(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TdidClient::CheckDidDeployOutcomeCallable TdidClient::CheckDidDeployCallable(const CheckDidDeployRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CheckDidDeployOutcome()>>(
        [this, request]()
        {
            return this->CheckDidDeploy(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TdidClient::CreateCredentialOutcome TdidClient::CreateCredential(const CreateCredentialRequest &request)
{
    auto outcome = MakeRequest(request, "CreateCredential");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateCredentialResponse rsp = CreateCredentialResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateCredentialOutcome(rsp);
        else
            return CreateCredentialOutcome(o.GetError());
    }
    else
    {
        return CreateCredentialOutcome(outcome.GetError());
    }
}

void TdidClient::CreateCredentialAsync(const CreateCredentialRequest& request, const CreateCredentialAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateCredential(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TdidClient::CreateCredentialOutcomeCallable TdidClient::CreateCredentialCallable(const CreateCredentialRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateCredentialOutcome()>>(
        [this, request]()
        {
            return this->CreateCredential(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TdidClient::CreateDidServiceOutcome TdidClient::CreateDidService(const CreateDidServiceRequest &request)
{
    auto outcome = MakeRequest(request, "CreateDidService");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateDidServiceResponse rsp = CreateDidServiceResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateDidServiceOutcome(rsp);
        else
            return CreateDidServiceOutcome(o.GetError());
    }
    else
    {
        return CreateDidServiceOutcome(outcome.GetError());
    }
}

void TdidClient::CreateDidServiceAsync(const CreateDidServiceRequest& request, const CreateDidServiceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateDidService(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TdidClient::CreateDidServiceOutcomeCallable TdidClient::CreateDidServiceCallable(const CreateDidServiceRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateDidServiceOutcome()>>(
        [this, request]()
        {
            return this->CreateDidService(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TdidClient::CreateLabelOutcome TdidClient::CreateLabel(const CreateLabelRequest &request)
{
    auto outcome = MakeRequest(request, "CreateLabel");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateLabelResponse rsp = CreateLabelResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateLabelOutcome(rsp);
        else
            return CreateLabelOutcome(o.GetError());
    }
    else
    {
        return CreateLabelOutcome(outcome.GetError());
    }
}

void TdidClient::CreateLabelAsync(const CreateLabelRequest& request, const CreateLabelAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateLabel(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TdidClient::CreateLabelOutcomeCallable TdidClient::CreateLabelCallable(const CreateLabelRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateLabelOutcome()>>(
        [this, request]()
        {
            return this->CreateLabel(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TdidClient::CreateSelectiveCredentialOutcome TdidClient::CreateSelectiveCredential(const CreateSelectiveCredentialRequest &request)
{
    auto outcome = MakeRequest(request, "CreateSelectiveCredential");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateSelectiveCredentialResponse rsp = CreateSelectiveCredentialResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateSelectiveCredentialOutcome(rsp);
        else
            return CreateSelectiveCredentialOutcome(o.GetError());
    }
    else
    {
        return CreateSelectiveCredentialOutcome(outcome.GetError());
    }
}

void TdidClient::CreateSelectiveCredentialAsync(const CreateSelectiveCredentialRequest& request, const CreateSelectiveCredentialAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateSelectiveCredential(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TdidClient::CreateSelectiveCredentialOutcomeCallable TdidClient::CreateSelectiveCredentialCallable(const CreateSelectiveCredentialRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateSelectiveCredentialOutcome()>>(
        [this, request]()
        {
            return this->CreateSelectiveCredential(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TdidClient::CreateTDidOutcome TdidClient::CreateTDid(const CreateTDidRequest &request)
{
    auto outcome = MakeRequest(request, "CreateTDid");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateTDidResponse rsp = CreateTDidResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateTDidOutcome(rsp);
        else
            return CreateTDidOutcome(o.GetError());
    }
    else
    {
        return CreateTDidOutcome(outcome.GetError());
    }
}

void TdidClient::CreateTDidAsync(const CreateTDidRequest& request, const CreateTDidAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateTDid(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TdidClient::CreateTDidOutcomeCallable TdidClient::CreateTDidCallable(const CreateTDidRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateTDidOutcome()>>(
        [this, request]()
        {
            return this->CreateTDid(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TdidClient::CreateTDidByPrivateKeyOutcome TdidClient::CreateTDidByPrivateKey(const CreateTDidByPrivateKeyRequest &request)
{
    auto outcome = MakeRequest(request, "CreateTDidByPrivateKey");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateTDidByPrivateKeyResponse rsp = CreateTDidByPrivateKeyResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateTDidByPrivateKeyOutcome(rsp);
        else
            return CreateTDidByPrivateKeyOutcome(o.GetError());
    }
    else
    {
        return CreateTDidByPrivateKeyOutcome(outcome.GetError());
    }
}

void TdidClient::CreateTDidByPrivateKeyAsync(const CreateTDidByPrivateKeyRequest& request, const CreateTDidByPrivateKeyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateTDidByPrivateKey(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TdidClient::CreateTDidByPrivateKeyOutcomeCallable TdidClient::CreateTDidByPrivateKeyCallable(const CreateTDidByPrivateKeyRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateTDidByPrivateKeyOutcome()>>(
        [this, request]()
        {
            return this->CreateTDidByPrivateKey(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TdidClient::CreateTDidByPublicKeyOutcome TdidClient::CreateTDidByPublicKey(const CreateTDidByPublicKeyRequest &request)
{
    auto outcome = MakeRequest(request, "CreateTDidByPublicKey");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateTDidByPublicKeyResponse rsp = CreateTDidByPublicKeyResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateTDidByPublicKeyOutcome(rsp);
        else
            return CreateTDidByPublicKeyOutcome(o.GetError());
    }
    else
    {
        return CreateTDidByPublicKeyOutcome(outcome.GetError());
    }
}

void TdidClient::CreateTDidByPublicKeyAsync(const CreateTDidByPublicKeyRequest& request, const CreateTDidByPublicKeyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateTDidByPublicKey(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TdidClient::CreateTDidByPublicKeyOutcomeCallable TdidClient::CreateTDidByPublicKeyCallable(const CreateTDidByPublicKeyRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateTDidByPublicKeyOutcome()>>(
        [this, request]()
        {
            return this->CreateTDidByPublicKey(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TdidClient::DeployByNameOutcome TdidClient::DeployByName(const DeployByNameRequest &request)
{
    auto outcome = MakeRequest(request, "DeployByName");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeployByNameResponse rsp = DeployByNameResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeployByNameOutcome(rsp);
        else
            return DeployByNameOutcome(o.GetError());
    }
    else
    {
        return DeployByNameOutcome(outcome.GetError());
    }
}

void TdidClient::DeployByNameAsync(const DeployByNameRequest& request, const DeployByNameAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeployByName(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TdidClient::DeployByNameOutcomeCallable TdidClient::DeployByNameCallable(const DeployByNameRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeployByNameOutcome()>>(
        [this, request]()
        {
            return this->DeployByName(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TdidClient::DownCptOutcome TdidClient::DownCpt(const DownCptRequest &request)
{
    auto outcome = MakeRequest(request, "DownCpt");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DownCptResponse rsp = DownCptResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DownCptOutcome(rsp);
        else
            return DownCptOutcome(o.GetError());
    }
    else
    {
        return DownCptOutcome(outcome.GetError());
    }
}

void TdidClient::DownCptAsync(const DownCptRequest& request, const DownCptAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DownCpt(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TdidClient::DownCptOutcomeCallable TdidClient::DownCptCallable(const DownCptRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DownCptOutcome()>>(
        [this, request]()
        {
            return this->DownCpt(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TdidClient::EnableHashOutcome TdidClient::EnableHash(const EnableHashRequest &request)
{
    auto outcome = MakeRequest(request, "EnableHash");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        EnableHashResponse rsp = EnableHashResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return EnableHashOutcome(rsp);
        else
            return EnableHashOutcome(o.GetError());
    }
    else
    {
        return EnableHashOutcome(outcome.GetError());
    }
}

void TdidClient::EnableHashAsync(const EnableHashRequest& request, const EnableHashAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->EnableHash(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TdidClient::EnableHashOutcomeCallable TdidClient::EnableHashCallable(const EnableHashRequest &request)
{
    auto task = std::make_shared<std::packaged_task<EnableHashOutcome()>>(
        [this, request]()
        {
            return this->EnableHash(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TdidClient::GetAgencyTDidOutcome TdidClient::GetAgencyTDid(const GetAgencyTDidRequest &request)
{
    auto outcome = MakeRequest(request, "GetAgencyTDid");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        GetAgencyTDidResponse rsp = GetAgencyTDidResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return GetAgencyTDidOutcome(rsp);
        else
            return GetAgencyTDidOutcome(o.GetError());
    }
    else
    {
        return GetAgencyTDidOutcome(outcome.GetError());
    }
}

void TdidClient::GetAgencyTDidAsync(const GetAgencyTDidRequest& request, const GetAgencyTDidAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->GetAgencyTDid(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TdidClient::GetAgencyTDidOutcomeCallable TdidClient::GetAgencyTDidCallable(const GetAgencyTDidRequest &request)
{
    auto task = std::make_shared<std::packaged_task<GetAgencyTDidOutcome()>>(
        [this, request]()
        {
            return this->GetAgencyTDid(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TdidClient::GetAuthoritiesListOutcome TdidClient::GetAuthoritiesList(const GetAuthoritiesListRequest &request)
{
    auto outcome = MakeRequest(request, "GetAuthoritiesList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        GetAuthoritiesListResponse rsp = GetAuthoritiesListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return GetAuthoritiesListOutcome(rsp);
        else
            return GetAuthoritiesListOutcome(o.GetError());
    }
    else
    {
        return GetAuthoritiesListOutcome(outcome.GetError());
    }
}

void TdidClient::GetAuthoritiesListAsync(const GetAuthoritiesListRequest& request, const GetAuthoritiesListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->GetAuthoritiesList(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TdidClient::GetAuthoritiesListOutcomeCallable TdidClient::GetAuthoritiesListCallable(const GetAuthoritiesListRequest &request)
{
    auto task = std::make_shared<std::packaged_task<GetAuthoritiesListOutcome()>>(
        [this, request]()
        {
            return this->GetAuthoritiesList(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TdidClient::GetAuthorityIssuerOutcome TdidClient::GetAuthorityIssuer(const GetAuthorityIssuerRequest &request)
{
    auto outcome = MakeRequest(request, "GetAuthorityIssuer");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        GetAuthorityIssuerResponse rsp = GetAuthorityIssuerResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return GetAuthorityIssuerOutcome(rsp);
        else
            return GetAuthorityIssuerOutcome(o.GetError());
    }
    else
    {
        return GetAuthorityIssuerOutcome(outcome.GetError());
    }
}

void TdidClient::GetAuthorityIssuerAsync(const GetAuthorityIssuerRequest& request, const GetAuthorityIssuerAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->GetAuthorityIssuer(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TdidClient::GetAuthorityIssuerOutcomeCallable TdidClient::GetAuthorityIssuerCallable(const GetAuthorityIssuerRequest &request)
{
    auto task = std::make_shared<std::packaged_task<GetAuthorityIssuerOutcome()>>(
        [this, request]()
        {
            return this->GetAuthorityIssuer(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TdidClient::GetConsortiumClusterListOutcome TdidClient::GetConsortiumClusterList(const GetConsortiumClusterListRequest &request)
{
    auto outcome = MakeRequest(request, "GetConsortiumClusterList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        GetConsortiumClusterListResponse rsp = GetConsortiumClusterListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return GetConsortiumClusterListOutcome(rsp);
        else
            return GetConsortiumClusterListOutcome(o.GetError());
    }
    else
    {
        return GetConsortiumClusterListOutcome(outcome.GetError());
    }
}

void TdidClient::GetConsortiumClusterListAsync(const GetConsortiumClusterListRequest& request, const GetConsortiumClusterListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->GetConsortiumClusterList(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TdidClient::GetConsortiumClusterListOutcomeCallable TdidClient::GetConsortiumClusterListCallable(const GetConsortiumClusterListRequest &request)
{
    auto task = std::make_shared<std::packaged_task<GetConsortiumClusterListOutcome()>>(
        [this, request]()
        {
            return this->GetConsortiumClusterList(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TdidClient::GetConsortiumListOutcome TdidClient::GetConsortiumList(const GetConsortiumListRequest &request)
{
    auto outcome = MakeRequest(request, "GetConsortiumList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        GetConsortiumListResponse rsp = GetConsortiumListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return GetConsortiumListOutcome(rsp);
        else
            return GetConsortiumListOutcome(o.GetError());
    }
    else
    {
        return GetConsortiumListOutcome(outcome.GetError());
    }
}

void TdidClient::GetConsortiumListAsync(const GetConsortiumListRequest& request, const GetConsortiumListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->GetConsortiumList(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TdidClient::GetConsortiumListOutcomeCallable TdidClient::GetConsortiumListCallable(const GetConsortiumListRequest &request)
{
    auto task = std::make_shared<std::packaged_task<GetConsortiumListOutcome()>>(
        [this, request]()
        {
            return this->GetConsortiumList(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TdidClient::GetCptInfoOutcome TdidClient::GetCptInfo(const GetCptInfoRequest &request)
{
    auto outcome = MakeRequest(request, "GetCptInfo");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        GetCptInfoResponse rsp = GetCptInfoResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return GetCptInfoOutcome(rsp);
        else
            return GetCptInfoOutcome(o.GetError());
    }
    else
    {
        return GetCptInfoOutcome(outcome.GetError());
    }
}

void TdidClient::GetCptInfoAsync(const GetCptInfoRequest& request, const GetCptInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->GetCptInfo(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TdidClient::GetCptInfoOutcomeCallable TdidClient::GetCptInfoCallable(const GetCptInfoRequest &request)
{
    auto task = std::make_shared<std::packaged_task<GetCptInfoOutcome()>>(
        [this, request]()
        {
            return this->GetCptInfo(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TdidClient::GetCptListOutcome TdidClient::GetCptList(const GetCptListRequest &request)
{
    auto outcome = MakeRequest(request, "GetCptList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        GetCptListResponse rsp = GetCptListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return GetCptListOutcome(rsp);
        else
            return GetCptListOutcome(o.GetError());
    }
    else
    {
        return GetCptListOutcome(outcome.GetError());
    }
}

void TdidClient::GetCptListAsync(const GetCptListRequest& request, const GetCptListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->GetCptList(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TdidClient::GetCptListOutcomeCallable TdidClient::GetCptListCallable(const GetCptListRequest &request)
{
    auto task = std::make_shared<std::packaged_task<GetCptListOutcome()>>(
        [this, request]()
        {
            return this->GetCptList(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TdidClient::GetCredentialCptRankOutcome TdidClient::GetCredentialCptRank(const GetCredentialCptRankRequest &request)
{
    auto outcome = MakeRequest(request, "GetCredentialCptRank");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        GetCredentialCptRankResponse rsp = GetCredentialCptRankResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return GetCredentialCptRankOutcome(rsp);
        else
            return GetCredentialCptRankOutcome(o.GetError());
    }
    else
    {
        return GetCredentialCptRankOutcome(outcome.GetError());
    }
}

void TdidClient::GetCredentialCptRankAsync(const GetCredentialCptRankRequest& request, const GetCredentialCptRankAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->GetCredentialCptRank(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TdidClient::GetCredentialCptRankOutcomeCallable TdidClient::GetCredentialCptRankCallable(const GetCredentialCptRankRequest &request)
{
    auto task = std::make_shared<std::packaged_task<GetCredentialCptRankOutcome()>>(
        [this, request]()
        {
            return this->GetCredentialCptRank(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TdidClient::GetCredentialIssueRankOutcome TdidClient::GetCredentialIssueRank(const GetCredentialIssueRankRequest &request)
{
    auto outcome = MakeRequest(request, "GetCredentialIssueRank");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        GetCredentialIssueRankResponse rsp = GetCredentialIssueRankResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return GetCredentialIssueRankOutcome(rsp);
        else
            return GetCredentialIssueRankOutcome(o.GetError());
    }
    else
    {
        return GetCredentialIssueRankOutcome(outcome.GetError());
    }
}

void TdidClient::GetCredentialIssueRankAsync(const GetCredentialIssueRankRequest& request, const GetCredentialIssueRankAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->GetCredentialIssueRank(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TdidClient::GetCredentialIssueRankOutcomeCallable TdidClient::GetCredentialIssueRankCallable(const GetCredentialIssueRankRequest &request)
{
    auto task = std::make_shared<std::packaged_task<GetCredentialIssueRankOutcome()>>(
        [this, request]()
        {
            return this->GetCredentialIssueRank(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TdidClient::GetCredentialIssueTrendOutcome TdidClient::GetCredentialIssueTrend(const GetCredentialIssueTrendRequest &request)
{
    auto outcome = MakeRequest(request, "GetCredentialIssueTrend");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        GetCredentialIssueTrendResponse rsp = GetCredentialIssueTrendResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return GetCredentialIssueTrendOutcome(rsp);
        else
            return GetCredentialIssueTrendOutcome(o.GetError());
    }
    else
    {
        return GetCredentialIssueTrendOutcome(outcome.GetError());
    }
}

void TdidClient::GetCredentialIssueTrendAsync(const GetCredentialIssueTrendRequest& request, const GetCredentialIssueTrendAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->GetCredentialIssueTrend(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TdidClient::GetCredentialIssueTrendOutcomeCallable TdidClient::GetCredentialIssueTrendCallable(const GetCredentialIssueTrendRequest &request)
{
    auto task = std::make_shared<std::packaged_task<GetCredentialIssueTrendOutcome()>>(
        [this, request]()
        {
            return this->GetCredentialIssueTrend(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TdidClient::GetCredentialStatusOutcome TdidClient::GetCredentialStatus(const GetCredentialStatusRequest &request)
{
    auto outcome = MakeRequest(request, "GetCredentialStatus");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        GetCredentialStatusResponse rsp = GetCredentialStatusResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return GetCredentialStatusOutcome(rsp);
        else
            return GetCredentialStatusOutcome(o.GetError());
    }
    else
    {
        return GetCredentialStatusOutcome(outcome.GetError());
    }
}

void TdidClient::GetCredentialStatusAsync(const GetCredentialStatusRequest& request, const GetCredentialStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->GetCredentialStatus(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TdidClient::GetCredentialStatusOutcomeCallable TdidClient::GetCredentialStatusCallable(const GetCredentialStatusRequest &request)
{
    auto task = std::make_shared<std::packaged_task<GetCredentialStatusOutcome()>>(
        [this, request]()
        {
            return this->GetCredentialStatus(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TdidClient::GetDataPanelOutcome TdidClient::GetDataPanel(const GetDataPanelRequest &request)
{
    auto outcome = MakeRequest(request, "GetDataPanel");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        GetDataPanelResponse rsp = GetDataPanelResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return GetDataPanelOutcome(rsp);
        else
            return GetDataPanelOutcome(o.GetError());
    }
    else
    {
        return GetDataPanelOutcome(outcome.GetError());
    }
}

void TdidClient::GetDataPanelAsync(const GetDataPanelRequest& request, const GetDataPanelAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->GetDataPanel(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TdidClient::GetDataPanelOutcomeCallable TdidClient::GetDataPanelCallable(const GetDataPanelRequest &request)
{
    auto task = std::make_shared<std::packaged_task<GetDataPanelOutcome()>>(
        [this, request]()
        {
            return this->GetDataPanel(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TdidClient::GetDeployInfoOutcome TdidClient::GetDeployInfo(const GetDeployInfoRequest &request)
{
    auto outcome = MakeRequest(request, "GetDeployInfo");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        GetDeployInfoResponse rsp = GetDeployInfoResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return GetDeployInfoOutcome(rsp);
        else
            return GetDeployInfoOutcome(o.GetError());
    }
    else
    {
        return GetDeployInfoOutcome(outcome.GetError());
    }
}

void TdidClient::GetDeployInfoAsync(const GetDeployInfoRequest& request, const GetDeployInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->GetDeployInfo(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TdidClient::GetDeployInfoOutcomeCallable TdidClient::GetDeployInfoCallable(const GetDeployInfoRequest &request)
{
    auto task = std::make_shared<std::packaged_task<GetDeployInfoOutcome()>>(
        [this, request]()
        {
            return this->GetDeployInfo(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TdidClient::GetDeployListOutcome TdidClient::GetDeployList(const GetDeployListRequest &request)
{
    auto outcome = MakeRequest(request, "GetDeployList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        GetDeployListResponse rsp = GetDeployListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return GetDeployListOutcome(rsp);
        else
            return GetDeployListOutcome(o.GetError());
    }
    else
    {
        return GetDeployListOutcome(outcome.GetError());
    }
}

void TdidClient::GetDeployListAsync(const GetDeployListRequest& request, const GetDeployListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->GetDeployList(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TdidClient::GetDeployListOutcomeCallable TdidClient::GetDeployListCallable(const GetDeployListRequest &request)
{
    auto task = std::make_shared<std::packaged_task<GetDeployListOutcome()>>(
        [this, request]()
        {
            return this->GetDeployList(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TdidClient::GetDidClusterDetailOutcome TdidClient::GetDidClusterDetail(const GetDidClusterDetailRequest &request)
{
    auto outcome = MakeRequest(request, "GetDidClusterDetail");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        GetDidClusterDetailResponse rsp = GetDidClusterDetailResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return GetDidClusterDetailOutcome(rsp);
        else
            return GetDidClusterDetailOutcome(o.GetError());
    }
    else
    {
        return GetDidClusterDetailOutcome(outcome.GetError());
    }
}

void TdidClient::GetDidClusterDetailAsync(const GetDidClusterDetailRequest& request, const GetDidClusterDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->GetDidClusterDetail(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TdidClient::GetDidClusterDetailOutcomeCallable TdidClient::GetDidClusterDetailCallable(const GetDidClusterDetailRequest &request)
{
    auto task = std::make_shared<std::packaged_task<GetDidClusterDetailOutcome()>>(
        [this, request]()
        {
            return this->GetDidClusterDetail(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TdidClient::GetDidClusterListOutcome TdidClient::GetDidClusterList(const GetDidClusterListRequest &request)
{
    auto outcome = MakeRequest(request, "GetDidClusterList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        GetDidClusterListResponse rsp = GetDidClusterListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return GetDidClusterListOutcome(rsp);
        else
            return GetDidClusterListOutcome(o.GetError());
    }
    else
    {
        return GetDidClusterListOutcome(outcome.GetError());
    }
}

void TdidClient::GetDidClusterListAsync(const GetDidClusterListRequest& request, const GetDidClusterListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->GetDidClusterList(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TdidClient::GetDidClusterListOutcomeCallable TdidClient::GetDidClusterListCallable(const GetDidClusterListRequest &request)
{
    auto task = std::make_shared<std::packaged_task<GetDidClusterListOutcome()>>(
        [this, request]()
        {
            return this->GetDidClusterList(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TdidClient::GetDidDetailOutcome TdidClient::GetDidDetail(const GetDidDetailRequest &request)
{
    auto outcome = MakeRequest(request, "GetDidDetail");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        GetDidDetailResponse rsp = GetDidDetailResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return GetDidDetailOutcome(rsp);
        else
            return GetDidDetailOutcome(o.GetError());
    }
    else
    {
        return GetDidDetailOutcome(outcome.GetError());
    }
}

void TdidClient::GetDidDetailAsync(const GetDidDetailRequest& request, const GetDidDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->GetDidDetail(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TdidClient::GetDidDetailOutcomeCallable TdidClient::GetDidDetailCallable(const GetDidDetailRequest &request)
{
    auto task = std::make_shared<std::packaged_task<GetDidDetailOutcome()>>(
        [this, request]()
        {
            return this->GetDidDetail(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TdidClient::GetDidDocumentOutcome TdidClient::GetDidDocument(const GetDidDocumentRequest &request)
{
    auto outcome = MakeRequest(request, "GetDidDocument");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        GetDidDocumentResponse rsp = GetDidDocumentResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return GetDidDocumentOutcome(rsp);
        else
            return GetDidDocumentOutcome(o.GetError());
    }
    else
    {
        return GetDidDocumentOutcome(outcome.GetError());
    }
}

void TdidClient::GetDidDocumentAsync(const GetDidDocumentRequest& request, const GetDidDocumentAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->GetDidDocument(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TdidClient::GetDidDocumentOutcomeCallable TdidClient::GetDidDocumentCallable(const GetDidDocumentRequest &request)
{
    auto task = std::make_shared<std::packaged_task<GetDidDocumentOutcome()>>(
        [this, request]()
        {
            return this->GetDidDocument(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TdidClient::GetDidListOutcome TdidClient::GetDidList(const GetDidListRequest &request)
{
    auto outcome = MakeRequest(request, "GetDidList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        GetDidListResponse rsp = GetDidListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return GetDidListOutcome(rsp);
        else
            return GetDidListOutcome(o.GetError());
    }
    else
    {
        return GetDidListOutcome(outcome.GetError());
    }
}

void TdidClient::GetDidListAsync(const GetDidListRequest& request, const GetDidListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->GetDidList(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TdidClient::GetDidListOutcomeCallable TdidClient::GetDidListCallable(const GetDidListRequest &request)
{
    auto task = std::make_shared<std::packaged_task<GetDidListOutcome()>>(
        [this, request]()
        {
            return this->GetDidList(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TdidClient::GetDidRegisterTrendOutcome TdidClient::GetDidRegisterTrend(const GetDidRegisterTrendRequest &request)
{
    auto outcome = MakeRequest(request, "GetDidRegisterTrend");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        GetDidRegisterTrendResponse rsp = GetDidRegisterTrendResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return GetDidRegisterTrendOutcome(rsp);
        else
            return GetDidRegisterTrendOutcome(o.GetError());
    }
    else
    {
        return GetDidRegisterTrendOutcome(outcome.GetError());
    }
}

void TdidClient::GetDidRegisterTrendAsync(const GetDidRegisterTrendRequest& request, const GetDidRegisterTrendAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->GetDidRegisterTrend(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TdidClient::GetDidRegisterTrendOutcomeCallable TdidClient::GetDidRegisterTrendCallable(const GetDidRegisterTrendRequest &request)
{
    auto task = std::make_shared<std::packaged_task<GetDidRegisterTrendOutcome()>>(
        [this, request]()
        {
            return this->GetDidRegisterTrend(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TdidClient::GetDidServiceDetailOutcome TdidClient::GetDidServiceDetail(const GetDidServiceDetailRequest &request)
{
    auto outcome = MakeRequest(request, "GetDidServiceDetail");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        GetDidServiceDetailResponse rsp = GetDidServiceDetailResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return GetDidServiceDetailOutcome(rsp);
        else
            return GetDidServiceDetailOutcome(o.GetError());
    }
    else
    {
        return GetDidServiceDetailOutcome(outcome.GetError());
    }
}

void TdidClient::GetDidServiceDetailAsync(const GetDidServiceDetailRequest& request, const GetDidServiceDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->GetDidServiceDetail(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TdidClient::GetDidServiceDetailOutcomeCallable TdidClient::GetDidServiceDetailCallable(const GetDidServiceDetailRequest &request)
{
    auto task = std::make_shared<std::packaged_task<GetDidServiceDetailOutcome()>>(
        [this, request]()
        {
            return this->GetDidServiceDetail(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TdidClient::GetDidServiceListOutcome TdidClient::GetDidServiceList(const GetDidServiceListRequest &request)
{
    auto outcome = MakeRequest(request, "GetDidServiceList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        GetDidServiceListResponse rsp = GetDidServiceListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return GetDidServiceListOutcome(rsp);
        else
            return GetDidServiceListOutcome(o.GetError());
    }
    else
    {
        return GetDidServiceListOutcome(outcome.GetError());
    }
}

void TdidClient::GetDidServiceListAsync(const GetDidServiceListRequest& request, const GetDidServiceListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->GetDidServiceList(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TdidClient::GetDidServiceListOutcomeCallable TdidClient::GetDidServiceListCallable(const GetDidServiceListRequest &request)
{
    auto task = std::make_shared<std::packaged_task<GetDidServiceListOutcome()>>(
        [this, request]()
        {
            return this->GetDidServiceList(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TdidClient::GetGroupListOutcome TdidClient::GetGroupList(const GetGroupListRequest &request)
{
    auto outcome = MakeRequest(request, "GetGroupList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        GetGroupListResponse rsp = GetGroupListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return GetGroupListOutcome(rsp);
        else
            return GetGroupListOutcome(o.GetError());
    }
    else
    {
        return GetGroupListOutcome(outcome.GetError());
    }
}

void TdidClient::GetGroupListAsync(const GetGroupListRequest& request, const GetGroupListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->GetGroupList(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TdidClient::GetGroupListOutcomeCallable TdidClient::GetGroupListCallable(const GetGroupListRequest &request)
{
    auto task = std::make_shared<std::packaged_task<GetGroupListOutcome()>>(
        [this, request]()
        {
            return this->GetGroupList(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TdidClient::GetLabelListOutcome TdidClient::GetLabelList(const GetLabelListRequest &request)
{
    auto outcome = MakeRequest(request, "GetLabelList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        GetLabelListResponse rsp = GetLabelListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return GetLabelListOutcome(rsp);
        else
            return GetLabelListOutcome(o.GetError());
    }
    else
    {
        return GetLabelListOutcome(outcome.GetError());
    }
}

void TdidClient::GetLabelListAsync(const GetLabelListRequest& request, const GetLabelListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->GetLabelList(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TdidClient::GetLabelListOutcomeCallable TdidClient::GetLabelListCallable(const GetLabelListRequest &request)
{
    auto task = std::make_shared<std::packaged_task<GetLabelListOutcome()>>(
        [this, request]()
        {
            return this->GetLabelList(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TdidClient::GetPolicyListOutcome TdidClient::GetPolicyList(const GetPolicyListRequest &request)
{
    auto outcome = MakeRequest(request, "GetPolicyList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        GetPolicyListResponse rsp = GetPolicyListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return GetPolicyListOutcome(rsp);
        else
            return GetPolicyListOutcome(o.GetError());
    }
    else
    {
        return GetPolicyListOutcome(outcome.GetError());
    }
}

void TdidClient::GetPolicyListAsync(const GetPolicyListRequest& request, const GetPolicyListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->GetPolicyList(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TdidClient::GetPolicyListOutcomeCallable TdidClient::GetPolicyListCallable(const GetPolicyListRequest &request)
{
    auto task = std::make_shared<std::packaged_task<GetPolicyListOutcome()>>(
        [this, request]()
        {
            return this->GetPolicyList(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TdidClient::GetPublicKeyOutcome TdidClient::GetPublicKey(const GetPublicKeyRequest &request)
{
    auto outcome = MakeRequest(request, "GetPublicKey");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        GetPublicKeyResponse rsp = GetPublicKeyResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return GetPublicKeyOutcome(rsp);
        else
            return GetPublicKeyOutcome(o.GetError());
    }
    else
    {
        return GetPublicKeyOutcome(outcome.GetError());
    }
}

void TdidClient::GetPublicKeyAsync(const GetPublicKeyRequest& request, const GetPublicKeyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->GetPublicKey(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TdidClient::GetPublicKeyOutcomeCallable TdidClient::GetPublicKeyCallable(const GetPublicKeyRequest &request)
{
    auto task = std::make_shared<std::packaged_task<GetPublicKeyOutcome()>>(
        [this, request]()
        {
            return this->GetPublicKey(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TdidClient::QueryPolicyOutcome TdidClient::QueryPolicy(const QueryPolicyRequest &request)
{
    auto outcome = MakeRequest(request, "QueryPolicy");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        QueryPolicyResponse rsp = QueryPolicyResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return QueryPolicyOutcome(rsp);
        else
            return QueryPolicyOutcome(o.GetError());
    }
    else
    {
        return QueryPolicyOutcome(outcome.GetError());
    }
}

void TdidClient::QueryPolicyAsync(const QueryPolicyRequest& request, const QueryPolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->QueryPolicy(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TdidClient::QueryPolicyOutcomeCallable TdidClient::QueryPolicyCallable(const QueryPolicyRequest &request)
{
    auto task = std::make_shared<std::packaged_task<QueryPolicyOutcome()>>(
        [this, request]()
        {
            return this->QueryPolicy(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TdidClient::RecognizeAuthorityIssuerOutcome TdidClient::RecognizeAuthorityIssuer(const RecognizeAuthorityIssuerRequest &request)
{
    auto outcome = MakeRequest(request, "RecognizeAuthorityIssuer");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        RecognizeAuthorityIssuerResponse rsp = RecognizeAuthorityIssuerResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return RecognizeAuthorityIssuerOutcome(rsp);
        else
            return RecognizeAuthorityIssuerOutcome(o.GetError());
    }
    else
    {
        return RecognizeAuthorityIssuerOutcome(outcome.GetError());
    }
}

void TdidClient::RecognizeAuthorityIssuerAsync(const RecognizeAuthorityIssuerRequest& request, const RecognizeAuthorityIssuerAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->RecognizeAuthorityIssuer(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TdidClient::RecognizeAuthorityIssuerOutcomeCallable TdidClient::RecognizeAuthorityIssuerCallable(const RecognizeAuthorityIssuerRequest &request)
{
    auto task = std::make_shared<std::packaged_task<RecognizeAuthorityIssuerOutcome()>>(
        [this, request]()
        {
            return this->RecognizeAuthorityIssuer(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TdidClient::RegisterClaimPolicyOutcome TdidClient::RegisterClaimPolicy(const RegisterClaimPolicyRequest &request)
{
    auto outcome = MakeRequest(request, "RegisterClaimPolicy");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        RegisterClaimPolicyResponse rsp = RegisterClaimPolicyResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return RegisterClaimPolicyOutcome(rsp);
        else
            return RegisterClaimPolicyOutcome(o.GetError());
    }
    else
    {
        return RegisterClaimPolicyOutcome(outcome.GetError());
    }
}

void TdidClient::RegisterClaimPolicyAsync(const RegisterClaimPolicyRequest& request, const RegisterClaimPolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->RegisterClaimPolicy(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TdidClient::RegisterClaimPolicyOutcomeCallable TdidClient::RegisterClaimPolicyCallable(const RegisterClaimPolicyRequest &request)
{
    auto task = std::make_shared<std::packaged_task<RegisterClaimPolicyOutcome()>>(
        [this, request]()
        {
            return this->RegisterClaimPolicy(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TdidClient::RegisterCptOutcome TdidClient::RegisterCpt(const RegisterCptRequest &request)
{
    auto outcome = MakeRequest(request, "RegisterCpt");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        RegisterCptResponse rsp = RegisterCptResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return RegisterCptOutcome(rsp);
        else
            return RegisterCptOutcome(o.GetError());
    }
    else
    {
        return RegisterCptOutcome(outcome.GetError());
    }
}

void TdidClient::RegisterCptAsync(const RegisterCptRequest& request, const RegisterCptAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->RegisterCpt(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TdidClient::RegisterCptOutcomeCallable TdidClient::RegisterCptCallable(const RegisterCptRequest &request)
{
    auto task = std::make_shared<std::packaged_task<RegisterCptOutcome()>>(
        [this, request]()
        {
            return this->RegisterCpt(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TdidClient::RegisterIssuerOutcome TdidClient::RegisterIssuer(const RegisterIssuerRequest &request)
{
    auto outcome = MakeRequest(request, "RegisterIssuer");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        RegisterIssuerResponse rsp = RegisterIssuerResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return RegisterIssuerOutcome(rsp);
        else
            return RegisterIssuerOutcome(o.GetError());
    }
    else
    {
        return RegisterIssuerOutcome(outcome.GetError());
    }
}

void TdidClient::RegisterIssuerAsync(const RegisterIssuerRequest& request, const RegisterIssuerAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->RegisterIssuer(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TdidClient::RegisterIssuerOutcomeCallable TdidClient::RegisterIssuerCallable(const RegisterIssuerRequest &request)
{
    auto task = std::make_shared<std::packaged_task<RegisterIssuerOutcome()>>(
        [this, request]()
        {
            return this->RegisterIssuer(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TdidClient::RemoveHashOutcome TdidClient::RemoveHash(const RemoveHashRequest &request)
{
    auto outcome = MakeRequest(request, "RemoveHash");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        RemoveHashResponse rsp = RemoveHashResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return RemoveHashOutcome(rsp);
        else
            return RemoveHashOutcome(o.GetError());
    }
    else
    {
        return RemoveHashOutcome(outcome.GetError());
    }
}

void TdidClient::RemoveHashAsync(const RemoveHashRequest& request, const RemoveHashAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->RemoveHash(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TdidClient::RemoveHashOutcomeCallable TdidClient::RemoveHashCallable(const RemoveHashRequest &request)
{
    auto task = std::make_shared<std::packaged_task<RemoveHashOutcome()>>(
        [this, request]()
        {
            return this->RemoveHash(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TdidClient::SetCredentialStatusOutcome TdidClient::SetCredentialStatus(const SetCredentialStatusRequest &request)
{
    auto outcome = MakeRequest(request, "SetCredentialStatus");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        SetCredentialStatusResponse rsp = SetCredentialStatusResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return SetCredentialStatusOutcome(rsp);
        else
            return SetCredentialStatusOutcome(o.GetError());
    }
    else
    {
        return SetCredentialStatusOutcome(outcome.GetError());
    }
}

void TdidClient::SetCredentialStatusAsync(const SetCredentialStatusRequest& request, const SetCredentialStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->SetCredentialStatus(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TdidClient::SetCredentialStatusOutcomeCallable TdidClient::SetCredentialStatusCallable(const SetCredentialStatusRequest &request)
{
    auto task = std::make_shared<std::packaged_task<SetCredentialStatusOutcome()>>(
        [this, request]()
        {
            return this->SetCredentialStatus(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TdidClient::VerifyCredentialOutcome TdidClient::VerifyCredential(const VerifyCredentialRequest &request)
{
    auto outcome = MakeRequest(request, "VerifyCredential");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        VerifyCredentialResponse rsp = VerifyCredentialResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return VerifyCredentialOutcome(rsp);
        else
            return VerifyCredentialOutcome(o.GetError());
    }
    else
    {
        return VerifyCredentialOutcome(outcome.GetError());
    }
}

void TdidClient::VerifyCredentialAsync(const VerifyCredentialRequest& request, const VerifyCredentialAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->VerifyCredential(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TdidClient::VerifyCredentialOutcomeCallable TdidClient::VerifyCredentialCallable(const VerifyCredentialRequest &request)
{
    auto task = std::make_shared<std::packaged_task<VerifyCredentialOutcome()>>(
        [this, request]()
        {
            return this->VerifyCredential(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

