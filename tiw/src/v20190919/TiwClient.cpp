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

#include <tencentcloud/tiw/v20190919/TiwClient.h>
#include <tencentcloud/core/Executor.h>
#include <tencentcloud/core/Runnable.h>

using namespace TencentCloud;
using namespace TencentCloud::Tiw::V20190919;
using namespace TencentCloud::Tiw::V20190919::Model;
using namespace std;

namespace
{
    const string VERSION = "2019-09-19";
    const string ENDPOINT = "tiw.tencentcloudapi.com";
}

TiwClient::TiwClient(const Credential &credential, const string &region) :
    TiwClient(credential, region, ClientProfile())
{
}

TiwClient::TiwClient(const Credential &credential, const string &region, const ClientProfile &profile) :
    AbstractClient(ENDPOINT, VERSION, credential, region, profile)
{
}


TiwClient::CreateTranscodeOutcome TiwClient::CreateTranscode(const CreateTranscodeRequest &request)
{
    auto outcome = MakeRequest(request, "CreateTranscode");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateTranscodeResponse rsp = CreateTranscodeResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateTranscodeOutcome(rsp);
        else
            return CreateTranscodeOutcome(o.GetError());
    }
    else
    {
        return CreateTranscodeOutcome(outcome.GetError());
    }
}

void TiwClient::CreateTranscodeAsync(const CreateTranscodeRequest& request, const CreateTranscodeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateTranscode(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TiwClient::CreateTranscodeOutcomeCallable TiwClient::CreateTranscodeCallable(const CreateTranscodeRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateTranscodeOutcome()>>(
        [this, request]()
        {
            return this->CreateTranscode(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TiwClient::DescribeOnlineRecordOutcome TiwClient::DescribeOnlineRecord(const DescribeOnlineRecordRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeOnlineRecord");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeOnlineRecordResponse rsp = DescribeOnlineRecordResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeOnlineRecordOutcome(rsp);
        else
            return DescribeOnlineRecordOutcome(o.GetError());
    }
    else
    {
        return DescribeOnlineRecordOutcome(outcome.GetError());
    }
}

void TiwClient::DescribeOnlineRecordAsync(const DescribeOnlineRecordRequest& request, const DescribeOnlineRecordAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeOnlineRecord(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TiwClient::DescribeOnlineRecordOutcomeCallable TiwClient::DescribeOnlineRecordCallable(const DescribeOnlineRecordRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeOnlineRecordOutcome()>>(
        [this, request]()
        {
            return this->DescribeOnlineRecord(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TiwClient::DescribeOnlineRecordCallbackOutcome TiwClient::DescribeOnlineRecordCallback(const DescribeOnlineRecordCallbackRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeOnlineRecordCallback");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeOnlineRecordCallbackResponse rsp = DescribeOnlineRecordCallbackResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeOnlineRecordCallbackOutcome(rsp);
        else
            return DescribeOnlineRecordCallbackOutcome(o.GetError());
    }
    else
    {
        return DescribeOnlineRecordCallbackOutcome(outcome.GetError());
    }
}

void TiwClient::DescribeOnlineRecordCallbackAsync(const DescribeOnlineRecordCallbackRequest& request, const DescribeOnlineRecordCallbackAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeOnlineRecordCallback(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TiwClient::DescribeOnlineRecordCallbackOutcomeCallable TiwClient::DescribeOnlineRecordCallbackCallable(const DescribeOnlineRecordCallbackRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeOnlineRecordCallbackOutcome()>>(
        [this, request]()
        {
            return this->DescribeOnlineRecordCallback(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TiwClient::DescribeTranscodeOutcome TiwClient::DescribeTranscode(const DescribeTranscodeRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeTranscode");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeTranscodeResponse rsp = DescribeTranscodeResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeTranscodeOutcome(rsp);
        else
            return DescribeTranscodeOutcome(o.GetError());
    }
    else
    {
        return DescribeTranscodeOutcome(outcome.GetError());
    }
}

void TiwClient::DescribeTranscodeAsync(const DescribeTranscodeRequest& request, const DescribeTranscodeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeTranscode(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TiwClient::DescribeTranscodeOutcomeCallable TiwClient::DescribeTranscodeCallable(const DescribeTranscodeRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeTranscodeOutcome()>>(
        [this, request]()
        {
            return this->DescribeTranscode(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TiwClient::DescribeTranscodeCallbackOutcome TiwClient::DescribeTranscodeCallback(const DescribeTranscodeCallbackRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeTranscodeCallback");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeTranscodeCallbackResponse rsp = DescribeTranscodeCallbackResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeTranscodeCallbackOutcome(rsp);
        else
            return DescribeTranscodeCallbackOutcome(o.GetError());
    }
    else
    {
        return DescribeTranscodeCallbackOutcome(outcome.GetError());
    }
}

void TiwClient::DescribeTranscodeCallbackAsync(const DescribeTranscodeCallbackRequest& request, const DescribeTranscodeCallbackAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeTranscodeCallback(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TiwClient::DescribeTranscodeCallbackOutcomeCallable TiwClient::DescribeTranscodeCallbackCallable(const DescribeTranscodeCallbackRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeTranscodeCallbackOutcome()>>(
        [this, request]()
        {
            return this->DescribeTranscodeCallback(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TiwClient::PauseOnlineRecordOutcome TiwClient::PauseOnlineRecord(const PauseOnlineRecordRequest &request)
{
    auto outcome = MakeRequest(request, "PauseOnlineRecord");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        PauseOnlineRecordResponse rsp = PauseOnlineRecordResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return PauseOnlineRecordOutcome(rsp);
        else
            return PauseOnlineRecordOutcome(o.GetError());
    }
    else
    {
        return PauseOnlineRecordOutcome(outcome.GetError());
    }
}

void TiwClient::PauseOnlineRecordAsync(const PauseOnlineRecordRequest& request, const PauseOnlineRecordAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->PauseOnlineRecord(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TiwClient::PauseOnlineRecordOutcomeCallable TiwClient::PauseOnlineRecordCallable(const PauseOnlineRecordRequest &request)
{
    auto task = std::make_shared<std::packaged_task<PauseOnlineRecordOutcome()>>(
        [this, request]()
        {
            return this->PauseOnlineRecord(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TiwClient::ResumeOnlineRecordOutcome TiwClient::ResumeOnlineRecord(const ResumeOnlineRecordRequest &request)
{
    auto outcome = MakeRequest(request, "ResumeOnlineRecord");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ResumeOnlineRecordResponse rsp = ResumeOnlineRecordResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ResumeOnlineRecordOutcome(rsp);
        else
            return ResumeOnlineRecordOutcome(o.GetError());
    }
    else
    {
        return ResumeOnlineRecordOutcome(outcome.GetError());
    }
}

void TiwClient::ResumeOnlineRecordAsync(const ResumeOnlineRecordRequest& request, const ResumeOnlineRecordAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ResumeOnlineRecord(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TiwClient::ResumeOnlineRecordOutcomeCallable TiwClient::ResumeOnlineRecordCallable(const ResumeOnlineRecordRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ResumeOnlineRecordOutcome()>>(
        [this, request]()
        {
            return this->ResumeOnlineRecord(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TiwClient::SetOnlineRecordCallbackOutcome TiwClient::SetOnlineRecordCallback(const SetOnlineRecordCallbackRequest &request)
{
    auto outcome = MakeRequest(request, "SetOnlineRecordCallback");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        SetOnlineRecordCallbackResponse rsp = SetOnlineRecordCallbackResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return SetOnlineRecordCallbackOutcome(rsp);
        else
            return SetOnlineRecordCallbackOutcome(o.GetError());
    }
    else
    {
        return SetOnlineRecordCallbackOutcome(outcome.GetError());
    }
}

void TiwClient::SetOnlineRecordCallbackAsync(const SetOnlineRecordCallbackRequest& request, const SetOnlineRecordCallbackAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->SetOnlineRecordCallback(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TiwClient::SetOnlineRecordCallbackOutcomeCallable TiwClient::SetOnlineRecordCallbackCallable(const SetOnlineRecordCallbackRequest &request)
{
    auto task = std::make_shared<std::packaged_task<SetOnlineRecordCallbackOutcome()>>(
        [this, request]()
        {
            return this->SetOnlineRecordCallback(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TiwClient::SetOnlineRecordCallbackKeyOutcome TiwClient::SetOnlineRecordCallbackKey(const SetOnlineRecordCallbackKeyRequest &request)
{
    auto outcome = MakeRequest(request, "SetOnlineRecordCallbackKey");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        SetOnlineRecordCallbackKeyResponse rsp = SetOnlineRecordCallbackKeyResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return SetOnlineRecordCallbackKeyOutcome(rsp);
        else
            return SetOnlineRecordCallbackKeyOutcome(o.GetError());
    }
    else
    {
        return SetOnlineRecordCallbackKeyOutcome(outcome.GetError());
    }
}

void TiwClient::SetOnlineRecordCallbackKeyAsync(const SetOnlineRecordCallbackKeyRequest& request, const SetOnlineRecordCallbackKeyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->SetOnlineRecordCallbackKey(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TiwClient::SetOnlineRecordCallbackKeyOutcomeCallable TiwClient::SetOnlineRecordCallbackKeyCallable(const SetOnlineRecordCallbackKeyRequest &request)
{
    auto task = std::make_shared<std::packaged_task<SetOnlineRecordCallbackKeyOutcome()>>(
        [this, request]()
        {
            return this->SetOnlineRecordCallbackKey(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TiwClient::SetTranscodeCallbackOutcome TiwClient::SetTranscodeCallback(const SetTranscodeCallbackRequest &request)
{
    auto outcome = MakeRequest(request, "SetTranscodeCallback");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        SetTranscodeCallbackResponse rsp = SetTranscodeCallbackResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return SetTranscodeCallbackOutcome(rsp);
        else
            return SetTranscodeCallbackOutcome(o.GetError());
    }
    else
    {
        return SetTranscodeCallbackOutcome(outcome.GetError());
    }
}

void TiwClient::SetTranscodeCallbackAsync(const SetTranscodeCallbackRequest& request, const SetTranscodeCallbackAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->SetTranscodeCallback(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TiwClient::SetTranscodeCallbackOutcomeCallable TiwClient::SetTranscodeCallbackCallable(const SetTranscodeCallbackRequest &request)
{
    auto task = std::make_shared<std::packaged_task<SetTranscodeCallbackOutcome()>>(
        [this, request]()
        {
            return this->SetTranscodeCallback(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TiwClient::SetTranscodeCallbackKeyOutcome TiwClient::SetTranscodeCallbackKey(const SetTranscodeCallbackKeyRequest &request)
{
    auto outcome = MakeRequest(request, "SetTranscodeCallbackKey");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        SetTranscodeCallbackKeyResponse rsp = SetTranscodeCallbackKeyResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return SetTranscodeCallbackKeyOutcome(rsp);
        else
            return SetTranscodeCallbackKeyOutcome(o.GetError());
    }
    else
    {
        return SetTranscodeCallbackKeyOutcome(outcome.GetError());
    }
}

void TiwClient::SetTranscodeCallbackKeyAsync(const SetTranscodeCallbackKeyRequest& request, const SetTranscodeCallbackKeyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->SetTranscodeCallbackKey(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TiwClient::SetTranscodeCallbackKeyOutcomeCallable TiwClient::SetTranscodeCallbackKeyCallable(const SetTranscodeCallbackKeyRequest &request)
{
    auto task = std::make_shared<std::packaged_task<SetTranscodeCallbackKeyOutcome()>>(
        [this, request]()
        {
            return this->SetTranscodeCallbackKey(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TiwClient::StartOnlineRecordOutcome TiwClient::StartOnlineRecord(const StartOnlineRecordRequest &request)
{
    auto outcome = MakeRequest(request, "StartOnlineRecord");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        StartOnlineRecordResponse rsp = StartOnlineRecordResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return StartOnlineRecordOutcome(rsp);
        else
            return StartOnlineRecordOutcome(o.GetError());
    }
    else
    {
        return StartOnlineRecordOutcome(outcome.GetError());
    }
}

void TiwClient::StartOnlineRecordAsync(const StartOnlineRecordRequest& request, const StartOnlineRecordAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->StartOnlineRecord(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TiwClient::StartOnlineRecordOutcomeCallable TiwClient::StartOnlineRecordCallable(const StartOnlineRecordRequest &request)
{
    auto task = std::make_shared<std::packaged_task<StartOnlineRecordOutcome()>>(
        [this, request]()
        {
            return this->StartOnlineRecord(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TiwClient::StopOnlineRecordOutcome TiwClient::StopOnlineRecord(const StopOnlineRecordRequest &request)
{
    auto outcome = MakeRequest(request, "StopOnlineRecord");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        StopOnlineRecordResponse rsp = StopOnlineRecordResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return StopOnlineRecordOutcome(rsp);
        else
            return StopOnlineRecordOutcome(o.GetError());
    }
    else
    {
        return StopOnlineRecordOutcome(outcome.GetError());
    }
}

void TiwClient::StopOnlineRecordAsync(const StopOnlineRecordRequest& request, const StopOnlineRecordAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->StopOnlineRecord(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TiwClient::StopOnlineRecordOutcomeCallable TiwClient::StopOnlineRecordCallable(const StopOnlineRecordRequest &request)
{
    auto task = std::make_shared<std::packaged_task<StopOnlineRecordOutcome()>>(
        [this, request]()
        {
            return this->StopOnlineRecord(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

