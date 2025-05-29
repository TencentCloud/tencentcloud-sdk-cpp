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

#include <tencentcloud/ses/v20201002/SesClient.h>
#include <tencentcloud/core/Executor.h>
#include <tencentcloud/core/Runnable.h>

using namespace TencentCloud;
using namespace TencentCloud::Ses::V20201002;
using namespace TencentCloud::Ses::V20201002::Model;
using namespace std;

namespace
{
    const string VERSION = "2020-10-02";
    const string ENDPOINT = "ses.tencentcloudapi.com";
}

SesClient::SesClient(const Credential &credential, const string &region) :
    SesClient(credential, region, ClientProfile())
{
}

SesClient::SesClient(const Credential &credential, const string &region, const ClientProfile &profile) :
    AbstractClient(ENDPOINT, VERSION, credential, region, profile)
{
}


SesClient::BatchSendEmailOutcome SesClient::BatchSendEmail(const BatchSendEmailRequest &request)
{
    auto outcome = MakeRequest(request, "BatchSendEmail");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        BatchSendEmailResponse rsp = BatchSendEmailResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return BatchSendEmailOutcome(rsp);
        else
            return BatchSendEmailOutcome(o.GetError());
    }
    else
    {
        return BatchSendEmailOutcome(outcome.GetError());
    }
}

void SesClient::BatchSendEmailAsync(const BatchSendEmailRequest& request, const BatchSendEmailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->BatchSendEmail(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

SesClient::BatchSendEmailOutcomeCallable SesClient::BatchSendEmailCallable(const BatchSendEmailRequest &request)
{
    auto task = std::make_shared<std::packaged_task<BatchSendEmailOutcome()>>(
        [this, request]()
        {
            return this->BatchSendEmail(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

SesClient::CreateAddressUnsubscribeConfigOutcome SesClient::CreateAddressUnsubscribeConfig(const CreateAddressUnsubscribeConfigRequest &request)
{
    auto outcome = MakeRequest(request, "CreateAddressUnsubscribeConfig");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateAddressUnsubscribeConfigResponse rsp = CreateAddressUnsubscribeConfigResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateAddressUnsubscribeConfigOutcome(rsp);
        else
            return CreateAddressUnsubscribeConfigOutcome(o.GetError());
    }
    else
    {
        return CreateAddressUnsubscribeConfigOutcome(outcome.GetError());
    }
}

void SesClient::CreateAddressUnsubscribeConfigAsync(const CreateAddressUnsubscribeConfigRequest& request, const CreateAddressUnsubscribeConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateAddressUnsubscribeConfig(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

SesClient::CreateAddressUnsubscribeConfigOutcomeCallable SesClient::CreateAddressUnsubscribeConfigCallable(const CreateAddressUnsubscribeConfigRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateAddressUnsubscribeConfigOutcome()>>(
        [this, request]()
        {
            return this->CreateAddressUnsubscribeConfig(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

SesClient::CreateCustomBlacklistOutcome SesClient::CreateCustomBlacklist(const CreateCustomBlacklistRequest &request)
{
    auto outcome = MakeRequest(request, "CreateCustomBlacklist");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateCustomBlacklistResponse rsp = CreateCustomBlacklistResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateCustomBlacklistOutcome(rsp);
        else
            return CreateCustomBlacklistOutcome(o.GetError());
    }
    else
    {
        return CreateCustomBlacklistOutcome(outcome.GetError());
    }
}

void SesClient::CreateCustomBlacklistAsync(const CreateCustomBlacklistRequest& request, const CreateCustomBlacklistAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateCustomBlacklist(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

SesClient::CreateCustomBlacklistOutcomeCallable SesClient::CreateCustomBlacklistCallable(const CreateCustomBlacklistRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateCustomBlacklistOutcome()>>(
        [this, request]()
        {
            return this->CreateCustomBlacklist(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

SesClient::CreateEmailAddressOutcome SesClient::CreateEmailAddress(const CreateEmailAddressRequest &request)
{
    auto outcome = MakeRequest(request, "CreateEmailAddress");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateEmailAddressResponse rsp = CreateEmailAddressResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateEmailAddressOutcome(rsp);
        else
            return CreateEmailAddressOutcome(o.GetError());
    }
    else
    {
        return CreateEmailAddressOutcome(outcome.GetError());
    }
}

void SesClient::CreateEmailAddressAsync(const CreateEmailAddressRequest& request, const CreateEmailAddressAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateEmailAddress(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

SesClient::CreateEmailAddressOutcomeCallable SesClient::CreateEmailAddressCallable(const CreateEmailAddressRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateEmailAddressOutcome()>>(
        [this, request]()
        {
            return this->CreateEmailAddress(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

SesClient::CreateEmailIdentityOutcome SesClient::CreateEmailIdentity(const CreateEmailIdentityRequest &request)
{
    auto outcome = MakeRequest(request, "CreateEmailIdentity");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateEmailIdentityResponse rsp = CreateEmailIdentityResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateEmailIdentityOutcome(rsp);
        else
            return CreateEmailIdentityOutcome(o.GetError());
    }
    else
    {
        return CreateEmailIdentityOutcome(outcome.GetError());
    }
}

void SesClient::CreateEmailIdentityAsync(const CreateEmailIdentityRequest& request, const CreateEmailIdentityAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateEmailIdentity(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

SesClient::CreateEmailIdentityOutcomeCallable SesClient::CreateEmailIdentityCallable(const CreateEmailIdentityRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateEmailIdentityOutcome()>>(
        [this, request]()
        {
            return this->CreateEmailIdentity(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

SesClient::CreateEmailTemplateOutcome SesClient::CreateEmailTemplate(const CreateEmailTemplateRequest &request)
{
    auto outcome = MakeRequest(request, "CreateEmailTemplate");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateEmailTemplateResponse rsp = CreateEmailTemplateResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateEmailTemplateOutcome(rsp);
        else
            return CreateEmailTemplateOutcome(o.GetError());
    }
    else
    {
        return CreateEmailTemplateOutcome(outcome.GetError());
    }
}

void SesClient::CreateEmailTemplateAsync(const CreateEmailTemplateRequest& request, const CreateEmailTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateEmailTemplate(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

SesClient::CreateEmailTemplateOutcomeCallable SesClient::CreateEmailTemplateCallable(const CreateEmailTemplateRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateEmailTemplateOutcome()>>(
        [this, request]()
        {
            return this->CreateEmailTemplate(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

SesClient::CreateReceiverOutcome SesClient::CreateReceiver(const CreateReceiverRequest &request)
{
    auto outcome = MakeRequest(request, "CreateReceiver");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateReceiverResponse rsp = CreateReceiverResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateReceiverOutcome(rsp);
        else
            return CreateReceiverOutcome(o.GetError());
    }
    else
    {
        return CreateReceiverOutcome(outcome.GetError());
    }
}

void SesClient::CreateReceiverAsync(const CreateReceiverRequest& request, const CreateReceiverAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateReceiver(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

SesClient::CreateReceiverOutcomeCallable SesClient::CreateReceiverCallable(const CreateReceiverRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateReceiverOutcome()>>(
        [this, request]()
        {
            return this->CreateReceiver(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

SesClient::CreateReceiverDetailOutcome SesClient::CreateReceiverDetail(const CreateReceiverDetailRequest &request)
{
    auto outcome = MakeRequest(request, "CreateReceiverDetail");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateReceiverDetailResponse rsp = CreateReceiverDetailResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateReceiverDetailOutcome(rsp);
        else
            return CreateReceiverDetailOutcome(o.GetError());
    }
    else
    {
        return CreateReceiverDetailOutcome(outcome.GetError());
    }
}

void SesClient::CreateReceiverDetailAsync(const CreateReceiverDetailRequest& request, const CreateReceiverDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateReceiverDetail(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

SesClient::CreateReceiverDetailOutcomeCallable SesClient::CreateReceiverDetailCallable(const CreateReceiverDetailRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateReceiverDetailOutcome()>>(
        [this, request]()
        {
            return this->CreateReceiverDetail(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

SesClient::CreateReceiverDetailWithDataOutcome SesClient::CreateReceiverDetailWithData(const CreateReceiverDetailWithDataRequest &request)
{
    auto outcome = MakeRequest(request, "CreateReceiverDetailWithData");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateReceiverDetailWithDataResponse rsp = CreateReceiverDetailWithDataResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateReceiverDetailWithDataOutcome(rsp);
        else
            return CreateReceiverDetailWithDataOutcome(o.GetError());
    }
    else
    {
        return CreateReceiverDetailWithDataOutcome(outcome.GetError());
    }
}

void SesClient::CreateReceiverDetailWithDataAsync(const CreateReceiverDetailWithDataRequest& request, const CreateReceiverDetailWithDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateReceiverDetailWithData(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

SesClient::CreateReceiverDetailWithDataOutcomeCallable SesClient::CreateReceiverDetailWithDataCallable(const CreateReceiverDetailWithDataRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateReceiverDetailWithDataOutcome()>>(
        [this, request]()
        {
            return this->CreateReceiverDetailWithData(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

SesClient::DeleteAddressUnsubscribeConfigOutcome SesClient::DeleteAddressUnsubscribeConfig(const DeleteAddressUnsubscribeConfigRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteAddressUnsubscribeConfig");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteAddressUnsubscribeConfigResponse rsp = DeleteAddressUnsubscribeConfigResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteAddressUnsubscribeConfigOutcome(rsp);
        else
            return DeleteAddressUnsubscribeConfigOutcome(o.GetError());
    }
    else
    {
        return DeleteAddressUnsubscribeConfigOutcome(outcome.GetError());
    }
}

void SesClient::DeleteAddressUnsubscribeConfigAsync(const DeleteAddressUnsubscribeConfigRequest& request, const DeleteAddressUnsubscribeConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteAddressUnsubscribeConfig(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

SesClient::DeleteAddressUnsubscribeConfigOutcomeCallable SesClient::DeleteAddressUnsubscribeConfigCallable(const DeleteAddressUnsubscribeConfigRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteAddressUnsubscribeConfigOutcome()>>(
        [this, request]()
        {
            return this->DeleteAddressUnsubscribeConfig(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

SesClient::DeleteBlackListOutcome SesClient::DeleteBlackList(const DeleteBlackListRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteBlackList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteBlackListResponse rsp = DeleteBlackListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteBlackListOutcome(rsp);
        else
            return DeleteBlackListOutcome(o.GetError());
    }
    else
    {
        return DeleteBlackListOutcome(outcome.GetError());
    }
}

void SesClient::DeleteBlackListAsync(const DeleteBlackListRequest& request, const DeleteBlackListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteBlackList(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

SesClient::DeleteBlackListOutcomeCallable SesClient::DeleteBlackListCallable(const DeleteBlackListRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteBlackListOutcome()>>(
        [this, request]()
        {
            return this->DeleteBlackList(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

SesClient::DeleteCustomBlackListOutcome SesClient::DeleteCustomBlackList(const DeleteCustomBlackListRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteCustomBlackList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteCustomBlackListResponse rsp = DeleteCustomBlackListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteCustomBlackListOutcome(rsp);
        else
            return DeleteCustomBlackListOutcome(o.GetError());
    }
    else
    {
        return DeleteCustomBlackListOutcome(outcome.GetError());
    }
}

void SesClient::DeleteCustomBlackListAsync(const DeleteCustomBlackListRequest& request, const DeleteCustomBlackListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteCustomBlackList(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

SesClient::DeleteCustomBlackListOutcomeCallable SesClient::DeleteCustomBlackListCallable(const DeleteCustomBlackListRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteCustomBlackListOutcome()>>(
        [this, request]()
        {
            return this->DeleteCustomBlackList(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

SesClient::DeleteEmailAddressOutcome SesClient::DeleteEmailAddress(const DeleteEmailAddressRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteEmailAddress");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteEmailAddressResponse rsp = DeleteEmailAddressResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteEmailAddressOutcome(rsp);
        else
            return DeleteEmailAddressOutcome(o.GetError());
    }
    else
    {
        return DeleteEmailAddressOutcome(outcome.GetError());
    }
}

void SesClient::DeleteEmailAddressAsync(const DeleteEmailAddressRequest& request, const DeleteEmailAddressAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteEmailAddress(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

SesClient::DeleteEmailAddressOutcomeCallable SesClient::DeleteEmailAddressCallable(const DeleteEmailAddressRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteEmailAddressOutcome()>>(
        [this, request]()
        {
            return this->DeleteEmailAddress(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

SesClient::DeleteEmailIdentityOutcome SesClient::DeleteEmailIdentity(const DeleteEmailIdentityRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteEmailIdentity");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteEmailIdentityResponse rsp = DeleteEmailIdentityResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteEmailIdentityOutcome(rsp);
        else
            return DeleteEmailIdentityOutcome(o.GetError());
    }
    else
    {
        return DeleteEmailIdentityOutcome(outcome.GetError());
    }
}

void SesClient::DeleteEmailIdentityAsync(const DeleteEmailIdentityRequest& request, const DeleteEmailIdentityAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteEmailIdentity(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

SesClient::DeleteEmailIdentityOutcomeCallable SesClient::DeleteEmailIdentityCallable(const DeleteEmailIdentityRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteEmailIdentityOutcome()>>(
        [this, request]()
        {
            return this->DeleteEmailIdentity(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

SesClient::DeleteEmailTemplateOutcome SesClient::DeleteEmailTemplate(const DeleteEmailTemplateRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteEmailTemplate");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteEmailTemplateResponse rsp = DeleteEmailTemplateResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteEmailTemplateOutcome(rsp);
        else
            return DeleteEmailTemplateOutcome(o.GetError());
    }
    else
    {
        return DeleteEmailTemplateOutcome(outcome.GetError());
    }
}

void SesClient::DeleteEmailTemplateAsync(const DeleteEmailTemplateRequest& request, const DeleteEmailTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteEmailTemplate(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

SesClient::DeleteEmailTemplateOutcomeCallable SesClient::DeleteEmailTemplateCallable(const DeleteEmailTemplateRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteEmailTemplateOutcome()>>(
        [this, request]()
        {
            return this->DeleteEmailTemplate(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

SesClient::DeleteReceiverOutcome SesClient::DeleteReceiver(const DeleteReceiverRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteReceiver");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteReceiverResponse rsp = DeleteReceiverResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteReceiverOutcome(rsp);
        else
            return DeleteReceiverOutcome(o.GetError());
    }
    else
    {
        return DeleteReceiverOutcome(outcome.GetError());
    }
}

void SesClient::DeleteReceiverAsync(const DeleteReceiverRequest& request, const DeleteReceiverAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteReceiver(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

SesClient::DeleteReceiverOutcomeCallable SesClient::DeleteReceiverCallable(const DeleteReceiverRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteReceiverOutcome()>>(
        [this, request]()
        {
            return this->DeleteReceiver(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

SesClient::GetEmailIdentityOutcome SesClient::GetEmailIdentity(const GetEmailIdentityRequest &request)
{
    auto outcome = MakeRequest(request, "GetEmailIdentity");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        GetEmailIdentityResponse rsp = GetEmailIdentityResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return GetEmailIdentityOutcome(rsp);
        else
            return GetEmailIdentityOutcome(o.GetError());
    }
    else
    {
        return GetEmailIdentityOutcome(outcome.GetError());
    }
}

void SesClient::GetEmailIdentityAsync(const GetEmailIdentityRequest& request, const GetEmailIdentityAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->GetEmailIdentity(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

SesClient::GetEmailIdentityOutcomeCallable SesClient::GetEmailIdentityCallable(const GetEmailIdentityRequest &request)
{
    auto task = std::make_shared<std::packaged_task<GetEmailIdentityOutcome()>>(
        [this, request]()
        {
            return this->GetEmailIdentity(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

SesClient::GetEmailTemplateOutcome SesClient::GetEmailTemplate(const GetEmailTemplateRequest &request)
{
    auto outcome = MakeRequest(request, "GetEmailTemplate");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        GetEmailTemplateResponse rsp = GetEmailTemplateResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return GetEmailTemplateOutcome(rsp);
        else
            return GetEmailTemplateOutcome(o.GetError());
    }
    else
    {
        return GetEmailTemplateOutcome(outcome.GetError());
    }
}

void SesClient::GetEmailTemplateAsync(const GetEmailTemplateRequest& request, const GetEmailTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->GetEmailTemplate(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

SesClient::GetEmailTemplateOutcomeCallable SesClient::GetEmailTemplateCallable(const GetEmailTemplateRequest &request)
{
    auto task = std::make_shared<std::packaged_task<GetEmailTemplateOutcome()>>(
        [this, request]()
        {
            return this->GetEmailTemplate(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

SesClient::GetSendEmailStatusOutcome SesClient::GetSendEmailStatus(const GetSendEmailStatusRequest &request)
{
    auto outcome = MakeRequest(request, "GetSendEmailStatus");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        GetSendEmailStatusResponse rsp = GetSendEmailStatusResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return GetSendEmailStatusOutcome(rsp);
        else
            return GetSendEmailStatusOutcome(o.GetError());
    }
    else
    {
        return GetSendEmailStatusOutcome(outcome.GetError());
    }
}

void SesClient::GetSendEmailStatusAsync(const GetSendEmailStatusRequest& request, const GetSendEmailStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->GetSendEmailStatus(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

SesClient::GetSendEmailStatusOutcomeCallable SesClient::GetSendEmailStatusCallable(const GetSendEmailStatusRequest &request)
{
    auto task = std::make_shared<std::packaged_task<GetSendEmailStatusOutcome()>>(
        [this, request]()
        {
            return this->GetSendEmailStatus(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

SesClient::GetStatisticsReportOutcome SesClient::GetStatisticsReport(const GetStatisticsReportRequest &request)
{
    auto outcome = MakeRequest(request, "GetStatisticsReport");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        GetStatisticsReportResponse rsp = GetStatisticsReportResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return GetStatisticsReportOutcome(rsp);
        else
            return GetStatisticsReportOutcome(o.GetError());
    }
    else
    {
        return GetStatisticsReportOutcome(outcome.GetError());
    }
}

void SesClient::GetStatisticsReportAsync(const GetStatisticsReportRequest& request, const GetStatisticsReportAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->GetStatisticsReport(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

SesClient::GetStatisticsReportOutcomeCallable SesClient::GetStatisticsReportCallable(const GetStatisticsReportRequest &request)
{
    auto task = std::make_shared<std::packaged_task<GetStatisticsReportOutcome()>>(
        [this, request]()
        {
            return this->GetStatisticsReport(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

SesClient::ListAddressUnsubscribeConfigOutcome SesClient::ListAddressUnsubscribeConfig(const ListAddressUnsubscribeConfigRequest &request)
{
    auto outcome = MakeRequest(request, "ListAddressUnsubscribeConfig");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ListAddressUnsubscribeConfigResponse rsp = ListAddressUnsubscribeConfigResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ListAddressUnsubscribeConfigOutcome(rsp);
        else
            return ListAddressUnsubscribeConfigOutcome(o.GetError());
    }
    else
    {
        return ListAddressUnsubscribeConfigOutcome(outcome.GetError());
    }
}

void SesClient::ListAddressUnsubscribeConfigAsync(const ListAddressUnsubscribeConfigRequest& request, const ListAddressUnsubscribeConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ListAddressUnsubscribeConfig(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

SesClient::ListAddressUnsubscribeConfigOutcomeCallable SesClient::ListAddressUnsubscribeConfigCallable(const ListAddressUnsubscribeConfigRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ListAddressUnsubscribeConfigOutcome()>>(
        [this, request]()
        {
            return this->ListAddressUnsubscribeConfig(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

SesClient::ListBlackEmailAddressOutcome SesClient::ListBlackEmailAddress(const ListBlackEmailAddressRequest &request)
{
    auto outcome = MakeRequest(request, "ListBlackEmailAddress");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ListBlackEmailAddressResponse rsp = ListBlackEmailAddressResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ListBlackEmailAddressOutcome(rsp);
        else
            return ListBlackEmailAddressOutcome(o.GetError());
    }
    else
    {
        return ListBlackEmailAddressOutcome(outcome.GetError());
    }
}

void SesClient::ListBlackEmailAddressAsync(const ListBlackEmailAddressRequest& request, const ListBlackEmailAddressAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ListBlackEmailAddress(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

SesClient::ListBlackEmailAddressOutcomeCallable SesClient::ListBlackEmailAddressCallable(const ListBlackEmailAddressRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ListBlackEmailAddressOutcome()>>(
        [this, request]()
        {
            return this->ListBlackEmailAddress(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

SesClient::ListCustomBlacklistOutcome SesClient::ListCustomBlacklist(const ListCustomBlacklistRequest &request)
{
    auto outcome = MakeRequest(request, "ListCustomBlacklist");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ListCustomBlacklistResponse rsp = ListCustomBlacklistResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ListCustomBlacklistOutcome(rsp);
        else
            return ListCustomBlacklistOutcome(o.GetError());
    }
    else
    {
        return ListCustomBlacklistOutcome(outcome.GetError());
    }
}

void SesClient::ListCustomBlacklistAsync(const ListCustomBlacklistRequest& request, const ListCustomBlacklistAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ListCustomBlacklist(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

SesClient::ListCustomBlacklistOutcomeCallable SesClient::ListCustomBlacklistCallable(const ListCustomBlacklistRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ListCustomBlacklistOutcome()>>(
        [this, request]()
        {
            return this->ListCustomBlacklist(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

SesClient::ListEmailAddressOutcome SesClient::ListEmailAddress(const ListEmailAddressRequest &request)
{
    auto outcome = MakeRequest(request, "ListEmailAddress");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ListEmailAddressResponse rsp = ListEmailAddressResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ListEmailAddressOutcome(rsp);
        else
            return ListEmailAddressOutcome(o.GetError());
    }
    else
    {
        return ListEmailAddressOutcome(outcome.GetError());
    }
}

void SesClient::ListEmailAddressAsync(const ListEmailAddressRequest& request, const ListEmailAddressAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ListEmailAddress(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

SesClient::ListEmailAddressOutcomeCallable SesClient::ListEmailAddressCallable(const ListEmailAddressRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ListEmailAddressOutcome()>>(
        [this, request]()
        {
            return this->ListEmailAddress(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

SesClient::ListEmailIdentitiesOutcome SesClient::ListEmailIdentities(const ListEmailIdentitiesRequest &request)
{
    auto outcome = MakeRequest(request, "ListEmailIdentities");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ListEmailIdentitiesResponse rsp = ListEmailIdentitiesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ListEmailIdentitiesOutcome(rsp);
        else
            return ListEmailIdentitiesOutcome(o.GetError());
    }
    else
    {
        return ListEmailIdentitiesOutcome(outcome.GetError());
    }
}

void SesClient::ListEmailIdentitiesAsync(const ListEmailIdentitiesRequest& request, const ListEmailIdentitiesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ListEmailIdentities(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

SesClient::ListEmailIdentitiesOutcomeCallable SesClient::ListEmailIdentitiesCallable(const ListEmailIdentitiesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ListEmailIdentitiesOutcome()>>(
        [this, request]()
        {
            return this->ListEmailIdentities(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

SesClient::ListEmailTemplatesOutcome SesClient::ListEmailTemplates(const ListEmailTemplatesRequest &request)
{
    auto outcome = MakeRequest(request, "ListEmailTemplates");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ListEmailTemplatesResponse rsp = ListEmailTemplatesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ListEmailTemplatesOutcome(rsp);
        else
            return ListEmailTemplatesOutcome(o.GetError());
    }
    else
    {
        return ListEmailTemplatesOutcome(outcome.GetError());
    }
}

void SesClient::ListEmailTemplatesAsync(const ListEmailTemplatesRequest& request, const ListEmailTemplatesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ListEmailTemplates(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

SesClient::ListEmailTemplatesOutcomeCallable SesClient::ListEmailTemplatesCallable(const ListEmailTemplatesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ListEmailTemplatesOutcome()>>(
        [this, request]()
        {
            return this->ListEmailTemplates(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

SesClient::ListReceiverDetailsOutcome SesClient::ListReceiverDetails(const ListReceiverDetailsRequest &request)
{
    auto outcome = MakeRequest(request, "ListReceiverDetails");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ListReceiverDetailsResponse rsp = ListReceiverDetailsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ListReceiverDetailsOutcome(rsp);
        else
            return ListReceiverDetailsOutcome(o.GetError());
    }
    else
    {
        return ListReceiverDetailsOutcome(outcome.GetError());
    }
}

void SesClient::ListReceiverDetailsAsync(const ListReceiverDetailsRequest& request, const ListReceiverDetailsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ListReceiverDetails(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

SesClient::ListReceiverDetailsOutcomeCallable SesClient::ListReceiverDetailsCallable(const ListReceiverDetailsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ListReceiverDetailsOutcome()>>(
        [this, request]()
        {
            return this->ListReceiverDetails(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

SesClient::ListReceiversOutcome SesClient::ListReceivers(const ListReceiversRequest &request)
{
    auto outcome = MakeRequest(request, "ListReceivers");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ListReceiversResponse rsp = ListReceiversResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ListReceiversOutcome(rsp);
        else
            return ListReceiversOutcome(o.GetError());
    }
    else
    {
        return ListReceiversOutcome(outcome.GetError());
    }
}

void SesClient::ListReceiversAsync(const ListReceiversRequest& request, const ListReceiversAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ListReceivers(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

SesClient::ListReceiversOutcomeCallable SesClient::ListReceiversCallable(const ListReceiversRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ListReceiversOutcome()>>(
        [this, request]()
        {
            return this->ListReceivers(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

SesClient::ListSendTasksOutcome SesClient::ListSendTasks(const ListSendTasksRequest &request)
{
    auto outcome = MakeRequest(request, "ListSendTasks");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ListSendTasksResponse rsp = ListSendTasksResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ListSendTasksOutcome(rsp);
        else
            return ListSendTasksOutcome(o.GetError());
    }
    else
    {
        return ListSendTasksOutcome(outcome.GetError());
    }
}

void SesClient::ListSendTasksAsync(const ListSendTasksRequest& request, const ListSendTasksAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ListSendTasks(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

SesClient::ListSendTasksOutcomeCallable SesClient::ListSendTasksCallable(const ListSendTasksRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ListSendTasksOutcome()>>(
        [this, request]()
        {
            return this->ListSendTasks(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

SesClient::SendEmailOutcome SesClient::SendEmail(const SendEmailRequest &request)
{
    auto outcome = MakeRequest(request, "SendEmail");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        SendEmailResponse rsp = SendEmailResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return SendEmailOutcome(rsp);
        else
            return SendEmailOutcome(o.GetError());
    }
    else
    {
        return SendEmailOutcome(outcome.GetError());
    }
}

void SesClient::SendEmailAsync(const SendEmailRequest& request, const SendEmailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->SendEmail(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

SesClient::SendEmailOutcomeCallable SesClient::SendEmailCallable(const SendEmailRequest &request)
{
    auto task = std::make_shared<std::packaged_task<SendEmailOutcome()>>(
        [this, request]()
        {
            return this->SendEmail(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

SesClient::UpdateAddressUnsubscribeConfigOutcome SesClient::UpdateAddressUnsubscribeConfig(const UpdateAddressUnsubscribeConfigRequest &request)
{
    auto outcome = MakeRequest(request, "UpdateAddressUnsubscribeConfig");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        UpdateAddressUnsubscribeConfigResponse rsp = UpdateAddressUnsubscribeConfigResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return UpdateAddressUnsubscribeConfigOutcome(rsp);
        else
            return UpdateAddressUnsubscribeConfigOutcome(o.GetError());
    }
    else
    {
        return UpdateAddressUnsubscribeConfigOutcome(outcome.GetError());
    }
}

void SesClient::UpdateAddressUnsubscribeConfigAsync(const UpdateAddressUnsubscribeConfigRequest& request, const UpdateAddressUnsubscribeConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->UpdateAddressUnsubscribeConfig(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

SesClient::UpdateAddressUnsubscribeConfigOutcomeCallable SesClient::UpdateAddressUnsubscribeConfigCallable(const UpdateAddressUnsubscribeConfigRequest &request)
{
    auto task = std::make_shared<std::packaged_task<UpdateAddressUnsubscribeConfigOutcome()>>(
        [this, request]()
        {
            return this->UpdateAddressUnsubscribeConfig(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

SesClient::UpdateCustomBlackListOutcome SesClient::UpdateCustomBlackList(const UpdateCustomBlackListRequest &request)
{
    auto outcome = MakeRequest(request, "UpdateCustomBlackList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        UpdateCustomBlackListResponse rsp = UpdateCustomBlackListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return UpdateCustomBlackListOutcome(rsp);
        else
            return UpdateCustomBlackListOutcome(o.GetError());
    }
    else
    {
        return UpdateCustomBlackListOutcome(outcome.GetError());
    }
}

void SesClient::UpdateCustomBlackListAsync(const UpdateCustomBlackListRequest& request, const UpdateCustomBlackListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->UpdateCustomBlackList(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

SesClient::UpdateCustomBlackListOutcomeCallable SesClient::UpdateCustomBlackListCallable(const UpdateCustomBlackListRequest &request)
{
    auto task = std::make_shared<std::packaged_task<UpdateCustomBlackListOutcome()>>(
        [this, request]()
        {
            return this->UpdateCustomBlackList(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

SesClient::UpdateEmailIdentityOutcome SesClient::UpdateEmailIdentity(const UpdateEmailIdentityRequest &request)
{
    auto outcome = MakeRequest(request, "UpdateEmailIdentity");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        UpdateEmailIdentityResponse rsp = UpdateEmailIdentityResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return UpdateEmailIdentityOutcome(rsp);
        else
            return UpdateEmailIdentityOutcome(o.GetError());
    }
    else
    {
        return UpdateEmailIdentityOutcome(outcome.GetError());
    }
}

void SesClient::UpdateEmailIdentityAsync(const UpdateEmailIdentityRequest& request, const UpdateEmailIdentityAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->UpdateEmailIdentity(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

SesClient::UpdateEmailIdentityOutcomeCallable SesClient::UpdateEmailIdentityCallable(const UpdateEmailIdentityRequest &request)
{
    auto task = std::make_shared<std::packaged_task<UpdateEmailIdentityOutcome()>>(
        [this, request]()
        {
            return this->UpdateEmailIdentity(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

SesClient::UpdateEmailSmtpPassWordOutcome SesClient::UpdateEmailSmtpPassWord(const UpdateEmailSmtpPassWordRequest &request)
{
    auto outcome = MakeRequest(request, "UpdateEmailSmtpPassWord");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        UpdateEmailSmtpPassWordResponse rsp = UpdateEmailSmtpPassWordResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return UpdateEmailSmtpPassWordOutcome(rsp);
        else
            return UpdateEmailSmtpPassWordOutcome(o.GetError());
    }
    else
    {
        return UpdateEmailSmtpPassWordOutcome(outcome.GetError());
    }
}

void SesClient::UpdateEmailSmtpPassWordAsync(const UpdateEmailSmtpPassWordRequest& request, const UpdateEmailSmtpPassWordAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->UpdateEmailSmtpPassWord(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

SesClient::UpdateEmailSmtpPassWordOutcomeCallable SesClient::UpdateEmailSmtpPassWordCallable(const UpdateEmailSmtpPassWordRequest &request)
{
    auto task = std::make_shared<std::packaged_task<UpdateEmailSmtpPassWordOutcome()>>(
        [this, request]()
        {
            return this->UpdateEmailSmtpPassWord(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

SesClient::UpdateEmailTemplateOutcome SesClient::UpdateEmailTemplate(const UpdateEmailTemplateRequest &request)
{
    auto outcome = MakeRequest(request, "UpdateEmailTemplate");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        UpdateEmailTemplateResponse rsp = UpdateEmailTemplateResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return UpdateEmailTemplateOutcome(rsp);
        else
            return UpdateEmailTemplateOutcome(o.GetError());
    }
    else
    {
        return UpdateEmailTemplateOutcome(outcome.GetError());
    }
}

void SesClient::UpdateEmailTemplateAsync(const UpdateEmailTemplateRequest& request, const UpdateEmailTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->UpdateEmailTemplate(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

SesClient::UpdateEmailTemplateOutcomeCallable SesClient::UpdateEmailTemplateCallable(const UpdateEmailTemplateRequest &request)
{
    auto task = std::make_shared<std::packaged_task<UpdateEmailTemplateOutcome()>>(
        [this, request]()
        {
            return this->UpdateEmailTemplate(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

