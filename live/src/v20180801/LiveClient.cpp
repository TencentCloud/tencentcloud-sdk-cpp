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

#include <tencentcloud/live/v20180801/LiveClient.h>
#include <tencentcloud/core/Executor.h>
#include <tencentcloud/core/Runnable.h>

using namespace TencentCloud;
using namespace TencentCloud::Live::V20180801;
using namespace TencentCloud::Live::V20180801::Model;
using namespace std;

namespace
{
    const string VERSION = "2018-08-01";
    const string ENDPOINT = "live.tencentcloudapi.com";
}

LiveClient::LiveClient(const Credential &credential, const string &region) :
    LiveClient(credential, region, ClientProfile())
{
}

LiveClient::LiveClient(const Credential &credential, const string &region, const ClientProfile &profile) :
    AbstractClient(ENDPOINT, VERSION, credential, region, profile)
{
}


LiveClient::AddCasterInputInfoOutcome LiveClient::AddCasterInputInfo(const AddCasterInputInfoRequest &request)
{
    auto outcome = MakeRequest(request, "AddCasterInputInfo");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        AddCasterInputInfoResponse rsp = AddCasterInputInfoResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return AddCasterInputInfoOutcome(rsp);
        else
            return AddCasterInputInfoOutcome(o.GetError());
    }
    else
    {
        return AddCasterInputInfoOutcome(outcome.GetError());
    }
}

void LiveClient::AddCasterInputInfoAsync(const AddCasterInputInfoRequest& request, const AddCasterInputInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->AddCasterInputInfo(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

LiveClient::AddCasterInputInfoOutcomeCallable LiveClient::AddCasterInputInfoCallable(const AddCasterInputInfoRequest &request)
{
    auto task = std::make_shared<std::packaged_task<AddCasterInputInfoOutcome()>>(
        [this, request]()
        {
            return this->AddCasterInputInfo(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

LiveClient::AddCasterLayoutInfoOutcome LiveClient::AddCasterLayoutInfo(const AddCasterLayoutInfoRequest &request)
{
    auto outcome = MakeRequest(request, "AddCasterLayoutInfo");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        AddCasterLayoutInfoResponse rsp = AddCasterLayoutInfoResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return AddCasterLayoutInfoOutcome(rsp);
        else
            return AddCasterLayoutInfoOutcome(o.GetError());
    }
    else
    {
        return AddCasterLayoutInfoOutcome(outcome.GetError());
    }
}

void LiveClient::AddCasterLayoutInfoAsync(const AddCasterLayoutInfoRequest& request, const AddCasterLayoutInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->AddCasterLayoutInfo(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

LiveClient::AddCasterLayoutInfoOutcomeCallable LiveClient::AddCasterLayoutInfoCallable(const AddCasterLayoutInfoRequest &request)
{
    auto task = std::make_shared<std::packaged_task<AddCasterLayoutInfoOutcome()>>(
        [this, request]()
        {
            return this->AddCasterLayoutInfo(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

LiveClient::AddCasterMarkPicInfoOutcome LiveClient::AddCasterMarkPicInfo(const AddCasterMarkPicInfoRequest &request)
{
    auto outcome = MakeRequest(request, "AddCasterMarkPicInfo");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        AddCasterMarkPicInfoResponse rsp = AddCasterMarkPicInfoResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return AddCasterMarkPicInfoOutcome(rsp);
        else
            return AddCasterMarkPicInfoOutcome(o.GetError());
    }
    else
    {
        return AddCasterMarkPicInfoOutcome(outcome.GetError());
    }
}

void LiveClient::AddCasterMarkPicInfoAsync(const AddCasterMarkPicInfoRequest& request, const AddCasterMarkPicInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->AddCasterMarkPicInfo(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

LiveClient::AddCasterMarkPicInfoOutcomeCallable LiveClient::AddCasterMarkPicInfoCallable(const AddCasterMarkPicInfoRequest &request)
{
    auto task = std::make_shared<std::packaged_task<AddCasterMarkPicInfoOutcome()>>(
        [this, request]()
        {
            return this->AddCasterMarkPicInfo(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

LiveClient::AddCasterMarkWordInfoOutcome LiveClient::AddCasterMarkWordInfo(const AddCasterMarkWordInfoRequest &request)
{
    auto outcome = MakeRequest(request, "AddCasterMarkWordInfo");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        AddCasterMarkWordInfoResponse rsp = AddCasterMarkWordInfoResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return AddCasterMarkWordInfoOutcome(rsp);
        else
            return AddCasterMarkWordInfoOutcome(o.GetError());
    }
    else
    {
        return AddCasterMarkWordInfoOutcome(outcome.GetError());
    }
}

void LiveClient::AddCasterMarkWordInfoAsync(const AddCasterMarkWordInfoRequest& request, const AddCasterMarkWordInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->AddCasterMarkWordInfo(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

LiveClient::AddCasterMarkWordInfoOutcomeCallable LiveClient::AddCasterMarkWordInfoCallable(const AddCasterMarkWordInfoRequest &request)
{
    auto task = std::make_shared<std::packaged_task<AddCasterMarkWordInfoOutcome()>>(
        [this, request]()
        {
            return this->AddCasterMarkWordInfo(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

LiveClient::AddCasterOutputInfoOutcome LiveClient::AddCasterOutputInfo(const AddCasterOutputInfoRequest &request)
{
    auto outcome = MakeRequest(request, "AddCasterOutputInfo");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        AddCasterOutputInfoResponse rsp = AddCasterOutputInfoResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return AddCasterOutputInfoOutcome(rsp);
        else
            return AddCasterOutputInfoOutcome(o.GetError());
    }
    else
    {
        return AddCasterOutputInfoOutcome(outcome.GetError());
    }
}

void LiveClient::AddCasterOutputInfoAsync(const AddCasterOutputInfoRequest& request, const AddCasterOutputInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->AddCasterOutputInfo(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

LiveClient::AddCasterOutputInfoOutcomeCallable LiveClient::AddCasterOutputInfoCallable(const AddCasterOutputInfoRequest &request)
{
    auto task = std::make_shared<std::packaged_task<AddCasterOutputInfoOutcome()>>(
        [this, request]()
        {
            return this->AddCasterOutputInfo(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

LiveClient::AddDelayLiveStreamOutcome LiveClient::AddDelayLiveStream(const AddDelayLiveStreamRequest &request)
{
    auto outcome = MakeRequest(request, "AddDelayLiveStream");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        AddDelayLiveStreamResponse rsp = AddDelayLiveStreamResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return AddDelayLiveStreamOutcome(rsp);
        else
            return AddDelayLiveStreamOutcome(o.GetError());
    }
    else
    {
        return AddDelayLiveStreamOutcome(outcome.GetError());
    }
}

void LiveClient::AddDelayLiveStreamAsync(const AddDelayLiveStreamRequest& request, const AddDelayLiveStreamAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->AddDelayLiveStream(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

LiveClient::AddDelayLiveStreamOutcomeCallable LiveClient::AddDelayLiveStreamCallable(const AddDelayLiveStreamRequest &request)
{
    auto task = std::make_shared<std::packaged_task<AddDelayLiveStreamOutcome()>>(
        [this, request]()
        {
            return this->AddDelayLiveStream(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

LiveClient::AddLiveDomainOutcome LiveClient::AddLiveDomain(const AddLiveDomainRequest &request)
{
    auto outcome = MakeRequest(request, "AddLiveDomain");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        AddLiveDomainResponse rsp = AddLiveDomainResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return AddLiveDomainOutcome(rsp);
        else
            return AddLiveDomainOutcome(o.GetError());
    }
    else
    {
        return AddLiveDomainOutcome(outcome.GetError());
    }
}

void LiveClient::AddLiveDomainAsync(const AddLiveDomainRequest& request, const AddLiveDomainAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->AddLiveDomain(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

LiveClient::AddLiveDomainOutcomeCallable LiveClient::AddLiveDomainCallable(const AddLiveDomainRequest &request)
{
    auto task = std::make_shared<std::packaged_task<AddLiveDomainOutcome()>>(
        [this, request]()
        {
            return this->AddLiveDomain(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

LiveClient::AddLiveWatermarkOutcome LiveClient::AddLiveWatermark(const AddLiveWatermarkRequest &request)
{
    auto outcome = MakeRequest(request, "AddLiveWatermark");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        AddLiveWatermarkResponse rsp = AddLiveWatermarkResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return AddLiveWatermarkOutcome(rsp);
        else
            return AddLiveWatermarkOutcome(o.GetError());
    }
    else
    {
        return AddLiveWatermarkOutcome(outcome.GetError());
    }
}

void LiveClient::AddLiveWatermarkAsync(const AddLiveWatermarkRequest& request, const AddLiveWatermarkAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->AddLiveWatermark(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

LiveClient::AddLiveWatermarkOutcomeCallable LiveClient::AddLiveWatermarkCallable(const AddLiveWatermarkRequest &request)
{
    auto task = std::make_shared<std::packaged_task<AddLiveWatermarkOutcome()>>(
        [this, request]()
        {
            return this->AddLiveWatermark(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

LiveClient::AuthenticateDomainOwnerOutcome LiveClient::AuthenticateDomainOwner(const AuthenticateDomainOwnerRequest &request)
{
    auto outcome = MakeRequest(request, "AuthenticateDomainOwner");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        AuthenticateDomainOwnerResponse rsp = AuthenticateDomainOwnerResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return AuthenticateDomainOwnerOutcome(rsp);
        else
            return AuthenticateDomainOwnerOutcome(o.GetError());
    }
    else
    {
        return AuthenticateDomainOwnerOutcome(outcome.GetError());
    }
}

void LiveClient::AuthenticateDomainOwnerAsync(const AuthenticateDomainOwnerRequest& request, const AuthenticateDomainOwnerAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->AuthenticateDomainOwner(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

LiveClient::AuthenticateDomainOwnerOutcomeCallable LiveClient::AuthenticateDomainOwnerCallable(const AuthenticateDomainOwnerRequest &request)
{
    auto task = std::make_shared<std::packaged_task<AuthenticateDomainOwnerOutcome()>>(
        [this, request]()
        {
            return this->AuthenticateDomainOwner(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

LiveClient::CancelCommonMixStreamOutcome LiveClient::CancelCommonMixStream(const CancelCommonMixStreamRequest &request)
{
    auto outcome = MakeRequest(request, "CancelCommonMixStream");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CancelCommonMixStreamResponse rsp = CancelCommonMixStreamResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CancelCommonMixStreamOutcome(rsp);
        else
            return CancelCommonMixStreamOutcome(o.GetError());
    }
    else
    {
        return CancelCommonMixStreamOutcome(outcome.GetError());
    }
}

void LiveClient::CancelCommonMixStreamAsync(const CancelCommonMixStreamRequest& request, const CancelCommonMixStreamAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CancelCommonMixStream(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

LiveClient::CancelCommonMixStreamOutcomeCallable LiveClient::CancelCommonMixStreamCallable(const CancelCommonMixStreamRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CancelCommonMixStreamOutcome()>>(
        [this, request]()
        {
            return this->CancelCommonMixStream(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

LiveClient::CopyCasterOutcome LiveClient::CopyCaster(const CopyCasterRequest &request)
{
    auto outcome = MakeRequest(request, "CopyCaster");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CopyCasterResponse rsp = CopyCasterResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CopyCasterOutcome(rsp);
        else
            return CopyCasterOutcome(o.GetError());
    }
    else
    {
        return CopyCasterOutcome(outcome.GetError());
    }
}

void LiveClient::CopyCasterAsync(const CopyCasterRequest& request, const CopyCasterAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CopyCaster(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

LiveClient::CopyCasterOutcomeCallable LiveClient::CopyCasterCallable(const CopyCasterRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CopyCasterOutcome()>>(
        [this, request]()
        {
            return this->CopyCaster(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

LiveClient::CreateCasterOutcome LiveClient::CreateCaster(const CreateCasterRequest &request)
{
    auto outcome = MakeRequest(request, "CreateCaster");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateCasterResponse rsp = CreateCasterResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateCasterOutcome(rsp);
        else
            return CreateCasterOutcome(o.GetError());
    }
    else
    {
        return CreateCasterOutcome(outcome.GetError());
    }
}

void LiveClient::CreateCasterAsync(const CreateCasterRequest& request, const CreateCasterAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateCaster(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

LiveClient::CreateCasterOutcomeCallable LiveClient::CreateCasterCallable(const CreateCasterRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateCasterOutcome()>>(
        [this, request]()
        {
            return this->CreateCaster(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

LiveClient::CreateCasterInputPushUrlOutcome LiveClient::CreateCasterInputPushUrl(const CreateCasterInputPushUrlRequest &request)
{
    auto outcome = MakeRequest(request, "CreateCasterInputPushUrl");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateCasterInputPushUrlResponse rsp = CreateCasterInputPushUrlResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateCasterInputPushUrlOutcome(rsp);
        else
            return CreateCasterInputPushUrlOutcome(o.GetError());
    }
    else
    {
        return CreateCasterInputPushUrlOutcome(outcome.GetError());
    }
}

void LiveClient::CreateCasterInputPushUrlAsync(const CreateCasterInputPushUrlRequest& request, const CreateCasterInputPushUrlAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateCasterInputPushUrl(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

LiveClient::CreateCasterInputPushUrlOutcomeCallable LiveClient::CreateCasterInputPushUrlCallable(const CreateCasterInputPushUrlRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateCasterInputPushUrlOutcome()>>(
        [this, request]()
        {
            return this->CreateCasterInputPushUrl(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

LiveClient::CreateCasterPgmOutcome LiveClient::CreateCasterPgm(const CreateCasterPgmRequest &request)
{
    auto outcome = MakeRequest(request, "CreateCasterPgm");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateCasterPgmResponse rsp = CreateCasterPgmResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateCasterPgmOutcome(rsp);
        else
            return CreateCasterPgmOutcome(o.GetError());
    }
    else
    {
        return CreateCasterPgmOutcome(outcome.GetError());
    }
}

void LiveClient::CreateCasterPgmAsync(const CreateCasterPgmRequest& request, const CreateCasterPgmAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateCasterPgm(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

LiveClient::CreateCasterPgmOutcomeCallable LiveClient::CreateCasterPgmCallable(const CreateCasterPgmRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateCasterPgmOutcome()>>(
        [this, request]()
        {
            return this->CreateCasterPgm(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

LiveClient::CreateCasterPgmFromPvwOutcome LiveClient::CreateCasterPgmFromPvw(const CreateCasterPgmFromPvwRequest &request)
{
    auto outcome = MakeRequest(request, "CreateCasterPgmFromPvw");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateCasterPgmFromPvwResponse rsp = CreateCasterPgmFromPvwResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateCasterPgmFromPvwOutcome(rsp);
        else
            return CreateCasterPgmFromPvwOutcome(o.GetError());
    }
    else
    {
        return CreateCasterPgmFromPvwOutcome(outcome.GetError());
    }
}

void LiveClient::CreateCasterPgmFromPvwAsync(const CreateCasterPgmFromPvwRequest& request, const CreateCasterPgmFromPvwAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateCasterPgmFromPvw(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

LiveClient::CreateCasterPgmFromPvwOutcomeCallable LiveClient::CreateCasterPgmFromPvwCallable(const CreateCasterPgmFromPvwRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateCasterPgmFromPvwOutcome()>>(
        [this, request]()
        {
            return this->CreateCasterPgmFromPvw(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

LiveClient::CreateCasterPvwOutcome LiveClient::CreateCasterPvw(const CreateCasterPvwRequest &request)
{
    auto outcome = MakeRequest(request, "CreateCasterPvw");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateCasterPvwResponse rsp = CreateCasterPvwResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateCasterPvwOutcome(rsp);
        else
            return CreateCasterPvwOutcome(o.GetError());
    }
    else
    {
        return CreateCasterPvwOutcome(outcome.GetError());
    }
}

void LiveClient::CreateCasterPvwAsync(const CreateCasterPvwRequest& request, const CreateCasterPvwAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateCasterPvw(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

LiveClient::CreateCasterPvwOutcomeCallable LiveClient::CreateCasterPvwCallable(const CreateCasterPvwRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateCasterPvwOutcome()>>(
        [this, request]()
        {
            return this->CreateCasterPvw(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

LiveClient::CreateCommonMixStreamOutcome LiveClient::CreateCommonMixStream(const CreateCommonMixStreamRequest &request)
{
    auto outcome = MakeRequest(request, "CreateCommonMixStream");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateCommonMixStreamResponse rsp = CreateCommonMixStreamResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateCommonMixStreamOutcome(rsp);
        else
            return CreateCommonMixStreamOutcome(o.GetError());
    }
    else
    {
        return CreateCommonMixStreamOutcome(outcome.GetError());
    }
}

void LiveClient::CreateCommonMixStreamAsync(const CreateCommonMixStreamRequest& request, const CreateCommonMixStreamAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateCommonMixStream(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

LiveClient::CreateCommonMixStreamOutcomeCallable LiveClient::CreateCommonMixStreamCallable(const CreateCommonMixStreamRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateCommonMixStreamOutcome()>>(
        [this, request]()
        {
            return this->CreateCommonMixStream(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

LiveClient::CreateLiveCallbackRuleOutcome LiveClient::CreateLiveCallbackRule(const CreateLiveCallbackRuleRequest &request)
{
    auto outcome = MakeRequest(request, "CreateLiveCallbackRule");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateLiveCallbackRuleResponse rsp = CreateLiveCallbackRuleResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateLiveCallbackRuleOutcome(rsp);
        else
            return CreateLiveCallbackRuleOutcome(o.GetError());
    }
    else
    {
        return CreateLiveCallbackRuleOutcome(outcome.GetError());
    }
}

void LiveClient::CreateLiveCallbackRuleAsync(const CreateLiveCallbackRuleRequest& request, const CreateLiveCallbackRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateLiveCallbackRule(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

LiveClient::CreateLiveCallbackRuleOutcomeCallable LiveClient::CreateLiveCallbackRuleCallable(const CreateLiveCallbackRuleRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateLiveCallbackRuleOutcome()>>(
        [this, request]()
        {
            return this->CreateLiveCallbackRule(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

LiveClient::CreateLiveCallbackTemplateOutcome LiveClient::CreateLiveCallbackTemplate(const CreateLiveCallbackTemplateRequest &request)
{
    auto outcome = MakeRequest(request, "CreateLiveCallbackTemplate");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateLiveCallbackTemplateResponse rsp = CreateLiveCallbackTemplateResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateLiveCallbackTemplateOutcome(rsp);
        else
            return CreateLiveCallbackTemplateOutcome(o.GetError());
    }
    else
    {
        return CreateLiveCallbackTemplateOutcome(outcome.GetError());
    }
}

void LiveClient::CreateLiveCallbackTemplateAsync(const CreateLiveCallbackTemplateRequest& request, const CreateLiveCallbackTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateLiveCallbackTemplate(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

LiveClient::CreateLiveCallbackTemplateOutcomeCallable LiveClient::CreateLiveCallbackTemplateCallable(const CreateLiveCallbackTemplateRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateLiveCallbackTemplateOutcome()>>(
        [this, request]()
        {
            return this->CreateLiveCallbackTemplate(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

LiveClient::CreateLivePadRuleOutcome LiveClient::CreateLivePadRule(const CreateLivePadRuleRequest &request)
{
    auto outcome = MakeRequest(request, "CreateLivePadRule");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateLivePadRuleResponse rsp = CreateLivePadRuleResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateLivePadRuleOutcome(rsp);
        else
            return CreateLivePadRuleOutcome(o.GetError());
    }
    else
    {
        return CreateLivePadRuleOutcome(outcome.GetError());
    }
}

void LiveClient::CreateLivePadRuleAsync(const CreateLivePadRuleRequest& request, const CreateLivePadRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateLivePadRule(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

LiveClient::CreateLivePadRuleOutcomeCallable LiveClient::CreateLivePadRuleCallable(const CreateLivePadRuleRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateLivePadRuleOutcome()>>(
        [this, request]()
        {
            return this->CreateLivePadRule(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

LiveClient::CreateLivePadTemplateOutcome LiveClient::CreateLivePadTemplate(const CreateLivePadTemplateRequest &request)
{
    auto outcome = MakeRequest(request, "CreateLivePadTemplate");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateLivePadTemplateResponse rsp = CreateLivePadTemplateResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateLivePadTemplateOutcome(rsp);
        else
            return CreateLivePadTemplateOutcome(o.GetError());
    }
    else
    {
        return CreateLivePadTemplateOutcome(outcome.GetError());
    }
}

void LiveClient::CreateLivePadTemplateAsync(const CreateLivePadTemplateRequest& request, const CreateLivePadTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateLivePadTemplate(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

LiveClient::CreateLivePadTemplateOutcomeCallable LiveClient::CreateLivePadTemplateCallable(const CreateLivePadTemplateRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateLivePadTemplateOutcome()>>(
        [this, request]()
        {
            return this->CreateLivePadTemplate(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

LiveClient::CreateLivePullStreamTaskOutcome LiveClient::CreateLivePullStreamTask(const CreateLivePullStreamTaskRequest &request)
{
    auto outcome = MakeRequest(request, "CreateLivePullStreamTask");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateLivePullStreamTaskResponse rsp = CreateLivePullStreamTaskResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateLivePullStreamTaskOutcome(rsp);
        else
            return CreateLivePullStreamTaskOutcome(o.GetError());
    }
    else
    {
        return CreateLivePullStreamTaskOutcome(outcome.GetError());
    }
}

void LiveClient::CreateLivePullStreamTaskAsync(const CreateLivePullStreamTaskRequest& request, const CreateLivePullStreamTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateLivePullStreamTask(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

LiveClient::CreateLivePullStreamTaskOutcomeCallable LiveClient::CreateLivePullStreamTaskCallable(const CreateLivePullStreamTaskRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateLivePullStreamTaskOutcome()>>(
        [this, request]()
        {
            return this->CreateLivePullStreamTask(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

LiveClient::CreateLiveRecordOutcome LiveClient::CreateLiveRecord(const CreateLiveRecordRequest &request)
{
    auto outcome = MakeRequest(request, "CreateLiveRecord");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateLiveRecordResponse rsp = CreateLiveRecordResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateLiveRecordOutcome(rsp);
        else
            return CreateLiveRecordOutcome(o.GetError());
    }
    else
    {
        return CreateLiveRecordOutcome(outcome.GetError());
    }
}

void LiveClient::CreateLiveRecordAsync(const CreateLiveRecordRequest& request, const CreateLiveRecordAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateLiveRecord(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

LiveClient::CreateLiveRecordOutcomeCallable LiveClient::CreateLiveRecordCallable(const CreateLiveRecordRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateLiveRecordOutcome()>>(
        [this, request]()
        {
            return this->CreateLiveRecord(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

LiveClient::CreateLiveRecordRuleOutcome LiveClient::CreateLiveRecordRule(const CreateLiveRecordRuleRequest &request)
{
    auto outcome = MakeRequest(request, "CreateLiveRecordRule");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateLiveRecordRuleResponse rsp = CreateLiveRecordRuleResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateLiveRecordRuleOutcome(rsp);
        else
            return CreateLiveRecordRuleOutcome(o.GetError());
    }
    else
    {
        return CreateLiveRecordRuleOutcome(outcome.GetError());
    }
}

void LiveClient::CreateLiveRecordRuleAsync(const CreateLiveRecordRuleRequest& request, const CreateLiveRecordRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateLiveRecordRule(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

LiveClient::CreateLiveRecordRuleOutcomeCallable LiveClient::CreateLiveRecordRuleCallable(const CreateLiveRecordRuleRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateLiveRecordRuleOutcome()>>(
        [this, request]()
        {
            return this->CreateLiveRecordRule(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

LiveClient::CreateLiveRecordTemplateOutcome LiveClient::CreateLiveRecordTemplate(const CreateLiveRecordTemplateRequest &request)
{
    auto outcome = MakeRequest(request, "CreateLiveRecordTemplate");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateLiveRecordTemplateResponse rsp = CreateLiveRecordTemplateResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateLiveRecordTemplateOutcome(rsp);
        else
            return CreateLiveRecordTemplateOutcome(o.GetError());
    }
    else
    {
        return CreateLiveRecordTemplateOutcome(outcome.GetError());
    }
}

void LiveClient::CreateLiveRecordTemplateAsync(const CreateLiveRecordTemplateRequest& request, const CreateLiveRecordTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateLiveRecordTemplate(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

LiveClient::CreateLiveRecordTemplateOutcomeCallable LiveClient::CreateLiveRecordTemplateCallable(const CreateLiveRecordTemplateRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateLiveRecordTemplateOutcome()>>(
        [this, request]()
        {
            return this->CreateLiveRecordTemplate(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

LiveClient::CreateLiveSnapshotRuleOutcome LiveClient::CreateLiveSnapshotRule(const CreateLiveSnapshotRuleRequest &request)
{
    auto outcome = MakeRequest(request, "CreateLiveSnapshotRule");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateLiveSnapshotRuleResponse rsp = CreateLiveSnapshotRuleResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateLiveSnapshotRuleOutcome(rsp);
        else
            return CreateLiveSnapshotRuleOutcome(o.GetError());
    }
    else
    {
        return CreateLiveSnapshotRuleOutcome(outcome.GetError());
    }
}

void LiveClient::CreateLiveSnapshotRuleAsync(const CreateLiveSnapshotRuleRequest& request, const CreateLiveSnapshotRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateLiveSnapshotRule(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

LiveClient::CreateLiveSnapshotRuleOutcomeCallable LiveClient::CreateLiveSnapshotRuleCallable(const CreateLiveSnapshotRuleRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateLiveSnapshotRuleOutcome()>>(
        [this, request]()
        {
            return this->CreateLiveSnapshotRule(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

LiveClient::CreateLiveSnapshotTemplateOutcome LiveClient::CreateLiveSnapshotTemplate(const CreateLiveSnapshotTemplateRequest &request)
{
    auto outcome = MakeRequest(request, "CreateLiveSnapshotTemplate");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateLiveSnapshotTemplateResponse rsp = CreateLiveSnapshotTemplateResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateLiveSnapshotTemplateOutcome(rsp);
        else
            return CreateLiveSnapshotTemplateOutcome(o.GetError());
    }
    else
    {
        return CreateLiveSnapshotTemplateOutcome(outcome.GetError());
    }
}

void LiveClient::CreateLiveSnapshotTemplateAsync(const CreateLiveSnapshotTemplateRequest& request, const CreateLiveSnapshotTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateLiveSnapshotTemplate(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

LiveClient::CreateLiveSnapshotTemplateOutcomeCallable LiveClient::CreateLiveSnapshotTemplateCallable(const CreateLiveSnapshotTemplateRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateLiveSnapshotTemplateOutcome()>>(
        [this, request]()
        {
            return this->CreateLiveSnapshotTemplate(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

LiveClient::CreateLiveStreamMonitorOutcome LiveClient::CreateLiveStreamMonitor(const CreateLiveStreamMonitorRequest &request)
{
    auto outcome = MakeRequest(request, "CreateLiveStreamMonitor");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateLiveStreamMonitorResponse rsp = CreateLiveStreamMonitorResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateLiveStreamMonitorOutcome(rsp);
        else
            return CreateLiveStreamMonitorOutcome(o.GetError());
    }
    else
    {
        return CreateLiveStreamMonitorOutcome(outcome.GetError());
    }
}

void LiveClient::CreateLiveStreamMonitorAsync(const CreateLiveStreamMonitorRequest& request, const CreateLiveStreamMonitorAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateLiveStreamMonitor(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

LiveClient::CreateLiveStreamMonitorOutcomeCallable LiveClient::CreateLiveStreamMonitorCallable(const CreateLiveStreamMonitorRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateLiveStreamMonitorOutcome()>>(
        [this, request]()
        {
            return this->CreateLiveStreamMonitor(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

LiveClient::CreateLiveTimeShiftRuleOutcome LiveClient::CreateLiveTimeShiftRule(const CreateLiveTimeShiftRuleRequest &request)
{
    auto outcome = MakeRequest(request, "CreateLiveTimeShiftRule");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateLiveTimeShiftRuleResponse rsp = CreateLiveTimeShiftRuleResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateLiveTimeShiftRuleOutcome(rsp);
        else
            return CreateLiveTimeShiftRuleOutcome(o.GetError());
    }
    else
    {
        return CreateLiveTimeShiftRuleOutcome(outcome.GetError());
    }
}

void LiveClient::CreateLiveTimeShiftRuleAsync(const CreateLiveTimeShiftRuleRequest& request, const CreateLiveTimeShiftRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateLiveTimeShiftRule(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

LiveClient::CreateLiveTimeShiftRuleOutcomeCallable LiveClient::CreateLiveTimeShiftRuleCallable(const CreateLiveTimeShiftRuleRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateLiveTimeShiftRuleOutcome()>>(
        [this, request]()
        {
            return this->CreateLiveTimeShiftRule(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

LiveClient::CreateLiveTimeShiftTemplateOutcome LiveClient::CreateLiveTimeShiftTemplate(const CreateLiveTimeShiftTemplateRequest &request)
{
    auto outcome = MakeRequest(request, "CreateLiveTimeShiftTemplate");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateLiveTimeShiftTemplateResponse rsp = CreateLiveTimeShiftTemplateResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateLiveTimeShiftTemplateOutcome(rsp);
        else
            return CreateLiveTimeShiftTemplateOutcome(o.GetError());
    }
    else
    {
        return CreateLiveTimeShiftTemplateOutcome(outcome.GetError());
    }
}

void LiveClient::CreateLiveTimeShiftTemplateAsync(const CreateLiveTimeShiftTemplateRequest& request, const CreateLiveTimeShiftTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateLiveTimeShiftTemplate(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

LiveClient::CreateLiveTimeShiftTemplateOutcomeCallable LiveClient::CreateLiveTimeShiftTemplateCallable(const CreateLiveTimeShiftTemplateRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateLiveTimeShiftTemplateOutcome()>>(
        [this, request]()
        {
            return this->CreateLiveTimeShiftTemplate(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

LiveClient::CreateLiveTranscodeRuleOutcome LiveClient::CreateLiveTranscodeRule(const CreateLiveTranscodeRuleRequest &request)
{
    auto outcome = MakeRequest(request, "CreateLiveTranscodeRule");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateLiveTranscodeRuleResponse rsp = CreateLiveTranscodeRuleResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateLiveTranscodeRuleOutcome(rsp);
        else
            return CreateLiveTranscodeRuleOutcome(o.GetError());
    }
    else
    {
        return CreateLiveTranscodeRuleOutcome(outcome.GetError());
    }
}

void LiveClient::CreateLiveTranscodeRuleAsync(const CreateLiveTranscodeRuleRequest& request, const CreateLiveTranscodeRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateLiveTranscodeRule(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

LiveClient::CreateLiveTranscodeRuleOutcomeCallable LiveClient::CreateLiveTranscodeRuleCallable(const CreateLiveTranscodeRuleRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateLiveTranscodeRuleOutcome()>>(
        [this, request]()
        {
            return this->CreateLiveTranscodeRule(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

LiveClient::CreateLiveTranscodeTemplateOutcome LiveClient::CreateLiveTranscodeTemplate(const CreateLiveTranscodeTemplateRequest &request)
{
    auto outcome = MakeRequest(request, "CreateLiveTranscodeTemplate");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateLiveTranscodeTemplateResponse rsp = CreateLiveTranscodeTemplateResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateLiveTranscodeTemplateOutcome(rsp);
        else
            return CreateLiveTranscodeTemplateOutcome(o.GetError());
    }
    else
    {
        return CreateLiveTranscodeTemplateOutcome(outcome.GetError());
    }
}

void LiveClient::CreateLiveTranscodeTemplateAsync(const CreateLiveTranscodeTemplateRequest& request, const CreateLiveTranscodeTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateLiveTranscodeTemplate(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

LiveClient::CreateLiveTranscodeTemplateOutcomeCallable LiveClient::CreateLiveTranscodeTemplateCallable(const CreateLiveTranscodeTemplateRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateLiveTranscodeTemplateOutcome()>>(
        [this, request]()
        {
            return this->CreateLiveTranscodeTemplate(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

LiveClient::CreateLiveWatermarkRuleOutcome LiveClient::CreateLiveWatermarkRule(const CreateLiveWatermarkRuleRequest &request)
{
    auto outcome = MakeRequest(request, "CreateLiveWatermarkRule");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateLiveWatermarkRuleResponse rsp = CreateLiveWatermarkRuleResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateLiveWatermarkRuleOutcome(rsp);
        else
            return CreateLiveWatermarkRuleOutcome(o.GetError());
    }
    else
    {
        return CreateLiveWatermarkRuleOutcome(outcome.GetError());
    }
}

void LiveClient::CreateLiveWatermarkRuleAsync(const CreateLiveWatermarkRuleRequest& request, const CreateLiveWatermarkRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateLiveWatermarkRule(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

LiveClient::CreateLiveWatermarkRuleOutcomeCallable LiveClient::CreateLiveWatermarkRuleCallable(const CreateLiveWatermarkRuleRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateLiveWatermarkRuleOutcome()>>(
        [this, request]()
        {
            return this->CreateLiveWatermarkRule(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

LiveClient::CreatePullStreamConfigOutcome LiveClient::CreatePullStreamConfig(const CreatePullStreamConfigRequest &request)
{
    auto outcome = MakeRequest(request, "CreatePullStreamConfig");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreatePullStreamConfigResponse rsp = CreatePullStreamConfigResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreatePullStreamConfigOutcome(rsp);
        else
            return CreatePullStreamConfigOutcome(o.GetError());
    }
    else
    {
        return CreatePullStreamConfigOutcome(outcome.GetError());
    }
}

void LiveClient::CreatePullStreamConfigAsync(const CreatePullStreamConfigRequest& request, const CreatePullStreamConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreatePullStreamConfig(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

LiveClient::CreatePullStreamConfigOutcomeCallable LiveClient::CreatePullStreamConfigCallable(const CreatePullStreamConfigRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreatePullStreamConfigOutcome()>>(
        [this, request]()
        {
            return this->CreatePullStreamConfig(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

LiveClient::CreateRecordTaskOutcome LiveClient::CreateRecordTask(const CreateRecordTaskRequest &request)
{
    auto outcome = MakeRequest(request, "CreateRecordTask");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateRecordTaskResponse rsp = CreateRecordTaskResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateRecordTaskOutcome(rsp);
        else
            return CreateRecordTaskOutcome(o.GetError());
    }
    else
    {
        return CreateRecordTaskOutcome(outcome.GetError());
    }
}

void LiveClient::CreateRecordTaskAsync(const CreateRecordTaskRequest& request, const CreateRecordTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateRecordTask(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

LiveClient::CreateRecordTaskOutcomeCallable LiveClient::CreateRecordTaskCallable(const CreateRecordTaskRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateRecordTaskOutcome()>>(
        [this, request]()
        {
            return this->CreateRecordTask(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

LiveClient::CreateScreenshotTaskOutcome LiveClient::CreateScreenshotTask(const CreateScreenshotTaskRequest &request)
{
    auto outcome = MakeRequest(request, "CreateScreenshotTask");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateScreenshotTaskResponse rsp = CreateScreenshotTaskResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateScreenshotTaskOutcome(rsp);
        else
            return CreateScreenshotTaskOutcome(o.GetError());
    }
    else
    {
        return CreateScreenshotTaskOutcome(outcome.GetError());
    }
}

void LiveClient::CreateScreenshotTaskAsync(const CreateScreenshotTaskRequest& request, const CreateScreenshotTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateScreenshotTask(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

LiveClient::CreateScreenshotTaskOutcomeCallable LiveClient::CreateScreenshotTaskCallable(const CreateScreenshotTaskRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateScreenshotTaskOutcome()>>(
        [this, request]()
        {
            return this->CreateScreenshotTask(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

LiveClient::DeleteCasterOutcome LiveClient::DeleteCaster(const DeleteCasterRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteCaster");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteCasterResponse rsp = DeleteCasterResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteCasterOutcome(rsp);
        else
            return DeleteCasterOutcome(o.GetError());
    }
    else
    {
        return DeleteCasterOutcome(outcome.GetError());
    }
}

void LiveClient::DeleteCasterAsync(const DeleteCasterRequest& request, const DeleteCasterAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteCaster(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

LiveClient::DeleteCasterOutcomeCallable LiveClient::DeleteCasterCallable(const DeleteCasterRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteCasterOutcome()>>(
        [this, request]()
        {
            return this->DeleteCaster(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

LiveClient::DeleteCasterInputInfoOutcome LiveClient::DeleteCasterInputInfo(const DeleteCasterInputInfoRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteCasterInputInfo");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteCasterInputInfoResponse rsp = DeleteCasterInputInfoResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteCasterInputInfoOutcome(rsp);
        else
            return DeleteCasterInputInfoOutcome(o.GetError());
    }
    else
    {
        return DeleteCasterInputInfoOutcome(outcome.GetError());
    }
}

void LiveClient::DeleteCasterInputInfoAsync(const DeleteCasterInputInfoRequest& request, const DeleteCasterInputInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteCasterInputInfo(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

LiveClient::DeleteCasterInputInfoOutcomeCallable LiveClient::DeleteCasterInputInfoCallable(const DeleteCasterInputInfoRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteCasterInputInfoOutcome()>>(
        [this, request]()
        {
            return this->DeleteCasterInputInfo(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

LiveClient::DeleteCasterLayoutInfoOutcome LiveClient::DeleteCasterLayoutInfo(const DeleteCasterLayoutInfoRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteCasterLayoutInfo");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteCasterLayoutInfoResponse rsp = DeleteCasterLayoutInfoResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteCasterLayoutInfoOutcome(rsp);
        else
            return DeleteCasterLayoutInfoOutcome(o.GetError());
    }
    else
    {
        return DeleteCasterLayoutInfoOutcome(outcome.GetError());
    }
}

void LiveClient::DeleteCasterLayoutInfoAsync(const DeleteCasterLayoutInfoRequest& request, const DeleteCasterLayoutInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteCasterLayoutInfo(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

LiveClient::DeleteCasterLayoutInfoOutcomeCallable LiveClient::DeleteCasterLayoutInfoCallable(const DeleteCasterLayoutInfoRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteCasterLayoutInfoOutcome()>>(
        [this, request]()
        {
            return this->DeleteCasterLayoutInfo(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

LiveClient::DeleteCasterMarkPicInfoOutcome LiveClient::DeleteCasterMarkPicInfo(const DeleteCasterMarkPicInfoRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteCasterMarkPicInfo");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteCasterMarkPicInfoResponse rsp = DeleteCasterMarkPicInfoResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteCasterMarkPicInfoOutcome(rsp);
        else
            return DeleteCasterMarkPicInfoOutcome(o.GetError());
    }
    else
    {
        return DeleteCasterMarkPicInfoOutcome(outcome.GetError());
    }
}

void LiveClient::DeleteCasterMarkPicInfoAsync(const DeleteCasterMarkPicInfoRequest& request, const DeleteCasterMarkPicInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteCasterMarkPicInfo(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

LiveClient::DeleteCasterMarkPicInfoOutcomeCallable LiveClient::DeleteCasterMarkPicInfoCallable(const DeleteCasterMarkPicInfoRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteCasterMarkPicInfoOutcome()>>(
        [this, request]()
        {
            return this->DeleteCasterMarkPicInfo(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

LiveClient::DeleteCasterMarkWordInfoOutcome LiveClient::DeleteCasterMarkWordInfo(const DeleteCasterMarkWordInfoRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteCasterMarkWordInfo");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteCasterMarkWordInfoResponse rsp = DeleteCasterMarkWordInfoResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteCasterMarkWordInfoOutcome(rsp);
        else
            return DeleteCasterMarkWordInfoOutcome(o.GetError());
    }
    else
    {
        return DeleteCasterMarkWordInfoOutcome(outcome.GetError());
    }
}

void LiveClient::DeleteCasterMarkWordInfoAsync(const DeleteCasterMarkWordInfoRequest& request, const DeleteCasterMarkWordInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteCasterMarkWordInfo(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

LiveClient::DeleteCasterMarkWordInfoOutcomeCallable LiveClient::DeleteCasterMarkWordInfoCallable(const DeleteCasterMarkWordInfoRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteCasterMarkWordInfoOutcome()>>(
        [this, request]()
        {
            return this->DeleteCasterMarkWordInfo(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

LiveClient::DeleteCasterOutputInfoOutcome LiveClient::DeleteCasterOutputInfo(const DeleteCasterOutputInfoRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteCasterOutputInfo");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteCasterOutputInfoResponse rsp = DeleteCasterOutputInfoResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteCasterOutputInfoOutcome(rsp);
        else
            return DeleteCasterOutputInfoOutcome(o.GetError());
    }
    else
    {
        return DeleteCasterOutputInfoOutcome(outcome.GetError());
    }
}

void LiveClient::DeleteCasterOutputInfoAsync(const DeleteCasterOutputInfoRequest& request, const DeleteCasterOutputInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteCasterOutputInfo(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

LiveClient::DeleteCasterOutputInfoOutcomeCallable LiveClient::DeleteCasterOutputInfoCallable(const DeleteCasterOutputInfoRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteCasterOutputInfoOutcome()>>(
        [this, request]()
        {
            return this->DeleteCasterOutputInfo(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

LiveClient::DeleteLiveCallbackRuleOutcome LiveClient::DeleteLiveCallbackRule(const DeleteLiveCallbackRuleRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteLiveCallbackRule");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteLiveCallbackRuleResponse rsp = DeleteLiveCallbackRuleResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteLiveCallbackRuleOutcome(rsp);
        else
            return DeleteLiveCallbackRuleOutcome(o.GetError());
    }
    else
    {
        return DeleteLiveCallbackRuleOutcome(outcome.GetError());
    }
}

void LiveClient::DeleteLiveCallbackRuleAsync(const DeleteLiveCallbackRuleRequest& request, const DeleteLiveCallbackRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteLiveCallbackRule(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

LiveClient::DeleteLiveCallbackRuleOutcomeCallable LiveClient::DeleteLiveCallbackRuleCallable(const DeleteLiveCallbackRuleRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteLiveCallbackRuleOutcome()>>(
        [this, request]()
        {
            return this->DeleteLiveCallbackRule(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

LiveClient::DeleteLiveCallbackTemplateOutcome LiveClient::DeleteLiveCallbackTemplate(const DeleteLiveCallbackTemplateRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteLiveCallbackTemplate");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteLiveCallbackTemplateResponse rsp = DeleteLiveCallbackTemplateResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteLiveCallbackTemplateOutcome(rsp);
        else
            return DeleteLiveCallbackTemplateOutcome(o.GetError());
    }
    else
    {
        return DeleteLiveCallbackTemplateOutcome(outcome.GetError());
    }
}

void LiveClient::DeleteLiveCallbackTemplateAsync(const DeleteLiveCallbackTemplateRequest& request, const DeleteLiveCallbackTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteLiveCallbackTemplate(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

LiveClient::DeleteLiveCallbackTemplateOutcomeCallable LiveClient::DeleteLiveCallbackTemplateCallable(const DeleteLiveCallbackTemplateRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteLiveCallbackTemplateOutcome()>>(
        [this, request]()
        {
            return this->DeleteLiveCallbackTemplate(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

LiveClient::DeleteLiveDomainOutcome LiveClient::DeleteLiveDomain(const DeleteLiveDomainRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteLiveDomain");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteLiveDomainResponse rsp = DeleteLiveDomainResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteLiveDomainOutcome(rsp);
        else
            return DeleteLiveDomainOutcome(o.GetError());
    }
    else
    {
        return DeleteLiveDomainOutcome(outcome.GetError());
    }
}

void LiveClient::DeleteLiveDomainAsync(const DeleteLiveDomainRequest& request, const DeleteLiveDomainAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteLiveDomain(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

LiveClient::DeleteLiveDomainOutcomeCallable LiveClient::DeleteLiveDomainCallable(const DeleteLiveDomainRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteLiveDomainOutcome()>>(
        [this, request]()
        {
            return this->DeleteLiveDomain(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

LiveClient::DeleteLivePadRuleOutcome LiveClient::DeleteLivePadRule(const DeleteLivePadRuleRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteLivePadRule");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteLivePadRuleResponse rsp = DeleteLivePadRuleResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteLivePadRuleOutcome(rsp);
        else
            return DeleteLivePadRuleOutcome(o.GetError());
    }
    else
    {
        return DeleteLivePadRuleOutcome(outcome.GetError());
    }
}

void LiveClient::DeleteLivePadRuleAsync(const DeleteLivePadRuleRequest& request, const DeleteLivePadRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteLivePadRule(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

LiveClient::DeleteLivePadRuleOutcomeCallable LiveClient::DeleteLivePadRuleCallable(const DeleteLivePadRuleRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteLivePadRuleOutcome()>>(
        [this, request]()
        {
            return this->DeleteLivePadRule(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

LiveClient::DeleteLivePadTemplateOutcome LiveClient::DeleteLivePadTemplate(const DeleteLivePadTemplateRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteLivePadTemplate");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteLivePadTemplateResponse rsp = DeleteLivePadTemplateResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteLivePadTemplateOutcome(rsp);
        else
            return DeleteLivePadTemplateOutcome(o.GetError());
    }
    else
    {
        return DeleteLivePadTemplateOutcome(outcome.GetError());
    }
}

void LiveClient::DeleteLivePadTemplateAsync(const DeleteLivePadTemplateRequest& request, const DeleteLivePadTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteLivePadTemplate(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

LiveClient::DeleteLivePadTemplateOutcomeCallable LiveClient::DeleteLivePadTemplateCallable(const DeleteLivePadTemplateRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteLivePadTemplateOutcome()>>(
        [this, request]()
        {
            return this->DeleteLivePadTemplate(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

LiveClient::DeleteLivePullStreamTaskOutcome LiveClient::DeleteLivePullStreamTask(const DeleteLivePullStreamTaskRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteLivePullStreamTask");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteLivePullStreamTaskResponse rsp = DeleteLivePullStreamTaskResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteLivePullStreamTaskOutcome(rsp);
        else
            return DeleteLivePullStreamTaskOutcome(o.GetError());
    }
    else
    {
        return DeleteLivePullStreamTaskOutcome(outcome.GetError());
    }
}

void LiveClient::DeleteLivePullStreamTaskAsync(const DeleteLivePullStreamTaskRequest& request, const DeleteLivePullStreamTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteLivePullStreamTask(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

LiveClient::DeleteLivePullStreamTaskOutcomeCallable LiveClient::DeleteLivePullStreamTaskCallable(const DeleteLivePullStreamTaskRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteLivePullStreamTaskOutcome()>>(
        [this, request]()
        {
            return this->DeleteLivePullStreamTask(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

LiveClient::DeleteLiveRecordOutcome LiveClient::DeleteLiveRecord(const DeleteLiveRecordRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteLiveRecord");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteLiveRecordResponse rsp = DeleteLiveRecordResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteLiveRecordOutcome(rsp);
        else
            return DeleteLiveRecordOutcome(o.GetError());
    }
    else
    {
        return DeleteLiveRecordOutcome(outcome.GetError());
    }
}

void LiveClient::DeleteLiveRecordAsync(const DeleteLiveRecordRequest& request, const DeleteLiveRecordAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteLiveRecord(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

LiveClient::DeleteLiveRecordOutcomeCallable LiveClient::DeleteLiveRecordCallable(const DeleteLiveRecordRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteLiveRecordOutcome()>>(
        [this, request]()
        {
            return this->DeleteLiveRecord(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

LiveClient::DeleteLiveRecordRuleOutcome LiveClient::DeleteLiveRecordRule(const DeleteLiveRecordRuleRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteLiveRecordRule");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteLiveRecordRuleResponse rsp = DeleteLiveRecordRuleResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteLiveRecordRuleOutcome(rsp);
        else
            return DeleteLiveRecordRuleOutcome(o.GetError());
    }
    else
    {
        return DeleteLiveRecordRuleOutcome(outcome.GetError());
    }
}

void LiveClient::DeleteLiveRecordRuleAsync(const DeleteLiveRecordRuleRequest& request, const DeleteLiveRecordRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteLiveRecordRule(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

LiveClient::DeleteLiveRecordRuleOutcomeCallable LiveClient::DeleteLiveRecordRuleCallable(const DeleteLiveRecordRuleRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteLiveRecordRuleOutcome()>>(
        [this, request]()
        {
            return this->DeleteLiveRecordRule(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

LiveClient::DeleteLiveRecordTemplateOutcome LiveClient::DeleteLiveRecordTemplate(const DeleteLiveRecordTemplateRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteLiveRecordTemplate");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteLiveRecordTemplateResponse rsp = DeleteLiveRecordTemplateResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteLiveRecordTemplateOutcome(rsp);
        else
            return DeleteLiveRecordTemplateOutcome(o.GetError());
    }
    else
    {
        return DeleteLiveRecordTemplateOutcome(outcome.GetError());
    }
}

void LiveClient::DeleteLiveRecordTemplateAsync(const DeleteLiveRecordTemplateRequest& request, const DeleteLiveRecordTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteLiveRecordTemplate(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

LiveClient::DeleteLiveRecordTemplateOutcomeCallable LiveClient::DeleteLiveRecordTemplateCallable(const DeleteLiveRecordTemplateRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteLiveRecordTemplateOutcome()>>(
        [this, request]()
        {
            return this->DeleteLiveRecordTemplate(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

LiveClient::DeleteLiveSnapshotRuleOutcome LiveClient::DeleteLiveSnapshotRule(const DeleteLiveSnapshotRuleRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteLiveSnapshotRule");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteLiveSnapshotRuleResponse rsp = DeleteLiveSnapshotRuleResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteLiveSnapshotRuleOutcome(rsp);
        else
            return DeleteLiveSnapshotRuleOutcome(o.GetError());
    }
    else
    {
        return DeleteLiveSnapshotRuleOutcome(outcome.GetError());
    }
}

void LiveClient::DeleteLiveSnapshotRuleAsync(const DeleteLiveSnapshotRuleRequest& request, const DeleteLiveSnapshotRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteLiveSnapshotRule(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

LiveClient::DeleteLiveSnapshotRuleOutcomeCallable LiveClient::DeleteLiveSnapshotRuleCallable(const DeleteLiveSnapshotRuleRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteLiveSnapshotRuleOutcome()>>(
        [this, request]()
        {
            return this->DeleteLiveSnapshotRule(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

LiveClient::DeleteLiveSnapshotTemplateOutcome LiveClient::DeleteLiveSnapshotTemplate(const DeleteLiveSnapshotTemplateRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteLiveSnapshotTemplate");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteLiveSnapshotTemplateResponse rsp = DeleteLiveSnapshotTemplateResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteLiveSnapshotTemplateOutcome(rsp);
        else
            return DeleteLiveSnapshotTemplateOutcome(o.GetError());
    }
    else
    {
        return DeleteLiveSnapshotTemplateOutcome(outcome.GetError());
    }
}

void LiveClient::DeleteLiveSnapshotTemplateAsync(const DeleteLiveSnapshotTemplateRequest& request, const DeleteLiveSnapshotTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteLiveSnapshotTemplate(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

LiveClient::DeleteLiveSnapshotTemplateOutcomeCallable LiveClient::DeleteLiveSnapshotTemplateCallable(const DeleteLiveSnapshotTemplateRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteLiveSnapshotTemplateOutcome()>>(
        [this, request]()
        {
            return this->DeleteLiveSnapshotTemplate(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

LiveClient::DeleteLiveStreamMonitorOutcome LiveClient::DeleteLiveStreamMonitor(const DeleteLiveStreamMonitorRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteLiveStreamMonitor");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteLiveStreamMonitorResponse rsp = DeleteLiveStreamMonitorResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteLiveStreamMonitorOutcome(rsp);
        else
            return DeleteLiveStreamMonitorOutcome(o.GetError());
    }
    else
    {
        return DeleteLiveStreamMonitorOutcome(outcome.GetError());
    }
}

void LiveClient::DeleteLiveStreamMonitorAsync(const DeleteLiveStreamMonitorRequest& request, const DeleteLiveStreamMonitorAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteLiveStreamMonitor(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

LiveClient::DeleteLiveStreamMonitorOutcomeCallable LiveClient::DeleteLiveStreamMonitorCallable(const DeleteLiveStreamMonitorRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteLiveStreamMonitorOutcome()>>(
        [this, request]()
        {
            return this->DeleteLiveStreamMonitor(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

LiveClient::DeleteLiveTimeShiftRuleOutcome LiveClient::DeleteLiveTimeShiftRule(const DeleteLiveTimeShiftRuleRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteLiveTimeShiftRule");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteLiveTimeShiftRuleResponse rsp = DeleteLiveTimeShiftRuleResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteLiveTimeShiftRuleOutcome(rsp);
        else
            return DeleteLiveTimeShiftRuleOutcome(o.GetError());
    }
    else
    {
        return DeleteLiveTimeShiftRuleOutcome(outcome.GetError());
    }
}

void LiveClient::DeleteLiveTimeShiftRuleAsync(const DeleteLiveTimeShiftRuleRequest& request, const DeleteLiveTimeShiftRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteLiveTimeShiftRule(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

LiveClient::DeleteLiveTimeShiftRuleOutcomeCallable LiveClient::DeleteLiveTimeShiftRuleCallable(const DeleteLiveTimeShiftRuleRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteLiveTimeShiftRuleOutcome()>>(
        [this, request]()
        {
            return this->DeleteLiveTimeShiftRule(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

LiveClient::DeleteLiveTimeShiftTemplateOutcome LiveClient::DeleteLiveTimeShiftTemplate(const DeleteLiveTimeShiftTemplateRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteLiveTimeShiftTemplate");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteLiveTimeShiftTemplateResponse rsp = DeleteLiveTimeShiftTemplateResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteLiveTimeShiftTemplateOutcome(rsp);
        else
            return DeleteLiveTimeShiftTemplateOutcome(o.GetError());
    }
    else
    {
        return DeleteLiveTimeShiftTemplateOutcome(outcome.GetError());
    }
}

void LiveClient::DeleteLiveTimeShiftTemplateAsync(const DeleteLiveTimeShiftTemplateRequest& request, const DeleteLiveTimeShiftTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteLiveTimeShiftTemplate(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

LiveClient::DeleteLiveTimeShiftTemplateOutcomeCallable LiveClient::DeleteLiveTimeShiftTemplateCallable(const DeleteLiveTimeShiftTemplateRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteLiveTimeShiftTemplateOutcome()>>(
        [this, request]()
        {
            return this->DeleteLiveTimeShiftTemplate(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

LiveClient::DeleteLiveTranscodeRuleOutcome LiveClient::DeleteLiveTranscodeRule(const DeleteLiveTranscodeRuleRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteLiveTranscodeRule");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteLiveTranscodeRuleResponse rsp = DeleteLiveTranscodeRuleResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteLiveTranscodeRuleOutcome(rsp);
        else
            return DeleteLiveTranscodeRuleOutcome(o.GetError());
    }
    else
    {
        return DeleteLiveTranscodeRuleOutcome(outcome.GetError());
    }
}

void LiveClient::DeleteLiveTranscodeRuleAsync(const DeleteLiveTranscodeRuleRequest& request, const DeleteLiveTranscodeRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteLiveTranscodeRule(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

LiveClient::DeleteLiveTranscodeRuleOutcomeCallable LiveClient::DeleteLiveTranscodeRuleCallable(const DeleteLiveTranscodeRuleRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteLiveTranscodeRuleOutcome()>>(
        [this, request]()
        {
            return this->DeleteLiveTranscodeRule(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

LiveClient::DeleteLiveTranscodeTemplateOutcome LiveClient::DeleteLiveTranscodeTemplate(const DeleteLiveTranscodeTemplateRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteLiveTranscodeTemplate");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteLiveTranscodeTemplateResponse rsp = DeleteLiveTranscodeTemplateResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteLiveTranscodeTemplateOutcome(rsp);
        else
            return DeleteLiveTranscodeTemplateOutcome(o.GetError());
    }
    else
    {
        return DeleteLiveTranscodeTemplateOutcome(outcome.GetError());
    }
}

void LiveClient::DeleteLiveTranscodeTemplateAsync(const DeleteLiveTranscodeTemplateRequest& request, const DeleteLiveTranscodeTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteLiveTranscodeTemplate(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

LiveClient::DeleteLiveTranscodeTemplateOutcomeCallable LiveClient::DeleteLiveTranscodeTemplateCallable(const DeleteLiveTranscodeTemplateRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteLiveTranscodeTemplateOutcome()>>(
        [this, request]()
        {
            return this->DeleteLiveTranscodeTemplate(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

LiveClient::DeleteLiveWatermarkOutcome LiveClient::DeleteLiveWatermark(const DeleteLiveWatermarkRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteLiveWatermark");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteLiveWatermarkResponse rsp = DeleteLiveWatermarkResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteLiveWatermarkOutcome(rsp);
        else
            return DeleteLiveWatermarkOutcome(o.GetError());
    }
    else
    {
        return DeleteLiveWatermarkOutcome(outcome.GetError());
    }
}

void LiveClient::DeleteLiveWatermarkAsync(const DeleteLiveWatermarkRequest& request, const DeleteLiveWatermarkAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteLiveWatermark(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

LiveClient::DeleteLiveWatermarkOutcomeCallable LiveClient::DeleteLiveWatermarkCallable(const DeleteLiveWatermarkRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteLiveWatermarkOutcome()>>(
        [this, request]()
        {
            return this->DeleteLiveWatermark(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

LiveClient::DeleteLiveWatermarkRuleOutcome LiveClient::DeleteLiveWatermarkRule(const DeleteLiveWatermarkRuleRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteLiveWatermarkRule");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteLiveWatermarkRuleResponse rsp = DeleteLiveWatermarkRuleResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteLiveWatermarkRuleOutcome(rsp);
        else
            return DeleteLiveWatermarkRuleOutcome(o.GetError());
    }
    else
    {
        return DeleteLiveWatermarkRuleOutcome(outcome.GetError());
    }
}

void LiveClient::DeleteLiveWatermarkRuleAsync(const DeleteLiveWatermarkRuleRequest& request, const DeleteLiveWatermarkRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteLiveWatermarkRule(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

LiveClient::DeleteLiveWatermarkRuleOutcomeCallable LiveClient::DeleteLiveWatermarkRuleCallable(const DeleteLiveWatermarkRuleRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteLiveWatermarkRuleOutcome()>>(
        [this, request]()
        {
            return this->DeleteLiveWatermarkRule(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

LiveClient::DeletePullStreamConfigOutcome LiveClient::DeletePullStreamConfig(const DeletePullStreamConfigRequest &request)
{
    auto outcome = MakeRequest(request, "DeletePullStreamConfig");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeletePullStreamConfigResponse rsp = DeletePullStreamConfigResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeletePullStreamConfigOutcome(rsp);
        else
            return DeletePullStreamConfigOutcome(o.GetError());
    }
    else
    {
        return DeletePullStreamConfigOutcome(outcome.GetError());
    }
}

void LiveClient::DeletePullStreamConfigAsync(const DeletePullStreamConfigRequest& request, const DeletePullStreamConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeletePullStreamConfig(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

LiveClient::DeletePullStreamConfigOutcomeCallable LiveClient::DeletePullStreamConfigCallable(const DeletePullStreamConfigRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeletePullStreamConfigOutcome()>>(
        [this, request]()
        {
            return this->DeletePullStreamConfig(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

LiveClient::DeleteRecordTaskOutcome LiveClient::DeleteRecordTask(const DeleteRecordTaskRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteRecordTask");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteRecordTaskResponse rsp = DeleteRecordTaskResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteRecordTaskOutcome(rsp);
        else
            return DeleteRecordTaskOutcome(o.GetError());
    }
    else
    {
        return DeleteRecordTaskOutcome(outcome.GetError());
    }
}

void LiveClient::DeleteRecordTaskAsync(const DeleteRecordTaskRequest& request, const DeleteRecordTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteRecordTask(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

LiveClient::DeleteRecordTaskOutcomeCallable LiveClient::DeleteRecordTaskCallable(const DeleteRecordTaskRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteRecordTaskOutcome()>>(
        [this, request]()
        {
            return this->DeleteRecordTask(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

LiveClient::DeleteScreenshotTaskOutcome LiveClient::DeleteScreenshotTask(const DeleteScreenshotTaskRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteScreenshotTask");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteScreenshotTaskResponse rsp = DeleteScreenshotTaskResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteScreenshotTaskOutcome(rsp);
        else
            return DeleteScreenshotTaskOutcome(o.GetError());
    }
    else
    {
        return DeleteScreenshotTaskOutcome(outcome.GetError());
    }
}

void LiveClient::DeleteScreenshotTaskAsync(const DeleteScreenshotTaskRequest& request, const DeleteScreenshotTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteScreenshotTask(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

LiveClient::DeleteScreenshotTaskOutcomeCallable LiveClient::DeleteScreenshotTaskCallable(const DeleteScreenshotTaskRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteScreenshotTaskOutcome()>>(
        [this, request]()
        {
            return this->DeleteScreenshotTask(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

LiveClient::DescribeAllStreamPlayInfoListOutcome LiveClient::DescribeAllStreamPlayInfoList(const DescribeAllStreamPlayInfoListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeAllStreamPlayInfoList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeAllStreamPlayInfoListResponse rsp = DescribeAllStreamPlayInfoListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeAllStreamPlayInfoListOutcome(rsp);
        else
            return DescribeAllStreamPlayInfoListOutcome(o.GetError());
    }
    else
    {
        return DescribeAllStreamPlayInfoListOutcome(outcome.GetError());
    }
}

void LiveClient::DescribeAllStreamPlayInfoListAsync(const DescribeAllStreamPlayInfoListRequest& request, const DescribeAllStreamPlayInfoListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeAllStreamPlayInfoList(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

LiveClient::DescribeAllStreamPlayInfoListOutcomeCallable LiveClient::DescribeAllStreamPlayInfoListCallable(const DescribeAllStreamPlayInfoListRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeAllStreamPlayInfoListOutcome()>>(
        [this, request]()
        {
            return this->DescribeAllStreamPlayInfoList(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

LiveClient::DescribeAreaBillBandwidthAndFluxListOutcome LiveClient::DescribeAreaBillBandwidthAndFluxList(const DescribeAreaBillBandwidthAndFluxListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeAreaBillBandwidthAndFluxList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeAreaBillBandwidthAndFluxListResponse rsp = DescribeAreaBillBandwidthAndFluxListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeAreaBillBandwidthAndFluxListOutcome(rsp);
        else
            return DescribeAreaBillBandwidthAndFluxListOutcome(o.GetError());
    }
    else
    {
        return DescribeAreaBillBandwidthAndFluxListOutcome(outcome.GetError());
    }
}

void LiveClient::DescribeAreaBillBandwidthAndFluxListAsync(const DescribeAreaBillBandwidthAndFluxListRequest& request, const DescribeAreaBillBandwidthAndFluxListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeAreaBillBandwidthAndFluxList(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

LiveClient::DescribeAreaBillBandwidthAndFluxListOutcomeCallable LiveClient::DescribeAreaBillBandwidthAndFluxListCallable(const DescribeAreaBillBandwidthAndFluxListRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeAreaBillBandwidthAndFluxListOutcome()>>(
        [this, request]()
        {
            return this->DescribeAreaBillBandwidthAndFluxList(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

LiveClient::DescribeBackupStreamListOutcome LiveClient::DescribeBackupStreamList(const DescribeBackupStreamListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeBackupStreamList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeBackupStreamListResponse rsp = DescribeBackupStreamListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeBackupStreamListOutcome(rsp);
        else
            return DescribeBackupStreamListOutcome(o.GetError());
    }
    else
    {
        return DescribeBackupStreamListOutcome(outcome.GetError());
    }
}

void LiveClient::DescribeBackupStreamListAsync(const DescribeBackupStreamListRequest& request, const DescribeBackupStreamListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeBackupStreamList(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

LiveClient::DescribeBackupStreamListOutcomeCallable LiveClient::DescribeBackupStreamListCallable(const DescribeBackupStreamListRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeBackupStreamListOutcome()>>(
        [this, request]()
        {
            return this->DescribeBackupStreamList(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

LiveClient::DescribeBillBandwidthAndFluxListOutcome LiveClient::DescribeBillBandwidthAndFluxList(const DescribeBillBandwidthAndFluxListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeBillBandwidthAndFluxList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeBillBandwidthAndFluxListResponse rsp = DescribeBillBandwidthAndFluxListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeBillBandwidthAndFluxListOutcome(rsp);
        else
            return DescribeBillBandwidthAndFluxListOutcome(o.GetError());
    }
    else
    {
        return DescribeBillBandwidthAndFluxListOutcome(outcome.GetError());
    }
}

void LiveClient::DescribeBillBandwidthAndFluxListAsync(const DescribeBillBandwidthAndFluxListRequest& request, const DescribeBillBandwidthAndFluxListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeBillBandwidthAndFluxList(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

LiveClient::DescribeBillBandwidthAndFluxListOutcomeCallable LiveClient::DescribeBillBandwidthAndFluxListCallable(const DescribeBillBandwidthAndFluxListRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeBillBandwidthAndFluxListOutcome()>>(
        [this, request]()
        {
            return this->DescribeBillBandwidthAndFluxList(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

LiveClient::DescribeCallbackRecordsListOutcome LiveClient::DescribeCallbackRecordsList(const DescribeCallbackRecordsListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeCallbackRecordsList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeCallbackRecordsListResponse rsp = DescribeCallbackRecordsListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeCallbackRecordsListOutcome(rsp);
        else
            return DescribeCallbackRecordsListOutcome(o.GetError());
    }
    else
    {
        return DescribeCallbackRecordsListOutcome(outcome.GetError());
    }
}

void LiveClient::DescribeCallbackRecordsListAsync(const DescribeCallbackRecordsListRequest& request, const DescribeCallbackRecordsListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeCallbackRecordsList(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

LiveClient::DescribeCallbackRecordsListOutcomeCallable LiveClient::DescribeCallbackRecordsListCallable(const DescribeCallbackRecordsListRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeCallbackRecordsListOutcome()>>(
        [this, request]()
        {
            return this->DescribeCallbackRecordsList(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

LiveClient::DescribeCasterOutcome LiveClient::DescribeCaster(const DescribeCasterRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeCaster");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeCasterResponse rsp = DescribeCasterResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeCasterOutcome(rsp);
        else
            return DescribeCasterOutcome(o.GetError());
    }
    else
    {
        return DescribeCasterOutcome(outcome.GetError());
    }
}

void LiveClient::DescribeCasterAsync(const DescribeCasterRequest& request, const DescribeCasterAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeCaster(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

LiveClient::DescribeCasterOutcomeCallable LiveClient::DescribeCasterCallable(const DescribeCasterRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeCasterOutcome()>>(
        [this, request]()
        {
            return this->DescribeCaster(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

LiveClient::DescribeCasterDisplayInfoOutcome LiveClient::DescribeCasterDisplayInfo(const DescribeCasterDisplayInfoRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeCasterDisplayInfo");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeCasterDisplayInfoResponse rsp = DescribeCasterDisplayInfoResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeCasterDisplayInfoOutcome(rsp);
        else
            return DescribeCasterDisplayInfoOutcome(o.GetError());
    }
    else
    {
        return DescribeCasterDisplayInfoOutcome(outcome.GetError());
    }
}

void LiveClient::DescribeCasterDisplayInfoAsync(const DescribeCasterDisplayInfoRequest& request, const DescribeCasterDisplayInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeCasterDisplayInfo(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

LiveClient::DescribeCasterDisplayInfoOutcomeCallable LiveClient::DescribeCasterDisplayInfoCallable(const DescribeCasterDisplayInfoRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeCasterDisplayInfoOutcome()>>(
        [this, request]()
        {
            return this->DescribeCasterDisplayInfo(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

LiveClient::DescribeCasterInputInfosOutcome LiveClient::DescribeCasterInputInfos(const DescribeCasterInputInfosRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeCasterInputInfos");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeCasterInputInfosResponse rsp = DescribeCasterInputInfosResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeCasterInputInfosOutcome(rsp);
        else
            return DescribeCasterInputInfosOutcome(o.GetError());
    }
    else
    {
        return DescribeCasterInputInfosOutcome(outcome.GetError());
    }
}

void LiveClient::DescribeCasterInputInfosAsync(const DescribeCasterInputInfosRequest& request, const DescribeCasterInputInfosAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeCasterInputInfos(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

LiveClient::DescribeCasterInputInfosOutcomeCallable LiveClient::DescribeCasterInputInfosCallable(const DescribeCasterInputInfosRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeCasterInputInfosOutcome()>>(
        [this, request]()
        {
            return this->DescribeCasterInputInfos(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

LiveClient::DescribeCasterLayoutInfosOutcome LiveClient::DescribeCasterLayoutInfos(const DescribeCasterLayoutInfosRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeCasterLayoutInfos");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeCasterLayoutInfosResponse rsp = DescribeCasterLayoutInfosResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeCasterLayoutInfosOutcome(rsp);
        else
            return DescribeCasterLayoutInfosOutcome(o.GetError());
    }
    else
    {
        return DescribeCasterLayoutInfosOutcome(outcome.GetError());
    }
}

void LiveClient::DescribeCasterLayoutInfosAsync(const DescribeCasterLayoutInfosRequest& request, const DescribeCasterLayoutInfosAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeCasterLayoutInfos(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

LiveClient::DescribeCasterLayoutInfosOutcomeCallable LiveClient::DescribeCasterLayoutInfosCallable(const DescribeCasterLayoutInfosRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeCasterLayoutInfosOutcome()>>(
        [this, request]()
        {
            return this->DescribeCasterLayoutInfos(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

LiveClient::DescribeCasterListOutcome LiveClient::DescribeCasterList(const DescribeCasterListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeCasterList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeCasterListResponse rsp = DescribeCasterListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeCasterListOutcome(rsp);
        else
            return DescribeCasterListOutcome(o.GetError());
    }
    else
    {
        return DescribeCasterListOutcome(outcome.GetError());
    }
}

void LiveClient::DescribeCasterListAsync(const DescribeCasterListRequest& request, const DescribeCasterListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeCasterList(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

LiveClient::DescribeCasterListOutcomeCallable LiveClient::DescribeCasterListCallable(const DescribeCasterListRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeCasterListOutcome()>>(
        [this, request]()
        {
            return this->DescribeCasterList(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

LiveClient::DescribeCasterMarkPicInfosOutcome LiveClient::DescribeCasterMarkPicInfos(const DescribeCasterMarkPicInfosRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeCasterMarkPicInfos");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeCasterMarkPicInfosResponse rsp = DescribeCasterMarkPicInfosResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeCasterMarkPicInfosOutcome(rsp);
        else
            return DescribeCasterMarkPicInfosOutcome(o.GetError());
    }
    else
    {
        return DescribeCasterMarkPicInfosOutcome(outcome.GetError());
    }
}

void LiveClient::DescribeCasterMarkPicInfosAsync(const DescribeCasterMarkPicInfosRequest& request, const DescribeCasterMarkPicInfosAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeCasterMarkPicInfos(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

LiveClient::DescribeCasterMarkPicInfosOutcomeCallable LiveClient::DescribeCasterMarkPicInfosCallable(const DescribeCasterMarkPicInfosRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeCasterMarkPicInfosOutcome()>>(
        [this, request]()
        {
            return this->DescribeCasterMarkPicInfos(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

LiveClient::DescribeCasterMarkWordInfosOutcome LiveClient::DescribeCasterMarkWordInfos(const DescribeCasterMarkWordInfosRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeCasterMarkWordInfos");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeCasterMarkWordInfosResponse rsp = DescribeCasterMarkWordInfosResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeCasterMarkWordInfosOutcome(rsp);
        else
            return DescribeCasterMarkWordInfosOutcome(o.GetError());
    }
    else
    {
        return DescribeCasterMarkWordInfosOutcome(outcome.GetError());
    }
}

void LiveClient::DescribeCasterMarkWordInfosAsync(const DescribeCasterMarkWordInfosRequest& request, const DescribeCasterMarkWordInfosAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeCasterMarkWordInfos(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

LiveClient::DescribeCasterMarkWordInfosOutcomeCallable LiveClient::DescribeCasterMarkWordInfosCallable(const DescribeCasterMarkWordInfosRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeCasterMarkWordInfosOutcome()>>(
        [this, request]()
        {
            return this->DescribeCasterMarkWordInfos(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

LiveClient::DescribeCasterOutputInfosOutcome LiveClient::DescribeCasterOutputInfos(const DescribeCasterOutputInfosRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeCasterOutputInfos");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeCasterOutputInfosResponse rsp = DescribeCasterOutputInfosResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeCasterOutputInfosOutcome(rsp);
        else
            return DescribeCasterOutputInfosOutcome(o.GetError());
    }
    else
    {
        return DescribeCasterOutputInfosOutcome(outcome.GetError());
    }
}

void LiveClient::DescribeCasterOutputInfosAsync(const DescribeCasterOutputInfosRequest& request, const DescribeCasterOutputInfosAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeCasterOutputInfos(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

LiveClient::DescribeCasterOutputInfosOutcomeCallable LiveClient::DescribeCasterOutputInfosCallable(const DescribeCasterOutputInfosRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeCasterOutputInfosOutcome()>>(
        [this, request]()
        {
            return this->DescribeCasterOutputInfos(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

LiveClient::DescribeCasterPlayUrlOutcome LiveClient::DescribeCasterPlayUrl(const DescribeCasterPlayUrlRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeCasterPlayUrl");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeCasterPlayUrlResponse rsp = DescribeCasterPlayUrlResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeCasterPlayUrlOutcome(rsp);
        else
            return DescribeCasterPlayUrlOutcome(o.GetError());
    }
    else
    {
        return DescribeCasterPlayUrlOutcome(outcome.GetError());
    }
}

void LiveClient::DescribeCasterPlayUrlAsync(const DescribeCasterPlayUrlRequest& request, const DescribeCasterPlayUrlAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeCasterPlayUrl(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

LiveClient::DescribeCasterPlayUrlOutcomeCallable LiveClient::DescribeCasterPlayUrlCallable(const DescribeCasterPlayUrlRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeCasterPlayUrlOutcome()>>(
        [this, request]()
        {
            return this->DescribeCasterPlayUrl(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

LiveClient::DescribeCasterTransitionTypesOutcome LiveClient::DescribeCasterTransitionTypes(const DescribeCasterTransitionTypesRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeCasterTransitionTypes");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeCasterTransitionTypesResponse rsp = DescribeCasterTransitionTypesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeCasterTransitionTypesOutcome(rsp);
        else
            return DescribeCasterTransitionTypesOutcome(o.GetError());
    }
    else
    {
        return DescribeCasterTransitionTypesOutcome(outcome.GetError());
    }
}

void LiveClient::DescribeCasterTransitionTypesAsync(const DescribeCasterTransitionTypesRequest& request, const DescribeCasterTransitionTypesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeCasterTransitionTypes(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

LiveClient::DescribeCasterTransitionTypesOutcomeCallable LiveClient::DescribeCasterTransitionTypesCallable(const DescribeCasterTransitionTypesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeCasterTransitionTypesOutcome()>>(
        [this, request]()
        {
            return this->DescribeCasterTransitionTypes(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

LiveClient::DescribeCasterUserStatusOutcome LiveClient::DescribeCasterUserStatus(const DescribeCasterUserStatusRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeCasterUserStatus");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeCasterUserStatusResponse rsp = DescribeCasterUserStatusResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeCasterUserStatusOutcome(rsp);
        else
            return DescribeCasterUserStatusOutcome(o.GetError());
    }
    else
    {
        return DescribeCasterUserStatusOutcome(outcome.GetError());
    }
}

void LiveClient::DescribeCasterUserStatusAsync(const DescribeCasterUserStatusRequest& request, const DescribeCasterUserStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeCasterUserStatus(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

LiveClient::DescribeCasterUserStatusOutcomeCallable LiveClient::DescribeCasterUserStatusCallable(const DescribeCasterUserStatusRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeCasterUserStatusOutcome()>>(
        [this, request]()
        {
            return this->DescribeCasterUserStatus(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

LiveClient::DescribeConcurrentRecordStreamNumOutcome LiveClient::DescribeConcurrentRecordStreamNum(const DescribeConcurrentRecordStreamNumRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeConcurrentRecordStreamNum");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeConcurrentRecordStreamNumResponse rsp = DescribeConcurrentRecordStreamNumResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeConcurrentRecordStreamNumOutcome(rsp);
        else
            return DescribeConcurrentRecordStreamNumOutcome(o.GetError());
    }
    else
    {
        return DescribeConcurrentRecordStreamNumOutcome(outcome.GetError());
    }
}

void LiveClient::DescribeConcurrentRecordStreamNumAsync(const DescribeConcurrentRecordStreamNumRequest& request, const DescribeConcurrentRecordStreamNumAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeConcurrentRecordStreamNum(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

LiveClient::DescribeConcurrentRecordStreamNumOutcomeCallable LiveClient::DescribeConcurrentRecordStreamNumCallable(const DescribeConcurrentRecordStreamNumRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeConcurrentRecordStreamNumOutcome()>>(
        [this, request]()
        {
            return this->DescribeConcurrentRecordStreamNum(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

LiveClient::DescribeDeliverBandwidthListOutcome LiveClient::DescribeDeliverBandwidthList(const DescribeDeliverBandwidthListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeDeliverBandwidthList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeDeliverBandwidthListResponse rsp = DescribeDeliverBandwidthListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeDeliverBandwidthListOutcome(rsp);
        else
            return DescribeDeliverBandwidthListOutcome(o.GetError());
    }
    else
    {
        return DescribeDeliverBandwidthListOutcome(outcome.GetError());
    }
}

void LiveClient::DescribeDeliverBandwidthListAsync(const DescribeDeliverBandwidthListRequest& request, const DescribeDeliverBandwidthListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeDeliverBandwidthList(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

LiveClient::DescribeDeliverBandwidthListOutcomeCallable LiveClient::DescribeDeliverBandwidthListCallable(const DescribeDeliverBandwidthListRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeDeliverBandwidthListOutcome()>>(
        [this, request]()
        {
            return this->DescribeDeliverBandwidthList(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

LiveClient::DescribeDeliverLogDownListOutcome LiveClient::DescribeDeliverLogDownList(const DescribeDeliverLogDownListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeDeliverLogDownList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeDeliverLogDownListResponse rsp = DescribeDeliverLogDownListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeDeliverLogDownListOutcome(rsp);
        else
            return DescribeDeliverLogDownListOutcome(o.GetError());
    }
    else
    {
        return DescribeDeliverLogDownListOutcome(outcome.GetError());
    }
}

void LiveClient::DescribeDeliverLogDownListAsync(const DescribeDeliverLogDownListRequest& request, const DescribeDeliverLogDownListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeDeliverLogDownList(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

LiveClient::DescribeDeliverLogDownListOutcomeCallable LiveClient::DescribeDeliverLogDownListCallable(const DescribeDeliverLogDownListRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeDeliverLogDownListOutcome()>>(
        [this, request]()
        {
            return this->DescribeDeliverLogDownList(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

LiveClient::DescribeGroupProIspPlayInfoListOutcome LiveClient::DescribeGroupProIspPlayInfoList(const DescribeGroupProIspPlayInfoListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeGroupProIspPlayInfoList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeGroupProIspPlayInfoListResponse rsp = DescribeGroupProIspPlayInfoListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeGroupProIspPlayInfoListOutcome(rsp);
        else
            return DescribeGroupProIspPlayInfoListOutcome(o.GetError());
    }
    else
    {
        return DescribeGroupProIspPlayInfoListOutcome(outcome.GetError());
    }
}

void LiveClient::DescribeGroupProIspPlayInfoListAsync(const DescribeGroupProIspPlayInfoListRequest& request, const DescribeGroupProIspPlayInfoListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeGroupProIspPlayInfoList(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

LiveClient::DescribeGroupProIspPlayInfoListOutcomeCallable LiveClient::DescribeGroupProIspPlayInfoListCallable(const DescribeGroupProIspPlayInfoListRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeGroupProIspPlayInfoListOutcome()>>(
        [this, request]()
        {
            return this->DescribeGroupProIspPlayInfoList(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

LiveClient::DescribeHttpStatusInfoListOutcome LiveClient::DescribeHttpStatusInfoList(const DescribeHttpStatusInfoListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeHttpStatusInfoList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeHttpStatusInfoListResponse rsp = DescribeHttpStatusInfoListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeHttpStatusInfoListOutcome(rsp);
        else
            return DescribeHttpStatusInfoListOutcome(o.GetError());
    }
    else
    {
        return DescribeHttpStatusInfoListOutcome(outcome.GetError());
    }
}

void LiveClient::DescribeHttpStatusInfoListAsync(const DescribeHttpStatusInfoListRequest& request, const DescribeHttpStatusInfoListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeHttpStatusInfoList(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

LiveClient::DescribeHttpStatusInfoListOutcomeCallable LiveClient::DescribeHttpStatusInfoListCallable(const DescribeHttpStatusInfoListRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeHttpStatusInfoListOutcome()>>(
        [this, request]()
        {
            return this->DescribeHttpStatusInfoList(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

LiveClient::DescribeLiveCallbackRulesOutcome LiveClient::DescribeLiveCallbackRules(const DescribeLiveCallbackRulesRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeLiveCallbackRules");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeLiveCallbackRulesResponse rsp = DescribeLiveCallbackRulesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeLiveCallbackRulesOutcome(rsp);
        else
            return DescribeLiveCallbackRulesOutcome(o.GetError());
    }
    else
    {
        return DescribeLiveCallbackRulesOutcome(outcome.GetError());
    }
}

void LiveClient::DescribeLiveCallbackRulesAsync(const DescribeLiveCallbackRulesRequest& request, const DescribeLiveCallbackRulesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeLiveCallbackRules(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

LiveClient::DescribeLiveCallbackRulesOutcomeCallable LiveClient::DescribeLiveCallbackRulesCallable(const DescribeLiveCallbackRulesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeLiveCallbackRulesOutcome()>>(
        [this, request]()
        {
            return this->DescribeLiveCallbackRules(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

LiveClient::DescribeLiveCallbackTemplateOutcome LiveClient::DescribeLiveCallbackTemplate(const DescribeLiveCallbackTemplateRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeLiveCallbackTemplate");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeLiveCallbackTemplateResponse rsp = DescribeLiveCallbackTemplateResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeLiveCallbackTemplateOutcome(rsp);
        else
            return DescribeLiveCallbackTemplateOutcome(o.GetError());
    }
    else
    {
        return DescribeLiveCallbackTemplateOutcome(outcome.GetError());
    }
}

void LiveClient::DescribeLiveCallbackTemplateAsync(const DescribeLiveCallbackTemplateRequest& request, const DescribeLiveCallbackTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeLiveCallbackTemplate(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

LiveClient::DescribeLiveCallbackTemplateOutcomeCallable LiveClient::DescribeLiveCallbackTemplateCallable(const DescribeLiveCallbackTemplateRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeLiveCallbackTemplateOutcome()>>(
        [this, request]()
        {
            return this->DescribeLiveCallbackTemplate(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

LiveClient::DescribeLiveCallbackTemplatesOutcome LiveClient::DescribeLiveCallbackTemplates(const DescribeLiveCallbackTemplatesRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeLiveCallbackTemplates");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeLiveCallbackTemplatesResponse rsp = DescribeLiveCallbackTemplatesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeLiveCallbackTemplatesOutcome(rsp);
        else
            return DescribeLiveCallbackTemplatesOutcome(o.GetError());
    }
    else
    {
        return DescribeLiveCallbackTemplatesOutcome(outcome.GetError());
    }
}

void LiveClient::DescribeLiveCallbackTemplatesAsync(const DescribeLiveCallbackTemplatesRequest& request, const DescribeLiveCallbackTemplatesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeLiveCallbackTemplates(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

LiveClient::DescribeLiveCallbackTemplatesOutcomeCallable LiveClient::DescribeLiveCallbackTemplatesCallable(const DescribeLiveCallbackTemplatesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeLiveCallbackTemplatesOutcome()>>(
        [this, request]()
        {
            return this->DescribeLiveCallbackTemplates(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

LiveClient::DescribeLiveCertOutcome LiveClient::DescribeLiveCert(const DescribeLiveCertRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeLiveCert");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeLiveCertResponse rsp = DescribeLiveCertResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeLiveCertOutcome(rsp);
        else
            return DescribeLiveCertOutcome(o.GetError());
    }
    else
    {
        return DescribeLiveCertOutcome(outcome.GetError());
    }
}

void LiveClient::DescribeLiveCertAsync(const DescribeLiveCertRequest& request, const DescribeLiveCertAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeLiveCert(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

LiveClient::DescribeLiveCertOutcomeCallable LiveClient::DescribeLiveCertCallable(const DescribeLiveCertRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeLiveCertOutcome()>>(
        [this, request]()
        {
            return this->DescribeLiveCert(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

LiveClient::DescribeLiveCertsOutcome LiveClient::DescribeLiveCerts(const DescribeLiveCertsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeLiveCerts");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeLiveCertsResponse rsp = DescribeLiveCertsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeLiveCertsOutcome(rsp);
        else
            return DescribeLiveCertsOutcome(o.GetError());
    }
    else
    {
        return DescribeLiveCertsOutcome(outcome.GetError());
    }
}

void LiveClient::DescribeLiveCertsAsync(const DescribeLiveCertsRequest& request, const DescribeLiveCertsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeLiveCerts(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

LiveClient::DescribeLiveCertsOutcomeCallable LiveClient::DescribeLiveCertsCallable(const DescribeLiveCertsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeLiveCertsOutcome()>>(
        [this, request]()
        {
            return this->DescribeLiveCerts(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

LiveClient::DescribeLiveCloudEffectListOutcome LiveClient::DescribeLiveCloudEffectList(const DescribeLiveCloudEffectListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeLiveCloudEffectList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeLiveCloudEffectListResponse rsp = DescribeLiveCloudEffectListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeLiveCloudEffectListOutcome(rsp);
        else
            return DescribeLiveCloudEffectListOutcome(o.GetError());
    }
    else
    {
        return DescribeLiveCloudEffectListOutcome(outcome.GetError());
    }
}

void LiveClient::DescribeLiveCloudEffectListAsync(const DescribeLiveCloudEffectListRequest& request, const DescribeLiveCloudEffectListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeLiveCloudEffectList(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

LiveClient::DescribeLiveCloudEffectListOutcomeCallable LiveClient::DescribeLiveCloudEffectListCallable(const DescribeLiveCloudEffectListRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeLiveCloudEffectListOutcome()>>(
        [this, request]()
        {
            return this->DescribeLiveCloudEffectList(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

LiveClient::DescribeLiveDelayInfoListOutcome LiveClient::DescribeLiveDelayInfoList(const DescribeLiveDelayInfoListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeLiveDelayInfoList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeLiveDelayInfoListResponse rsp = DescribeLiveDelayInfoListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeLiveDelayInfoListOutcome(rsp);
        else
            return DescribeLiveDelayInfoListOutcome(o.GetError());
    }
    else
    {
        return DescribeLiveDelayInfoListOutcome(outcome.GetError());
    }
}

void LiveClient::DescribeLiveDelayInfoListAsync(const DescribeLiveDelayInfoListRequest& request, const DescribeLiveDelayInfoListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeLiveDelayInfoList(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

LiveClient::DescribeLiveDelayInfoListOutcomeCallable LiveClient::DescribeLiveDelayInfoListCallable(const DescribeLiveDelayInfoListRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeLiveDelayInfoListOutcome()>>(
        [this, request]()
        {
            return this->DescribeLiveDelayInfoList(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

LiveClient::DescribeLiveDomainOutcome LiveClient::DescribeLiveDomain(const DescribeLiveDomainRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeLiveDomain");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeLiveDomainResponse rsp = DescribeLiveDomainResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeLiveDomainOutcome(rsp);
        else
            return DescribeLiveDomainOutcome(o.GetError());
    }
    else
    {
        return DescribeLiveDomainOutcome(outcome.GetError());
    }
}

void LiveClient::DescribeLiveDomainAsync(const DescribeLiveDomainRequest& request, const DescribeLiveDomainAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeLiveDomain(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

LiveClient::DescribeLiveDomainOutcomeCallable LiveClient::DescribeLiveDomainCallable(const DescribeLiveDomainRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeLiveDomainOutcome()>>(
        [this, request]()
        {
            return this->DescribeLiveDomain(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

LiveClient::DescribeLiveDomainCertOutcome LiveClient::DescribeLiveDomainCert(const DescribeLiveDomainCertRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeLiveDomainCert");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeLiveDomainCertResponse rsp = DescribeLiveDomainCertResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeLiveDomainCertOutcome(rsp);
        else
            return DescribeLiveDomainCertOutcome(o.GetError());
    }
    else
    {
        return DescribeLiveDomainCertOutcome(outcome.GetError());
    }
}

void LiveClient::DescribeLiveDomainCertAsync(const DescribeLiveDomainCertRequest& request, const DescribeLiveDomainCertAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeLiveDomainCert(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

LiveClient::DescribeLiveDomainCertOutcomeCallable LiveClient::DescribeLiveDomainCertCallable(const DescribeLiveDomainCertRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeLiveDomainCertOutcome()>>(
        [this, request]()
        {
            return this->DescribeLiveDomainCert(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

LiveClient::DescribeLiveDomainCertBindingsOutcome LiveClient::DescribeLiveDomainCertBindings(const DescribeLiveDomainCertBindingsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeLiveDomainCertBindings");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeLiveDomainCertBindingsResponse rsp = DescribeLiveDomainCertBindingsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeLiveDomainCertBindingsOutcome(rsp);
        else
            return DescribeLiveDomainCertBindingsOutcome(o.GetError());
    }
    else
    {
        return DescribeLiveDomainCertBindingsOutcome(outcome.GetError());
    }
}

void LiveClient::DescribeLiveDomainCertBindingsAsync(const DescribeLiveDomainCertBindingsRequest& request, const DescribeLiveDomainCertBindingsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeLiveDomainCertBindings(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

LiveClient::DescribeLiveDomainCertBindingsOutcomeCallable LiveClient::DescribeLiveDomainCertBindingsCallable(const DescribeLiveDomainCertBindingsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeLiveDomainCertBindingsOutcome()>>(
        [this, request]()
        {
            return this->DescribeLiveDomainCertBindings(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

LiveClient::DescribeLiveDomainPlayInfoListOutcome LiveClient::DescribeLiveDomainPlayInfoList(const DescribeLiveDomainPlayInfoListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeLiveDomainPlayInfoList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeLiveDomainPlayInfoListResponse rsp = DescribeLiveDomainPlayInfoListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeLiveDomainPlayInfoListOutcome(rsp);
        else
            return DescribeLiveDomainPlayInfoListOutcome(o.GetError());
    }
    else
    {
        return DescribeLiveDomainPlayInfoListOutcome(outcome.GetError());
    }
}

void LiveClient::DescribeLiveDomainPlayInfoListAsync(const DescribeLiveDomainPlayInfoListRequest& request, const DescribeLiveDomainPlayInfoListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeLiveDomainPlayInfoList(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

LiveClient::DescribeLiveDomainPlayInfoListOutcomeCallable LiveClient::DescribeLiveDomainPlayInfoListCallable(const DescribeLiveDomainPlayInfoListRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeLiveDomainPlayInfoListOutcome()>>(
        [this, request]()
        {
            return this->DescribeLiveDomainPlayInfoList(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

LiveClient::DescribeLiveDomainRefererOutcome LiveClient::DescribeLiveDomainReferer(const DescribeLiveDomainRefererRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeLiveDomainReferer");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeLiveDomainRefererResponse rsp = DescribeLiveDomainRefererResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeLiveDomainRefererOutcome(rsp);
        else
            return DescribeLiveDomainRefererOutcome(o.GetError());
    }
    else
    {
        return DescribeLiveDomainRefererOutcome(outcome.GetError());
    }
}

void LiveClient::DescribeLiveDomainRefererAsync(const DescribeLiveDomainRefererRequest& request, const DescribeLiveDomainRefererAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeLiveDomainReferer(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

LiveClient::DescribeLiveDomainRefererOutcomeCallable LiveClient::DescribeLiveDomainRefererCallable(const DescribeLiveDomainRefererRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeLiveDomainRefererOutcome()>>(
        [this, request]()
        {
            return this->DescribeLiveDomainReferer(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

LiveClient::DescribeLiveDomainsOutcome LiveClient::DescribeLiveDomains(const DescribeLiveDomainsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeLiveDomains");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeLiveDomainsResponse rsp = DescribeLiveDomainsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeLiveDomainsOutcome(rsp);
        else
            return DescribeLiveDomainsOutcome(o.GetError());
    }
    else
    {
        return DescribeLiveDomainsOutcome(outcome.GetError());
    }
}

void LiveClient::DescribeLiveDomainsAsync(const DescribeLiveDomainsRequest& request, const DescribeLiveDomainsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeLiveDomains(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

LiveClient::DescribeLiveDomainsOutcomeCallable LiveClient::DescribeLiveDomainsCallable(const DescribeLiveDomainsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeLiveDomainsOutcome()>>(
        [this, request]()
        {
            return this->DescribeLiveDomains(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

LiveClient::DescribeLiveEnhanceInfoListOutcome LiveClient::DescribeLiveEnhanceInfoList(const DescribeLiveEnhanceInfoListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeLiveEnhanceInfoList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeLiveEnhanceInfoListResponse rsp = DescribeLiveEnhanceInfoListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeLiveEnhanceInfoListOutcome(rsp);
        else
            return DescribeLiveEnhanceInfoListOutcome(o.GetError());
    }
    else
    {
        return DescribeLiveEnhanceInfoListOutcome(outcome.GetError());
    }
}

void LiveClient::DescribeLiveEnhanceInfoListAsync(const DescribeLiveEnhanceInfoListRequest& request, const DescribeLiveEnhanceInfoListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeLiveEnhanceInfoList(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

LiveClient::DescribeLiveEnhanceInfoListOutcomeCallable LiveClient::DescribeLiveEnhanceInfoListCallable(const DescribeLiveEnhanceInfoListRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeLiveEnhanceInfoListOutcome()>>(
        [this, request]()
        {
            return this->DescribeLiveEnhanceInfoList(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

LiveClient::DescribeLiveForbidStreamListOutcome LiveClient::DescribeLiveForbidStreamList(const DescribeLiveForbidStreamListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeLiveForbidStreamList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeLiveForbidStreamListResponse rsp = DescribeLiveForbidStreamListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeLiveForbidStreamListOutcome(rsp);
        else
            return DescribeLiveForbidStreamListOutcome(o.GetError());
    }
    else
    {
        return DescribeLiveForbidStreamListOutcome(outcome.GetError());
    }
}

void LiveClient::DescribeLiveForbidStreamListAsync(const DescribeLiveForbidStreamListRequest& request, const DescribeLiveForbidStreamListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeLiveForbidStreamList(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

LiveClient::DescribeLiveForbidStreamListOutcomeCallable LiveClient::DescribeLiveForbidStreamListCallable(const DescribeLiveForbidStreamListRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeLiveForbidStreamListOutcome()>>(
        [this, request]()
        {
            return this->DescribeLiveForbidStreamList(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

LiveClient::DescribeLivePackageInfoOutcome LiveClient::DescribeLivePackageInfo(const DescribeLivePackageInfoRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeLivePackageInfo");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeLivePackageInfoResponse rsp = DescribeLivePackageInfoResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeLivePackageInfoOutcome(rsp);
        else
            return DescribeLivePackageInfoOutcome(o.GetError());
    }
    else
    {
        return DescribeLivePackageInfoOutcome(outcome.GetError());
    }
}

void LiveClient::DescribeLivePackageInfoAsync(const DescribeLivePackageInfoRequest& request, const DescribeLivePackageInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeLivePackageInfo(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

LiveClient::DescribeLivePackageInfoOutcomeCallable LiveClient::DescribeLivePackageInfoCallable(const DescribeLivePackageInfoRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeLivePackageInfoOutcome()>>(
        [this, request]()
        {
            return this->DescribeLivePackageInfo(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

LiveClient::DescribeLivePadRulesOutcome LiveClient::DescribeLivePadRules(const DescribeLivePadRulesRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeLivePadRules");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeLivePadRulesResponse rsp = DescribeLivePadRulesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeLivePadRulesOutcome(rsp);
        else
            return DescribeLivePadRulesOutcome(o.GetError());
    }
    else
    {
        return DescribeLivePadRulesOutcome(outcome.GetError());
    }
}

void LiveClient::DescribeLivePadRulesAsync(const DescribeLivePadRulesRequest& request, const DescribeLivePadRulesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeLivePadRules(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

LiveClient::DescribeLivePadRulesOutcomeCallable LiveClient::DescribeLivePadRulesCallable(const DescribeLivePadRulesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeLivePadRulesOutcome()>>(
        [this, request]()
        {
            return this->DescribeLivePadRules(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

LiveClient::DescribeLivePadStreamListOutcome LiveClient::DescribeLivePadStreamList(const DescribeLivePadStreamListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeLivePadStreamList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeLivePadStreamListResponse rsp = DescribeLivePadStreamListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeLivePadStreamListOutcome(rsp);
        else
            return DescribeLivePadStreamListOutcome(o.GetError());
    }
    else
    {
        return DescribeLivePadStreamListOutcome(outcome.GetError());
    }
}

void LiveClient::DescribeLivePadStreamListAsync(const DescribeLivePadStreamListRequest& request, const DescribeLivePadStreamListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeLivePadStreamList(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

LiveClient::DescribeLivePadStreamListOutcomeCallable LiveClient::DescribeLivePadStreamListCallable(const DescribeLivePadStreamListRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeLivePadStreamListOutcome()>>(
        [this, request]()
        {
            return this->DescribeLivePadStreamList(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

LiveClient::DescribeLivePadTemplateOutcome LiveClient::DescribeLivePadTemplate(const DescribeLivePadTemplateRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeLivePadTemplate");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeLivePadTemplateResponse rsp = DescribeLivePadTemplateResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeLivePadTemplateOutcome(rsp);
        else
            return DescribeLivePadTemplateOutcome(o.GetError());
    }
    else
    {
        return DescribeLivePadTemplateOutcome(outcome.GetError());
    }
}

void LiveClient::DescribeLivePadTemplateAsync(const DescribeLivePadTemplateRequest& request, const DescribeLivePadTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeLivePadTemplate(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

LiveClient::DescribeLivePadTemplateOutcomeCallable LiveClient::DescribeLivePadTemplateCallable(const DescribeLivePadTemplateRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeLivePadTemplateOutcome()>>(
        [this, request]()
        {
            return this->DescribeLivePadTemplate(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

LiveClient::DescribeLivePadTemplatesOutcome LiveClient::DescribeLivePadTemplates(const DescribeLivePadTemplatesRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeLivePadTemplates");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeLivePadTemplatesResponse rsp = DescribeLivePadTemplatesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeLivePadTemplatesOutcome(rsp);
        else
            return DescribeLivePadTemplatesOutcome(o.GetError());
    }
    else
    {
        return DescribeLivePadTemplatesOutcome(outcome.GetError());
    }
}

void LiveClient::DescribeLivePadTemplatesAsync(const DescribeLivePadTemplatesRequest& request, const DescribeLivePadTemplatesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeLivePadTemplates(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

LiveClient::DescribeLivePadTemplatesOutcomeCallable LiveClient::DescribeLivePadTemplatesCallable(const DescribeLivePadTemplatesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeLivePadTemplatesOutcome()>>(
        [this, request]()
        {
            return this->DescribeLivePadTemplates(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

LiveClient::DescribeLivePlayAuthKeyOutcome LiveClient::DescribeLivePlayAuthKey(const DescribeLivePlayAuthKeyRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeLivePlayAuthKey");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeLivePlayAuthKeyResponse rsp = DescribeLivePlayAuthKeyResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeLivePlayAuthKeyOutcome(rsp);
        else
            return DescribeLivePlayAuthKeyOutcome(o.GetError());
    }
    else
    {
        return DescribeLivePlayAuthKeyOutcome(outcome.GetError());
    }
}

void LiveClient::DescribeLivePlayAuthKeyAsync(const DescribeLivePlayAuthKeyRequest& request, const DescribeLivePlayAuthKeyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeLivePlayAuthKey(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

LiveClient::DescribeLivePlayAuthKeyOutcomeCallable LiveClient::DescribeLivePlayAuthKeyCallable(const DescribeLivePlayAuthKeyRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeLivePlayAuthKeyOutcome()>>(
        [this, request]()
        {
            return this->DescribeLivePlayAuthKey(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

LiveClient::DescribeLivePullStreamTaskStatusOutcome LiveClient::DescribeLivePullStreamTaskStatus(const DescribeLivePullStreamTaskStatusRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeLivePullStreamTaskStatus");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeLivePullStreamTaskStatusResponse rsp = DescribeLivePullStreamTaskStatusResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeLivePullStreamTaskStatusOutcome(rsp);
        else
            return DescribeLivePullStreamTaskStatusOutcome(o.GetError());
    }
    else
    {
        return DescribeLivePullStreamTaskStatusOutcome(outcome.GetError());
    }
}

void LiveClient::DescribeLivePullStreamTaskStatusAsync(const DescribeLivePullStreamTaskStatusRequest& request, const DescribeLivePullStreamTaskStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeLivePullStreamTaskStatus(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

LiveClient::DescribeLivePullStreamTaskStatusOutcomeCallable LiveClient::DescribeLivePullStreamTaskStatusCallable(const DescribeLivePullStreamTaskStatusRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeLivePullStreamTaskStatusOutcome()>>(
        [this, request]()
        {
            return this->DescribeLivePullStreamTaskStatus(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

LiveClient::DescribeLivePullStreamTasksOutcome LiveClient::DescribeLivePullStreamTasks(const DescribeLivePullStreamTasksRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeLivePullStreamTasks");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeLivePullStreamTasksResponse rsp = DescribeLivePullStreamTasksResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeLivePullStreamTasksOutcome(rsp);
        else
            return DescribeLivePullStreamTasksOutcome(o.GetError());
    }
    else
    {
        return DescribeLivePullStreamTasksOutcome(outcome.GetError());
    }
}

void LiveClient::DescribeLivePullStreamTasksAsync(const DescribeLivePullStreamTasksRequest& request, const DescribeLivePullStreamTasksAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeLivePullStreamTasks(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

LiveClient::DescribeLivePullStreamTasksOutcomeCallable LiveClient::DescribeLivePullStreamTasksCallable(const DescribeLivePullStreamTasksRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeLivePullStreamTasksOutcome()>>(
        [this, request]()
        {
            return this->DescribeLivePullStreamTasks(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

LiveClient::DescribeLivePushAuthKeyOutcome LiveClient::DescribeLivePushAuthKey(const DescribeLivePushAuthKeyRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeLivePushAuthKey");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeLivePushAuthKeyResponse rsp = DescribeLivePushAuthKeyResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeLivePushAuthKeyOutcome(rsp);
        else
            return DescribeLivePushAuthKeyOutcome(o.GetError());
    }
    else
    {
        return DescribeLivePushAuthKeyOutcome(outcome.GetError());
    }
}

void LiveClient::DescribeLivePushAuthKeyAsync(const DescribeLivePushAuthKeyRequest& request, const DescribeLivePushAuthKeyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeLivePushAuthKey(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

LiveClient::DescribeLivePushAuthKeyOutcomeCallable LiveClient::DescribeLivePushAuthKeyCallable(const DescribeLivePushAuthKeyRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeLivePushAuthKeyOutcome()>>(
        [this, request]()
        {
            return this->DescribeLivePushAuthKey(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

LiveClient::DescribeLiveRecordRulesOutcome LiveClient::DescribeLiveRecordRules(const DescribeLiveRecordRulesRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeLiveRecordRules");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeLiveRecordRulesResponse rsp = DescribeLiveRecordRulesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeLiveRecordRulesOutcome(rsp);
        else
            return DescribeLiveRecordRulesOutcome(o.GetError());
    }
    else
    {
        return DescribeLiveRecordRulesOutcome(outcome.GetError());
    }
}

void LiveClient::DescribeLiveRecordRulesAsync(const DescribeLiveRecordRulesRequest& request, const DescribeLiveRecordRulesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeLiveRecordRules(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

LiveClient::DescribeLiveRecordRulesOutcomeCallable LiveClient::DescribeLiveRecordRulesCallable(const DescribeLiveRecordRulesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeLiveRecordRulesOutcome()>>(
        [this, request]()
        {
            return this->DescribeLiveRecordRules(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

LiveClient::DescribeLiveRecordTemplateOutcome LiveClient::DescribeLiveRecordTemplate(const DescribeLiveRecordTemplateRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeLiveRecordTemplate");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeLiveRecordTemplateResponse rsp = DescribeLiveRecordTemplateResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeLiveRecordTemplateOutcome(rsp);
        else
            return DescribeLiveRecordTemplateOutcome(o.GetError());
    }
    else
    {
        return DescribeLiveRecordTemplateOutcome(outcome.GetError());
    }
}

void LiveClient::DescribeLiveRecordTemplateAsync(const DescribeLiveRecordTemplateRequest& request, const DescribeLiveRecordTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeLiveRecordTemplate(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

LiveClient::DescribeLiveRecordTemplateOutcomeCallable LiveClient::DescribeLiveRecordTemplateCallable(const DescribeLiveRecordTemplateRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeLiveRecordTemplateOutcome()>>(
        [this, request]()
        {
            return this->DescribeLiveRecordTemplate(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

LiveClient::DescribeLiveRecordTemplatesOutcome LiveClient::DescribeLiveRecordTemplates(const DescribeLiveRecordTemplatesRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeLiveRecordTemplates");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeLiveRecordTemplatesResponse rsp = DescribeLiveRecordTemplatesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeLiveRecordTemplatesOutcome(rsp);
        else
            return DescribeLiveRecordTemplatesOutcome(o.GetError());
    }
    else
    {
        return DescribeLiveRecordTemplatesOutcome(outcome.GetError());
    }
}

void LiveClient::DescribeLiveRecordTemplatesAsync(const DescribeLiveRecordTemplatesRequest& request, const DescribeLiveRecordTemplatesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeLiveRecordTemplates(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

LiveClient::DescribeLiveRecordTemplatesOutcomeCallable LiveClient::DescribeLiveRecordTemplatesCallable(const DescribeLiveRecordTemplatesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeLiveRecordTemplatesOutcome()>>(
        [this, request]()
        {
            return this->DescribeLiveRecordTemplates(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

LiveClient::DescribeLiveSnapshotRulesOutcome LiveClient::DescribeLiveSnapshotRules(const DescribeLiveSnapshotRulesRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeLiveSnapshotRules");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeLiveSnapshotRulesResponse rsp = DescribeLiveSnapshotRulesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeLiveSnapshotRulesOutcome(rsp);
        else
            return DescribeLiveSnapshotRulesOutcome(o.GetError());
    }
    else
    {
        return DescribeLiveSnapshotRulesOutcome(outcome.GetError());
    }
}

void LiveClient::DescribeLiveSnapshotRulesAsync(const DescribeLiveSnapshotRulesRequest& request, const DescribeLiveSnapshotRulesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeLiveSnapshotRules(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

LiveClient::DescribeLiveSnapshotRulesOutcomeCallable LiveClient::DescribeLiveSnapshotRulesCallable(const DescribeLiveSnapshotRulesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeLiveSnapshotRulesOutcome()>>(
        [this, request]()
        {
            return this->DescribeLiveSnapshotRules(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

LiveClient::DescribeLiveSnapshotTemplateOutcome LiveClient::DescribeLiveSnapshotTemplate(const DescribeLiveSnapshotTemplateRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeLiveSnapshotTemplate");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeLiveSnapshotTemplateResponse rsp = DescribeLiveSnapshotTemplateResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeLiveSnapshotTemplateOutcome(rsp);
        else
            return DescribeLiveSnapshotTemplateOutcome(o.GetError());
    }
    else
    {
        return DescribeLiveSnapshotTemplateOutcome(outcome.GetError());
    }
}

void LiveClient::DescribeLiveSnapshotTemplateAsync(const DescribeLiveSnapshotTemplateRequest& request, const DescribeLiveSnapshotTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeLiveSnapshotTemplate(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

LiveClient::DescribeLiveSnapshotTemplateOutcomeCallable LiveClient::DescribeLiveSnapshotTemplateCallable(const DescribeLiveSnapshotTemplateRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeLiveSnapshotTemplateOutcome()>>(
        [this, request]()
        {
            return this->DescribeLiveSnapshotTemplate(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

LiveClient::DescribeLiveSnapshotTemplatesOutcome LiveClient::DescribeLiveSnapshotTemplates(const DescribeLiveSnapshotTemplatesRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeLiveSnapshotTemplates");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeLiveSnapshotTemplatesResponse rsp = DescribeLiveSnapshotTemplatesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeLiveSnapshotTemplatesOutcome(rsp);
        else
            return DescribeLiveSnapshotTemplatesOutcome(o.GetError());
    }
    else
    {
        return DescribeLiveSnapshotTemplatesOutcome(outcome.GetError());
    }
}

void LiveClient::DescribeLiveSnapshotTemplatesAsync(const DescribeLiveSnapshotTemplatesRequest& request, const DescribeLiveSnapshotTemplatesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeLiveSnapshotTemplates(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

LiveClient::DescribeLiveSnapshotTemplatesOutcomeCallable LiveClient::DescribeLiveSnapshotTemplatesCallable(const DescribeLiveSnapshotTemplatesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeLiveSnapshotTemplatesOutcome()>>(
        [this, request]()
        {
            return this->DescribeLiveSnapshotTemplates(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

LiveClient::DescribeLiveStreamEventListOutcome LiveClient::DescribeLiveStreamEventList(const DescribeLiveStreamEventListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeLiveStreamEventList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeLiveStreamEventListResponse rsp = DescribeLiveStreamEventListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeLiveStreamEventListOutcome(rsp);
        else
            return DescribeLiveStreamEventListOutcome(o.GetError());
    }
    else
    {
        return DescribeLiveStreamEventListOutcome(outcome.GetError());
    }
}

void LiveClient::DescribeLiveStreamEventListAsync(const DescribeLiveStreamEventListRequest& request, const DescribeLiveStreamEventListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeLiveStreamEventList(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

LiveClient::DescribeLiveStreamEventListOutcomeCallable LiveClient::DescribeLiveStreamEventListCallable(const DescribeLiveStreamEventListRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeLiveStreamEventListOutcome()>>(
        [this, request]()
        {
            return this->DescribeLiveStreamEventList(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

LiveClient::DescribeLiveStreamMonitorOutcome LiveClient::DescribeLiveStreamMonitor(const DescribeLiveStreamMonitorRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeLiveStreamMonitor");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeLiveStreamMonitorResponse rsp = DescribeLiveStreamMonitorResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeLiveStreamMonitorOutcome(rsp);
        else
            return DescribeLiveStreamMonitorOutcome(o.GetError());
    }
    else
    {
        return DescribeLiveStreamMonitorOutcome(outcome.GetError());
    }
}

void LiveClient::DescribeLiveStreamMonitorAsync(const DescribeLiveStreamMonitorRequest& request, const DescribeLiveStreamMonitorAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeLiveStreamMonitor(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

LiveClient::DescribeLiveStreamMonitorOutcomeCallable LiveClient::DescribeLiveStreamMonitorCallable(const DescribeLiveStreamMonitorRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeLiveStreamMonitorOutcome()>>(
        [this, request]()
        {
            return this->DescribeLiveStreamMonitor(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

LiveClient::DescribeLiveStreamMonitorListOutcome LiveClient::DescribeLiveStreamMonitorList(const DescribeLiveStreamMonitorListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeLiveStreamMonitorList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeLiveStreamMonitorListResponse rsp = DescribeLiveStreamMonitorListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeLiveStreamMonitorListOutcome(rsp);
        else
            return DescribeLiveStreamMonitorListOutcome(o.GetError());
    }
    else
    {
        return DescribeLiveStreamMonitorListOutcome(outcome.GetError());
    }
}

void LiveClient::DescribeLiveStreamMonitorListAsync(const DescribeLiveStreamMonitorListRequest& request, const DescribeLiveStreamMonitorListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeLiveStreamMonitorList(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

LiveClient::DescribeLiveStreamMonitorListOutcomeCallable LiveClient::DescribeLiveStreamMonitorListCallable(const DescribeLiveStreamMonitorListRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeLiveStreamMonitorListOutcome()>>(
        [this, request]()
        {
            return this->DescribeLiveStreamMonitorList(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

LiveClient::DescribeLiveStreamOnlineListOutcome LiveClient::DescribeLiveStreamOnlineList(const DescribeLiveStreamOnlineListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeLiveStreamOnlineList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeLiveStreamOnlineListResponse rsp = DescribeLiveStreamOnlineListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeLiveStreamOnlineListOutcome(rsp);
        else
            return DescribeLiveStreamOnlineListOutcome(o.GetError());
    }
    else
    {
        return DescribeLiveStreamOnlineListOutcome(outcome.GetError());
    }
}

void LiveClient::DescribeLiveStreamOnlineListAsync(const DescribeLiveStreamOnlineListRequest& request, const DescribeLiveStreamOnlineListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeLiveStreamOnlineList(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

LiveClient::DescribeLiveStreamOnlineListOutcomeCallable LiveClient::DescribeLiveStreamOnlineListCallable(const DescribeLiveStreamOnlineListRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeLiveStreamOnlineListOutcome()>>(
        [this, request]()
        {
            return this->DescribeLiveStreamOnlineList(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

LiveClient::DescribeLiveStreamPublishedListOutcome LiveClient::DescribeLiveStreamPublishedList(const DescribeLiveStreamPublishedListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeLiveStreamPublishedList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeLiveStreamPublishedListResponse rsp = DescribeLiveStreamPublishedListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeLiveStreamPublishedListOutcome(rsp);
        else
            return DescribeLiveStreamPublishedListOutcome(o.GetError());
    }
    else
    {
        return DescribeLiveStreamPublishedListOutcome(outcome.GetError());
    }
}

void LiveClient::DescribeLiveStreamPublishedListAsync(const DescribeLiveStreamPublishedListRequest& request, const DescribeLiveStreamPublishedListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeLiveStreamPublishedList(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

LiveClient::DescribeLiveStreamPublishedListOutcomeCallable LiveClient::DescribeLiveStreamPublishedListCallable(const DescribeLiveStreamPublishedListRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeLiveStreamPublishedListOutcome()>>(
        [this, request]()
        {
            return this->DescribeLiveStreamPublishedList(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

LiveClient::DescribeLiveStreamPushInfoListOutcome LiveClient::DescribeLiveStreamPushInfoList(const DescribeLiveStreamPushInfoListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeLiveStreamPushInfoList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeLiveStreamPushInfoListResponse rsp = DescribeLiveStreamPushInfoListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeLiveStreamPushInfoListOutcome(rsp);
        else
            return DescribeLiveStreamPushInfoListOutcome(o.GetError());
    }
    else
    {
        return DescribeLiveStreamPushInfoListOutcome(outcome.GetError());
    }
}

void LiveClient::DescribeLiveStreamPushInfoListAsync(const DescribeLiveStreamPushInfoListRequest& request, const DescribeLiveStreamPushInfoListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeLiveStreamPushInfoList(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

LiveClient::DescribeLiveStreamPushInfoListOutcomeCallable LiveClient::DescribeLiveStreamPushInfoListCallable(const DescribeLiveStreamPushInfoListRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeLiveStreamPushInfoListOutcome()>>(
        [this, request]()
        {
            return this->DescribeLiveStreamPushInfoList(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

LiveClient::DescribeLiveStreamStateOutcome LiveClient::DescribeLiveStreamState(const DescribeLiveStreamStateRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeLiveStreamState");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeLiveStreamStateResponse rsp = DescribeLiveStreamStateResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeLiveStreamStateOutcome(rsp);
        else
            return DescribeLiveStreamStateOutcome(o.GetError());
    }
    else
    {
        return DescribeLiveStreamStateOutcome(outcome.GetError());
    }
}

void LiveClient::DescribeLiveStreamStateAsync(const DescribeLiveStreamStateRequest& request, const DescribeLiveStreamStateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeLiveStreamState(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

LiveClient::DescribeLiveStreamStateOutcomeCallable LiveClient::DescribeLiveStreamStateCallable(const DescribeLiveStreamStateRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeLiveStreamStateOutcome()>>(
        [this, request]()
        {
            return this->DescribeLiveStreamState(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

LiveClient::DescribeLiveTimeShiftBillInfoListOutcome LiveClient::DescribeLiveTimeShiftBillInfoList(const DescribeLiveTimeShiftBillInfoListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeLiveTimeShiftBillInfoList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeLiveTimeShiftBillInfoListResponse rsp = DescribeLiveTimeShiftBillInfoListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeLiveTimeShiftBillInfoListOutcome(rsp);
        else
            return DescribeLiveTimeShiftBillInfoListOutcome(o.GetError());
    }
    else
    {
        return DescribeLiveTimeShiftBillInfoListOutcome(outcome.GetError());
    }
}

void LiveClient::DescribeLiveTimeShiftBillInfoListAsync(const DescribeLiveTimeShiftBillInfoListRequest& request, const DescribeLiveTimeShiftBillInfoListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeLiveTimeShiftBillInfoList(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

LiveClient::DescribeLiveTimeShiftBillInfoListOutcomeCallable LiveClient::DescribeLiveTimeShiftBillInfoListCallable(const DescribeLiveTimeShiftBillInfoListRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeLiveTimeShiftBillInfoListOutcome()>>(
        [this, request]()
        {
            return this->DescribeLiveTimeShiftBillInfoList(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

LiveClient::DescribeLiveTimeShiftRulesOutcome LiveClient::DescribeLiveTimeShiftRules(const DescribeLiveTimeShiftRulesRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeLiveTimeShiftRules");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeLiveTimeShiftRulesResponse rsp = DescribeLiveTimeShiftRulesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeLiveTimeShiftRulesOutcome(rsp);
        else
            return DescribeLiveTimeShiftRulesOutcome(o.GetError());
    }
    else
    {
        return DescribeLiveTimeShiftRulesOutcome(outcome.GetError());
    }
}

void LiveClient::DescribeLiveTimeShiftRulesAsync(const DescribeLiveTimeShiftRulesRequest& request, const DescribeLiveTimeShiftRulesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeLiveTimeShiftRules(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

LiveClient::DescribeLiveTimeShiftRulesOutcomeCallable LiveClient::DescribeLiveTimeShiftRulesCallable(const DescribeLiveTimeShiftRulesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeLiveTimeShiftRulesOutcome()>>(
        [this, request]()
        {
            return this->DescribeLiveTimeShiftRules(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

LiveClient::DescribeLiveTimeShiftTemplatesOutcome LiveClient::DescribeLiveTimeShiftTemplates(const DescribeLiveTimeShiftTemplatesRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeLiveTimeShiftTemplates");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeLiveTimeShiftTemplatesResponse rsp = DescribeLiveTimeShiftTemplatesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeLiveTimeShiftTemplatesOutcome(rsp);
        else
            return DescribeLiveTimeShiftTemplatesOutcome(o.GetError());
    }
    else
    {
        return DescribeLiveTimeShiftTemplatesOutcome(outcome.GetError());
    }
}

void LiveClient::DescribeLiveTimeShiftTemplatesAsync(const DescribeLiveTimeShiftTemplatesRequest& request, const DescribeLiveTimeShiftTemplatesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeLiveTimeShiftTemplates(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

LiveClient::DescribeLiveTimeShiftTemplatesOutcomeCallable LiveClient::DescribeLiveTimeShiftTemplatesCallable(const DescribeLiveTimeShiftTemplatesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeLiveTimeShiftTemplatesOutcome()>>(
        [this, request]()
        {
            return this->DescribeLiveTimeShiftTemplates(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

LiveClient::DescribeLiveTimeShiftWriteSizeInfoListOutcome LiveClient::DescribeLiveTimeShiftWriteSizeInfoList(const DescribeLiveTimeShiftWriteSizeInfoListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeLiveTimeShiftWriteSizeInfoList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeLiveTimeShiftWriteSizeInfoListResponse rsp = DescribeLiveTimeShiftWriteSizeInfoListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeLiveTimeShiftWriteSizeInfoListOutcome(rsp);
        else
            return DescribeLiveTimeShiftWriteSizeInfoListOutcome(o.GetError());
    }
    else
    {
        return DescribeLiveTimeShiftWriteSizeInfoListOutcome(outcome.GetError());
    }
}

void LiveClient::DescribeLiveTimeShiftWriteSizeInfoListAsync(const DescribeLiveTimeShiftWriteSizeInfoListRequest& request, const DescribeLiveTimeShiftWriteSizeInfoListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeLiveTimeShiftWriteSizeInfoList(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

LiveClient::DescribeLiveTimeShiftWriteSizeInfoListOutcomeCallable LiveClient::DescribeLiveTimeShiftWriteSizeInfoListCallable(const DescribeLiveTimeShiftWriteSizeInfoListRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeLiveTimeShiftWriteSizeInfoListOutcome()>>(
        [this, request]()
        {
            return this->DescribeLiveTimeShiftWriteSizeInfoList(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

LiveClient::DescribeLiveTranscodeDetailInfoOutcome LiveClient::DescribeLiveTranscodeDetailInfo(const DescribeLiveTranscodeDetailInfoRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeLiveTranscodeDetailInfo");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeLiveTranscodeDetailInfoResponse rsp = DescribeLiveTranscodeDetailInfoResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeLiveTranscodeDetailInfoOutcome(rsp);
        else
            return DescribeLiveTranscodeDetailInfoOutcome(o.GetError());
    }
    else
    {
        return DescribeLiveTranscodeDetailInfoOutcome(outcome.GetError());
    }
}

void LiveClient::DescribeLiveTranscodeDetailInfoAsync(const DescribeLiveTranscodeDetailInfoRequest& request, const DescribeLiveTranscodeDetailInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeLiveTranscodeDetailInfo(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

LiveClient::DescribeLiveTranscodeDetailInfoOutcomeCallable LiveClient::DescribeLiveTranscodeDetailInfoCallable(const DescribeLiveTranscodeDetailInfoRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeLiveTranscodeDetailInfoOutcome()>>(
        [this, request]()
        {
            return this->DescribeLiveTranscodeDetailInfo(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

LiveClient::DescribeLiveTranscodeRulesOutcome LiveClient::DescribeLiveTranscodeRules(const DescribeLiveTranscodeRulesRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeLiveTranscodeRules");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeLiveTranscodeRulesResponse rsp = DescribeLiveTranscodeRulesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeLiveTranscodeRulesOutcome(rsp);
        else
            return DescribeLiveTranscodeRulesOutcome(o.GetError());
    }
    else
    {
        return DescribeLiveTranscodeRulesOutcome(outcome.GetError());
    }
}

void LiveClient::DescribeLiveTranscodeRulesAsync(const DescribeLiveTranscodeRulesRequest& request, const DescribeLiveTranscodeRulesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeLiveTranscodeRules(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

LiveClient::DescribeLiveTranscodeRulesOutcomeCallable LiveClient::DescribeLiveTranscodeRulesCallable(const DescribeLiveTranscodeRulesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeLiveTranscodeRulesOutcome()>>(
        [this, request]()
        {
            return this->DescribeLiveTranscodeRules(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

LiveClient::DescribeLiveTranscodeTemplateOutcome LiveClient::DescribeLiveTranscodeTemplate(const DescribeLiveTranscodeTemplateRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeLiveTranscodeTemplate");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeLiveTranscodeTemplateResponse rsp = DescribeLiveTranscodeTemplateResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeLiveTranscodeTemplateOutcome(rsp);
        else
            return DescribeLiveTranscodeTemplateOutcome(o.GetError());
    }
    else
    {
        return DescribeLiveTranscodeTemplateOutcome(outcome.GetError());
    }
}

void LiveClient::DescribeLiveTranscodeTemplateAsync(const DescribeLiveTranscodeTemplateRequest& request, const DescribeLiveTranscodeTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeLiveTranscodeTemplate(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

LiveClient::DescribeLiveTranscodeTemplateOutcomeCallable LiveClient::DescribeLiveTranscodeTemplateCallable(const DescribeLiveTranscodeTemplateRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeLiveTranscodeTemplateOutcome()>>(
        [this, request]()
        {
            return this->DescribeLiveTranscodeTemplate(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

LiveClient::DescribeLiveTranscodeTemplatesOutcome LiveClient::DescribeLiveTranscodeTemplates(const DescribeLiveTranscodeTemplatesRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeLiveTranscodeTemplates");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeLiveTranscodeTemplatesResponse rsp = DescribeLiveTranscodeTemplatesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeLiveTranscodeTemplatesOutcome(rsp);
        else
            return DescribeLiveTranscodeTemplatesOutcome(o.GetError());
    }
    else
    {
        return DescribeLiveTranscodeTemplatesOutcome(outcome.GetError());
    }
}

void LiveClient::DescribeLiveTranscodeTemplatesAsync(const DescribeLiveTranscodeTemplatesRequest& request, const DescribeLiveTranscodeTemplatesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeLiveTranscodeTemplates(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

LiveClient::DescribeLiveTranscodeTemplatesOutcomeCallable LiveClient::DescribeLiveTranscodeTemplatesCallable(const DescribeLiveTranscodeTemplatesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeLiveTranscodeTemplatesOutcome()>>(
        [this, request]()
        {
            return this->DescribeLiveTranscodeTemplates(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

LiveClient::DescribeLiveTranscodeTotalInfoOutcome LiveClient::DescribeLiveTranscodeTotalInfo(const DescribeLiveTranscodeTotalInfoRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeLiveTranscodeTotalInfo");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeLiveTranscodeTotalInfoResponse rsp = DescribeLiveTranscodeTotalInfoResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeLiveTranscodeTotalInfoOutcome(rsp);
        else
            return DescribeLiveTranscodeTotalInfoOutcome(o.GetError());
    }
    else
    {
        return DescribeLiveTranscodeTotalInfoOutcome(outcome.GetError());
    }
}

void LiveClient::DescribeLiveTranscodeTotalInfoAsync(const DescribeLiveTranscodeTotalInfoRequest& request, const DescribeLiveTranscodeTotalInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeLiveTranscodeTotalInfo(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

LiveClient::DescribeLiveTranscodeTotalInfoOutcomeCallable LiveClient::DescribeLiveTranscodeTotalInfoCallable(const DescribeLiveTranscodeTotalInfoRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeLiveTranscodeTotalInfoOutcome()>>(
        [this, request]()
        {
            return this->DescribeLiveTranscodeTotalInfo(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

LiveClient::DescribeLiveWatermarkOutcome LiveClient::DescribeLiveWatermark(const DescribeLiveWatermarkRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeLiveWatermark");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeLiveWatermarkResponse rsp = DescribeLiveWatermarkResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeLiveWatermarkOutcome(rsp);
        else
            return DescribeLiveWatermarkOutcome(o.GetError());
    }
    else
    {
        return DescribeLiveWatermarkOutcome(outcome.GetError());
    }
}

void LiveClient::DescribeLiveWatermarkAsync(const DescribeLiveWatermarkRequest& request, const DescribeLiveWatermarkAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeLiveWatermark(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

LiveClient::DescribeLiveWatermarkOutcomeCallable LiveClient::DescribeLiveWatermarkCallable(const DescribeLiveWatermarkRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeLiveWatermarkOutcome()>>(
        [this, request]()
        {
            return this->DescribeLiveWatermark(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

LiveClient::DescribeLiveWatermarkRulesOutcome LiveClient::DescribeLiveWatermarkRules(const DescribeLiveWatermarkRulesRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeLiveWatermarkRules");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeLiveWatermarkRulesResponse rsp = DescribeLiveWatermarkRulesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeLiveWatermarkRulesOutcome(rsp);
        else
            return DescribeLiveWatermarkRulesOutcome(o.GetError());
    }
    else
    {
        return DescribeLiveWatermarkRulesOutcome(outcome.GetError());
    }
}

void LiveClient::DescribeLiveWatermarkRulesAsync(const DescribeLiveWatermarkRulesRequest& request, const DescribeLiveWatermarkRulesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeLiveWatermarkRules(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

LiveClient::DescribeLiveWatermarkRulesOutcomeCallable LiveClient::DescribeLiveWatermarkRulesCallable(const DescribeLiveWatermarkRulesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeLiveWatermarkRulesOutcome()>>(
        [this, request]()
        {
            return this->DescribeLiveWatermarkRules(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

LiveClient::DescribeLiveWatermarksOutcome LiveClient::DescribeLiveWatermarks(const DescribeLiveWatermarksRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeLiveWatermarks");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeLiveWatermarksResponse rsp = DescribeLiveWatermarksResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeLiveWatermarksOutcome(rsp);
        else
            return DescribeLiveWatermarksOutcome(o.GetError());
    }
    else
    {
        return DescribeLiveWatermarksOutcome(outcome.GetError());
    }
}

void LiveClient::DescribeLiveWatermarksAsync(const DescribeLiveWatermarksRequest& request, const DescribeLiveWatermarksAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeLiveWatermarks(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

LiveClient::DescribeLiveWatermarksOutcomeCallable LiveClient::DescribeLiveWatermarksCallable(const DescribeLiveWatermarksRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeLiveWatermarksOutcome()>>(
        [this, request]()
        {
            return this->DescribeLiveWatermarks(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

LiveClient::DescribeLiveXP2PDetailInfoListOutcome LiveClient::DescribeLiveXP2PDetailInfoList(const DescribeLiveXP2PDetailInfoListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeLiveXP2PDetailInfoList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeLiveXP2PDetailInfoListResponse rsp = DescribeLiveXP2PDetailInfoListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeLiveXP2PDetailInfoListOutcome(rsp);
        else
            return DescribeLiveXP2PDetailInfoListOutcome(o.GetError());
    }
    else
    {
        return DescribeLiveXP2PDetailInfoListOutcome(outcome.GetError());
    }
}

void LiveClient::DescribeLiveXP2PDetailInfoListAsync(const DescribeLiveXP2PDetailInfoListRequest& request, const DescribeLiveXP2PDetailInfoListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeLiveXP2PDetailInfoList(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

LiveClient::DescribeLiveXP2PDetailInfoListOutcomeCallable LiveClient::DescribeLiveXP2PDetailInfoListCallable(const DescribeLiveXP2PDetailInfoListRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeLiveXP2PDetailInfoListOutcome()>>(
        [this, request]()
        {
            return this->DescribeLiveXP2PDetailInfoList(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

LiveClient::DescribeLogDownloadListOutcome LiveClient::DescribeLogDownloadList(const DescribeLogDownloadListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeLogDownloadList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeLogDownloadListResponse rsp = DescribeLogDownloadListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeLogDownloadListOutcome(rsp);
        else
            return DescribeLogDownloadListOutcome(o.GetError());
    }
    else
    {
        return DescribeLogDownloadListOutcome(outcome.GetError());
    }
}

void LiveClient::DescribeLogDownloadListAsync(const DescribeLogDownloadListRequest& request, const DescribeLogDownloadListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeLogDownloadList(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

LiveClient::DescribeLogDownloadListOutcomeCallable LiveClient::DescribeLogDownloadListCallable(const DescribeLogDownloadListRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeLogDownloadListOutcome()>>(
        [this, request]()
        {
            return this->DescribeLogDownloadList(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

LiveClient::DescribeMonitorReportOutcome LiveClient::DescribeMonitorReport(const DescribeMonitorReportRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeMonitorReport");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeMonitorReportResponse rsp = DescribeMonitorReportResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeMonitorReportOutcome(rsp);
        else
            return DescribeMonitorReportOutcome(o.GetError());
    }
    else
    {
        return DescribeMonitorReportOutcome(outcome.GetError());
    }
}

void LiveClient::DescribeMonitorReportAsync(const DescribeMonitorReportRequest& request, const DescribeMonitorReportAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeMonitorReport(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

LiveClient::DescribeMonitorReportOutcomeCallable LiveClient::DescribeMonitorReportCallable(const DescribeMonitorReportRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeMonitorReportOutcome()>>(
        [this, request]()
        {
            return this->DescribeMonitorReport(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

LiveClient::DescribePlayErrorCodeDetailInfoListOutcome LiveClient::DescribePlayErrorCodeDetailInfoList(const DescribePlayErrorCodeDetailInfoListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribePlayErrorCodeDetailInfoList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribePlayErrorCodeDetailInfoListResponse rsp = DescribePlayErrorCodeDetailInfoListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribePlayErrorCodeDetailInfoListOutcome(rsp);
        else
            return DescribePlayErrorCodeDetailInfoListOutcome(o.GetError());
    }
    else
    {
        return DescribePlayErrorCodeDetailInfoListOutcome(outcome.GetError());
    }
}

void LiveClient::DescribePlayErrorCodeDetailInfoListAsync(const DescribePlayErrorCodeDetailInfoListRequest& request, const DescribePlayErrorCodeDetailInfoListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribePlayErrorCodeDetailInfoList(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

LiveClient::DescribePlayErrorCodeDetailInfoListOutcomeCallable LiveClient::DescribePlayErrorCodeDetailInfoListCallable(const DescribePlayErrorCodeDetailInfoListRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribePlayErrorCodeDetailInfoListOutcome()>>(
        [this, request]()
        {
            return this->DescribePlayErrorCodeDetailInfoList(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

LiveClient::DescribePlayErrorCodeSumInfoListOutcome LiveClient::DescribePlayErrorCodeSumInfoList(const DescribePlayErrorCodeSumInfoListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribePlayErrorCodeSumInfoList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribePlayErrorCodeSumInfoListResponse rsp = DescribePlayErrorCodeSumInfoListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribePlayErrorCodeSumInfoListOutcome(rsp);
        else
            return DescribePlayErrorCodeSumInfoListOutcome(o.GetError());
    }
    else
    {
        return DescribePlayErrorCodeSumInfoListOutcome(outcome.GetError());
    }
}

void LiveClient::DescribePlayErrorCodeSumInfoListAsync(const DescribePlayErrorCodeSumInfoListRequest& request, const DescribePlayErrorCodeSumInfoListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribePlayErrorCodeSumInfoList(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

LiveClient::DescribePlayErrorCodeSumInfoListOutcomeCallable LiveClient::DescribePlayErrorCodeSumInfoListCallable(const DescribePlayErrorCodeSumInfoListRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribePlayErrorCodeSumInfoListOutcome()>>(
        [this, request]()
        {
            return this->DescribePlayErrorCodeSumInfoList(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

LiveClient::DescribeProIspPlaySumInfoListOutcome LiveClient::DescribeProIspPlaySumInfoList(const DescribeProIspPlaySumInfoListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeProIspPlaySumInfoList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeProIspPlaySumInfoListResponse rsp = DescribeProIspPlaySumInfoListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeProIspPlaySumInfoListOutcome(rsp);
        else
            return DescribeProIspPlaySumInfoListOutcome(o.GetError());
    }
    else
    {
        return DescribeProIspPlaySumInfoListOutcome(outcome.GetError());
    }
}

void LiveClient::DescribeProIspPlaySumInfoListAsync(const DescribeProIspPlaySumInfoListRequest& request, const DescribeProIspPlaySumInfoListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeProIspPlaySumInfoList(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

LiveClient::DescribeProIspPlaySumInfoListOutcomeCallable LiveClient::DescribeProIspPlaySumInfoListCallable(const DescribeProIspPlaySumInfoListRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeProIspPlaySumInfoListOutcome()>>(
        [this, request]()
        {
            return this->DescribeProIspPlaySumInfoList(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

LiveClient::DescribeProvinceIspPlayInfoListOutcome LiveClient::DescribeProvinceIspPlayInfoList(const DescribeProvinceIspPlayInfoListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeProvinceIspPlayInfoList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeProvinceIspPlayInfoListResponse rsp = DescribeProvinceIspPlayInfoListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeProvinceIspPlayInfoListOutcome(rsp);
        else
            return DescribeProvinceIspPlayInfoListOutcome(o.GetError());
    }
    else
    {
        return DescribeProvinceIspPlayInfoListOutcome(outcome.GetError());
    }
}

void LiveClient::DescribeProvinceIspPlayInfoListAsync(const DescribeProvinceIspPlayInfoListRequest& request, const DescribeProvinceIspPlayInfoListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeProvinceIspPlayInfoList(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

LiveClient::DescribeProvinceIspPlayInfoListOutcomeCallable LiveClient::DescribeProvinceIspPlayInfoListCallable(const DescribeProvinceIspPlayInfoListRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeProvinceIspPlayInfoListOutcome()>>(
        [this, request]()
        {
            return this->DescribeProvinceIspPlayInfoList(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

LiveClient::DescribePullStreamConfigsOutcome LiveClient::DescribePullStreamConfigs(const DescribePullStreamConfigsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribePullStreamConfigs");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribePullStreamConfigsResponse rsp = DescribePullStreamConfigsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribePullStreamConfigsOutcome(rsp);
        else
            return DescribePullStreamConfigsOutcome(o.GetError());
    }
    else
    {
        return DescribePullStreamConfigsOutcome(outcome.GetError());
    }
}

void LiveClient::DescribePullStreamConfigsAsync(const DescribePullStreamConfigsRequest& request, const DescribePullStreamConfigsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribePullStreamConfigs(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

LiveClient::DescribePullStreamConfigsOutcomeCallable LiveClient::DescribePullStreamConfigsCallable(const DescribePullStreamConfigsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribePullStreamConfigsOutcome()>>(
        [this, request]()
        {
            return this->DescribePullStreamConfigs(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

LiveClient::DescribePullTransformPushInfoOutcome LiveClient::DescribePullTransformPushInfo(const DescribePullTransformPushInfoRequest &request)
{
    auto outcome = MakeRequest(request, "DescribePullTransformPushInfo");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribePullTransformPushInfoResponse rsp = DescribePullTransformPushInfoResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribePullTransformPushInfoOutcome(rsp);
        else
            return DescribePullTransformPushInfoOutcome(o.GetError());
    }
    else
    {
        return DescribePullTransformPushInfoOutcome(outcome.GetError());
    }
}

void LiveClient::DescribePullTransformPushInfoAsync(const DescribePullTransformPushInfoRequest& request, const DescribePullTransformPushInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribePullTransformPushInfo(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

LiveClient::DescribePullTransformPushInfoOutcomeCallable LiveClient::DescribePullTransformPushInfoCallable(const DescribePullTransformPushInfoRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribePullTransformPushInfoOutcome()>>(
        [this, request]()
        {
            return this->DescribePullTransformPushInfo(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

LiveClient::DescribePushBandwidthAndFluxListOutcome LiveClient::DescribePushBandwidthAndFluxList(const DescribePushBandwidthAndFluxListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribePushBandwidthAndFluxList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribePushBandwidthAndFluxListResponse rsp = DescribePushBandwidthAndFluxListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribePushBandwidthAndFluxListOutcome(rsp);
        else
            return DescribePushBandwidthAndFluxListOutcome(o.GetError());
    }
    else
    {
        return DescribePushBandwidthAndFluxListOutcome(outcome.GetError());
    }
}

void LiveClient::DescribePushBandwidthAndFluxListAsync(const DescribePushBandwidthAndFluxListRequest& request, const DescribePushBandwidthAndFluxListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribePushBandwidthAndFluxList(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

LiveClient::DescribePushBandwidthAndFluxListOutcomeCallable LiveClient::DescribePushBandwidthAndFluxListCallable(const DescribePushBandwidthAndFluxListRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribePushBandwidthAndFluxListOutcome()>>(
        [this, request]()
        {
            return this->DescribePushBandwidthAndFluxList(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

LiveClient::DescribeRecordTaskOutcome LiveClient::DescribeRecordTask(const DescribeRecordTaskRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeRecordTask");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeRecordTaskResponse rsp = DescribeRecordTaskResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeRecordTaskOutcome(rsp);
        else
            return DescribeRecordTaskOutcome(o.GetError());
    }
    else
    {
        return DescribeRecordTaskOutcome(outcome.GetError());
    }
}

void LiveClient::DescribeRecordTaskAsync(const DescribeRecordTaskRequest& request, const DescribeRecordTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeRecordTask(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

LiveClient::DescribeRecordTaskOutcomeCallable LiveClient::DescribeRecordTaskCallable(const DescribeRecordTaskRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeRecordTaskOutcome()>>(
        [this, request]()
        {
            return this->DescribeRecordTask(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

LiveClient::DescribeScreenShotSheetNumListOutcome LiveClient::DescribeScreenShotSheetNumList(const DescribeScreenShotSheetNumListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeScreenShotSheetNumList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeScreenShotSheetNumListResponse rsp = DescribeScreenShotSheetNumListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeScreenShotSheetNumListOutcome(rsp);
        else
            return DescribeScreenShotSheetNumListOutcome(o.GetError());
    }
    else
    {
        return DescribeScreenShotSheetNumListOutcome(outcome.GetError());
    }
}

void LiveClient::DescribeScreenShotSheetNumListAsync(const DescribeScreenShotSheetNumListRequest& request, const DescribeScreenShotSheetNumListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeScreenShotSheetNumList(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

LiveClient::DescribeScreenShotSheetNumListOutcomeCallable LiveClient::DescribeScreenShotSheetNumListCallable(const DescribeScreenShotSheetNumListRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeScreenShotSheetNumListOutcome()>>(
        [this, request]()
        {
            return this->DescribeScreenShotSheetNumList(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

LiveClient::DescribeScreenshotTaskOutcome LiveClient::DescribeScreenshotTask(const DescribeScreenshotTaskRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeScreenshotTask");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeScreenshotTaskResponse rsp = DescribeScreenshotTaskResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeScreenshotTaskOutcome(rsp);
        else
            return DescribeScreenshotTaskOutcome(o.GetError());
    }
    else
    {
        return DescribeScreenshotTaskOutcome(outcome.GetError());
    }
}

void LiveClient::DescribeScreenshotTaskAsync(const DescribeScreenshotTaskRequest& request, const DescribeScreenshotTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeScreenshotTask(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

LiveClient::DescribeScreenshotTaskOutcomeCallable LiveClient::DescribeScreenshotTaskCallable(const DescribeScreenshotTaskRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeScreenshotTaskOutcome()>>(
        [this, request]()
        {
            return this->DescribeScreenshotTask(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

LiveClient::DescribeStreamDayPlayInfoListOutcome LiveClient::DescribeStreamDayPlayInfoList(const DescribeStreamDayPlayInfoListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeStreamDayPlayInfoList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeStreamDayPlayInfoListResponse rsp = DescribeStreamDayPlayInfoListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeStreamDayPlayInfoListOutcome(rsp);
        else
            return DescribeStreamDayPlayInfoListOutcome(o.GetError());
    }
    else
    {
        return DescribeStreamDayPlayInfoListOutcome(outcome.GetError());
    }
}

void LiveClient::DescribeStreamDayPlayInfoListAsync(const DescribeStreamDayPlayInfoListRequest& request, const DescribeStreamDayPlayInfoListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeStreamDayPlayInfoList(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

LiveClient::DescribeStreamDayPlayInfoListOutcomeCallable LiveClient::DescribeStreamDayPlayInfoListCallable(const DescribeStreamDayPlayInfoListRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeStreamDayPlayInfoListOutcome()>>(
        [this, request]()
        {
            return this->DescribeStreamDayPlayInfoList(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

LiveClient::DescribeStreamPlayInfoListOutcome LiveClient::DescribeStreamPlayInfoList(const DescribeStreamPlayInfoListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeStreamPlayInfoList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeStreamPlayInfoListResponse rsp = DescribeStreamPlayInfoListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeStreamPlayInfoListOutcome(rsp);
        else
            return DescribeStreamPlayInfoListOutcome(o.GetError());
    }
    else
    {
        return DescribeStreamPlayInfoListOutcome(outcome.GetError());
    }
}

void LiveClient::DescribeStreamPlayInfoListAsync(const DescribeStreamPlayInfoListRequest& request, const DescribeStreamPlayInfoListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeStreamPlayInfoList(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

LiveClient::DescribeStreamPlayInfoListOutcomeCallable LiveClient::DescribeStreamPlayInfoListCallable(const DescribeStreamPlayInfoListRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeStreamPlayInfoListOutcome()>>(
        [this, request]()
        {
            return this->DescribeStreamPlayInfoList(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

LiveClient::DescribeStreamPushInfoListOutcome LiveClient::DescribeStreamPushInfoList(const DescribeStreamPushInfoListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeStreamPushInfoList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeStreamPushInfoListResponse rsp = DescribeStreamPushInfoListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeStreamPushInfoListOutcome(rsp);
        else
            return DescribeStreamPushInfoListOutcome(o.GetError());
    }
    else
    {
        return DescribeStreamPushInfoListOutcome(outcome.GetError());
    }
}

void LiveClient::DescribeStreamPushInfoListAsync(const DescribeStreamPushInfoListRequest& request, const DescribeStreamPushInfoListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeStreamPushInfoList(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

LiveClient::DescribeStreamPushInfoListOutcomeCallable LiveClient::DescribeStreamPushInfoListCallable(const DescribeStreamPushInfoListRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeStreamPushInfoListOutcome()>>(
        [this, request]()
        {
            return this->DescribeStreamPushInfoList(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

LiveClient::DescribeTimeShiftRecordDetailOutcome LiveClient::DescribeTimeShiftRecordDetail(const DescribeTimeShiftRecordDetailRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeTimeShiftRecordDetail");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeTimeShiftRecordDetailResponse rsp = DescribeTimeShiftRecordDetailResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeTimeShiftRecordDetailOutcome(rsp);
        else
            return DescribeTimeShiftRecordDetailOutcome(o.GetError());
    }
    else
    {
        return DescribeTimeShiftRecordDetailOutcome(outcome.GetError());
    }
}

void LiveClient::DescribeTimeShiftRecordDetailAsync(const DescribeTimeShiftRecordDetailRequest& request, const DescribeTimeShiftRecordDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeTimeShiftRecordDetail(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

LiveClient::DescribeTimeShiftRecordDetailOutcomeCallable LiveClient::DescribeTimeShiftRecordDetailCallable(const DescribeTimeShiftRecordDetailRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeTimeShiftRecordDetailOutcome()>>(
        [this, request]()
        {
            return this->DescribeTimeShiftRecordDetail(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

LiveClient::DescribeTimeShiftStreamListOutcome LiveClient::DescribeTimeShiftStreamList(const DescribeTimeShiftStreamListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeTimeShiftStreamList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeTimeShiftStreamListResponse rsp = DescribeTimeShiftStreamListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeTimeShiftStreamListOutcome(rsp);
        else
            return DescribeTimeShiftStreamListOutcome(o.GetError());
    }
    else
    {
        return DescribeTimeShiftStreamListOutcome(outcome.GetError());
    }
}

void LiveClient::DescribeTimeShiftStreamListAsync(const DescribeTimeShiftStreamListRequest& request, const DescribeTimeShiftStreamListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeTimeShiftStreamList(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

LiveClient::DescribeTimeShiftStreamListOutcomeCallable LiveClient::DescribeTimeShiftStreamListCallable(const DescribeTimeShiftStreamListRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeTimeShiftStreamListOutcome()>>(
        [this, request]()
        {
            return this->DescribeTimeShiftStreamList(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

LiveClient::DescribeTopClientIpSumInfoListOutcome LiveClient::DescribeTopClientIpSumInfoList(const DescribeTopClientIpSumInfoListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeTopClientIpSumInfoList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeTopClientIpSumInfoListResponse rsp = DescribeTopClientIpSumInfoListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeTopClientIpSumInfoListOutcome(rsp);
        else
            return DescribeTopClientIpSumInfoListOutcome(o.GetError());
    }
    else
    {
        return DescribeTopClientIpSumInfoListOutcome(outcome.GetError());
    }
}

void LiveClient::DescribeTopClientIpSumInfoListAsync(const DescribeTopClientIpSumInfoListRequest& request, const DescribeTopClientIpSumInfoListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeTopClientIpSumInfoList(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

LiveClient::DescribeTopClientIpSumInfoListOutcomeCallable LiveClient::DescribeTopClientIpSumInfoListCallable(const DescribeTopClientIpSumInfoListRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeTopClientIpSumInfoListOutcome()>>(
        [this, request]()
        {
            return this->DescribeTopClientIpSumInfoList(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

LiveClient::DescribeTranscodeTaskNumOutcome LiveClient::DescribeTranscodeTaskNum(const DescribeTranscodeTaskNumRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeTranscodeTaskNum");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeTranscodeTaskNumResponse rsp = DescribeTranscodeTaskNumResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeTranscodeTaskNumOutcome(rsp);
        else
            return DescribeTranscodeTaskNumOutcome(o.GetError());
    }
    else
    {
        return DescribeTranscodeTaskNumOutcome(outcome.GetError());
    }
}

void LiveClient::DescribeTranscodeTaskNumAsync(const DescribeTranscodeTaskNumRequest& request, const DescribeTranscodeTaskNumAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeTranscodeTaskNum(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

LiveClient::DescribeTranscodeTaskNumOutcomeCallable LiveClient::DescribeTranscodeTaskNumCallable(const DescribeTranscodeTaskNumRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeTranscodeTaskNumOutcome()>>(
        [this, request]()
        {
            return this->DescribeTranscodeTaskNum(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

LiveClient::DescribeUploadStreamNumsOutcome LiveClient::DescribeUploadStreamNums(const DescribeUploadStreamNumsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeUploadStreamNums");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeUploadStreamNumsResponse rsp = DescribeUploadStreamNumsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeUploadStreamNumsOutcome(rsp);
        else
            return DescribeUploadStreamNumsOutcome(o.GetError());
    }
    else
    {
        return DescribeUploadStreamNumsOutcome(outcome.GetError());
    }
}

void LiveClient::DescribeUploadStreamNumsAsync(const DescribeUploadStreamNumsRequest& request, const DescribeUploadStreamNumsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeUploadStreamNums(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

LiveClient::DescribeUploadStreamNumsOutcomeCallable LiveClient::DescribeUploadStreamNumsCallable(const DescribeUploadStreamNumsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeUploadStreamNumsOutcome()>>(
        [this, request]()
        {
            return this->DescribeUploadStreamNums(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

LiveClient::DescribeVisitTopSumInfoListOutcome LiveClient::DescribeVisitTopSumInfoList(const DescribeVisitTopSumInfoListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeVisitTopSumInfoList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeVisitTopSumInfoListResponse rsp = DescribeVisitTopSumInfoListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeVisitTopSumInfoListOutcome(rsp);
        else
            return DescribeVisitTopSumInfoListOutcome(o.GetError());
    }
    else
    {
        return DescribeVisitTopSumInfoListOutcome(outcome.GetError());
    }
}

void LiveClient::DescribeVisitTopSumInfoListAsync(const DescribeVisitTopSumInfoListRequest& request, const DescribeVisitTopSumInfoListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeVisitTopSumInfoList(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

LiveClient::DescribeVisitTopSumInfoListOutcomeCallable LiveClient::DescribeVisitTopSumInfoListCallable(const DescribeVisitTopSumInfoListRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeVisitTopSumInfoListOutcome()>>(
        [this, request]()
        {
            return this->DescribeVisitTopSumInfoList(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

LiveClient::DropLiveStreamOutcome LiveClient::DropLiveStream(const DropLiveStreamRequest &request)
{
    auto outcome = MakeRequest(request, "DropLiveStream");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DropLiveStreamResponse rsp = DropLiveStreamResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DropLiveStreamOutcome(rsp);
        else
            return DropLiveStreamOutcome(o.GetError());
    }
    else
    {
        return DropLiveStreamOutcome(outcome.GetError());
    }
}

void LiveClient::DropLiveStreamAsync(const DropLiveStreamRequest& request, const DropLiveStreamAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DropLiveStream(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

LiveClient::DropLiveStreamOutcomeCallable LiveClient::DropLiveStreamCallable(const DropLiveStreamRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DropLiveStreamOutcome()>>(
        [this, request]()
        {
            return this->DropLiveStream(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

LiveClient::EnableLiveDomainOutcome LiveClient::EnableLiveDomain(const EnableLiveDomainRequest &request)
{
    auto outcome = MakeRequest(request, "EnableLiveDomain");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        EnableLiveDomainResponse rsp = EnableLiveDomainResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return EnableLiveDomainOutcome(rsp);
        else
            return EnableLiveDomainOutcome(o.GetError());
    }
    else
    {
        return EnableLiveDomainOutcome(outcome.GetError());
    }
}

void LiveClient::EnableLiveDomainAsync(const EnableLiveDomainRequest& request, const EnableLiveDomainAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->EnableLiveDomain(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

LiveClient::EnableLiveDomainOutcomeCallable LiveClient::EnableLiveDomainCallable(const EnableLiveDomainRequest &request)
{
    auto task = std::make_shared<std::packaged_task<EnableLiveDomainOutcome()>>(
        [this, request]()
        {
            return this->EnableLiveDomain(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

LiveClient::EnableOptimalSwitchingOutcome LiveClient::EnableOptimalSwitching(const EnableOptimalSwitchingRequest &request)
{
    auto outcome = MakeRequest(request, "EnableOptimalSwitching");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        EnableOptimalSwitchingResponse rsp = EnableOptimalSwitchingResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return EnableOptimalSwitchingOutcome(rsp);
        else
            return EnableOptimalSwitchingOutcome(o.GetError());
    }
    else
    {
        return EnableOptimalSwitchingOutcome(outcome.GetError());
    }
}

void LiveClient::EnableOptimalSwitchingAsync(const EnableOptimalSwitchingRequest& request, const EnableOptimalSwitchingAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->EnableOptimalSwitching(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

LiveClient::EnableOptimalSwitchingOutcomeCallable LiveClient::EnableOptimalSwitchingCallable(const EnableOptimalSwitchingRequest &request)
{
    auto task = std::make_shared<std::packaged_task<EnableOptimalSwitchingOutcome()>>(
        [this, request]()
        {
            return this->EnableOptimalSwitching(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

LiveClient::ForbidLiveDomainOutcome LiveClient::ForbidLiveDomain(const ForbidLiveDomainRequest &request)
{
    auto outcome = MakeRequest(request, "ForbidLiveDomain");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ForbidLiveDomainResponse rsp = ForbidLiveDomainResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ForbidLiveDomainOutcome(rsp);
        else
            return ForbidLiveDomainOutcome(o.GetError());
    }
    else
    {
        return ForbidLiveDomainOutcome(outcome.GetError());
    }
}

void LiveClient::ForbidLiveDomainAsync(const ForbidLiveDomainRequest& request, const ForbidLiveDomainAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ForbidLiveDomain(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

LiveClient::ForbidLiveDomainOutcomeCallable LiveClient::ForbidLiveDomainCallable(const ForbidLiveDomainRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ForbidLiveDomainOutcome()>>(
        [this, request]()
        {
            return this->ForbidLiveDomain(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

LiveClient::ForbidLiveStreamOutcome LiveClient::ForbidLiveStream(const ForbidLiveStreamRequest &request)
{
    auto outcome = MakeRequest(request, "ForbidLiveStream");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ForbidLiveStreamResponse rsp = ForbidLiveStreamResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ForbidLiveStreamOutcome(rsp);
        else
            return ForbidLiveStreamOutcome(o.GetError());
    }
    else
    {
        return ForbidLiveStreamOutcome(outcome.GetError());
    }
}

void LiveClient::ForbidLiveStreamAsync(const ForbidLiveStreamRequest& request, const ForbidLiveStreamAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ForbidLiveStream(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

LiveClient::ForbidLiveStreamOutcomeCallable LiveClient::ForbidLiveStreamCallable(const ForbidLiveStreamRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ForbidLiveStreamOutcome()>>(
        [this, request]()
        {
            return this->ForbidLiveStream(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

LiveClient::ModifyCasterOutcome LiveClient::ModifyCaster(const ModifyCasterRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyCaster");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyCasterResponse rsp = ModifyCasterResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyCasterOutcome(rsp);
        else
            return ModifyCasterOutcome(o.GetError());
    }
    else
    {
        return ModifyCasterOutcome(outcome.GetError());
    }
}

void LiveClient::ModifyCasterAsync(const ModifyCasterRequest& request, const ModifyCasterAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyCaster(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

LiveClient::ModifyCasterOutcomeCallable LiveClient::ModifyCasterCallable(const ModifyCasterRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyCasterOutcome()>>(
        [this, request]()
        {
            return this->ModifyCaster(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

LiveClient::ModifyCasterInputInfoOutcome LiveClient::ModifyCasterInputInfo(const ModifyCasterInputInfoRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyCasterInputInfo");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyCasterInputInfoResponse rsp = ModifyCasterInputInfoResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyCasterInputInfoOutcome(rsp);
        else
            return ModifyCasterInputInfoOutcome(o.GetError());
    }
    else
    {
        return ModifyCasterInputInfoOutcome(outcome.GetError());
    }
}

void LiveClient::ModifyCasterInputInfoAsync(const ModifyCasterInputInfoRequest& request, const ModifyCasterInputInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyCasterInputInfo(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

LiveClient::ModifyCasterInputInfoOutcomeCallable LiveClient::ModifyCasterInputInfoCallable(const ModifyCasterInputInfoRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyCasterInputInfoOutcome()>>(
        [this, request]()
        {
            return this->ModifyCasterInputInfo(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

LiveClient::ModifyCasterLayoutInfoOutcome LiveClient::ModifyCasterLayoutInfo(const ModifyCasterLayoutInfoRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyCasterLayoutInfo");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyCasterLayoutInfoResponse rsp = ModifyCasterLayoutInfoResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyCasterLayoutInfoOutcome(rsp);
        else
            return ModifyCasterLayoutInfoOutcome(o.GetError());
    }
    else
    {
        return ModifyCasterLayoutInfoOutcome(outcome.GetError());
    }
}

void LiveClient::ModifyCasterLayoutInfoAsync(const ModifyCasterLayoutInfoRequest& request, const ModifyCasterLayoutInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyCasterLayoutInfo(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

LiveClient::ModifyCasterLayoutInfoOutcomeCallable LiveClient::ModifyCasterLayoutInfoCallable(const ModifyCasterLayoutInfoRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyCasterLayoutInfoOutcome()>>(
        [this, request]()
        {
            return this->ModifyCasterLayoutInfo(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

LiveClient::ModifyCasterMarkPicInfoOutcome LiveClient::ModifyCasterMarkPicInfo(const ModifyCasterMarkPicInfoRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyCasterMarkPicInfo");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyCasterMarkPicInfoResponse rsp = ModifyCasterMarkPicInfoResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyCasterMarkPicInfoOutcome(rsp);
        else
            return ModifyCasterMarkPicInfoOutcome(o.GetError());
    }
    else
    {
        return ModifyCasterMarkPicInfoOutcome(outcome.GetError());
    }
}

void LiveClient::ModifyCasterMarkPicInfoAsync(const ModifyCasterMarkPicInfoRequest& request, const ModifyCasterMarkPicInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyCasterMarkPicInfo(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

LiveClient::ModifyCasterMarkPicInfoOutcomeCallable LiveClient::ModifyCasterMarkPicInfoCallable(const ModifyCasterMarkPicInfoRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyCasterMarkPicInfoOutcome()>>(
        [this, request]()
        {
            return this->ModifyCasterMarkPicInfo(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

LiveClient::ModifyCasterMarkWordInfoOutcome LiveClient::ModifyCasterMarkWordInfo(const ModifyCasterMarkWordInfoRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyCasterMarkWordInfo");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyCasterMarkWordInfoResponse rsp = ModifyCasterMarkWordInfoResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyCasterMarkWordInfoOutcome(rsp);
        else
            return ModifyCasterMarkWordInfoOutcome(o.GetError());
    }
    else
    {
        return ModifyCasterMarkWordInfoOutcome(outcome.GetError());
    }
}

void LiveClient::ModifyCasterMarkWordInfoAsync(const ModifyCasterMarkWordInfoRequest& request, const ModifyCasterMarkWordInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyCasterMarkWordInfo(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

LiveClient::ModifyCasterMarkWordInfoOutcomeCallable LiveClient::ModifyCasterMarkWordInfoCallable(const ModifyCasterMarkWordInfoRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyCasterMarkWordInfoOutcome()>>(
        [this, request]()
        {
            return this->ModifyCasterMarkWordInfo(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

LiveClient::ModifyCasterOutputInfoOutcome LiveClient::ModifyCasterOutputInfo(const ModifyCasterOutputInfoRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyCasterOutputInfo");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyCasterOutputInfoResponse rsp = ModifyCasterOutputInfoResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyCasterOutputInfoOutcome(rsp);
        else
            return ModifyCasterOutputInfoOutcome(o.GetError());
    }
    else
    {
        return ModifyCasterOutputInfoOutcome(outcome.GetError());
    }
}

void LiveClient::ModifyCasterOutputInfoAsync(const ModifyCasterOutputInfoRequest& request, const ModifyCasterOutputInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyCasterOutputInfo(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

LiveClient::ModifyCasterOutputInfoOutcomeCallable LiveClient::ModifyCasterOutputInfoCallable(const ModifyCasterOutputInfoRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyCasterOutputInfoOutcome()>>(
        [this, request]()
        {
            return this->ModifyCasterOutputInfo(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

LiveClient::ModifyLiveCallbackTemplateOutcome LiveClient::ModifyLiveCallbackTemplate(const ModifyLiveCallbackTemplateRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyLiveCallbackTemplate");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyLiveCallbackTemplateResponse rsp = ModifyLiveCallbackTemplateResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyLiveCallbackTemplateOutcome(rsp);
        else
            return ModifyLiveCallbackTemplateOutcome(o.GetError());
    }
    else
    {
        return ModifyLiveCallbackTemplateOutcome(outcome.GetError());
    }
}

void LiveClient::ModifyLiveCallbackTemplateAsync(const ModifyLiveCallbackTemplateRequest& request, const ModifyLiveCallbackTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyLiveCallbackTemplate(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

LiveClient::ModifyLiveCallbackTemplateOutcomeCallable LiveClient::ModifyLiveCallbackTemplateCallable(const ModifyLiveCallbackTemplateRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyLiveCallbackTemplateOutcome()>>(
        [this, request]()
        {
            return this->ModifyLiveCallbackTemplate(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

LiveClient::ModifyLiveDomainCertBindingsOutcome LiveClient::ModifyLiveDomainCertBindings(const ModifyLiveDomainCertBindingsRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyLiveDomainCertBindings");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyLiveDomainCertBindingsResponse rsp = ModifyLiveDomainCertBindingsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyLiveDomainCertBindingsOutcome(rsp);
        else
            return ModifyLiveDomainCertBindingsOutcome(o.GetError());
    }
    else
    {
        return ModifyLiveDomainCertBindingsOutcome(outcome.GetError());
    }
}

void LiveClient::ModifyLiveDomainCertBindingsAsync(const ModifyLiveDomainCertBindingsRequest& request, const ModifyLiveDomainCertBindingsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyLiveDomainCertBindings(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

LiveClient::ModifyLiveDomainCertBindingsOutcomeCallable LiveClient::ModifyLiveDomainCertBindingsCallable(const ModifyLiveDomainCertBindingsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyLiveDomainCertBindingsOutcome()>>(
        [this, request]()
        {
            return this->ModifyLiveDomainCertBindings(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

LiveClient::ModifyLiveDomainRefererOutcome LiveClient::ModifyLiveDomainReferer(const ModifyLiveDomainRefererRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyLiveDomainReferer");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyLiveDomainRefererResponse rsp = ModifyLiveDomainRefererResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyLiveDomainRefererOutcome(rsp);
        else
            return ModifyLiveDomainRefererOutcome(o.GetError());
    }
    else
    {
        return ModifyLiveDomainRefererOutcome(outcome.GetError());
    }
}

void LiveClient::ModifyLiveDomainRefererAsync(const ModifyLiveDomainRefererRequest& request, const ModifyLiveDomainRefererAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyLiveDomainReferer(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

LiveClient::ModifyLiveDomainRefererOutcomeCallable LiveClient::ModifyLiveDomainRefererCallable(const ModifyLiveDomainRefererRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyLiveDomainRefererOutcome()>>(
        [this, request]()
        {
            return this->ModifyLiveDomainReferer(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

LiveClient::ModifyLivePadTemplateOutcome LiveClient::ModifyLivePadTemplate(const ModifyLivePadTemplateRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyLivePadTemplate");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyLivePadTemplateResponse rsp = ModifyLivePadTemplateResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyLivePadTemplateOutcome(rsp);
        else
            return ModifyLivePadTemplateOutcome(o.GetError());
    }
    else
    {
        return ModifyLivePadTemplateOutcome(outcome.GetError());
    }
}

void LiveClient::ModifyLivePadTemplateAsync(const ModifyLivePadTemplateRequest& request, const ModifyLivePadTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyLivePadTemplate(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

LiveClient::ModifyLivePadTemplateOutcomeCallable LiveClient::ModifyLivePadTemplateCallable(const ModifyLivePadTemplateRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyLivePadTemplateOutcome()>>(
        [this, request]()
        {
            return this->ModifyLivePadTemplate(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

LiveClient::ModifyLivePlayAuthKeyOutcome LiveClient::ModifyLivePlayAuthKey(const ModifyLivePlayAuthKeyRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyLivePlayAuthKey");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyLivePlayAuthKeyResponse rsp = ModifyLivePlayAuthKeyResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyLivePlayAuthKeyOutcome(rsp);
        else
            return ModifyLivePlayAuthKeyOutcome(o.GetError());
    }
    else
    {
        return ModifyLivePlayAuthKeyOutcome(outcome.GetError());
    }
}

void LiveClient::ModifyLivePlayAuthKeyAsync(const ModifyLivePlayAuthKeyRequest& request, const ModifyLivePlayAuthKeyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyLivePlayAuthKey(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

LiveClient::ModifyLivePlayAuthKeyOutcomeCallable LiveClient::ModifyLivePlayAuthKeyCallable(const ModifyLivePlayAuthKeyRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyLivePlayAuthKeyOutcome()>>(
        [this, request]()
        {
            return this->ModifyLivePlayAuthKey(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

LiveClient::ModifyLivePlayDomainOutcome LiveClient::ModifyLivePlayDomain(const ModifyLivePlayDomainRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyLivePlayDomain");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyLivePlayDomainResponse rsp = ModifyLivePlayDomainResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyLivePlayDomainOutcome(rsp);
        else
            return ModifyLivePlayDomainOutcome(o.GetError());
    }
    else
    {
        return ModifyLivePlayDomainOutcome(outcome.GetError());
    }
}

void LiveClient::ModifyLivePlayDomainAsync(const ModifyLivePlayDomainRequest& request, const ModifyLivePlayDomainAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyLivePlayDomain(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

LiveClient::ModifyLivePlayDomainOutcomeCallable LiveClient::ModifyLivePlayDomainCallable(const ModifyLivePlayDomainRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyLivePlayDomainOutcome()>>(
        [this, request]()
        {
            return this->ModifyLivePlayDomain(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

LiveClient::ModifyLivePullStreamTaskOutcome LiveClient::ModifyLivePullStreamTask(const ModifyLivePullStreamTaskRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyLivePullStreamTask");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyLivePullStreamTaskResponse rsp = ModifyLivePullStreamTaskResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyLivePullStreamTaskOutcome(rsp);
        else
            return ModifyLivePullStreamTaskOutcome(o.GetError());
    }
    else
    {
        return ModifyLivePullStreamTaskOutcome(outcome.GetError());
    }
}

void LiveClient::ModifyLivePullStreamTaskAsync(const ModifyLivePullStreamTaskRequest& request, const ModifyLivePullStreamTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyLivePullStreamTask(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

LiveClient::ModifyLivePullStreamTaskOutcomeCallable LiveClient::ModifyLivePullStreamTaskCallable(const ModifyLivePullStreamTaskRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyLivePullStreamTaskOutcome()>>(
        [this, request]()
        {
            return this->ModifyLivePullStreamTask(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

LiveClient::ModifyLivePushAuthKeyOutcome LiveClient::ModifyLivePushAuthKey(const ModifyLivePushAuthKeyRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyLivePushAuthKey");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyLivePushAuthKeyResponse rsp = ModifyLivePushAuthKeyResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyLivePushAuthKeyOutcome(rsp);
        else
            return ModifyLivePushAuthKeyOutcome(o.GetError());
    }
    else
    {
        return ModifyLivePushAuthKeyOutcome(outcome.GetError());
    }
}

void LiveClient::ModifyLivePushAuthKeyAsync(const ModifyLivePushAuthKeyRequest& request, const ModifyLivePushAuthKeyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyLivePushAuthKey(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

LiveClient::ModifyLivePushAuthKeyOutcomeCallable LiveClient::ModifyLivePushAuthKeyCallable(const ModifyLivePushAuthKeyRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyLivePushAuthKeyOutcome()>>(
        [this, request]()
        {
            return this->ModifyLivePushAuthKey(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

LiveClient::ModifyLiveRecordTemplateOutcome LiveClient::ModifyLiveRecordTemplate(const ModifyLiveRecordTemplateRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyLiveRecordTemplate");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyLiveRecordTemplateResponse rsp = ModifyLiveRecordTemplateResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyLiveRecordTemplateOutcome(rsp);
        else
            return ModifyLiveRecordTemplateOutcome(o.GetError());
    }
    else
    {
        return ModifyLiveRecordTemplateOutcome(outcome.GetError());
    }
}

void LiveClient::ModifyLiveRecordTemplateAsync(const ModifyLiveRecordTemplateRequest& request, const ModifyLiveRecordTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyLiveRecordTemplate(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

LiveClient::ModifyLiveRecordTemplateOutcomeCallable LiveClient::ModifyLiveRecordTemplateCallable(const ModifyLiveRecordTemplateRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyLiveRecordTemplateOutcome()>>(
        [this, request]()
        {
            return this->ModifyLiveRecordTemplate(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

LiveClient::ModifyLiveSnapshotTemplateOutcome LiveClient::ModifyLiveSnapshotTemplate(const ModifyLiveSnapshotTemplateRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyLiveSnapshotTemplate");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyLiveSnapshotTemplateResponse rsp = ModifyLiveSnapshotTemplateResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyLiveSnapshotTemplateOutcome(rsp);
        else
            return ModifyLiveSnapshotTemplateOutcome(o.GetError());
    }
    else
    {
        return ModifyLiveSnapshotTemplateOutcome(outcome.GetError());
    }
}

void LiveClient::ModifyLiveSnapshotTemplateAsync(const ModifyLiveSnapshotTemplateRequest& request, const ModifyLiveSnapshotTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyLiveSnapshotTemplate(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

LiveClient::ModifyLiveSnapshotTemplateOutcomeCallable LiveClient::ModifyLiveSnapshotTemplateCallable(const ModifyLiveSnapshotTemplateRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyLiveSnapshotTemplateOutcome()>>(
        [this, request]()
        {
            return this->ModifyLiveSnapshotTemplate(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

LiveClient::ModifyLiveStreamMonitorOutcome LiveClient::ModifyLiveStreamMonitor(const ModifyLiveStreamMonitorRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyLiveStreamMonitor");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyLiveStreamMonitorResponse rsp = ModifyLiveStreamMonitorResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyLiveStreamMonitorOutcome(rsp);
        else
            return ModifyLiveStreamMonitorOutcome(o.GetError());
    }
    else
    {
        return ModifyLiveStreamMonitorOutcome(outcome.GetError());
    }
}

void LiveClient::ModifyLiveStreamMonitorAsync(const ModifyLiveStreamMonitorRequest& request, const ModifyLiveStreamMonitorAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyLiveStreamMonitor(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

LiveClient::ModifyLiveStreamMonitorOutcomeCallable LiveClient::ModifyLiveStreamMonitorCallable(const ModifyLiveStreamMonitorRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyLiveStreamMonitorOutcome()>>(
        [this, request]()
        {
            return this->ModifyLiveStreamMonitor(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

LiveClient::ModifyLiveTimeShiftTemplateOutcome LiveClient::ModifyLiveTimeShiftTemplate(const ModifyLiveTimeShiftTemplateRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyLiveTimeShiftTemplate");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyLiveTimeShiftTemplateResponse rsp = ModifyLiveTimeShiftTemplateResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyLiveTimeShiftTemplateOutcome(rsp);
        else
            return ModifyLiveTimeShiftTemplateOutcome(o.GetError());
    }
    else
    {
        return ModifyLiveTimeShiftTemplateOutcome(outcome.GetError());
    }
}

void LiveClient::ModifyLiveTimeShiftTemplateAsync(const ModifyLiveTimeShiftTemplateRequest& request, const ModifyLiveTimeShiftTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyLiveTimeShiftTemplate(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

LiveClient::ModifyLiveTimeShiftTemplateOutcomeCallable LiveClient::ModifyLiveTimeShiftTemplateCallable(const ModifyLiveTimeShiftTemplateRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyLiveTimeShiftTemplateOutcome()>>(
        [this, request]()
        {
            return this->ModifyLiveTimeShiftTemplate(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

LiveClient::ModifyLiveTranscodeTemplateOutcome LiveClient::ModifyLiveTranscodeTemplate(const ModifyLiveTranscodeTemplateRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyLiveTranscodeTemplate");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyLiveTranscodeTemplateResponse rsp = ModifyLiveTranscodeTemplateResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyLiveTranscodeTemplateOutcome(rsp);
        else
            return ModifyLiveTranscodeTemplateOutcome(o.GetError());
    }
    else
    {
        return ModifyLiveTranscodeTemplateOutcome(outcome.GetError());
    }
}

void LiveClient::ModifyLiveTranscodeTemplateAsync(const ModifyLiveTranscodeTemplateRequest& request, const ModifyLiveTranscodeTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyLiveTranscodeTemplate(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

LiveClient::ModifyLiveTranscodeTemplateOutcomeCallable LiveClient::ModifyLiveTranscodeTemplateCallable(const ModifyLiveTranscodeTemplateRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyLiveTranscodeTemplateOutcome()>>(
        [this, request]()
        {
            return this->ModifyLiveTranscodeTemplate(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

LiveClient::ModifyPullStreamConfigOutcome LiveClient::ModifyPullStreamConfig(const ModifyPullStreamConfigRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyPullStreamConfig");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyPullStreamConfigResponse rsp = ModifyPullStreamConfigResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyPullStreamConfigOutcome(rsp);
        else
            return ModifyPullStreamConfigOutcome(o.GetError());
    }
    else
    {
        return ModifyPullStreamConfigOutcome(outcome.GetError());
    }
}

void LiveClient::ModifyPullStreamConfigAsync(const ModifyPullStreamConfigRequest& request, const ModifyPullStreamConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyPullStreamConfig(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

LiveClient::ModifyPullStreamConfigOutcomeCallable LiveClient::ModifyPullStreamConfigCallable(const ModifyPullStreamConfigRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyPullStreamConfigOutcome()>>(
        [this, request]()
        {
            return this->ModifyPullStreamConfig(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

LiveClient::ModifyPullStreamStatusOutcome LiveClient::ModifyPullStreamStatus(const ModifyPullStreamStatusRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyPullStreamStatus");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyPullStreamStatusResponse rsp = ModifyPullStreamStatusResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyPullStreamStatusOutcome(rsp);
        else
            return ModifyPullStreamStatusOutcome(o.GetError());
    }
    else
    {
        return ModifyPullStreamStatusOutcome(outcome.GetError());
    }
}

void LiveClient::ModifyPullStreamStatusAsync(const ModifyPullStreamStatusRequest& request, const ModifyPullStreamStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyPullStreamStatus(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

LiveClient::ModifyPullStreamStatusOutcomeCallable LiveClient::ModifyPullStreamStatusCallable(const ModifyPullStreamStatusRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyPullStreamStatusOutcome()>>(
        [this, request]()
        {
            return this->ModifyPullStreamStatus(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

LiveClient::ReleaseCasterOutcome LiveClient::ReleaseCaster(const ReleaseCasterRequest &request)
{
    auto outcome = MakeRequest(request, "ReleaseCaster");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ReleaseCasterResponse rsp = ReleaseCasterResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ReleaseCasterOutcome(rsp);
        else
            return ReleaseCasterOutcome(o.GetError());
    }
    else
    {
        return ReleaseCasterOutcome(outcome.GetError());
    }
}

void LiveClient::ReleaseCasterAsync(const ReleaseCasterRequest& request, const ReleaseCasterAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ReleaseCaster(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

LiveClient::ReleaseCasterOutcomeCallable LiveClient::ReleaseCasterCallable(const ReleaseCasterRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ReleaseCasterOutcome()>>(
        [this, request]()
        {
            return this->ReleaseCaster(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

LiveClient::RestartLivePullStreamTaskOutcome LiveClient::RestartLivePullStreamTask(const RestartLivePullStreamTaskRequest &request)
{
    auto outcome = MakeRequest(request, "RestartLivePullStreamTask");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        RestartLivePullStreamTaskResponse rsp = RestartLivePullStreamTaskResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return RestartLivePullStreamTaskOutcome(rsp);
        else
            return RestartLivePullStreamTaskOutcome(o.GetError());
    }
    else
    {
        return RestartLivePullStreamTaskOutcome(outcome.GetError());
    }
}

void LiveClient::RestartLivePullStreamTaskAsync(const RestartLivePullStreamTaskRequest& request, const RestartLivePullStreamTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->RestartLivePullStreamTask(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

LiveClient::RestartLivePullStreamTaskOutcomeCallable LiveClient::RestartLivePullStreamTaskCallable(const RestartLivePullStreamTaskRequest &request)
{
    auto task = std::make_shared<std::packaged_task<RestartLivePullStreamTaskOutcome()>>(
        [this, request]()
        {
            return this->RestartLivePullStreamTask(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

LiveClient::ResumeDelayLiveStreamOutcome LiveClient::ResumeDelayLiveStream(const ResumeDelayLiveStreamRequest &request)
{
    auto outcome = MakeRequest(request, "ResumeDelayLiveStream");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ResumeDelayLiveStreamResponse rsp = ResumeDelayLiveStreamResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ResumeDelayLiveStreamOutcome(rsp);
        else
            return ResumeDelayLiveStreamOutcome(o.GetError());
    }
    else
    {
        return ResumeDelayLiveStreamOutcome(outcome.GetError());
    }
}

void LiveClient::ResumeDelayLiveStreamAsync(const ResumeDelayLiveStreamRequest& request, const ResumeDelayLiveStreamAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ResumeDelayLiveStream(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

LiveClient::ResumeDelayLiveStreamOutcomeCallable LiveClient::ResumeDelayLiveStreamCallable(const ResumeDelayLiveStreamRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ResumeDelayLiveStreamOutcome()>>(
        [this, request]()
        {
            return this->ResumeDelayLiveStream(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

LiveClient::ResumeLiveStreamOutcome LiveClient::ResumeLiveStream(const ResumeLiveStreamRequest &request)
{
    auto outcome = MakeRequest(request, "ResumeLiveStream");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ResumeLiveStreamResponse rsp = ResumeLiveStreamResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ResumeLiveStreamOutcome(rsp);
        else
            return ResumeLiveStreamOutcome(o.GetError());
    }
    else
    {
        return ResumeLiveStreamOutcome(outcome.GetError());
    }
}

void LiveClient::ResumeLiveStreamAsync(const ResumeLiveStreamRequest& request, const ResumeLiveStreamAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ResumeLiveStream(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

LiveClient::ResumeLiveStreamOutcomeCallable LiveClient::ResumeLiveStreamCallable(const ResumeLiveStreamRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ResumeLiveStreamOutcome()>>(
        [this, request]()
        {
            return this->ResumeLiveStream(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

LiveClient::SendLiveCloudEffectOutcome LiveClient::SendLiveCloudEffect(const SendLiveCloudEffectRequest &request)
{
    auto outcome = MakeRequest(request, "SendLiveCloudEffect");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        SendLiveCloudEffectResponse rsp = SendLiveCloudEffectResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return SendLiveCloudEffectOutcome(rsp);
        else
            return SendLiveCloudEffectOutcome(o.GetError());
    }
    else
    {
        return SendLiveCloudEffectOutcome(outcome.GetError());
    }
}

void LiveClient::SendLiveCloudEffectAsync(const SendLiveCloudEffectRequest& request, const SendLiveCloudEffectAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->SendLiveCloudEffect(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

LiveClient::SendLiveCloudEffectOutcomeCallable LiveClient::SendLiveCloudEffectCallable(const SendLiveCloudEffectRequest &request)
{
    auto task = std::make_shared<std::packaged_task<SendLiveCloudEffectOutcome()>>(
        [this, request]()
        {
            return this->SendLiveCloudEffect(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

LiveClient::StartLivePadStreamOutcome LiveClient::StartLivePadStream(const StartLivePadStreamRequest &request)
{
    auto outcome = MakeRequest(request, "StartLivePadStream");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        StartLivePadStreamResponse rsp = StartLivePadStreamResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return StartLivePadStreamOutcome(rsp);
        else
            return StartLivePadStreamOutcome(o.GetError());
    }
    else
    {
        return StartLivePadStreamOutcome(outcome.GetError());
    }
}

void LiveClient::StartLivePadStreamAsync(const StartLivePadStreamRequest& request, const StartLivePadStreamAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->StartLivePadStream(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

LiveClient::StartLivePadStreamOutcomeCallable LiveClient::StartLivePadStreamCallable(const StartLivePadStreamRequest &request)
{
    auto task = std::make_shared<std::packaged_task<StartLivePadStreamOutcome()>>(
        [this, request]()
        {
            return this->StartLivePadStream(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

LiveClient::StartLiveStreamMonitorOutcome LiveClient::StartLiveStreamMonitor(const StartLiveStreamMonitorRequest &request)
{
    auto outcome = MakeRequest(request, "StartLiveStreamMonitor");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        StartLiveStreamMonitorResponse rsp = StartLiveStreamMonitorResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return StartLiveStreamMonitorOutcome(rsp);
        else
            return StartLiveStreamMonitorOutcome(o.GetError());
    }
    else
    {
        return StartLiveStreamMonitorOutcome(outcome.GetError());
    }
}

void LiveClient::StartLiveStreamMonitorAsync(const StartLiveStreamMonitorRequest& request, const StartLiveStreamMonitorAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->StartLiveStreamMonitor(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

LiveClient::StartLiveStreamMonitorOutcomeCallable LiveClient::StartLiveStreamMonitorCallable(const StartLiveStreamMonitorRequest &request)
{
    auto task = std::make_shared<std::packaged_task<StartLiveStreamMonitorOutcome()>>(
        [this, request]()
        {
            return this->StartLiveStreamMonitor(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

LiveClient::StopCasterPgmOutcome LiveClient::StopCasterPgm(const StopCasterPgmRequest &request)
{
    auto outcome = MakeRequest(request, "StopCasterPgm");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        StopCasterPgmResponse rsp = StopCasterPgmResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return StopCasterPgmOutcome(rsp);
        else
            return StopCasterPgmOutcome(o.GetError());
    }
    else
    {
        return StopCasterPgmOutcome(outcome.GetError());
    }
}

void LiveClient::StopCasterPgmAsync(const StopCasterPgmRequest& request, const StopCasterPgmAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->StopCasterPgm(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

LiveClient::StopCasterPgmOutcomeCallable LiveClient::StopCasterPgmCallable(const StopCasterPgmRequest &request)
{
    auto task = std::make_shared<std::packaged_task<StopCasterPgmOutcome()>>(
        [this, request]()
        {
            return this->StopCasterPgm(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

LiveClient::StopCasterPvwOutcome LiveClient::StopCasterPvw(const StopCasterPvwRequest &request)
{
    auto outcome = MakeRequest(request, "StopCasterPvw");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        StopCasterPvwResponse rsp = StopCasterPvwResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return StopCasterPvwOutcome(rsp);
        else
            return StopCasterPvwOutcome(o.GetError());
    }
    else
    {
        return StopCasterPvwOutcome(outcome.GetError());
    }
}

void LiveClient::StopCasterPvwAsync(const StopCasterPvwRequest& request, const StopCasterPvwAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->StopCasterPvw(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

LiveClient::StopCasterPvwOutcomeCallable LiveClient::StopCasterPvwCallable(const StopCasterPvwRequest &request)
{
    auto task = std::make_shared<std::packaged_task<StopCasterPvwOutcome()>>(
        [this, request]()
        {
            return this->StopCasterPvw(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

LiveClient::StopLivePadStreamOutcome LiveClient::StopLivePadStream(const StopLivePadStreamRequest &request)
{
    auto outcome = MakeRequest(request, "StopLivePadStream");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        StopLivePadStreamResponse rsp = StopLivePadStreamResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return StopLivePadStreamOutcome(rsp);
        else
            return StopLivePadStreamOutcome(o.GetError());
    }
    else
    {
        return StopLivePadStreamOutcome(outcome.GetError());
    }
}

void LiveClient::StopLivePadStreamAsync(const StopLivePadStreamRequest& request, const StopLivePadStreamAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->StopLivePadStream(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

LiveClient::StopLivePadStreamOutcomeCallable LiveClient::StopLivePadStreamCallable(const StopLivePadStreamRequest &request)
{
    auto task = std::make_shared<std::packaged_task<StopLivePadStreamOutcome()>>(
        [this, request]()
        {
            return this->StopLivePadStream(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

LiveClient::StopLiveRecordOutcome LiveClient::StopLiveRecord(const StopLiveRecordRequest &request)
{
    auto outcome = MakeRequest(request, "StopLiveRecord");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        StopLiveRecordResponse rsp = StopLiveRecordResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return StopLiveRecordOutcome(rsp);
        else
            return StopLiveRecordOutcome(o.GetError());
    }
    else
    {
        return StopLiveRecordOutcome(outcome.GetError());
    }
}

void LiveClient::StopLiveRecordAsync(const StopLiveRecordRequest& request, const StopLiveRecordAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->StopLiveRecord(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

LiveClient::StopLiveRecordOutcomeCallable LiveClient::StopLiveRecordCallable(const StopLiveRecordRequest &request)
{
    auto task = std::make_shared<std::packaged_task<StopLiveRecordOutcome()>>(
        [this, request]()
        {
            return this->StopLiveRecord(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

LiveClient::StopLiveStreamMonitorOutcome LiveClient::StopLiveStreamMonitor(const StopLiveStreamMonitorRequest &request)
{
    auto outcome = MakeRequest(request, "StopLiveStreamMonitor");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        StopLiveStreamMonitorResponse rsp = StopLiveStreamMonitorResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return StopLiveStreamMonitorOutcome(rsp);
        else
            return StopLiveStreamMonitorOutcome(o.GetError());
    }
    else
    {
        return StopLiveStreamMonitorOutcome(outcome.GetError());
    }
}

void LiveClient::StopLiveStreamMonitorAsync(const StopLiveStreamMonitorRequest& request, const StopLiveStreamMonitorAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->StopLiveStreamMonitor(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

LiveClient::StopLiveStreamMonitorOutcomeCallable LiveClient::StopLiveStreamMonitorCallable(const StopLiveStreamMonitorRequest &request)
{
    auto task = std::make_shared<std::packaged_task<StopLiveStreamMonitorOutcome()>>(
        [this, request]()
        {
            return this->StopLiveStreamMonitor(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

LiveClient::StopRecordTaskOutcome LiveClient::StopRecordTask(const StopRecordTaskRequest &request)
{
    auto outcome = MakeRequest(request, "StopRecordTask");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        StopRecordTaskResponse rsp = StopRecordTaskResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return StopRecordTaskOutcome(rsp);
        else
            return StopRecordTaskOutcome(o.GetError());
    }
    else
    {
        return StopRecordTaskOutcome(outcome.GetError());
    }
}

void LiveClient::StopRecordTaskAsync(const StopRecordTaskRequest& request, const StopRecordTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->StopRecordTask(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

LiveClient::StopRecordTaskOutcomeCallable LiveClient::StopRecordTaskCallable(const StopRecordTaskRequest &request)
{
    auto task = std::make_shared<std::packaged_task<StopRecordTaskOutcome()>>(
        [this, request]()
        {
            return this->StopRecordTask(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

LiveClient::StopScreenshotTaskOutcome LiveClient::StopScreenshotTask(const StopScreenshotTaskRequest &request)
{
    auto outcome = MakeRequest(request, "StopScreenshotTask");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        StopScreenshotTaskResponse rsp = StopScreenshotTaskResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return StopScreenshotTaskOutcome(rsp);
        else
            return StopScreenshotTaskOutcome(o.GetError());
    }
    else
    {
        return StopScreenshotTaskOutcome(outcome.GetError());
    }
}

void LiveClient::StopScreenshotTaskAsync(const StopScreenshotTaskRequest& request, const StopScreenshotTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->StopScreenshotTask(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

LiveClient::StopScreenshotTaskOutcomeCallable LiveClient::StopScreenshotTaskCallable(const StopScreenshotTaskRequest &request)
{
    auto task = std::make_shared<std::packaged_task<StopScreenshotTaskOutcome()>>(
        [this, request]()
        {
            return this->StopScreenshotTask(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

LiveClient::SwitchBackupStreamOutcome LiveClient::SwitchBackupStream(const SwitchBackupStreamRequest &request)
{
    auto outcome = MakeRequest(request, "SwitchBackupStream");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        SwitchBackupStreamResponse rsp = SwitchBackupStreamResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return SwitchBackupStreamOutcome(rsp);
        else
            return SwitchBackupStreamOutcome(o.GetError());
    }
    else
    {
        return SwitchBackupStreamOutcome(outcome.GetError());
    }
}

void LiveClient::SwitchBackupStreamAsync(const SwitchBackupStreamRequest& request, const SwitchBackupStreamAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->SwitchBackupStream(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

LiveClient::SwitchBackupStreamOutcomeCallable LiveClient::SwitchBackupStreamCallable(const SwitchBackupStreamRequest &request)
{
    auto task = std::make_shared<std::packaged_task<SwitchBackupStreamOutcome()>>(
        [this, request]()
        {
            return this->SwitchBackupStream(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

LiveClient::UnBindLiveDomainCertOutcome LiveClient::UnBindLiveDomainCert(const UnBindLiveDomainCertRequest &request)
{
    auto outcome = MakeRequest(request, "UnBindLiveDomainCert");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        UnBindLiveDomainCertResponse rsp = UnBindLiveDomainCertResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return UnBindLiveDomainCertOutcome(rsp);
        else
            return UnBindLiveDomainCertOutcome(o.GetError());
    }
    else
    {
        return UnBindLiveDomainCertOutcome(outcome.GetError());
    }
}

void LiveClient::UnBindLiveDomainCertAsync(const UnBindLiveDomainCertRequest& request, const UnBindLiveDomainCertAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->UnBindLiveDomainCert(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

LiveClient::UnBindLiveDomainCertOutcomeCallable LiveClient::UnBindLiveDomainCertCallable(const UnBindLiveDomainCertRequest &request)
{
    auto task = std::make_shared<std::packaged_task<UnBindLiveDomainCertOutcome()>>(
        [this, request]()
        {
            return this->UnBindLiveDomainCert(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

LiveClient::UpdateLiveWatermarkOutcome LiveClient::UpdateLiveWatermark(const UpdateLiveWatermarkRequest &request)
{
    auto outcome = MakeRequest(request, "UpdateLiveWatermark");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        UpdateLiveWatermarkResponse rsp = UpdateLiveWatermarkResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return UpdateLiveWatermarkOutcome(rsp);
        else
            return UpdateLiveWatermarkOutcome(o.GetError());
    }
    else
    {
        return UpdateLiveWatermarkOutcome(outcome.GetError());
    }
}

void LiveClient::UpdateLiveWatermarkAsync(const UpdateLiveWatermarkRequest& request, const UpdateLiveWatermarkAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->UpdateLiveWatermark(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

LiveClient::UpdateLiveWatermarkOutcomeCallable LiveClient::UpdateLiveWatermarkCallable(const UpdateLiveWatermarkRequest &request)
{
    auto task = std::make_shared<std::packaged_task<UpdateLiveWatermarkOutcome()>>(
        [this, request]()
        {
            return this->UpdateLiveWatermark(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

