/*
 * Copyright (c) 2017-2025 Tencent. All Rights Reserved.
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
    using Req = const CreateCallBackRequest&;
    using Resp = CreateCallBackResponse;

    DoRequestAsync<Req, Resp>(
        "CreateCallBack", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

NppClient::CreateCallBackOutcomeCallable NppClient::CreateCallBackCallable(const CreateCallBackRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateCallBackOutcome>>();
    CreateCallBackAsync(
    request,
    [prom](
        const NppClient*,
        const CreateCallBackRequest&,
        CreateCallBackOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const DelVirtualNumRequest&;
    using Resp = DelVirtualNumResponse;

    DoRequestAsync<Req, Resp>(
        "DelVirtualNum", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

NppClient::DelVirtualNumOutcomeCallable NppClient::DelVirtualNumCallable(const DelVirtualNumRequest &request)
{
    const auto prom = std::make_shared<std::promise<DelVirtualNumOutcome>>();
    DelVirtualNumAsync(
    request,
    [prom](
        const NppClient*,
        const DelVirtualNumRequest&,
        DelVirtualNumOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const DeleteCallBackRequest&;
    using Resp = DeleteCallBackResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteCallBack", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

NppClient::DeleteCallBackOutcomeCallable NppClient::DeleteCallBackCallable(const DeleteCallBackRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteCallBackOutcome>>();
    DeleteCallBackAsync(
    request,
    [prom](
        const NppClient*,
        const DeleteCallBackRequest&,
        DeleteCallBackOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const DescribeCallBackCdrRequest&;
    using Resp = DescribeCallBackCdrResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeCallBackCdr", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

NppClient::DescribeCallBackCdrOutcomeCallable NppClient::DescribeCallBackCdrCallable(const DescribeCallBackCdrRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeCallBackCdrOutcome>>();
    DescribeCallBackCdrAsync(
    request,
    [prom](
        const NppClient*,
        const DescribeCallBackCdrRequest&,
        DescribeCallBackCdrOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const DescribeCallBackStatusRequest&;
    using Resp = DescribeCallBackStatusResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeCallBackStatus", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

NppClient::DescribeCallBackStatusOutcomeCallable NppClient::DescribeCallBackStatusCallable(const DescribeCallBackStatusRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeCallBackStatusOutcome>>();
    DescribeCallBackStatusAsync(
    request,
    [prom](
        const NppClient*,
        const DescribeCallBackStatusRequest&,
        DescribeCallBackStatusOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const DescribeCallerDisplayListRequest&;
    using Resp = DescribeCallerDisplayListResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeCallerDisplayList", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

NppClient::DescribeCallerDisplayListOutcomeCallable NppClient::DescribeCallerDisplayListCallable(const DescribeCallerDisplayListRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeCallerDisplayListOutcome>>();
    DescribeCallerDisplayListAsync(
    request,
    [prom](
        const NppClient*,
        const DescribeCallerDisplayListRequest&,
        DescribeCallerDisplayListOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const Get400CdrRequest&;
    using Resp = Get400CdrResponse;

    DoRequestAsync<Req, Resp>(
        "Get400Cdr", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

NppClient::Get400CdrOutcomeCallable NppClient::Get400CdrCallable(const Get400CdrRequest &request)
{
    const auto prom = std::make_shared<std::promise<Get400CdrOutcome>>();
    Get400CdrAsync(
    request,
    [prom](
        const NppClient*,
        const Get400CdrRequest&,
        Get400CdrOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const GetVirtualNumRequest&;
    using Resp = GetVirtualNumResponse;

    DoRequestAsync<Req, Resp>(
        "GetVirtualNum", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

NppClient::GetVirtualNumOutcomeCallable NppClient::GetVirtualNumCallable(const GetVirtualNumRequest &request)
{
    const auto prom = std::make_shared<std::promise<GetVirtualNumOutcome>>();
    GetVirtualNumAsync(
    request,
    [prom](
        const NppClient*,
        const GetVirtualNumRequest&,
        GetVirtualNumOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

