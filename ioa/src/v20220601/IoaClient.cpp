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

#include <tencentcloud/ioa/v20220601/IoaClient.h>
#include <tencentcloud/core/Executor.h>
#include <tencentcloud/core/Runnable.h>

using namespace TencentCloud;
using namespace TencentCloud::Ioa::V20220601;
using namespace TencentCloud::Ioa::V20220601::Model;
using namespace std;

namespace
{
    const string VERSION = "2022-06-01";
    const string ENDPOINT = "ioa.tencentcloudapi.com";
}

IoaClient::IoaClient(const Credential &credential, const string &region) :
    IoaClient(credential, region, ClientProfile())
{
}

IoaClient::IoaClient(const Credential &credential, const string &region, const ClientProfile &profile) :
    AbstractClient(ENDPOINT, VERSION, credential, region, profile)
{
}


IoaClient::CreateDLPFileDetectTaskOutcome IoaClient::CreateDLPFileDetectTask(const CreateDLPFileDetectTaskRequest &request)
{
    auto outcome = MakeRequest(request, "CreateDLPFileDetectTask");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateDLPFileDetectTaskResponse rsp = CreateDLPFileDetectTaskResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateDLPFileDetectTaskOutcome(rsp);
        else
            return CreateDLPFileDetectTaskOutcome(o.GetError());
    }
    else
    {
        return CreateDLPFileDetectTaskOutcome(outcome.GetError());
    }
}

void IoaClient::CreateDLPFileDetectTaskAsync(const CreateDLPFileDetectTaskRequest& request, const CreateDLPFileDetectTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateDLPFileDetectTaskRequest&;
    using Resp = CreateDLPFileDetectTaskResponse;

    DoRequestAsync<Req, Resp>(
        "CreateDLPFileDetectTask", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

IoaClient::CreateDLPFileDetectTaskOutcomeCallable IoaClient::CreateDLPFileDetectTaskCallable(const CreateDLPFileDetectTaskRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateDLPFileDetectTaskOutcome>>();
    CreateDLPFileDetectTaskAsync(
    request,
    [prom](
        const IoaClient*,
        const CreateDLPFileDetectTaskRequest&,
        CreateDLPFileDetectTaskOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

IoaClient::CreateDLPFileDetectionTaskOutcome IoaClient::CreateDLPFileDetectionTask(const CreateDLPFileDetectionTaskRequest &request)
{
    auto outcome = MakeRequest(request, "CreateDLPFileDetectionTask");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateDLPFileDetectionTaskResponse rsp = CreateDLPFileDetectionTaskResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateDLPFileDetectionTaskOutcome(rsp);
        else
            return CreateDLPFileDetectionTaskOutcome(o.GetError());
    }
    else
    {
        return CreateDLPFileDetectionTaskOutcome(outcome.GetError());
    }
}

void IoaClient::CreateDLPFileDetectionTaskAsync(const CreateDLPFileDetectionTaskRequest& request, const CreateDLPFileDetectionTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateDLPFileDetectionTaskRequest&;
    using Resp = CreateDLPFileDetectionTaskResponse;

    DoRequestAsync<Req, Resp>(
        "CreateDLPFileDetectionTask", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

IoaClient::CreateDLPFileDetectionTaskOutcomeCallable IoaClient::CreateDLPFileDetectionTaskCallable(const CreateDLPFileDetectionTaskRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateDLPFileDetectionTaskOutcome>>();
    CreateDLPFileDetectionTaskAsync(
    request,
    [prom](
        const IoaClient*,
        const CreateDLPFileDetectionTaskRequest&,
        CreateDLPFileDetectionTaskOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

IoaClient::CreateDeviceTaskOutcome IoaClient::CreateDeviceTask(const CreateDeviceTaskRequest &request)
{
    auto outcome = MakeRequest(request, "CreateDeviceTask");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateDeviceTaskResponse rsp = CreateDeviceTaskResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateDeviceTaskOutcome(rsp);
        else
            return CreateDeviceTaskOutcome(o.GetError());
    }
    else
    {
        return CreateDeviceTaskOutcome(outcome.GetError());
    }
}

void IoaClient::CreateDeviceTaskAsync(const CreateDeviceTaskRequest& request, const CreateDeviceTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateDeviceTaskRequest&;
    using Resp = CreateDeviceTaskResponse;

    DoRequestAsync<Req, Resp>(
        "CreateDeviceTask", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

IoaClient::CreateDeviceTaskOutcomeCallable IoaClient::CreateDeviceTaskCallable(const CreateDeviceTaskRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateDeviceTaskOutcome>>();
    CreateDeviceTaskAsync(
    request,
    [prom](
        const IoaClient*,
        const CreateDeviceTaskRequest&,
        CreateDeviceTaskOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

IoaClient::CreateDeviceVirtualGroupOutcome IoaClient::CreateDeviceVirtualGroup(const CreateDeviceVirtualGroupRequest &request)
{
    auto outcome = MakeRequest(request, "CreateDeviceVirtualGroup");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateDeviceVirtualGroupResponse rsp = CreateDeviceVirtualGroupResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateDeviceVirtualGroupOutcome(rsp);
        else
            return CreateDeviceVirtualGroupOutcome(o.GetError());
    }
    else
    {
        return CreateDeviceVirtualGroupOutcome(outcome.GetError());
    }
}

void IoaClient::CreateDeviceVirtualGroupAsync(const CreateDeviceVirtualGroupRequest& request, const CreateDeviceVirtualGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateDeviceVirtualGroupRequest&;
    using Resp = CreateDeviceVirtualGroupResponse;

    DoRequestAsync<Req, Resp>(
        "CreateDeviceVirtualGroup", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

IoaClient::CreateDeviceVirtualGroupOutcomeCallable IoaClient::CreateDeviceVirtualGroupCallable(const CreateDeviceVirtualGroupRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateDeviceVirtualGroupOutcome>>();
    CreateDeviceVirtualGroupAsync(
    request,
    [prom](
        const IoaClient*,
        const CreateDeviceVirtualGroupRequest&,
        CreateDeviceVirtualGroupOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

IoaClient::CreatePrivilegeCodeOutcome IoaClient::CreatePrivilegeCode(const CreatePrivilegeCodeRequest &request)
{
    auto outcome = MakeRequest(request, "CreatePrivilegeCode");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreatePrivilegeCodeResponse rsp = CreatePrivilegeCodeResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreatePrivilegeCodeOutcome(rsp);
        else
            return CreatePrivilegeCodeOutcome(o.GetError());
    }
    else
    {
        return CreatePrivilegeCodeOutcome(outcome.GetError());
    }
}

void IoaClient::CreatePrivilegeCodeAsync(const CreatePrivilegeCodeRequest& request, const CreatePrivilegeCodeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreatePrivilegeCodeRequest&;
    using Resp = CreatePrivilegeCodeResponse;

    DoRequestAsync<Req, Resp>(
        "CreatePrivilegeCode", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

IoaClient::CreatePrivilegeCodeOutcomeCallable IoaClient::CreatePrivilegeCodeCallable(const CreatePrivilegeCodeRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreatePrivilegeCodeOutcome>>();
    CreatePrivilegeCodeAsync(
    request,
    [prom](
        const IoaClient*,
        const CreatePrivilegeCodeRequest&,
        CreatePrivilegeCodeOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

IoaClient::DescribeAccountGroupsOutcome IoaClient::DescribeAccountGroups(const DescribeAccountGroupsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeAccountGroups");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeAccountGroupsResponse rsp = DescribeAccountGroupsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeAccountGroupsOutcome(rsp);
        else
            return DescribeAccountGroupsOutcome(o.GetError());
    }
    else
    {
        return DescribeAccountGroupsOutcome(outcome.GetError());
    }
}

void IoaClient::DescribeAccountGroupsAsync(const DescribeAccountGroupsRequest& request, const DescribeAccountGroupsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeAccountGroupsRequest&;
    using Resp = DescribeAccountGroupsResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeAccountGroups", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

IoaClient::DescribeAccountGroupsOutcomeCallable IoaClient::DescribeAccountGroupsCallable(const DescribeAccountGroupsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeAccountGroupsOutcome>>();
    DescribeAccountGroupsAsync(
    request,
    [prom](
        const IoaClient*,
        const DescribeAccountGroupsRequest&,
        DescribeAccountGroupsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

IoaClient::DescribeAggrSoftCategorySoftListOutcome IoaClient::DescribeAggrSoftCategorySoftList(const DescribeAggrSoftCategorySoftListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeAggrSoftCategorySoftList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeAggrSoftCategorySoftListResponse rsp = DescribeAggrSoftCategorySoftListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeAggrSoftCategorySoftListOutcome(rsp);
        else
            return DescribeAggrSoftCategorySoftListOutcome(o.GetError());
    }
    else
    {
        return DescribeAggrSoftCategorySoftListOutcome(outcome.GetError());
    }
}

void IoaClient::DescribeAggrSoftCategorySoftListAsync(const DescribeAggrSoftCategorySoftListRequest& request, const DescribeAggrSoftCategorySoftListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeAggrSoftCategorySoftListRequest&;
    using Resp = DescribeAggrSoftCategorySoftListResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeAggrSoftCategorySoftList", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

IoaClient::DescribeAggrSoftCategorySoftListOutcomeCallable IoaClient::DescribeAggrSoftCategorySoftListCallable(const DescribeAggrSoftCategorySoftListRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeAggrSoftCategorySoftListOutcome>>();
    DescribeAggrSoftCategorySoftListAsync(
    request,
    [prom](
        const IoaClient*,
        const DescribeAggrSoftCategorySoftListRequest&,
        DescribeAggrSoftCategorySoftListOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

IoaClient::DescribeAggrSoftDetailOutcome IoaClient::DescribeAggrSoftDetail(const DescribeAggrSoftDetailRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeAggrSoftDetail");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeAggrSoftDetailResponse rsp = DescribeAggrSoftDetailResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeAggrSoftDetailOutcome(rsp);
        else
            return DescribeAggrSoftDetailOutcome(o.GetError());
    }
    else
    {
        return DescribeAggrSoftDetailOutcome(outcome.GetError());
    }
}

void IoaClient::DescribeAggrSoftDetailAsync(const DescribeAggrSoftDetailRequest& request, const DescribeAggrSoftDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeAggrSoftDetailRequest&;
    using Resp = DescribeAggrSoftDetailResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeAggrSoftDetail", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

IoaClient::DescribeAggrSoftDetailOutcomeCallable IoaClient::DescribeAggrSoftDetailCallable(const DescribeAggrSoftDetailRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeAggrSoftDetailOutcome>>();
    DescribeAggrSoftDetailAsync(
    request,
    [prom](
        const IoaClient*,
        const DescribeAggrSoftDetailRequest&,
        DescribeAggrSoftDetailOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

IoaClient::DescribeAggrSoftDeviceListOutcome IoaClient::DescribeAggrSoftDeviceList(const DescribeAggrSoftDeviceListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeAggrSoftDeviceList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeAggrSoftDeviceListResponse rsp = DescribeAggrSoftDeviceListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeAggrSoftDeviceListOutcome(rsp);
        else
            return DescribeAggrSoftDeviceListOutcome(o.GetError());
    }
    else
    {
        return DescribeAggrSoftDeviceListOutcome(outcome.GetError());
    }
}

void IoaClient::DescribeAggrSoftDeviceListAsync(const DescribeAggrSoftDeviceListRequest& request, const DescribeAggrSoftDeviceListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeAggrSoftDeviceListRequest&;
    using Resp = DescribeAggrSoftDeviceListResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeAggrSoftDeviceList", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

IoaClient::DescribeAggrSoftDeviceListOutcomeCallable IoaClient::DescribeAggrSoftDeviceListCallable(const DescribeAggrSoftDeviceListRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeAggrSoftDeviceListOutcome>>();
    DescribeAggrSoftDeviceListAsync(
    request,
    [prom](
        const IoaClient*,
        const DescribeAggrSoftDeviceListRequest&,
        DescribeAggrSoftDeviceListOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

IoaClient::DescribeDLPEdgeNodeGroupsOutcome IoaClient::DescribeDLPEdgeNodeGroups(const DescribeDLPEdgeNodeGroupsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeDLPEdgeNodeGroups");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeDLPEdgeNodeGroupsResponse rsp = DescribeDLPEdgeNodeGroupsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeDLPEdgeNodeGroupsOutcome(rsp);
        else
            return DescribeDLPEdgeNodeGroupsOutcome(o.GetError());
    }
    else
    {
        return DescribeDLPEdgeNodeGroupsOutcome(outcome.GetError());
    }
}

void IoaClient::DescribeDLPEdgeNodeGroupsAsync(const DescribeDLPEdgeNodeGroupsRequest& request, const DescribeDLPEdgeNodeGroupsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeDLPEdgeNodeGroupsRequest&;
    using Resp = DescribeDLPEdgeNodeGroupsResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeDLPEdgeNodeGroups", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

IoaClient::DescribeDLPEdgeNodeGroupsOutcomeCallable IoaClient::DescribeDLPEdgeNodeGroupsCallable(const DescribeDLPEdgeNodeGroupsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeDLPEdgeNodeGroupsOutcome>>();
    DescribeDLPEdgeNodeGroupsAsync(
    request,
    [prom](
        const IoaClient*,
        const DescribeDLPEdgeNodeGroupsRequest&,
        DescribeDLPEdgeNodeGroupsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

IoaClient::DescribeDLPEdgeNodesOutcome IoaClient::DescribeDLPEdgeNodes(const DescribeDLPEdgeNodesRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeDLPEdgeNodes");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeDLPEdgeNodesResponse rsp = DescribeDLPEdgeNodesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeDLPEdgeNodesOutcome(rsp);
        else
            return DescribeDLPEdgeNodesOutcome(o.GetError());
    }
    else
    {
        return DescribeDLPEdgeNodesOutcome(outcome.GetError());
    }
}

void IoaClient::DescribeDLPEdgeNodesAsync(const DescribeDLPEdgeNodesRequest& request, const DescribeDLPEdgeNodesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeDLPEdgeNodesRequest&;
    using Resp = DescribeDLPEdgeNodesResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeDLPEdgeNodes", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

IoaClient::DescribeDLPEdgeNodesOutcomeCallable IoaClient::DescribeDLPEdgeNodesCallable(const DescribeDLPEdgeNodesRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeDLPEdgeNodesOutcome>>();
    DescribeDLPEdgeNodesAsync(
    request,
    [prom](
        const IoaClient*,
        const DescribeDLPEdgeNodesRequest&,
        DescribeDLPEdgeNodesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

IoaClient::DescribeDLPFileDetectResultOutcome IoaClient::DescribeDLPFileDetectResult(const DescribeDLPFileDetectResultRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeDLPFileDetectResult");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeDLPFileDetectResultResponse rsp = DescribeDLPFileDetectResultResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeDLPFileDetectResultOutcome(rsp);
        else
            return DescribeDLPFileDetectResultOutcome(o.GetError());
    }
    else
    {
        return DescribeDLPFileDetectResultOutcome(outcome.GetError());
    }
}

void IoaClient::DescribeDLPFileDetectResultAsync(const DescribeDLPFileDetectResultRequest& request, const DescribeDLPFileDetectResultAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeDLPFileDetectResultRequest&;
    using Resp = DescribeDLPFileDetectResultResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeDLPFileDetectResult", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

IoaClient::DescribeDLPFileDetectResultOutcomeCallable IoaClient::DescribeDLPFileDetectResultCallable(const DescribeDLPFileDetectResultRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeDLPFileDetectResultOutcome>>();
    DescribeDLPFileDetectResultAsync(
    request,
    [prom](
        const IoaClient*,
        const DescribeDLPFileDetectResultRequest&,
        DescribeDLPFileDetectResultOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

IoaClient::DescribeDLPFileDetectTaskResultOutcome IoaClient::DescribeDLPFileDetectTaskResult(const DescribeDLPFileDetectTaskResultRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeDLPFileDetectTaskResult");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeDLPFileDetectTaskResultResponse rsp = DescribeDLPFileDetectTaskResultResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeDLPFileDetectTaskResultOutcome(rsp);
        else
            return DescribeDLPFileDetectTaskResultOutcome(o.GetError());
    }
    else
    {
        return DescribeDLPFileDetectTaskResultOutcome(outcome.GetError());
    }
}

void IoaClient::DescribeDLPFileDetectTaskResultAsync(const DescribeDLPFileDetectTaskResultRequest& request, const DescribeDLPFileDetectTaskResultAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeDLPFileDetectTaskResultRequest&;
    using Resp = DescribeDLPFileDetectTaskResultResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeDLPFileDetectTaskResult", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

IoaClient::DescribeDLPFileDetectTaskResultOutcomeCallable IoaClient::DescribeDLPFileDetectTaskResultCallable(const DescribeDLPFileDetectTaskResultRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeDLPFileDetectTaskResultOutcome>>();
    DescribeDLPFileDetectTaskResultAsync(
    request,
    [prom](
        const IoaClient*,
        const DescribeDLPFileDetectTaskResultRequest&,
        DescribeDLPFileDetectTaskResultOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

IoaClient::DescribeDeviceChildGroupsOutcome IoaClient::DescribeDeviceChildGroups(const DescribeDeviceChildGroupsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeDeviceChildGroups");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeDeviceChildGroupsResponse rsp = DescribeDeviceChildGroupsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeDeviceChildGroupsOutcome(rsp);
        else
            return DescribeDeviceChildGroupsOutcome(o.GetError());
    }
    else
    {
        return DescribeDeviceChildGroupsOutcome(outcome.GetError());
    }
}

void IoaClient::DescribeDeviceChildGroupsAsync(const DescribeDeviceChildGroupsRequest& request, const DescribeDeviceChildGroupsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeDeviceChildGroupsRequest&;
    using Resp = DescribeDeviceChildGroupsResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeDeviceChildGroups", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

IoaClient::DescribeDeviceChildGroupsOutcomeCallable IoaClient::DescribeDeviceChildGroupsCallable(const DescribeDeviceChildGroupsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeDeviceChildGroupsOutcome>>();
    DescribeDeviceChildGroupsAsync(
    request,
    [prom](
        const IoaClient*,
        const DescribeDeviceChildGroupsRequest&,
        DescribeDeviceChildGroupsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

IoaClient::DescribeDeviceDetailListOutcome IoaClient::DescribeDeviceDetailList(const DescribeDeviceDetailListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeDeviceDetailList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeDeviceDetailListResponse rsp = DescribeDeviceDetailListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeDeviceDetailListOutcome(rsp);
        else
            return DescribeDeviceDetailListOutcome(o.GetError());
    }
    else
    {
        return DescribeDeviceDetailListOutcome(outcome.GetError());
    }
}

void IoaClient::DescribeDeviceDetailListAsync(const DescribeDeviceDetailListRequest& request, const DescribeDeviceDetailListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeDeviceDetailListRequest&;
    using Resp = DescribeDeviceDetailListResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeDeviceDetailList", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

IoaClient::DescribeDeviceDetailListOutcomeCallable IoaClient::DescribeDeviceDetailListCallable(const DescribeDeviceDetailListRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeDeviceDetailListOutcome>>();
    DescribeDeviceDetailListAsync(
    request,
    [prom](
        const IoaClient*,
        const DescribeDeviceDetailListRequest&,
        DescribeDeviceDetailListOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

IoaClient::DescribeDeviceHardwareInfoListOutcome IoaClient::DescribeDeviceHardwareInfoList(const DescribeDeviceHardwareInfoListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeDeviceHardwareInfoList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeDeviceHardwareInfoListResponse rsp = DescribeDeviceHardwareInfoListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeDeviceHardwareInfoListOutcome(rsp);
        else
            return DescribeDeviceHardwareInfoListOutcome(o.GetError());
    }
    else
    {
        return DescribeDeviceHardwareInfoListOutcome(outcome.GetError());
    }
}

void IoaClient::DescribeDeviceHardwareInfoListAsync(const DescribeDeviceHardwareInfoListRequest& request, const DescribeDeviceHardwareInfoListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeDeviceHardwareInfoListRequest&;
    using Resp = DescribeDeviceHardwareInfoListResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeDeviceHardwareInfoList", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

IoaClient::DescribeDeviceHardwareInfoListOutcomeCallable IoaClient::DescribeDeviceHardwareInfoListCallable(const DescribeDeviceHardwareInfoListRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeDeviceHardwareInfoListOutcome>>();
    DescribeDeviceHardwareInfoListAsync(
    request,
    [prom](
        const IoaClient*,
        const DescribeDeviceHardwareInfoListRequest&,
        DescribeDeviceHardwareInfoListOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

IoaClient::DescribeDeviceInfoOutcome IoaClient::DescribeDeviceInfo(const DescribeDeviceInfoRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeDeviceInfo");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeDeviceInfoResponse rsp = DescribeDeviceInfoResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeDeviceInfoOutcome(rsp);
        else
            return DescribeDeviceInfoOutcome(o.GetError());
    }
    else
    {
        return DescribeDeviceInfoOutcome(outcome.GetError());
    }
}

void IoaClient::DescribeDeviceInfoAsync(const DescribeDeviceInfoRequest& request, const DescribeDeviceInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeDeviceInfoRequest&;
    using Resp = DescribeDeviceInfoResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeDeviceInfo", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

IoaClient::DescribeDeviceInfoOutcomeCallable IoaClient::DescribeDeviceInfoCallable(const DescribeDeviceInfoRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeDeviceInfoOutcome>>();
    DescribeDeviceInfoAsync(
    request,
    [prom](
        const IoaClient*,
        const DescribeDeviceInfoRequest&,
        DescribeDeviceInfoOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

IoaClient::DescribeDeviceVirtualGroupsOutcome IoaClient::DescribeDeviceVirtualGroups(const DescribeDeviceVirtualGroupsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeDeviceVirtualGroups");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeDeviceVirtualGroupsResponse rsp = DescribeDeviceVirtualGroupsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeDeviceVirtualGroupsOutcome(rsp);
        else
            return DescribeDeviceVirtualGroupsOutcome(o.GetError());
    }
    else
    {
        return DescribeDeviceVirtualGroupsOutcome(outcome.GetError());
    }
}

void IoaClient::DescribeDeviceVirtualGroupsAsync(const DescribeDeviceVirtualGroupsRequest& request, const DescribeDeviceVirtualGroupsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeDeviceVirtualGroupsRequest&;
    using Resp = DescribeDeviceVirtualGroupsResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeDeviceVirtualGroups", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

IoaClient::DescribeDeviceVirtualGroupsOutcomeCallable IoaClient::DescribeDeviceVirtualGroupsCallable(const DescribeDeviceVirtualGroupsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeDeviceVirtualGroupsOutcome>>();
    DescribeDeviceVirtualGroupsAsync(
    request,
    [prom](
        const IoaClient*,
        const DescribeDeviceVirtualGroupsRequest&,
        DescribeDeviceVirtualGroupsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

IoaClient::DescribeDevicesOutcome IoaClient::DescribeDevices(const DescribeDevicesRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeDevices");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeDevicesResponse rsp = DescribeDevicesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeDevicesOutcome(rsp);
        else
            return DescribeDevicesOutcome(o.GetError());
    }
    else
    {
        return DescribeDevicesOutcome(outcome.GetError());
    }
}

void IoaClient::DescribeDevicesAsync(const DescribeDevicesRequest& request, const DescribeDevicesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeDevicesRequest&;
    using Resp = DescribeDevicesResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeDevices", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

IoaClient::DescribeDevicesOutcomeCallable IoaClient::DescribeDevicesCallable(const DescribeDevicesRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeDevicesOutcome>>();
    DescribeDevicesAsync(
    request,
    [prom](
        const IoaClient*,
        const DescribeDevicesRequest&,
        DescribeDevicesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

IoaClient::DescribeLocalAccountsOutcome IoaClient::DescribeLocalAccounts(const DescribeLocalAccountsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeLocalAccounts");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeLocalAccountsResponse rsp = DescribeLocalAccountsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeLocalAccountsOutcome(rsp);
        else
            return DescribeLocalAccountsOutcome(o.GetError());
    }
    else
    {
        return DescribeLocalAccountsOutcome(outcome.GetError());
    }
}

void IoaClient::DescribeLocalAccountsAsync(const DescribeLocalAccountsRequest& request, const DescribeLocalAccountsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeLocalAccountsRequest&;
    using Resp = DescribeLocalAccountsResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeLocalAccounts", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

IoaClient::DescribeLocalAccountsOutcomeCallable IoaClient::DescribeLocalAccountsCallable(const DescribeLocalAccountsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeLocalAccountsOutcome>>();
    DescribeLocalAccountsAsync(
    request,
    [prom](
        const IoaClient*,
        const DescribeLocalAccountsRequest&,
        DescribeLocalAccountsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

IoaClient::DescribeRootAccountGroupOutcome IoaClient::DescribeRootAccountGroup(const DescribeRootAccountGroupRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeRootAccountGroup");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeRootAccountGroupResponse rsp = DescribeRootAccountGroupResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeRootAccountGroupOutcome(rsp);
        else
            return DescribeRootAccountGroupOutcome(o.GetError());
    }
    else
    {
        return DescribeRootAccountGroupOutcome(outcome.GetError());
    }
}

void IoaClient::DescribeRootAccountGroupAsync(const DescribeRootAccountGroupRequest& request, const DescribeRootAccountGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeRootAccountGroupRequest&;
    using Resp = DescribeRootAccountGroupResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeRootAccountGroup", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

IoaClient::DescribeRootAccountGroupOutcomeCallable IoaClient::DescribeRootAccountGroupCallable(const DescribeRootAccountGroupRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeRootAccountGroupOutcome>>();
    DescribeRootAccountGroupAsync(
    request,
    [prom](
        const IoaClient*,
        const DescribeRootAccountGroupRequest&,
        DescribeRootAccountGroupOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

IoaClient::DescribeSoftCensusListByDeviceOutcome IoaClient::DescribeSoftCensusListByDevice(const DescribeSoftCensusListByDeviceRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeSoftCensusListByDevice");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeSoftCensusListByDeviceResponse rsp = DescribeSoftCensusListByDeviceResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeSoftCensusListByDeviceOutcome(rsp);
        else
            return DescribeSoftCensusListByDeviceOutcome(o.GetError());
    }
    else
    {
        return DescribeSoftCensusListByDeviceOutcome(outcome.GetError());
    }
}

void IoaClient::DescribeSoftCensusListByDeviceAsync(const DescribeSoftCensusListByDeviceRequest& request, const DescribeSoftCensusListByDeviceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeSoftCensusListByDeviceRequest&;
    using Resp = DescribeSoftCensusListByDeviceResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeSoftCensusListByDevice", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

IoaClient::DescribeSoftCensusListByDeviceOutcomeCallable IoaClient::DescribeSoftCensusListByDeviceCallable(const DescribeSoftCensusListByDeviceRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeSoftCensusListByDeviceOutcome>>();
    DescribeSoftCensusListByDeviceAsync(
    request,
    [prom](
        const IoaClient*,
        const DescribeSoftCensusListByDeviceRequest&,
        DescribeSoftCensusListByDeviceOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

IoaClient::DescribeSoftwareInformationOutcome IoaClient::DescribeSoftwareInformation(const DescribeSoftwareInformationRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeSoftwareInformation");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeSoftwareInformationResponse rsp = DescribeSoftwareInformationResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeSoftwareInformationOutcome(rsp);
        else
            return DescribeSoftwareInformationOutcome(o.GetError());
    }
    else
    {
        return DescribeSoftwareInformationOutcome(outcome.GetError());
    }
}

void IoaClient::DescribeSoftwareInformationAsync(const DescribeSoftwareInformationRequest& request, const DescribeSoftwareInformationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeSoftwareInformationRequest&;
    using Resp = DescribeSoftwareInformationResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeSoftwareInformation", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

IoaClient::DescribeSoftwareInformationOutcomeCallable IoaClient::DescribeSoftwareInformationCallable(const DescribeSoftwareInformationRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeSoftwareInformationOutcome>>();
    DescribeSoftwareInformationAsync(
    request,
    [prom](
        const IoaClient*,
        const DescribeSoftwareInformationRequest&,
        DescribeSoftwareInformationOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

IoaClient::DescribeVirtualDevicesOutcome IoaClient::DescribeVirtualDevices(const DescribeVirtualDevicesRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeVirtualDevices");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeVirtualDevicesResponse rsp = DescribeVirtualDevicesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeVirtualDevicesOutcome(rsp);
        else
            return DescribeVirtualDevicesOutcome(o.GetError());
    }
    else
    {
        return DescribeVirtualDevicesOutcome(outcome.GetError());
    }
}

void IoaClient::DescribeVirtualDevicesAsync(const DescribeVirtualDevicesRequest& request, const DescribeVirtualDevicesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeVirtualDevicesRequest&;
    using Resp = DescribeVirtualDevicesResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeVirtualDevices", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

IoaClient::DescribeVirtualDevicesOutcomeCallable IoaClient::DescribeVirtualDevicesCallable(const DescribeVirtualDevicesRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeVirtualDevicesOutcome>>();
    DescribeVirtualDevicesAsync(
    request,
    [prom](
        const IoaClient*,
        const DescribeVirtualDevicesRequest&,
        DescribeVirtualDevicesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

IoaClient::ExportDeviceDownloadTaskOutcome IoaClient::ExportDeviceDownloadTask(const ExportDeviceDownloadTaskRequest &request)
{
    auto outcome = MakeRequest(request, "ExportDeviceDownloadTask");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ExportDeviceDownloadTaskResponse rsp = ExportDeviceDownloadTaskResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ExportDeviceDownloadTaskOutcome(rsp);
        else
            return ExportDeviceDownloadTaskOutcome(o.GetError());
    }
    else
    {
        return ExportDeviceDownloadTaskOutcome(outcome.GetError());
    }
}

void IoaClient::ExportDeviceDownloadTaskAsync(const ExportDeviceDownloadTaskRequest& request, const ExportDeviceDownloadTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ExportDeviceDownloadTaskRequest&;
    using Resp = ExportDeviceDownloadTaskResponse;

    DoRequestAsync<Req, Resp>(
        "ExportDeviceDownloadTask", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

IoaClient::ExportDeviceDownloadTaskOutcomeCallable IoaClient::ExportDeviceDownloadTaskCallable(const ExportDeviceDownloadTaskRequest &request)
{
    const auto prom = std::make_shared<std::promise<ExportDeviceDownloadTaskOutcome>>();
    ExportDeviceDownloadTaskAsync(
    request,
    [prom](
        const IoaClient*,
        const ExportDeviceDownloadTaskRequest&,
        ExportDeviceDownloadTaskOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

IoaClient::ExportSoftwareInformationListOutcome IoaClient::ExportSoftwareInformationList(const ExportSoftwareInformationListRequest &request)
{
    auto outcome = MakeRequest(request, "ExportSoftwareInformationList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ExportSoftwareInformationListResponse rsp = ExportSoftwareInformationListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ExportSoftwareInformationListOutcome(rsp);
        else
            return ExportSoftwareInformationListOutcome(o.GetError());
    }
    else
    {
        return ExportSoftwareInformationListOutcome(outcome.GetError());
    }
}

void IoaClient::ExportSoftwareInformationListAsync(const ExportSoftwareInformationListRequest& request, const ExportSoftwareInformationListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ExportSoftwareInformationListRequest&;
    using Resp = ExportSoftwareInformationListResponse;

    DoRequestAsync<Req, Resp>(
        "ExportSoftwareInformationList", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

IoaClient::ExportSoftwareInformationListOutcomeCallable IoaClient::ExportSoftwareInformationListCallable(const ExportSoftwareInformationListRequest &request)
{
    const auto prom = std::make_shared<std::promise<ExportSoftwareInformationListOutcome>>();
    ExportSoftwareInformationListAsync(
    request,
    [prom](
        const IoaClient*,
        const ExportSoftwareInformationListRequest&,
        ExportSoftwareInformationListOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

IoaClient::ModifyVirtualDeviceGroupsOutcome IoaClient::ModifyVirtualDeviceGroups(const ModifyVirtualDeviceGroupsRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyVirtualDeviceGroups");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyVirtualDeviceGroupsResponse rsp = ModifyVirtualDeviceGroupsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyVirtualDeviceGroupsOutcome(rsp);
        else
            return ModifyVirtualDeviceGroupsOutcome(o.GetError());
    }
    else
    {
        return ModifyVirtualDeviceGroupsOutcome(outcome.GetError());
    }
}

void IoaClient::ModifyVirtualDeviceGroupsAsync(const ModifyVirtualDeviceGroupsRequest& request, const ModifyVirtualDeviceGroupsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyVirtualDeviceGroupsRequest&;
    using Resp = ModifyVirtualDeviceGroupsResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyVirtualDeviceGroups", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

IoaClient::ModifyVirtualDeviceGroupsOutcomeCallable IoaClient::ModifyVirtualDeviceGroupsCallable(const ModifyVirtualDeviceGroupsRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyVirtualDeviceGroupsOutcome>>();
    ModifyVirtualDeviceGroupsAsync(
    request,
    [prom](
        const IoaClient*,
        const ModifyVirtualDeviceGroupsRequest&,
        ModifyVirtualDeviceGroupsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

