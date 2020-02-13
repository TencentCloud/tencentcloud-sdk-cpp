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

#include <tencentcloud/npp/v20190823/NppClient.h>
#include <tencentcloud/core/Executor.h>
#include <tencentcloud/core/Runnable.h>

using namespace TencentCloud;
using namespace TencentCloud::Npp::V20190823;
using namespace TencentCloud::Npp::V20190823::Model;
using namespace std;

namespace
{
    const string VERSION = "2019-08-23";
    const string ENDPOINT = "npp.tencentcloudapi.com";
}

NppClient::NppClient(const Credential &credential, const string &region) :
    NppClient(credential, region, ClientProfile())
{
}

NppClient::NppClient(const Credential &credential, const string &region, const ClientProfile &profile) :
    AbstractClient(ENDPOINT, VERSION, credential, region, profile)
{
}


NppClient::CreateCallBackOutcome NppClient::CreateCallBack(const CreateCallBackRequest &request)
{
    auto outcome = MakeRequest(request, "CreateCallBack");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateCallBackResponse rsp = CreateCallBackResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateCallBackOutcome(rsp);
        else
            return CreateCallBackOutcome(o.GetError());
    }
    else
    {
        return CreateCallBackOutcome(outcome.GetError());
    }
}

void NppClient::CreateCallBackAsync(const CreateCallBackRequest& request, const CreateCallBackAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateCallBack(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

NppClient::CreateCallBackOutcomeCallable NppClient::CreateCallBackCallable(const CreateCallBackRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateCallBackOutcome()>>(
        [this, request]()
        {
            return this->CreateCallBack(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

NppClient::DelVirtualNumOutcome NppClient::DelVirtualNum(const DelVirtualNumRequest &request)
{
    auto outcome = MakeRequest(request, "DelVirtualNum");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DelVirtualNumResponse rsp = DelVirtualNumResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DelVirtualNumOutcome(rsp);
        else
            return DelVirtualNumOutcome(o.GetError());
    }
    else
    {
        return DelVirtualNumOutcome(outcome.GetError());
    }
}

void NppClient::DelVirtualNumAsync(const DelVirtualNumRequest& request, const DelVirtualNumAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DelVirtualNum(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

NppClient::DelVirtualNumOutcomeCallable NppClient::DelVirtualNumCallable(const DelVirtualNumRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DelVirtualNumOutcome()>>(
        [this, request]()
        {
            return this->DelVirtualNum(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

NppClient::DeleteCallBackOutcome NppClient::DeleteCallBack(const DeleteCallBackRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteCallBack");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteCallBackResponse rsp = DeleteCallBackResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteCallBackOutcome(rsp);
        else
            return DeleteCallBackOutcome(o.GetError());
    }
    else
    {
        return DeleteCallBackOutcome(outcome.GetError());
    }
}

void NppClient::DeleteCallBackAsync(const DeleteCallBackRequest& request, const DeleteCallBackAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteCallBack(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

NppClient::DeleteCallBackOutcomeCallable NppClient::DeleteCallBackCallable(const DeleteCallBackRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteCallBackOutcome()>>(
        [this, request]()
        {
            return this->DeleteCallBack(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

NppClient::DescribeCallBackCdrOutcome NppClient::DescribeCallBackCdr(const DescribeCallBackCdrRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeCallBackCdr");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeCallBackCdrResponse rsp = DescribeCallBackCdrResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeCallBackCdrOutcome(rsp);
        else
            return DescribeCallBackCdrOutcome(o.GetError());
    }
    else
    {
        return DescribeCallBackCdrOutcome(outcome.GetError());
    }
}

void NppClient::DescribeCallBackCdrAsync(const DescribeCallBackCdrRequest& request, const DescribeCallBackCdrAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeCallBackCdr(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

NppClient::DescribeCallBackCdrOutcomeCallable NppClient::DescribeCallBackCdrCallable(const DescribeCallBackCdrRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeCallBackCdrOutcome()>>(
        [this, request]()
        {
            return this->DescribeCallBackCdr(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

NppClient::DescribeCallBackStatusOutcome NppClient::DescribeCallBackStatus(const DescribeCallBackStatusRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeCallBackStatus");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeCallBackStatusResponse rsp = DescribeCallBackStatusResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeCallBackStatusOutcome(rsp);
        else
            return DescribeCallBackStatusOutcome(o.GetError());
    }
    else
    {
        return DescribeCallBackStatusOutcome(outcome.GetError());
    }
}

void NppClient::DescribeCallBackStatusAsync(const DescribeCallBackStatusRequest& request, const DescribeCallBackStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeCallBackStatus(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

NppClient::DescribeCallBackStatusOutcomeCallable NppClient::DescribeCallBackStatusCallable(const DescribeCallBackStatusRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeCallBackStatusOutcome()>>(
        [this, request]()
        {
            return this->DescribeCallBackStatus(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

NppClient::DescribeCallerDisplayListOutcome NppClient::DescribeCallerDisplayList(const DescribeCallerDisplayListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeCallerDisplayList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeCallerDisplayListResponse rsp = DescribeCallerDisplayListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeCallerDisplayListOutcome(rsp);
        else
            return DescribeCallerDisplayListOutcome(o.GetError());
    }
    else
    {
        return DescribeCallerDisplayListOutcome(outcome.GetError());
    }
}

void NppClient::DescribeCallerDisplayListAsync(const DescribeCallerDisplayListRequest& request, const DescribeCallerDisplayListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeCallerDisplayList(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

NppClient::DescribeCallerDisplayListOutcomeCallable NppClient::DescribeCallerDisplayListCallable(const DescribeCallerDisplayListRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeCallerDisplayListOutcome()>>(
        [this, request]()
        {
            return this->DescribeCallerDisplayList(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

NppClient::Get400CdrOutcome NppClient::Get400Cdr(const Get400CdrRequest &request)
{
    auto outcome = MakeRequest(request, "Get400Cdr");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        Get400CdrResponse rsp = Get400CdrResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return Get400CdrOutcome(rsp);
        else
            return Get400CdrOutcome(o.GetError());
    }
    else
    {
        return Get400CdrOutcome(outcome.GetError());
    }
}

void NppClient::Get400CdrAsync(const Get400CdrRequest& request, const Get400CdrAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->Get400Cdr(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

NppClient::Get400CdrOutcomeCallable NppClient::Get400CdrCallable(const Get400CdrRequest &request)
{
    auto task = std::make_shared<std::packaged_task<Get400CdrOutcome()>>(
        [this, request]()
        {
            return this->Get400Cdr(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

NppClient::GetVirtualNumOutcome NppClient::GetVirtualNum(const GetVirtualNumRequest &request)
{
    auto outcome = MakeRequest(request, "GetVirtualNum");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        GetVirtualNumResponse rsp = GetVirtualNumResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return GetVirtualNumOutcome(rsp);
        else
            return GetVirtualNumOutcome(o.GetError());
    }
    else
    {
        return GetVirtualNumOutcome(outcome.GetError());
    }
}

void NppClient::GetVirtualNumAsync(const GetVirtualNumRequest& request, const GetVirtualNumAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->GetVirtualNum(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

NppClient::GetVirtualNumOutcomeCallable NppClient::GetVirtualNumCallable(const GetVirtualNumRequest &request)
{
    auto task = std::make_shared<std::packaged_task<GetVirtualNumOutcome()>>(
        [this, request]()
        {
            return this->GetVirtualNum(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

