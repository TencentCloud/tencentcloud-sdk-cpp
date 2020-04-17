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

