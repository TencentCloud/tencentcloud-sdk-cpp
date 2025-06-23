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

#include <tencentcloud/ssl/v20191205/SslClient.h>
#include <tencentcloud/core/Executor.h>
#include <tencentcloud/core/Runnable.h>

using namespace TencentCloud;
using namespace TencentCloud::Ssl::V20191205;
using namespace TencentCloud::Ssl::V20191205::Model;
using namespace std;

namespace
{
    const string VERSION = "2019-12-05";
    const string ENDPOINT = "ssl.tencentcloudapi.com";
}

SslClient::SslClient(const Credential &credential, const string &region) :
    SslClient(credential, region, ClientProfile())
{
}

SslClient::SslClient(const Credential &credential, const string &region, const ClientProfile &profile) :
    AbstractClient(ENDPOINT, VERSION, credential, region, profile)
{
}


SslClient::ApplyCertificateOutcome SslClient::ApplyCertificate(const ApplyCertificateRequest &request)
{
    auto outcome = MakeRequest(request, "ApplyCertificate");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ApplyCertificateResponse rsp = ApplyCertificateResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ApplyCertificateOutcome(rsp);
        else
            return ApplyCertificateOutcome(o.GetError());
    }
    else
    {
        return ApplyCertificateOutcome(outcome.GetError());
    }
}

void SslClient::ApplyCertificateAsync(const ApplyCertificateRequest& request, const ApplyCertificateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ApplyCertificate(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

SslClient::ApplyCertificateOutcomeCallable SslClient::ApplyCertificateCallable(const ApplyCertificateRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ApplyCertificateOutcome()>>(
        [this, request]()
        {
            return this->ApplyCertificate(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

SslClient::CancelAuditCertificateOutcome SslClient::CancelAuditCertificate(const CancelAuditCertificateRequest &request)
{
    auto outcome = MakeRequest(request, "CancelAuditCertificate");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CancelAuditCertificateResponse rsp = CancelAuditCertificateResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CancelAuditCertificateOutcome(rsp);
        else
            return CancelAuditCertificateOutcome(o.GetError());
    }
    else
    {
        return CancelAuditCertificateOutcome(outcome.GetError());
    }
}

void SslClient::CancelAuditCertificateAsync(const CancelAuditCertificateRequest& request, const CancelAuditCertificateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CancelAuditCertificate(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

SslClient::CancelAuditCertificateOutcomeCallable SslClient::CancelAuditCertificateCallable(const CancelAuditCertificateRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CancelAuditCertificateOutcome()>>(
        [this, request]()
        {
            return this->CancelAuditCertificate(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

SslClient::CancelCertificateOrderOutcome SslClient::CancelCertificateOrder(const CancelCertificateOrderRequest &request)
{
    auto outcome = MakeRequest(request, "CancelCertificateOrder");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CancelCertificateOrderResponse rsp = CancelCertificateOrderResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CancelCertificateOrderOutcome(rsp);
        else
            return CancelCertificateOrderOutcome(o.GetError());
    }
    else
    {
        return CancelCertificateOrderOutcome(outcome.GetError());
    }
}

void SslClient::CancelCertificateOrderAsync(const CancelCertificateOrderRequest& request, const CancelCertificateOrderAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CancelCertificateOrder(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

SslClient::CancelCertificateOrderOutcomeCallable SslClient::CancelCertificateOrderCallable(const CancelCertificateOrderRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CancelCertificateOrderOutcome()>>(
        [this, request]()
        {
            return this->CancelCertificateOrder(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

SslClient::CertificateInfoSubmitOutcome SslClient::CertificateInfoSubmit(const CertificateInfoSubmitRequest &request)
{
    auto outcome = MakeRequest(request, "CertificateInfoSubmit");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CertificateInfoSubmitResponse rsp = CertificateInfoSubmitResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CertificateInfoSubmitOutcome(rsp);
        else
            return CertificateInfoSubmitOutcome(o.GetError());
    }
    else
    {
        return CertificateInfoSubmitOutcome(outcome.GetError());
    }
}

void SslClient::CertificateInfoSubmitAsync(const CertificateInfoSubmitRequest& request, const CertificateInfoSubmitAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CertificateInfoSubmit(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

SslClient::CertificateInfoSubmitOutcomeCallable SslClient::CertificateInfoSubmitCallable(const CertificateInfoSubmitRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CertificateInfoSubmitOutcome()>>(
        [this, request]()
        {
            return this->CertificateInfoSubmit(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

SslClient::CertificateOrderSubmitOutcome SslClient::CertificateOrderSubmit(const CertificateOrderSubmitRequest &request)
{
    auto outcome = MakeRequest(request, "CertificateOrderSubmit");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CertificateOrderSubmitResponse rsp = CertificateOrderSubmitResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CertificateOrderSubmitOutcome(rsp);
        else
            return CertificateOrderSubmitOutcome(o.GetError());
    }
    else
    {
        return CertificateOrderSubmitOutcome(outcome.GetError());
    }
}

void SslClient::CertificateOrderSubmitAsync(const CertificateOrderSubmitRequest& request, const CertificateOrderSubmitAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CertificateOrderSubmit(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

SslClient::CertificateOrderSubmitOutcomeCallable SslClient::CertificateOrderSubmitCallable(const CertificateOrderSubmitRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CertificateOrderSubmitOutcome()>>(
        [this, request]()
        {
            return this->CertificateOrderSubmit(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

SslClient::CheckCertificateChainOutcome SslClient::CheckCertificateChain(const CheckCertificateChainRequest &request)
{
    auto outcome = MakeRequest(request, "CheckCertificateChain");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CheckCertificateChainResponse rsp = CheckCertificateChainResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CheckCertificateChainOutcome(rsp);
        else
            return CheckCertificateChainOutcome(o.GetError());
    }
    else
    {
        return CheckCertificateChainOutcome(outcome.GetError());
    }
}

void SslClient::CheckCertificateChainAsync(const CheckCertificateChainRequest& request, const CheckCertificateChainAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CheckCertificateChain(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

SslClient::CheckCertificateChainOutcomeCallable SslClient::CheckCertificateChainCallable(const CheckCertificateChainRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CheckCertificateChainOutcome()>>(
        [this, request]()
        {
            return this->CheckCertificateChain(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

SslClient::CheckCertificateDomainVerificationOutcome SslClient::CheckCertificateDomainVerification(const CheckCertificateDomainVerificationRequest &request)
{
    auto outcome = MakeRequest(request, "CheckCertificateDomainVerification");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CheckCertificateDomainVerificationResponse rsp = CheckCertificateDomainVerificationResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CheckCertificateDomainVerificationOutcome(rsp);
        else
            return CheckCertificateDomainVerificationOutcome(o.GetError());
    }
    else
    {
        return CheckCertificateDomainVerificationOutcome(outcome.GetError());
    }
}

void SslClient::CheckCertificateDomainVerificationAsync(const CheckCertificateDomainVerificationRequest& request, const CheckCertificateDomainVerificationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CheckCertificateDomainVerification(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

SslClient::CheckCertificateDomainVerificationOutcomeCallable SslClient::CheckCertificateDomainVerificationCallable(const CheckCertificateDomainVerificationRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CheckCertificateDomainVerificationOutcome()>>(
        [this, request]()
        {
            return this->CheckCertificateDomainVerification(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

SslClient::CheckCertificateExistOutcome SslClient::CheckCertificateExist(const CheckCertificateExistRequest &request)
{
    auto outcome = MakeRequest(request, "CheckCertificateExist");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CheckCertificateExistResponse rsp = CheckCertificateExistResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CheckCertificateExistOutcome(rsp);
        else
            return CheckCertificateExistOutcome(o.GetError());
    }
    else
    {
        return CheckCertificateExistOutcome(outcome.GetError());
    }
}

void SslClient::CheckCertificateExistAsync(const CheckCertificateExistRequest& request, const CheckCertificateExistAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CheckCertificateExist(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

SslClient::CheckCertificateExistOutcomeCallable SslClient::CheckCertificateExistCallable(const CheckCertificateExistRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CheckCertificateExistOutcome()>>(
        [this, request]()
        {
            return this->CheckCertificateExist(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

SslClient::CommitCertificateInformationOutcome SslClient::CommitCertificateInformation(const CommitCertificateInformationRequest &request)
{
    auto outcome = MakeRequest(request, "CommitCertificateInformation");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CommitCertificateInformationResponse rsp = CommitCertificateInformationResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CommitCertificateInformationOutcome(rsp);
        else
            return CommitCertificateInformationOutcome(o.GetError());
    }
    else
    {
        return CommitCertificateInformationOutcome(outcome.GetError());
    }
}

void SslClient::CommitCertificateInformationAsync(const CommitCertificateInformationRequest& request, const CommitCertificateInformationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CommitCertificateInformation(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

SslClient::CommitCertificateInformationOutcomeCallable SslClient::CommitCertificateInformationCallable(const CommitCertificateInformationRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CommitCertificateInformationOutcome()>>(
        [this, request]()
        {
            return this->CommitCertificateInformation(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

SslClient::CompleteCertificateOutcome SslClient::CompleteCertificate(const CompleteCertificateRequest &request)
{
    auto outcome = MakeRequest(request, "CompleteCertificate");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CompleteCertificateResponse rsp = CompleteCertificateResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CompleteCertificateOutcome(rsp);
        else
            return CompleteCertificateOutcome(o.GetError());
    }
    else
    {
        return CompleteCertificateOutcome(outcome.GetError());
    }
}

void SslClient::CompleteCertificateAsync(const CompleteCertificateRequest& request, const CompleteCertificateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CompleteCertificate(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

SslClient::CompleteCertificateOutcomeCallable SslClient::CompleteCertificateCallable(const CompleteCertificateRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CompleteCertificateOutcome()>>(
        [this, request]()
        {
            return this->CompleteCertificate(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

SslClient::CreateCertificateOutcome SslClient::CreateCertificate(const CreateCertificateRequest &request)
{
    auto outcome = MakeRequest(request, "CreateCertificate");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateCertificateResponse rsp = CreateCertificateResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateCertificateOutcome(rsp);
        else
            return CreateCertificateOutcome(o.GetError());
    }
    else
    {
        return CreateCertificateOutcome(outcome.GetError());
    }
}

void SslClient::CreateCertificateAsync(const CreateCertificateRequest& request, const CreateCertificateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateCertificate(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

SslClient::CreateCertificateOutcomeCallable SslClient::CreateCertificateCallable(const CreateCertificateRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateCertificateOutcome()>>(
        [this, request]()
        {
            return this->CreateCertificate(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

SslClient::CreateCertificateBindResourceSyncTaskOutcome SslClient::CreateCertificateBindResourceSyncTask(const CreateCertificateBindResourceSyncTaskRequest &request)
{
    auto outcome = MakeRequest(request, "CreateCertificateBindResourceSyncTask");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateCertificateBindResourceSyncTaskResponse rsp = CreateCertificateBindResourceSyncTaskResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateCertificateBindResourceSyncTaskOutcome(rsp);
        else
            return CreateCertificateBindResourceSyncTaskOutcome(o.GetError());
    }
    else
    {
        return CreateCertificateBindResourceSyncTaskOutcome(outcome.GetError());
    }
}

void SslClient::CreateCertificateBindResourceSyncTaskAsync(const CreateCertificateBindResourceSyncTaskRequest& request, const CreateCertificateBindResourceSyncTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateCertificateBindResourceSyncTask(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

SslClient::CreateCertificateBindResourceSyncTaskOutcomeCallable SslClient::CreateCertificateBindResourceSyncTaskCallable(const CreateCertificateBindResourceSyncTaskRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateCertificateBindResourceSyncTaskOutcome()>>(
        [this, request]()
        {
            return this->CreateCertificateBindResourceSyncTask(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

SslClient::CreateCertificateByPackageOutcome SslClient::CreateCertificateByPackage(const CreateCertificateByPackageRequest &request)
{
    auto outcome = MakeRequest(request, "CreateCertificateByPackage");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateCertificateByPackageResponse rsp = CreateCertificateByPackageResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateCertificateByPackageOutcome(rsp);
        else
            return CreateCertificateByPackageOutcome(o.GetError());
    }
    else
    {
        return CreateCertificateByPackageOutcome(outcome.GetError());
    }
}

void SslClient::CreateCertificateByPackageAsync(const CreateCertificateByPackageRequest& request, const CreateCertificateByPackageAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateCertificateByPackage(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

SslClient::CreateCertificateByPackageOutcomeCallable SslClient::CreateCertificateByPackageCallable(const CreateCertificateByPackageRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateCertificateByPackageOutcome()>>(
        [this, request]()
        {
            return this->CreateCertificateByPackage(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

SslClient::DeleteCertificateOutcome SslClient::DeleteCertificate(const DeleteCertificateRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteCertificate");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteCertificateResponse rsp = DeleteCertificateResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteCertificateOutcome(rsp);
        else
            return DeleteCertificateOutcome(o.GetError());
    }
    else
    {
        return DeleteCertificateOutcome(outcome.GetError());
    }
}

void SslClient::DeleteCertificateAsync(const DeleteCertificateRequest& request, const DeleteCertificateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteCertificate(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

SslClient::DeleteCertificateOutcomeCallable SslClient::DeleteCertificateCallable(const DeleteCertificateRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteCertificateOutcome()>>(
        [this, request]()
        {
            return this->DeleteCertificate(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

SslClient::DeleteCertificatesOutcome SslClient::DeleteCertificates(const DeleteCertificatesRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteCertificates");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteCertificatesResponse rsp = DeleteCertificatesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteCertificatesOutcome(rsp);
        else
            return DeleteCertificatesOutcome(o.GetError());
    }
    else
    {
        return DeleteCertificatesOutcome(outcome.GetError());
    }
}

void SslClient::DeleteCertificatesAsync(const DeleteCertificatesRequest& request, const DeleteCertificatesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteCertificates(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

SslClient::DeleteCertificatesOutcomeCallable SslClient::DeleteCertificatesCallable(const DeleteCertificatesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteCertificatesOutcome()>>(
        [this, request]()
        {
            return this->DeleteCertificates(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

SslClient::DeleteManagerOutcome SslClient::DeleteManager(const DeleteManagerRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteManager");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteManagerResponse rsp = DeleteManagerResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteManagerOutcome(rsp);
        else
            return DeleteManagerOutcome(o.GetError());
    }
    else
    {
        return DeleteManagerOutcome(outcome.GetError());
    }
}

void SslClient::DeleteManagerAsync(const DeleteManagerRequest& request, const DeleteManagerAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteManager(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

SslClient::DeleteManagerOutcomeCallable SslClient::DeleteManagerCallable(const DeleteManagerRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteManagerOutcome()>>(
        [this, request]()
        {
            return this->DeleteManager(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

SslClient::DeployCertificateInstanceOutcome SslClient::DeployCertificateInstance(const DeployCertificateInstanceRequest &request)
{
    auto outcome = MakeRequest(request, "DeployCertificateInstance");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeployCertificateInstanceResponse rsp = DeployCertificateInstanceResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeployCertificateInstanceOutcome(rsp);
        else
            return DeployCertificateInstanceOutcome(o.GetError());
    }
    else
    {
        return DeployCertificateInstanceOutcome(outcome.GetError());
    }
}

void SslClient::DeployCertificateInstanceAsync(const DeployCertificateInstanceRequest& request, const DeployCertificateInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeployCertificateInstance(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

SslClient::DeployCertificateInstanceOutcomeCallable SslClient::DeployCertificateInstanceCallable(const DeployCertificateInstanceRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeployCertificateInstanceOutcome()>>(
        [this, request]()
        {
            return this->DeployCertificateInstance(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

SslClient::DeployCertificateRecordRetryOutcome SslClient::DeployCertificateRecordRetry(const DeployCertificateRecordRetryRequest &request)
{
    auto outcome = MakeRequest(request, "DeployCertificateRecordRetry");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeployCertificateRecordRetryResponse rsp = DeployCertificateRecordRetryResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeployCertificateRecordRetryOutcome(rsp);
        else
            return DeployCertificateRecordRetryOutcome(o.GetError());
    }
    else
    {
        return DeployCertificateRecordRetryOutcome(outcome.GetError());
    }
}

void SslClient::DeployCertificateRecordRetryAsync(const DeployCertificateRecordRetryRequest& request, const DeployCertificateRecordRetryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeployCertificateRecordRetry(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

SslClient::DeployCertificateRecordRetryOutcomeCallable SslClient::DeployCertificateRecordRetryCallable(const DeployCertificateRecordRetryRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeployCertificateRecordRetryOutcome()>>(
        [this, request]()
        {
            return this->DeployCertificateRecordRetry(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

SslClient::DeployCertificateRecordRollbackOutcome SslClient::DeployCertificateRecordRollback(const DeployCertificateRecordRollbackRequest &request)
{
    auto outcome = MakeRequest(request, "DeployCertificateRecordRollback");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeployCertificateRecordRollbackResponse rsp = DeployCertificateRecordRollbackResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeployCertificateRecordRollbackOutcome(rsp);
        else
            return DeployCertificateRecordRollbackOutcome(o.GetError());
    }
    else
    {
        return DeployCertificateRecordRollbackOutcome(outcome.GetError());
    }
}

void SslClient::DeployCertificateRecordRollbackAsync(const DeployCertificateRecordRollbackRequest& request, const DeployCertificateRecordRollbackAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeployCertificateRecordRollback(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

SslClient::DeployCertificateRecordRollbackOutcomeCallable SslClient::DeployCertificateRecordRollbackCallable(const DeployCertificateRecordRollbackRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeployCertificateRecordRollbackOutcome()>>(
        [this, request]()
        {
            return this->DeployCertificateRecordRollback(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

SslClient::DescribeCertificateOutcome SslClient::DescribeCertificate(const DescribeCertificateRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeCertificate");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeCertificateResponse rsp = DescribeCertificateResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeCertificateOutcome(rsp);
        else
            return DescribeCertificateOutcome(o.GetError());
    }
    else
    {
        return DescribeCertificateOutcome(outcome.GetError());
    }
}

void SslClient::DescribeCertificateAsync(const DescribeCertificateRequest& request, const DescribeCertificateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeCertificate(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

SslClient::DescribeCertificateOutcomeCallable SslClient::DescribeCertificateCallable(const DescribeCertificateRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeCertificateOutcome()>>(
        [this, request]()
        {
            return this->DescribeCertificate(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

SslClient::DescribeCertificateBindResourceTaskDetailOutcome SslClient::DescribeCertificateBindResourceTaskDetail(const DescribeCertificateBindResourceTaskDetailRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeCertificateBindResourceTaskDetail");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeCertificateBindResourceTaskDetailResponse rsp = DescribeCertificateBindResourceTaskDetailResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeCertificateBindResourceTaskDetailOutcome(rsp);
        else
            return DescribeCertificateBindResourceTaskDetailOutcome(o.GetError());
    }
    else
    {
        return DescribeCertificateBindResourceTaskDetailOutcome(outcome.GetError());
    }
}

void SslClient::DescribeCertificateBindResourceTaskDetailAsync(const DescribeCertificateBindResourceTaskDetailRequest& request, const DescribeCertificateBindResourceTaskDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeCertificateBindResourceTaskDetail(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

SslClient::DescribeCertificateBindResourceTaskDetailOutcomeCallable SslClient::DescribeCertificateBindResourceTaskDetailCallable(const DescribeCertificateBindResourceTaskDetailRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeCertificateBindResourceTaskDetailOutcome()>>(
        [this, request]()
        {
            return this->DescribeCertificateBindResourceTaskDetail(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

SslClient::DescribeCertificateBindResourceTaskResultOutcome SslClient::DescribeCertificateBindResourceTaskResult(const DescribeCertificateBindResourceTaskResultRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeCertificateBindResourceTaskResult");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeCertificateBindResourceTaskResultResponse rsp = DescribeCertificateBindResourceTaskResultResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeCertificateBindResourceTaskResultOutcome(rsp);
        else
            return DescribeCertificateBindResourceTaskResultOutcome(o.GetError());
    }
    else
    {
        return DescribeCertificateBindResourceTaskResultOutcome(outcome.GetError());
    }
}

void SslClient::DescribeCertificateBindResourceTaskResultAsync(const DescribeCertificateBindResourceTaskResultRequest& request, const DescribeCertificateBindResourceTaskResultAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeCertificateBindResourceTaskResult(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

SslClient::DescribeCertificateBindResourceTaskResultOutcomeCallable SslClient::DescribeCertificateBindResourceTaskResultCallable(const DescribeCertificateBindResourceTaskResultRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeCertificateBindResourceTaskResultOutcome()>>(
        [this, request]()
        {
            return this->DescribeCertificateBindResourceTaskResult(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

SslClient::DescribeCertificateDetailOutcome SslClient::DescribeCertificateDetail(const DescribeCertificateDetailRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeCertificateDetail");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeCertificateDetailResponse rsp = DescribeCertificateDetailResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeCertificateDetailOutcome(rsp);
        else
            return DescribeCertificateDetailOutcome(o.GetError());
    }
    else
    {
        return DescribeCertificateDetailOutcome(outcome.GetError());
    }
}

void SslClient::DescribeCertificateDetailAsync(const DescribeCertificateDetailRequest& request, const DescribeCertificateDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeCertificateDetail(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

SslClient::DescribeCertificateDetailOutcomeCallable SslClient::DescribeCertificateDetailCallable(const DescribeCertificateDetailRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeCertificateDetailOutcome()>>(
        [this, request]()
        {
            return this->DescribeCertificateDetail(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

SslClient::DescribeCertificateOperateLogsOutcome SslClient::DescribeCertificateOperateLogs(const DescribeCertificateOperateLogsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeCertificateOperateLogs");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeCertificateOperateLogsResponse rsp = DescribeCertificateOperateLogsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeCertificateOperateLogsOutcome(rsp);
        else
            return DescribeCertificateOperateLogsOutcome(o.GetError());
    }
    else
    {
        return DescribeCertificateOperateLogsOutcome(outcome.GetError());
    }
}

void SslClient::DescribeCertificateOperateLogsAsync(const DescribeCertificateOperateLogsRequest& request, const DescribeCertificateOperateLogsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeCertificateOperateLogs(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

SslClient::DescribeCertificateOperateLogsOutcomeCallable SslClient::DescribeCertificateOperateLogsCallable(const DescribeCertificateOperateLogsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeCertificateOperateLogsOutcome()>>(
        [this, request]()
        {
            return this->DescribeCertificateOperateLogs(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

SslClient::DescribeCertificatesOutcome SslClient::DescribeCertificates(const DescribeCertificatesRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeCertificates");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeCertificatesResponse rsp = DescribeCertificatesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeCertificatesOutcome(rsp);
        else
            return DescribeCertificatesOutcome(o.GetError());
    }
    else
    {
        return DescribeCertificatesOutcome(outcome.GetError());
    }
}

void SslClient::DescribeCertificatesAsync(const DescribeCertificatesRequest& request, const DescribeCertificatesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeCertificates(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

SslClient::DescribeCertificatesOutcomeCallable SslClient::DescribeCertificatesCallable(const DescribeCertificatesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeCertificatesOutcome()>>(
        [this, request]()
        {
            return this->DescribeCertificates(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

SslClient::DescribeCompaniesOutcome SslClient::DescribeCompanies(const DescribeCompaniesRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeCompanies");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeCompaniesResponse rsp = DescribeCompaniesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeCompaniesOutcome(rsp);
        else
            return DescribeCompaniesOutcome(o.GetError());
    }
    else
    {
        return DescribeCompaniesOutcome(outcome.GetError());
    }
}

void SslClient::DescribeCompaniesAsync(const DescribeCompaniesRequest& request, const DescribeCompaniesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeCompanies(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

SslClient::DescribeCompaniesOutcomeCallable SslClient::DescribeCompaniesCallable(const DescribeCompaniesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeCompaniesOutcome()>>(
        [this, request]()
        {
            return this->DescribeCompanies(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

SslClient::DescribeDeleteCertificatesTaskResultOutcome SslClient::DescribeDeleteCertificatesTaskResult(const DescribeDeleteCertificatesTaskResultRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeDeleteCertificatesTaskResult");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeDeleteCertificatesTaskResultResponse rsp = DescribeDeleteCertificatesTaskResultResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeDeleteCertificatesTaskResultOutcome(rsp);
        else
            return DescribeDeleteCertificatesTaskResultOutcome(o.GetError());
    }
    else
    {
        return DescribeDeleteCertificatesTaskResultOutcome(outcome.GetError());
    }
}

void SslClient::DescribeDeleteCertificatesTaskResultAsync(const DescribeDeleteCertificatesTaskResultRequest& request, const DescribeDeleteCertificatesTaskResultAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeDeleteCertificatesTaskResult(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

SslClient::DescribeDeleteCertificatesTaskResultOutcomeCallable SslClient::DescribeDeleteCertificatesTaskResultCallable(const DescribeDeleteCertificatesTaskResultRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeDeleteCertificatesTaskResultOutcome()>>(
        [this, request]()
        {
            return this->DescribeDeleteCertificatesTaskResult(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

SslClient::DescribeDeployedResourcesOutcome SslClient::DescribeDeployedResources(const DescribeDeployedResourcesRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeDeployedResources");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeDeployedResourcesResponse rsp = DescribeDeployedResourcesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeDeployedResourcesOutcome(rsp);
        else
            return DescribeDeployedResourcesOutcome(o.GetError());
    }
    else
    {
        return DescribeDeployedResourcesOutcome(outcome.GetError());
    }
}

void SslClient::DescribeDeployedResourcesAsync(const DescribeDeployedResourcesRequest& request, const DescribeDeployedResourcesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeDeployedResources(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

SslClient::DescribeDeployedResourcesOutcomeCallable SslClient::DescribeDeployedResourcesCallable(const DescribeDeployedResourcesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeDeployedResourcesOutcome()>>(
        [this, request]()
        {
            return this->DescribeDeployedResources(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

SslClient::DescribeDownloadCertificateUrlOutcome SslClient::DescribeDownloadCertificateUrl(const DescribeDownloadCertificateUrlRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeDownloadCertificateUrl");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeDownloadCertificateUrlResponse rsp = DescribeDownloadCertificateUrlResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeDownloadCertificateUrlOutcome(rsp);
        else
            return DescribeDownloadCertificateUrlOutcome(o.GetError());
    }
    else
    {
        return DescribeDownloadCertificateUrlOutcome(outcome.GetError());
    }
}

void SslClient::DescribeDownloadCertificateUrlAsync(const DescribeDownloadCertificateUrlRequest& request, const DescribeDownloadCertificateUrlAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeDownloadCertificateUrl(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

SslClient::DescribeDownloadCertificateUrlOutcomeCallable SslClient::DescribeDownloadCertificateUrlCallable(const DescribeDownloadCertificateUrlRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeDownloadCertificateUrlOutcome()>>(
        [this, request]()
        {
            return this->DescribeDownloadCertificateUrl(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

SslClient::DescribeHostApiGatewayInstanceListOutcome SslClient::DescribeHostApiGatewayInstanceList(const DescribeHostApiGatewayInstanceListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeHostApiGatewayInstanceList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeHostApiGatewayInstanceListResponse rsp = DescribeHostApiGatewayInstanceListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeHostApiGatewayInstanceListOutcome(rsp);
        else
            return DescribeHostApiGatewayInstanceListOutcome(o.GetError());
    }
    else
    {
        return DescribeHostApiGatewayInstanceListOutcome(outcome.GetError());
    }
}

void SslClient::DescribeHostApiGatewayInstanceListAsync(const DescribeHostApiGatewayInstanceListRequest& request, const DescribeHostApiGatewayInstanceListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeHostApiGatewayInstanceList(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

SslClient::DescribeHostApiGatewayInstanceListOutcomeCallable SslClient::DescribeHostApiGatewayInstanceListCallable(const DescribeHostApiGatewayInstanceListRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeHostApiGatewayInstanceListOutcome()>>(
        [this, request]()
        {
            return this->DescribeHostApiGatewayInstanceList(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

SslClient::DescribeHostCdnInstanceListOutcome SslClient::DescribeHostCdnInstanceList(const DescribeHostCdnInstanceListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeHostCdnInstanceList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeHostCdnInstanceListResponse rsp = DescribeHostCdnInstanceListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeHostCdnInstanceListOutcome(rsp);
        else
            return DescribeHostCdnInstanceListOutcome(o.GetError());
    }
    else
    {
        return DescribeHostCdnInstanceListOutcome(outcome.GetError());
    }
}

void SslClient::DescribeHostCdnInstanceListAsync(const DescribeHostCdnInstanceListRequest& request, const DescribeHostCdnInstanceListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeHostCdnInstanceList(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

SslClient::DescribeHostCdnInstanceListOutcomeCallable SslClient::DescribeHostCdnInstanceListCallable(const DescribeHostCdnInstanceListRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeHostCdnInstanceListOutcome()>>(
        [this, request]()
        {
            return this->DescribeHostCdnInstanceList(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

SslClient::DescribeHostClbInstanceListOutcome SslClient::DescribeHostClbInstanceList(const DescribeHostClbInstanceListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeHostClbInstanceList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeHostClbInstanceListResponse rsp = DescribeHostClbInstanceListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeHostClbInstanceListOutcome(rsp);
        else
            return DescribeHostClbInstanceListOutcome(o.GetError());
    }
    else
    {
        return DescribeHostClbInstanceListOutcome(outcome.GetError());
    }
}

void SslClient::DescribeHostClbInstanceListAsync(const DescribeHostClbInstanceListRequest& request, const DescribeHostClbInstanceListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeHostClbInstanceList(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

SslClient::DescribeHostClbInstanceListOutcomeCallable SslClient::DescribeHostClbInstanceListCallable(const DescribeHostClbInstanceListRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeHostClbInstanceListOutcome()>>(
        [this, request]()
        {
            return this->DescribeHostClbInstanceList(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

SslClient::DescribeHostCosInstanceListOutcome SslClient::DescribeHostCosInstanceList(const DescribeHostCosInstanceListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeHostCosInstanceList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeHostCosInstanceListResponse rsp = DescribeHostCosInstanceListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeHostCosInstanceListOutcome(rsp);
        else
            return DescribeHostCosInstanceListOutcome(o.GetError());
    }
    else
    {
        return DescribeHostCosInstanceListOutcome(outcome.GetError());
    }
}

void SslClient::DescribeHostCosInstanceListAsync(const DescribeHostCosInstanceListRequest& request, const DescribeHostCosInstanceListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeHostCosInstanceList(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

SslClient::DescribeHostCosInstanceListOutcomeCallable SslClient::DescribeHostCosInstanceListCallable(const DescribeHostCosInstanceListRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeHostCosInstanceListOutcome()>>(
        [this, request]()
        {
            return this->DescribeHostCosInstanceList(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

SslClient::DescribeHostDdosInstanceListOutcome SslClient::DescribeHostDdosInstanceList(const DescribeHostDdosInstanceListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeHostDdosInstanceList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeHostDdosInstanceListResponse rsp = DescribeHostDdosInstanceListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeHostDdosInstanceListOutcome(rsp);
        else
            return DescribeHostDdosInstanceListOutcome(o.GetError());
    }
    else
    {
        return DescribeHostDdosInstanceListOutcome(outcome.GetError());
    }
}

void SslClient::DescribeHostDdosInstanceListAsync(const DescribeHostDdosInstanceListRequest& request, const DescribeHostDdosInstanceListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeHostDdosInstanceList(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

SslClient::DescribeHostDdosInstanceListOutcomeCallable SslClient::DescribeHostDdosInstanceListCallable(const DescribeHostDdosInstanceListRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeHostDdosInstanceListOutcome()>>(
        [this, request]()
        {
            return this->DescribeHostDdosInstanceList(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

SslClient::DescribeHostDeployRecordOutcome SslClient::DescribeHostDeployRecord(const DescribeHostDeployRecordRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeHostDeployRecord");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeHostDeployRecordResponse rsp = DescribeHostDeployRecordResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeHostDeployRecordOutcome(rsp);
        else
            return DescribeHostDeployRecordOutcome(o.GetError());
    }
    else
    {
        return DescribeHostDeployRecordOutcome(outcome.GetError());
    }
}

void SslClient::DescribeHostDeployRecordAsync(const DescribeHostDeployRecordRequest& request, const DescribeHostDeployRecordAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeHostDeployRecord(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

SslClient::DescribeHostDeployRecordOutcomeCallable SslClient::DescribeHostDeployRecordCallable(const DescribeHostDeployRecordRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeHostDeployRecordOutcome()>>(
        [this, request]()
        {
            return this->DescribeHostDeployRecord(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

SslClient::DescribeHostDeployRecordDetailOutcome SslClient::DescribeHostDeployRecordDetail(const DescribeHostDeployRecordDetailRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeHostDeployRecordDetail");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeHostDeployRecordDetailResponse rsp = DescribeHostDeployRecordDetailResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeHostDeployRecordDetailOutcome(rsp);
        else
            return DescribeHostDeployRecordDetailOutcome(o.GetError());
    }
    else
    {
        return DescribeHostDeployRecordDetailOutcome(outcome.GetError());
    }
}

void SslClient::DescribeHostDeployRecordDetailAsync(const DescribeHostDeployRecordDetailRequest& request, const DescribeHostDeployRecordDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeHostDeployRecordDetail(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

SslClient::DescribeHostDeployRecordDetailOutcomeCallable SslClient::DescribeHostDeployRecordDetailCallable(const DescribeHostDeployRecordDetailRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeHostDeployRecordDetailOutcome()>>(
        [this, request]()
        {
            return this->DescribeHostDeployRecordDetail(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

SslClient::DescribeHostLighthouseInstanceListOutcome SslClient::DescribeHostLighthouseInstanceList(const DescribeHostLighthouseInstanceListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeHostLighthouseInstanceList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeHostLighthouseInstanceListResponse rsp = DescribeHostLighthouseInstanceListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeHostLighthouseInstanceListOutcome(rsp);
        else
            return DescribeHostLighthouseInstanceListOutcome(o.GetError());
    }
    else
    {
        return DescribeHostLighthouseInstanceListOutcome(outcome.GetError());
    }
}

void SslClient::DescribeHostLighthouseInstanceListAsync(const DescribeHostLighthouseInstanceListRequest& request, const DescribeHostLighthouseInstanceListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeHostLighthouseInstanceList(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

SslClient::DescribeHostLighthouseInstanceListOutcomeCallable SslClient::DescribeHostLighthouseInstanceListCallable(const DescribeHostLighthouseInstanceListRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeHostLighthouseInstanceListOutcome()>>(
        [this, request]()
        {
            return this->DescribeHostLighthouseInstanceList(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

SslClient::DescribeHostLiveInstanceListOutcome SslClient::DescribeHostLiveInstanceList(const DescribeHostLiveInstanceListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeHostLiveInstanceList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeHostLiveInstanceListResponse rsp = DescribeHostLiveInstanceListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeHostLiveInstanceListOutcome(rsp);
        else
            return DescribeHostLiveInstanceListOutcome(o.GetError());
    }
    else
    {
        return DescribeHostLiveInstanceListOutcome(outcome.GetError());
    }
}

void SslClient::DescribeHostLiveInstanceListAsync(const DescribeHostLiveInstanceListRequest& request, const DescribeHostLiveInstanceListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeHostLiveInstanceList(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

SslClient::DescribeHostLiveInstanceListOutcomeCallable SslClient::DescribeHostLiveInstanceListCallable(const DescribeHostLiveInstanceListRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeHostLiveInstanceListOutcome()>>(
        [this, request]()
        {
            return this->DescribeHostLiveInstanceList(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

SslClient::DescribeHostTeoInstanceListOutcome SslClient::DescribeHostTeoInstanceList(const DescribeHostTeoInstanceListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeHostTeoInstanceList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeHostTeoInstanceListResponse rsp = DescribeHostTeoInstanceListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeHostTeoInstanceListOutcome(rsp);
        else
            return DescribeHostTeoInstanceListOutcome(o.GetError());
    }
    else
    {
        return DescribeHostTeoInstanceListOutcome(outcome.GetError());
    }
}

void SslClient::DescribeHostTeoInstanceListAsync(const DescribeHostTeoInstanceListRequest& request, const DescribeHostTeoInstanceListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeHostTeoInstanceList(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

SslClient::DescribeHostTeoInstanceListOutcomeCallable SslClient::DescribeHostTeoInstanceListCallable(const DescribeHostTeoInstanceListRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeHostTeoInstanceListOutcome()>>(
        [this, request]()
        {
            return this->DescribeHostTeoInstanceList(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

SslClient::DescribeHostTkeInstanceListOutcome SslClient::DescribeHostTkeInstanceList(const DescribeHostTkeInstanceListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeHostTkeInstanceList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeHostTkeInstanceListResponse rsp = DescribeHostTkeInstanceListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeHostTkeInstanceListOutcome(rsp);
        else
            return DescribeHostTkeInstanceListOutcome(o.GetError());
    }
    else
    {
        return DescribeHostTkeInstanceListOutcome(outcome.GetError());
    }
}

void SslClient::DescribeHostTkeInstanceListAsync(const DescribeHostTkeInstanceListRequest& request, const DescribeHostTkeInstanceListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeHostTkeInstanceList(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

SslClient::DescribeHostTkeInstanceListOutcomeCallable SslClient::DescribeHostTkeInstanceListCallable(const DescribeHostTkeInstanceListRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeHostTkeInstanceListOutcome()>>(
        [this, request]()
        {
            return this->DescribeHostTkeInstanceList(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

SslClient::DescribeHostUpdateRecordOutcome SslClient::DescribeHostUpdateRecord(const DescribeHostUpdateRecordRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeHostUpdateRecord");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeHostUpdateRecordResponse rsp = DescribeHostUpdateRecordResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeHostUpdateRecordOutcome(rsp);
        else
            return DescribeHostUpdateRecordOutcome(o.GetError());
    }
    else
    {
        return DescribeHostUpdateRecordOutcome(outcome.GetError());
    }
}

void SslClient::DescribeHostUpdateRecordAsync(const DescribeHostUpdateRecordRequest& request, const DescribeHostUpdateRecordAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeHostUpdateRecord(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

SslClient::DescribeHostUpdateRecordOutcomeCallable SslClient::DescribeHostUpdateRecordCallable(const DescribeHostUpdateRecordRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeHostUpdateRecordOutcome()>>(
        [this, request]()
        {
            return this->DescribeHostUpdateRecord(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

SslClient::DescribeHostUpdateRecordDetailOutcome SslClient::DescribeHostUpdateRecordDetail(const DescribeHostUpdateRecordDetailRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeHostUpdateRecordDetail");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeHostUpdateRecordDetailResponse rsp = DescribeHostUpdateRecordDetailResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeHostUpdateRecordDetailOutcome(rsp);
        else
            return DescribeHostUpdateRecordDetailOutcome(o.GetError());
    }
    else
    {
        return DescribeHostUpdateRecordDetailOutcome(outcome.GetError());
    }
}

void SslClient::DescribeHostUpdateRecordDetailAsync(const DescribeHostUpdateRecordDetailRequest& request, const DescribeHostUpdateRecordDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeHostUpdateRecordDetail(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

SslClient::DescribeHostUpdateRecordDetailOutcomeCallable SslClient::DescribeHostUpdateRecordDetailCallable(const DescribeHostUpdateRecordDetailRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeHostUpdateRecordDetailOutcome()>>(
        [this, request]()
        {
            return this->DescribeHostUpdateRecordDetail(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

SslClient::DescribeHostUploadUpdateRecordOutcome SslClient::DescribeHostUploadUpdateRecord(const DescribeHostUploadUpdateRecordRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeHostUploadUpdateRecord");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeHostUploadUpdateRecordResponse rsp = DescribeHostUploadUpdateRecordResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeHostUploadUpdateRecordOutcome(rsp);
        else
            return DescribeHostUploadUpdateRecordOutcome(o.GetError());
    }
    else
    {
        return DescribeHostUploadUpdateRecordOutcome(outcome.GetError());
    }
}

void SslClient::DescribeHostUploadUpdateRecordAsync(const DescribeHostUploadUpdateRecordRequest& request, const DescribeHostUploadUpdateRecordAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeHostUploadUpdateRecord(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

SslClient::DescribeHostUploadUpdateRecordOutcomeCallable SslClient::DescribeHostUploadUpdateRecordCallable(const DescribeHostUploadUpdateRecordRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeHostUploadUpdateRecordOutcome()>>(
        [this, request]()
        {
            return this->DescribeHostUploadUpdateRecord(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

SslClient::DescribeHostUploadUpdateRecordDetailOutcome SslClient::DescribeHostUploadUpdateRecordDetail(const DescribeHostUploadUpdateRecordDetailRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeHostUploadUpdateRecordDetail");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeHostUploadUpdateRecordDetailResponse rsp = DescribeHostUploadUpdateRecordDetailResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeHostUploadUpdateRecordDetailOutcome(rsp);
        else
            return DescribeHostUploadUpdateRecordDetailOutcome(o.GetError());
    }
    else
    {
        return DescribeHostUploadUpdateRecordDetailOutcome(outcome.GetError());
    }
}

void SslClient::DescribeHostUploadUpdateRecordDetailAsync(const DescribeHostUploadUpdateRecordDetailRequest& request, const DescribeHostUploadUpdateRecordDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeHostUploadUpdateRecordDetail(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

SslClient::DescribeHostUploadUpdateRecordDetailOutcomeCallable SslClient::DescribeHostUploadUpdateRecordDetailCallable(const DescribeHostUploadUpdateRecordDetailRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeHostUploadUpdateRecordDetailOutcome()>>(
        [this, request]()
        {
            return this->DescribeHostUploadUpdateRecordDetail(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

SslClient::DescribeHostVodInstanceListOutcome SslClient::DescribeHostVodInstanceList(const DescribeHostVodInstanceListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeHostVodInstanceList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeHostVodInstanceListResponse rsp = DescribeHostVodInstanceListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeHostVodInstanceListOutcome(rsp);
        else
            return DescribeHostVodInstanceListOutcome(o.GetError());
    }
    else
    {
        return DescribeHostVodInstanceListOutcome(outcome.GetError());
    }
}

void SslClient::DescribeHostVodInstanceListAsync(const DescribeHostVodInstanceListRequest& request, const DescribeHostVodInstanceListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeHostVodInstanceList(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

SslClient::DescribeHostVodInstanceListOutcomeCallable SslClient::DescribeHostVodInstanceListCallable(const DescribeHostVodInstanceListRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeHostVodInstanceListOutcome()>>(
        [this, request]()
        {
            return this->DescribeHostVodInstanceList(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

SslClient::DescribeHostWafInstanceListOutcome SslClient::DescribeHostWafInstanceList(const DescribeHostWafInstanceListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeHostWafInstanceList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeHostWafInstanceListResponse rsp = DescribeHostWafInstanceListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeHostWafInstanceListOutcome(rsp);
        else
            return DescribeHostWafInstanceListOutcome(o.GetError());
    }
    else
    {
        return DescribeHostWafInstanceListOutcome(outcome.GetError());
    }
}

void SslClient::DescribeHostWafInstanceListAsync(const DescribeHostWafInstanceListRequest& request, const DescribeHostWafInstanceListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeHostWafInstanceList(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

SslClient::DescribeHostWafInstanceListOutcomeCallable SslClient::DescribeHostWafInstanceListCallable(const DescribeHostWafInstanceListRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeHostWafInstanceListOutcome()>>(
        [this, request]()
        {
            return this->DescribeHostWafInstanceList(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

SslClient::DescribeManagerDetailOutcome SslClient::DescribeManagerDetail(const DescribeManagerDetailRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeManagerDetail");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeManagerDetailResponse rsp = DescribeManagerDetailResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeManagerDetailOutcome(rsp);
        else
            return DescribeManagerDetailOutcome(o.GetError());
    }
    else
    {
        return DescribeManagerDetailOutcome(outcome.GetError());
    }
}

void SslClient::DescribeManagerDetailAsync(const DescribeManagerDetailRequest& request, const DescribeManagerDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeManagerDetail(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

SslClient::DescribeManagerDetailOutcomeCallable SslClient::DescribeManagerDetailCallable(const DescribeManagerDetailRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeManagerDetailOutcome()>>(
        [this, request]()
        {
            return this->DescribeManagerDetail(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

SslClient::DescribeManagersOutcome SslClient::DescribeManagers(const DescribeManagersRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeManagers");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeManagersResponse rsp = DescribeManagersResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeManagersOutcome(rsp);
        else
            return DescribeManagersOutcome(o.GetError());
    }
    else
    {
        return DescribeManagersOutcome(outcome.GetError());
    }
}

void SslClient::DescribeManagersAsync(const DescribeManagersRequest& request, const DescribeManagersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeManagers(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

SslClient::DescribeManagersOutcomeCallable SslClient::DescribeManagersCallable(const DescribeManagersRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeManagersOutcome()>>(
        [this, request]()
        {
            return this->DescribeManagers(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

SslClient::DescribePackagesOutcome SslClient::DescribePackages(const DescribePackagesRequest &request)
{
    auto outcome = MakeRequest(request, "DescribePackages");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribePackagesResponse rsp = DescribePackagesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribePackagesOutcome(rsp);
        else
            return DescribePackagesOutcome(o.GetError());
    }
    else
    {
        return DescribePackagesOutcome(outcome.GetError());
    }
}

void SslClient::DescribePackagesAsync(const DescribePackagesRequest& request, const DescribePackagesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribePackages(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

SslClient::DescribePackagesOutcomeCallable SslClient::DescribePackagesCallable(const DescribePackagesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribePackagesOutcome()>>(
        [this, request]()
        {
            return this->DescribePackages(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

SslClient::DownloadCertificateOutcome SslClient::DownloadCertificate(const DownloadCertificateRequest &request)
{
    auto outcome = MakeRequest(request, "DownloadCertificate");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DownloadCertificateResponse rsp = DownloadCertificateResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DownloadCertificateOutcome(rsp);
        else
            return DownloadCertificateOutcome(o.GetError());
    }
    else
    {
        return DownloadCertificateOutcome(outcome.GetError());
    }
}

void SslClient::DownloadCertificateAsync(const DownloadCertificateRequest& request, const DownloadCertificateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DownloadCertificate(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

SslClient::DownloadCertificateOutcomeCallable SslClient::DownloadCertificateCallable(const DownloadCertificateRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DownloadCertificateOutcome()>>(
        [this, request]()
        {
            return this->DownloadCertificate(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

SslClient::ModifyCertificateAliasOutcome SslClient::ModifyCertificateAlias(const ModifyCertificateAliasRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyCertificateAlias");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyCertificateAliasResponse rsp = ModifyCertificateAliasResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyCertificateAliasOutcome(rsp);
        else
            return ModifyCertificateAliasOutcome(o.GetError());
    }
    else
    {
        return ModifyCertificateAliasOutcome(outcome.GetError());
    }
}

void SslClient::ModifyCertificateAliasAsync(const ModifyCertificateAliasRequest& request, const ModifyCertificateAliasAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyCertificateAlias(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

SslClient::ModifyCertificateAliasOutcomeCallable SslClient::ModifyCertificateAliasCallable(const ModifyCertificateAliasRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyCertificateAliasOutcome()>>(
        [this, request]()
        {
            return this->ModifyCertificateAlias(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

SslClient::ModifyCertificateProjectOutcome SslClient::ModifyCertificateProject(const ModifyCertificateProjectRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyCertificateProject");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyCertificateProjectResponse rsp = ModifyCertificateProjectResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyCertificateProjectOutcome(rsp);
        else
            return ModifyCertificateProjectOutcome(o.GetError());
    }
    else
    {
        return ModifyCertificateProjectOutcome(outcome.GetError());
    }
}

void SslClient::ModifyCertificateProjectAsync(const ModifyCertificateProjectRequest& request, const ModifyCertificateProjectAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyCertificateProject(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

SslClient::ModifyCertificateProjectOutcomeCallable SslClient::ModifyCertificateProjectCallable(const ModifyCertificateProjectRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyCertificateProjectOutcome()>>(
        [this, request]()
        {
            return this->ModifyCertificateProject(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

SslClient::ModifyCertificateResubmitOutcome SslClient::ModifyCertificateResubmit(const ModifyCertificateResubmitRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyCertificateResubmit");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyCertificateResubmitResponse rsp = ModifyCertificateResubmitResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyCertificateResubmitOutcome(rsp);
        else
            return ModifyCertificateResubmitOutcome(o.GetError());
    }
    else
    {
        return ModifyCertificateResubmitOutcome(outcome.GetError());
    }
}

void SslClient::ModifyCertificateResubmitAsync(const ModifyCertificateResubmitRequest& request, const ModifyCertificateResubmitAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyCertificateResubmit(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

SslClient::ModifyCertificateResubmitOutcomeCallable SslClient::ModifyCertificateResubmitCallable(const ModifyCertificateResubmitRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyCertificateResubmitOutcome()>>(
        [this, request]()
        {
            return this->ModifyCertificateResubmit(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

SslClient::ModifyCertificatesExpiringNotificationSwitchOutcome SslClient::ModifyCertificatesExpiringNotificationSwitch(const ModifyCertificatesExpiringNotificationSwitchRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyCertificatesExpiringNotificationSwitch");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyCertificatesExpiringNotificationSwitchResponse rsp = ModifyCertificatesExpiringNotificationSwitchResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyCertificatesExpiringNotificationSwitchOutcome(rsp);
        else
            return ModifyCertificatesExpiringNotificationSwitchOutcome(o.GetError());
    }
    else
    {
        return ModifyCertificatesExpiringNotificationSwitchOutcome(outcome.GetError());
    }
}

void SslClient::ModifyCertificatesExpiringNotificationSwitchAsync(const ModifyCertificatesExpiringNotificationSwitchRequest& request, const ModifyCertificatesExpiringNotificationSwitchAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyCertificatesExpiringNotificationSwitch(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

SslClient::ModifyCertificatesExpiringNotificationSwitchOutcomeCallable SslClient::ModifyCertificatesExpiringNotificationSwitchCallable(const ModifyCertificatesExpiringNotificationSwitchRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyCertificatesExpiringNotificationSwitchOutcome()>>(
        [this, request]()
        {
            return this->ModifyCertificatesExpiringNotificationSwitch(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

SslClient::ReplaceCertificateOutcome SslClient::ReplaceCertificate(const ReplaceCertificateRequest &request)
{
    auto outcome = MakeRequest(request, "ReplaceCertificate");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ReplaceCertificateResponse rsp = ReplaceCertificateResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ReplaceCertificateOutcome(rsp);
        else
            return ReplaceCertificateOutcome(o.GetError());
    }
    else
    {
        return ReplaceCertificateOutcome(outcome.GetError());
    }
}

void SslClient::ReplaceCertificateAsync(const ReplaceCertificateRequest& request, const ReplaceCertificateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ReplaceCertificate(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

SslClient::ReplaceCertificateOutcomeCallable SslClient::ReplaceCertificateCallable(const ReplaceCertificateRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ReplaceCertificateOutcome()>>(
        [this, request]()
        {
            return this->ReplaceCertificate(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

SslClient::RevokeCertificateOutcome SslClient::RevokeCertificate(const RevokeCertificateRequest &request)
{
    auto outcome = MakeRequest(request, "RevokeCertificate");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        RevokeCertificateResponse rsp = RevokeCertificateResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return RevokeCertificateOutcome(rsp);
        else
            return RevokeCertificateOutcome(o.GetError());
    }
    else
    {
        return RevokeCertificateOutcome(outcome.GetError());
    }
}

void SslClient::RevokeCertificateAsync(const RevokeCertificateRequest& request, const RevokeCertificateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->RevokeCertificate(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

SslClient::RevokeCertificateOutcomeCallable SslClient::RevokeCertificateCallable(const RevokeCertificateRequest &request)
{
    auto task = std::make_shared<std::packaged_task<RevokeCertificateOutcome()>>(
        [this, request]()
        {
            return this->RevokeCertificate(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

SslClient::SubmitAuditManagerOutcome SslClient::SubmitAuditManager(const SubmitAuditManagerRequest &request)
{
    auto outcome = MakeRequest(request, "SubmitAuditManager");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        SubmitAuditManagerResponse rsp = SubmitAuditManagerResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return SubmitAuditManagerOutcome(rsp);
        else
            return SubmitAuditManagerOutcome(o.GetError());
    }
    else
    {
        return SubmitAuditManagerOutcome(outcome.GetError());
    }
}

void SslClient::SubmitAuditManagerAsync(const SubmitAuditManagerRequest& request, const SubmitAuditManagerAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->SubmitAuditManager(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

SslClient::SubmitAuditManagerOutcomeCallable SslClient::SubmitAuditManagerCallable(const SubmitAuditManagerRequest &request)
{
    auto task = std::make_shared<std::packaged_task<SubmitAuditManagerOutcome()>>(
        [this, request]()
        {
            return this->SubmitAuditManager(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

SslClient::SubmitCertificateInformationOutcome SslClient::SubmitCertificateInformation(const SubmitCertificateInformationRequest &request)
{
    auto outcome = MakeRequest(request, "SubmitCertificateInformation");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        SubmitCertificateInformationResponse rsp = SubmitCertificateInformationResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return SubmitCertificateInformationOutcome(rsp);
        else
            return SubmitCertificateInformationOutcome(o.GetError());
    }
    else
    {
        return SubmitCertificateInformationOutcome(outcome.GetError());
    }
}

void SslClient::SubmitCertificateInformationAsync(const SubmitCertificateInformationRequest& request, const SubmitCertificateInformationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->SubmitCertificateInformation(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

SslClient::SubmitCertificateInformationOutcomeCallable SslClient::SubmitCertificateInformationCallable(const SubmitCertificateInformationRequest &request)
{
    auto task = std::make_shared<std::packaged_task<SubmitCertificateInformationOutcome()>>(
        [this, request]()
        {
            return this->SubmitCertificateInformation(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

SslClient::UpdateCertificateInstanceOutcome SslClient::UpdateCertificateInstance(const UpdateCertificateInstanceRequest &request)
{
    auto outcome = MakeRequest(request, "UpdateCertificateInstance");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        UpdateCertificateInstanceResponse rsp = UpdateCertificateInstanceResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return UpdateCertificateInstanceOutcome(rsp);
        else
            return UpdateCertificateInstanceOutcome(o.GetError());
    }
    else
    {
        return UpdateCertificateInstanceOutcome(outcome.GetError());
    }
}

void SslClient::UpdateCertificateInstanceAsync(const UpdateCertificateInstanceRequest& request, const UpdateCertificateInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->UpdateCertificateInstance(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

SslClient::UpdateCertificateInstanceOutcomeCallable SslClient::UpdateCertificateInstanceCallable(const UpdateCertificateInstanceRequest &request)
{
    auto task = std::make_shared<std::packaged_task<UpdateCertificateInstanceOutcome()>>(
        [this, request]()
        {
            return this->UpdateCertificateInstance(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

SslClient::UpdateCertificateRecordRetryOutcome SslClient::UpdateCertificateRecordRetry(const UpdateCertificateRecordRetryRequest &request)
{
    auto outcome = MakeRequest(request, "UpdateCertificateRecordRetry");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        UpdateCertificateRecordRetryResponse rsp = UpdateCertificateRecordRetryResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return UpdateCertificateRecordRetryOutcome(rsp);
        else
            return UpdateCertificateRecordRetryOutcome(o.GetError());
    }
    else
    {
        return UpdateCertificateRecordRetryOutcome(outcome.GetError());
    }
}

void SslClient::UpdateCertificateRecordRetryAsync(const UpdateCertificateRecordRetryRequest& request, const UpdateCertificateRecordRetryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->UpdateCertificateRecordRetry(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

SslClient::UpdateCertificateRecordRetryOutcomeCallable SslClient::UpdateCertificateRecordRetryCallable(const UpdateCertificateRecordRetryRequest &request)
{
    auto task = std::make_shared<std::packaged_task<UpdateCertificateRecordRetryOutcome()>>(
        [this, request]()
        {
            return this->UpdateCertificateRecordRetry(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

SslClient::UpdateCertificateRecordRollbackOutcome SslClient::UpdateCertificateRecordRollback(const UpdateCertificateRecordRollbackRequest &request)
{
    auto outcome = MakeRequest(request, "UpdateCertificateRecordRollback");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        UpdateCertificateRecordRollbackResponse rsp = UpdateCertificateRecordRollbackResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return UpdateCertificateRecordRollbackOutcome(rsp);
        else
            return UpdateCertificateRecordRollbackOutcome(o.GetError());
    }
    else
    {
        return UpdateCertificateRecordRollbackOutcome(outcome.GetError());
    }
}

void SslClient::UpdateCertificateRecordRollbackAsync(const UpdateCertificateRecordRollbackRequest& request, const UpdateCertificateRecordRollbackAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->UpdateCertificateRecordRollback(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

SslClient::UpdateCertificateRecordRollbackOutcomeCallable SslClient::UpdateCertificateRecordRollbackCallable(const UpdateCertificateRecordRollbackRequest &request)
{
    auto task = std::make_shared<std::packaged_task<UpdateCertificateRecordRollbackOutcome()>>(
        [this, request]()
        {
            return this->UpdateCertificateRecordRollback(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

SslClient::UploadCertificateOutcome SslClient::UploadCertificate(const UploadCertificateRequest &request)
{
    auto outcome = MakeRequest(request, "UploadCertificate");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        UploadCertificateResponse rsp = UploadCertificateResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return UploadCertificateOutcome(rsp);
        else
            return UploadCertificateOutcome(o.GetError());
    }
    else
    {
        return UploadCertificateOutcome(outcome.GetError());
    }
}

void SslClient::UploadCertificateAsync(const UploadCertificateRequest& request, const UploadCertificateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->UploadCertificate(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

SslClient::UploadCertificateOutcomeCallable SslClient::UploadCertificateCallable(const UploadCertificateRequest &request)
{
    auto task = std::make_shared<std::packaged_task<UploadCertificateOutcome()>>(
        [this, request]()
        {
            return this->UploadCertificate(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

SslClient::UploadConfirmLetterOutcome SslClient::UploadConfirmLetter(const UploadConfirmLetterRequest &request)
{
    auto outcome = MakeRequest(request, "UploadConfirmLetter");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        UploadConfirmLetterResponse rsp = UploadConfirmLetterResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return UploadConfirmLetterOutcome(rsp);
        else
            return UploadConfirmLetterOutcome(o.GetError());
    }
    else
    {
        return UploadConfirmLetterOutcome(outcome.GetError());
    }
}

void SslClient::UploadConfirmLetterAsync(const UploadConfirmLetterRequest& request, const UploadConfirmLetterAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->UploadConfirmLetter(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

SslClient::UploadConfirmLetterOutcomeCallable SslClient::UploadConfirmLetterCallable(const UploadConfirmLetterRequest &request)
{
    auto task = std::make_shared<std::packaged_task<UploadConfirmLetterOutcome()>>(
        [this, request]()
        {
            return this->UploadConfirmLetter(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

SslClient::UploadRevokeLetterOutcome SslClient::UploadRevokeLetter(const UploadRevokeLetterRequest &request)
{
    auto outcome = MakeRequest(request, "UploadRevokeLetter");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        UploadRevokeLetterResponse rsp = UploadRevokeLetterResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return UploadRevokeLetterOutcome(rsp);
        else
            return UploadRevokeLetterOutcome(o.GetError());
    }
    else
    {
        return UploadRevokeLetterOutcome(outcome.GetError());
    }
}

void SslClient::UploadRevokeLetterAsync(const UploadRevokeLetterRequest& request, const UploadRevokeLetterAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->UploadRevokeLetter(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

SslClient::UploadRevokeLetterOutcomeCallable SslClient::UploadRevokeLetterCallable(const UploadRevokeLetterRequest &request)
{
    auto task = std::make_shared<std::packaged_task<UploadRevokeLetterOutcome()>>(
        [this, request]()
        {
            return this->UploadRevokeLetter(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

SslClient::UploadUpdateCertificateInstanceOutcome SslClient::UploadUpdateCertificateInstance(const UploadUpdateCertificateInstanceRequest &request)
{
    auto outcome = MakeRequest(request, "UploadUpdateCertificateInstance");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        UploadUpdateCertificateInstanceResponse rsp = UploadUpdateCertificateInstanceResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return UploadUpdateCertificateInstanceOutcome(rsp);
        else
            return UploadUpdateCertificateInstanceOutcome(o.GetError());
    }
    else
    {
        return UploadUpdateCertificateInstanceOutcome(outcome.GetError());
    }
}

void SslClient::UploadUpdateCertificateInstanceAsync(const UploadUpdateCertificateInstanceRequest& request, const UploadUpdateCertificateInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->UploadUpdateCertificateInstance(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

SslClient::UploadUpdateCertificateInstanceOutcomeCallable SslClient::UploadUpdateCertificateInstanceCallable(const UploadUpdateCertificateInstanceRequest &request)
{
    auto task = std::make_shared<std::packaged_task<UploadUpdateCertificateInstanceOutcome()>>(
        [this, request]()
        {
            return this->UploadUpdateCertificateInstance(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

SslClient::UploadUpdateCertificateRecordRetryOutcome SslClient::UploadUpdateCertificateRecordRetry(const UploadUpdateCertificateRecordRetryRequest &request)
{
    auto outcome = MakeRequest(request, "UploadUpdateCertificateRecordRetry");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        UploadUpdateCertificateRecordRetryResponse rsp = UploadUpdateCertificateRecordRetryResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return UploadUpdateCertificateRecordRetryOutcome(rsp);
        else
            return UploadUpdateCertificateRecordRetryOutcome(o.GetError());
    }
    else
    {
        return UploadUpdateCertificateRecordRetryOutcome(outcome.GetError());
    }
}

void SslClient::UploadUpdateCertificateRecordRetryAsync(const UploadUpdateCertificateRecordRetryRequest& request, const UploadUpdateCertificateRecordRetryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->UploadUpdateCertificateRecordRetry(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

SslClient::UploadUpdateCertificateRecordRetryOutcomeCallable SslClient::UploadUpdateCertificateRecordRetryCallable(const UploadUpdateCertificateRecordRetryRequest &request)
{
    auto task = std::make_shared<std::packaged_task<UploadUpdateCertificateRecordRetryOutcome()>>(
        [this, request]()
        {
            return this->UploadUpdateCertificateRecordRetry(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

SslClient::UploadUpdateCertificateRecordRollbackOutcome SslClient::UploadUpdateCertificateRecordRollback(const UploadUpdateCertificateRecordRollbackRequest &request)
{
    auto outcome = MakeRequest(request, "UploadUpdateCertificateRecordRollback");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        UploadUpdateCertificateRecordRollbackResponse rsp = UploadUpdateCertificateRecordRollbackResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return UploadUpdateCertificateRecordRollbackOutcome(rsp);
        else
            return UploadUpdateCertificateRecordRollbackOutcome(o.GetError());
    }
    else
    {
        return UploadUpdateCertificateRecordRollbackOutcome(outcome.GetError());
    }
}

void SslClient::UploadUpdateCertificateRecordRollbackAsync(const UploadUpdateCertificateRecordRollbackRequest& request, const UploadUpdateCertificateRecordRollbackAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->UploadUpdateCertificateRecordRollback(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

SslClient::UploadUpdateCertificateRecordRollbackOutcomeCallable SslClient::UploadUpdateCertificateRecordRollbackCallable(const UploadUpdateCertificateRecordRollbackRequest &request)
{
    auto task = std::make_shared<std::packaged_task<UploadUpdateCertificateRecordRollbackOutcome()>>(
        [this, request]()
        {
            return this->UploadUpdateCertificateRecordRollback(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

SslClient::VerifyManagerOutcome SslClient::VerifyManager(const VerifyManagerRequest &request)
{
    auto outcome = MakeRequest(request, "VerifyManager");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        VerifyManagerResponse rsp = VerifyManagerResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return VerifyManagerOutcome(rsp);
        else
            return VerifyManagerOutcome(o.GetError());
    }
    else
    {
        return VerifyManagerOutcome(outcome.GetError());
    }
}

void SslClient::VerifyManagerAsync(const VerifyManagerRequest& request, const VerifyManagerAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->VerifyManager(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

SslClient::VerifyManagerOutcomeCallable SslClient::VerifyManagerCallable(const VerifyManagerRequest &request)
{
    auto task = std::make_shared<std::packaged_task<VerifyManagerOutcome()>>(
        [this, request]()
        {
            return this->VerifyManager(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

