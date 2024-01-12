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


TdidClient::CreateDisclosedCredentialOutcome TdidClient::CreateDisclosedCredential(const CreateDisclosedCredentialRequest &request)
{
    auto outcome = MakeRequest(request, "CreateDisclosedCredential");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateDisclosedCredentialResponse rsp = CreateDisclosedCredentialResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateDisclosedCredentialOutcome(rsp);
        else
            return CreateDisclosedCredentialOutcome(o.GetError());
    }
    else
    {
        return CreateDisclosedCredentialOutcome(outcome.GetError());
    }
}

void TdidClient::CreateDisclosedCredentialAsync(const CreateDisclosedCredentialRequest& request, const CreateDisclosedCredentialAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateDisclosedCredential(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TdidClient::CreateDisclosedCredentialOutcomeCallable TdidClient::CreateDisclosedCredentialCallable(const CreateDisclosedCredentialRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateDisclosedCredentialOutcome()>>(
        [this, request]()
        {
            return this->CreateDisclosedCredential(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TdidClient::CreatePresentationOutcome TdidClient::CreatePresentation(const CreatePresentationRequest &request)
{
    auto outcome = MakeRequest(request, "CreatePresentation");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreatePresentationResponse rsp = CreatePresentationResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreatePresentationOutcome(rsp);
        else
            return CreatePresentationOutcome(o.GetError());
    }
    else
    {
        return CreatePresentationOutcome(outcome.GetError());
    }
}

void TdidClient::CreatePresentationAsync(const CreatePresentationRequest& request, const CreatePresentationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreatePresentation(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TdidClient::CreatePresentationOutcomeCallable TdidClient::CreatePresentationCallable(const CreatePresentationRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreatePresentationOutcome()>>(
        [this, request]()
        {
            return this->CreatePresentation(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TdidClient::CreateTDidByHostOutcome TdidClient::CreateTDidByHost(const CreateTDidByHostRequest &request)
{
    auto outcome = MakeRequest(request, "CreateTDidByHost");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateTDidByHostResponse rsp = CreateTDidByHostResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateTDidByHostOutcome(rsp);
        else
            return CreateTDidByHostOutcome(o.GetError());
    }
    else
    {
        return CreateTDidByHostOutcome(outcome.GetError());
    }
}

void TdidClient::CreateTDidByHostAsync(const CreateTDidByHostRequest& request, const CreateTDidByHostAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateTDidByHost(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TdidClient::CreateTDidByHostOutcomeCallable TdidClient::CreateTDidByHostCallable(const CreateTDidByHostRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateTDidByHostOutcome()>>(
        [this, request]()
        {
            return this->CreateTDidByHost(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TdidClient::CreateTDidByPubKeyOutcome TdidClient::CreateTDidByPubKey(const CreateTDidByPubKeyRequest &request)
{
    auto outcome = MakeRequest(request, "CreateTDidByPubKey");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateTDidByPubKeyResponse rsp = CreateTDidByPubKeyResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateTDidByPubKeyOutcome(rsp);
        else
            return CreateTDidByPubKeyOutcome(o.GetError());
    }
    else
    {
        return CreateTDidByPubKeyOutcome(outcome.GetError());
    }
}

void TdidClient::CreateTDidByPubKeyAsync(const CreateTDidByPubKeyRequest& request, const CreateTDidByPubKeyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateTDidByPubKey(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TdidClient::CreateTDidByPubKeyOutcomeCallable TdidClient::CreateTDidByPubKeyCallable(const CreateTDidByPubKeyRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateTDidByPubKeyOutcome()>>(
        [this, request]()
        {
            return this->CreateTDidByPubKey(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TdidClient::DeactivateTDidOutcome TdidClient::DeactivateTDid(const DeactivateTDidRequest &request)
{
    auto outcome = MakeRequest(request, "DeactivateTDid");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeactivateTDidResponse rsp = DeactivateTDidResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeactivateTDidOutcome(rsp);
        else
            return DeactivateTDidOutcome(o.GetError());
    }
    else
    {
        return DeactivateTDidOutcome(outcome.GetError());
    }
}

void TdidClient::DeactivateTDidAsync(const DeactivateTDidRequest& request, const DeactivateTDidAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeactivateTDid(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TdidClient::DeactivateTDidOutcomeCallable TdidClient::DeactivateTDidCallable(const DeactivateTDidRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeactivateTDidOutcome()>>(
        [this, request]()
        {
            return this->DeactivateTDid(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TdidClient::GetAppSummaryOutcome TdidClient::GetAppSummary(const GetAppSummaryRequest &request)
{
    auto outcome = MakeRequest(request, "GetAppSummary");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        GetAppSummaryResponse rsp = GetAppSummaryResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return GetAppSummaryOutcome(rsp);
        else
            return GetAppSummaryOutcome(o.GetError());
    }
    else
    {
        return GetAppSummaryOutcome(outcome.GetError());
    }
}

void TdidClient::GetAppSummaryAsync(const GetAppSummaryRequest& request, const GetAppSummaryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->GetAppSummary(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TdidClient::GetAppSummaryOutcomeCallable TdidClient::GetAppSummaryCallable(const GetAppSummaryRequest &request)
{
    auto task = std::make_shared<std::packaged_task<GetAppSummaryOutcome()>>(
        [this, request]()
        {
            return this->GetAppSummary(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TdidClient::GetCredentialStateOutcome TdidClient::GetCredentialState(const GetCredentialStateRequest &request)
{
    auto outcome = MakeRequest(request, "GetCredentialState");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        GetCredentialStateResponse rsp = GetCredentialStateResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return GetCredentialStateOutcome(rsp);
        else
            return GetCredentialStateOutcome(o.GetError());
    }
    else
    {
        return GetCredentialStateOutcome(outcome.GetError());
    }
}

void TdidClient::GetCredentialStateAsync(const GetCredentialStateRequest& request, const GetCredentialStateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->GetCredentialState(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TdidClient::GetCredentialStateOutcomeCallable TdidClient::GetCredentialStateCallable(const GetCredentialStateRequest &request)
{
    auto task = std::make_shared<std::packaged_task<GetCredentialStateOutcome()>>(
        [this, request]()
        {
            return this->GetCredentialState(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TdidClient::GetOverSummaryOutcome TdidClient::GetOverSummary(const GetOverSummaryRequest &request)
{
    auto outcome = MakeRequest(request, "GetOverSummary");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        GetOverSummaryResponse rsp = GetOverSummaryResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return GetOverSummaryOutcome(rsp);
        else
            return GetOverSummaryOutcome(o.GetError());
    }
    else
    {
        return GetOverSummaryOutcome(outcome.GetError());
    }
}

void TdidClient::GetOverSummaryAsync(const GetOverSummaryRequest& request, const GetOverSummaryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->GetOverSummary(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TdidClient::GetOverSummaryOutcomeCallable TdidClient::GetOverSummaryCallable(const GetOverSummaryRequest &request)
{
    auto task = std::make_shared<std::packaged_task<GetOverSummaryOutcome()>>(
        [this, request]()
        {
            return this->GetOverSummary(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TdidClient::GetTDidByObjectIdOutcome TdidClient::GetTDidByObjectId(const GetTDidByObjectIdRequest &request)
{
    auto outcome = MakeRequest(request, "GetTDidByObjectId");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        GetTDidByObjectIdResponse rsp = GetTDidByObjectIdResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return GetTDidByObjectIdOutcome(rsp);
        else
            return GetTDidByObjectIdOutcome(o.GetError());
    }
    else
    {
        return GetTDidByObjectIdOutcome(outcome.GetError());
    }
}

void TdidClient::GetTDidByObjectIdAsync(const GetTDidByObjectIdRequest& request, const GetTDidByObjectIdAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->GetTDidByObjectId(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TdidClient::GetTDidByObjectIdOutcomeCallable TdidClient::GetTDidByObjectIdCallable(const GetTDidByObjectIdRequest &request)
{
    auto task = std::make_shared<std::packaged_task<GetTDidByObjectIdOutcome()>>(
        [this, request]()
        {
            return this->GetTDidByObjectId(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TdidClient::GetTDidDocumentOutcome TdidClient::GetTDidDocument(const GetTDidDocumentRequest &request)
{
    auto outcome = MakeRequest(request, "GetTDidDocument");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        GetTDidDocumentResponse rsp = GetTDidDocumentResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return GetTDidDocumentOutcome(rsp);
        else
            return GetTDidDocumentOutcome(o.GetError());
    }
    else
    {
        return GetTDidDocumentOutcome(outcome.GetError());
    }
}

void TdidClient::GetTDidDocumentAsync(const GetTDidDocumentRequest& request, const GetTDidDocumentAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->GetTDidDocument(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TdidClient::GetTDidDocumentOutcomeCallable TdidClient::GetTDidDocumentCallable(const GetTDidDocumentRequest &request)
{
    auto task = std::make_shared<std::packaged_task<GetTDidDocumentOutcome()>>(
        [this, request]()
        {
            return this->GetTDidDocument(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TdidClient::GetTDidPubKeyOutcome TdidClient::GetTDidPubKey(const GetTDidPubKeyRequest &request)
{
    auto outcome = MakeRequest(request, "GetTDidPubKey");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        GetTDidPubKeyResponse rsp = GetTDidPubKeyResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return GetTDidPubKeyOutcome(rsp);
        else
            return GetTDidPubKeyOutcome(o.GetError());
    }
    else
    {
        return GetTDidPubKeyOutcome(outcome.GetError());
    }
}

void TdidClient::GetTDidPubKeyAsync(const GetTDidPubKeyRequest& request, const GetTDidPubKeyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->GetTDidPubKey(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TdidClient::GetTDidPubKeyOutcomeCallable TdidClient::GetTDidPubKeyCallable(const GetTDidPubKeyRequest &request)
{
    auto task = std::make_shared<std::packaged_task<GetTDidPubKeyOutcome()>>(
        [this, request]()
        {
            return this->GetTDidPubKey(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TdidClient::IssueCredentialOutcome TdidClient::IssueCredential(const IssueCredentialRequest &request)
{
    auto outcome = MakeRequest(request, "IssueCredential");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        IssueCredentialResponse rsp = IssueCredentialResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return IssueCredentialOutcome(rsp);
        else
            return IssueCredentialOutcome(o.GetError());
    }
    else
    {
        return IssueCredentialOutcome(outcome.GetError());
    }
}

void TdidClient::IssueCredentialAsync(const IssueCredentialRequest& request, const IssueCredentialAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->IssueCredential(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TdidClient::IssueCredentialOutcomeCallable TdidClient::IssueCredentialCallable(const IssueCredentialRequest &request)
{
    auto task = std::make_shared<std::packaged_task<IssueCredentialOutcome()>>(
        [this, request]()
        {
            return this->IssueCredential(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TdidClient::QueryAuthorityInfoOutcome TdidClient::QueryAuthorityInfo(const QueryAuthorityInfoRequest &request)
{
    auto outcome = MakeRequest(request, "QueryAuthorityInfo");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        QueryAuthorityInfoResponse rsp = QueryAuthorityInfoResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return QueryAuthorityInfoOutcome(rsp);
        else
            return QueryAuthorityInfoOutcome(o.GetError());
    }
    else
    {
        return QueryAuthorityInfoOutcome(outcome.GetError());
    }
}

void TdidClient::QueryAuthorityInfoAsync(const QueryAuthorityInfoRequest& request, const QueryAuthorityInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->QueryAuthorityInfo(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TdidClient::QueryAuthorityInfoOutcomeCallable TdidClient::QueryAuthorityInfoCallable(const QueryAuthorityInfoRequest &request)
{
    auto task = std::make_shared<std::packaged_task<QueryAuthorityInfoOutcome()>>(
        [this, request]()
        {
            return this->QueryAuthorityInfo(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TdidClient::QueryCPTOutcome TdidClient::QueryCPT(const QueryCPTRequest &request)
{
    auto outcome = MakeRequest(request, "QueryCPT");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        QueryCPTResponse rsp = QueryCPTResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return QueryCPTOutcome(rsp);
        else
            return QueryCPTOutcome(o.GetError());
    }
    else
    {
        return QueryCPTOutcome(outcome.GetError());
    }
}

void TdidClient::QueryCPTAsync(const QueryCPTRequest& request, const QueryCPTAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->QueryCPT(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TdidClient::QueryCPTOutcomeCallable TdidClient::QueryCPTCallable(const QueryCPTRequest &request)
{
    auto task = std::make_shared<std::packaged_task<QueryCPTOutcome()>>(
        [this, request]()
        {
            return this->QueryCPT(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TdidClient::SetTDidAttributeOutcome TdidClient::SetTDidAttribute(const SetTDidAttributeRequest &request)
{
    auto outcome = MakeRequest(request, "SetTDidAttribute");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        SetTDidAttributeResponse rsp = SetTDidAttributeResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return SetTDidAttributeOutcome(rsp);
        else
            return SetTDidAttributeOutcome(o.GetError());
    }
    else
    {
        return SetTDidAttributeOutcome(outcome.GetError());
    }
}

void TdidClient::SetTDidAttributeAsync(const SetTDidAttributeRequest& request, const SetTDidAttributeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->SetTDidAttribute(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TdidClient::SetTDidAttributeOutcomeCallable TdidClient::SetTDidAttributeCallable(const SetTDidAttributeRequest &request)
{
    auto task = std::make_shared<std::packaged_task<SetTDidAttributeOutcome()>>(
        [this, request]()
        {
            return this->SetTDidAttribute(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TdidClient::UpdateCredentialStateOutcome TdidClient::UpdateCredentialState(const UpdateCredentialStateRequest &request)
{
    auto outcome = MakeRequest(request, "UpdateCredentialState");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        UpdateCredentialStateResponse rsp = UpdateCredentialStateResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return UpdateCredentialStateOutcome(rsp);
        else
            return UpdateCredentialStateOutcome(o.GetError());
    }
    else
    {
        return UpdateCredentialStateOutcome(outcome.GetError());
    }
}

void TdidClient::UpdateCredentialStateAsync(const UpdateCredentialStateRequest& request, const UpdateCredentialStateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->UpdateCredentialState(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TdidClient::UpdateCredentialStateOutcomeCallable TdidClient::UpdateCredentialStateCallable(const UpdateCredentialStateRequest &request)
{
    auto task = std::make_shared<std::packaged_task<UpdateCredentialStateOutcome()>>(
        [this, request]()
        {
            return this->UpdateCredentialState(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TdidClient::VerifyCredentialsOutcome TdidClient::VerifyCredentials(const VerifyCredentialsRequest &request)
{
    auto outcome = MakeRequest(request, "VerifyCredentials");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        VerifyCredentialsResponse rsp = VerifyCredentialsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return VerifyCredentialsOutcome(rsp);
        else
            return VerifyCredentialsOutcome(o.GetError());
    }
    else
    {
        return VerifyCredentialsOutcome(outcome.GetError());
    }
}

void TdidClient::VerifyCredentialsAsync(const VerifyCredentialsRequest& request, const VerifyCredentialsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->VerifyCredentials(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TdidClient::VerifyCredentialsOutcomeCallable TdidClient::VerifyCredentialsCallable(const VerifyCredentialsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<VerifyCredentialsOutcome()>>(
        [this, request]()
        {
            return this->VerifyCredentials(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TdidClient::VerifyPresentationOutcome TdidClient::VerifyPresentation(const VerifyPresentationRequest &request)
{
    auto outcome = MakeRequest(request, "VerifyPresentation");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        VerifyPresentationResponse rsp = VerifyPresentationResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return VerifyPresentationOutcome(rsp);
        else
            return VerifyPresentationOutcome(o.GetError());
    }
    else
    {
        return VerifyPresentationOutcome(outcome.GetError());
    }
}

void TdidClient::VerifyPresentationAsync(const VerifyPresentationRequest& request, const VerifyPresentationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->VerifyPresentation(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TdidClient::VerifyPresentationOutcomeCallable TdidClient::VerifyPresentationCallable(const VerifyPresentationRequest &request)
{
    auto task = std::make_shared<std::packaged_task<VerifyPresentationOutcome()>>(
        [this, request]()
        {
            return this->VerifyPresentation(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

