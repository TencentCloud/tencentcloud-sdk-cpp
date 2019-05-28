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

#include <tencentcloud/ds/v20180523/DsClient.h>
#include <tencentcloud/core/Executor.h>
#include <tencentcloud/core/Runnable.h>

using namespace TencentCloud;
using namespace TencentCloud::Ds::V20180523;
using namespace TencentCloud::Ds::V20180523::Model;
using namespace std;

namespace
{
    const string VERSION = "2018-05-23";
    const string ENDPOINT = "ds.tencentcloudapi.com";
}

DsClient::DsClient(const Credential &credential, const string &region) :
    DsClient(credential, region, ClientProfile())
{
}

DsClient::DsClient(const Credential &credential, const string &region, const ClientProfile &profile) :
    AbstractClient(ENDPOINT, VERSION, credential, region, profile)
{
}


DsClient::CheckVcodeOutcome DsClient::CheckVcode(const CheckVcodeRequest &request)
{
    auto outcome = MakeRequest(request, "CheckVcode");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CheckVcodeResponse rsp = CheckVcodeResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CheckVcodeOutcome(rsp);
        else
            return CheckVcodeOutcome(o.GetError());
    }
    else
    {
        return CheckVcodeOutcome(outcome.GetError());
    }
}

void DsClient::CheckVcodeAsync(const CheckVcodeRequest& request, const CheckVcodeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CheckVcode(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DsClient::CheckVcodeOutcomeCallable DsClient::CheckVcodeCallable(const CheckVcodeRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CheckVcodeOutcome()>>(
        [this, request]()
        {
            return this->CheckVcode(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

DsClient::CreateContractByUploadOutcome DsClient::CreateContractByUpload(const CreateContractByUploadRequest &request)
{
    auto outcome = MakeRequest(request, "CreateContractByUpload");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateContractByUploadResponse rsp = CreateContractByUploadResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateContractByUploadOutcome(rsp);
        else
            return CreateContractByUploadOutcome(o.GetError());
    }
    else
    {
        return CreateContractByUploadOutcome(outcome.GetError());
    }
}

void DsClient::CreateContractByUploadAsync(const CreateContractByUploadRequest& request, const CreateContractByUploadAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateContractByUpload(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DsClient::CreateContractByUploadOutcomeCallable DsClient::CreateContractByUploadCallable(const CreateContractByUploadRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateContractByUploadOutcome()>>(
        [this, request]()
        {
            return this->CreateContractByUpload(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

DsClient::CreateEnterpriseAccountOutcome DsClient::CreateEnterpriseAccount(const CreateEnterpriseAccountRequest &request)
{
    auto outcome = MakeRequest(request, "CreateEnterpriseAccount");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateEnterpriseAccountResponse rsp = CreateEnterpriseAccountResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateEnterpriseAccountOutcome(rsp);
        else
            return CreateEnterpriseAccountOutcome(o.GetError());
    }
    else
    {
        return CreateEnterpriseAccountOutcome(outcome.GetError());
    }
}

void DsClient::CreateEnterpriseAccountAsync(const CreateEnterpriseAccountRequest& request, const CreateEnterpriseAccountAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateEnterpriseAccount(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DsClient::CreateEnterpriseAccountOutcomeCallable DsClient::CreateEnterpriseAccountCallable(const CreateEnterpriseAccountRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateEnterpriseAccountOutcome()>>(
        [this, request]()
        {
            return this->CreateEnterpriseAccount(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

DsClient::CreatePersonalAccountOutcome DsClient::CreatePersonalAccount(const CreatePersonalAccountRequest &request)
{
    auto outcome = MakeRequest(request, "CreatePersonalAccount");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreatePersonalAccountResponse rsp = CreatePersonalAccountResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreatePersonalAccountOutcome(rsp);
        else
            return CreatePersonalAccountOutcome(o.GetError());
    }
    else
    {
        return CreatePersonalAccountOutcome(outcome.GetError());
    }
}

void DsClient::CreatePersonalAccountAsync(const CreatePersonalAccountRequest& request, const CreatePersonalAccountAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreatePersonalAccount(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DsClient::CreatePersonalAccountOutcomeCallable DsClient::CreatePersonalAccountCallable(const CreatePersonalAccountRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreatePersonalAccountOutcome()>>(
        [this, request]()
        {
            return this->CreatePersonalAccount(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

DsClient::CreateSealOutcome DsClient::CreateSeal(const CreateSealRequest &request)
{
    auto outcome = MakeRequest(request, "CreateSeal");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateSealResponse rsp = CreateSealResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateSealOutcome(rsp);
        else
            return CreateSealOutcome(o.GetError());
    }
    else
    {
        return CreateSealOutcome(outcome.GetError());
    }
}

void DsClient::CreateSealAsync(const CreateSealRequest& request, const CreateSealAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateSeal(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DsClient::CreateSealOutcomeCallable DsClient::CreateSealCallable(const CreateSealRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateSealOutcome()>>(
        [this, request]()
        {
            return this->CreateSeal(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

DsClient::DeleteAccountOutcome DsClient::DeleteAccount(const DeleteAccountRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteAccount");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteAccountResponse rsp = DeleteAccountResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteAccountOutcome(rsp);
        else
            return DeleteAccountOutcome(o.GetError());
    }
    else
    {
        return DeleteAccountOutcome(outcome.GetError());
    }
}

void DsClient::DeleteAccountAsync(const DeleteAccountRequest& request, const DeleteAccountAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteAccount(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DsClient::DeleteAccountOutcomeCallable DsClient::DeleteAccountCallable(const DeleteAccountRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteAccountOutcome()>>(
        [this, request]()
        {
            return this->DeleteAccount(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

DsClient::DeleteSealOutcome DsClient::DeleteSeal(const DeleteSealRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteSeal");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteSealResponse rsp = DeleteSealResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteSealOutcome(rsp);
        else
            return DeleteSealOutcome(o.GetError());
    }
    else
    {
        return DeleteSealOutcome(outcome.GetError());
    }
}

void DsClient::DeleteSealAsync(const DeleteSealRequest& request, const DeleteSealAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteSeal(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DsClient::DeleteSealOutcomeCallable DsClient::DeleteSealCallable(const DeleteSealRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteSealOutcome()>>(
        [this, request]()
        {
            return this->DeleteSeal(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

DsClient::DescribeTaskStatusOutcome DsClient::DescribeTaskStatus(const DescribeTaskStatusRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeTaskStatus");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeTaskStatusResponse rsp = DescribeTaskStatusResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeTaskStatusOutcome(rsp);
        else
            return DescribeTaskStatusOutcome(o.GetError());
    }
    else
    {
        return DescribeTaskStatusOutcome(outcome.GetError());
    }
}

void DsClient::DescribeTaskStatusAsync(const DescribeTaskStatusRequest& request, const DescribeTaskStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeTaskStatus(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DsClient::DescribeTaskStatusOutcomeCallable DsClient::DescribeTaskStatusCallable(const DescribeTaskStatusRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeTaskStatusOutcome()>>(
        [this, request]()
        {
            return this->DescribeTaskStatus(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

DsClient::DownloadContractOutcome DsClient::DownloadContract(const DownloadContractRequest &request)
{
    auto outcome = MakeRequest(request, "DownloadContract");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DownloadContractResponse rsp = DownloadContractResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DownloadContractOutcome(rsp);
        else
            return DownloadContractOutcome(o.GetError());
    }
    else
    {
        return DownloadContractOutcome(outcome.GetError());
    }
}

void DsClient::DownloadContractAsync(const DownloadContractRequest& request, const DownloadContractAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DownloadContract(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DsClient::DownloadContractOutcomeCallable DsClient::DownloadContractCallable(const DownloadContractRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DownloadContractOutcome()>>(
        [this, request]()
        {
            return this->DownloadContract(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

DsClient::SendVcodeOutcome DsClient::SendVcode(const SendVcodeRequest &request)
{
    auto outcome = MakeRequest(request, "SendVcode");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        SendVcodeResponse rsp = SendVcodeResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return SendVcodeOutcome(rsp);
        else
            return SendVcodeOutcome(o.GetError());
    }
    else
    {
        return SendVcodeOutcome(outcome.GetError());
    }
}

void DsClient::SendVcodeAsync(const SendVcodeRequest& request, const SendVcodeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->SendVcode(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DsClient::SendVcodeOutcomeCallable DsClient::SendVcodeCallable(const SendVcodeRequest &request)
{
    auto task = std::make_shared<std::packaged_task<SendVcodeOutcome()>>(
        [this, request]()
        {
            return this->SendVcode(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

DsClient::SignContractByCoordinateOutcome DsClient::SignContractByCoordinate(const SignContractByCoordinateRequest &request)
{
    auto outcome = MakeRequest(request, "SignContractByCoordinate");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        SignContractByCoordinateResponse rsp = SignContractByCoordinateResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return SignContractByCoordinateOutcome(rsp);
        else
            return SignContractByCoordinateOutcome(o.GetError());
    }
    else
    {
        return SignContractByCoordinateOutcome(outcome.GetError());
    }
}

void DsClient::SignContractByCoordinateAsync(const SignContractByCoordinateRequest& request, const SignContractByCoordinateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->SignContractByCoordinate(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DsClient::SignContractByCoordinateOutcomeCallable DsClient::SignContractByCoordinateCallable(const SignContractByCoordinateRequest &request)
{
    auto task = std::make_shared<std::packaged_task<SignContractByCoordinateOutcome()>>(
        [this, request]()
        {
            return this->SignContractByCoordinate(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

DsClient::SignContractByKeywordOutcome DsClient::SignContractByKeyword(const SignContractByKeywordRequest &request)
{
    auto outcome = MakeRequest(request, "SignContractByKeyword");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        SignContractByKeywordResponse rsp = SignContractByKeywordResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return SignContractByKeywordOutcome(rsp);
        else
            return SignContractByKeywordOutcome(o.GetError());
    }
    else
    {
        return SignContractByKeywordOutcome(outcome.GetError());
    }
}

void DsClient::SignContractByKeywordAsync(const SignContractByKeywordRequest& request, const SignContractByKeywordAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->SignContractByKeyword(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DsClient::SignContractByKeywordOutcomeCallable DsClient::SignContractByKeywordCallable(const SignContractByKeywordRequest &request)
{
    auto task = std::make_shared<std::packaged_task<SignContractByKeywordOutcome()>>(
        [this, request]()
        {
            return this->SignContractByKeyword(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

