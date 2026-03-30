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

#include <tencentcloud/monitor/v20230616/MonitorClient.h>
#include <tencentcloud/core/Executor.h>
#include <tencentcloud/core/Runnable.h>

using namespace TencentCloud;
using namespace TencentCloud::Monitor::V20230616;
using namespace TencentCloud::Monitor::V20230616::Model;
using namespace std;

namespace
{
    const string VERSION = "2023-06-16";
    const string ENDPOINT = "monitor.tencentcloudapi.com";
}

MonitorClient::MonitorClient(const Credential &credential, const string &region) :
    MonitorClient(credential, region, ClientProfile())
{
}

MonitorClient::MonitorClient(const Credential &credential, const string &region, const ClientProfile &profile) :
    AbstractClient(ENDPOINT, VERSION, credential, region, profile)
{
}


MonitorClient::CreateNoticeContentTmplOutcome MonitorClient::CreateNoticeContentTmpl(const CreateNoticeContentTmplRequest &request)
{
    auto outcome = MakeRequest(request, "CreateNoticeContentTmpl");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateNoticeContentTmplResponse rsp = CreateNoticeContentTmplResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateNoticeContentTmplOutcome(rsp);
        else
            return CreateNoticeContentTmplOutcome(o.GetError());
    }
    else
    {
        return CreateNoticeContentTmplOutcome(outcome.GetError());
    }
}

void MonitorClient::CreateNoticeContentTmplAsync(const CreateNoticeContentTmplRequest& request, const CreateNoticeContentTmplAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateNoticeContentTmplRequest&;
    using Resp = CreateNoticeContentTmplResponse;

    DoRequestAsync<Req, Resp>(
        "CreateNoticeContentTmpl", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

MonitorClient::CreateNoticeContentTmplOutcomeCallable MonitorClient::CreateNoticeContentTmplCallable(const CreateNoticeContentTmplRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateNoticeContentTmplOutcome>>();
    CreateNoticeContentTmplAsync(
    request,
    [prom](
        const MonitorClient*,
        const CreateNoticeContentTmplRequest&,
        CreateNoticeContentTmplOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

MonitorClient::DeleteNoticeContentTmplsOutcome MonitorClient::DeleteNoticeContentTmpls(const DeleteNoticeContentTmplsRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteNoticeContentTmpls");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteNoticeContentTmplsResponse rsp = DeleteNoticeContentTmplsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteNoticeContentTmplsOutcome(rsp);
        else
            return DeleteNoticeContentTmplsOutcome(o.GetError());
    }
    else
    {
        return DeleteNoticeContentTmplsOutcome(outcome.GetError());
    }
}

void MonitorClient::DeleteNoticeContentTmplsAsync(const DeleteNoticeContentTmplsRequest& request, const DeleteNoticeContentTmplsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteNoticeContentTmplsRequest&;
    using Resp = DeleteNoticeContentTmplsResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteNoticeContentTmpls", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

MonitorClient::DeleteNoticeContentTmplsOutcomeCallable MonitorClient::DeleteNoticeContentTmplsCallable(const DeleteNoticeContentTmplsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteNoticeContentTmplsOutcome>>();
    DeleteNoticeContentTmplsAsync(
    request,
    [prom](
        const MonitorClient*,
        const DeleteNoticeContentTmplsRequest&,
        DeleteNoticeContentTmplsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

MonitorClient::DescribeAIWorkbenchSREDigitalTwinTaskListOutcome MonitorClient::DescribeAIWorkbenchSREDigitalTwinTaskList(const DescribeAIWorkbenchSREDigitalTwinTaskListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeAIWorkbenchSREDigitalTwinTaskList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeAIWorkbenchSREDigitalTwinTaskListResponse rsp = DescribeAIWorkbenchSREDigitalTwinTaskListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeAIWorkbenchSREDigitalTwinTaskListOutcome(rsp);
        else
            return DescribeAIWorkbenchSREDigitalTwinTaskListOutcome(o.GetError());
    }
    else
    {
        return DescribeAIWorkbenchSREDigitalTwinTaskListOutcome(outcome.GetError());
    }
}

void MonitorClient::DescribeAIWorkbenchSREDigitalTwinTaskListAsync(const DescribeAIWorkbenchSREDigitalTwinTaskListRequest& request, const DescribeAIWorkbenchSREDigitalTwinTaskListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeAIWorkbenchSREDigitalTwinTaskListRequest&;
    using Resp = DescribeAIWorkbenchSREDigitalTwinTaskListResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeAIWorkbenchSREDigitalTwinTaskList", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

MonitorClient::DescribeAIWorkbenchSREDigitalTwinTaskListOutcomeCallable MonitorClient::DescribeAIWorkbenchSREDigitalTwinTaskListCallable(const DescribeAIWorkbenchSREDigitalTwinTaskListRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeAIWorkbenchSREDigitalTwinTaskListOutcome>>();
    DescribeAIWorkbenchSREDigitalTwinTaskListAsync(
    request,
    [prom](
        const MonitorClient*,
        const DescribeAIWorkbenchSREDigitalTwinTaskListRequest&,
        DescribeAIWorkbenchSREDigitalTwinTaskListOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

MonitorClient::DescribeAIWorkbenchSREDigitalTwinWorkLogDetailOutcome MonitorClient::DescribeAIWorkbenchSREDigitalTwinWorkLogDetail(const DescribeAIWorkbenchSREDigitalTwinWorkLogDetailRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeAIWorkbenchSREDigitalTwinWorkLogDetail");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeAIWorkbenchSREDigitalTwinWorkLogDetailResponse rsp = DescribeAIWorkbenchSREDigitalTwinWorkLogDetailResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeAIWorkbenchSREDigitalTwinWorkLogDetailOutcome(rsp);
        else
            return DescribeAIWorkbenchSREDigitalTwinWorkLogDetailOutcome(o.GetError());
    }
    else
    {
        return DescribeAIWorkbenchSREDigitalTwinWorkLogDetailOutcome(outcome.GetError());
    }
}

void MonitorClient::DescribeAIWorkbenchSREDigitalTwinWorkLogDetailAsync(const DescribeAIWorkbenchSREDigitalTwinWorkLogDetailRequest& request, const DescribeAIWorkbenchSREDigitalTwinWorkLogDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeAIWorkbenchSREDigitalTwinWorkLogDetailRequest&;
    using Resp = DescribeAIWorkbenchSREDigitalTwinWorkLogDetailResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeAIWorkbenchSREDigitalTwinWorkLogDetail", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

MonitorClient::DescribeAIWorkbenchSREDigitalTwinWorkLogDetailOutcomeCallable MonitorClient::DescribeAIWorkbenchSREDigitalTwinWorkLogDetailCallable(const DescribeAIWorkbenchSREDigitalTwinWorkLogDetailRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeAIWorkbenchSREDigitalTwinWorkLogDetailOutcome>>();
    DescribeAIWorkbenchSREDigitalTwinWorkLogDetailAsync(
    request,
    [prom](
        const MonitorClient*,
        const DescribeAIWorkbenchSREDigitalTwinWorkLogDetailRequest&,
        DescribeAIWorkbenchSREDigitalTwinWorkLogDetailOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

MonitorClient::DescribeAIWorkbenchSREDigitalTwinWorkLogListOutcome MonitorClient::DescribeAIWorkbenchSREDigitalTwinWorkLogList(const DescribeAIWorkbenchSREDigitalTwinWorkLogListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeAIWorkbenchSREDigitalTwinWorkLogList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeAIWorkbenchSREDigitalTwinWorkLogListResponse rsp = DescribeAIWorkbenchSREDigitalTwinWorkLogListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeAIWorkbenchSREDigitalTwinWorkLogListOutcome(rsp);
        else
            return DescribeAIWorkbenchSREDigitalTwinWorkLogListOutcome(o.GetError());
    }
    else
    {
        return DescribeAIWorkbenchSREDigitalTwinWorkLogListOutcome(outcome.GetError());
    }
}

void MonitorClient::DescribeAIWorkbenchSREDigitalTwinWorkLogListAsync(const DescribeAIWorkbenchSREDigitalTwinWorkLogListRequest& request, const DescribeAIWorkbenchSREDigitalTwinWorkLogListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeAIWorkbenchSREDigitalTwinWorkLogListRequest&;
    using Resp = DescribeAIWorkbenchSREDigitalTwinWorkLogListResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeAIWorkbenchSREDigitalTwinWorkLogList", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

MonitorClient::DescribeAIWorkbenchSREDigitalTwinWorkLogListOutcomeCallable MonitorClient::DescribeAIWorkbenchSREDigitalTwinWorkLogListCallable(const DescribeAIWorkbenchSREDigitalTwinWorkLogListRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeAIWorkbenchSREDigitalTwinWorkLogListOutcome>>();
    DescribeAIWorkbenchSREDigitalTwinWorkLogListAsync(
    request,
    [prom](
        const MonitorClient*,
        const DescribeAIWorkbenchSREDigitalTwinWorkLogListRequest&,
        DescribeAIWorkbenchSREDigitalTwinWorkLogListOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

MonitorClient::DescribeAlarmNotifyHistoriesOutcome MonitorClient::DescribeAlarmNotifyHistories(const DescribeAlarmNotifyHistoriesRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeAlarmNotifyHistories");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeAlarmNotifyHistoriesResponse rsp = DescribeAlarmNotifyHistoriesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeAlarmNotifyHistoriesOutcome(rsp);
        else
            return DescribeAlarmNotifyHistoriesOutcome(o.GetError());
    }
    else
    {
        return DescribeAlarmNotifyHistoriesOutcome(outcome.GetError());
    }
}

void MonitorClient::DescribeAlarmNotifyHistoriesAsync(const DescribeAlarmNotifyHistoriesRequest& request, const DescribeAlarmNotifyHistoriesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeAlarmNotifyHistoriesRequest&;
    using Resp = DescribeAlarmNotifyHistoriesResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeAlarmNotifyHistories", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

MonitorClient::DescribeAlarmNotifyHistoriesOutcomeCallable MonitorClient::DescribeAlarmNotifyHistoriesCallable(const DescribeAlarmNotifyHistoriesRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeAlarmNotifyHistoriesOutcome>>();
    DescribeAlarmNotifyHistoriesAsync(
    request,
    [prom](
        const MonitorClient*,
        const DescribeAlarmNotifyHistoriesRequest&,
        DescribeAlarmNotifyHistoriesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

MonitorClient::DescribeNoticeContentTmplOutcome MonitorClient::DescribeNoticeContentTmpl(const DescribeNoticeContentTmplRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeNoticeContentTmpl");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeNoticeContentTmplResponse rsp = DescribeNoticeContentTmplResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeNoticeContentTmplOutcome(rsp);
        else
            return DescribeNoticeContentTmplOutcome(o.GetError());
    }
    else
    {
        return DescribeNoticeContentTmplOutcome(outcome.GetError());
    }
}

void MonitorClient::DescribeNoticeContentTmplAsync(const DescribeNoticeContentTmplRequest& request, const DescribeNoticeContentTmplAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeNoticeContentTmplRequest&;
    using Resp = DescribeNoticeContentTmplResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeNoticeContentTmpl", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

MonitorClient::DescribeNoticeContentTmplOutcomeCallable MonitorClient::DescribeNoticeContentTmplCallable(const DescribeNoticeContentTmplRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeNoticeContentTmplOutcome>>();
    DescribeNoticeContentTmplAsync(
    request,
    [prom](
        const MonitorClient*,
        const DescribeNoticeContentTmplRequest&,
        DescribeNoticeContentTmplOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

MonitorClient::ModifyNoticeContentTmplOutcome MonitorClient::ModifyNoticeContentTmpl(const ModifyNoticeContentTmplRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyNoticeContentTmpl");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyNoticeContentTmplResponse rsp = ModifyNoticeContentTmplResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyNoticeContentTmplOutcome(rsp);
        else
            return ModifyNoticeContentTmplOutcome(o.GetError());
    }
    else
    {
        return ModifyNoticeContentTmplOutcome(outcome.GetError());
    }
}

void MonitorClient::ModifyNoticeContentTmplAsync(const ModifyNoticeContentTmplRequest& request, const ModifyNoticeContentTmplAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyNoticeContentTmplRequest&;
    using Resp = ModifyNoticeContentTmplResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyNoticeContentTmpl", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

MonitorClient::ModifyNoticeContentTmplOutcomeCallable MonitorClient::ModifyNoticeContentTmplCallable(const ModifyNoticeContentTmplRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyNoticeContentTmplOutcome>>();
    ModifyNoticeContentTmplAsync(
    request,
    [prom](
        const MonitorClient*,
        const ModifyNoticeContentTmplRequest&,
        ModifyNoticeContentTmplOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

MonitorClient::TriggerAIWorkbenchSREDigitalTwinTaskOutcome MonitorClient::TriggerAIWorkbenchSREDigitalTwinTask(const TriggerAIWorkbenchSREDigitalTwinTaskRequest &request)
{
    auto outcome = MakeRequest(request, "TriggerAIWorkbenchSREDigitalTwinTask");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        TriggerAIWorkbenchSREDigitalTwinTaskResponse rsp = TriggerAIWorkbenchSREDigitalTwinTaskResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return TriggerAIWorkbenchSREDigitalTwinTaskOutcome(rsp);
        else
            return TriggerAIWorkbenchSREDigitalTwinTaskOutcome(o.GetError());
    }
    else
    {
        return TriggerAIWorkbenchSREDigitalTwinTaskOutcome(outcome.GetError());
    }
}

void MonitorClient::TriggerAIWorkbenchSREDigitalTwinTaskAsync(const TriggerAIWorkbenchSREDigitalTwinTaskRequest& request, const TriggerAIWorkbenchSREDigitalTwinTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const TriggerAIWorkbenchSREDigitalTwinTaskRequest&;
    using Resp = TriggerAIWorkbenchSREDigitalTwinTaskResponse;

    DoRequestAsync<Req, Resp>(
        "TriggerAIWorkbenchSREDigitalTwinTask", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

MonitorClient::TriggerAIWorkbenchSREDigitalTwinTaskOutcomeCallable MonitorClient::TriggerAIWorkbenchSREDigitalTwinTaskCallable(const TriggerAIWorkbenchSREDigitalTwinTaskRequest &request)
{
    const auto prom = std::make_shared<std::promise<TriggerAIWorkbenchSREDigitalTwinTaskOutcome>>();
    TriggerAIWorkbenchSREDigitalTwinTaskAsync(
    request,
    [prom](
        const MonitorClient*,
        const TriggerAIWorkbenchSREDigitalTwinTaskRequest&,
        TriggerAIWorkbenchSREDigitalTwinTaskOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

